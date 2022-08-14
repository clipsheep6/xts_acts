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
 
#include "gtest/gtest.h"
#include "ADecNdkSample.h"
#include "native_avcodec_base.h"
#include "audio_info.h"
// #include "avcodec_native_utils.h"

using namespace OHOS;
using namespace OHOS::Media;
using namespace std;

//namthis->ESpace {
//    // constexpr uint32_t DEFAULT_SAMPLE_RATE = 44100;
//    // constexpr uint32_t DEFAULT_CHANNELS = 2;
//    constexpr uint32_t SAMPLE_DURATION_US = 23000;
//    constexpr bool NEED_DUMP = true;
//    const string MIME_TYPE = "AVCODEC_MIME_TYPE_AUDIO_AAC";
//    const char * INP_DIR = "/data/media/AAC_48000_32_1.aac";
//    const char * OUT_DIR = "/data/media/AAC_48000_32_1_out.es";
//    constexpr uint32_t ES[] = {283}; // replace of self frame length
//    constexpr uint32_t ES_LENGTH = sizeof(ES) / sizeof(uint32_t);
//}

void AdecAsyncError(OH_AVCodec *codec, int32_t errorCode, void *userData)
{
    cout<<"Error errorCode="<<errorCode<<endl;
    ASSERT_EQ(AV_ERR_OK, errorCode);
}

void AdecAsyncStreamChanged(OH_AVCodec *codec, OH_AVFormat *format, void *userData)
{
    cout<<"Format Changed"<<endl;
}

void AdecAsyncNeedInputData(OH_AVCodec *codec, uint32_t index, OH_AVMemory *data, void *userData)
{
    ADecSignal* signal_ = static_cast<ADecSignal *>(userData);
    unique_lock<mutex> lock(signal_->inMutex_);
    if (signal_->isFlushing_.load() || signal_->isStop_.load() || signal_->isEOS_.load()) {
        return;
    }
    cout<<"InputAvailable, index = "<<index<<endl;

    signal_->inQueue_.push(index);
    signal_->inBufferQueue_.push(data);
    signal_->inCond_.notify_all();
}

void AdecAsyncNewOutputData(OH_AVCodec *codec, uint32_t index, OH_AVMemory *data, OH_AVCodecBufferAttr *attr, void *userData)
{
    ADecSignal* signal_ = static_cast<ADecSignal *>(userData);
    unique_lock<mutex> lock(signal_->outMutex_);
    if (signal_->isFlushing_.load() || signal_->isStop_.load() || signal_->isEOS_.load()) {
        return;
    }
    cout<<"OutputAvailable, index = "<<index<<endl;
    signal_->outQueue_.push(index);
    signal_->outSizeQueue_.push(attr->size);
    signal_->outBufferQueue_.push(data);
    signal_->outCond_.notify_all();
}


void ADecNdkSample::init(const char * out_dir, uint32_t es[], uint32_t es_length,
                        const char * inp_dir, uint32_t sample_duration_us){
    this->isRunning_.store(false);
    this->SAMPLE_DURATION_US = sample_duration_us;
    this->NEED_DUMP = true;
    this->INP_DIR = inp_dir;
    this->OUT_DIR = out_dir;
    this->ES = es;
    this->ES_LENGTH = es_length;
    cout<<"this->SAMPLE_DURATION_US: "<<this->SAMPLE_DURATION_US<<endl;
    cout<<"this->INP_DIR: "<<this->INP_DIR<<endl;
    cout<<"this->OUT_DIR: "<<this->OUT_DIR<<endl;
    cout<<"this->ES_LENGTH: "<<this->ES_LENGTH<<endl;
    cout<<"init finish "<<endl;
}

ADecNdkSample::~ADecNdkSample()
{
    //OH_AVCODEC_DestroyAudioDecoder(adec_);
	Release();
    delete signal_;
    signal_ = nullptr;
}

struct OH_AVCodec* ADecNdkSample::CreateAudioDecoder(uint32_t codecType)
{
    cout<<"codecType "<<codecType<<endl;
    switch(codecType){
        case 0:{
            adec_ = OH_AudioDecoder_CreateByMime("audio/mp4a-latm");
            break;
        }
        case 1:{
            adec_ = OH_AudioDecoder_CreateByName("avdec_aac");
            break;
        }
    }
    NDK_CHECK_AND_RETURN_RET_LOG(adec_ != nullptr, nullptr, "Fatal: OH_AudioDecoder_CreateByMime");

