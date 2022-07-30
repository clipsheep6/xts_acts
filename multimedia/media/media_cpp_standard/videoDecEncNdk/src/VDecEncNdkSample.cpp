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

#include "VDecEncNdkSample.h"
#include "ndk_av_memory.h"
#include "audio_info.h"
#include "av_common.h"
#include "avcodec_video_encoder.h"
#include "avcodec_video_decoder.h"


using namespace OHOS;
using namespace OHOS::Media;
using namespace std;

namespace {
    constexpr uint32_t SAMPLE_DURATION_US = 23000;
    constexpr bool NEED_DUMP = true;
    // const char * INP_DIR = "/data/media/out_320_240_10s.h264";
    // const char * OUT_DIR = "/data/media/out_320_240_10s.mpeg4";
    constexpr uint32_t ES[] = {
        2106, 11465, 321, 72, 472, 68, 76, 79, 509, 90, 677, 88, 956, 99, 347, 77, 452, 681, 81, 1263, 94, 106, 97,
        998, 97, 797, 93, 1343, 150, 116, 117, 926, 1198, 128, 110, 78, 1582, 158, 135, 112, 1588, 165, 132,
        128, 1697, 168, 149, 117, 1938, 170, 141, 142, 1830, 106, 161, 122, 1623, 160, 154, 156, 1998, 230,
        177, 139, 1650, 186, 128, 134, 1214, 122, 1411, 120, 1184, 128, 1591, 195, 145, 105, 1587, 169, 140,
        118, 1952, 177, 150, 161, 1437, 159, 123, 1758, 180, 165, 144, 1936, 214, 191, 175, 2122, 180, 179,
        160, 1927, 161, 184, 119, 1973, 218, 210, 129, 1962, 196, 127, 154, 2308, 173, 127, 1572, 142, 122,
        2065, 262, 159, 206, 2251, 269, 179, 170, 2056, 308, 168, 191, 2090, 303, 191, 110, 1932, 272, 162,
        122, 1877, 245, 167, 141, 1908, 294, 162, 118, 1493, 132, 1782, 273, 184, 133, 1958, 274, 180, 149,
        2070, 216, 169, 143, 1882, 224, 149, 139, 1749, 277, 184, 139, 2141, 197, 170, 140, 2002, 269, 162,
        140, 1862, 202, 179, 131, 1868, 214, 164, 140, 1546, 226, 150, 130, 1707, 162, 146, 1824, 181, 147,
        130, 1898, 209, 143, 131, 1805, 180, 148, 106, 1776, 147, 141, 1572, 177, 130, 105, 1776, 178, 144,
        122, 1557, 142, 124, 114, 1436, 143, 126, 1326, 127, 1755, 169, 127, 105, 1807, 177, 131, 134, 1613,
        187, 137, 136, 1314, 134, 118, 2005, 194, 129, 147, 1566, 185, 132, 131, 1236, 174, 137, 106, 11049,
        574, 126, 1242, 188, 130, 119, 1450, 187, 137, 141, 1116, 124, 1848, 138, 122, 1605, 186, 127, 140,
        1798, 170, 124, 121, 1666, 157, 128, 130, 1678, 135, 118, 1804, 169, 135, 125, 1837, 168, 124, 124}; // replace of self frame length
    constexpr uint32_t ES_LENGTH = sizeof(ES) / sizeof(uint32_t);
    // const string MIME_TYPE_DEC = "video/avc";
    // const string MIME_TYPE_ENC = "video/mp4v-es";
}

void VdecAsyncError(AVCodec *codec, int32_t errorCode, void *userData)
{
    cout << "DEC Error errorCode=" << errorCode << endl;
    VDecEncSignal* vcodecSignal_ = static_cast<VDecEncSignal *>(userData);
    vcodecSignal_->errorNum_ += 1;
}

