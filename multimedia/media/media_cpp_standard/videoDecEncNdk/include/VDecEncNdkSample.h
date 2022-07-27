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

#ifndef VIDEODECENC_NDK_SAMPLE_H
#define VIDEODECENC_NDK_SAMPLE_H

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <atomic>
#include <fstream>
#include <thread>
#include <mutex>
#include <queue>
#include <string>
#include "securec.h"
#include "ndk_av_codec.h"
#include "nocopyable.h"
#include "ndktest_log.h"
#include "ndk_av_magic.h"
#include "surface.h"


namespace OHOS {
namespace Media {

class VDecEncSignal {
public:
    std::mutex inMutexDec_;
    std::mutex outMutexDec_;
    std::condition_variable inCondDec_;
    std::condition_variable outCondDec_;
    std::queue<uint32_t> inQueueDec_;
    std::queue<uint32_t> outQueueDec_;
    std::queue<uint32_t>  flagQueueDec_;
    std::queue<AVMemory *> inBufferQueueDec_;
    std::queue<AVMemory *> outBufferQueueDec_;

    // std::mutex inMutexEnc_;
    std::mutex outMutexEnc_;
    // std::condition_variable inCondEnc_;
    std::condition_variable outCondEnc_;
    std::queue<uint32_t> inQueueEnc_;
    std::queue<uint32_t> outQueueEnc_;
    std::queue<uint32_t>  sizeQueueEnc_;
    std::queue<AVMemory *> inBufferQueueEnc_;
    std::queue<AVMemory *> outBufferQueueEnc_;
    int32_t errorNum_ = 0;

};


class VDecEncNdkSample : public NoCopyable {
public:
    VDecEncNdkSample() = default;
    ~VDecEncNdkSample();
    // std::shared_ptr<AVCodec> vdec_ = nullptr;

    // explicit ADecNdkSample();
    // ~ADecNdkSample();

    struct AVCodec* CreateVideoDecoder(std::string mimetype);
    int32_t ConfigureDec(struct AVFormat *format);
    int32_t SetOutputSurface();
    int32_t PrepareDec();
    int32_t StartDec();
    int32_t StopDec();
    int32_t FlushDec();
    int32_t ResetDec();
    int32_t ReleaseDec();

    struct AVCodec* CreateVideoEncoder(std::string mimetype);
    int32_t ConfigureEnc(struct AVFormat *format);
    int32_t GetSurface();
    int32_t PrepareEnc();
    int32_t StartEnc();
    int32_t StopEnc();
    int32_t FlushEnc();
    int32_t ResetEnc();
    int32_t ReleaseEnc();
    int32_t CalcuError();
    void SetReadPath(std::string filepath);
    void SetSavePath(std::string filepath);
    void ReRead();
    void ResetParam();
    VDecEncSignal* vcodecSignal_ = nullptr;


private:
    // uint32_t ES[] = {0};
    sptr<Surface> surface_ = nullptr;
    struct AVCodec* vdec_;
    void InputFuncDec();
    void OutputFuncDec();
    std::atomic<bool> isDecRunning_ = false;
    std::unique_ptr<std::ifstream> testFile_;
    std::unique_ptr<std::thread> inputLoopDec_;
    std::unique_ptr<std::thread> outputLoopDec_;
    // std::shared_ptr<VDecEncSignal> signal_ = nullptr;
    // std::shared_ptr<ADecNdkSampleCallback> cb_;
    struct AVCodecOnAsyncCallback cbDec_;
    // bool isFirstFrame_ = true;
    int64_t timeStampDec_ = 0;
    uint32_t decInCnt_ = 0;
    uint32_t decOutCnt_ = 0;

    // VDecEncSignal* signalDec_ = nullptr;

    struct AVCodec* venc_;
    // void InputFuncEnc();
    void OutputFuncEnc();
    std::atomic<bool> isEncRunning_ = false;
    // std::unique_ptr<std::ifstream> testFileEnc_;
    // std::unique_ptr<std::ifstream> outFile_;
    std::unique_ptr<std::thread> inputLoopEnc_;
    std::unique_ptr<std::thread> outputLoopEnc_;
    // std::shared_ptr<VDecEncSignal> signal_ = nullptr;
    // std::shared_ptr<AEncNdkSampleCallback> cb_;
    struct AVCodecOnAsyncCallback cbEnc_;
    // bool isFirstFrame_ = true;
    // int64_t timeStampEnc_ = 0;
    // uint32_t frameCountEnc_ = 0;
    // VDecEncSignal* signalEnc_ = nullptr;
    bool isFirstDecFrame_ = true;
    uint32_t encOutCnt_ = 0;
    std::string inFile_ = "/data/media/out_320_240_10s.h264";
    std::string outFile_ = "/data/media/video_out.es";
    bool flushFlag = false;


};

}
}
#endif // VIDEODECENC_NDK_SAMPLE_H
