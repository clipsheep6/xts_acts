/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "napi/native_api.h"
#include <condition_variable>
#include <fstream>
#include <hilog/log.h>
#include <iostream>
#include <js_native_api_types.h>
#include <multimedia/player_framework/native_avcapability.h>
#include <multimedia/player_framework/native_avcodec_base.h>
#include <multimedia/player_framework/native_avcodec_videoencoder.h>
#include <multimedia/player_framework/native_avformat.h>
#include <native_window/external_window.h>
#include <pthread.h>
#include <queue>

#define FAIL (-1)
#define SUCCESS 0
#define PARAM_0 0
#define PARAM_1 1
#define PARAM_2 2
#define PARAM_3 3
#define PARAM_4 4
#define PARAM_5 5
#define PARAM_6 6
#define PARAM_7 7
#define PARAM_12 12
using namespace std;

constexpr uint32_t DEFAULT_WIDTH = 320;

constexpr uint32_t DEFAULT_HEIGHT = 240;

constexpr OH_AVPixelFormat DEFAULT_PIXELFORMAT = AV_PIXEL_FORMAT_YUVI420;

class VDecSignal {
public:
    std::mutex inMutex_;
    std::mutex outMutex_;
    std::condition_variable inCond_;
    std::condition_variable outCond_;
    std::queue<uint32_t> inQueue_;
    std::queue<uint32_t> outQueue_;
    std::queue<OH_AVMemory *> inBufferQueue_;
    std::queue<OH_AVMemory *> outBufferQueue_;
    std::queue<OH_AVCodecBufferAttr> attrQueue_;
};
static VDecSignal *g_signal = new VDecSignal();
static void OnError(OH_AVCodec *codec, int32_t errorCode, void *userData)
{
    (void)codec;
    (void)errorCode;
    (void)userData;
}

static void OnStreamChanged(OH_AVCodec *codec, OH_AVFormat *format, void *userData)
{
    (void)codec;
    (void)format;
    (void)userData;
}

static void OnNeedInputData(OH_AVCodec *codec, uint32_t index, OH_AVMemory *mem, void *userData)
{
    g_signal = static_cast<class VDecSignal *>(userData);
    unique_lock<mutex> lock(g_signal->inMutex_);
    g_signal->inQueue_.push(index);
    g_signal->inBufferQueue_.push(mem);
    g_signal->inCond_.notify_all();
}

static void OnNeedOutputData(OH_AVCodec *codec, uint32_t index, OH_AVMemory *mem, OH_AVCodecBufferAttr *attr,
                             void *userData)
{
    g_signal = static_cast<class VDecSignal *>(userData);
    unique_lock<mutex> outlock(g_signal->outMutex_);
    g_signal->outQueue_.push(index);
    g_signal->outBufferQueue_.push(mem);
    g_signal->outCond_.notify_all();
}

