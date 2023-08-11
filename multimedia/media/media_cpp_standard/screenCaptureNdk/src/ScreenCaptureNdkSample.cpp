/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <unistd.h>
#include <cstdio>
#include <fstream>
#include <iostream>
#include "ScreenCaptureNdkSample.h"

using namespace std;
using namespace OHOS;
using namespace OHOS::Media;
using namespace testing::ext;
using namespace OHOS::Media::ScreenCaptureNdkTestParam;
std::mutex ScreenCaptureNdkSample::mutex_;
std::map<OH_AVScreenCapture *, std::shared_ptr<ScreenCaptureNdkCallBack>> ScreenCaptureNdkSample::mockCbMap_;

void ScreenCaptureNdkSample::OnError(OH_AVScreenCapture *screenCapture, int32_t errorCode)
{
    std::shared_ptr<ScreenCaptureNdkCallBack> mockCb = GetCallback(screenCapture);
    if (mockCb != nullptr) {
        mockCb->OnError(errorCode);
    }
}

void ScreenCaptureNdkSample::OnAudioBufferAvailable(OH_AVScreenCapture *screenCapture, bool isReady,
    OH_AudioCaptureSourceType type)
{
    std::shared_ptr<ScreenCaptureNdkCallBack> mockCb = GetCallback(screenCapture);
    if (mockCb != nullptr) {
        mockCb->OnAudioBufferAvailable(isReady, type);
    }
}

void ScreenCaptureNdkSample::OnVideoBufferAvailable(OH_AVScreenCapture *screenCapture, bool isReady)
{
    std::shared_ptr<ScreenCaptureNdkCallBack> mockCb = GetCallback(screenCapture);
    if (mockCb != nullptr) {
        mockCb->OnVideoBufferAvailable(isReady);
    }
}

std::shared_ptr<ScreenCaptureNdkCallBack> ScreenCaptureNdkSample::GetCallback(OH_AVScreenCapture *screenCapture)
{
    std::lock_guard<std::mutex> lock(mutex_);
    if (mockCbMap_.empty()) {
        return nullptr;
    }
    if (mockCbMap_.find(screenCapture) != mockCbMap_.end()) {
        return mockCbMap_.at(screenCapture);
    }
    return nullptr;
}

void ScreenCaptureNdkSample::DelCallback(OH_AVScreenCapture *screenCapture)
{
    std::lock_guard<std::mutex> lock(mutex_);
    if (mockCbMap_.empty()) {
        return;
    }
    auto it = mockCbMap_.find(screenCapture);
    if (it != mockCbMap_.end()) {
        mockCbMap_.erase(it);
    }
}

void ScreenCaptureNdkSample::SetScreenCaptureCallback(OH_AVScreenCapture *screencapture,
    std::shared_ptr<ScreenCaptureNdkCallBack> cb)
{
    std::lock_guard<std::mutex> lock(mutex_);
    mockCbMap_[screencapture] = cb;
}

int32_t ScreenCaptureNdkSample::SetScreenCaptureCallback(const std::shared_ptr<ScreenCaptureNdkCallBack>& cb)
{
    if (cb != nullptr) {
        SetScreenCaptureCallback(screenCapture_, cb);
        struct OH_AVScreenCaptureCallback callback;
        callback.onError = ScreenCaptureNdkSample::OnError;
        callback.onAudioBufferAvailable = ScreenCaptureNdkSample::OnAudioBufferAvailable;
        callback.onVideoBufferAvailable = ScreenCaptureNdkSample::OnVideoBufferAvailable;
        return OH_AVScreenCapture_SetCallback(screenCapture_, callback);
    }
    return AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
}

void ScreenCaptureNdkSample::SetACount(int32_t index)
{
    aIndex_ = index;
}

int32_t ScreenCaptureNdkSample::GetACount()
{
    return aIndex_;
}

void ScreenCaptureNdkSample::SetVCount(int32_t index)
{
    vIndex_ = index;
}

