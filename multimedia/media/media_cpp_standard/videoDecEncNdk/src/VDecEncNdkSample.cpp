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
// #include "audio_info.h"

#include "ndk_av_memory.h"

using namespace OHOS;
using namespace OHOS::Media;
using namespace std;

namespace {
    // constexpr uint32_t DEFAULT_SAMPLE_RATE = 44100;
    // constexpr uint32_t DEFAULT_CHANNELS = 2;
    constexpr uint32_t SAMPLE_DURATION_US = 23000;
    constexpr bool NEED_DUMP = true;
    const string MIME_TYPE = "audio/mp4a-latm";
    const char * INP_DIR = "/data/media/AAC_48000_32_1.aac";
    const char * OUT_DIR = "/data/media/AAC_48000_32_1_out.aac";
    constexpr uint32_t ES[] = {
        11895, 8109, 1578, 1616, 1313, 572, 805, 837, 755, 706, 952, 879, 13193, 422, 389, 509, 725, 465, 479, 959, 
        677, 364, 541, 696, 9306, 322, 318, 767, 590, 422, 530, 403, 505, 566, 445, 508, 7783, 460, 405, 343, 451,
        608, 431, 411, 543, 487, 527, 400, 6287, 385, 418, 391, 592, 434, 412, 398, 504, 492, 479, 561, 5413, 317,
        355, 422, 467, 452, 476, 460, 490, 492, 485, 451, 5036, 312, 408, 460, 432, 502, 388, 475, 407, 544, 401,
        487, 4404, 362, 378, 427, 416, 426, 456, 414, 438, 424, 442, 444, 4310, 362, 388, 393, 390, 441, 398, 423,
        369, 443, 406, 392, 4231, 343, 363, 355, 390, 459, 371, 378, 381, 405, 392, 426, 3975, 387, 337, 393, 439,
        378, 355, 374, 484, 381, 373, 423, 3869, 312, 350, 400, 345, 356, 320, 473, 431, 386, 338, 431, 3426, 268,
        315, 416, 383, 373, 381, 354, 383, 328, 348, 418, 3715, 324, 361, 331, 350, 302, 409, 377, 359, 384, 334,
        326, 3439, 266, 324, 329, 353, 405, 303, 357, 332, 292, 361, 333, 3542, 294, 284, 247, 331, 306, 322, 287,
        367, 341, 276, 258, 3980, 246, 245, 259, 309, 333, 250, 275, 334, 281, 253, 371, 3640, 213, 231, 301, 302,
        228, 289, 290, 281, 201, 284, 277, 4242, 205, 328, 237, 283, 295, 266, 230, 321, 348, 212, 308, 4103, 259,
        238, 245, 298, 330, 265, 271, 287, 267, 286, 290, 3856, 269, 242, 209, 314, 267, 278, 280, 314, 250, 433,
        238, 3654, 195, 246, 301, 298, 250, 270, 320, 269, 305, 258, 368, 3810, 231, 212, 279, 289, 252, 303, 287,
        295, 206, 264, 349, 4071, 242, 296, 271, 231, 307, 265, 254, 267, 317, 232, 348, 4077, 259, 222, 268, 235,
        324, 266, 256, 312, 246, 248, 325, 4000, 266, 201, 230, 293, 264, 265, 273, 301, 304, 253, 266, 3978, 228,
        232, 250, 248, 281, 219, 243, 293, 287, 253, 328, 3719}; // replace of self frame length
    constexpr uint32_t ES_LENGTH = sizeof(ES) / sizeof(uint32_t);
    constexpr uint32_t DEFAULT_WIDTH = 480;
    constexpr uint32_t DEFAULT_HEIGHT = 360;
    constexpr uint32_t DEFAULT_FRAME_RATE = 60;
    constexpr uint32_t YUV_BUFFER_SIZE = 259200; // 480 * 360 * 3 / 2
    constexpr uint32_t STRIDE_ALIGN = 8;
    constexpr uint32_t DEFAULT_FRAME_COUNT = 50;
    const string MIME_TYPE = "video/mp4v-es";
    constexpr bool NEED_DUMP = true;
    const char * OUT_DIR = "/data/media/venc_out.es";