static napi_value OHVideoEncoderGetSurface(napi_env env, napi_callback_info info)
{
    size_t argc = 6;
    napi_value args[6] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    int firstParam;
    int secondParam;
    int thirdParam;
    int fourthParam;
    int fifthParam;
    int sixthParam;
    const char *mimeType = nullptr;
    napi_get_value_int32(env, args[PARAM_0], &firstParam);
    napi_get_value_int32(env, args[PARAM_1], &secondParam);
    napi_get_value_int32(env, args[PARAM_2], &thirdParam);
    napi_get_value_int32(env, args[PARAM_3], &fourthParam);
    napi_get_value_int32(env, args[PARAM_4], &fifthParam);
    napi_get_value_int32(env, args[PARAM_5], &sixthParam);

    int backParam = FAIL;
    napi_value result = nullptr;
    OH_AVCodec *videoEnc = nullptr;
    OH_AVErrCode checkParam;
    OH_AVFormat *format = nullptr;
    OHNativeWindow *nativeWindow;
    void *pSurface = nullptr;

    if (firstParam == PARAM_1) {
        mimeType = OH_AVCODEC_MIMETYPE_VIDEO_AVC;
    } else if (firstParam == PARAM_0) {
        mimeType = nullptr;
    } else if (firstParam == PARAM_2) {
        mimeType = OH_AVCODEC_MIMETYPE_VIDEO_HEVC;
    }

    if (secondParam == PARAM_1) {
        videoEnc = OH_VideoEncoder_CreateByMime(mimeType);
    } else if (secondParam == PARAM_0) {
        videoEnc = nullptr;
    }

    if (thirdParam == PARAM_1) {
        format = OH_AVFormat_Create();
        OH_AVFormat_SetIntValue(format, OH_MD_KEY_WIDTH, DEFAULT_WIDTH);
        OH_AVFormat_SetIntValue(format, OH_MD_KEY_HEIGHT, DEFAULT_HEIGHT);
        OH_AVFormat_SetIntValue(format, OH_MD_KEY_PIXEL_FORMAT, DEFAULT_PIXELFORMAT);
    }
    OH_VideoEncoder_Configure(videoEnc, format);

    if (fourthParam == PARAM_1) {
        nativeWindow = OH_NativeWindow_CreateNativeWindow(pSurface);
    } else if (fourthParam == PARAM_0) {
        nativeWindow = nullptr;
    }

    if (fifthParam == PARAM_1) {
        checkParam = OH_VideoEncoder_GetSurface(videoEnc, &nativeWindow);
    } else if (fifthParam == PARAM_0) {
        checkParam = OH_VideoEncoder_GetSurface(nullptr, &nativeWindow);
    }

    if (sixthParam == PARAM_1) {
        if (checkParam == AV_ERR_OK) {
            backParam = SUCCESS;
        }
    } else if (sixthParam == PARAM_0) {
        if (checkParam != AV_ERR_OK) {
            backParam = SUCCESS;
        }
    }

    OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    OH_AVFormat_Destroy(format);
    OH_VideoEncoder_Destroy(videoEnc);
    napi_create_int32(env, backParam, &result);
    return result;
}

static napi_value OHVideoEncoderNotifyEndOfStream(napi_env env, napi_callback_info info)
{
    int backParam = FAIL;
    napi_value result = nullptr;
    OH_AVCodec *videoEnc = nullptr;
    OH_AVErrCode checkParam;
    videoEnc = OH_VideoEncoder_CreateByMime(OH_AVCODEC_MIMETYPE_VIDEO_AVC);
    OH_AVFormat *format = OH_AVFormat_Create();
    OH_AVFormat_SetIntValue(format, OH_MD_KEY_WIDTH, DEFAULT_WIDTH);
    OH_AVFormat_SetIntValue(format, OH_MD_KEY_HEIGHT, DEFAULT_HEIGHT);
    OH_AVFormat_SetIntValue(format, OH_MD_KEY_PIXEL_FORMAT, DEFAULT_PIXELFORMAT);
    OH_VideoEncoder_Configure(videoEnc, format);
    OH_VideoEncoder_Prepare(videoEnc);
    OHNativeWindow *nativeWindow;
    OH_VideoEncoder_GetSurface(videoEnc, &nativeWindow);
    OH_VideoEncoder_Start(videoEnc);
    checkParam = OH_VideoEncoder_NotifyEndOfStream(videoEnc);
    if (checkParam == AV_ERR_OK) {
        backParam = SUCCESS;
        OH_VideoEncoder_Stop(videoEnc);
    }
    OH_VideoEncoder_Destroy(videoEnc);
    napi_create_int32(env, backParam, &result);
    return result;
}

