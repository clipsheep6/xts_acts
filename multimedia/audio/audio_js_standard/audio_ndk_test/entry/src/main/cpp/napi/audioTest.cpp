/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

#include <string>
#include <stdio.h>
#include "napi/native_api.h"
#include "native_audiocapturer.h"
#include "native_audiorenderer.h"
#include "native_audiostream_base.h"
#include "native_audiostreambuilder.h"
#include "unistd.h"

#define LOG(cond, fmt, ...)           \
    if (!(cond)) {                                  \
        (void)printf(fmt, ##__VA_ARGS__);           \
    }

const int32_t g_samplingRate = 48000; // 48000:g_samplingRate value
const int32_t g_channelCount = 2; // 2:g_channelCount value
const int32_t g_latencyMode = 0;
const int32_t g_sampleFormat = 1;
const int32_t g_frameSize = 240; // 240:g_frameSize value
bool g_flag = false;
bool g_mark = false;

static napi_value CreateAudioStreamBuilder(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_CAPTURER;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_Create(&builder, type);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}
OH_AudioStreamBuilder *CreateCapturerBuilder()
{
    OH_AudioStreamBuilder *builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_CAPTURER;
    OH_AudioStreamBuilder_Create(&builder, type);
    return builder;
}


static napi_value AudioCaptureGenerate(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();

    OH_AudioCapturer *audioCapturer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);

    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureGenerateErr(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_RENDERER;
    OH_AudioStreamBuilder_Create(&builder, type);

    OH_AudioCapturer *audioCapturer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);

    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureStart(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);

    OH_AudioStream_Result result = OH_AudioCapturer_Start(audioCapturer);

    OH_AudioCapturer_Release(audioCapturer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureStartErr(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);
    OH_AudioCapturer_Start(audioCapturer);
    OH_AudioStream_Result result = OH_AudioCapturer_Start(audioCapturer);

    OH_AudioCapturer_Release(audioCapturer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCapturePause(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);
    OH_AudioCapturer_Start(audioCapturer);
    OH_AudioStream_Result result = OH_AudioCapturer_Pause(audioCapturer);
    OH_AudioCapturer_Release(audioCapturer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioCapturePauseErr(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);
    OH_AudioStream_Result result = OH_AudioCapturer_Pause(audioCapturer);
    OH_AudioCapturer_Release(audioCapturer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureStop(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);
    OH_AudioCapturer_Start(audioCapturer);
    OH_AudioStream_Result result = OH_AudioCapturer_Stop(audioCapturer);
    OH_AudioCapturer_Release(audioCapturer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureStopErr(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);
    OH_AudioStream_Result result = OH_AudioCapturer_Stop(audioCapturer);
    OH_AudioCapturer_Release(audioCapturer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureFlush(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);
    OH_AudioCapturer_Start(audioCapturer);
    OH_AudioStream_Result result = OH_AudioCapturer_Flush(audioCapturer);
    OH_AudioCapturer_Release(audioCapturer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioCaptureFlushErr(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);
    OH_AudioStream_Result result = OH_AudioCapturer_Flush(audioCapturer);
    OH_AudioCapturer_Release(audioCapturer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureRelease(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);
    OH_AudioCapturer_Start(audioCapturer);
    OH_AudioStream_Result result = OH_AudioCapturer_Release(audioCapturer);
    OH_AudioCapturer_Release(audioCapturer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureReleaseErr(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);
    OH_AudioCapturer_Release(audioCapturer);
    OH_AudioStream_Result result = OH_AudioCapturer_Release(audioCapturer);
    OH_AudioCapturer_Release(audioCapturer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureGetParameter(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);

    OH_AudioStream_LatencyMode latencyMode = AUDIOSTREAM_LATENCY_MODE_NORMAL;
    OH_AudioStream_Result result = OH_AudioCapturer_GetLatencyMode(audioCapturer, &latencyMode);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureGetCurrentState(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);

    OH_AudioStream_State state;
    OH_AudioStream_Result result = OH_AudioCapturer_GetCurrentState(audioCapturer, &state);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureGetStreamId(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);

    uint32_t streamId;
    OH_AudioStream_Result result = OH_AudioCapturer_GetStreamId(audioCapturer, &streamId);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureGetSamplingRate(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);

    int32_t rate;
    OH_AudioStream_Result result = OH_AudioCapturer_GetSamplingRate(audioCapturer, &rate);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureGetSampleFormat(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);

    OH_AudioStream_SampleFormat sampleFormat;
    OH_AudioStream_Result result = OH_AudioCapturer_GetSampleFormat(audioCapturer, &sampleFormat);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureGetEncodingType(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);

    OH_AudioStream_EncodingType encodingType;
    OH_AudioStream_Result result = OH_AudioCapturer_GetEncodingType(audioCapturer, &encodingType);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureGetCapturerInfo(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);

    OH_AudioStream_SourceType sourceType;
    OH_AudioStream_Result result = OH_AudioCapturer_GetCapturerInfo(audioCapturer, &sourceType);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureGetTimestamp(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);
    OH_AudioCapturer_Start(audioCapturer);

    usleep(30000);
    int64_t  framePosition;
    int64_t  timestamp;
    OH_AudioStream_Result result = OH_AudioCapturer_GetTimestamp(audioCapturer, CLOCK_MONOTONIC, &framePosition, &timestamp);
    OH_AudioCapturer_Stop(audioCapturer);
    OH_AudioCapturer_Release(audioCapturer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureGetFramesRead(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);

    int64_t  frames;
    OH_AudioStream_Result result = OH_AudioCapturer_GetFramesRead(audioCapturer, &frames);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureGetFrameSizeInCallback(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);

    int32_t  frameSize;
    OH_AudioStream_Result result = OH_AudioCapturer_GetFrameSizeInCallback(audioCapturer, &frameSize);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


OH_AudioStreamBuilder *CreateRenderBuilder()
{
    OH_AudioStreamBuilder *builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_RENDERER;
    OH_AudioStreamBuilder_Create(&builder, type);
    return builder;
}

static napi_value AudioRendererSetSpeed(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float speed = 2;
    OH_AudioStream_Result result = OH_AudioRenderer_SetSpeed(audioRenderer,speed);

    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRendererGetSpeed(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float speed;
    OH_AudioStream_Result result = OH_AudioRenderer_GetSpeed(audioRenderer,&speed);

    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRendererSetGetSpeed(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float setSpeed = 1.5;
    OH_AudioRenderer_SetSpeed(audioRenderer,setSpeed);
    float getSpeed;
    OH_AudioRenderer_GetSpeed(audioRenderer,&getSpeed);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_double(env, getSpeed, &res);
    return res;
}

static void AudioRendererDeviceChangeCb(OH_AudioRenderer* renderer, void* userData,
    OH_AudioStream_DeviceChangeReason reason)
{}

static napi_value AudioSetRendererOutputDeviceChangeCallback(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_RENDERER;
    OH_AudioStreamBuilder_Create(&builder, type);

    OH_AudioRenderer_OutputDeviceChangeCallback deviceChangeCb = AudioRendererDeviceChangeCb;
    
    OH_AudioStream_Result result = OH_AudioStreamBuilder_SetRendererOutputDeviceChangeCallback(builder, deviceChangeCb, NULL);

    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderGetFramesWritten(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    int64_t frames;
    OH_AudioStream_Result result = OH_AudioRenderer_GetFramesWritten(audioRenderer, &frames);

    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderGetTimestamp(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioRenderer_Start(audioRenderer);

    usleep(30000);
    int64_t framePosition;
    int64_t  timestamp;
    OH_AudioStream_Result result = OH_AudioRenderer_GetTimestamp(audioRenderer, CLOCK_MONOTONIC, &framePosition, &timestamp);
    OH_AudioRenderer_Stop(audioRenderer);
    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderGetFrameSizeInCallback(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    int32_t  frameSize;
    OH_AudioStream_Result result = OH_AudioRenderer_GetFrameSizeInCallback(audioRenderer, &frameSize);

    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderGenerate(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);

    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderGenerateErr(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_CAPTURER;
    OH_AudioStreamBuilder_Create(&builder, type);

    OH_AudioRenderer *audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);

    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderStart(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioStream_Result result = OH_AudioRenderer_Start(audioRenderer);
    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioRenderStartErr(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioRenderer_Start(audioRenderer);
    OH_AudioStream_Result result = OH_AudioRenderer_Start(audioRenderer);
    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderPause(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioRenderer_Start(audioRenderer);
    OH_AudioStream_Result result = OH_AudioRenderer_Pause(audioRenderer);
    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderPauseErr(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioStream_Result result = OH_AudioRenderer_Pause(audioRenderer);
    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderStop(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioRenderer_Start(audioRenderer);
    OH_AudioStream_Result result = OH_AudioRenderer_Stop(audioRenderer);
    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderStopErr(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioStream_Result result = OH_AudioRenderer_Stop(audioRenderer);
    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderFlush(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioRenderer_Start(audioRenderer);
    OH_AudioStream_Result result = OH_AudioRenderer_Flush(audioRenderer);
    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioRenderFlushErr(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioStream_Result result = OH_AudioRenderer_Flush(audioRenderer);
    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderRelease(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioRenderer_Start(audioRenderer);
    OH_AudioStream_Result result = OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioRenderReleaseErr(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStream_Result result = OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderGetCurrentState(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioStream_State state;
    OH_AudioStream_Result result = OH_AudioRenderer_GetCurrentState(audioRenderer, &state);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioRenderGetParameter(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioStream_LatencyMode latencyMode = AUDIOSTREAM_LATENCY_MODE_NORMAL;
    OH_AudioStream_Result result = OH_AudioRenderer_GetLatencyMode(audioRenderer, &latencyMode);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioRenderGetStreamId(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);

    uint32_t streamId;
    OH_AudioStream_Result result = OH_AudioRenderer_GetStreamId(audioRenderer, &streamId);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderGetSamplingRate(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    int32_t rate;
    OH_AudioStream_Result result = OH_AudioRenderer_GetSamplingRate(audioRenderer, &rate);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioRenderGetSampleFormat(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioStream_SampleFormat sampleFormat;
    OH_AudioStream_Result result = OH_AudioRenderer_GetSampleFormat(audioRenderer, &sampleFormat);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioRenderGetEncodingType(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioStream_EncodingType encodingType;
    OH_AudioStream_Result result = OH_AudioRenderer_GetEncodingType(audioRenderer, &encodingType);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderGetRendererInfo(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    OH_AudioStream_Usage usage;
    OH_AudioStream_Result result = OH_AudioRenderer_GetRendererInfo(audioRenderer, &usage);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioStreamBuilderSetSamplingRate(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_CAPTURER;
    OH_AudioStreamBuilder_Create(&builder, type);
    int32_t samplingRate = 48000;
    OH_AudioStreamBuilder_SetSamplingRate(builder, samplingRate);
    OH_AudioStream_Result result = OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioStreamBuilderSetChannelCount(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_CAPTURER;
    OH_AudioStreamBuilder_Create(&builder, type);
    int32_t channelCount = 1;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_SetChannelCount(builder, channelCount);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioStreamBuilderSetSampleFormat(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_CAPTURER;
    OH_AudioStreamBuilder_Create(&builder, type);
    OH_AudioStream_SampleFormat format = AUDIOSTREAM_SAMPLE_U8;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_SetSampleFormat(builder, format);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioStreamBuilderSetEncodingType(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_CAPTURER;
    OH_AudioStreamBuilder_Create(&builder, type);
    OH_AudioStream_EncodingType encodingType = AUDIOSTREAM_ENCODING_TYPE_RAW;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_SetEncodingType(builder, encodingType);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioStreamBuilderSetLatencyMode(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_CAPTURER;
    OH_AudioStreamBuilder_Create(&builder, type);

    OH_AudioStream_LatencyMode latencyMode = AUDIOSTREAM_LATENCY_MODE_NORMAL;
    OH_AudioStreamBuilder_SetLatencyMode(builder, latencyMode);

    OH_AudioStream_Result result = OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioStreamBuilderSetRendererInfo(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_RENDERER;
    OH_AudioStreamBuilder_Create(&builder, type);
    OH_AudioStream_Usage usage = AUDIOSTREAM_USAGE_MUSIC;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_SetRendererInfo(builder, usage);

    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


static napi_value AudioStreamBuilderSetCapturerInfo(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_CAPTURER;
    OH_AudioStreamBuilder_Create(&builder, type);
    OH_AudioStream_SourceType sourceType = AUDIOSTREAM_SOURCE_TYPE_MIC;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_SetCapturerInfo(builder, sourceType);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static int32_t AudioRendererOnWriteData(OH_AudioRenderer* capturer,
    void* userData,
    void* buffer,
    int32_t bufferLen)
{
    return 0;
}
static napi_value AudioStreamBuilderSetRendererCallback(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_RENDERER;
    OH_AudioStreamBuilder_Create(&builder, type);
    OH_AudioRenderer_Callbacks callbacks;
    callbacks.OH_AudioRenderer_OnWriteData = AudioRendererOnWriteData;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_SetRendererCallback(builder, callbacks, NULL);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static int32_t AudioCapturerOnReadData(
    OH_AudioCapturer* capturer,
    void* userData,
    void* buffer,
    int32_t bufferLen)
{
    return 0;
}
static napi_value AudioStreamBuilderSetCapturerCallback(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_CAPTURER;
    OH_AudioStreamBuilder_Create(&builder, type);

    OH_AudioCapturer_Callbacks callbacks;
    callbacks.OH_AudioCapturer_OnReadData = AudioCapturerOnReadData;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_SetCapturerCallback(builder, callbacks, NULL);

    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioCaptureGetChannelCount(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateCapturerBuilder();
    OH_AudioCapturer *audioCapturer;
    OH_AudioStreamBuilder_GenerateCapturer(builder, &audioCapturer);

    int32_t ChannelCount;
    OH_AudioStream_Result result = OH_AudioCapturer_GetChannelCount(audioCapturer, &ChannelCount);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioRenderGetChannelCount(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);

    int32_t ChannelCount;
    OH_AudioStream_Result result = OH_AudioRenderer_GetChannelCount(audioRenderer, &ChannelCount);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static napi_value AudioStreamBuilderSetFrameSizeInCallback(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_RENDERER;
    OH_AudioStreamBuilder_Create(&builder, type);
    int32_t framesize = 960;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_SetFrameSizeInCallback(builder, framesize);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Render_GetVolume_001: result AUDIOSTREAM_ERROR_INVALID_PARAM(1).
static napi_value AudioRendererGetVolume_01(napi_env env, napi_callback_info info)
{
    OH_AudioRenderer* audioRenderer = nullptr;
    float volume;
    OH_AudioStream_Result result = OH_AudioRenderer_GetVolume(audioRenderer, &volume);
    LOG(false, "OH_AudioRenderer_GetVolume, volumeGet is %f, result %d", volume, result);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Render_GetVolume_002: Test OH_Audio_Render_GetVolume interface .
static napi_value AudioRendererGetVolume_02(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float volumeGet;
    result = OH_AudioRenderer_GetVolume(audioRenderer, &volumeGet);
    LOG(false, "OH_AudioRenderer_GetVolume, volumeGet is %f, result %d", volumeGet, result);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_double(env, volumeGet, &res);
    return res;
}

// OH_AudioRenderer_SetVolume_001: Test OH_AudioRenderer_SetVolume interface for maximum volumes.
static napi_value AudioRendererSetVolume_01(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float volumeSet = 1.0;
    result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_SetVolume 1.0, result is %d", result);
    float volumeGet;
    result = OH_AudioRenderer_GetVolume(audioRenderer, &volumeGet);
    LOG(false, "OH_AudioRenderer_GetVolume, volumeGet is %f, %d", volumeGet, result);
    OH_AudioStreamBuilder_Destroy(builder);

    napi_value res;
    napi_create_double(env, volumeGet, &res);
    return res;
}

// OH_AudioRenderer_SetVolume_002: Test OH_AudioRenderer_SetVolume interface for minimum volumes.
static napi_value AudioRendererSetVolume_02(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float volumeSet = 0.0;
    result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_SetVolume 0.0, result is %d", result);
    float volumeGet;
    result = OH_AudioRenderer_GetVolume(audioRenderer, &volumeGet);
    LOG(false, "OH_AudioRenderer_GetVolume, volumeGet is %f, %d", volumeGet, result);
    OH_AudioStreamBuilder_Destroy(builder);

    napi_value res;
    napi_create_double(env, volumeGet, &res);
    return res;
}

// OH_AudioRenderer_SetVolume_003: Test OH_AudioRenderer_SetVolume interface for twice with different volumes.
static napi_value AudioRendererSetVolume_03(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float volumeSet = 0.3;
    result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_SetVolume 0.3, result is %d", result);
    volumeSet = 0.8;
    result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_SetVolume 0.8, result is %d", result);
    float volumeGet;
    result = OH_AudioRenderer_GetVolume(audioRenderer, &volumeGet);
    LOG(false, "OH_AudioRenderer_GetVolume, volumeGet is %f, %d", volumeGet, result);
    OH_AudioStreamBuilder_Destroy(builder);

    napi_value res;
    napi_create_double(env, volumeGet, &res);
    return res;
}

// OH_AudioRenderer_SetVolume_004: Test OH_AudioRenderer_SetVolume interface with out of range values.
static napi_value AudioRendererSetVolume_04(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float volumeSet = -1.0;
    result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_SetVolume -1.0 result is %f, %d", volumeSet, result);
    OH_AudioStreamBuilder_Destroy(builder);

    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_AudioRenderer_SetVolume_005: Test OH_AudioRenderer_SetVolume interface with out of range values.
static napi_value AudioRendererSetVolume_05(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float volumeSet = 1.5;
    result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_SetVolume 1.5 result is %f, %d", volumeSet, result);
    OH_AudioStreamBuilder_Destroy(builder);

    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_AudioRenderer_SetVolume_006: result is AUDIOSTREAM_ERROR_INVALID_PARAM(1).
static napi_value AudioRendererSetVolume_06(napi_env env, napi_callback_info info)
{
    OH_AudioRenderer* audioRenderer = nullptr;
    float volumeSet = 0.5;
    OH_AudioStream_Result result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_GetVolume, volumeGet is %f, %d", volumeSet, result);

    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Render_SetVolumeWithRamp_001: Test OH_Audio_Render_SetVolumeWithRamp interface.
static napi_value AudioRendererSetVolumeWithRamp_01(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float volumeSet = 0.0;
    result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_SetVolume 0.0 result is %d", result);
    int32_t durationMs = 1000;
    volumeSet = 1.0;
    result = OH_AudioRenderer_SetVolumeWithRamp(audioRenderer, volumeSet, durationMs);
    LOG(false, "OH_AudioRenderer_SetVolumeWithRamp 0.0->1.0 1000 result is %d", result);
    OH_AudioStreamBuilder_Destroy(builder);

    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Render_SetVolumeWithRamp_002: Test OH_Audio_Render_SetVolumeWithRamp interface.
static napi_value AudioRendererSetVolumeWithRamp_02(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float volumeSet = 1.0;
    result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_SetVolume 1.0 result is %d", result);
    int32_t durationMs = 100;
    volumeSet = 0.0;
    result = OH_AudioRenderer_SetVolumeWithRamp(audioRenderer, volumeSet, durationMs);
    LOG(false, "OH_AudioRenderer_SetVolumeWithRamp 1.0->0.0 100 result is %f, %d", volumeSet, result);
    OH_AudioStreamBuilder_Destroy(builder);

    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Render_SetVolumeWithRamp_003: Test OH_Audio_Render_SetVolumeWithRamp interface.
static napi_value AudioRendererSetVolumeWithRamp_03(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float volumeSet = 0.0;
    result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_SetVolume 0.0 result is %d", result);
    int32_t durationMs = 10;
    volumeSet = 0.5;
    result = OH_AudioRenderer_SetVolumeWithRamp(audioRenderer, volumeSet, durationMs);
    LOG(false, "OH_AudioRenderer_SetVolumeWithRamp 0.0->0.5 10 result is %d", result);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Render_SetVolumeWithRamp_004: Test OH_Audio_Render_SetVolumeWithRamp interface.
static napi_value AudioRendererSetVolumeWithRamp_04(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float volumeSet = 1.0;
    result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_SetVolume 1.0 result is %d", result);
    int32_t durationMs = 10;
    volumeSet = 0.5;
    result = OH_AudioRenderer_SetVolumeWithRamp(audioRenderer, volumeSet, durationMs);
    LOG(false, "OH_AudioRenderer_SetVolumeWithRamp 1.0->0.5 10 result is %d", result);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Render_SetVolumeWithRamp_005: Test OH_Audio_Render_SetVolumeWithRamp interface.
static napi_value AudioRendererSetVolumeWithRamp_05(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float volumeSet = 0.0;
    result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_SetVolume 0.0 result is %d", result);
    int32_t durationMs = 10;
    volumeSet = 0.0;
    result = OH_AudioRenderer_SetVolumeWithRamp(audioRenderer, volumeSet, durationMs);
    LOG(false, "OH_AudioRenderer_SetVolumeWithRamp 0.0->0.0 10 result is %d", result);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Render_SetVolumeWithRamp_006: Test OH_Audio_Render_SetVolumeWithRamp interface.
static napi_value AudioRendererSetVolumeWithRamp_06(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float volumeSet = 1.0;
    result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_SetVolume 1.0 result is %d", result);
    int32_t durationMs = 10;
    volumeSet = 1.0;
    result = OH_AudioRenderer_SetVolumeWithRamp(audioRenderer, volumeSet, durationMs);
    LOG(false, "OH_AudioRenderer_SetVolumeWithRamp 1.0->1.0 10 result is %d", result);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Render_SetVolumeWithRamp_007: Test OH_Audio_Render_SetVolumeWithRamp interface Err.
static napi_value AudioRendererSetVolumeWithRamp_07(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float volumeSet = 1.0;
    result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_SetVolume 1.0 result is %d", result);
    int32_t durationMs = 100;
    volumeSet = 1.2;
    result = OH_AudioRenderer_SetVolumeWithRamp(audioRenderer, volumeSet, durationMs);
    LOG(false, "OH_AudioRenderer_SetVolumeWithRamp 1.0->1.2 100 result is %d", result);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Render_SetVolumeWithRamp_008: Test OH_Audio_Render_SetVolumeWithRamp interface Err.
static napi_value AudioRendererSetVolumeWithRamp_08(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    float volumeSet = 0.0;
    result = OH_AudioRenderer_SetVolume(audioRenderer, volumeSet);
    LOG(false, "OH_AudioRenderer_SetVolume 0.0 result is %d", result);
    int32_t durationMs = 100;
    volumeSet = -0.2;
    result = OH_AudioRenderer_SetVolumeWithRamp(audioRenderer, volumeSet, durationMs);
    LOG(false, "OH_AudioRenderer_SetVolumeWithRamp 0.0->-0.2 100 result is %d", result);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Render_SetVolumeWithRamp_009: result is AUDIOSTREAM_ERROR_INVALID_PARAM(1).
static napi_value AudioRendererSetVolumeWithRamp_09(napi_env env, napi_callback_info info)
{
    OH_AudioRenderer* audioRenderer = nullptr;
    float volumeSet = 0.5;
    int32_t durationMs = 10;
    OH_AudioStream_Result result = OH_AudioRenderer_SetVolumeWithRamp(audioRenderer, volumeSet, durationMs);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static void AudioRendererOnMarkReachedCb(OH_AudioRenderer* renderer, uint32_t samplePos, void* userData)
{
    g_flag = true;
    printf("AudioRendererOnMarkReachedCb samplePos: %d \n", samplePos);
}

// OH_Audio_Renderer_SetMarkPosition_001: result is AUDIOSTREAM_SUCCESS(0).(0)
static napi_value AudioRendererSetOnMarkReached_01(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    uint32_t samplePos = 1;
    OH_AudioRenderer_OnMarkReachedCallback callback = AudioRendererOnMarkReachedCb;
    result = OH_AudioRenderer_SetMarkPosition(audioRenderer, samplePos, callback, nullptr);
    LOG(false, "OH_Audio_Renderer_SetOnMarkReached_01 result is: %d", result);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Renderer_SetMarkPosition_002: result is AUDIOSTREAM_ERROR_INVALID_PARAM(1)
static napi_value AudioRendererSetOnMarkReached_02(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioRenderer *audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    uint32_t samplePos = 0;
    OH_AudioRenderer_OnMarkReachedCallback callback = AudioRendererOnMarkReachedCb;
    result = OH_AudioRenderer_SetMarkPosition(audioRenderer, samplePos, callback, nullptr);
    LOG(false, "OH_Audio_Renderer_SetOnMarkReached_02 result is: %d", result);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Render_SetMarkPosition_003: result is AUDIOSTREAM_SUCCESS(0).
static napi_value AudioRendererSetOnMarkReached_03(napi_env env, napi_callback_info info)
{
    g_flag = false;
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioStreamBuilder_SetSamplingRate(builder, g_samplingRate);
    OH_AudioStreamBuilder_SetChannelCount(builder, g_channelCount);
    OH_AudioStreamBuilder_SetLatencyMode(builder, (OH_AudioStream_LatencyMode)g_latencyMode);
    OH_AudioStreamBuilder_SetSampleFormat(builder, (OH_AudioStream_SampleFormat)g_sampleFormat);
    OH_AudioRenderer_Callbacks callbacks;
    callbacks.OH_AudioRenderer_OnWriteData = AudioRendererOnWriteData;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_SetRendererCallback(builder, callbacks, nullptr);
    // set buffer size to g_frameSize
    OH_AudioStreamBuilder_SetFrameSizeInCallback(builder, g_frameSize);

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    uint32_t samplePos = 1;
    OH_AudioRenderer_OnMarkReachedCallback callback = AudioRendererOnMarkReachedCb;
    result = OH_AudioRenderer_SetMarkPosition(audioRenderer, samplePos, callback, nullptr);
    LOG(false, "OH_Audio_Renderer_SetOnMarkReached_03 result is: %d", result);
    OH_AudioRenderer_Start(audioRenderer);
    sleep(2);
    OH_AudioRenderer_Stop(audioRenderer);
    if (!g_flag) {
        result = AUDIOSTREAM_ERROR_SYSTEM;
    }
    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Renderer_SetMarkPosition_004: result is AUDIOSTREAM_ERROR_INVALID_PARAM(1)
static napi_value AudioRendererSetOnMarkReached_04(napi_env env, napi_callback_info info)
{
    OH_AudioRenderer* audioRenderer = nullptr;
    uint32_t samplePos = 1;
    OH_AudioRenderer_OnMarkReachedCallback callback = AudioRendererOnMarkReachedCb;
    OH_AudioStream_Result result = OH_AudioRenderer_SetMarkPosition(audioRenderer, samplePos, callback, nullptr);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

//OH_AudioRenderer_CancelMark_001: result is AUDIOSTREAM_SUCCESS(0).
static napi_value AudioRendererCancelMark_01(napi_env env, napi_callback_info info)
{
    g_flag = false;
    OH_AudioStreamBuilder *builder = CreateRenderBuilder();

    OH_AudioStreamBuilder_SetSamplingRate(builder, g_samplingRate);
    OH_AudioStreamBuilder_SetChannelCount(builder, g_channelCount);
    OH_AudioStreamBuilder_SetLatencyMode(builder, (OH_AudioStream_LatencyMode)g_latencyMode);
    OH_AudioStreamBuilder_SetSampleFormat(builder, (OH_AudioStream_SampleFormat)g_sampleFormat);
    OH_AudioRenderer_Callbacks callbacks;
    callbacks.OH_AudioRenderer_OnWriteData = AudioRendererOnWriteData;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_SetRendererCallback(builder, callbacks, nullptr);
    // set buffer size to g_frameSize
    result = OH_AudioStreamBuilder_SetFrameSizeInCallback(builder, g_frameSize);

    OH_AudioRenderer *audioRenderer;
    OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    uint32_t samplePos = 1;
    OH_AudioRenderer_OnMarkReachedCallback callback = AudioRendererOnMarkReachedCb;
    result = OH_AudioRenderer_SetMarkPosition(audioRenderer, samplePos, callback, nullptr);
    LOG(false, "OH_Audio_Renderer_SetOnMarkReached_03 result is: %d", result);
    result = OH_AudioRenderer_Start(audioRenderer);
    sleep(2);
    // CancelMark
    result = OH_AudioRenderer_CancelMark(audioRenderer);
    LOG(false, "OH_AudioRenderer_CancelMark result is %d", result);
    OH_AudioRenderer_Stop(audioRenderer);
    if (!g_flag) {
        result = AUDIOSTREAM_ERROR_SYSTEM;
    }
    OH_AudioRenderer_Release(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

//OH_AudioRenderer_CancelMark_002: result is AUDIOSTREAM_SUCCESS(0).
static napi_value AudioRendererCancelMark_02(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = CreateRenderBuilder();
    OH_AudioRenderer* audioRenderer;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_GenerateRenderer(builder, &audioRenderer);
    result = OH_AudioRenderer_CancelMark(audioRenderer);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

//OH_AudioRenderer_CancelMark_003: result is AUDIOSTREAM_ERROR_INVALID_PARAM(1).
static napi_value AudioRendererCancelMark_03(napi_env env, napi_callback_info info)
{
    OH_AudioRenderer* audioRenderer = nullptr;
    OH_AudioStream_Result result = OH_AudioRenderer_CancelMark(audioRenderer);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

static int32_t AudioRendererInterruptEvent(OH_AudioRenderer* renderer,
            void* userData,
            OH_AudioInterrupt_ForceType type,
            OH_AudioInterrupt_Hint hint)
{
    g_mark = true;
    printf("AudioRendererInterruptEvent type = %d, hint = %d\n", type, hint);
    return 0;
}

// OH_Audio_Render_SetInterruptMode_001: result is AUDIOSTREAM_SUCCESS(0).
static napi_value AudioRendererSetInterruptMode_01(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder1;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_RENDERER;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_Create(&builder1, type);

    OH_AudioStreamBuilder* builder2;
    result = OH_AudioStreamBuilder_Create(&builder2, type);

    // 2. set builder1 builder2 params
    OH_AudioStreamBuilder_SetSamplingRate(builder1, g_samplingRate);
    OH_AudioStreamBuilder_SetChannelCount(builder1, g_channelCount);
    OH_AudioStreamBuilder_SetLatencyMode(builder1, (OH_AudioStream_LatencyMode)g_latencyMode);
    OH_AudioStreamBuilder_SetSampleFormat(builder1, (OH_AudioStream_SampleFormat)g_sampleFormat);
    OH_AudioRenderer_Callbacks callbacks;
    callbacks.OH_AudioRenderer_OnWriteData = AudioRendererOnWriteData;
    callbacks.OH_AudioRenderer_OnInterruptEvent = AudioRendererInterruptEvent;
    result = OH_AudioStreamBuilder_SetRendererCallback(builder1, callbacks, nullptr);
    result = OH_AudioStreamBuilder_SetFrameSizeInCallback(builder1, g_frameSize);

    OH_AudioStreamBuilder_SetSamplingRate(builder2, g_samplingRate);
    OH_AudioStreamBuilder_SetChannelCount(builder2, g_channelCount);
    OH_AudioStreamBuilder_SetLatencyMode(builder2, (OH_AudioStream_LatencyMode)g_latencyMode);
    OH_AudioStreamBuilder_SetSampleFormat(builder2, (OH_AudioStream_SampleFormat)g_sampleFormat);
    result = OH_AudioStreamBuilder_SetRendererCallback(builder2, callbacks, nullptr);
    result = OH_AudioStreamBuilder_SetFrameSizeInCallback(builder2, g_frameSize);

    OH_AudioInterrupt_Mode mode = AUDIOSTREAM_INTERRUPT_MODE_SHARE;
    result = OH_AudioStreamBuilder_SetRendererInterruptMode(builder1, mode);
    result = OH_AudioStreamBuilder_SetRendererInterruptMode(builder2, mode);

    // 3. create audioRenderer1 audioRenderer2
    OH_AudioRenderer* audioRenderer1;
    result = OH_AudioStreamBuilder_GenerateRenderer(builder1, &audioRenderer1);

    OH_AudioRenderer* audioRenderer2;
    result = OH_AudioStreamBuilder_GenerateRenderer(builder2, &audioRenderer2);

    // 4. start
    result = OH_AudioRenderer_Start(audioRenderer1);
    sleep(1);
    result = OH_AudioRenderer_Start(audioRenderer2);

    // 5. stop and release client
    OH_AudioRenderer_Stop(audioRenderer2);
    OH_AudioRenderer_Release(audioRenderer2);

    OH_AudioRenderer_Stop(audioRenderer1);
    OH_AudioRenderer_Release(audioRenderer1);

    result = OH_AudioStreamBuilder_Destroy(builder2);
    result = OH_AudioStreamBuilder_Destroy(builder1);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Render_SetInterruptMode_002: result is AUDIOSTREAM_SUCCESS(0).
static napi_value AudioRendererSetInterruptMode_02(napi_env env, napi_callback_info info)
{
    g_mark = false;
    // 1. create builder1 builder2
    OH_AudioStreamBuilder* builder1;
    OH_AudioStream_Type type = AUDIOSTREAM_TYPE_RENDERER;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_Create(&builder1, type);

    // 2. set builder1 builder2 params
    OH_AudioStreamBuilder_SetSamplingRate(builder1, g_samplingRate);
    OH_AudioStreamBuilder_SetChannelCount(builder1, g_channelCount);
    OH_AudioStreamBuilder_SetLatencyMode(builder1, (OH_AudioStream_LatencyMode)g_latencyMode);
    OH_AudioStreamBuilder_SetSampleFormat(builder1, (OH_AudioStream_SampleFormat)g_sampleFormat);

    OH_AudioRenderer_Callbacks callbacks;
    callbacks.OH_AudioRenderer_OnWriteData = AudioRendererOnWriteData;
    callbacks.OH_AudioRenderer_OnInterruptEvent = AudioRendererInterruptEvent;
    result = OH_AudioStreamBuilder_SetRendererCallback(builder1, callbacks, nullptr);
    result = OH_AudioStreamBuilder_SetFrameSizeInCallback(builder1, g_frameSize);

    OH_AudioStreamBuilder_SetSamplingRate(builder1, g_samplingRate);
    OH_AudioStreamBuilder_SetChannelCount(builder1, g_channelCount);
    OH_AudioStreamBuilder_SetLatencyMode(builder1, (OH_AudioStream_LatencyMode)g_latencyMode);
    OH_AudioStreamBuilder_SetSampleFormat(builder1, (OH_AudioStream_SampleFormat)g_sampleFormat);
    result = OH_AudioStreamBuilder_SetRendererCallback(builder1, callbacks, nullptr);
    result = OH_AudioStreamBuilder_SetFrameSizeInCallback(builder1, g_frameSize);

    OH_AudioInterrupt_Mode mode = AUDIOSTREAM_INTERRUPT_MODE_INDEPENDENT;
    result = OH_AudioStreamBuilder_SetRendererInterruptMode(builder1, mode);
    result = OH_AudioStreamBuilder_SetRendererInterruptMode(builder1, mode);

    // 3. create audioRenderer1 audioRenderer2
    OH_AudioRenderer* audioRenderer1;
    result = OH_AudioStreamBuilder_GenerateRenderer(builder1, &audioRenderer1);

    OH_AudioRenderer* audioRenderer2;
    result = OH_AudioStreamBuilder_GenerateRenderer(builder1, &audioRenderer2);

    // 4. start
    result = OH_AudioRenderer_Start(audioRenderer1);
    sleep(1);
    result = OH_AudioRenderer_Start(audioRenderer2);
    sleep(2);

    if (!g_mark) {
        result = AUDIOSTREAM_ERROR_SYSTEM;
    }

    // 5. stop and release client
    OH_AudioRenderer_Stop(audioRenderer2);
    OH_AudioRenderer_Release(audioRenderer2);

    OH_AudioRenderer_Stop(audioRenderer1);
    OH_AudioRenderer_Release(audioRenderer1);

    result = OH_AudioStreamBuilder_Destroy(builder1);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Audio_Render_SetInterruptMode_003: result is AUDIOSTREAM_ERROR_INVALID_PARAM(1).
static napi_value AudioRendererSetInterruptMode_03(napi_env env, napi_callback_info info)
{
    OH_AudioStreamBuilder* builder = nullptr;
    OH_AudioInterrupt_Mode mode = AUDIOSTREAM_INTERRUPT_MODE_SHARE;
    OH_AudioStream_Result result = OH_AudioStreamBuilder_SetRendererInterruptMode(builder, mode);
    LOG(false, "OH_AudioRenderer_SetInterruptMode_01, result is: %d", result);
    OH_AudioStreamBuilder_Destroy(builder);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        {"createAudioStreamBuilder", nullptr, CreateAudioStreamBuilder, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureGenerate", nullptr, AudioCaptureGenerate, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureGenerateErr", nullptr, AudioCaptureGenerateErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureStart", nullptr, AudioCaptureStart, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureStartErr", nullptr, AudioCaptureStartErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCapturePause", nullptr, AudioCapturePause, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCapturePauseErr", nullptr, AudioCapturePauseErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureStop", nullptr, AudioCaptureStop, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureStopErr", nullptr, AudioCaptureStopErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureFlush", nullptr, AudioCaptureFlush, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureFlushErr", nullptr, AudioCaptureFlushErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureRelease", nullptr, AudioCaptureRelease, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureReleaseErr", nullptr, AudioCaptureReleaseErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureGetParameter", nullptr, AudioCaptureGetParameter, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureGetCurrentState", nullptr, AudioCaptureGetCurrentState, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureGetStreamId", nullptr, AudioCaptureGetStreamId, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureGetSamplingRate", nullptr, AudioCaptureGetSamplingRate, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureGetSampleFormat", nullptr, AudioCaptureGetSampleFormat, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureGetEncodingType", nullptr, AudioCaptureGetEncodingType, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureGetCapturerInfo", nullptr, AudioCaptureGetCapturerInfo, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureGetTimestamp", nullptr, AudioCaptureGetTimestamp, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureGetFramesRead", nullptr, AudioCaptureGetFramesRead, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureGetFrameSizeInCallback", nullptr, AudioCaptureGetFrameSizeInCallback, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetSpeed", nullptr, AudioRendererSetSpeed, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererGetSpeed", nullptr, AudioRendererGetSpeed, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetGetSpeed", nullptr, AudioRendererSetGetSpeed, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioSetRendererOutputDeviceChangeCallback", nullptr, AudioSetRendererOutputDeviceChangeCallback, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderGetFramesWritten", nullptr, AudioRenderGetFramesWritten, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderGetTimestamp", nullptr, AudioRenderGetTimestamp, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderGetFrameSizeInCallback", nullptr, AudioRenderGetFrameSizeInCallback, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderGenerate", nullptr, AudioRenderGenerate, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderGenerateErr", nullptr, AudioRenderGenerateErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderStart", nullptr, AudioRenderStart, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderStartErr", nullptr, AudioRenderStartErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderPause", nullptr, AudioRenderPause, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderPauseErr", nullptr, AudioRenderPauseErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderStop", nullptr, AudioRenderStop, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderStopErr", nullptr, AudioRenderStopErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderFlush", nullptr, AudioRenderFlush, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderFlushErr", nullptr, AudioRenderFlushErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderRelease", nullptr, AudioRenderRelease, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderReleaseErr", nullptr, AudioRenderReleaseErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderGetCurrentState", nullptr, AudioRenderGetCurrentState, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderGetParameter", nullptr, AudioRenderGetParameter, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderGetStreamId", nullptr, AudioRenderGetStreamId, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderGetSamplingRate", nullptr, AudioRenderGetSamplingRate, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderGetSampleFormat", nullptr, AudioRenderGetSampleFormat, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderGetEncodingType", nullptr, AudioRenderGetEncodingType, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderGetRendererInfo", nullptr, AudioRenderGetRendererInfo, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioStreamBuilderSetSamplingRate", nullptr, AudioStreamBuilderSetSamplingRate, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioStreamBuilderSetChannelCount", nullptr, AudioStreamBuilderSetChannelCount, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioStreamBuilderSetSampleFormat", nullptr, AudioStreamBuilderSetSampleFormat, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioStreamBuilderSetEncodingType", nullptr, AudioStreamBuilderSetEncodingType, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioStreamBuilderSetLatencyMode", nullptr, AudioStreamBuilderSetLatencyMode, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioStreamBuilderSetRendererInfo", nullptr, AudioStreamBuilderSetRendererInfo, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioStreamBuilderSetCapturerInfo", nullptr, AudioStreamBuilderSetCapturerInfo, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioStreamBuilderSetRendererCallback", nullptr, AudioStreamBuilderSetRendererCallback, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioStreamBuilderSetCapturerCallback", nullptr, AudioStreamBuilderSetCapturerCallback, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioCaptureGetChannelCount", nullptr, AudioCaptureGetChannelCount, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRenderGetChannelCount", nullptr, AudioRenderGetChannelCount, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioStreamBuilderSetFrameSizeInCallback", nullptr, AudioStreamBuilderSetFrameSizeInCallback,
            nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererGetVolume_01", nullptr, AudioRendererGetVolume_01, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererGetVolume_02", nullptr, AudioRendererGetVolume_02, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolume_01", nullptr, AudioRendererSetVolume_01, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolume_02", nullptr, AudioRendererSetVolume_02, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolume_03", nullptr, AudioRendererSetVolume_03, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolume_04", nullptr, AudioRendererSetVolume_04, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolume_05", nullptr, AudioRendererSetVolume_05, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolume_06", nullptr, AudioRendererSetVolume_06, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolumeWithRamp_01", nullptr, AudioRendererSetVolumeWithRamp_01, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolumeWithRamp_02", nullptr, AudioRendererSetVolumeWithRamp_02, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolumeWithRamp_03", nullptr, AudioRendererSetVolumeWithRamp_03, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolumeWithRamp_04", nullptr, AudioRendererSetVolumeWithRamp_04, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolumeWithRamp_05", nullptr, AudioRendererSetVolumeWithRamp_05, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolumeWithRamp_06", nullptr, AudioRendererSetVolumeWithRamp_06, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolumeWithRamp_07", nullptr, AudioRendererSetVolumeWithRamp_07, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolumeWithRamp_08", nullptr, AudioRendererSetVolumeWithRamp_08, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetVolumeWithRamp_09", nullptr, AudioRendererSetVolumeWithRamp_09, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetOnMarkReached_01", nullptr, AudioRendererSetOnMarkReached_01, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetOnMarkReached_02", nullptr, AudioRendererSetOnMarkReached_02, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetOnMarkReached_03", nullptr, AudioRendererSetOnMarkReached_03, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetOnMarkReached_04", nullptr, AudioRendererSetOnMarkReached_04, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererCancelMark_01", nullptr, AudioRendererCancelMark_01, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererCancelMark_02", nullptr, AudioRendererCancelMark_02, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererCancelMark_03", nullptr, AudioRendererCancelMark_03, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetInterruptMode_01", nullptr, AudioRendererSetInterruptMode_01, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetInterruptMode_02", nullptr, AudioRendererSetInterruptMode_02, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"audioRendererSetInterruptMode_03", nullptr, AudioRendererSetInterruptMode_03, nullptr, nullptr, nullptr, napi_default, nullptr},

    };
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

/*
 * module define
 */
static napi_module g_module = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "audioNdkTest",
    .nm_priv = ((void *)0),
    .reserved = {0}};

/*
 * module register
 */
extern "C" __attribute__((constructor)) void MyPixelMapRegisterModule(void)
{
    napi_module_register(&g_module);
}
