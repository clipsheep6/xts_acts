/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licensthis->ES/LICENSE-2.0
 *
 * Unlthis->ESs required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIthis->ES OR CONDITIONS OF ANY KIND, either exprthis->ESs or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
#include <assert.h>
#include "gtest/gtest.h"
#include "ADecNdkSample.h"
// #include "audio_info.h"


// #include "ndk_av_memory.h"

using namespace OHOS;
using namespace OHOS::Media;
using namespace std;

//namthis->ESpace {
//    // constexpr uint32_t DEFAULT_SAMPLE_RATE = 44100;
//    // constexpr uint32_t DEFAULT_CHANNELS = 2;
//    constexpr uint32_t SAMPLE_DURATION_US = 23000;
//    constexpr bool NEED_DUMP = true;
//    const string MIME_TYPE = "audio/mp4a-latm";
//    const char * INP_DIR = "/data/media/AAC_48000_32_1.aac";
//    const char * OUT_DIR = "/data/media/AAC_48000_32_1_out.es";
//    constexpr uint32_t ES[] = {283}; // replace of self frame length
//    constexpr uint32_t ES_LENGTH = sizeof(ES) / sizeof(uint32_t);
//}

void AdecAsyncError(AVCodec *codec, int32_t errorCode, void *userData)
{
    cout << "Error errorCode=" << errorCode << endl;
    ASSERT_EQ(AV_ERR_OK, errorCode);
}

void AdecAsyncStreamChanged(AVCodec *codec, AVFormat *format, void *userData)
{
    cout << "Format Changed" << endl;
}
void AdecAsyncNeedInputData(AVCodec *codec, uint32_t index, AVMemory *data, void *userData)
{
    // std::shared_ptr<ADecSignal> signal_ = static_cast<std::shared_ptr<ADecSignal>>(userData);
    ADecSignal* signal_ = static_cast<ADecSignal *>(userData);
    cout << "InputAvailable, index = " << index << endl;
    unique_lock<mutex> lock(signal_->inMutex_);
    signal_->inQueue_.push(index);
    signal_->inBufferQueue_.push(data);
    signal_->inCond_.notify_all();
}

void AdecAsyncNewOutputData(AVCodec *codec, uint32_t index, AVMemory *data, AVCodecBufferAttr *attr, void *userData)
{
    // std::shared_ptr<ADecSignal> signal_ = static_cast<ADecSignal *>(userData);
    ADecSignal* signal_ = static_cast<ADecSignal *>(userData);
    cout << "OutputAvailable, index = " << index << endl;
    unique_lock<mutex> lock(signal_->outMutex_);
    signal_->outQueue_.push(index);
    signal_->sizeQueue_.push(attr->size);
    signal_->outBufferQueue_.push(data);
    signal_->outCond_.notify_all();
}

//void clearDecIntQueue(queue<uint32_t>& q) {
//    queue<uint32_t> empty;
//    swap(empty, q);
//}
//
//void clearDecBufferQueue(queue<AVMemory *>& q) {
//    queue<AVMemory *> empty;
//    swap(empty, q);
//}

void ADecNdkSample::init(const char * out_dir, uint32_t es[], uint32_t es_length,
                        const char * inp_dir, uint32_t sample_duration_us){
    this->isRunning_.store(false);
    this->SAMPLE_DURATION_US = sample_duration_us;
    this->NEED_DUMP = true;
    this->INP_DIR = inp_dir;
    this->OUT_DIR = out_dir;
    this->ES = es;
    this->ES_LENGTH = es_length;
    cout << "this->SAMPLE_DURATION_US: " << this->SAMPLE_DURATION_US << endl;
    cout << "this->INP_DIR: " << this->INP_DIR << endl;
    cout << "this->OUT_DIR: " << this->OUT_DIR << endl;
    cout << "this->ES_LENGTH: " << this->ES_LENGTH << endl;
    cout << "init finish " << endl;
}

