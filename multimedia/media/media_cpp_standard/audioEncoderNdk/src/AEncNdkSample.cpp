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

#include <map>
#include <assert.h>
#include "gtest/gtest.h"
#include "AEncNdkSample.h"
#include "audio_info.h"

// #include "native_avmemory.h"

using namespace OHOS;
using namespace OHOS::Media;
using namespace std;


namespace {
    // constexpr uint32_t DEFAULT_SAMPLE_RATE = 44100;
    // constexpr uint32_t DEFAULT_CHANNELS = 2;
//    constexpr uint32_t SAMPLE_DURATION_US = 23000;
//    constexpr uint32_t SAMPLE_SIZE = 4096; // 23ms， aac编码需要1024个采样点
//    constexpr uint32_t ES_LENGTH = 1500;
//    constexpr bool NEED_DUMP = true;
//    const string MIME_TYPE = "audio/mp4a-latm";
//    const char * INP_DIR = "/data/media/S16LE.pcm";
//    const char * OUT_DIR = "/data/media/S16LE_out.aac";
}


void AencAsyncError(OH_AVCodec *codec, int32_t errorCode, void *userData)
{
    cout<<"Error errorCode="<<errorCode<<endl;
    ASSERT_EQ(AV_ERR_OK, errorCode);
}

void AencAsyncStreamChanged(OH_AVCodec *codec, OH_AVFormat *format, void *userData)
{
    cout<<"Format Changed"<<endl;
}

void AencAsyncNeedInputData(OH_AVCodec *codec, uint32_t index, OH_AVMemory *data, void *userData)
{
    AEncSignal* signal_ = static_cast<AEncSignal *>(userData);
    unique_lock<mutex> lock(signal_->inMutex_);
    if (signal_->isFlushing_.load() || signal_->isStop_.load()) {
        return;
    }
    cout<<"InputAvailable, index = "<<index<<endl;
    signal_->inQueue_.push(index);
    signal_->inBufferQueue_.push(data);
    signal_->inCond_.notify_all();
}

void AencAsyncNewOutputData(OH_AVCodec *codec, uint32_t index, OH_AVMemory *data, OH_AVCodecBufferAttr *attr, void *userData)
{
    AEncSignal* signal_ = static_cast<AEncSignal *>(userData);
    unique_lock<mutex> lock(signal_->outMutex_);
    if (signal_->isFlushing_.load() || signal_->isStop_.load()) {
        return;
    }
    cout<<"OutputAvailable, index = "<<index<<endl;
    signal_->outQueue_.push(index);
    signal_->outSizeQueue_.push(attr->size);
    signal_->outBufferQueue_.push(data);
    signal_->outCond_.notify_all();
}


void AEncNdkSample::init(const char * out_dir, const char * inp_dir, uint32_t sample_size,
                         uint32_t es_length, uint32_t sample_duration_us ){
    this->isRunning_.store(false);
    this->SAMPLE_DURATION_US = sample_duration_us;
    this->SAMPLE_SIZE = sample_size; // 23ms， aac编码需要1024个采样点
    this->ES_LENGTH = es_length;
    this->NEED_DUMP = true;
    this->INP_DIR = inp_dir;
    this->OUT_DIR = out_dir;
    cout<<"this->SAMPLE_DURATION_US: "<<this->SAMPLE_DURATION_US<<endl;
    cout<<"this->SAMPLE_SIZE: "<<this->SAMPLE_SIZE<<endl;
    cout<<"this->ES_LENGTH: "<<this->ES_LENGTH<<endl;
    cout<<"this->NEED_DUMP: "<<this->NEED_DUMP<<endl;
    cout<<"this->INP_DIR: "<<this->INP_DIR<<endl;
    cout<<"this->OUT_DIR: "<<this->OUT_DIR<<endl;
    cout<<"init finish "<<endl;
}

AEncNdkSample::~AEncNdkSample()
{
    //OH_AVCODEC_DestroyAudioEncoder(aenc_);
    Release();
    delete signal_;
    signal_ = nullptr;
}

struct OH_AVCodec* AEncNdkSample::CreateAudioEncoder(uint32_t codecType)
{
    cout<<"codecType "<<codecType<<endl;
    switch(codecType){
        case 0:{
            aenc_ = OH_AudioEncoder_CreateByMime("audio/mp4a-latm");
            break;
        }
        case 1:{
            aenc_ = OH_AudioEncoder_CreateByName("avenc_aac");
            break;
        }
    }
    NDK_CHECK_AND_RETURN_RET_LOG(aenc_ != nullptr, nullptr, "Fatal: OH_AudioEncoder_CreateByMime");

    signal_ = new AEncSignal();
    NDK_CHECK_AND_RETURN_RET_LOG(signal_ != nullptr, nullptr, "Fatal: No Memory");

