/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <thread>
#include <native_buffer/native_buffer.h>
#include "napi/native_api.h"
#include "hilog/log.h"
#include <fcntl.h>
#include <map>
#include "multimedia/player_framework/native_avscreen_capture.h"
#include "multimedia/player_framework/native_avscreen_capture_base.h"
#include "multimedia/player_framework/native_avscreen_capture_errors.h"
#undef LOG_DOMAIN
#undef LOG_TAG
#define LOG_DOMAIN 0x3200
#define LOG_TAG "ScreenCaptureTest"
using namespace std;
static char filename[100] = {0};
static int32_t RECORD_TIME = 3;

class ScreenCaptureNdkCallBack {
public:
    virtual void onError(int32_t errorCode) = 0;
    virtual void onAudioBufferAvailable(bool isReady, OH_AudioCaptureSourceType type) = 0;
    virtual void onVideoBufferAvailable(bool isReady) = 0;
};
class ScreenCaptureNdkTestCallback : public ScreenCaptureNdkCallBack {
public:
    ScreenCaptureNdkTestCallback(OH_AVScreenCapture *ScreenCapture, FILE *aFile_, FILE *innerFile_, FILE *vFile_,
                                 int32_t aFlag_, int32_t vFlag_)
        : screenCapture_(ScreenCapture), aFile(aFile_), innerFile(innerFile_), vFile(vFile_), aFlag(aFlag_),
          vFlag(vFlag_) {}
    ~ScreenCaptureNdkTestCallback() = default;
    void onError(int32_t errorCode) override;
    void onAudioBufferAvailable(bool isReady, OH_AudioCaptureSourceType type) override;
    void onVideoBufferAvailable(bool isReady) override;

private:
    OH_AVScreenCapture *screenCapture_;
    FILE *aFile = nullptr;
    FILE *innerFile = nullptr;
    FILE *vFile = nullptr;
    int32_t aFlag = 0;
    int32_t vFlag = 0;
};
void ScreenCaptureNdkTestCallback::onError(int32_t errorCode) {
    OH_LOG_ERROR(LOG_APP, "Error received, errorCode: %{public}d", errorCode);
}
void ScreenCaptureNdkTestCallback::onAudioBufferAvailable(bool isReady, OH_AudioCaptureSourceType type) {
    if (isReady == true) {
        OH_AudioBuffer *audioBuffer = (OH_AudioBuffer *)malloc(sizeof(OH_AudioBuffer));
        if (audioBuffer == nullptr) {
            OH_LOG_ERROR(LOG_APP, "audio buffer is nullptr");
            return;
        }
        if (OH_AVScreenCapture_AcquireAudioBuffer(screenCapture_, &audioBuffer, type) == AV_SCREEN_CAPTURE_ERR_OK) {
            if (audioBuffer == nullptr) {
                OH_LOG_ERROR(LOG_APP, "AcquireAudioBuffer failed, audio buffer empty");
                return;
            }
            OH_LOG_INFO(
                LOG_APP,
                "AcquireAudioBuffer, audioBufferLen: %{public}d, timestampe: %{public}ld, audioSourceType: %{public}d",
                audioBuffer->size, audioBuffer->timestamp, audioBuffer->type);
            if ((aFile != nullptr) && (audioBuffer->buf != nullptr) && (type == OH_MIC)) {
                if (fwrite(audioBuffer->buf, 1, audioBuffer->size, aFile) != audioBuffer->size) {
                    OH_LOG_ERROR(LOG_APP, "error occurred in fwrite aFile_: %{public}s", strerror(errno));
                }
                free(audioBuffer->buf);
                audioBuffer->buf = nullptr;
            } else if ((innerFile != nullptr) && (audioBuffer->buf != nullptr) && (type == OH_ALL_PLAYBACK)) {
                if (fwrite(audioBuffer->buf, 1, audioBuffer->size, innerFile) != audioBuffer->size) {
                    OH_LOG_ERROR(LOG_APP, "error occurred in fwrite innerFile_: %{public}s", strerror(errno));
                }
                free(audioBuffer->buf);
                audioBuffer->buf = nullptr;
            }
            free(audioBuffer);
            audioBuffer = nullptr;
        }
        if (aFlag == 1) {
            OH_AVScreenCapture_ReleaseAudioBuffer(screenCapture_, type);
        }
    } else {
        OH_LOG_ERROR(LOG_APP, "AcquireAudioBuffer failed");
    }
}
void ScreenCaptureNdkTestCallback::onVideoBufferAvailable(bool isReady) {
    if (isReady == true) {
        int32_t fence = 0;
        int64_t timestamp = 0;
        OH_Rect damage;
        OH_NativeBuffer_Config config;
        OH_NativeBuffer *nativeBuffer =
            OH_AVScreenCapture_AcquireVideoBuffer(screenCapture_, &fence, &timestamp, &damage);
        if (nativeBuffer != nullptr) {
            OH_NativeBuffer_GetConfig(nativeBuffer, &config);
            int32_t length = config.height * config.width * 4;
            OH_LOG_INFO(LOG_APP,
                        "AcquireVideoBuffer, videoBufferLen: %{public}d, timestamp: %{public}ld, size: %{public}d",
                        length, timestamp, length);
            if (vFile != nullptr) {
                void *buf = nullptr;
                OH_NativeBuffer_Map(nativeBuffer, &buf);
                if (buf != nullptr) {
                    if (fwrite(buf, 1, length, vFile) != length) {
                        OH_LOG_ERROR(LOG_APP, "error occurred in fwrite vFile_: %{public}s", strerror(errno));
                    }
                }
            }
            OH_NativeBuffer_Unreference(nativeBuffer);
            if (vFlag == 1) {
                OH_AVScreenCapture_ReleaseVideoBuffer(screenCapture_);
            }
        } else {
            OH_LOG_ERROR(LOG_APP, "AcquireVideoBuffer failed");
        }
    }
}
std::shared_ptr<ScreenCaptureNdkTestCallback> screenCaptureCb = nullptr;
std::mutex mutex_;
std::map<OH_AVScreenCapture *, std::shared_ptr<ScreenCaptureNdkCallBack>> mockCbMap_;
void DelCallback(OH_AVScreenCapture *screenCapture) {
    std::lock_guard<std::mutex> lock(mutex_);
    if (mockCbMap_.empty()) {
        return;
    }
    auto it = mockCbMap_.find(screenCapture);
    if (it != mockCbMap_.end()) {
        mockCbMap_.erase(it);
    }
}

