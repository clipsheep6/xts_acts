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

#include "oh_audio_render_unit_test.h"

using namespace testing::ext;

namespace OHOS {
namespace AudioStandard {

void OHAudioRenderUnitTest::SetUpTestCase(void) { }

void OHAudioRenderUnitTest::TearDownTestCase(void) { }

void OHAudioRenderUnitTest::SetUp(void) { }

void OHAudioRenderUnitTest::TearDown(void) { }

OH_AudioStreamBuilder* OHAudioRenderUnitTest::CreateRenderBuilder()
{
    OH_AudioStreamBuilder* builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_RERNDERER;
    OH_AudioStreamBuilder_Create(&builder, type);
    return builder;
}

/**
* @tc.name  : Test OH_AudioStreamBuilder_GenerateRenderer API via legal state.
* @tc.number: OH_Audio_Capture_Generate_001
* @tc.desc  : Test OH_AudioStreamBuilder_GenerateRenderer interface. Returns true, if the result is successful.
*/
HWTEST(OHAudioRenderUnitTest, OH_Audio_Render_Generate_001, TestSize.Level0)
{
    OH_AudioStreamBuilder* builder = OHAudioRenderUnitTest::CreateRenderBuilder();

    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    EXPECT_TRUE(result == AUDIOSTREAM_SUCCESS);

    OH_AudioStreamBuilder_Destroy(builder);
}

/**
* @tc.name  : Test OH_AudioStreamBuilder_GenerateRenderer API via illegal OH_AudioStream_Type.
* @tc.number: OH_Audio_Render_Generate_002
* @tc.desc  : Test OH_AudioStreamBuilder_GenerateRenderer interface. Returns error code, if the stream type is
*             AUDIOSTREAM_TYPE_CAPTURER.
*/
HWTEST(OHAudioRenderUnitTest, OH_Audio_Render_Generate_002, TestSize.Level0)
{
    OH_AudioStreamBuilder* builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_CAPTURER;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_Create(&builder, type);
    EXPECT_TRUE(result == AUDIOSTREAM_SUCCESS);

    OH_AudioRenderer* audioRenderer;
    result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    EXPECT_TRUE(result == AUDIOSTREAM_ERROR_INVALID_PARAM);
}

/**
* @tc.name  : Test OH_AudioRenderer_Start API via legal state.
* @tc.number: Audio_Capturer_Start_001
* @tc.desc  : Test OH_AudioRenderer_Start interface. Returns true if start is successful.
*/
HWTEST(OHAudioRenderUnitTest, OH_Audio_Render_Start_001, TestSize.Level0)
{
    OH_AudioStreamBuilder* builder = OHAudioRenderUnitTest::CreateRenderBuilder();

    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);

    result = OH_AudioRenderer_Start(audioRenderer);
    EXPECT_TRUE(result == AUDIOSTREAM_SUCCESS);

    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
}

/**
* @tc.name  : Test OH_AudioRenderer_Start API via illegal state.
* @tc.number: Audio_Capturer_Start_002
* @tc.desc  : Test OH_AudioRenderer_Start interface. Returns error code, if Start interface is called twice.
*/
HWTEST(OHAudioRenderUnitTest, OH_Audio_Render_Start_002, TestSize.Level0)
{
    OH_AudioStreamBuilder* builder = OHAudioRenderUnitTest::CreateRenderBuilder();

    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);

    result = OH_AudioRenderer_Start(audioRenderer);

    result = OH_AudioRenderer_Start(audioRenderer);
    EXPECT_TRUE(result == AUDIOSTREAM_ERROR_ILLEGAL_STATE);

    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
}

/**
* @tc.name  : Test OH_AudioRenderer_Pause API via legal state.
* @tc.number: OH_Audio_Render_Pause_001
* @tc.desc  : Test OH_AudioRenderer_Pause interface. Returns true if Pause is successful.
*/
HWTEST(OHAudioRenderUnitTest, OH_Audio_Render_Pause_001, TestSize.Level0)
{
    OH_AudioStreamBuilder* builder = OHAudioRenderUnitTest::CreateRenderBuilder();

    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    result = OH_AudioRenderer_Start(audioRenderer);

    result = OH_AudioRenderer_Pause(audioRenderer);
    EXPECT_TRUE(result == AUDIOSTREAM_SUCCESS);

    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
}

/**
* @tc.name  : Test OH_AudioRenderer_Pause API via illegal state, Pause without Start first.
* @tc.number: OH_Audio_Render_Pause_002
* @tc.desc  : Test OH_AudioRenderer_Pause interface. Returns error code, if Pause without Start first.
*/
HWTEST(OHAudioRenderUnitTest, OH_Audio_Render_Pause_002, TestSize.Level0)
{
    OH_AudioStreamBuilder* builder = OHAudioRenderUnitTest::CreateRenderBuilder();

    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);

    result = OH_AudioRenderer_Pause(audioRenderer);
    EXPECT_TRUE(result == AUDIOSTREAM_ERROR_ILLEGAL_STATE);

    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
}

