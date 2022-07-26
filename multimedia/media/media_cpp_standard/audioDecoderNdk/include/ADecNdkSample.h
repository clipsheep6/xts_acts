/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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

#ifndef AUDIODEC_NDK_SAMPLE_H
#define AUDIODEC_NDK_SAMPLE_H

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <atomic>
#include <fstream>
#include <thread>
#include <mutex>
#include <queue>
#include <string>
#include <map>
#include "securec.h"
#include "ndk_av_codec.h"
#include "nocopyable.h"
#include "ndktest_log.h"



namespace OHOS {
namespace Media {

class ADecSignal {
public:
    std::mutex inMutex_;
    std::mutex outMutex_;
    std::condition_variable inCond_;
    std::condition_variable outCond_;
    std::queue<uint32_t> inQueue_;
    std::queue<uint32_t> outQueue_;
    std::queue<uint32_t>  sizeQueue_;
    std::queue<AVMemory *> inBufferQueue_;
    std::queue<AVMemory *> outBufferQueue_;
    
};



class ADecNdkSample : public NoCopyable {
public:
    ADecNdkSample() = default;
    ~ADecNdkSample();
    // std::shared_ptr<AVCodec> adec_ = nullptr;

    // explicit ADecNdkSample();
    // ~ADecNdkSample();
    void init(const char * out_dir, uint32_t es[], uint32_t es_length,
              const char * inp_dir="/data/media/AAC_48000_32_1.aac", uint32_t sample_duration_us=23000);
//    struct AVCodec* CreateAudioDecoder(void);
    struct AVCodec* CreateAudioDecoder(uint32_t codecType=0);

    bool SetFormat(struct AVFormat *format, std::map<std::string, int> value);
    int32_t Configure(struct AVFormat *format);
    int32_t Prepare();
    int32_t Start();
    int32_t Stop();
    int32_t Flush();
    int32_t Reset();
    int32_t Release();
    uint32_t GetFrameCount();

    std::atomic<bool> isRunning_ = false;
    uint32_t SAMPLE_DURATION_US;
//    uint32_t SAMPLE_SIZE;
    bool NEED_DUMP;
    std::string MIME_TYPE;
    const char * INP_DIR;
    const char * OUT_DIR;
    uint32_t* ES;
    uint32_t ES_LENGTH;

private:
    struct AVCodec* adec_;
    void InputFunc();
    void OutputFunc();
    // std::atomic<bool> isRunning_ = false;
    std::unique_ptr<std::ifstream> testFile_;
    // std::unique_ptr<std::ifstream> outFile_;
    std::unique_ptr<std::thread> inputLoop_;
    std::unique_ptr<std::thread> outputLoop_;
    // std::shared_ptr<ADecSignal> signal_ = nullptr;
    // std::shared_ptr<ADecNdkSampleCallback> cb_;
    struct AVCodecOnAsyncCallback cb_;
    // bool isFirstFrame_ = true;
    int64_t timeStamp_ = 0;
    uint32_t frameCount_ = 0;
    ADecSignal* signal_ = nullptr;

};
}
}
#endif // AUDIODEC_NDK_SAMPLE_H
