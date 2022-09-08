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
#include "native_avcodec_base.h"
#include "native_avcodec_audiodecoder.h"
#include "nocopyable.h"
#include "native_sample_log.h"


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
    std::queue<uint32_t>  outSizeQueue_;
    std::queue<OH_AVMemory *> inBufferQueue_;
    std::queue<OH_AVMemory *> outBufferQueue_;
    std::atomic<bool> isFlushing_ = false;
    std::atomic<bool> isStop_ = false;
    std::atomic<bool> isEOS_ = false;
};

class ADecNdkSample : public NoCopyable {
public:
    ADecNdkSample() = default;
    ~ADecNdkSample();
	void RunAudioDec();

    void init(const char * out_dir, uint32_t es[], uint32_t es_length,
              const char * inp_dir="/data/media/AAC_48000_32_1.aac", uint32_t sample_duration_us=23000);
    struct OH_AVCodec* CreateAudioDecoder(uint32_t codecType=0);

    bool SetFormat(struct OH_AVFormat *format, std::map<std::string, int> value);
    int32_t SetParameter(OH_AVFormat *format);
    int32_t Configure(struct OH_AVFormat *format);
    int32_t Prepare();
    int32_t Start();
    int32_t Stop();
    int32_t Flush();
    void WaitEOS();
    int32_t Reset();
    int32_t Release();
    uint32_t GetFrameCount();
    void resetFrameCount();

    std::atomic<bool> isRunning_ = false;
    uint32_t SAMPLE_DURATION_US;
    bool NEED_DUMP;
    std::string MIME_TYPE;
    const char * INP_DIR;
    const char * OUT_DIR;
    uint32_t* ES;
    uint32_t ES_LENGTH;

private:
    void InputFunc();
    void OutputFunc();
    struct OH_AVFormat* CreateFormat(void);
    void ClearIntQueue(std::queue<uint32_t> &q);
    void ClearBufferQueue(std::queue<OH_AVMemory *> &q);
    void ClearAllQueue();
//    std::atomic<bool> isRunning_ = false;
    std::unique_ptr<std::ifstream> testFile_;
    std::unique_ptr<std::thread> inputLoop_;
    std::unique_ptr<std::thread> outputLoop_;
    struct OH_AVCodec* adec_;
    ADecSignal* signal_ ;
    struct OH_AVCodecAsyncCallback cb_;
    int64_t timeStamp_ = 0;
    uint32_t frameCount_ = 0;
};
}
}
#endif // AUDIODEC_NDK_SAMPLE_H