    // constexpr uint32_t SAMPLE_SIZE = 4096; // 23ms， aac编码需要1024个采样点
    // constexpr uint32_t ES_LENGTH_ENC = 1500;
}

static BufferFlushConfig g_flushConfig = {
    .damage = {
        .x = 0,
        .y = 0,
        .w = DEFAULT_WIDTH,
        .h = DEFAULT_HEIGHT
    },
    .timestamp = 0
};

static BufferRequestConfig g_request = {
    .width = DEFAULT_WIDTH,
    .height = DEFAULT_HEIGHT,
    .strideAlignment = STRIDE_ALIGN,
    .format = PIXEL_FMT_YCRCB_420_SP,
    .usage = HBM_USE_CPU_READ | HBM_USE_CPU_WRITE | HBM_USE_MEM_DMA,
    .timeout = 0
};

void VdecAsyncError(AVCodec *codec, int32_t errorCode, void *userData)
{
    cout << "DEC Error errorCode=" << errorCode << endl;
}

void VdecAsyncStreamChanged(AVCodec *codec, AVFormat *format, void *userData)
{
    cout << "DEC Format Changed" << endl;
}
void VdecAsyncNeedInputData(AVCodec *codec, uint32_t index, AVMemory *data, void *userData)
{
    // std::shared_ptr<VDecEncSignal> vcodecSignal_ = static_cast<std::shared_ptr<VDecEncSignal>>(userData);
    VDecEncSignal* vcodecSignal_ = static_cast<VDecEncSignal *>(userData);
    cout << "DEC InputAvailable, index = " << index << endl;
    unique_lock<mutex> lock(vcodecSignal_->inMutexDec_);
    vcodecSignal_->inQueueDec_.push(index);
    vcodecSignal_->inBufferQueueDec_.push(data);
    vcodecSignal_->inCondDec_.notify_all();
}

void VdecAsyncNewOutputData(AVCodec *codec, uint32_t index, AVMemory *data, AVCodecBufferAttr *attr, void *userData)
{
    // std::shared_ptr<VDecEncSignal> vcodecSignal_ = static_cast<VDecEncSignal *>(userData);
    VDecEncSignal* vcodecSignal_ = static_cast<VDecEncSignal *>(userData);
    cout << "DEC OutputAvailable, index = " << index << endl;
    unique_lock<mutex> lock(vcodecSignal_->inMutexEnc_);
    vcodecSignal_->outQueueDec_.push(index);
    cout << "DEC outQueueDec_.size() is " << vcodecSignal_->outQueueDec_.size() << endl;
    vcodecSignal_->sizeQueueDec_.push(attr->size);
    vcodecSignal_->outBufferQueueDec_.push(data);
    vcodecSignal_->inCondEnc_.notify_all();
}


void VencAsyncError(AVCodec *codec, int32_t errorCode, void *userData)
{
    cout << "ENC Error errorCode=" << errorCode << endl;
}

void VencAsyncStreamChanged(AVCodec *codec, AVFormat *format, void *userData)
{
    cout << "ENC Format Changed" << endl;
}

void VencAsyncNeedInputData(AVCodec *codec, uint32_t index, AVMemory *data, void *userData)
{
    // std::shared_ptr<VDecEncSignal> vcodecSignal_ = static_cast<std::shared_ptr<VDecEncSignal>>(userData);
    VDecEncSignal* vcodecSignal_ = static_cast<VDecEncSignal *>(userData);
    cout << "ENC InputAvailable, index = " << index << endl;
    unique_lock<mutex> lock(vcodecSignal_->inMutexEnc_);
    vcodecSignal_->inQueueEnc_.push(index);
    cout << "ENC inQueueEnc_.size() is " << vcodecSignal_->inQueueEnc_.size() << endl;
    vcodecSignal_->inBufferQueueEnc_.push(data);
    vcodecSignal_->inCondEnc_.notify_all();
}

