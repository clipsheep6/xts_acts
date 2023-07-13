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
#ifndef SCREENCAPTURE_MOCK_H
#define SCREENCAPTURE_MOCK_H

#include <fcntl.h>
#include <stdio.h>
#include <string>
#include <thread>
#include <cstdio>
#include <chrono>
#include <iostream>
#include "screen_capture.h"
#include "recorder.h"
#include "gtest/gtest.h"
#include "nativetoken_kit.h"
#include "accesstoken_kit.h"
#include "token_setproc.h"
#include "native_avscreen_capture_base.h"
#include "native_avscreen_capture_errors.h"

namespace OHOS {
namespace Media {
namespace ScreenCaptureNdkTestParam {
    constexpr uint32_t SLEEP_TIME = 5;
    constexpr uint32_t RECORDER_TIME = 3;
} // namespace ScreenCaptureNdkTestParam

class ScreenCaptureNdkCallBack : public NoCopyable {
public:
    virtual void OnError(int32_t errorCode) = 0;
    virtual void OnAudioBufferAvailable(bool isReady, OH_AudioCaptureSourceType type) = 0;
    virtual void OnVideoBufferAvailable(bool isReady) = 0;
};

class ScreenCaptureNdk {
public:
    virtual ~ScreenCaptureNdk() = default;
    virtual int32_t SetScreenCaptureCallback(const std::shared_ptr<ScreenCaptureNdkCallBack>& callback) = 0;
    virtual void SetACount(int32_t index) = 0;
    virtual void SetVCount(int32_t index) = 0;
    virtual int32_t GetACount() = 0;
    virtual int32_t GetVCount() = 0;
    virtual void SetATotalTime(int32_t totalTime) = 0;
    virtual void SetVTotalTime(int32_t totalTime) = 0;
    virtual int32_t GetATotalTime() = 0;
    virtual int32_t GetVTotalTime() = 0;
    virtual int32_t Init(OH_AVScreenCaptureConfig config) = 0;
    virtual int32_t StartScreenCapture() = 0;
    virtual int32_t StopScreenCapture() = 0;
    virtual int32_t Release() = 0;
    virtual int32_t SetMicrophoneEnabled(bool isMicrophone) = 0;
    virtual int32_t AcquireAudioBuffer(OH_AudioBuffer **audioBuffer, OH_AudioCaptureSourceType type) = 0;
    virtual sptr<OHOS::SurfaceBuffer> AcquireVideoBuffer(int32_t &fence, int64_t &timestamp,
        OHOS::Rect &damage) = 0;
    virtual int32_t ReleaseAudioBuffer(OH_AudioCaptureSourceType type) = 0;
    virtual int32_t ReleaseVideoBuffer() = 0;
    virtual int32_t SetConfig(OH_AVScreenCaptureConfig &config) = 0;
};

class __attribute__((visibility("default"))) ScreenCaptureNdkFactory {
public:
    static std::shared_ptr<ScreenCaptureNdk> CreateScreenCapture();
private:
    ScreenCaptureNdkFactory() = delete;
    ~ScreenCaptureNdkFactory() = delete;
};
} // namespace Media
} // namespace OHOS
#endif