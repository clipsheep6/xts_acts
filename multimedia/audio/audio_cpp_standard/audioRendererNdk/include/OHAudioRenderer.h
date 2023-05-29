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

#ifndef OH_AUDIO_RENDERER_H
#define OH_AUDIO_RENDERER_H

#include "native_audiorenderer.h"
#include "audio_renderer.h"
#include "audio_log.h"

namespace OHOS {
namespace AudioStandard {
class OHAudioRendererModeCallback : public AudioRendererWriteCallback {
public:
    OHAudioRendererModeCallback(OH_AudioRenderer_Callbacks callbacks, OH_AudioRenderer* audioRenderer, void* userData)
    {
        callbacks_ = callbacks;
        ohAudioRenderer_ = audioRenderer;
        userData_ = userData;
    }

    void OnWriteData(size_t length) override;

private:
    OH_AudioRenderer_Callbacks callbacks_;
    OH_AudioRenderer* ohAudioRenderer_;
    void* userData_;
};

class OHAudioRenderer {
    public:
        OHAudioRenderer();
        ~OHAudioRenderer();
        bool Initialize(const AudioRendererOptions &rendererOptions);
        bool Start();
        bool Pause();
        bool Stop();
        bool Flush();
        bool Release();
        RendererState GetStatus();
        AudioRendererRate GetRenderRate();
        void GetStreamId(uint32_t& streamId);
        AudioChannel GetChannelCount();
        AudioSampleFormat GetSampleFormat();
        int32_t GetFramesWritten();
        void GetRendererInfo(AudioRendererInfo& rendererInfo);
        void GetAudioTime(Timestamp &timestamp, Timestamp::Timestampbase base);
        int32_t GetBufferDesc(BufferDesc &bufDesc) const;
        int32_t Enqueue(const BufferDesc &bufDesc) const;

        void SetRendererWriteCallback(OH_AudioRenderer_Callbacks callbacks, void* userData);

    private:
        std::unique_ptr<AudioRenderer> audioRenderer_;
};
}  // namespace AudioStandard
}  // namespace OHOS

#endif // OH_AUDIO_RENDERER_H