void VencAsyncNewOutputData(AVCodec *codec, uint32_t index, AVMemory *data, AVCodecBufferAttr *attr, void *userData)
{
    // std::shared_ptr<VDecEncSignal> vcodecSignal_ = static_cast<VDecEncSignal *>(userData);
    VDecEncSignal* vcodecSignal_ = static_cast<VDecEncSignal *>(userData);
    cout << "ENC OutputAvailable, index = " << index << endl;
    unique_lock<mutex> lock(vcodecSignal_->outMutexEnc_);
    vcodecSignal_->outQueueEnc_.push(index);
    vcodecSignal_->sizeQueueEnc_.push(attr->size);
    vcodecSignal_->outBufferQueueEnc_.push(data);
    vcodecSignal_->outCondEnc_.notify_all();
}


VDecEncNdkSample::~VDecEncNdkSample()
{
    OH_AVCODEC_DestroyVideoDecoder(vdec_);
    OH_AVCODEC_DestroyVideoDecoder(venc_);

    delete vcodecSignal_;
    vcodecSignal_ = nullptr;

    // delete vcodecSignal_;
    // vcodecSignal_ = nullptr;
}

struct AVCodec* VDecEncNdkSample::CreateVideoDecoder()
{
    vdec_ = OH_AVCODEC_CreateVideoDecoderByMime(MIME_TYPE.c_str());
    NDK_CHECK_AND_RETURN_RET_LOG(vdec_ != nullptr, nullptr, "Fatal: OH_AVCODEC_CreateVideoDecoderByMime");
    // if (vdec_ == nullptr) {
    //     return false;
    // }
    
    vcodecSignal_ = new VDecEncSignal();
    NDK_CHECK_AND_RETURN_RET_LOG(vcodecSignal_ != nullptr, nullptr, "Fatal: No Memory");

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

    testFile_ = std::make_unique<std::ifstream>();
    NDK_CHECK_AND_RETURN_RET_LOG(testFile_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");
    testFile_->open(INP_DIR, std::ios::in | std::ios::binary);

    inputLoopDec_ = make_unique<thread>(&VDecEncNdkSample::InputFuncDec, this);
    NDK_CHECK_AND_RETURN_RET_LOG(inputLoopDec_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");

    // outputLoopDec_ = make_unique<thread>(&VDecEncNdkSample::OutputFuncDec, this);
    // NDK_CHECK_AND_RETURN_RET_LOG(outputLoopDec_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");

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
        unique_lock<mutex> lock(vcodecSignal_->inMutexDec_);
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
    return OH_AVCODEC_VideoDecoderFlush(vdec_);
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

        uint32_t bufferSize = ES[frameCountDec_]; // replace with the actual size
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

        struct AVCodecBufferAttr attr;
        if (frameCountDec_ == ES_LENGTH + 1) {
            attr.flags = AVCODEC_BUFFER_FLAGS_EOS;
            attr.presentationTimeUs = 0;
            attr.size = 0;
            attr.offset = 0;
            isDecRunning_.store(false);
        } else {
            attr.presentationTimeUs = timeStampDec_;
            attr.size = bufferSize;
            attr.offset = 0;
            if (frameCountDec_ == 0 && MIME_TYPE == "audio/vorbis") {
                attr.flags = AVCODEC_BUFFER_FLAGS_CODEC_DATA;
            } else {
                attr.flags = AVCODEC_BUFFER_FLAGS_NONE;
            }
        }

        AVErrCode ret = OH_AVCODEC_VideoDecoderPushInputData(vdec_, index, attr);
        cout << "DEC framecount is " <<  frameCountDec_ << endl;

        free(fileBuffer);
        timeStampDec_ += SAMPLE_DURATION_US;
        frameCountDec_ ++;
        vcodecSignal_->inQueueDec_.pop();
        vcodecSignal_->inBufferQueueDec_.pop();
        if (ret != AV_ERR_OK) {
            cout << "Fatal error, exit" << endl;
            break;
        }
    }
}

void VDecEncNdkSample::OutputFuncDec()
{
    while (true) {
        if (!isDecRunning_.load()) {
            break;
        }

        unique_lock<mutex> lock(vcodecSignal_->inMutexDec_);
        vcodecSignal_->outCondDec_.wait(lock, [this](){ return vcodecSignal_->outQueueDec_.size() > 0; });

        if (!isDecRunning_.load()) {
            break;
        }

        uint32_t index = vcodecSignal_->outQueueDec_.front();
        auto buffer = vcodecSignal_->outBufferQueueDec_.front();
        if (buffer == nullptr) {
            cout << "getOutPut Buffer fail" << endl;
        }
        uint32_t size = vcodecSignal_->sizeQueueDec_.front();
        cout << "GetOutputBuffer size : " << size << " frameCountDec_ =  " << frameCountDec_ << endl;

        if (NEED_DUMP) {
            FILE *outFile;
            outFile = fopen(OUT_DIR, "a");
            if (outFile == nullptr) {
                cout << "dump data fail" << endl;
            } else {
                fwrite(OH_AV_MemoryGetAddr(buffer), 1, size, outFile);
            }
            fclose(outFile);
        }

        if (OH_AVCODEC_VideoDecoderFreeOutputData(vdec_, index) != AV_ERR_OK) {
            cout << "Fatal: ReleaseOutputBuffer fail" << endl;
            break;
        }

        vcodecSignal_->outQueueDec_.pop();
        vcodecSignal_->sizeQueueDec_.pop();
        vcodecSignal_->outBufferQueueDec_.pop();
    }
}


VDecEncNdkSample::~VDecEncNdkSample()
{
    OH_AVCODEC_DestroyVideoEncoder(venc_);
    delete vcodecSignal_;
    vcodecSignal_ = nullptr;
}

struct AVCodec* VDecEncNdkSample::CreateVideoEncoder(void)
{
    venc_ = OH_AVCODEC_CreateVideoEncoderByMime(MIME_TYPE.c_str());
    NDK_CHECK_AND_RETURN_RET_LOG(venc_ != nullptr, nullptr, "Fatal: OH_AVCODEC_CreateVideoEncoderByMime");
    