    cb_.onError = AencAsyncError;
    cb_.onStreamChanged = AencAsyncStreamChanged;
    cb_.onNeedInputData = AencAsyncNeedInputData;
    cb_.onNeedOutputData = AencAsyncNewOutputData;
    int32_t ret = OH_AudioEncoder_SetCallback(aenc_, cb_, static_cast<void *>(signal_));
    cout<<"OH_AVCODEC_AudioEncoderSetCallback ret:"<<ret<<endl;
    NDK_CHECK_AND_RETURN_RET_LOG(ret == AV_ERR_OK, NULL, "Fatal: OH_AudioEncoder_SetCallback");
    return aenc_;
}

bool AEncNdkSample::SetFormat(struct OH_AVFormat *format, map<string, int> value){
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

int32_t AEncNdkSample::Configure(struct OH_AVFormat *format)
{
    cout<<"->Configure"<<endl;
    return OH_AudioEncoder_Configure(aenc_, format);
}


int32_t AEncNdkSample::Prepare()
{
    cout<<"->Prepare"<<endl;
    return OH_AudioEncoder_Prepare(aenc_);
}

int32_t AEncNdkSample::Start()
{
    cout<<"->Start"<<endl;
    signal_->isStop_.store(false);
    signal_->isFlushing_.store(false);
    this->isRunning_.store(true);

    if(testFile_ == nullptr){
        testFile_ = std::make_unique<std::ifstream>();
        NDK_CHECK_AND_RETURN_RET_LOG(testFile_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");
        testFile_->open(this->INP_DIR, std::ios::in | std::ios::binary);
    }

    if (inputLoop_ == nullptr){
        inputLoop_ = make_unique<thread>(&AEncNdkSample::InputFunc, this);
        NDK_CHECK_AND_RETURN_RET_LOG(inputLoop_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");
    }

    if (outputLoop_ == nullptr){
        outputLoop_ = make_unique<thread>(&AEncNdkSample::OutputFunc, this);
        NDK_CHECK_AND_RETURN_RET_LOG(outputLoop_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");
    }

    return OH_AudioEncoder_Start(aenc_);
}

int32_t AEncNdkSample::Stop()
{
    unique_lock<mutex> outLock0(signal_->outMutex_);
    unique_lock<mutex> inLock0(signal_->inMutex_);
    signal_->isStop_.store(true);
    outLock0.unlock();
    inLock0.unlock();
    int32_t ret = OH_AudioEncoder_Stop(aenc_); // 不能上锁，否则会阻塞回调，导致执行结束后，阻塞的回调往队列里push无效的index
    unique_lock<mutex> outLock(signal_->outMutex_);
    unique_lock<mutex> inLock(signal_->inMutex_);

    cout<<"stopping .."<<endl;

    ClearIntQueue(signal_->outQueue_);
    ClearIntQueue(signal_->outSizeQueue_);
    ClearBufferQueue(signal_->outBufferQueue_);
    cout<<"signal_->inQuoutQueue_eue_ size = "<<signal_->outQueue_.size()<<endl;
    cout<<"signal_->outSizeQueue_ size = "<<signal_->outSizeQueue_.size()<<endl;
    cout<<"signal_->outBufferQueue_ size = "<<signal_->outBufferQueue_.size()<<endl;

    ClearIntQueue(signal_->inQueue_);
    ClearBufferQueue(signal_->inBufferQueue_);
    cout<<"signal_->inQueue_ size = "<<signal_->inQueue_.size()<<endl;
    cout<<"signal_->inBufferQueue_ size = "<<signal_->inBufferQueue_.size()<<endl;

//    signal_->isStop_.store(false);

    return ret;
}

void AEncNdkSample::ClearAllQueue()
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

void AEncNdkSample::ClearIntQueue(std::queue<uint32_t> &q)
{
    std::queue<uint32_t> empty;
    swap(empty, q);
}

void AEncNdkSample::ClearBufferQueue(std::queue<OH_AVMemory *> &q)
{
    std::queue<OH_AVMemory *> empty;
    swap(empty, q);
}

int32_t AEncNdkSample::Flush()
{
    unique_lock<mutex> outLock0(signal_->outMutex_);
    unique_lock<mutex> inLock0(signal_->inMutex_);
    signal_->isFlushing_.store(true);
    outLock0.unlock();
    inLock0.unlock();
    int32_t ret = OH_AudioEncoder_Flush(aenc_); // 不能上锁，否则会阻塞回调，导致执行结束后，阻塞的回调往队列里push无效的index
    cout<<"flushing .."<<endl;
    ClearAllQueue();
//    signal_->isFlushing_.store(false);

    return ret;
}

int32_t AEncNdkSample::Reset()
{
    cout<<"->Reset"<<endl;
    unique_lock<mutex> outLock0(signal_->outMutex_);
    unique_lock<mutex> inLock0(signal_->inMutex_);
    signal_->isStop_.store(true);
    outLock0.unlock();
    inLock0.unlock();
    int32_t ret = OH_AudioEncoder_Reset(aenc_);
    cout<<"reseting .."<<endl;
    ClearAllQueue();

    return ret;
}

int32_t AEncNdkSample::Release()
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
    if (aenc_ != nullptr) {
	    ret = OH_AudioEncoder_Destroy(aenc_);
	    if (testFile_ != nullptr && testFile_->is_open()){
            testFile_->close();
            if (testFile_ != nullptr){
                testFile_ = nullptr;
            }
        }
        aenc_ = (ret == AV_ERR_OK) ? nullptr : aenc_;
    }
	return ret;
}

int32_t AEncNdkSample::SetParameter(OH_AVFormat *format)
{
    return OH_AudioEncoder_SetParameter(aenc_, format);
}

uint32_t AEncNdkSample::GetFrameCount()
{
    return frameCount_;
}

void AEncNdkSample::InputFunc()
{
    cout<<"->InputFunc"<<endl;
    while (true) {
        if (!this->isRunning_.load()) {
            break;
        }

        unique_lock<mutex> lock(signal_->inMutex_);
        signal_->inCond_.wait(lock, [this]() {
            // return signal_->inQueue_.size() > 0 && !signal_->isFlushing_.load();
            return signal_->inQueue_.size() > 0;
        });

        if (!this->isRunning_.load()) {
            break;
        }

        uint32_t index = signal_->inQueue_.front();
        if (signal_->isFlushing_.load() || signal_->isStop_.load() ) {
            signal_->inQueue_.pop();
            signal_->inBufferQueue_.pop();
            cout<<"isFlushing_ or isStop_, OutputFunc pop"<<endl;
            continue;
        }
        OH_AVMemory *buffer = reinterpret_cast<OH_AVMemory *>(signal_->inBufferQueue_.front());
        NDK_CHECK_AND_RETURN_LOG(buffer != nullptr, "Fatal: GetInputBuffer fail");
//        cout<<"testFile_: "<<testFile_<<endl;
//        cout<<"testFile_.isopen: "<<testFile_->is_open()<<endl;
        NDK_CHECK_AND_RETURN_LOG(testFile_ != nullptr && testFile_->is_open(), "Fatal: open file fail");
        if (frameCount_ < ES_LENGTH) {
		    char *fileBuffer = (char *)malloc(sizeof(char) * this->SAMPLE_SIZE + 1);
		    NDK_CHECK_AND_RETURN_LOG(fileBuffer != nullptr, "Fatal: malloc fail");

		    (void)testFile_->read(fileBuffer, this->SAMPLE_SIZE);
		    if (testFile_->eof()) {
		        free(fileBuffer);
		        cout<<"Finish"<<endl;
		        break;
		    }

		    if (memcpy_s(OH_AVMemory_GetAddr(buffer), OH_AVMemory_GetSize(buffer), fileBuffer, this->SAMPLE_SIZE) != EOK) {
		        free(fileBuffer);
		        cout<<"Fatal: memcpy fail"<<endl;
		        break;
		    }
		    free(fileBuffer);
        }

        struct OH_AVCodecBufferAttr attr;
        attr.offset = 0;
        if (frameCount_ == this->ES_LENGTH) {
            attr.flags = AVCODEC_BUFFER_FLAGS_EOS;
            attr.size = 0;
            attr.pts = 0;
            cout<<"EOS Frame, frameCount = "<<frameCount_<<endl;
            this->isRunning_.store(false);
        } else {
            attr.flags = AVCODEC_BUFFER_FLAGS_NONE;
            attr.size = this->SAMPLE_SIZE;
            attr.pts = timeStamp_;
        }

        OH_AVErrCode ret = OH_AudioEncoder_PushInputData(aenc_, index, attr);

        timeStamp_ += this->SAMPLE_DURATION_US;
        frameCount_ ++;
        signal_->inQueue_.pop();
        signal_->inBufferQueue_.pop();

        if (ret != AV_ERR_OK) {
            cout<<"Fatal PushInputData error, exit"<<endl;
            ASSERT_EQ(AV_ERR_OK, ret);
            break;
        }
    }
    cout<<"out inputFuncLoop"<<endl;
}

void AEncNdkSample::OutputFunc()
{
    cout<<"->OutputFunc"<<endl;
    while (true) {
        if (!this->isRunning_.load()) {
            break;
        }

        unique_lock<mutex> lock(signal_->outMutex_);
        signal_->outCond_.wait(lock, [this]() {
            return signal_->outQueue_.size() > 0;
            // return signal_->outQueue_.size() > 0 && !signal_->isFlushing_.load();
            });

        if (!this->isRunning_.load()) {
            break;
        }

        uint32_t index = signal_->outQueue_.front();
        if (signal_->isFlushing_.load() || signal_->isStop_.load()) {
            signal_->outQueue_.pop();
            signal_->outSizeQueue_.pop();
            signal_->outBufferQueue_.pop();
            cout<<"isFlushing_ or isStop_, OutputFunc pop"<<endl;
            continue;
        }
        auto buffer = signal_->outBufferQueue_.front();
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

        OH_AVErrCode ret = OH_AudioEncoder_FreeOutputData(aenc_, index);
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
