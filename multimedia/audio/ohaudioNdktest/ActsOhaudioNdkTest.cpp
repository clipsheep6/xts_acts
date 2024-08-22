/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <mutex>
#include <chrono>
#include <thread>
#include "ActsOhaudioNdkTest.h"

using namespace std::chrono;
using namespace testing::ext;

namespace OHOS {
namespace AudioStandard {

static int32_t AudioRendererOnWriteData(OH_AudioRenderer* renderer,
    void* userData,
    void* buffer,
    int32_t bufferLen)
{
    OHAudioRendererWriteCallbackMock *mockPtr = static_cast<OHAudioRendererWriteCallbackMock*>(userData);
    mockPtr->OnWriteData(renderer, userData, buffer, bufferLen);

    return 0;
}

// 自定义写入数据函数
int32_t MyOnWriteData(
    OH_AudioRenderer* renderer,
    void* userData,
    void* buffer,
    int32_t length)
{
    // 将待播放的数据，按length长度写入buffer
    return 0;
}
// 自定义音频流事件函数
int32_t MyOnStreamEvent(
    OH_AudioRenderer* renderer,
    void* userData,
    OH_AudioStream_Event event)
{
    // 根据event表示的音频流事件信息，更新播放器状态和界面
    return 0;
}
// 自定义音频中断事件函数
int32_t MyOnInterruptEvent(
    OH_AudioRenderer* renderer,
    void* userData,
    OH_AudioInterrupt_ForceType type,
    OH_AudioInterrupt_Hint hint)
{
    // 根据type和hint表示的音频中断信息，更新播放器状态和界面
    return 0;
}
// 自定义异常回调函数
int32_t MyOnError(
    OH_AudioRenderer* renderer,
    void* userData,
    OH_AudioStream_Result error)
{
    // 根据error表示的音频异常信息，做出相应的处理
    return 0;
}

void ActsOhAudioNdkTest::SetUpTestCase(void) { }

void ActsOhAudioNdkTest::TearDownTestCase(void) { }

void ActsOhAudioNdkTest::SetUp(void) { }

void ActsOhAudioNdkTest::TearDown(void) { }

OH_AudioStreamBuilder* ActsOhAudioNdkTest::CreateRenderBuilder()
{
    OH_AudioStreamBuilder* builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_RENDERER;
    OH_AudioStreamBuilder_Create(&builder, type);
    return builder;
}

/**
* @tc.name  : Test OH_AudioRenderer_GetUnderflowCount API.
* @tc.number: SUM_MULTIMEDIA_AUDIO_OH_AudioRenderer_GetUnderflowCount_0100
* @tc.desc  : Test OH_AudioRenderer_GetUnderflowCount interface.
*/
HWTEST(ActsOhAudioNdkTest, SUM_MULTIMEDIA_AUDIO_OH_AudioRenderer_GetUnderflowCount_0100, TestSize.Level0)
{
    OH_AudioStreamBuilder* builder = ActsOhAudioNdkTest::CreateRenderBuilder();

    OH_AudioStreamBuilder_SetSamplingRate(builder, SAMPLE_RATE_48000);
    OH_AudioStreamBuilder_SetChannelCount(builder, CHANNEL_2);
    OH_AudioStream_Usage usage = AUDIOSTREAM_USAGE_VOICE_COMMUNICATION;
    OH_AudioStreamBuilder_SetRendererInfo(builder, usage);

    OHAudioRendererWriteCallbackMock writeCallbackMock;

    OH_AudioRenderer_Callbacks callbacks;
    callbacks.OH_AudioRenderer_OnWriteData = AudioRendererOnWriteData;
    callbacks.OH_AudioRenderer_OnStreamEvent = MyOnStreamEvent;
    callbacks.OH_AudioRenderer_OnInterruptEvent = MyOnInterruptEvent;
    callbacks.OH_AudioRenderer_OnError = MyOnError;
    OH_AudioStreamBuilder_SetRendererCallback(builder, callbacks, &writeCallbackMock);

    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    EXPECT_EQ(result, AUDIOSTREAM_SUCCESS);

    std::mutex mutex;
    std::condition_variable cv;
    int32_t count = 0;
    writeCallbackMock.Install([&count, &mutex, &cv](OH_AudioRenderer* renderer, void* userData,
        void* buffer,
        int32_t bufferLen) {
            std::lock_guard lock(mutex);
            cv.notify_one();
            // only execute twice
            if (count > 1) {
                return;
            }
            // sleep time trigger underflow
            if (count == 1) {
                std::this_thread::sleep_for(200ms);
            }
            count++;
        });

    result = OH_AudioRenderer_Start(audioRenderer);
    EXPECT_EQ(result, AUDIOSTREAM_SUCCESS);

    std::unique_lock lock(mutex);
    cv.wait_for(lock, 1s, [&count] {
        // count > 1 ensure sleeped
        return count > 1;
    });
    lock.unlock();

    uint32_t underFlowCount;
    result = OH_AudioRenderer_GetUnderflowCount(audioRenderer, &underFlowCount);
    EXPECT_EQ(result, AUDIOSTREAM_SUCCESS);
    EXPECT_GE(underFlowCount, 0);

    OH_AudioRenderer_Stop(audioRenderer);
    OH_AudioRenderer_Release(audioRenderer);

    OH_AudioStreamBuilder_Destroy(builder);
}
} // namespace AudioStandard
} // namespace OHOS