std::shared_ptr<ScreenCaptureNdkCallBack> GetCallback(OH_AVScreenCapture *screenCapture) {
    std::lock_guard<std::mutex> lock(mutex_);
    if (mockCbMap_.empty()) {
        return nullptr;
    }
    if (mockCbMap_.find(screenCapture) != mockCbMap_.end()) {
        return mockCbMap_.at(screenCapture);
    }
    return nullptr;
}

void OnError(OH_AVScreenCapture *screenCapture, int32_t errorCode) {
    std::shared_ptr<ScreenCaptureNdkCallBack> mockCb = GetCallback(screenCapture);
    if (mockCb != nullptr) {
        mockCb->onError(errorCode);
    }
}

void OnAudioBufferAvailable(OH_AVScreenCapture *screenCapture, bool isReady, OH_AudioCaptureSourceType type) {
    std::shared_ptr<ScreenCaptureNdkCallBack> mockCb = GetCallback(screenCapture);
    if (mockCb != nullptr) {
        mockCb->onAudioBufferAvailable(isReady, type);
    }
}

void OnVideoBufferAvailable(OH_AVScreenCapture *screenCapture, bool isReady) {
    std::shared_ptr<ScreenCaptureNdkCallBack> mockCb = GetCallback(screenCapture);
    if (mockCb != nullptr) {
        mockCb->onVideoBufferAvailable(isReady);
    }
}