    // vcodecSignal_ = make_shared<VDecEncSignal>();
    // vcodecSignal_ = new VDecEncSignal();
    // NDK_CHECK_AND_RETURN_RET_LOG(vcodecSignal_ != nullptr, nullptr, "Fatal: No Memory");

    cbEnc_.onAsyncError = VencAsyncError;
    cbEnc_.onAsyncStreamChanged = VencAsyncStreamChanged;
    cbEnc_.onAsyncNeedInputData = VencAsyncNeedInputData;
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

int32_t VEncNdkSample::GetSurface()
{
    struct VEncObject *videoEncObj = reinterpret_cast<VEncObject *>(venc_);
    NDK_CHECK_AND_RETURN_RET_LOG(videoEncObj->videoEncoder_ != nullptr, AV_ERR_INVALID_VAL, "context videoEncoder is nullptr!");

    surface_ = videoEncObj->videoEncoder_->CreateInputSurface();
    NDK_CHECK_AND_RETURN_RET_LOG(surface_ != nullptr, AV_ERR_OPERATE_NOT_PERMIT, "videoEncoder CreateInputSurface failed!");
    return AV_ERR_OK;
    // return OH_VideoEncoder_GetInputSurface(venc_, window);
}

int32_t VDecEncNdkSample::PrepareEnc()
{
    return OH_AVCODEC_VideoEncoderPrepare(venc_);
}

int32_t VDecEncNdkSample::StartEnc()
{
    isEncRunning_.store(true);

    inputLoopEnc_ = make_unique<thread>(&VDecEncNdkSample::InputFuncEnc, this);
    NDK_CHECK_AND_RETURN_RET_LOG(inputLoopEnc_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");

    outputLoopEnc_ = make_unique<thread>(&VDecEncNdkSample::OutputFuncEnc, this);
    NDK_CHECK_AND_RETURN_RET_LOG(outputLoopEnc_ != nullptr, AV_ERR_UNKNOWN, "Fatal: No memory");

    return OH_AVCODEC_VideoEncoderStart(venc_);
}

int32_t VDecEncNdkSample::StopEnc()
{
    isEncRunning_.store(false);

    if (inputLoopEnc_ != nullptr && inputLoopEnc_->joinable()) {
        unique_lock<mutex> lock(vcodecSignal_->inMutexEnc_);
        vcodecSignal_->inQueueEnc_.push(10000);
        vcodecSignal_->inCondEnc_.notify_all();
        lock.unlock();
        inputLoopEnc_->join();
        inputLoopEnc_.reset();
    }

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
    return OH_AVCODEC_VideoEncoderFlush(venc_);
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


void VDecEncNdkSample::InputFuncEnc()
{
    while (true) {
        if (!isEncRunning_.load()) {
            break;
        }

        unique_lock<mutex> lock(vcodecSignal_->inMutexEnc_);
        vcodecSignal_->inCondEnc_.wait(lock, [this](){ return vcodecSignal_->inQueueEnc_.size() > 0; });
        vcodecSignal_->inCondEnc_.wait(lock, [this](){ return vcodecSignal_->outQueueDec_.size() > 0; });

        if (!isEncRunning_.load()) {
            break;
        }

        cout << "start get buffer from decoder into encoder " << endl;

        uint32_t indexEnc = vcodecSignal_->inQueueEnc_.front();
        AVMemory *bufferEnc = reinterpret_cast<AVMemory *>(vcodecSignal_->inBufferQueueEnc_.front());
        NDK_CHECK_AND_RETURN_LOG(bufferEnc != nullptr, "Fatal: GetEncInputBuffer fail");

        uint32_t indexDec = vcodecSignal_->outQueueDec_.front();
        AVMemory * bufferDec = vcodecSignal_->outBufferQueueDec_.front();
        uint32_t sizeDecOut = vcodecSignal_->sizeQueueDec_.front();
        cout << "GetDecOutputBuffer size : " << sizeDecOut << endl;

        // char *fileBuffer = (char *)malloc(sizeof(char) * SAMPLE_SIZE + 1);
        // NDK_CHECK_AND_RETURN_LOG(fileBuffer != nullptr, "Fatal: malloc fail");


        if (memcpy_s(OH_AV_MemoryGetAddr(bufferEnc), OH_AV_MemoryGetSize(bufferEnc), OH_AV_MemoryGetAddr(bufferDec), sizeDecOut) != EOK) {
            cout << "Fatal: memcpy fail" << endl;
            break;
        }

        cout << "DEC-ENC: get buffer from Dec to ENC success" << endl;


        struct AVCodecBufferAttr attr;
        attr.offset = 0;
        attr.size = sizeDecOut;
        attr.presentationTimeUs = timeStampEnc_;
        attr.flags = AVCODEC_BUFFER_FLAGS_NONE;
        
        if (OH_AVCODEC_VideoDecoderFreeOutputData(vdec_, indexDec) != AV_ERR_OK) {
            cout << "Fatal: ReleaseDecOutputBuffer fail" << endl;
            break;
        }
        vcodecSignal_->outQueueDec_.pop();
        vcodecSignal_->sizeQueueDec_.pop();
        vcodecSignal_->outBufferQueueDec_.pop();

        AVErrCode ret = OH_AVCODEC_VideoEncoderPushInputData(venc_, indexEnc, attr);
        if (ret != AV_ERR_OK) {
            cout << "Fatal error, exit" << endl;
            break;
        }
        timeStampEnc_ += SAMPLE_DURATION_US;
        frameCountEnc_ ++;
        vcodecSignal_->inQueueEnc_.pop();
        vcodecSignal_->inBufferQueueEnc_.pop();
    }
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
        cout << "GetOutputBuffer size : " << size << " frameCountEnc_ =  " << frameCountEnc_ << endl;
        if (NEED_DUMP) {
            FILE *outFile;
            outFile = fopen(OUT_DIR, "a");
            if (outFile == nullptr) {
                cout << "dump data fail" << endl;
            } else {
                fwrite(OH_AV_MemoryGetAddr(buffer), 1, size, outFile);
            }
            fclose(outFile);
        }

        if (OH_AVCODEC_VideoEncoderFreeOutputData(venc_, index) != AV_ERR_OK) {
            cout << "Fatal: ReleaseOutputBuffer fail" << endl;
            break;
        }

        vcodecSignal_->outQueueEnc_.pop();
        vcodecSignal_->sizeQueueEnc_.pop();
        vcodecSignal_->outBufferQueueEnc_.pop();
    }
}
