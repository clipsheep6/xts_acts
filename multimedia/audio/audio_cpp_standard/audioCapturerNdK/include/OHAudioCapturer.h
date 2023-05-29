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

#ifndef OH_AUDIO_CAPTURER_H
#define OH_AUDIO_CAPTURER_H

#include "native_audiocapturer.h"
#include "audio_capturer.h"
#include "audio_log.h"

namespace OHOS {
namespace AudioStandard {
class OHAudioCapturerModeCallback : public AudioCapturerReadCallback {
public:
    OHAudioCapturerModeCallback(OH_AudioCapturer_Callbacks callbacks, OH_AudioCapturer* audioCapturer, void* userData)
    {
        callbacks_ = callbacks;
        ohAudioCapturer_ = audioCapturer;
        userData_ = userData;
    }

    void OnReadData(size_t length) override;
private:
    OH_AudioCapturer_Callbacks callbacks_;
    OH_AudioCapturer* ohAudioCapturer_;
    void* userData_;
};

class OHAudioCapturer {
    public:
        OHAudioCapturer();
        ~OHAudioCapturer();

        bool Initialize(const AudioCapturerOptions& capturerOptions);
        bool Start();
        bool Pause();
        bool Stop();
        bool Flush();
        bool Release();
        void GetStreamId(uint32_t& streamId);
        AudioChannel GetChannelCount();
        AudioEncodingType GetEncodingType();
        AudioSampleFormat GetSampleFormat();
        void GetCapturerInfo(AudioCapturerInfo& capturerInfo);
        void GetAudioTime(Timestamp &timestamp, Timestamp::Timestampbase base);
        int32_t GetBufferDesc(BufferDesc &bufDesc) const;
        int32_t Enqueue(const BufferDesc &bufDesc) const;

        void SetCapturerReadCallback(OH_AudioCapturer_Callbacks callbacks, void* userData);

    private:
        std::unique_ptr<AudioCapturer> audioCapturer_;
};
}  // namespace AudioStandard
}  // namespace OHOS

#endif // OH_AUDIO_CAPTURER_H