int32_t ScreenCaptureNdkSample::GetVCount()
{
    return vIndex_;
}

void ScreenCaptureNdkSample::SetATotalTime(int32_t totalTime)
{
    aTotalTime_ = totalTime;
}

int32_t ScreenCaptureNdkSample::GetATotalTime()
{
    return aTotalTime_;
}

void ScreenCaptureNdkSample::SetVTotalTime(int32_t totalTime)
{
    vTotalTime_ = totalTime;
}

int32_t ScreenCaptureNdkSample::GetVTotalTime()
{
    return vTotalTime_;
}

int32_t ScreenCaptureNdkSample::StartScreenCapture()
{
    return OH_AVScreenCapture_StartScreenCapture(screenCapture_);
}

int32_t ScreenCaptureNdkSample::Init(OH_AVScreenCaptureConfig config)
{
    return OH_AVScreenCapture_Init(screenCapture_, config);
}

int32_t ScreenCaptureNdkSample::StopScreenCapture()
{
    return OH_AVScreenCapture_StopScreenCapture(screenCapture_);
}

int32_t ScreenCaptureNdkSample::Release()
{
    DelCallback(screenCapture_);
    return OH_AVScreenCapture_Release(screenCapture_);
}

int32_t ScreenCaptureNdkSample::SetMicrophoneEnabled(bool isMicrophone)
{
    return OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture_, isMicrophone);
}

int32_t ScreenCaptureNdkSample::AcquireAudioBuffer(OH_AudioBuffer **audioBuffer, OH_AudioCaptureSourceType type)
{
    return OH_AVScreenCapture_AcquireAudioBuffer(screenCapture_, audioBuffer, type);
}

sptr<OHOS::SurfaceBuffer> ScreenCaptureNdkSample::AcquireVideoBuffer(int32_t &fence, int64_t &timestamp,
    OHOS::Rect &damage)
{
    OH_Rect damage_ = {
        .x = damage.x,
        .y = damage.y,
        .width = damage.w,
        .height = damage.h,
    };
    OH_NativeBuffer* buffer = OH_AVScreenCapture_AcquireVideoBuffer(screenCapture_, &fence, &timestamp, &damage_);
    sptr<OHOS::SurfaceBuffer> surfacebuffer;
    if (buffer != nullptr) {
        surfacebuffer =  OHOS::SurfaceBuffer::NativeBufferToSurfaceBuffer(buffer);
        OH_NativeBuffer_Unreference(buffer);
    }
    return surfacebuffer;
}

int32_t ScreenCaptureNdkSample::ReleaseAudioBuffer(OH_AudioCaptureSourceType type)
{
    return OH_AVScreenCapture_ReleaseAudioBuffer(screenCapture_, type);
}

int32_t ScreenCaptureNdkSample::ReleaseVideoBuffer()
{
    return OH_AVScreenCapture_ReleaseVideoBuffer(screenCapture_);
}

int32_t ScreenCaptureNdkSample::SetConfig(OH_AVScreenCaptureConfig &config)
{
    char name[30] = "fd://11";

    OH_AudioCaptureInfo miccapinfo = {
        .audioSampleRate = 16000,
        .audioChannels = 2,
        .audioSource = OH_SOURCE_DEFAULT
    };

    OH_VideoCaptureInfo videocapinfo = {
        .videoFrameWidth = 720,
        .videoFrameHeight = 1280,
        .videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA
    };

    OH_AudioInfo audioinfo = {
        .micCapInfo = miccapinfo,
    };

    OH_VideoInfo videoinfo = {
        .videoCapInfo = videocapinfo
    };

    OH_RecorderInfo recorderinfo = {
        .url = name
    };

    config = {
        .captureMode = OH_CAPTURE_HOME_SCREEN,
        .dataType = OH_ORIGINAL_STREAM,
        .audioInfo = audioinfo,
        .videoInfo = videoinfo,
        .recorderInfo = recorderinfo
    };
    return AV_SCREEN_CAPTURE_ERR_OK;
}