void SetScreenCaptureCallback(OH_AVScreenCapture *screenCapture, std::shared_ptr<ScreenCaptureNdkTestCallback> &cb) {

    if (cb != nullptr) {
        std::lock_guard<std::mutex> lock(mutex_);
        mockCbMap_[screenCapture] = cb;
        struct OH_AVScreenCaptureCallback callback;
        callback.onError = OnError;
        callback.onAudioBufferAvailable = OnAudioBufferAvailable;
        callback.onVideoBufferAvailable = OnVideoBufferAvailable;
        OH_AVScreenCapture_SetCallback(screenCapture, callback);
    }
}


OH_AVScreenCapture *CreateScreenCapture() {
    OH_AVScreenCapture *screenCapture_ = OH_AVScreenCapture_Create();
    return screenCapture_;
}

void SetConfig(OH_AVScreenCaptureConfig &config) {
    char name[30] = "fd://11";
    OH_AudioCaptureInfo miccapinfo = {.audioSampleRate = 16000, .audioChannels = 2, .audioSource = OH_SOURCE_DEFAULT};
    OH_VideoCaptureInfo videocapinfo = {
        .videoFrameWidth = 720, .videoFrameHeight = 1280, .videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA};
    OH_AudioInfo audioinfo = {
        .micCapInfo = miccapinfo,
    };
    OH_VideoInfo videoinfo = {.videoCapInfo = videocapinfo};
    OH_RecorderInfo recorderinfo = {.url = name};
    config = {.captureMode = OH_CAPTURE_HOME_SCREEN,
              .dataType = OH_ORIGINAL_STREAM,
              .audioInfo = audioinfo,
              .videoInfo = videoinfo,
              .recorderInfo = recorderinfo};
}

FILE *OpenVFile(FILE *vFile_, string filename_) {
    snprintf(filename, sizeof(filename), "data/storage/el2/base/files/%s.yuv", filename_.c_str());
    vFile_ = fopen(filename, "w+");
    if (vFile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "vFile video open failed, %{public}s", strerror(errno));
    }
    return vFile_;
}

FILE *OpenAFile(FILE *aFile_, string filename_) {
    snprintf(filename, sizeof(filename), "data/storage/el2/base/files/%s.pcm", filename_.c_str());
    aFile_ = fopen(filename, "w+");
    if (aFile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "aFile audio open failed, %{public}s", strerror(errno));
    }
    return aFile_;
}

void CloseFile(FILE *aFile_, FILE *vFile_) {
    if (aFile_ != nullptr) {
        fclose(aFile_);
        aFile_ = nullptr;
    }
    if (vFile_ != nullptr) {
        fclose(vFile_);
        vFile_ = nullptr;
    }
}