static napi_value OHVideoEncoderFreeOutputData(napi_env env, napi_callback_info info)
{
    int backParam = FAIL;
    napi_value result = nullptr;
    OH_AVCodec *videoDec = nullptr;
    uint32_t index = PARAM_1;
    OH_AVErrCode checkParam = AV_ERR_OK;
    OH_AVFormat *format;
    format = OH_AVFormat_Create();
    OH_AVFormat_SetIntValue(format, OH_MD_KEY_WIDTH, DEFAULT_WIDTH);
    OH_AVFormat_SetIntValue(format, OH_MD_KEY_HEIGHT, DEFAULT_HEIGHT);
    OH_AVFormat_SetIntValue(format, OH_MD_KEY_PIXEL_FORMAT, DEFAULT_PIXELFORMAT);
    videoDec = OH_VideoEncoder_CreateByMime(OH_AVCODEC_MIMETYPE_VIDEO_AVC);
    OH_AVCodecBufferAttr info_;
    info_.offset = PARAM_0;
    info_.flags = AVCODEC_BUFFER_FLAGS_CODEC_DATA;
    info_.size = PARAM_0;
    OH_VideoEncoder_Configure(videoDec, format);
    OH_AVCodecAsyncCallback callback = {&OnError, &OnStreamChanged, &OnNeedInputData, &OnNeedOutputData};
    OH_VideoEncoder_SetCallback(videoDec, callback, g_signal);
    OH_VideoEncoder_Prepare(videoDec);
    OH_VideoEncoder_Start(videoDec);
    std::unique_ptr<std::ifstream> inFile_ = std::make_unique<std::ifstream>();
    inFile_->open("/data/storage/el2/base/files/out_320_240_10s(2).h264", std::ios::in | std::ios::binary);
    if (inFile_->is_open()) {
        OH_LOG_Print(LOG_APP, LOG_INFO, 1, "compress result is_open ", "code is %{public}ld", inFile_->is_open());
    }
    int array[] = {2106, 11465, 321,  72,   472,  68,  76,   79,   509,  90,  677,  88,   956,  99,  347,
                   77,   452,   681,  81,   1263, 94,  106,  97,   998,  97,  797,  93,   1343, 150, 116,
                   117,  926,   1198, 128,  110,  78,  1582, 158,  135,  112, 1588, 165,  132,  128, 1697,
                   168,  149,   117,  1938, 170,  141, 142,  1830, 106,  161, 122,  1623, 160,  154, 156,
                   1998, 230,   177,  139,  1650, 186, 128,  134,  1214, 122, 1411, 120,  1184, 128, 1591,
                   195,  145,   105,  1587, 169,  140, 118,  1952, 177,  150, 161,  1437, 159,  123, 1758,
                   180,  165,   144,  1936, 214,  191, 175,  2122, 180,  179, 160,  1927, 161,  184, 119,
                   1973, 218,   210,  129,  1962, 196, 127,  154,  2308, 173, 127,  1572, 142,  122};
    for (int i = PARAM_0; i < PARAM_12; i++) {
        unique_lock<mutex> lock(g_signal->inMutex_);
        g_signal->inCond_.wait(lock, [env]() { return g_signal->inQueue_.size() > 0; });
        index = g_signal->inQueue_.front();
        OH_AVMemory *ohAVMemory = g_signal->inBufferQueue_.front();
        uint8_t *addr = OH_AVMemory_GetAddr(ohAVMemory);
        if (addr == nullptr) {
            return result;
        }
        int32_t memSize = OH_AVMemory_GetSize(ohAVMemory);
        if (memSize < array[i]) {
            return result;
        }
        if (i != PARAM_0) {
            info_.flags = AVCODEC_BUFFER_FLAGS_NONE;
        }
        info_.size = array[i];
        int readFileSize = inFile_->read(reinterpret_cast<char *>(addr), info_.size).gcount();
        if (OH_VideoEncoder_PushInputData(videoDec, index, info_) == AV_ERR_OK) {
            checkParam = AV_ERR_NO_MEMORY;
        }
        g_signal->inQueue_.pop();
        g_signal->inBufferQueue_.pop();
    }
    inFile_->close();

    unique_lock<mutex> outLock(g_signal->outMutex_);
    g_signal->outCond_.wait(outLock, [env]() { return g_signal->outQueue_.size() > 0; });
    index = g_signal->outQueue_.front();
    if (OH_VideoEncoder_FreeOutputData(videoDec, index) == AV_ERR_OK) {
        backParam = SUCCESS;
    }
    OH_VideoEncoder_Destroy(videoDec);
    napi_create_int32(env, backParam, &result);
    return result;
}