void VdecAsyncStreamChanged(AVCodec *codec, AVFormat *format, void *userData)
{
    cout << "DEC Format Changed" << endl;
}
void VdecAsyncNeedInputData(AVCodec *codec, uint32_t index, AVMemory *data, void *userData)
{
    VDecEncSignal* vcodecSignal_ = static_cast<VDecEncSignal *>(userData);
    // cout << "DEC InputAvailable, index = " << index << endl;
    unique_lock<mutex> lock(vcodecSignal_->inMutexDec_);
    vcodecSignal_->inQueueDec_.push(index);
    vcodecSignal_->inBufferQueueDec_.push(data);
    vcodecSignal_->inCondDec_.notify_all();
}

void VdecAsyncNewOutputData(AVCodec *codec, uint32_t index, AVMemory *data, AVCodecBufferAttr *attr, void *userData)
{
    VDecEncSignal* vcodecSignal_ = static_cast<VDecEncSignal *>(userData);
    // cout << "DEC OutputAvailable, index = " << index << endl;
    unique_lock<mutex> lock(vcodecSignal_->outMutexDec_);
    vcodecSignal_->outQueueDec_.push(index);
    // cout << "DEC outQueueDec_.size() is " << vcodecSignal_->outQueueDec_.size() << endl;
    vcodecSignal_->flagQueueDec_.push(attr->flags);
    // vcodecSignal_->outBufferQueueDec_.push(data);
    vcodecSignal_->outCondDec_.notify_all();
}


void VencAsyncError(AVCodec *codec, int32_t errorCode, void *userData)
{
    cout << "ENC Error errorCode=" << errorCode << endl;
    VDecEncSignal* vcodecSignal_ = static_cast<VDecEncSignal *>(userData);
    vcodecSignal_->errorNum_ += 1;
}

void VencAsyncStreamChanged(AVCodec *codec, AVFormat *format, void *userData)
{
    cout << "ENC Format Changed" << endl;
}

void VencAsyncNewOutputData(AVCodec *codec, uint32_t index, AVMemory *data, AVCodecBufferAttr *attr, void *userData)
{
    VDecEncSignal* vcodecSignal_ = static_cast<VDecEncSignal *>(userData);
    // cout << "ENC OutputAvailable, index = " << index << endl;
    unique_lock<mutex> lock(vcodecSignal_->outMutexEnc_);
    vcodecSignal_->outQueueEnc_.push(index);
    vcodecSignal_->sizeQueueEnc_.push(attr->size);
    vcodecSignal_->outBufferQueueEnc_.push(data);
    vcodecSignal_->outCondEnc_.notify_all();
}


void clearIntqueue (std::queue<uint32_t>& q) {
    std::queue<uint32_t> empty;
    swap(empty, q);
}

void clearBufferqueue (std::queue<AVMemory *>& q) {
    std::queue<AVMemory *> empty;
    swap(empty, q);
}



VDecEncNdkSample::~VDecEncNdkSample()
{
    OH_AVCODEC_DestroyVideoDecoder(vdec_);
    OH_AVCODEC_DestroyVideoDecoder(venc_);

    delete vcodecSignal_;
    vcodecSignal_ = nullptr;

}

void VDecEncNdkSample::SetReadPath(std::string filepath)
{
    inFile_ = filepath;
    testFile_ = std::make_unique<std::ifstream>();
    if (testFile_ != nullptr) {
        cout << "create testFile_ Fail" << endl;
    }
    testFile_->open(inFile_, std::ios::in | std::ios::binary);
}

void VDecEncNdkSample::SetSavePath(std::string filepath)
{
    outFile_ = filepath;
}

void VDecEncNdkSample::ReRead()
{
    // testFile_ = nullptr;
    // NDK_CHECK_AND_RETURN_RET_LOG(testFile_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");
    if (testFile_ != nullptr) {
        testFile_->close();
        cout << "ReRead close before file success "<< endl;
    }
    cout << "ReRead inFile is " << inFile_ << endl;
    testFile_->open(inFile_, std::ios::in | std::ios::binary);
    if (testFile_ != nullptr) {
        cout << "testFile open success" << endl;
    }
    decInCnt_ = 0;
    // timeStampDec_ = 0;
}