ADecNdkSample::~ADecNdkSample()
{
    OH_AVCODEC_DestroyAudioDecoder(adec_);
    delete signal_;
    signal_ = nullptr;
}

struct AVCodec* ADecNdkSample::CreateAudioDecoder(uint32_t codecType)
{
    cout << "codecType " << codecType << endl;
    switch(codecType){
        case 0:{
            adec_ = OH_AVCODEC_CreateAudioDecoderByMime("audio/mp4a-latm");
            break;
        }
        case 1:{
            adec_ = OH_AVCODEC_CreateAudioDecoderByName("avdec_aac");
            break;
        }
    }
//    adec_ = OH_AVCODEC_CreateAudioDecoderByMime(MIME_TYPE.c_str());
    NDK_CHECK_AND_RETURN_RET_LOG(adec_ != nullptr, nullptr, "Fatal: OH_AVCODEC_CreateAudioDecoderByMime");
    // if (adec_ == nullptr) {
    //     return false;
    // }
    
    signal_ = new ADecSignal();
    NDK_CHECK_AND_RETURN_RET_LOG(signal_ != nullptr, nullptr, "Fatal: No Memory");

    cb_.onAsyncError = AdecAsyncError;
    cb_.onAsyncStreamChanged = AdecAsyncStreamChanged;
    cb_.onAsyncNeedInputData = AdecAsyncNeedInputData;
    cb_.onAsyncNewOutputData = AdecAsyncNewOutputData;
    int32_t ret = OH_AVCODEC_AudioDecoderSetCallback(adec_, cb_, static_cast<void *>(signal_));
    cout << "OH_AVCODEC_AudioDecoderSetCallback ret:" << ret << endl;
    NDK_CHECK_AND_RETURN_RET_LOG(ret == AV_ERR_OK, NULL, "Fatal: OH_AVCODEC_AudioDecoderSetCallback");
    return adec_;
}

bool ADecNdkSample::SetFormat(struct AVFormat *format, map<string, int> value){
    const char *key;
    for(const auto& t: value){
        key = t.first.c_str();
        if (not OH_AV_FormatPutIntValue(format, key, t.second)){
            cout << "OH_AV_FormatPutIntValue Fail. format key: " << t.first
            << ", value: "<< t.second << endl;
            return false;
        }
    }
    return true;
}

int32_t ADecNdkSample::Configure(struct AVFormat *format)
{
    cout << "->Configure" << endl;
    return OH_AVCODEC_AudioDecoderConfigure(adec_, format);
}


int32_t ADecNdkSample::Prepare()
{
    cout << "->Prepare" << endl;
    return OH_AVCODEC_AudioDecoderPrepare(adec_);
}