    signal_ = new ADecSignal();
    NDK_CHECK_AND_RETURN_RET_LOG(signal_ != nullptr, nullptr, "Fatal: No Memory");

    cb_.onError = AdecAsyncError;
    cb_.onStreamChanged = AdecAsyncStreamChanged;
    cb_.onNeedInputData = AdecAsyncNeedInputData;
    cb_.onNeedOutputData = AdecAsyncNewOutputData;
    int32_t ret = OH_AudioDecoder_SetCallback(adec_, cb_, static_cast<void *>(signal_));
    cout<<"OH_AVCODEC_AudioDecoderSetCallback ret:"<<ret<<endl;
    NDK_CHECK_AND_RETURN_RET_LOG(ret == AV_ERR_OK, NULL, "Fatal: OH_AudioDecoder_SetCallback");
    return adec_;
}

bool ADecNdkSample::SetFormat(struct OH_AVFormat *format, map<string, int> value){
    const char *key;
    for(const auto& t: value){
        key = t.first.c_str();
        if (not OH_AVFormat_SetIntValue(format, key, t.second)){
            cout<<"OH_AV_FormatPutIntValue Fail. format key: "<<t.first
           <<", value: "<<t.second<<endl;
            return false;
        }
    }
    return true;
}

int32_t ADecNdkSample::Configure(struct OH_AVFormat *format)
{
    cout<<"->Configure"<<endl;
    return OH_AudioDecoder_Configure(adec_, format);
}

int32_t ADecNdkSample::Prepare()
{
    cout<<"->Prepare"<<endl;
    return OH_AudioDecoder_Prepare(adec_);
}