// OH_Media_Screen_Capture_Init_001
static napi_value ScreenCaptureInitWidthErr(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoFrameWidth = -1;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;

    bool isMicrophone = false;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Init_002
static napi_value ScreenCaptureInitHeightErr(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoFrameHeight = -1;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;

    bool isMicrophone = false;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Init_003
static napi_value ScreenCaptureInitVideoSourceYUV(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_YUV;

    bool isMicrophone = false;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Init_004
static napi_value ScreenCaptureInitVideoSourceES(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_ES;

    bool isMicrophone = false;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


// OH_Media_Screen_Capture_Without_AudioData
static napi_value ScreenCaptureWithoutAudioData(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    FILE *aFile_ = nullptr;
    FILE *vFile_ = nullptr;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    aFile_ = OpenAFile(aFile_, "SUB_MULTIMEDIA_SCREEN_CAPTURE_WITHOUT_SOUND_DATA");
    vFile_ = OpenVFile(vFile_, "SUB_MULTIMEDIA_SCREEN_CAPTURE_WITHOUT_SOUND_DATA");
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, aFile_, nullptr, vFile_, aFlag_, vFlag_);

    bool isMicrophone = false;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    CloseFile(aFile_, vFile_);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Init_005
static napi_value ScreenCaptureInitAudioSampleRate_01(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.micCapInfo.audioSampleRate = -1;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Init_006
static napi_value ScreenCaptureInitAudioSampleRate_02(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.micCapInfo.audioSampleRate = 98000;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Init_007
static napi_value ScreenCaptureInitAudioSampleRate_03(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.micCapInfo.audioSampleRate = 30000;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Init_008
static napi_value ScreenCaptureInitAudioChannels_01(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.micCapInfo.audioChannels = -1;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Init_009
static napi_value ScreenCaptureInitAudioChannels_02(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.micCapInfo.audioChannels = 7;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Init_010
static napi_value ScreenCaptureInitAudioSource(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.micCapInfo.audioSource = OH_SOURCE_INVALID;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Init_011
static napi_value ScreenCaptureInitErr(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.micCapInfo.audioSource = OH_SOURCE_INVALID;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_YUV;

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_With_AudioData
static napi_value ScreenCaptureWithAudioData(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    FILE *aFile_ = nullptr;
    FILE *vFile_ = nullptr;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    aFile_ = OpenAFile(aFile_, "SUB_MULTIMEDIA_SCREEN_CAPTURE_WITH_SOUND_DATA");
    vFile_ = OpenVFile(vFile_, "SUB_MULTIMEDIA_SCREEN_CAPTURE_WITH_SOUND_DATA");
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, aFile_, nullptr, vFile_, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    CloseFile(aFile_, vFile_);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}


// OH_Media_Screen_Capture_Init_012
static napi_value ScreenCaptureInitCaptureMode_01(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.captureMode = static_cast<OH_CaptureMode>(-1);
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Init_013
static napi_value ScreenCaptureInitCaptureMode_02(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.captureMode = static_cast<OH_CaptureMode>(3);
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Init_014
static napi_value ScreenCaptureInitDataType_01(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    config_.dataType = OH_ENCODED_STREAM;

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Init_015
static napi_value ScreenCaptureInitDataType_02(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    config_.dataType = OH_CAPTURE_FILE;

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Init_016
static napi_value ScreenCaptureInitDataType_03(napi_env env, napi_callback_info info) {
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    config_.dataType = OH_INVAILD;

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    OH_AVSCREEN_CAPTURE_ErrCode result = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVScreenCapture_Release(screenCapture);
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_AudioSampleRate_8000
static napi_value ScreenCaptureChangeAudioSampleRate_01(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.micCapInfo.audioSampleRate = 8000;
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, nullptr, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_AudioSampleRate_96000
static napi_value ScreenCaptureChangeAudioSampleRate_02(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.micCapInfo.audioSampleRate = 96000;
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, nullptr, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_AudioChannels_001
static napi_value ScreenCaptureChangeAudioChannels_01(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.micCapInfo.audioChannels = 3;
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, nullptr, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_AudioChannels_002
static napi_value ScreenCaptureChangeAudioChannels_02(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.micCapInfo.audioChannels = 4;
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, nullptr, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_AudioChannels_003
static napi_value ScreenCaptureChangeAudioChannels_03(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.micCapInfo.audioChannels = 5;
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, nullptr, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_AudioChannels_004
static napi_value ScreenCaptureChangeAudioChannels_04(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.micCapInfo.audioChannels = 6;
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, nullptr, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_VideoSize_001
static napi_value ScreenCaptureChangeVideoSize_01(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoFrameWidth = 160;
    config_.videoInfo.videoCapInfo.videoFrameHeight = 160;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    snprintf(filename, sizeof(filename),
             "data/storage/el2/base/files/SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEOSIZE_0001.yuv");
    FILE *vFile_ = fopen(filename, "w+");
    if (vFile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "vFile video open failed, %{public}s", strerror(errno));
    }
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, vFile_, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    CloseFile(nullptr, vFile_);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}


// OH_Media_Screen_Capture_VideoSize_002
static napi_value ScreenCaptureChangeVideoSize_02(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoFrameWidth = 640;
    config_.videoInfo.videoCapInfo.videoFrameHeight = 480;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    snprintf(filename, sizeof(filename),
             "data/storage/el2/base/files/SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEOSIZE_0002.yuv");
    FILE *vFile_ = fopen(filename, "w+");
    if (vFile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "vFile video open failed, %{public}s", strerror(errno));
    }
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, vFile_, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    CloseFile(nullptr, vFile_);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_VideoSize_003
static napi_value ScreenCaptureChangeVideoSize_03(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoFrameWidth = 1920;
    config_.videoInfo.videoCapInfo.videoFrameHeight = 1080;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    snprintf(filename, sizeof(filename),
             "data/storage/el2/base/files/SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEOSIZE_0003.yuv");
    FILE *vFile_ = fopen(filename, "w+");
    if (vFile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "vFile video open failed, %{public}s", strerror(errno));
    }
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, vFile_, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    CloseFile(nullptr, vFile_);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Display
static napi_value ScreenCaptureFromDisplay(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    size_t argc = 3;
    napi_value args[3] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    int32_t width;
    napi_get_value_int32(env, args[0], &width);
    int32_t height;
    napi_get_value_int32(env, args[1], &height);
    int32_t frameRate;
    napi_get_value_int32(env, args[2], &frameRate);
    OH_LOG_ERROR(LOG_APP, "Get display info: width: %{public}d, height: %{public}d", width, height);
    config_.videoInfo.videoCapInfo.videoFrameWidth = width;
    config_.videoInfo.videoCapInfo.videoFrameHeight = height;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, nullptr, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}


// OH_Media_Screen_Capture_Buffer_001
static napi_value ScreenCaptureBufferAndRelease_01(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 0;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, nullptr, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(15);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Buffer_002
static napi_value ScreenCaptureBufferAndRelease_02(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 0;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, nullptr, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(10);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Buffer_003
static napi_value ScreenCaptureBufferAndRelease_03(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 0;
    int32_t vFlag_ = 0;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, nullptr, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(10);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Mic_001
static napi_value ScreenCaptureSetMicrophoneEnabled_01(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    snprintf(filename, sizeof(filename), "data/storage/el2/base/files/SUB_MULTIMEDIA_SCREEN_CAPTURE_MICTEST_0001.pcm");
    FILE *aFile_ = fopen(filename, "w+");
    if (aFile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "aFile audio open failed, %{public}s", strerror(errno));
    }
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, aFile_, nullptr, nullptr, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(5);
    isMicrophone = false;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    sleep(RECORD_TIME);
    isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    CloseFile(aFile_, nullptr);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}


// OH_Media_Screen_Capture_Mic_002
static napi_value ScreenCaptureSetMicrophoneEnabled_02(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    snprintf(filename, sizeof(filename), "data/storage/el2/base/files/SUB_MULTIMEDIA_SCREEN_CAPTURE_MICTEST_0002.pcm");
    FILE *aFile_ = fopen(filename, "w+");
    if (aFile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "aFile audio open failed, %{public}s", strerror(errno));
    }
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, aFile_, nullptr, nullptr, aFlag_, vFlag_);

    bool isMicrophone = false;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(5);
    isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    sleep(RECORD_TIME);
    isMicrophone = false;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    CloseFile(aFile_, nullptr);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Configure_001
static napi_value ScreenCaptureConfigureCombination_01(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.captureMode = OH_CAPTURE_SPECIFIED_SCREEN;
    config_.videoInfo.videoCapInfo.videoFrameHeight = 640;
    config_.videoInfo.videoCapInfo.videoFrameWidth = 480;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    snprintf(filename, sizeof(filename),
             "data/storage/el2/base/files/SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0001.yuv");
    FILE *vFile_ = fopen(filename, "w+");
    if (vFile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "vFile video open failed, %{public}s", strerror(errno));
    }
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, vFile_, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    CloseFile(nullptr, vFile_);
    screenCaptureCb = nullptr;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT && result2 == AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT &&
        result3 == AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Configure_002
static napi_value ScreenCaptureConfigureCombination_02(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.captureMode = OH_CAPTURE_SPECIFIED_SCREEN;
    config_.videoInfo.videoCapInfo.videoFrameHeight = 1920;
    config_.videoInfo.videoCapInfo.videoFrameWidth = 1080;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;

    snprintf(filename, sizeof(filename),
             "data/storage/el2/base/files/SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0002.yuv");
    FILE *vFile_ = fopen(filename, "w+");
    if (vFile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "vFile video open failed, %{public}s", strerror(errno));
    }
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, vFile_, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    CloseFile(nullptr, vFile_);
    screenCaptureCb = nullptr;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT && result2 == AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT &&
        result3 == AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}


// OH_Media_Screen_Capture_Configure_003
static napi_value ScreenCaptureConfigureCombination_03(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.captureMode = OH_CAPTURE_SPECIFIED_WINDOW;
    config_.videoInfo.videoCapInfo.videoFrameHeight = 640;
    config_.videoInfo.videoCapInfo.videoFrameWidth = 480;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    snprintf(filename, sizeof(filename),
             "data/storage/el2/base/files/SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0003.yuv");
    FILE *vFile_ = fopen(filename, "w+");
    if (vFile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "vFile video open failed, %{public}s", strerror(errno));
    }
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, vFile_, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    CloseFile(nullptr, vFile_);
    screenCaptureCb = nullptr;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT && result2 == AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT &&
        result3 == AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_Configure_004
static napi_value ScreenCaptureConfigureCombination_04(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.captureMode = OH_CAPTURE_SPECIFIED_WINDOW;
    config_.videoInfo.videoCapInfo.videoFrameHeight = 1920;
    config_.videoInfo.videoCapInfo.videoFrameWidth = 1080;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;

    snprintf(filename, sizeof(filename),
             "data/storage/el2/base/files/SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0004.yuv");
    FILE *vFile_ = fopen(filename, "w+");
    if (vFile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "vFile video open failed, %{public}s", strerror(errno));
    }
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, nullptr, nullptr, vFile_, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    CloseFile(nullptr, vFile_);
    screenCaptureCb = nullptr;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT && result2 == AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT &&
        result3 == AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_value res;
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_MultiInstance
static void *MultiInstance(void *arg) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.micCapInfo.audioSampleRate = 48000;
    config_.videoInfo.videoCapInfo.videoFrameWidth = 1920;
    config_.videoInfo.videoCapInfo.videoFrameHeight = 1080;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    FILE *pFile_ = nullptr;
    FILE *videoFile_ = nullptr;
    pFile_ = OpenAFile(pFile_, "SUB_MULTIMEDIA_SCREEN_CAPTURE_MULTI_INSTANCE_2");
    videoFile_ = OpenVFile(videoFile_, "SUB_MULTIMEDIA_SCREEN_CAPTURE_MULTI_INSTANCE_2");
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, pFile_, nullptr, videoFile_, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    CloseFile(pFile_, videoFile_);
    screenCaptureCb = nullptr;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        OH_LOG_INFO(LOG_APP, "MultiInstance init/start/stop success");
    } else {
        OH_LOG_ERROR(LOG_APP,
                     "MultiInstance init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d",
                     result1, result2, result3);
    }
    pthread_exit(nullptr);
}


static napi_value ScreenCaptureMultiInstance(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    FILE *aFile_ = nullptr;
    FILE *vFile_ = nullptr;
    pthread_t tid;
    pthread_create(&tid, nullptr, MultiInstance, nullptr);
    pthread_detach(tid);
    struct OH_AVScreenCapture *screenCapture_ = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    aFile_ = OpenAFile(aFile_, "SUB_MULTIMEDIA_SCREEN_CAPTURE_MULTI_INSTANCE");
    vFile_ = OpenVFile(vFile_, "SUB_MULTIMEDIA_SCREEN_CAPTURE_MULTI_INSTANCE");
    std::shared_ptr<ScreenCaptureNdkTestCallback> screenCaptureCb_ =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture_, aFile_, nullptr, vFile_, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture_, isMicrophone);
    SetScreenCaptureCallback(screenCapture_, screenCaptureCb_);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture_, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture_);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture_);
    DelCallback(screenCapture_);
    OH_AVScreenCapture_Release(screenCapture_);
    CloseFile(aFile_, vFile_);
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}

// OH_Media_Screen_Capture_InnerAudio
static napi_value ScreenCaptureInnerAudio(napi_env env, napi_callback_info info) {
    int32_t aFlag_ = 1;
    int32_t vFlag_ = 1;
    FILE *aFile_ = nullptr;
    FILE *vFile_ = nullptr;
    OH_AVScreenCapture *screenCapture = CreateScreenCapture();
    OH_AVScreenCaptureConfig config_;
    SetConfig(config_);
    config_.audioInfo.innerCapInfo.audioSampleRate = 48000;
    config_.audioInfo.innerCapInfo.audioChannels = 2;
    config_.audioInfo.innerCapInfo.audioSource = OH_ALL_PLAYBACK;
    config_.videoInfo.videoCapInfo.videoSource = OH_VIDEO_SOURCE_SURFACE_RGBA;
    aFile_ = OpenAFile(aFile_, "SUB_MULTIMEDIA_SCREEN_CAPTURE_INNER_AUDIO(mic)");
    vFile_ = OpenVFile(vFile_, "SUB_MULTIMEDIA_SCREEN_CAPTURE_INNER_AUDIO(mic)");
    FILE *innerFile_ = fopen("data/storage/el2/base/files/SUB_MULTIMEDIA_SCREEN_CAPTURE_INNER_AUDIO(inner).pcm", "w+");
    if (innerFile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "innerFile_ audio inner open failed, %{public}s", strerror(errno));
    }
    screenCaptureCb =
        std::make_shared<ScreenCaptureNdkTestCallback>(screenCapture, aFile_, innerFile_, vFile_, aFlag_, vFlag_);

    bool isMicrophone = true;
    OH_AVScreenCapture_SetMicrophoneEnabled(screenCapture, isMicrophone);
    SetScreenCaptureCallback(screenCapture, screenCaptureCb);
    OH_AVSCREEN_CAPTURE_ErrCode result1 = OH_AVScreenCapture_Init(screenCapture, config_);
    OH_AVSCREEN_CAPTURE_ErrCode result2 = OH_AVScreenCapture_StartScreenCapture(screenCapture);
    sleep(RECORD_TIME);
    OH_AVSCREEN_CAPTURE_ErrCode result3 = OH_AVScreenCapture_StopScreenCapture(screenCapture);
    DelCallback(screenCapture);
    OH_AVScreenCapture_Release(screenCapture);
    CloseFile(aFile_, vFile_);
    if (innerFile_ != nullptr) {
        fclose(innerFile_);
        innerFile_ = nullptr;
    }
    screenCaptureCb = nullptr;
    napi_value res;
    OH_AVSCREEN_CAPTURE_ErrCode result;
    if (result1 == AV_SCREEN_CAPTURE_ERR_OK && result2 == AV_SCREEN_CAPTURE_ERR_OK &&
        result3 == AV_SCREEN_CAPTURE_ERR_OK) {
        result = AV_SCREEN_CAPTURE_ERR_OK;
    } else {
        OH_LOG_ERROR(LOG_APP, "init/start/stop failed, init: %{public}d, start: %{public}d, stop: %{public}d", result1,
                     result2, result3);
        result = AV_SCREEN_CAPTURE_ERR_OPERATE_NOT_PERMIT;
    }
    napi_create_int32(env, result, &res);
    return res;
}


EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports) {
    napi_property_descriptor desc[] = {
        {"initVideoWidthErr", nullptr, ScreenCaptureInitWidthErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"initVideoHeightErr", nullptr, ScreenCaptureInitHeightErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"initVideoSourceErr_YUV", nullptr, ScreenCaptureInitVideoSourceYUV, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"initVideoSourceErr_ES", nullptr, ScreenCaptureInitVideoSourceES, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"screenCaptureWithoutAudioData", nullptr, ScreenCaptureWithoutAudioData, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"initAudioSampleErr_01", nullptr, ScreenCaptureInitAudioSampleRate_01, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"initAudioSampleErr_02", nullptr, ScreenCaptureInitAudioSampleRate_02, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"initAudioSampleErr_03", nullptr, ScreenCaptureInitAudioSampleRate_03, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"initAudioChannelsErr_01", nullptr, ScreenCaptureInitAudioChannels_01, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"initAudioChannelsErr_02", nullptr, ScreenCaptureInitAudioChannels_02, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"initAudioSourceErr", nullptr, ScreenCaptureInitAudioSource, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"initAVErr", nullptr, ScreenCaptureInitErr, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"screenCaptureWithAudioData", nullptr, ScreenCaptureWithAudioData, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"initCaptureMode_01", nullptr, ScreenCaptureInitCaptureMode_01, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"initCaptureMode_02", nullptr, ScreenCaptureInitCaptureMode_02, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"initDataTypeErr_01", nullptr, ScreenCaptureInitDataType_01, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"initDataTypeErr_02", nullptr, ScreenCaptureInitDataType_02, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"initDataTypeErr_03", nullptr, ScreenCaptureInitDataType_03, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"captureChangeAudioSample_01", nullptr, ScreenCaptureChangeAudioSampleRate_01, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"captureChangeAudioSample_02", nullptr, ScreenCaptureChangeAudioSampleRate_02, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"captureChangeAudioChannels_01", nullptr, ScreenCaptureChangeAudioChannels_01, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"captureChangeAudioChannels_02", nullptr, ScreenCaptureChangeAudioChannels_02, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"captureChangeAudioChannels_03", nullptr, ScreenCaptureChangeAudioChannels_03, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"captureChangeAudioChannels_04", nullptr, ScreenCaptureChangeAudioChannels_04, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"captureChangeVideoSize_01", nullptr, ScreenCaptureChangeVideoSize_01, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"captureChangeVideoSize_02", nullptr, ScreenCaptureChangeVideoSize_02, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"captureChangeVideoSize_03", nullptr, ScreenCaptureChangeVideoSize_03, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"screenCaptureFromDisplay", nullptr, ScreenCaptureFromDisplay, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"setCallbackToAcquireBuffer_01", nullptr, ScreenCaptureBufferAndRelease_01, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"setCallbackToAcquireBuffer_02", nullptr, ScreenCaptureBufferAndRelease_02, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"setCallbackToAcquireBuffer_03", nullptr, ScreenCaptureBufferAndRelease_03, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"setMicrophoneOpenCloseOpen", nullptr, ScreenCaptureSetMicrophoneEnabled_01, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"setMicrophoneCloseOpenClose", nullptr, ScreenCaptureSetMicrophoneEnabled_02, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"configCombination_01", nullptr, ScreenCaptureConfigureCombination_01, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"configCombination_02", nullptr, ScreenCaptureConfigureCombination_02, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"configCombination_03", nullptr, ScreenCaptureConfigureCombination_03, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"configCombination_04", nullptr, ScreenCaptureConfigureCombination_04, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"multiInstance", nullptr, ScreenCaptureMultiInstance, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"innerAudioAndMicAudio", nullptr, ScreenCaptureInnerAudio, nullptr, nullptr, nullptr, napi_default, nullptr},
    };
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "screenCaptureNdkTest",
    .nm_priv = ((void *)0),
    .reserved = {0},
};

extern "C" __attribute__((constructor)) void RegisterModule(void) { napi_module_register(&demoModule); };
