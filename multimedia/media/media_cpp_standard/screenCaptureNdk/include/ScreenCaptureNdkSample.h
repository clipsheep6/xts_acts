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
#ifndef SCREENCAPTURE_NDK_SAMPLE_H
#define SCREENCAPTURE_NDK_SAMPLE_H

#include <fcntl.h>
#include <stdio.h>
#include <string>
#include <thread>
#include <cstdio>
#include "nativetoken_kit.h"
#include "accesstoken_kit.h"
#include "token_setproc.h"
#include "recorder.h"
#include "gtest/gtest.h"
#include "ScreenCaptureMock.h"
#include "native_avscreen_capture.h"
#include "native_avscreen_capture_errors.h"

namespace OHOS {
namespace Media {
class ScreenCaptureNdkSample : public ScreenCaptureNdk {
public:
    explicit ScreenCaptureNdkSample(OH_AVScreenCapture* screencapture) : screenCapture_(screencapture) {}
    ~ScreenCaptureNdkSample() = default;
    int32_t SetScreenCaptureCallback(const std::shared_ptr<ScreenCaptureNdkCallBack>& cb) override;
    void SetACount(int32_t index) override;
    void SetVCount(int32_t index) override;
    int32_t GetACount() override;
    int32_t GetVCount() override;
    void SetATotalTime(int32_t totalTime) override;
    void SetVTotalTime(int32_t totalTime) override;
    int32_t GetATotalTime() override;
    int32_t GetVTotalTime() override;
    int32_t Init(OH_AVScreenCaptureConfig config) override;
    int32_t StartScreenCapture() override;
    int32_t StopScreenCapture() override;
    int32_t Release() override;
    int32_t SetMicrophoneEnabled(bool isMicrophone) override;
    int32_t AcquireAudioBuffer(OH_AudioBuffer **audioBuffer, OH_AudioCaptureSourceType type) override;
    sptr<OHOS::SurfaceBuffer> AcquireVideoBuffer(int32_t &fence, int64_t &timestamp,
        OHOS::Rect &damage) override;
    int32_t ReleaseAudioBuffer(OH_AudioCaptureSourceType type) override;
    int32_t ReleaseVideoBuffer() override;
    int32_t SetConfig(OH_AVScreenCaptureConfig &config) override;
    int32_t aIndex_ = 0;
    int32_t vIndex_ = 0;
    int32_t aTotalTime_ = 0;
    int32_t vTotalTime_ = 0;

private:
    static void SetScreenCaptureCallback(OH_AVScreenCapture *screencapture,
        std::shared_ptr<ScreenCaptureNdkCallBack> cb);
    static std::shared_ptr<ScreenCaptureNdkCallBack> GetCallback(OH_AVScreenCapture *screenCapture);
    static void DelCallback(OH_AVScreenCapture *screenCapture);
    static void OnError(OH_AVScreenCapture *screenCapture, int32_t errorCode);
    static void OnAudioBufferAvailable(OH_AVScreenCapture *screenCapture, bool isReady,
        OH_AudioCaptureSourceType type);
    static void OnVideoBufferAvailable(OH_AVScreenCapture *screenCapture, bool isReady);

    static std::mutex mutex_;
    static std::map<OH_AVScreenCapture *, std::shared_ptr<ScreenCaptureNdkCallBack>> mockCbMap_;

    OH_AVScreenCapture* screenCapture_ = nullptr;
    std::atomic<bool> isExit_ { false };
};
} // namespace Media
} // namespace OHOS
#endif