int32_t ADecNdkSample::Start()
{
    cout<<"->Start"<<endl;
    unique_lock<mutex> outLock0(signal_->outMutex_);
    unique_lock<mutex> inLock0(signal_->inMutex_);
    signal_->isStop_.store(false);
    signal_->isEOS_.store(false);
    signal_->isFlushing_.store(false);
    this->isRunning_.store(true);
    outLock0.unlock();
    inLock0.unlock();

    if(testFile_ == nullptr){
        cout<<"open testFile_"<<endl;
        testFile_ = std::make_unique<std::ifstream>();
        NDK_CHECK_AND_RETURN_RET_LOG(testFile_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");
        testFile_->open(this->INP_DIR, std::ios::in | std::ios::binary);
    }

    if (inputLoop_ == nullptr){
        inputLoop_ = make_unique<thread>(&ADecNdkSample::InputFunc, this);
        NDK_CHECK_AND_RETURN_RET_LOG(inputLoop_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");
    }

    if (outputLoop_ == nullptr){
        outputLoop_ = make_unique<thread>(&ADecNdkSample::OutputFunc, this);
        NDK_CHECK_AND_RETURN_RET_LOG(outputLoop_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");
    }

    return OH_AudioDecoder_Start(adec_);
}

int32_t ADecNdkSample::Stop()
{
    unique_lock<mutex> outLock0(signal_->outMutex_);
    unique_lock<mutex> inLock0(signal_->inMutex_);
    signal_->isStop_.store(true);
    outLock0.unlock();
    inLock0.unlock();
    cout<<"stopping .."<<endl;
    int32_t ret = OH_AudioDecoder_Stop(adec_);
    ClearAllQueue();

    return ret;
}

void ADecNdkSample::ClearIntQueue(std::queue<uint32_t> &q)
{
    std::queue<uint32_t> empty;
    swap(empty, q);
}

void ADecNdkSample::ClearBufferQueue(std::queue<OH_AVMemory *> &q)
{
    std::queue<OH_AVMemory *> empty;
    swap(empty, q);
}

void ADecNdkSample::ClearAllQueue()
{
    unique_lock<mutex> outLock(signal_->outMutex_);
    unique_lock<mutex> inLock(signal_->inMutex_);

    ClearIntQueue(signal_->outQueue_);
    ClearIntQueue(signal_->outSizeQueue_);
    ClearBufferQueue(signal_->outBufferQueue_);
    ClearIntQueue(signal_->inQueue_);
    ClearBufferQueue(signal_->inBufferQueue_);
    cout<<"signal_->inQuoutQueue_eue_ size = "<<signal_->outQueue_.size()<<endl;
    cout<<"signal_->outSizeQueue_ size = "<<signal_->outSizeQueue_.size()<<endl;
    cout<<"signal_->outBufferQueue_ size = "<<signal_->outBufferQueue_.size()<<endl;
    cout<<"signal_->inQueue_ size = "<<signal_->inQueue_.size()<<endl;
    cout<<"signal_->inBufferQueue_ size = "<<signal_->inBufferQueue_.size()<<endl;
}

int32_t ADecNdkSample::Flush()
{
    unique_lock<mutex> outLock0(signal_->outMutex_);
    unique_lock<mutex> inLock0(signal_->inMutex_);
    signal_->isFlushing_.store(true);
    outLock0.unlock();
    inLock0.unlock();
    cout<<"flushing .."<<endl;
    int32_t ret = OH_AudioDecoder_Flush(adec_);
    ClearAllQueue();

    return ret;
}

void ADecNdkSample::WaitEOS()
{
    while(!signal_->isEOS_.load()){};
}

void ADecNdkSample::resetFrameCount()
{
    unique_lock<mutex> outLock0(signal_->outMutex_);
    unique_lock<mutex> inLock0(signal_->inMutex_);
    frameCount_ = 0;
    outLock0.unlock();
    inLock0.unlock();
}

int32_t ADecNdkSample::Reset()
{
    cout<<"->Reset"<<endl;
    unique_lock<mutex> outLock0(signal_->outMutex_);
    unique_lock<mutex> inLock0(signal_->inMutex_);
    signal_->isStop_.store(true);
    outLock0.unlock();
    inLock0.unlock();
    int32_t ret = OH_AudioDecoder_Reset(adec_);
    cout<<"reseting .."<<endl;
    ClearAllQueue();

    return ret;
}

int32_t ADecNdkSample::Release()
{
    cout<<"->Release"<<endl;
    signal_->isStop_.store(true);
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

	OH_AVErrCode ret = AV_ERR_OK;
    if (adec_ != nullptr) {
        ret = OH_AudioDecoder_Destroy(adec_);
        if (testFile_ != nullptr && testFile_->is_open()){
            testFile_->close();
            if (testFile_ != nullptr){
                testFile_ = nullptr;
            }
        }
        adec_ = (ret == AV_ERR_OK) ? nullptr : adec_;
    }
	 return ret;
}

int32_t ADecNdkSample::SetParameter(OH_AVFormat *format)
{
    return OH_AudioDecoder_SetParameter(adec_, format);
}

uint32_t ADecNdkSample::GetFrameCount()
{
    return frameCount_;
}

void ADecNdkSample::InputFunc()
{
    cout<<"->InputFunc"<<endl;
    while (true) {
        if (!this->isRunning_.load()) {
            break;
        }

        unique_lock<mutex> lock(signal_->inMutex_);
		signal_->inCond_.wait(lock, [this](){
            return (signal_->inQueue_.size() > 0 ); });
        cout<<"enter InputFunc"<<endl;
        if (!this->isRunning_.load()) {
            break;
        }

        uint32_t index = signal_->inQueue_.front();
        if (signal_->isFlushing_.load() || signal_->isStop_.load() || signal_->isEOS_.load()) {
            signal_->inQueue_.pop();
            signal_->inBufferQueue_.pop();
            continue;
        }
        OH_AVMemory *buffer = reinterpret_cast<OH_AVMemory *>(signal_->inBufferQueue_.front());
        NDK_CHECK_AND_RETURN_LOG(buffer != nullptr, "Fatal: GetInputBuffer fail");
        NDK_CHECK_AND_RETURN_LOG(testFile_ != nullptr && testFile_->is_open(), "Fatal: open file fail");

        uint32_t bufferSize = 0;
        if (frameCount_ < ES_LENGTH){
            bufferSize = this->ES[frameCount_]; // replace with the actual size
            char *fileBuffer = (char *)malloc(sizeof(char) * bufferSize + 1);
            NDK_CHECK_AND_RETURN_LOG(fileBuffer != nullptr, "Fatal: malloc fail.");

            (void)testFile_->read(fileBuffer, bufferSize);
            if (testFile_->eof()) {
                free(fileBuffer);
                cout<<"Finish"<<endl;
                break;
            }

            if (memcpy_s(OH_AVMemory_GetAddr(buffer), OH_AVMemory_GetSize(buffer), fileBuffer, bufferSize) != EOK) {
                free(fileBuffer);
                cout<<"Fatal: memcpy fail"<<endl;
                break;
            }

            free(fileBuffer);
        }

        struct OH_AVCodecBufferAttr attr;
        if (frameCount_ == this->ES_LENGTH) {
            attr.flags = AVCODEC_BUFFER_FLAGS_EOS;
            attr.pts = 0;
            attr.size = 0;
            attr.offset = 0;
            cout<<"EOS Frame, frameCount = "<<frameCount_<<endl;
            signal_->isEOS_.store(true);
            if (testFile_ != nullptr && testFile_->is_open()){
                testFile_->close();
                if (testFile_ != nullptr){
                    testFile_ = nullptr;
                }
            }
//            this->isRunning_.store(false);
        } else {
            attr.pts = timeStamp_;
            attr.size = bufferSize;
            attr.offset = 0;
            attr.flags = AVCODEC_BUFFER_FLAGS_NONE;
            // if (frameCount_ == 0 && strcmp(MIME_TYPE, "audio/vorbis") == 0) {
            //     attr.flags = AVCODEC_BUFFER_FLAGS_CODEC_DATA;
            // } else {
            //     attr.flags = AVCODEC_BUFFER_FLAGS_NONE;
            // }
        }

        OH_AVErrCode ret = OH_AudioDecoder_PushInputData(adec_, index, attr);
        timeStamp_ += this->SAMPLE_DURATION_US;
        frameCount_ ++;
        signal_->inQueue_.pop();
        signal_->inBufferQueue_.pop();
        if (ret != AV_ERR_OK) {
            cout<<"Fatal error, exit"<<endl;
            ASSERT_EQ(AV_ERR_OK, ret);
            break;
        }
    }
    cout<<"out inputFuncLoop"<<endl;
}

void ADecNdkSample::OutputFunc()
{
    cout<<"->OutputFunc"<<endl;
    while (true) {
        if (!this->isRunning_.load()) {
            break;
        }

        unique_lock<mutex> lock(signal_->outMutex_);
        signal_->outCond_.wait(lock, [this]() {
            return (signal_->outQueue_.size() > 0);
            });
        cout<<"enter OutputFunc"<<endl;

        if (!this->isRunning_.load()) {
            break;
        }

        uint32_t index = signal_->outQueue_.front();
        auto buffer = signal_->outBufferQueue_.front();
        if (signal_->isFlushing_.load() || signal_->isStop_.load() || signal_->isEOS_.load() || buffer == nullptr) {
            signal_->outQueue_.pop();
            signal_->outSizeQueue_.pop();
            signal_->outBufferQueue_.pop();
            continue;
        }
        if (buffer == nullptr) {
            cout<<"getOutPut Buffer fail"<<endl;
        }

        uint32_t size = signal_->outSizeQueue_.front();
        cout<<"GetOutputBuffer size : "<<size<<" frameCount_ =  "<<frameCount_<<endl;

        if (this->NEED_DUMP) {
            FILE *outFile;
            outFile = fopen(this->OUT_DIR, "a");
            if (outFile == nullptr) {
                cout<<"dump data fail"<<endl;
            } else {
                fwrite(OH_AVMemory_GetAddr(buffer), 1, size, outFile);
            }
            fclose(outFile);
        }

        OH_AVErrCode ret = OH_AudioDecoder_FreeOutputData(adec_, index);
        if ( ret != AV_ERR_OK) {
            cout<<"Fatal: ReleaseOutputBuffer fail"<<endl;
            ASSERT_EQ(AV_ERR_OK, ret);
            break;
        }

        signal_->outQueue_.pop();
        signal_->outSizeQueue_.pop();
        signal_->outBufferQueue_.pop();
    }
    cout<<"out OutputFuncLoop"<<endl;
}
