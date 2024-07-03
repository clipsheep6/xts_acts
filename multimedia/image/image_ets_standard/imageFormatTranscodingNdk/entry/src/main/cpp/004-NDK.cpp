/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "napi/native_api.h"
#include "multimedia/image_framework/image/pixelmap_native.h"
#include "multimedia/image_framework/image/image_source_native.h"
#include "multimedia/image_framework/image/image_common.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#undef LOG_DOMAIN
#undef LOG_TAG
#define LOG_DOMAIN 0x3200
#define LOG_TAG "MY_TAG"

#define NUM_0 0
#define NUM_1 1
#define NUM_2 2
#define NUM_3 3
#define NUM_4 4
#define NUM_5 5
#define NUM_6 6
#define NUM_9 9
#define MAX_BUFFER_SIZE 512
const char* LOG_APP = "ImageNDK";

static void OHLog (const char* module, const char* format, ...) {  
    char buffer [MAX_BUFFER_SIZE];  
    va_list args;  
    va_start (args, format);  
    va_end (args);  
    printf ("[%s] %s\n", module, buffer);  
}

#define OH_LOG_ERROR(module, format, ...) \
do { \
    OHLog (module, format, ##__VA_ARGS__); \
}while (false)

#define OH_LOG_INFO(module, format, ...) \
do { \
    OHLog (module, format, ##__VA_ARGS__); \
}while (false)

static napi_value getJsResult(napi_env env, int result)
{
    napi_value resultNapi = nullptr;
    napi_create_int32(env, result, &resultNapi);
    return resultNapi;
}

/**
  * @param file descriptor 
  * @param src pixel format
  * @param width
  * @param height
  * @return dst pixel format
*/
static napi_value convertpixelFormat(napi_env env, napi_callback_info info)
{
    napi_value argValue[NUM_5] = {nullptr};
    size_t argCount = NUM_5;
    napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr);
    if (argCount < NUM_5) {
        return getJsResult(env, IMAGE_BAD_PARAMETER);
    }   
    int32_t fd;
    napi_get_value_int32(env, argValue[NUM_0], &fd);
    int32_t srcPixelFormat;
    napi_get_value_int32(env, argValue[NUM_1], &srcPixelFormat);
    Image_Size imageSize;
    napi_get_value_uint32(env, argValue[NUM_2], &imageSize.width);
    napi_get_value_uint32(env, argValue[NUM_3], &imageSize.height);
    int32_t destPixelFormat;
    napi_get_value_int32(env, argValue[NUM_4], &destPixelFormat);
    Image_ErrorCode errCode = IMAGE_SUCCESS;  
    OH_ImageSourceNative *imageSource = nullptr;
    OH_DecodingOptions *decodeOpts = nullptr;
    do {        
        errCode = OH_ImageSourceNative_CreateFromFd(fd, &imageSource);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }       
        errCode = OH_DecodingOptions_Create(&decodeOpts);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }
        errCode = OH_DecodingOptions_SetPixelFormat(decodeOpts, srcPixelFormat);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }
        errCode = OH_DecodingOptions_SetDesiredSize(decodeOpts, &imageSize);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }
        int32_t Format;
        errCode = OH_DecodingOptions_GetPixelFormat(decodeOpts, &Format);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }
        uint32_t index;
        errCode = OH_DecodingOptions_GetIndex(decodeOpts, &index);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }
        // create pixmap
        OH_PixelmapNative *resPixMap = nullptr;
        errCode = OH_ImageSourceNative_CreatePixelmap(imageSource, decodeOpts, &resPixMap);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }
        OH_PixelmapNative *destPixelMap = nullptr;
        errCode = OH_PixelMapNative_ConvertPixelFormat(resPixMap, &destPixelMap, destPixelFormat);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }      
    } while (false);  
    if (imageSource) 
        OH_ImageSourceNative_Release(imageSource);
    imageSource = nullptr;  
    if (decodeOpts) 
        OH_DecodingOptions_Release(decodeOpts);
    decodeOpts = nullptr;
    return getJsResult (env,errCode);
}

/**
 * @param file descriptor
 * @param src pixel format
 * @param width
 * @param height
 * @return dst pixel format
 */
static napi_value convertpixelFormatRGB888(napi_env env, napi_callback_info info) {
    napi_value argValue[NUM_5] = {nullptr};
    size_t argCount = NUM_5;
    napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr);
    if (argCount < NUM_5) {
        return getJsResult(env, IMAGE_BAD_PARAMETER);
    }
    int32_t fd;
    napi_get_value_int32(env, argValue[NUM_0], &fd);
    int32_t srcPixelFormat;
    napi_get_value_int32(env, argValue[NUM_1], &srcPixelFormat);
    Image_Size imageSize;
    napi_get_value_uint32(env, argValue[NUM_2], &imageSize.width);
    napi_get_value_uint32(env, argValue[NUM_3], &imageSize.height);
    int32_t destPixelFormat;
    napi_get_value_int32(env, argValue[NUM_4], &destPixelFormat);
    Image_ErrorCode errCode = IMAGE_SUCCESS;
    OH_ImageSourceNative *imageSource = nullptr;
    OH_DecodingOptions *decodeOpts = nullptr;
    do {
        errCode = OH_ImageSourceNative_CreateFromFd(fd, &imageSource);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }
        errCode = OH_DecodingOptions_Create(&decodeOpts);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }
        errCode = OH_DecodingOptions_SetPixelFormat(decodeOpts, NUM_9);  //固定创建NV12
        if (IMAGE_SUCCESS != errCode) {
            break;
        }
        errCode = OH_DecodingOptions_SetDesiredSize(decodeOpts, &imageSize);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }
        int32_t Format;
        errCode = OH_DecodingOptions_GetPixelFormat(decodeOpts, &Format);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }
        uint32_t index;
        errCode = OH_DecodingOptions_GetIndex(decodeOpts, &index);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }
        // create pixmap
        OH_PixelmapNative *resPixMap = nullptr;
        errCode = OH_ImageSourceNative_CreatePixelmap(imageSource, decodeOpts, &resPixMap);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }  
        OH_PixelmapNative *destPixelMap = nullptr;
        //目标RGB888
        errCode = OH_PixelMapNative_ConvertPixelFormat(resPixMap, &destPixelMap, srcPixelFormat);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }
        OH_PixelmapNative *destPixelMap2 = nullptr;
        //目标pixelmapFormat
        errCode = OH_PixelMapNative_ConvertPixelFormat(destPixelMap, &destPixelMap2, destPixelFormat);
        if (IMAGE_SUCCESS != errCode) {
            break;
        }
        OH_PixelmapNative_Release(destPixelMap);
        OH_PixelmapNative_Release(destPixelMap2);
    } while (false);
    if (imageSource)
        OH_ImageSourceNative_Release(imageSource);
    imageSource = nullptr;
    if (decodeOpts)
        OH_DecodingOptions_Release(decodeOpts);
    decodeOpts = nullptr;
    return getJsResult (env, errCode);
}


EXTERN_C_START
static napi_value Init (napi_env env, napi_value exports) 
{
    napi_property_descriptor desc[] = {
        {"convertPixelFormat", nullptr, convertpixelFormat, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"convertPixelFormatRGB888", nullptr, convertpixelFormatRGB888, nullptr, nullptr, nullptr, 
        napi_default, nullptr},
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
    .nm_modname = "entry",
    .nm_priv = ((void *)0),
    .reserved = {0},
};

extern "C" __attribute__((constructor)) void RegisterEntryModule(void) { napi_module_register(&demoModule); }
