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

#include "ActsScreenCaptureNdkTest.h"
#include "native_avscreen_capture_errors.h"

using namespace OHOS;
using namespace OHOS::Media;
using namespace testing::ext;
using namespace std;
using namespace OHOS::Media::ScreenCaptureNdkTestParam;
namespace OHOS {
namespace Media {
void ScreenCaptureNdkPerformanceTestCallback::OnError(int32_t errorCode)
{
    cout << "Error received, errorCode:" << errorCode << endl;
}

void ScreenCaptureNdkPerformanceTestCallback::OnAudioBufferAvailable(bool isReady, OH_AudioCaptureSourceType type)
{
    if (isReady == true) {
        OH_AudioBuffer *audioBuffer = (OH_AudioBuffer *)malloc(sizeof(OH_AudioBuffer));
        if (audioBuffer == nullptr) {
            cout << "audio buffer is nullptr" << endl;
        }
        std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
        auto startTime = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
        int32_t ret = screenCapture_->AcquireAudioBuffer(&audioBuffer, type);
        now = std::chrono::system_clock::now();
        auto endTime = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
        if (ret == AV_SCREEN_CAPTURE_ERR_OK) {
            if (audioBuffer == nullptr) {
                cout << "AcquireAudioBuffer failed, audio buffer empty" << endl;
            }
        }
        free(audioBuffer->buf);
        audioBuffer->buf = nullptr;
        free(audioBuffer);
        audioBuffer = nullptr;
        screenCapture_->ReleaseAudioBuffer(type);
        screenCapture_->SetACount(aIndex);
        aIndex++;
        aTotalTime += endTime - startTime;
        screenCapture_->SetATotalTime(aTotalTime);
    } else {
        cout << "AcquireAudioBuffer failed" << endl;
    }
}

void ScreenCaptureNdkPerformanceTestCallback::OnVideoBufferAvailable(bool isReady)
{
    if (isReady == true) {
        int32_t fence = 0;
        int64_t timestamp = 0;
        OHOS::Rect damage;
        std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
        auto startTime = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
        sptr<OHOS::SurfaceBuffer> surfacebuffer = screenCapture_->AcquireVideoBuffer(fence, timestamp, damage);
        now = std::chrono::system_clock::now();
        auto endTime = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
        if (surfacebuffer != nullptr) {
            screenCapture_->ReleaseVideoBuffer();
            screenCapture_->SetVCount(vIndex);
            vIndex++;
            vTotalTime += endTime - startTime;
            screenCapture_->SetVTotalTime(vTotalTime);
        } else {
            cout << "AcquireVideoBuffer failed" << endl;
        }
    }
}

void ActsScreenCaptureNdkPerformanceTest::SetUpTestCase(void)
{
    system("param set debug.media_service.histreamer 0");
}

void ActsScreenCaptureNdkPerformanceTest::TearDownTestCase(void)
{
    system("param set debug.media_service.histreamer 0");
}

void ActsScreenCaptureNdkPerformanceTest::SetUp(void)
{
    screenCapture_ = ScreenCaptureNdkFactory::CreateScreenCapture();
    ASSERT_NE(nullptr, screenCapture_);
}

void ActsScreenCaptureNdkPerformanceTest::TearDown(void)
{
    screenCapture_->Release();
}

/**
 * @tc.number    : SUB_MULTIMEDIA_MEDIA_SCREEN_CAPTURE_PERFORMANCE_0100
 * @tc.name      : Init performance test
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsScreenCaptureNdkPerformanceTest, SUB_MULTIMEDIA_MEDIA_SCREEN_CAPTURE_PERFORMANCE_0100, TestSize.Level1)
{
    OH_AVScreenCaptureConfig config_;
    screenCapture_->SetConfig(config_);
    bool isMicrophone = true;
    screenCapture_->SetMicrophoneEnabled(isMicrophone);
    int32_t index_ = 1000;
    std::chrono::system_clock::time_point now;
    int32_t totalTime = 0;
    while (index_) {
        now = std::chrono::system_clock::now();
        auto startTime = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
        screenCapture_->Init(config_);
        now = std::chrono::system_clock::now();
        auto endTime = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
        totalTime += endTime - startTime;
        index_--;
    }
    float averageTime = static_cast<float>(totalTime) / 1000.0;
    cout << "averageTime/Init: " << averageTime << "ms" << endl;
}

/**
 * @tc.number    : SUB_MULTIMEDIA_MEDIA_SCREEN_CAPTURE_PERFORMANCE_0200
 * @tc.name      : StartScreenCapture performance test
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsScreenCaptureNdkPerformanceTest, SUB_MULTIMEDIA_MEDIA_SCREEN_CAPTURE_PERFORMANCE_0200, TestSize.Level1)
{
    OH_AVScreenCaptureConfig config_;
    screenCapture_->SetConfig(config_);
    bool isMicrophone = true;
    screenCapture_->SetMicrophoneEnabled(isMicrophone);
    int32_t index_ = 1000;
    std::chrono::system_clock::time_point now;
    int32_t totalTime = 0;
    screenCapture_->Init(config_);
    while (index_) {
        now = std::chrono::system_clock::now();
        auto startTime = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
        screenCapture_->StartScreenCapture();
        now = std::chrono::system_clock::now();
        auto endTime = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
        screenCapture_->StopScreenCapture();
        totalTime += endTime - startTime;
        index_--;
    }
    float averageTime = static_cast<float>(totalTime) / 1000.0;
    cout << "averageTime/StartScreenCapture: " << averageTime << "ms" << endl;
}

/**
 * @tc.number    : SUB_MULTIMEDIA_MEDIA_SCREEN_CAPTURE_PERFORMANCE_0300
 * @tc.name      : StopScreenCapture performance test
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsScreenCaptureNdkPerformanceTest, SUB_MULTIMEDIA_MEDIA_SCREEN_CAPTURE_PERFORMANCE_0300, TestSize.Level1)
{
    OH_AVScreenCaptureConfig config_;
    screenCapture_->SetConfig(config_);
    bool isMicrophone = true;
    screenCapture_->SetMicrophoneEnabled(isMicrophone);
    int32_t index_ = 1000;
    std::chrono::system_clock::time_point now;
    int32_t totalTime = 0;
    screenCapture_->Init(config_);
    while (index_) {
        screenCapture_->StartScreenCapture();
        now = std::chrono::system_clock::now();
        auto startTime = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
        screenCapture_->StopScreenCapture();
        now = std::chrono::system_clock::now();
        auto endTime = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
        totalTime += endTime - startTime;
        index_--;
    }
    float averageTime = static_cast<float>(totalTime) / 1000.0;
    cout << "averageTime/StopScreenCapture: " << averageTime << "ms" << endl;
}

/**
 * @tc.number    : SUB_MULTIMEDIA_MEDIA_SCREEN_CAPTURE_PERFORMANCE_0400
 * @tc.name      : SetScreenCaptureCallback-AcquireAudioBuffer/AcquireVideoBuffer performance test
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsScreenCaptureNdkPerformanceTest, SUB_MULTIMEDIA_MEDIA_SCREEN_CAPTURE_PERFORMANCE_0400, TestSize.Level1)
{
    OH_AVScreenCaptureConfig config_;
    screenCapture_->SetConfig(config_);
    screenCaptureCb_ = std::make_shared<ScreenCaptureNdkPerformanceTestCallback>(screenCapture_);
    ASSERT_NE(nullptr, screenCaptureCb_);

    bool isMicrophone = true;
    screenCapture_->SetMicrophoneEnabled(isMicrophone);
    ASSERT_EQ(AV_SCREEN_CAPTURE_ERR_OK, screenCapture_->SetScreenCaptureCallback(screenCaptureCb_));
    ASSERT_EQ(AV_SCREEN_CAPTURE_ERR_OK, screenCapture_->Init(config_));
    ASSERT_EQ(AV_SCREEN_CAPTURE_ERR_OK, screenCapture_->StartScreenCapture());
    sleep(10);
    int32_t index = screenCapture_->GetACount();
    int32_t totalTime = screenCapture_->GetATotalTime();
    float averageTime = static_cast<float>(totalTime) / static_cast<float>(index);
    cout << "averageTime/SetScreenCaptureCallback-AcquireAudioBuffer: " << averageTime << "ms" << endl;
    index = screenCapture_->GetVCount();
    totalTime = screenCapture_->GetVTotalTime();
    averageTime = static_cast<float>(totalTime) / static_cast<float>(index);
    cout << "averageTime/SetScreenCaptureCallback-AcquireVideoBuffer: " << averageTime << "ms" << endl;
    ASSERT_EQ(AV_SCREEN_CAPTURE_ERR_OK, screenCapture_->StopScreenCapture());
    ASSERT_EQ(AV_SCREEN_CAPTURE_ERR_OK, screenCapture_->Release());
}

} // namespace Media
} // namespace OHOS