int32_t ADecNdkSample::Start()
{
    cout << "->Start" << endl;
    this->isRunning_.store(true);

    testFile_ = std::make_unique<std::ifstream>();
    NDK_CHECK_AND_RETURN_RET_LOG(testFile_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");
    testFile_->open(this->INP_DIR, std::ios::in | std::ios::binary);

    inputLoop_ = make_unique<thread>(&ADecNdkSample::InputFunc, this);
    NDK_CHECK_AND_RETURN_RET_LOG(inputLoop_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");

    outputLoop_ = make_unique<thread>(&ADecNdkSample::OutputFunc, this);
    NDK_CHECK_AND_RETURN_RET_LOG(outputLoop_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");

    return OH_AVCODEC_AudioDecoderStart(adec_);
}

int32_t ADecNdkSample::Stop()
{
    cout << "->Stop" << endl;
    this->isRunning_.store(false);

    if (inputLoop_ != nullptr && inputLoop_->joinable()) {
        unique_lock<mutex> lock(signal_->inMutex_);
        signal_->inQueue_.push(10000);
        signal_->inCond_.notify_all();
        lock.unlock();
        inputLoop_->join();
        inputLoop_.reset();
    }

    if (outputLoop_ != nullptr && outputLoop_->joinable()) {
        unique_lock<mutex> lock(signal_->outMutex_);
        signal_->outQueue_.push(10000);
        signal_->outCond_.notify_all();
        lock.unlock();
        outputLoop_->join();
        outputLoop_.reset();
    }

    return OH_AVCODEC_AudioDecoderStop(adec_);
}

int32_t ADecNdkSample::Flush()
{
    cout << "->Flush" << endl;
    if (inputLoop_ != nullptr){
        unique_lock<mutex> lock(signal_->inMutex_);
//        clearDecIntQueue(signal_->inQueue_);
//        clearDecBufferQueue(signal_->inBufferQueue_);
        while(!signal_->inQueue_.empty()){signal_->inQueue_.pop();};
        while(!signal_->inBufferQueue_.empty()){signal_->inBufferQueue_.pop();};
        signal_->inCond_.notify_all();
        lock.unlock();
    }

    if(outputLoop_ != nullptr){
        unique_lock<mutex> lock(signal_->outMutex_);
//        clearDecIntQueue(signal_->outQueue_);
//        clearDecIntQueue(signal_->sizeQueue_);
//        clearDecBufferQueue(signal_->outBufferQueue_);
        while(!signal_->outQueue_.empty()){signal_->outQueue_.pop();};
        while(!signal_->sizeQueue_.empty()){signal_->sizeQueue_.pop();};
        while(!signal_->outBufferQueue_.empty()){signal_->outBufferQueue_.pop();};
        signal_->outCond_.notify_all();
        lock.unlock();
    }

    return OH_AVCODEC_AudioDecoderFlush(adec_);
}

int32_t ADecNdkSample::Reset()
{
    cout << "->Reset" << endl;
    this->isRunning_.store(false);

    if (inputLoop_ != nullptr && inputLoop_->joinable()) {
        unique_lock<mutex> lock(signal_->inMutex_);
        signal_->inQueue_.push(10000);
        signal_->inCond_.notify_all();
        lock.unlock();
        inputLoop_->join();
        inputLoop_.reset();
    }

    if (outputLoop_ != nullptr && outputLoop_->joinable()) {
        unique_lock<mutex> lock(signal_->outMutex_);
        signal_->outQueue_.push(10000);
        signal_->outCond_.notify_all();
        lock.unlock();
        outputLoop_->join();
        outputLoop_.reset();
    }

    return OH_AVCODEC_AudioDecoderReset(adec_);
}

int32_t ADecNdkSample::Release()
{
    cout << "->Release" << endl;
    this->isRunning_.store(false);

    if (inputLoop_ != nullptr && inputLoop_->joinable()) {
        unique_lock<mutex> lock(signal_->inMutex_);
        signal_->inQueue_.push(10000);
        signal_->inCond_.notify_all();
        lock.unlock();
        inputLoop_->join();
        inputLoop_.reset();
    }

    if (outputLoop_ != nullptr && outputLoop_->joinable()) {
        unique_lock<mutex> lock(signal_->outMutex_);
        signal_->outQueue_.push(10000);
        signal_->outCond_.notify_all();
        lock.unlock();
        outputLoop_->join();
        outputLoop_.reset();
    }

    OH_AVCODEC_DestroyAudioDecoder(adec_);
    return AV_ERR_OK;
}

uint32_t ADecNdkSample::GetFrameCount()
{
    return frameCount_;
}

void ADecNdkSample::InputFunc()
{
    cout << "->InputFunc" << endl;
    while (true) {
        if (!this->isRunning_.load()) {
            break;
        }

        unique_lock<mutex> lock(signal_->inMutex_);
        signal_->inCond_.wait(lock, [this](){ return signal_->inQueue_.size() > 0; });

        if (!this->isRunning_.load()) {
            break;
        }

        uint32_t index = signal_->inQueue_.front();
        AVMemory *buffer = reinterpret_cast<AVMemory *>(signal_->inBufferQueue_.front());
        NDK_CHECK_AND_RETURN_LOG(buffer != nullptr, "Fatal: GetInputBuffer fail");
        NDK_CHECK_AND_RETURN_LOG(testFile_ != nullptr && testFile_->is_open(), "Fatal: open file fail");

        uint32_t bufferSize = 0;
        if (frameCount_ < ES_LENGTH){
            bufferSize = this->ES[frameCount_]; // replace with the actual size
            char *fileBuffer = (char *)malloc(sizeof(char) * bufferSize + 1);
            NDK_CHECK_AND_RETURN_LOG(fileBuffer != nullptr, "Fatal: malloc fail");

            (void)testFile_->read(fileBuffer, bufferSize);
            if (testFile_->eof()) {
                free(fileBuffer);
                cout << "Finish" << endl;
                break;
            }

            if (memcpy_s(OH_AV_MemoryGetAddr(buffer), OH_AV_MemoryGetSize(buffer), fileBuffer, bufferSize) != EOK) {
                free(fileBuffer);
                cout << "Fatal: memcpy fail" << endl;
                break;
            }

            free(fileBuffer);
        }

        struct AVCodecBufferAttr attr;
        if (frameCount_ == this->ES_LENGTH) {
            attr.flags = AVCODEC_BUFFER_FLAGS_EOS;
            attr.presentationTimeUs = 0;
            attr.size = 0;
            attr.offset = 0;
            cout << "=======" << this->isRunning_.load() << endl;
            this->isRunning_.store(false);
            cout << "*******" << this->isRunning_.load() << endl;
        } else {
            attr.presentationTimeUs = timeStamp_;
            attr.size = bufferSize;
            attr.offset = 0;
            if (frameCount_ == 0 && this->MIME_TYPE == "audio/vorbis") {
                attr.flags = AVCODEC_BUFFER_FLAGS_CODEC_DATA;
            } else {
                attr.flags = AVCODEC_BUFFER_FLAGS_NONE;
            }
        }

        AVErrCode ret = OH_AVCODEC_AudioDecoderPushInputData(adec_, index, attr);
        timeStamp_ += this->SAMPLE_DURATION_US;
        frameCount_ ++;
        signal_->inQueue_.pop();
        signal_->inBufferQueue_.pop();
        if (ret != AV_ERR_OK) {
            cout << "Fatal error, exit" << endl;
            ASSERT_EQ(AV_ERR_OK, ret);
            break;
        }
    }
}

void ADecNdkSample::OutputFunc()
{
    cout << "->OutputFunc" << endl;
    while (true) {
        if (!this->isRunning_.load()) {
            break;
        }

        unique_lock<mutex> lock(signal_->outMutex_);
        signal_->outCond_.wait(lock, [this](){ return signal_->outQueue_.size() > 0; });

        if (!this->isRunning_.load()) {
            break;
        }

        uint32_t index = signal_->outQueue_.front();
        auto buffer = signal_->outBufferQueue_.front();
        if (buffer == nullptr) {
            cout << "getOutPut Buffer fail" << endl;
        }
        uint32_t size = signal_->sizeQueue_.front();
        cout << "GetOutputBuffer size : " << size << " frameCount_ =  " << frameCount_ << endl;

        if (this->NEED_DUMP) {
            FILE *outFile;
            outFile = fopen(this->OUT_DIR, "a");
            if (outFile == nullptr) {
                cout << "dump data fail" << endl;
            } else {
                fwrite(OH_AV_MemoryGetAddr(buffer), 1, size, outFile);
            }
            fclose(outFile);
        }

        AVErrCode ret = OH_AVCODEC_AudioDecoderFreeOutputData(adec_, index);
        if ( ret != AV_ERR_OK) {
            cout << "Fatal: ReleaseOutputBuffer fail" << endl;
            ASSERT_EQ(AV_ERR_OK, ret);
            break;
        }

        signal_->outQueue_.pop();
        signal_->sizeQueue_.pop();
        signal_->outBufferQueue_.pop();
    }
}