static napi_value OHVideoEncoderPushInputData(napi_env env, napi_callback_info info)
{
    int backParam = FAIL;
    napi_value result = nullptr;
    OH_AVCodec *videoDec = nullptr;
    uint32_t index = PARAM_1;
    OH_AVErrCode checkParam = AV_ERR_OK;
    OH_AVFormat *format;
    format = OH_AVFormat_Create();
    OH_AVFormat_SetIntValue(format, OH_MD_KEY_WIDTH, DEFAULT_WIDTH);
    OH_AVFormat_SetIntValue(format, OH_MD_KEY_HEIGHT, DEFAULT_HEIGHT);
    OH_AVFormat_SetIntValue(format, OH_MD_KEY_PIXEL_FORMAT, DEFAULT_PIXELFORMAT);
    videoDec = OH_VideoEncoder_CreateByMime(OH_AVCODEC_MIMETYPE_VIDEO_AVC);
    OH_AVCodecBufferAttr info_;
    info_.offset = PARAM_0;
    info_.flags = AVCODEC_BUFFER_FLAGS_CODEC_DATA;
    info_.size = PARAM_0;
    OH_VideoEncoder_Configure(videoDec, format);
    OH_AVCodecAsyncCallback callback = {&OnError, &OnStreamChanged, &OnNeedInputData, &OnNeedOutputData};
    OH_VideoEncoder_SetCallback(videoDec, callback, g_signal);
    OH_VideoEncoder_Prepare(videoDec);
    OH_VideoEncoder_Start(videoDec);
    std::unique_ptr<std::ifstream> inFile_ = std::make_unique<std::ifstream>();
    inFile_->open("/data/storage/el2/base/files/out_320_240_10s(2).h264", std::ios::in | std::ios::binary);
    if (inFile_->is_open()) {
        OH_LOG_Print(LOG_APP, LOG_INFO, 1, "compress result is_open ", "code is %{public}ld", inFile_->is_open());
    }
    int array[] = {2106, 11465, 321,  72,   472,  68,  76,   79,   509,  90,  677,  88,   956,  99,  347,
                   77,   452,   681,  81,   1263, 94,  106,  97,   998,  97,  797,  93,   1343, 150, 116,
                   117,  926,   1198, 128,  110,  78,  1582, 158,  135,  112, 1588, 165,  132,  128, 1697,
                   168,  149,   117,  1938, 170,  141, 142,  1830, 106,  161, 122,  1623, 160,  154, 156,
                   1998, 230,   177,  139,  1650, 186, 128,  134,  1214, 122, 1411, 120,  1184, 128, 1591,
                   195,  145,   105,  1587, 169,  140, 118,  1952, 177,  150, 161,  1437, 159,  123, 1758,
                   180,  165,   144,  1936, 214,  191, 175,  2122, 180,  179, 160,  1927, 161,  184, 119,
                   1973, 218,   210,  129,  1962, 196, 127,  154,  2308, 173, 127,  1572, 142,  122};
    for (int i = PARAM_0; i < PARAM_12; i++) {
        unique_lock<mutex> lock(g_signal->inMutex_);
        g_signal->inCond_.wait(lock, [env]() { return g_signal->inQueue_.size() > 0; });
        index = g_signal->inQueue_.front();
        OH_AVMemory *ohAVMemory = g_signal->inBufferQueue_.front();
        uint8_t *addr = OH_AVMemory_GetAddr(ohAVMemory);
        if (addr == nullptr) {
            return result;
        }
        int32_t memSize = OH_AVMemory_GetSize(ohAVMemory);
        if (memSize < array[i]) {
            return result;
        }
        if (i != PARAM_0) {
            info_.flags = AVCODEC_BUFFER_FLAGS_NONE;
        }
        info_.size = array[i];
        int readFileSize = inFile_->read(reinterpret_cast<char *>(addr), info_.size).gcount();
        if (OH_VideoEncoder_PushInputData(videoDec, index, info_) == AV_ERR_OK) {
            backParam = SUCCESS;
        }
        g_signal->inQueue_.pop();
        g_signal->inBufferQueue_.pop();
    }
    inFile_->close();
    OH_VideoEncoder_Destroy(videoDec);
    napi_create_int32(env, backParam, &result);
    return result;
}

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        {"oHVideoEncoderGetSurface", nullptr, OHVideoEncoderGetSurface, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"oHVideoEncoderNotifyEndOfStream", nullptr, OHVideoEncoderNotifyEndOfStream, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"oHVideoEncoderFreeOutputData", nullptr, OHVideoEncoderFreeOutputData, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"oHVideoEncoderPushInputData", nullptr, OHVideoEncoderPushInputData, nullptr, nullptr, nullptr, napi_default,
         nullptr},
    };
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "libvideoencoderndk",
    .nm_priv = ((void *)0),
    .reserved = {0},
};

extern "C" __attribute__((constructor)) void RegisterModule(void) { napi_module_register(&demoModule); }