void VDecEncNdkSample::ResetParam()
{
    decInCnt_ = 0;
    decOutCnt_ = 0;
    encOutCnt_ = 0;
    flushFlag = true;
    unique_lock<mutex> lock(vcodecSignal_->inMutexDec_);
    clearIntqueue(vcodecSignal_->inQueueDec_);
    clearBufferqueue(vcodecSignal_->inBufferQueueDec_);
    vcodecSignal_->inCondDec_.notify_all();
    lock.unlock();
    unique_lock<mutex> lock2(vcodecSignal_->outMutexDec_);
    clearIntqueue(vcodecSignal_->outQueueDec_);
    clearIntqueue(vcodecSignal_->flagQueueDec_);
    clearBufferqueue(vcodecSignal_->outBufferQueueDec_);
    vcodecSignal_->outCondDec_.notify_all();
    lock2.unlock();
    unique_lock<mutex> lock3(vcodecSignal_->outMutexEnc_);
    clearIntqueue(vcodecSignal_->outQueueEnc_);
    clearIntqueue(vcodecSignal_->sizeQueueEnc_);
    clearBufferqueue(vcodecSignal_->outBufferQueueEnc_);
    vcodecSignal_->outCondEnc_.notify_all();
    lock3.unlock();
    flushFlag = false;
    isDecRunning_.store(true);
    cout << "isDecRunning_.load() is " << isDecRunning_.load() << endl;
    isEncRunning_.store(true);
    cout << "isEncRunning_.load() is " << isEncRunning_.load() << endl;
}


struct AVCodec* VDecEncNdkSample::CreateVideoDecoder(std::string mimetype)
{
    vdec_ = OH_AVCODEC_CreateVideoDecoderByMime(mimetype.c_str());
    NDK_CHECK_AND_RETURN_RET_LOG(vdec_ != nullptr, nullptr, "Fatal: OH_AVCODEC_CreateVideoDecoderByMime");
    
    if (vcodecSignal_ == nullptr) {
        vcodecSignal_ = new VDecEncSignal();
        NDK_CHECK_AND_RETURN_RET_LOG(vcodecSignal_ != nullptr, nullptr, "Fatal: No Memory");
    }
    cbDec_.onAsyncError = VdecAsyncError;
    cbDec_.onAsyncStreamChanged = VdecAsyncStreamChanged;
    cbDec_.onAsyncNeedInputData = VdecAsyncNeedInputData;
    cbDec_.onAsyncNewOutputData = VdecAsyncNewOutputData;
    int32_t ret = OH_AVCODEC_VideoDecoderSetCallback(vdec_, cbDec_, static_cast<void *>(vcodecSignal_));
    NDK_CHECK_AND_RETURN_RET_LOG(ret == AV_ERR_OK, NULL, "Fatal: OH_AVCODEC_VideoDecoderSetCallback");
    // return codec;
    return vdec_;
}


int32_t VDecEncNdkSample::ConfigureDec(struct AVFormat *format)
{
    return OH_AVCODEC_VideoDecoderConfigure(vdec_, format);
}


int32_t VDecEncNdkSample::PrepareDec()
{
    return OH_AVCODEC_VideoDecoderPrepare(vdec_);
}