/**
* @tc.name  : Test OH_AudioRenderer_Stop API via legal state.
* @tc.number: OH_Audio_Render_Stop_001
* @tc.desc  : Test OH_AudioRenderer_Stop interface. Returns true if Stop is successful.
*/
HWTEST(OHAudioRenderUnitTest, OH_Audio_Render_Stop_001, TestSize.Level0)
{
    OH_AudioStreamBuilder* builder = OHAudioRenderUnitTest::CreateRenderBuilder();

    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    result = OH_AudioRenderer_Start(audioRenderer);

    result = OH_AudioRenderer_Stop(audioRenderer);
    EXPECT_TRUE(result == AUDIOSTREAM_SUCCESS);

    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
}

/**
* @tc.name  : Test OH_AudioRenderer_Stop API via illegal state, Stop without Start first.
* @tc.number: OH_Audio_Render_Stop_002
* @tc.desc  : Test OH_AudioRenderer_Stop interface. Returns error code, if Stop without Start first.
*/
HWTEST(OHAudioRenderUnitTest, OH_Audio_Render_Stop_002, TestSize.Level0)
{
    OH_AudioStreamBuilder* builder = OHAudioRenderUnitTest::CreateRenderBuilder();

    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);

    result = OH_AudioRenderer_Stop(audioRenderer);
    EXPECT_TRUE(result == AUDIOSTREAM_ERROR_ILLEGAL_STATE);

    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
}

/**
* @tc.name  : Test OH_AudioRenderer_Flush API via legal state.
* @tc.number: OH_Audio_Render_Flush_001
* @tc.desc  : Test OH_AudioRenderer_Flush interface. Returns true if Flush is successful.
*/
HWTEST(OHAudioRenderUnitTest, OH_Audio_Render_Flush_001, TestSize.Level0)
{
    OH_AudioStreamBuilder* builder = OHAudioRenderUnitTest::CreateRenderBuilder();

    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    result = OH_AudioRenderer_Start(audioRenderer);

    result = OH_AudioRenderer_Flush(audioRenderer);
    EXPECT_TRUE(result == AUDIOSTREAM_SUCCESS);

    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
}

/**
* @tc.name  : Test OH_AudioRenderer_Flush API via illegal state.
* @tc.number: OH_Audio_Render_Flush_002
* @tc.desc  : Test OH_AudioRenderer_Flush interface. Returns error code, if Flush without Start first.
*/
HWTEST(OHAudioRenderUnitTest, OH_Audio_Render_Flush_002, TestSize.Level0)
{
    OH_AudioStreamBuilder* builder = OHAudioRenderUnitTest::CreateRenderBuilder();

    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);

    result = OH_AudioRenderer_Flush(audioRenderer);
    EXPECT_TRUE(result == AUDIOSTREAM_ERROR_ILLEGAL_STATE);

    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
}

/**
* @tc.name  : Test OH_AudioRenderer_Release API via legal state.
* @tc.number: OH_Audio_Render_Release_001
* @tc.desc  : Test OH_AudioRenderer_Release interface. Returns true if Release is successful.
*/
HWTEST(OHAudioRenderUnitTest, OH_Audio_Render_Release_001, TestSize.Level0)
{
    OH_AudioStreamBuilder* builder = OHAudioRenderUnitTest::CreateRenderBuilder();

    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    result = OH_AudioRenderer_Start(audioRenderer);

    result = OH_AudioRenderer_Release(audioRenderer);
    EXPECT_TRUE(result == AUDIOSTREAM_SUCCESS);

    OH_AudioStreamBuilder_Destroy(builder);
}

/**
* @tc.name  : Test OH_AudioRenderer_GetLatencyMode API via legal state.
* @tc.number: OH_Audio_Render_GetParameter_001
* @tc.desc  : Test OH_AudioRenderer_GetLatencyMode interface. Returns true if latencyMode is
*             AUDIOSTREAM_LATENCY_MODE_NORMAL,because default latency mode is AUDIOSTREAM_LATENCY_MODE_NORMAL.
*/
HWTEST(OHAudioRenderUnitTest, OH_Audio_Render_GetParameter_001, TestSize.Level0)
{
    OH_AudioStreamBuilder* builder = OHAudioRenderUnitTest::CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);

    OH_AudioStream_LatencyMode latencyMode = AUDIOSTREAM_LATENCY_MODE_NORMAL;
    result = OH_AudioRenderer_GetLatencyMode(audioRenderer, &latencyMode);
    EXPECT_TRUE(result == AUDIOSTREAM_SUCCESS);
    EXPECT_TRUE(latencyMode == AUDIOSTREAM_LATENCY_MODE_NORMAL);
    OH_AudioStreamBuilder_Destroy(builder);
}

/**
* @tc.name  : Test OH_AudioRenderer_GetLatencyMode API via legal state.
* @tc.number: OH_Audio_Render_GetParameter_002
* @tc.desc  : Test OH_AudioRenderer_GetLatencyMode interface. Returns true if latencyMode is
*             AUDIOSTREAM_LATENCY_MODE_NORMAL,because default latency mode is AUDIOSTREAM_LATENCY_MODE_NORMAL.
*/
HWTEST(OHAudioRenderUnitTest, OH_Audio_Render_GetParameter_002, TestSize.Level0)
{
    OH_AudioStreamBuilder* builder = OHAudioRenderUnitTest::CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);

    uint32_t streamId;
    result = OH_AudioRenderer_GetStreamId(audioRenderer, &streamId);
    EXPECT_TRUE(result == AUDIOSTREAM_SUCCESS);
    OH_AudioStreamBuilder_Destroy(builder);
}
} // namespace AudioStandard
} // namespace OHOS