int32_t VDecEncNdkSample::StartDec()
{
    isDecRunning_.store(true);

    inputLoopDec_ = make_unique<thread>(&VDecEncNdkSample::InputFuncDec, this);
    NDK_CHECK_AND_RETURN_RET_LOG(inputLoopDec_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");

    outputLoopDec_ = make_unique<thread>(&VDecEncNdkSample::OutputFuncDec, this);
    NDK_CHECK_AND_RETURN_RET_LOG(outputLoopDec_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");

    return OH_AVCODEC_VideoDecoderStart(vdec_);
}

int32_t VDecEncNdkSample::StopDec()
{
    isDecRunning_.store(false);

    if (inputLoopDec_ != nullptr && inputLoopDec_->joinable()) {
        unique_lock<mutex> lock(vcodecSignal_->inMutexDec_);
        vcodecSignal_->inQueueDec_.push(10000);
        vcodecSignal_->inCondDec_.notify_all();
        lock.unlock();
        inputLoopDec_->join();
        inputLoopDec_.reset();
    }

    if (outputLoopDec_ != nullptr && outputLoopDec_->joinable()) {
        unique_lock<mutex> lock(vcodecSignal_->outMutexDec_);
        vcodecSignal_->outQueueDec_.push(10000);
        vcodecSignal_->outCondDec_.notify_all();
        lock.unlock();
        outputLoopDec_->join();
        outputLoopDec_.reset();
    }

    return OH_AVCODEC_VideoDecoderStop(vdec_);
}

int32_t VDecEncNdkSample::FlushDec()
{   
    cout << "ENTER DEC FLUSH" << endl;
    flushFlag = true;
    int32_t ret =  OH_AVCODEC_VideoDecoderFlush(vdec_);
    unique_lock<mutex> lock(vcodecSignal_->inMutexDec_);
    clearIntqueue(vcodecSignal_->inQueueDec_);
    clearBufferqueue(vcodecSignal_->inBufferQueueDec_);
    vcodecSignal_->inCondDec_.notify_all();
    lock.unlock();
    unique_lock<mutex> lock2(vcodecSignal_->outMutexDec_);
    clearIntqueue(vcodecSignal_->outQueueDec_);
    clearIntqueue(vcodecSignal_->flagQueueDec_);
    clearBufferqueue(vcodecSignal_->outBufferQueueDec_);
    vcodecSignal_->outCondDec_.notify_all();
    lock2.unlock();
    flushFlag = false;
    cout << "EXIT DEC FLUSH" << endl;
    return ret;
}

int32_t VDecEncNdkSample::ResetDec()
{
    return OH_AVCODEC_VideoDecoderReset(vdec_);
}

int32_t VDecEncNdkSample::ReleaseDec()
{

    OH_AVCODEC_DestroyVideoDecoder(vdec_);
    return AV_ERR_OK;
}


void VDecEncNdkSample::InputFuncDec()
{
    while (true) {
        cout << "ENTER DEC IN" << endl;
        if (!isDecRunning_.load()) {
            break;
        }

        unique_lock<mutex> lock(vcodecSignal_->inMutexDec_);
        vcodecSignal_->inCondDec_.wait(lock, [this](){ return vcodecSignal_->inQueueDec_.size() > 0; });

        if (!isDecRunning_.load()) {
            break;
        }

        uint32_t index = vcodecSignal_->inQueueDec_.front();
        AVMemory *buffer = reinterpret_cast<AVMemory *>(vcodecSignal_->inBufferQueueDec_.front());
        NDK_CHECK_AND_RETURN_LOG(buffer != nullptr, "Fatal: GetInputBuffer fail");
        NDK_CHECK_AND_RETURN_LOG(testFile_ != nullptr && testFile_->is_open(), "Fatal: open file fail");

        uint32_t bufferSize = 0;
        if (decInCnt_ < ES_LENGTH) {
            bufferSize = ES[decInCnt_];
            char *fileBuffer = (char *)malloc(sizeof(char) * bufferSize + 1);
            NDK_CHECK_AND_RETURN_LOG(fileBuffer != nullptr, "Fatal: malloc fail");
            (void)testFile_->read(fileBuffer, bufferSize);
            if (testFile_->eof()) {
                free(fileBuffer);
                cout << "Finish" << endl;
                break;
            }
            if (buffer == nullptr) {
                cout << "1 buffer == nullptr" << endl;
            }
            if (memcpy_s(OH_AV_MemoryGetAddr(buffer), OH_AV_MemoryGetSize(buffer), fileBuffer, bufferSize) != EOK) {
                free(fileBuffer);
                cout << "Fatal: memcpy fail" << endl;
                break;
            }
            free(fileBuffer);

        } 
        struct AVCodecBufferAttr attr;
        attr.offset = 0;
        if (decInCnt_ == ES_LENGTH) {
            attr.flags = AVCODEC_BUFFER_FLAGS_EOS;
            attr.presentationTimeUs = 0;
            attr.size = 0;
            cout << "EOS Frame, frameCount = " << decInCnt_ << endl;
            isDecRunning_.store(false);
        }
        else {
            attr.presentationTimeUs = timeStampDec_;
            attr.size = bufferSize;
            if (isFirstDecFrame_) {
                attr.flags = AVCODEC_BUFFER_FLAGS_CODEC_DATA;
                isFirstDecFrame_ = false;
            } else {
                attr.flags = AVCODEC_BUFFER_FLAGS_NONE;
            }
        }

        if (OH_AVCODEC_VideoDecoderPushInputData(vdec_, index, attr) != AV_ERR_OK) {
            cout << "Fatal: OH_AVCODEC_VideoDecoderPushInputData fail, exit" << endl;
            vcodecSignal_->errorNum_ += 1;
        } else {
            decInCnt_ ++;
            cout << "OH_AVCODEC_VideoDecoderPushInputData , decInCnt_ = " << decInCnt_ << endl;
        }

        timeStampDec_ += SAMPLE_DURATION_US;
        vcodecSignal_->inQueueDec_.pop();
        vcodecSignal_->inBufferQueueDec_.pop();
    }
}

void VDecEncNdkSample::OutputFuncDec()
{
    while (true) {
        if (!isDecRunning_.load()) {
            break;
        }

        unique_lock<mutex> lock(vcodecSignal_->outMutexDec_);
        vcodecSignal_->outCondDec_.wait(lock, [this](){ return vcodecSignal_->outQueueDec_.size() > 0; });
        // cout << "DEC outQueueDec_.size() is" << vcodecSignal_->outQueueDec_.size() << endl;

        if (!isDecRunning_.load()) {
            break;
        }

        uint32_t index = vcodecSignal_->outQueueDec_.front();
        uint32_t outflag = vcodecSignal_->flagQueueDec_.front();
        // cout << "DEC OUT. index is : " << index << endl;
        if (outflag == 0 && !flushFlag) {
            // cout << "DEC OUT. : flag is 0" << endl;
            uint32_t ret = OH_AVCODEC_VideoDecoderRenderOutputData(vdec_, index);
            if (ret == 0) {
                decOutCnt_ += 1;
                cout << "DEC OUT.: render output success, decOutCnt_ is " << decOutCnt_ << endl;
            } else {
                cout << "DEC OUT. Fatal: ReleaseOutputBuffer fail" << endl;
                vcodecSignal_->errorNum_ += 1;
                break;
            }
        } else {
            cout << "DEC OUT.: output EOS" << endl;
            //notifyEOS
        }
        vcodecSignal_->outQueueDec_.pop();
        vcodecSignal_->flagQueueDec_.pop();
    }
}


struct AVCodec* VDecEncNdkSample::CreateVideoEncoder(std::string mimetype)
{
    venc_ = OH_AVCODEC_CreateVideoEncoderByMime(mimetype.c_str());
    NDK_CHECK_AND_RETURN_RET_LOG(venc_ != nullptr, nullptr, "Fatal: OH_AVCODEC_CreateVideoEncoderByMime");
    
    if (vcodecSignal_ == nullptr) {
        vcodecSignal_ = new VDecEncSignal();
        NDK_CHECK_AND_RETURN_RET_LOG(vcodecSignal_ != nullptr, nullptr, "Fatal: No Memory");
    }
    cbEnc_.onAsyncError = VencAsyncError;
    cbEnc_.onAsyncStreamChanged = VencAsyncStreamChanged;
    cbEnc_.onAsyncNewOutputData = VencAsyncNewOutputData;
    int32_t ret = OH_AVCODEC_VideoEncoderSetCallback(venc_, cbEnc_, static_cast<void *>(vcodecSignal_));
    NDK_CHECK_AND_RETURN_RET_LOG(ret == AV_ERR_OK, NULL, "Fatal: OH_AVCODEC_VideoEncoderSetCallback");
    return venc_;
}

int32_t VDecEncNdkSample::ConfigureEnc(struct AVFormat *format)
{
    return OH_AVCODEC_VideoEncoderConfigure(venc_, format);
}

struct VEncObject : public AVCodec {
    explicit VEncObject(const std::shared_ptr<AVCodecVideoEncoder> &encoder)
        : AVCodec(AVMagic::MEDIA_MAGIC_VIDEO_ENCODER), videoEncoder_(encoder) {}
    ~VEncObject() = default;

    const std::shared_ptr<AVCodecVideoEncoder> videoEncoder_;
};

int32_t VDecEncNdkSample::GetSurface()
{
    struct VEncObject *videoEncObj = reinterpret_cast<VEncObject *>(venc_);
    NDK_CHECK_AND_RETURN_RET_LOG(videoEncObj->videoEncoder_ != nullptr, AV_ERR_INVALID_VAL, "context videoEncoder is nullptr!");

    surface_ = videoEncObj->videoEncoder_->CreateInputSurface();
    NDK_CHECK_AND_RETURN_RET_LOG(surface_ != nullptr, AV_ERR_OPERATE_NOT_PERMIT, "videoEncoder CreateInputSurface failed!");
    return AV_ERR_OK;
    // return OH_VideoEncoder_GetInputSurface(venc_, window);
}

struct VDecObject : public AVCodec {
    explicit VDecObject(const std::shared_ptr<AVCodecVideoDecoder> &decoder)
        : AVCodec(AVMagic::MEDIA_MAGIC_VIDEO_DECODER), videoDecoder_(decoder) {}
    ~VDecObject() = default;

    const std::shared_ptr<AVCodecVideoDecoder> videoDecoder_;
};

int32_t VDecEncNdkSample::SetOutputSurface()
{
    struct VDecObject *videoDecObj = reinterpret_cast<VDecObject *>(vdec_);
    NDK_CHECK_AND_RETURN_RET_LOG(videoDecObj->videoDecoder_ != nullptr, AV_ERR_INVALID_VAL, "context videoDecoder is nullptr!");

    int32_t ret = videoDecObj->videoDecoder_->SetOutputSurface(surface_);
    NDK_CHECK_AND_RETURN_RET_LOG(ret == AV_ERR_OK, AV_ERR_OPERATE_NOT_PERMIT, "videoDecoder SetOutputSurface failed!");
    return ret;
}



int32_t VDecEncNdkSample::PrepareEnc()
{
    return OH_AVCODEC_VideoEncoderPrepare(venc_);
}

int32_t VDecEncNdkSample::StartEnc()
{
    isEncRunning_.store(true);

    // inputLoopEnc_ = make_unique<thread>(&VDecEncNdkSample::InputFuncEnc, this);
    // NDK_CHECK_AND_RETURN_RET_LOG(inputLoopEnc_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");

    outputLoopEnc_ = make_unique<thread>(&VDecEncNdkSample::OutputFuncEnc, this);
    NDK_CHECK_AND_RETURN_RET_LOG(outputLoopEnc_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");

    return OH_AVCODEC_VideoEncoderStart(venc_);
}

int32_t VDecEncNdkSample::StopEnc()
{
    isEncRunning_.store(false);

    if (outputLoopEnc_ != nullptr && outputLoopEnc_->joinable()) {
        unique_lock<mutex> lock(vcodecSignal_->outMutexEnc_);
        vcodecSignal_->outQueueEnc_.push(10000);
        vcodecSignal_->outCondEnc_.notify_all();
        lock.unlock();
        outputLoopEnc_->join();
        outputLoopEnc_.reset();
    }

    return OH_AVCODEC_VideoEncoderStop(venc_);
}

int32_t VDecEncNdkSample::FlushEnc()
{
    cout << "ENTER ENC FLUSH" << endl;
    flushFlag = true;
    int32_t ret =  OH_AVCODEC_VideoEncoderFlush(venc_);
    unique_lock<mutex> lock(vcodecSignal_->outMutexEnc_);
    clearIntqueue(vcodecSignal_->outQueueEnc_);
    clearIntqueue(vcodecSignal_->sizeQueueEnc_);
    clearBufferqueue(vcodecSignal_->outBufferQueueEnc_);
    vcodecSignal_->outCondEnc_.notify_all();
    lock.unlock();
    unique_lock<mutex> lock2(vcodecSignal_->outMutexDec_);
    clearIntqueue(vcodecSignal_->outQueueDec_);
    clearIntqueue(vcodecSignal_->flagQueueDec_);
    clearBufferqueue(vcodecSignal_->outBufferQueueDec_);
    vcodecSignal_->outCondDec_.notify_all();
    lock2.unlock();
    flushFlag = false;
    cout << "EXIT ENC FLUSH" << endl;
    return ret;
}

int32_t VDecEncNdkSample::ResetEnc()
{
    return OH_AVCODEC_VideoEncoderReset(venc_);
}

int32_t VDecEncNdkSample::ReleaseEnc()
{

    OH_AVCODEC_DestroyVideoEncoder(venc_);
    return AV_ERR_OK;
}

void VDecEncNdkSample::OutputFuncEnc()
{
    while (true) {
        if (!isEncRunning_.load()) {
            break;
        }

        unique_lock<mutex> lock(vcodecSignal_->outMutexEnc_);
        vcodecSignal_->outCondEnc_.wait(lock, [this](){ return vcodecSignal_->outQueueEnc_.size() > 0; });

        if (!isEncRunning_.load()) {
            break;
        }

        uint32_t index = vcodecSignal_->outQueueEnc_.front();
        auto buffer = vcodecSignal_->outBufferQueueEnc_.front();
        if (buffer == nullptr) {
            cout << "getOutPut Buffer fail" << endl;
        }
        uint32_t size = vcodecSignal_->sizeQueueEnc_.front();
        // cout << "GetOutputBuffer size : " << size << " frameCountEnc_ =  " << frameCountEnc_ << endl;
        if (NEED_DUMP) {
            FILE *outFile;
            const char * savepath = outFile_.c_str();
            outFile = fopen(savepath, "a");
            if (outFile == nullptr) {
                cout << "dump data fail" << endl;
            } else {
                fwrite(OH_AV_MemoryGetAddr(buffer), 1, size, outFile);
            }
            fclose(outFile);
        }

        if (!flushFlag) {
            uint32_t ret = OH_AVCODEC_VideoEncoderFreeOutputData(venc_, index);
            if (ret != 0) {
                cout << "Fatal: ReleaseOutputBuffer fail" << endl;
                vcodecSignal_->errorNum_ += 1;

            } else {
                encOutCnt_ += 1;
                cout << "ENC OUT.: output success, encOutCnt_ is " << encOutCnt_ << endl;
            }
        }
        vcodecSignal_->outQueueEnc_.pop();
        vcodecSignal_->sizeQueueEnc_.pop();
        vcodecSignal_->outBufferQueueEnc_.pop();
    }
}

int32_t VDecEncNdkSample::CalcuError()
{
    cout << "errorNum_ is :" << vcodecSignal_->errorNum_ << endl;
    cout << "decInCnt_ is :" << decInCnt_ << endl;
    cout << "decOutCnt_ is :" << decOutCnt_ << endl;
    cout << "encOutCnt_ is :" << encOutCnt_ << endl;
    cout << "DEC inQueueDec_.size() is " << vcodecSignal_->inQueueDec_.size() << endl;
    cout << "DEC outQueueDec_.size() is " << vcodecSignal_->outQueueDec_.size() << endl;
    cout << "DEC outBufferQueueDec_.size() is " << vcodecSignal_->outBufferQueueDec_.size() << endl;
    cout << "DEC outQueueEnc_.size() is " << vcodecSignal_->outQueueEnc_.size() << endl;
    return vcodecSignal_->errorNum_ ;
}