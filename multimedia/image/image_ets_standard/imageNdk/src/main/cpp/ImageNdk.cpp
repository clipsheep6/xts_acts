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

#include <linux/kd.h>
#include <string>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include "napi/native_api.h"
#include "hilog/log.h"
#include "pixelmap_native.h"
#include "image_packer_native.h"
#include "image_source_native.h"

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

OH_PixelmapNative *TEST_PIXELMAP = nullptr;

napi_value getJsResult(napi_env env, int result) {
    napi_value resultNapi = nullptr;
    napi_create_int32(env, result, &resultNapi);
    return resultNapi;
}

Image_ErrorCode accessInitializationOptions(OH_Pixelmap_InitializationOptions *opts, uint32_t width, uint32_t height,
                                            int32_t pixelFormat, int32_t alphaType) {
    Image_ErrorCode errCode = OH_PixelmapInitializationOptions_SetWidth(opts, width);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest accessInitializationOptions OH_PixelmapInitializationOptions_SetWidth "
                     "failed, errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    uint32_t widthGet;
    errCode = OH_PixelmapInitializationOptions_GetWidth(opts, &widthGet);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest accessInitializationOptions OH_PixelmapInitializationOptions_GetWidth "
                     "failed, errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    errCode = OH_PixelmapInitializationOptions_SetHeight(opts, height);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest accessInitializationOptions OH_PixelmapInitializationOptions_SetHeight "
                     "failed, errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    uint32_t heightGet;
    errCode = OH_PixelmapInitializationOptions_GetHeight(opts, &heightGet);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest accessInitializationOptions OH_PixelmapInitializationOptions_GetHeight "
                     "failed, errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    errCode = OH_PixelmapInitializationOptions_SetPixelFormat(opts, pixelFormat);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest accessInitializationOptions "
                     "OH_PixelmapInitializationOptions_SetPixelFormat failed, errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    int32_t pixelFormatGet;
    errCode = OH_PixelmapInitializationOptions_GetPixelFormat(opts, &pixelFormatGet);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest accessInitializationOptions "
                     "OH_PixelmapInitializationOptions_GetPixelFormat failed, errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    errCode = OH_PixelmapInitializationOptions_SetAlphaType(opts, alphaType);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest accessInitializationOptions "
                     "OH_PixelmapInitializationOptions_SetAlphaType failed, errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    int32_t alphaTypeGet;
    errCode = OH_PixelmapInitializationOptions_GetAlphaType(opts, &alphaTypeGet);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest accessInitializationOptions "
                     "OH_PixelmapInitializationOptions_GetAlphaType failed, errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    return IMAGE_SUCCESS;
}

static napi_value TestInitializationOptions(napi_env env, napi_callback_info info) {
    napi_value argValue[NUM_4] = {0};
    size_t argCount = NUM_4;
    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < NUM_4 ||
        argValue[NUM_0] == nullptr || argValue[NUM_1] == nullptr || argValue[NUM_2] == nullptr ||
        argValue[NUM_3] == nullptr) {
        OH_LOG_ERROR(
            LOG_APP,
            "ImagePixelmapNativeCTest TestInitializationOptions napi_get_cb_info failed, argCount: %{public}d.",
            argCount);
        return getJsResult(env, IMAGE_BAD_PARAMETER);
    }
    uint32_t width;
    napi_get_value_uint32(env, argValue[NUM_0], &width);
    uint32_t height;
    napi_get_value_uint32(env, argValue[NUM_1], &height);
    int32_t pixelFormat;
    napi_get_value_int32(env, argValue[NUM_2], &pixelFormat);
    int32_t alphaType;
    napi_get_value_int32(env, argValue[NUM_3], &alphaType);
    OH_Pixelmap_InitializationOptions *opts = nullptr;
    Image_ErrorCode errCode = OH_PixelmapInitializationOptions_Create(&opts);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest TestInitializationOptions OH_PixelmapInitializationOptions_Create "
                     "failed, errCode: %{public}d.",
                     errCode);
        return getJsResult(env, errCode);
    }
    errCode = accessInitializationOptions(opts, width, height, pixelFormat, alphaType);
    if (errCode != IMAGE_SUCCESS) {
        return getJsResult(env, errCode);
    }
    errCode = OH_PixelmapInitializationOptions_Release(opts);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest TestInitializationOptions OH_PixelmapInitializationOptions_Release "
                     "failed, errCode: %{public}d.",
                     errCode);
        return getJsResult(env, errCode);
    }
    OH_LOG_INFO(LOG_APP, "ImagePixelmapNativeCTest TestInitializationOptions success.");
    return getJsResult(env, IMAGE_SUCCESS);
}

Image_ErrorCode releaseTestPixelmap() {
    Image_ErrorCode errCode = OH_PixelmapNative_Release(TEST_PIXELMAP);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest release OH_PixelmapNative_Release failed, errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    TEST_PIXELMAP = nullptr;
    return IMAGE_SUCCESS;
}

Image_ErrorCode createPixelMap(uint32_t width, uint32_t height, int32_t pixelFormat, int32_t alphaType) {
    OH_Pixelmap_InitializationOptions *createOpts;
    Image_ErrorCode errCode = OH_PixelmapInitializationOptions_Create(&createOpts);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest createPixelMap OH_PixelmapInitializationOptions_Create failed, errCode: "
                     "%{public}d.",
                     errCode);
        return errCode;
    }
    errCode = OH_PixelmapInitializationOptions_SetWidth(createOpts, width);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest createPixelMap OH_PixelmapInitializationOptions_SetWidth failed, "
                     "errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    errCode = OH_PixelmapInitializationOptions_SetHeight(createOpts, height);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest createPixelMap OH_PixelmapInitializationOptions_SetHeight failed, "
                     "errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    errCode = OH_PixelmapInitializationOptions_SetPixelFormat(createOpts, pixelFormat);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest createPixelMap OH_PixelmapInitializationOptions_SetPixelFormat failed, "
                     "errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    errCode = OH_PixelmapInitializationOptions_SetAlphaType(createOpts, alphaType);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest createPixelMap OH_PixelmapInitializationOptions_SetAlphaType failed, "
                     "errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    if (TEST_PIXELMAP != nullptr) {
        errCode = releaseTestPixelmap();
        if (errCode != IMAGE_SUCCESS) {
            OH_LOG_ERROR(LOG_APP,
                         "ImagePixelmapNativeCTest createPixelMap releaseTestPixelmap failed, errCode: %{public}d.",
                         errCode);
            return errCode;
        }
    }
    uint8_t colors[96];
    size_t colorLength = 96;
    for (int i = 0; i < 96; i++) {
        colors[i] = i + 1;
    }
    errCode = OH_PixelmapNative_CreatePixelmap(colors, colorLength, createOpts, &TEST_PIXELMAP);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(
            LOG_APP,
            "ImagePixelmapNativeCTest createPixelMap OH_PixelmapNative_CreatePixelMap failed, errCode: %{public}d.",
            errCode);
        return errCode;
    }
    errCode = OH_PixelmapInitializationOptions_Release(createOpts);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest createPixelMap OH_PixelmapInitializationOptions_Release failed, "
                     "errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    return IMAGE_SUCCESS;
}

Image_ErrorCode createPixelMapWithData(uint8_t *data, size_t bufferSize, uint32_t width, uint32_t height,
                                       int32_t pixelFormat, int32_t alphaType) {
    OH_Pixelmap_InitializationOptions *createOpts;
    Image_ErrorCode errCode = OH_PixelmapInitializationOptions_Create(&createOpts);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest createPixelMapWithData OH_PixelmapInitializationOptions_Create failed, "
                     "errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    errCode = OH_PixelmapInitializationOptions_SetWidth(createOpts, width);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest createPixelMapWithData OH_PixelmapInitializationOptions_SetWidth "
                     "failed, errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    errCode = OH_PixelmapInitializationOptions_SetHeight(createOpts, height);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest createPixelMapWithData OH_PixelmapInitializationOptions_SetHeight "
                     "failed, errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    errCode = OH_PixelmapInitializationOptions_SetPixelFormat(createOpts, pixelFormat);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest createPixelMapWithData OH_PixelmapInitializationOptions_SetPixelFormat "
                     "failed, errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    errCode = OH_PixelmapInitializationOptions_SetAlphaType(createOpts, alphaType);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest createPixelMapWithData OH_PixelmapInitializationOptions_SetAlphaType "
                     "failed, errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    if (TEST_PIXELMAP != nullptr) {
        errCode = releaseTestPixelmap();
        if (errCode != IMAGE_SUCCESS) {
            OH_LOG_ERROR(
                LOG_APP,
                "ImagePixelmapNativeCTest createPixelMapWithData releaseTestPixelmap failed, errCode: %{public}d.",
                errCode);
            return errCode;
        }
    }
    errCode = OH_PixelmapNative_CreatePixelmap(data, bufferSize, createOpts, &TEST_PIXELMAP);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest createPixelMapWithData OH_PixelmapNative_CreatePixelMap failed, "
                     "errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    errCode = OH_PixelmapInitializationOptions_Release(createOpts);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest createPixelMapWithData OH_PixelmapInitializationOptions_Release failed, "
                     "errCode: %{public}d.",
                     errCode);
        return errCode;
    }
    return IMAGE_SUCCESS;
}

static napi_value TestSavePixelmap(napi_env env, napi_callback_info info) {
    napi_value argValue[NUM_1] = {0};
    size_t argCount = NUM_1;
    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < NUM_1 ||
        argValue[NUM_0] == nullptr) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest TestSavePixelmap napi_get_cb_info failed, argCount: %{public}d.",
                     argCount);
        return getJsResult(env, IMAGE_BAD_PARAMETER);
    }
    char name[1024];
    size_t nameSize = 1024;
    napi_get_value_string_utf8(env, argValue[NUM_0], name, 1024, &nameSize);
    int fd = open(name, O_CREAT | O_WRONLY | O_TRUNC, 0666);
    if (fd == -1) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest TestSavePixelmap open failed, errno: %{public}d, name: %{public}s.",
                     errno, name);
        return getJsResult(env, -1);
    }
    fd = dup(fd);
    OH_PackingOptions *opts = nullptr;
    OH_PackingOptions_Create(&opts);
    Image_MimeType mimeType;
    mimeType.data = (char *)MIME_TYPE_JPEG;
    mimeType.size = strlen(MIME_TYPE_JPEG);
    OH_PackingOptions_SetMimeType(opts, &mimeType);
    OH_PackingOptions_SetQuality(opts, 98);
    OH_ImagePackerNative *packer = nullptr;
    OH_ImagePackerNative_Create(&packer);
    Image_ErrorCode errCode = OH_ImagePackerNative_PackToFileFromPixelmap(packer, opts, TEST_PIXELMAP, fd);
    close(fd);
    OH_PackingOptions_Release(opts);
    OH_ImagePackerNative_Release(packer);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest TestSavePixelmap OH_ImagePackerNative_PackToFileFromPixelmap failed, "
                     "errCode: %{public}d.",
                     errCode);
        return getJsResult(env, errCode);
    }
    OH_LOG_INFO(LOG_APP, "ImagePixelmapNativeCTest TestSavePixelmap success, name: %{public}s.", name);
    return getJsResult(env, IMAGE_SUCCESS);
}

static napi_value TestCreatePixelmap(napi_env env, napi_callback_info info) {
    napi_value argValue[NUM_4] = {0};
    size_t argCount = NUM_4;
    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < NUM_4 ||
        argValue[NUM_0] == nullptr || argValue[NUM_1] == nullptr || argValue[NUM_2] == nullptr ||
        argValue[NUM_3] == nullptr) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest TestCreatePixelmap napi_get_cb_info failed, argCount: %{public}d.",
                     argCount);
        return getJsResult(env, IMAGE_BAD_PARAMETER);
    }
    uint32_t width;
    napi_get_value_uint32(env, argValue[NUM_0], &width);
    uint32_t height;
    napi_get_value_uint32(env, argValue[NUM_1], &height);
    int32_t pixelFormat;
    napi_get_value_int32(env, argValue[NUM_2], &pixelFormat);
    int32_t alphaType;
    napi_get_value_int32(env, argValue[NUM_3], &alphaType);
    Image_ErrorCode errCode = createPixelMap(width, height, pixelFormat, alphaType);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest TestCreatePixelmap createPixelMap failed.");
        return getJsResult(env, errCode);
    }
    OH_LOG_INFO(LOG_APP, "ImagePixelmapNativeCTest TestCreatePixelmap success.");
    return getJsResult(env, IMAGE_SUCCESS);
}

static napi_value TestCreatePixelmapWithData(napi_env env, napi_callback_info info) {
    napi_value argValue[NUM_5] = {0};
    size_t argCount = NUM_5;
    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < NUM_5 ||
        argValue[NUM_0] == nullptr || argValue[NUM_1] == nullptr || argValue[NUM_2] == nullptr ||
        argValue[NUM_3] == nullptr || argValue[NUM_4] == nullptr) {
        OH_LOG_ERROR(
            LOG_APP,
            "ImagePixelmapNativeCTest TestCreatePixelmapWithData napi_get_cb_info failed, argCount: %{public}d.",
            argCount);
        return getJsResult(env, IMAGE_BAD_PARAMETER);
    }
    uint8_t *pixelmapData = nullptr;
    size_t pixelmapDataSize = 0;
    napi_get_arraybuffer_info(env, argValue[NUM_0], (void **)&pixelmapData, &pixelmapDataSize);
    uint32_t width;
    napi_get_value_uint32(env, argValue[NUM_1], &width);
    uint32_t height;
    napi_get_value_uint32(env, argValue[NUM_2], &height);
    int32_t pixelFormat;
    napi_get_value_int32(env, argValue[NUM_3], &pixelFormat);
    int32_t alphaType;
    napi_get_value_int32(env, argValue[NUM_4], &alphaType);
    Image_ErrorCode errCode =
        createPixelMapWithData(pixelmapData, pixelmapDataSize, width, height, pixelFormat, alphaType);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest TestCreatePixelmapWithData createPixelMapWithData failed.");
        return getJsResult(env, errCode);
    }
    OH_LOG_INFO(LOG_APP, "ImagePixelmapNativeCTest TestCreatePixelmapWithData success.");
    return getJsResult(env, IMAGE_SUCCESS);
}

static napi_value TestReadPixels(napi_env env, napi_callback_info info) {
    napi_value argValue[NUM_1] = {0};
    size_t argCount = NUM_1;
    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < NUM_1 ||
        argValue[NUM_0] == nullptr) {
        OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest TestReadPixels napi_get_cb_info failed, argCount: %{public}d.",
                     argCount);
        return getJsResult(env, IMAGE_BAD_PARAMETER);
    }
    uint8_t *destination;
    size_t bufferSize;
    napi_get_arraybuffer_info(env, argValue[NUM_0], (void **)&destination, &bufferSize);
    Image_ErrorCode errCode = OH_PixelmapNative_ReadPixels(TEST_PIXELMAP, destination, &bufferSize);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(
            LOG_APP,
            "ImagePixelmapNativeCTest TestReadPixels OH_PixelmapNative_ReadPixels failed, errCode: %{public}d.",
            errCode);
        return getJsResult(env, errCode);
    }
    OH_LOG_INFO(LOG_APP, "ImagePixelmapNativeCTest TestReadPixels success.");
    return getJsResult(env, IMAGE_SUCCESS);
}

static napi_value TestWritePixels(napi_env env, napi_callback_info info) {
    napi_value argValue[NUM_1] = {0};
    size_t argCount = NUM_1;
    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < NUM_1 ||
        argValue[NUM_0] == nullptr) {
        OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest TestWritePixels napi_get_cb_info failed, argCount: %{public}d.",
                     argCount);
        return getJsResult(env, IMAGE_BAD_PARAMETER);
    }
    uint8_t *source;
    size_t bufferSize;
    napi_get_arraybuffer_info(env, argValue[NUM_0], (void **)&source, &bufferSize);
    Image_ErrorCode errCode = OH_PixelmapNative_WritePixels(TEST_PIXELMAP, source, bufferSize);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(
            LOG_APP,
            "ImagePixelmapNativeCTest TestWritePixels OH_PixelmapNative_WritePixels failed, errCode: %{public}d.",
            errCode);
        return getJsResult(env, errCode);
    }
    OH_LOG_INFO(LOG_APP, "ImagePixelmapNativeCTest TestWritePixels success.");
    return getJsResult(env, IMAGE_SUCCESS);
}

struct ImageInfo {
    uint32_t width;
    uint32_t height;
    uint32_t rowStride;
    int32_t pixelFormat;
    int32_t alphaType;
};
napi_value buildJsImageInfo(napi_env env, ImageInfo imageInfo) {
    napi_value object = nullptr;
    napi_create_object(env, &object);
    if (object == nullptr) {
        return nullptr;
    }
    napi_value alphaType = nullptr;
    napi_create_int32(env, imageInfo.alphaType, &alphaType);
    napi_set_named_property(env, object, "alphaType", alphaType);
    napi_value pixelFormat = nullptr;
    napi_create_int32(env, imageInfo.pixelFormat, &pixelFormat);
    napi_set_named_property(env, object, "pixelFormat", pixelFormat);
    napi_value rowStride = nullptr;
    napi_create_uint32(env, imageInfo.rowStride, &rowStride);
    napi_set_named_property(env, object, "rowStride", rowStride);
    napi_value width = nullptr;
    napi_create_uint32(env, imageInfo.width, &width);
    napi_set_named_property(env, object, "width", width);
    napi_value height = nullptr;
    napi_create_uint32(env, imageInfo.height, &height);
    napi_set_named_property(env, object, "height", height);
    return object;
}

static napi_value TestGetImageInfo(napi_env env, napi_callback_info info) {
    OH_Pixelmap_ImageInfo *imageInfo;
    Image_ErrorCode errCode = OH_PixelmapImageInfo_Create(&imageInfo);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(
            LOG_APP,
            "ImagePixelmapNativeCTest TestGetImageInfo OH_PixelmapImageInfo_Create failed, errCode: %{public}d.",
            errCode);
        return nullptr;
    }
    errCode = OH_PixelmapNative_GetImageInfo(TEST_PIXELMAP, imageInfo);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(
            LOG_APP,
            "ImagePixelmapNativeCTest TestGetImageInfo OH_PixelmapNative_GetImageInfo failed, errCode: %{public}d.",
            errCode);
        return nullptr;
    }
    ImageInfo imageInfoJs;
    errCode = OH_PixelmapImageInfo_GetWidth(imageInfo, &(imageInfoJs.width));
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(
            LOG_APP,
            "ImagePixelmapNativeCTest TestGetImageInfo OH_PixelmapImageInfo_GetWidth failed, errCode: %{public}d.",
            errCode);
        return nullptr;
    }
    errCode = OH_PixelmapImageInfo_GetHeight(imageInfo, &(imageInfoJs.height));
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(
            LOG_APP,
            "ImagePixelmapNativeCTest TestGetImageInfo OH_PixelmapImageInfo_GetHeight failed, errCode: %{public}d.",
            errCode);
        return nullptr;
    }
    errCode = OH_PixelmapImageInfo_GetRowStride(imageInfo, &(imageInfoJs.rowStride));
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(
            LOG_APP,
            "ImagePixelmapNativeCTest TestGetImageInfo OH_PixelmapImageInfo_GetRowStride failed, errCode: %{public}d.",
            errCode);
        return nullptr;
    }
    errCode = OH_PixelmapImageInfo_GetPixelFormat(imageInfo, &(imageInfoJs.pixelFormat));
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest TestGetImageInfo OH_PixelmapImageInfo_GetPixelFormat failed, errCode: "
                     "%{public}d.",
                     errCode);
        return nullptr;
    }
    errCode = OH_PixelmapImageInfo_GetAlphaType(imageInfo, &(imageInfoJs.alphaType));
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(
            LOG_APP,
            "ImagePixelmapNativeCTest TestGetImageInfo OH_PixelmapImageInfo_GetAlphaType failed, errCode: %{public}d.",
            errCode);
        return nullptr;
    }
    errCode = OH_PixelmapImageInfo_Release(imageInfo);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(
            LOG_APP,
            "ImagePixelmapNativeCTest TestGetImageInfo OH_PixelmapImageInfo_Release failed, errCode: %{public}d.",
            errCode);
        return nullptr;
    }
    OH_LOG_INFO(LOG_APP, "ImagePixelmapNativeCTest TestGetImageInfo success.");
    return buildJsImageInfo(env, imageInfoJs);
}

static napi_value TestOpacity(napi_env env, napi_callback_info info) {
    napi_value argValue[NUM_1] = {0};
    size_t argCount = NUM_1;
    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < NUM_1 ||
        argValue[NUM_0] == nullptr) {
        OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest TestOpacity napi_get_cb_info failed, argCount: %{public}d.",
                     argCount);
        return getJsResult(env, IMAGE_BAD_PARAMETER);
    }
    double rate;
    napi_get_value_double(env, argValue[NUM_0], &rate);
    Image_ErrorCode errCode = OH_PixelmapNative_Opacity(TEST_PIXELMAP, (float)rate);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest TestOpacity OH_PixelmapNative_Opacity failed, errCode: %{public}d.",
                     errCode);
        return getJsResult(env, errCode);
    }
    OH_LOG_INFO(LOG_APP, "ImagePixelmapNativeCTest TestOpacity success.");
    return getJsResult(env, IMAGE_SUCCESS);
}

static napi_value TestScale(napi_env env, napi_callback_info info) {
    napi_value argValue[NUM_2] = {0};
    size_t argCount = NUM_2;
    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < NUM_2 ||
        argValue[NUM_0] == nullptr || argValue[NUM_1] == nullptr) {
        OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest TestScale napi_get_cb_info failed, argCount: %{public}d.",
                     argCount);
        return getJsResult(env, IMAGE_BAD_PARAMETER);
    }
    double x, y;
    napi_get_value_double(env, argValue[NUM_0], &x);
    napi_get_value_double(env, argValue[NUM_1], &y);
    Image_ErrorCode errCode = OH_PixelmapNative_Scale(TEST_PIXELMAP, (float)x, (float)y);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest TestScale OH_PixelmapNative_Scale failed, errCode: %{public}d.",
                     errCode);
        return getJsResult(env, errCode);
    }
    OH_LOG_INFO(LOG_APP, "ImagePixelmapNativeCTest TestScale success.");
    return getJsResult(env, IMAGE_SUCCESS);
}

static napi_value TestTranslate(napi_env env, napi_callback_info info) {
    napi_value argValue[NUM_2] = {0};
    size_t argCount = NUM_2;
    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < NUM_2 ||
        argValue[NUM_0] == nullptr || argValue[NUM_1] == nullptr) {
        OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest TestTranslate napi_get_cb_info failed, argCount: %{public}d.",
                     argCount);
        return getJsResult(env, IMAGE_BAD_PARAMETER);
    }
    double x, y;
    napi_get_value_double(env, argValue[NUM_0], &x);
    napi_get_value_double(env, argValue[NUM_1], &y);
    Image_ErrorCode errCode = OH_PixelmapNative_Translate(TEST_PIXELMAP, (float)x, (float)y);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest TestTranslate OH_PixelmapNative_Translate failed, errCode: %{public}d.",
                     errCode);
        return getJsResult(env, errCode);
    }
    OH_LOG_INFO(LOG_APP, "ImagePixelmapNativeCTest TestTranslate success.");
    return getJsResult(env, IMAGE_SUCCESS);
}

static napi_value TestRotate(napi_env env, napi_callback_info info) {
    napi_value argValue[NUM_1] = {0};
    size_t argCount = NUM_1;
    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < NUM_1 ||
        argValue[NUM_0] == nullptr) {
        OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest TestRotate napi_get_cb_info failed, argCount: %{public}d.",
                     argCount);
        return getJsResult(env, IMAGE_BAD_PARAMETER);
    }
    double angle;
    napi_get_value_double(env, argValue[NUM_0], &angle);
    Image_ErrorCode errCode = OH_PixelmapNative_Rotate(TEST_PIXELMAP, (float)angle);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest TestRotate OH_PixelmapNative_Rotate failed, errCode: %{public}d.",
                     errCode);
        return getJsResult(env, errCode);
    }
    OH_LOG_INFO(LOG_APP, "ImagePixelmapNativeCTest TestRotate success.");
    return getJsResult(env, IMAGE_SUCCESS);
}

static napi_value TestFlip(napi_env env, napi_callback_info info) {
    napi_value argValue[NUM_2] = {0};
    size_t argCount = NUM_2;
    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < NUM_2 ||
        argValue[NUM_0] == nullptr || argValue[NUM_1] == nullptr) {
        OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest TestFlip napi_get_cb_info failed, argCount: %{public}d.",
                     argCount);
        return getJsResult(env, IMAGE_BAD_PARAMETER);
    }
    bool horizontal, vertical;
    napi_get_value_bool(env, argValue[NUM_0], &horizontal);
    napi_get_value_bool(env, argValue[NUM_1], &vertical);
    Image_ErrorCode errCode = OH_PixelmapNative_Flip(TEST_PIXELMAP, horizontal, vertical);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest TestFlip OH_PixelmapNative_Flip failed, errCode: %{public}d.",
                     errCode);
        return getJsResult(env, errCode);
    }
    OH_LOG_INFO(LOG_APP, "ImagePixelmapNativeCTest TestFlip success.");
    return getJsResult(env, IMAGE_SUCCESS);
}

static napi_value TestCrop(napi_env env, napi_callback_info info) {
    napi_value argValue[NUM_4] = {0};
    size_t argCount = NUM_4;
    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < NUM_4 ||
        argValue[NUM_0] == nullptr || argValue[NUM_1] == nullptr || argValue[NUM_2] == nullptr ||
        argValue[NUM_3] == nullptr) {
        OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest TestCrop napi_get_cb_info failed, argCount: %{public}d.",
                     argCount);
        return getJsResult(env, IMAGE_BAD_PARAMETER);
    }
    Image_Region region;
    napi_get_value_uint32(env, argValue[NUM_0], &region.x);
    napi_get_value_uint32(env, argValue[NUM_1], &region.y);
    napi_get_value_uint32(env, argValue[NUM_2], &region.width);
    napi_get_value_uint32(env, argValue[NUM_3], &region.height);
    Image_ErrorCode errCode = OH_PixelmapNative_Crop(TEST_PIXELMAP, &region);
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest TestCrop OH_PixelmapNative_Crop failed, errCode: %{public}d.",
                     errCode);
        return getJsResult(env, errCode);
    }
    OH_LOG_INFO(LOG_APP, "ImagePixelmapNativeCTest TestCrop success.");
    return getJsResult(env, IMAGE_SUCCESS);
}

static napi_value TestReleasePixelmap(napi_env env, napi_callback_info info) {
    Image_ErrorCode errCode = releaseTestPixelmap();
    if (errCode != IMAGE_SUCCESS) {
        OH_LOG_ERROR(LOG_APP,
                     "ImagePixelmapNativeCTest TestReleasePixelmap releaseTestPixelmap failed, errCode: %{public}d.",
                     errCode);
        return getJsResult(env, errCode);
    }
    OH_LOG_INFO(LOG_APP, "ImagePixelmapNativeCTest TestReleasePixelmap success.");
    return getJsResult(env, IMAGE_SUCCESS);
}

static void setInt32NamedProperty(napi_env env, napi_value object, const char *utf8name, uint32_t value) {
    napi_value tmp;
    napi_create_int32(env, value, &tmp);
    napi_set_named_property(env, object, utf8name, tmp);
}

/*
OH_ImageSource2_CreateImageInfo(OH_ImageSource_Info **info);
return: OH_ImageSource_Info
*/
static napi_value CreateImageInfo(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;


    napi_get_undefined(env, &result);

    OH_ImageSource_Info *imageInfo;
    Image_ErrorCode errCode = OH_ImageSourceInfo_Create(&imageInfo);
    if (IMAGE_SUCCESS != errCode) {
        napi_create_int32(env, errCode, &result);
        return result;
    }

    napi_status status = napi_create_external(env, reinterpret_cast<void *>(imageInfo), nullptr, nullptr, &result);
    if (status != napi_ok) {
        napi_throw_error(env, nullptr, "Failed to create external object");
        return nullptr;
    }
    return result;
}

/*
OH_ImageSource2_ImageInfoGetWidth(OH_ImageSource_Info *info);
argument[1]:    OH_ImageSource_Info
return: width int32_t
*/
static napi_value ImageInfoGetWidth(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;


    napi_get_undefined(env, &result);

    napi_value argValue[1] = {0};
    size_t argCount = 1;


    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }
    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);

    OH_ImageSource_Info *imageInfo = reinterpret_cast<OH_ImageSource_Info *>(ptr);

    uint32_t width = 0;
    Image_ErrorCode errCode = OH_ImageSourceInfo_GetWidth(imageInfo, &width);
    if (IMAGE_SUCCESS != errCode) {
        napi_create_int32(env, errCode, &result);
        return result;
    }
    napi_create_uint32(env, width, &result);

    return result;
}

/*
OH_ImageSource2_ImageInfoGetHeight(OH_ImageSource_Info *info);
argument[1]:    OH_ImageSource_Info
return: height int32_t
*/
static napi_value ImageInfoGetHeight(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;


    napi_get_undefined(env, &result);

    napi_value argValue[1] = {0};
    size_t argCount = 1;


    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }
    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);

    OH_ImageSource_Info *imageInfo = reinterpret_cast<OH_ImageSource_Info *>(ptr);

    uint32_t height = 0;
    Image_ErrorCode errCode = OH_ImageSourceInfo_GetHeight(imageInfo, &height);
    if (IMAGE_SUCCESS != errCode) {
        napi_create_int32(env, errCode, &result);
        return result;
    }
    napi_create_uint32(env, height, &result);

    return result;
}

/*
OH_ImageSource2_ReleaseImageInfo(OH_ImageSource_Info *info)
argument[1]:    OH_ImageSource_Info
return: errcode
*/
static napi_value ReleaseImageInfo(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;


    napi_get_undefined(env, &result);

    napi_value argValue[1] = {0};
    size_t argCount = 1;


    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }
    // get OH_ImageSource_Info ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);

    OH_ImageSource_Info *imageInfo = reinterpret_cast<OH_ImageSource_Info *>(ptr);

    Image_ErrorCode errCode = OH_ImageSourceInfo_Release(imageInfo);

    napi_create_int32(env, errCode, &result);

    return result;
}
/*
OH_ImageSource2_CreateDecodingOptions(OH_ImageSource_DecodingOptions **opts);
return: OH_ImageSource_DecodingOptions*
*/
static napi_value CreateDecodingOptions(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;


    napi_get_undefined(env, &result);

    OH_DecodingOptions *deops;
    Image_ErrorCode errCode = OH_DecodingOptions_Create(&deops);
    if (IMAGE_SUCCESS != errCode) {
        napi_create_int32(env, errCode, &result);
        return result;
    }

    napi_status status = napi_create_external(env, reinterpret_cast<void *>(deops), nullptr, nullptr, &result);
    if (status != napi_ok) {
        napi_throw_error(env, nullptr, "Failed to create external object");
        return nullptr;
    }
    return result;
}

/*
OH_ImageSource2_DecodingOptionsGetPixelFormat(OH_ImageSource_DecodingOptions *opts,int32_t *pixelFormat);
argument[1]:OH_ImageSource_DecodingOptions*
return: pixelFormat int32_t
*/
static napi_value DecodingOptionsGetPixelFormat(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;


    napi_get_undefined(env, &result);

    napi_value argValue[1] = {0};
    size_t argCount = 1;


    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }
    // get OH_ImageSource_Info ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);

    OH_DecodingOptions *depos = reinterpret_cast<OH_DecodingOptions *>(ptr);
    int32_t pixelFormat = 0;
    Image_ErrorCode errCode = OH_DecodingOptions_GetPixelFormat(depos, &pixelFormat);
    if (IMAGE_SUCCESS != errCode) {
        napi_create_int32(env, errCode, &result);
        return result;
    }
    napi_create_int32(env, pixelFormat, &result);

    return result;
}

/*
OH_ImageSource2_DecodingOptionsSetPixelFormat(OH_ImageSource_DecodingOptions *opts,int32_t pixelFormat);
argument[1]:OH_ImageSource_DecodingOptions*
argument[2]:pixelFormat
return: errCode
*/
static napi_value DecodingOptionsSetPixelFormat(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;


    napi_get_undefined(env, &result);

    napi_value argValue[2] = {0};
    size_t argCount = 2;


    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 2) {
        return result;
    }
    // get OH_ImageSource_DecodingOptions ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);

    uint32_t pixelFormat = 0;
    napi_get_value_uint32(env, argValue[1], &pixelFormat);

    OH_DecodingOptions *depos = reinterpret_cast<OH_DecodingOptions *>(ptr);

    Image_ErrorCode errCode = OH_DecodingOptions_SetPixelFormat(depos, pixelFormat);

    napi_create_int32(env, errCode, &result);

    return result;
}

/*
OH_ImageSource2_DecodingOptionsGetIndex(OH_ImageSource_DecodingOptions *opts, uint32_t *index);
argument[1]:OH_ImageSource_DecodingOptions*
return: index int32_t
*/
static napi_value DecodingOptionsGetIndex(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;


    napi_get_undefined(env, &result);

    napi_value argValue[1] = {0};
    size_t argCount = 1;


    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }
    // get OH_ImageSource_Info ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);

    OH_DecodingOptions *depos = reinterpret_cast<OH_DecodingOptions *>(ptr);
    uint32_t index = 0;
    Image_ErrorCode errCode = OH_DecodingOptions_GetIndex(depos, &index);
    if (IMAGE_SUCCESS != errCode) {
        napi_create_int32(env, errCode, &result);
        return result;
    }
    napi_create_int32(env, index, &result);

    return result;
}

/*
OH_ImageSource2_DecodingOptionsSetIndex(OH_ImageSource_DecodingOptions *opts,int32_t index);
argument[1]:OH_ImageSource_DecodingOptions*
argument[2]:index
return: errCode
*/
static napi_value DecodingOptionsSetIndex(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;


    napi_get_undefined(env, &result);

    napi_value argValue[2] = {0};
    size_t argCount = 2;


    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 2) {
        return result;
    }
    // get OH_ImageSource_DecodingOptions ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);

    uint32_t index = 0;
    napi_get_value_uint32(env, argValue[1], &index);

    OH_DecodingOptions *depos = reinterpret_cast<OH_DecodingOptions *>(ptr);

    Image_ErrorCode errCode = OH_DecodingOptions_SetIndex(depos, index);

    napi_create_int32(env, errCode, &result);

    return result;
}

/*
Image_ErrorCode OH_ImageSource2_DecodingOptionsGetRotate(OH_ImageSource_DecodingOptions *opts,
    float pixelFormat);
argument[1]:OH_ImageSource_DecodingOptions
return: Image_ErrorCode/rotate
*/
static napi_value DecodingOptionsGetRotate(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }
    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_DecodingOptions *decodeOpts = reinterpret_cast<OH_DecodingOptions *>(ptr);

    float rotate;
    Image_ErrorCode ret = OH_DecodingOptions_GetRotate(decodeOpts, &rotate);
    if (IMAGE_SUCCESS != ret) {
        napi_create_int32(env, ret, &result);

        return result;
    }
    napi_create_double(env, static_cast<double>(rotate), &result);
    return result;
}
/*
Image_ErrorCode OH_ImageSource2_DecodingOptionsSetRotate(OH_ImageSource_DecodingOptions *opts,
    float pixelFormat);
argument[1]:OH_ImageSource_DecodingOptions
arguement[2]: float rotate;
return: Image_ErrorCode/rotate
*/
static napi_value DecodingOptionsSetRotate(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[2] = {0};
    size_t argCount = 2;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 2) {
        return result;
    }
    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_DecodingOptions *decodeOpts = reinterpret_cast<OH_DecodingOptions *>(ptr);

    double rotate;
    napi_get_value_double(env, argValue[1], &rotate);


    Image_ErrorCode ret = OH_DecodingOptions_SetRotate(decodeOpts, static_cast<float>(rotate));
    napi_create_int32(env, ret, &result);
    return result;
}

/*
Image_ErrorCode OH_ImageSource2_DecodingOptionsGetDesiredSize(OH_ImageSource_DecodingOptions *opts,
    int32_t width,int32_t height);
argument[1]:OH_ImageSource_DecodingOptions
return: object{"width":,"height":}
*/
static napi_value DecodingOptionsGetDesiredSize(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }
    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_DecodingOptions *decodeOpts = reinterpret_cast<OH_DecodingOptions *>(ptr);

    Image_Size image_Size;

    Image_ErrorCode ret = OH_DecodingOptions_GetDesiredSize(decodeOpts, &image_Size);
    if (ret != IMAGE_SUCCESS) {
        napi_create_int32(env, ret, &result);
        return result;
    }
    napi_create_object(env, &result);

    setInt32NamedProperty(env, result, "width", image_Size.width);
    setInt32NamedProperty(env, result, "height", image_Size.height);

    return result;
}
/*
Image_ErrorCode OH_ImageSource2_DecodingOptionsSetDesiredSize(OH_ImageSource_DecodingOptions *opts,
    int32_t width,int32_t height);
argument[1]:OH_ImageSource_DecodingOptions
arg[1]:width
arg[2]:height
return: Image_Region
*/
static napi_value DecodingOptionsSetDesiredSize(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[3] = {0};
    size_t argCount = 3;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 3) {
        return result;
    }
    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_DecodingOptions *decodeOpts = reinterpret_cast<OH_DecodingOptions *>(ptr);

    Image_Size imageSize;
    napi_get_value_uint32(env, argValue[1], &imageSize.width);
    napi_get_value_uint32(env, argValue[2], &imageSize.height);

    Image_ErrorCode ret = OH_DecodingOptions_SetDesiredSize(decodeOpts, &imageSize);
    if (ret != IMAGE_SUCCESS) {
        napi_create_int32(env, ret, &result);
        return result;
    }

    napi_create_object(env, &result);

    setInt32NamedProperty(env, result, "width", imageSize.width);
    setInt32NamedProperty(env, result, "height", imageSize.height);

    return result;
}

/*
Image_ErrorCode OH_ImageSource2_DecodingOptionsGetDesiredRegion(OH_ImageSource_DecodingOptions *opts,
    int32_t width,int32_t height);
argument[1]:OH_ImageSource_DecodingOptions
return: object{"x","y","width","height"}
*/
static napi_value DecodingOptionsGetDesiredRegion(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }
    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_DecodingOptions *decodeOpts = reinterpret_cast<OH_DecodingOptions *>(ptr);

    Image_Region image_region;

    Image_ErrorCode ret = OH_DecodingOptions_GetDesiredRegion(decodeOpts, &image_region);
    if (ret != IMAGE_SUCCESS) {
        napi_create_int32(env, ret, &result);
        return result;
    }

    napi_create_object(env, &result);

    setInt32NamedProperty(env, result, "x", image_region.x);
    setInt32NamedProperty(env, result, "y", image_region.y);
    setInt32NamedProperty(env, result, "width", image_region.width);
    setInt32NamedProperty(env, result, "height", image_region.height);

    return result;
}

/*Image_ErrorCode OH_ImageSource2_DecodingOptionsSetDesiredRegion(OH_ImageSource_DecodingOptions *opts,
    Image_Region *desiredRegion);;
argument[1] : OH_ImageSource_DecodingOptions
argument[2] : x
argument[3] :y
argument[4] : width
argument[5] :height
return:Image_ErrorCode
*/
static napi_value DecodingOptionsSetDesiredRegion(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[5] = {0};
    size_t argCount = 5;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 5) {
        return result;
    }
    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_DecodingOptions *decodeOpts = reinterpret_cast<OH_DecodingOptions *>(ptr);

    Image_Region image_Region;
    napi_get_value_uint32(env, argValue[1], &image_Region.x);
    napi_get_value_uint32(env, argValue[2], &image_Region.y);
    napi_get_value_uint32(env, argValue[3], &image_Region.width);
    napi_get_value_uint32(env, argValue[4], &image_Region.height);

    Image_ErrorCode ret = OH_DecodingOptions_SetDesiredRegion(decodeOpts, &image_Region);
    napi_create_int32(env, ret, &result);
    return result;
}

/*
OH_ImageSource2_ReleaseDecodingOptions(OH_ImageSource_DecodingOptions *opts);
argument[1]:OH_ImageSource2_DecodingOptions *opts
return: result
*/
static napi_value ReleaseDecodingOptions(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value thisVar = nullptr;
    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok || argCount < 1) {
        return result;
    }
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_DecodingOptions *decodeOpts = reinterpret_cast<OH_DecodingOptions *>(ptr);

    Image_ErrorCode ret = OH_DecodingOptions_Release(decodeOpts);

    napi_create_int32(env, ret, &result);
    return result;
}

/*
OH_ImageSource2_CreateFromUri(char *uri, size_t uriSize, OH_ImageSource **res);
argument[1]:url
argument[2]:SourceOptions sourceOpts
return: OH_ImageSource*
*/

static napi_value CreateFromUri(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }

    const size_t maxUrlLen = 512;
    char url[maxUrlLen];
    size_t urlSize = 0;
    napi_get_value_string_utf8(env, argValue[0], url, maxUrlLen, &urlSize);


    OH_ImageSourceNative *res = nullptr;
    Image_ErrorCode errCode = OH_ImageSourceNative_CreateFromUri(url, urlSize, &res);
    if (errCode != IMAGE_SUCCESS) {
        napi_create_int32(env, errCode, &result);
        return result;
    }

    napi_status status = napi_create_external(env, reinterpret_cast<void *>(res), nullptr, nullptr, &result);
    if (status != napi_ok) {
        napi_throw_error(env, nullptr, "Failed to create external object");
        return nullptr;
    }
    return result;
}

/*
OH_ImageSource2_CreateFromFd(int32_t fd, OH_ImageSource** res);
argument[1]:fd
return: OH_ImageSource*
*/

static napi_value CreateFromFd(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }
    int32_t fd;
    napi_get_value_int32(env, argValue[0], &fd);
    if (fd < 0) {
        napi_create_int32(env, -1, &result);
        return result;
    }


    OH_ImageSourceNative *res = nullptr;
    Image_ErrorCode errCode = OH_ImageSourceNative_CreateFromFd(fd, &res);
    //    OH_LOG_INFO(LOG_APP, "CreateFromFd CreateFromFd fd: %{public}d,errCode: %{public}d",fd, errCode);
    if (errCode != IMAGE_SUCCESS) {
        napi_create_int32(env, errCode, &result);
        return result;
    }

    napi_status status = napi_create_external(env, reinterpret_cast<void *>(res), nullptr, nullptr, &result);
    if (status != napi_ok) {
        napi_throw_error(env, nullptr, "Failed to create external object");
        return nullptr;
    }

    return result;
}

/*
OH_ImageSource2_CreateFromData(uint8_t* data, size_t dataSize, OH_ImageSource**
res);
argument[1]: buffer
return: OH_ImageSource*
*/

static napi_value CreateFromData(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }

    void *data = nullptr;
    size_t dataSize = 0;

    napi_status status = napi_get_buffer_info(env, argValue[0], &data, &dataSize);
    if (status != napi_ok) {
        //        napi_throw_error(env, nullptr, "Failed to create napi_get_buffer_info object");
        return result;
    }

    //    memset(data_mod, 0, 1024*10);
    //    memcpy(data_mod, data, dataSize);
    OH_LOG_INFO(LOG_APP, "end OH_ImageSource2_CreatePixelMapList 721aaaa:%{public}d", dataSize);
    OH_ImageSourceNative *res = nullptr;
    Image_ErrorCode error = OH_ImageSourceNative_CreateFromData(reinterpret_cast<uint8_t *>(data), dataSize, &res);
    if (error != IMAGE_SUCCESS) {
        napi_throw_error(env, nullptr, "Failed to OH_ImageSource2_CreateFromData create external object,");
        return result;
    }

    status = napi_create_external(env, reinterpret_cast<void *>(res), nullptr, nullptr, &result);
    if (status != napi_ok) {
        napi_throw_error(env, nullptr, "Failed to OH_ImageSource2_CreateFromData create external object");
        return result;
    }

    return result;
}

/*
OH_ImageSource2_CreatePixelMap(OH_ImageSource* source, OH_ImageSource_DecodingOptions* ops,OH_Pixelmap** resPixMap);
argument[1]: OH_ImageSource *
argument[2]: OH_ImageSource_DecodingOptions *
return: result
*/

static napi_value CreatePixelMap(napi_env env, napi_callback_info info) {
    // OH_LOG_ERROR(LOG_APP, "ImagePixelmapNativeCTest setInitializationOptions
    // OH_PixelMap2_InitializationOptionsGetWidth failed, ""errCode:");
    napi_value result = nullptr;
    napi_value argValue[2] = {0};
    size_t argCount = 2;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 2) {
        return result;
    }
    OH_LOG_INFO(LOG_APP, "CreatePixelMap errCode====");
    // 检查第一个参数是否是一个对象
    //    napi_valuetype value;
    //    napi_status status = napi_typeof(env, argValue[0], &value);
    //    if (status != napi_ok || value != napi_object) {
    //        napi_throw_type_error(env, nullptr, "CreateFromRawFile First argument must be an object");
    //        return nullptr;
    //    }
    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_status status = napi_get_value_external(env, argValue[0], &ptr);
    OH_ImageSourceNative *imageSource = reinterpret_cast<OH_ImageSourceNative *>(ptr);


    // get OH_ImageSource_DecodingOptions ptr;
    status = napi_get_value_external(env, argValue[1], &ptr);
    OH_DecodingOptions *decodeOpts = reinterpret_cast<OH_DecodingOptions *>(ptr);

    // create pix map
    OH_PixelmapNative *resPixMap = nullptr;
    Image_ErrorCode errCode = OH_ImageSourceNative_CreatePixelmap(imageSource, decodeOpts, &resPixMap);
    if (IMAGE_SUCCESS != errCode) {
        //        napi_throw_type_error(env, nullptr, "OH_ImageSource2_CreatePixelMap First argument must be an
        //        object");
        napi_create_int32(env, errCode, &result);
        return result;
    }

    status = napi_create_external(env, reinterpret_cast<void *>(resPixMap), nullptr, nullptr, &result);
    if (status != napi_ok) {
        napi_throw_error(env, nullptr, "Failed to create external object");
        return result;
    }
    return result;
}

/*
OH_ImageSource2_CreatePixelMapList(OH_ImageSource *source, OH_ImageSource_DecodingOptions *ops,
                                   OH_PixelMap2 **resVecPixMap[], uint32_t *outSize);
argument[1]: OH_ImageSource *
argument[2]:OH_ImageSource_DecodingOptions*
return: PixelMapList[OH_Pixelmap...]
*/

static napi_value CreatePixelMapList(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[2] = {0};
    size_t argCount = 2;
    OH_LOG_INFO(LOG_APP, "OH_ImageSource2_CreatePixelMapList errCode====");
    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 2) {
        return result;
    }

    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_status status = napi_get_value_external(env, argValue[0], &ptr);
    OH_ImageSourceNative *imageSource = reinterpret_cast<OH_ImageSourceNative *>(ptr);

    // get OH_ImageSource_DecodingOptions ptr;
    status = napi_get_value_external(env, argValue[1], &ptr);
    OH_DecodingOptions *decodeOpts = reinterpret_cast<OH_DecodingOptions *>(ptr);

    uint32_t frameCnt = 0;
    Image_ErrorCode errCode = OH_ImageSourceNative_GetFrameCount(imageSource, &frameCnt);
    if (errCode != IMAGE_SUCCESS) {
        napi_create_int32(env, errCode, &result);
        return result;
    }

    // create pix maplist
    OH_PixelmapNative **resPixMapList = new OH_PixelmapNative *[frameCnt];

    size_t arrayLength = frameCnt;

    errCode = OH_ImageSourceNative_CreatePixelmapList(imageSource, decodeOpts, resPixMapList, arrayLength);
    OH_LOG_INFO(LOG_APP, "end OH_ImageSource2_CreatePixelMapList errCode:%{public}d", errCode);

    if (errCode != IMAGE_SUCCESS) {
        //        napi_throw_type_error(env, nullptr, "OH_ImageSource2_CreatePixelMapList First argument must be an
        //        object");
        delete[] resPixMapList;
        return result;
    }

    // 创建一个JavaScript数组来包装这些外部值

    status = napi_create_array_with_length(env, arrayLength, &result);
    for (size_t i = 0; i < arrayLength; i++) {
        napi_value externalValue;
        status = napi_create_external(env, resPixMapList[i], nullptr, nullptr, &externalValue);
        //        if (status != napi_ok) {
        //            // 错误处理
        //            // 清理已分配的资源
        //            for (size_t j = 0; j < i; j++) {
        //                free(pointerArray[j]);
        //            }
        //            free(pointerArray);
        //            napi_delete_reference(env, result);
        //            return NULL;
        //        }

        // 将外部值设置到JS数组的相应位置
        status = napi_set_element(env, result, i, externalValue);
        if (status != napi_ok) {
            // 错误处理
            // 清理已分配的资源
            //            for (size_t j = 0; j <= i; j++) {
            //                free(pointerArray[j]);
            //            }
            //            free(pointerArray);
            //            napi_delete_reference(env, result);
            //            return NULL;
        }
    }

    //    status = napi_create_external(env, reinterpret_cast<void *>(resPixMapList), nullptr, nullptr, &result);
    //    if (status != napi_ok) {
    //        napi_throw_error(env, nullptr, "Failed to create external object");
    //        return nullptr;
    //    }
    delete[] resPixMapList;
    return result;
}

/*
Image_ErrorCode OH_ImageSource2_GetDelayTime(OH_ImageSource *source, int32_t *delayTimeList, size_t *size);
argument[1]: OH_ImageSource *
return: result
*/
static napi_value GetDelayTime(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }

    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_ImageSourceNative *imageSource = reinterpret_cast<OH_ImageSourceNative *>(ptr);

    uint32_t frameCnt = 0;
    Image_ErrorCode errCode = OH_ImageSourceNative_GetFrameCount(imageSource, &frameCnt);
    if (errCode != IMAGE_SUCCESS) {
        napi_create_int32(env, errCode, &result);
        return result;
    }

    int32_t *delayTimeList = new int32_t[frameCnt];
    size_t size = frameCnt;
    errCode = OH_ImageSourceNative_GetDelayTimeList(imageSource, delayTimeList, size);
    if (errCode != IMAGE_SUCCESS) {
        napi_create_int32(env, errCode, &result);
        delete[] delayTimeList;
        return result;
    }
    if (size >= 0) {
        napi_create_array_with_length(env, size, &result);
        for (size_t i = 0; i < size; i++) {
            napi_value externalValue;
            napi_create_external(env, &delayTimeList[i], nullptr, nullptr, &externalValue);
            napi_set_element(env, result, i, externalValue);
        }
    }
    delete[] delayTimeList;
    return result;
}

/*
OH_ImageSource2_GetImageInfo(OH_ImageSource* source, int32_t index,OH_ImageSource_Info* info);
argument[1]: OH_ImageSource *
argument[2]: index
return: OH_ImageSource_Info
*/
static napi_value GetImageInfo(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[2] = {0};
    size_t argCount = 2;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 2) {
        return result;
    }

    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_status status = napi_get_value_external(env, argValue[0], &ptr);
    OH_ImageSourceNative *imageSource = reinterpret_cast<OH_ImageSourceNative *>(ptr);

    // get index
    int32_t index = 0;
    status = napi_get_value_int32(env, argValue[1], &index);


    OH_ImageSource_Info *imageInfo = nullptr;
    OH_ImageSourceInfo_Create(&imageInfo);

    Image_ErrorCode errCode = OH_ImageSourceNative_GetImageInfo(imageSource, index, imageInfo);
    if (errCode != IMAGE_SUCCESS) {
        napi_create_int32(env, errCode, &result);
        return result;
    }

    status = napi_create_external(env, reinterpret_cast<void *>(imageInfo), nullptr, nullptr, &result);
    if (status != napi_ok) {
        napi_throw_error(env, nullptr, "Failed to create external object");
        return nullptr;
    }
    return result;
}

/*
OH_ImageSource2_GetImageProperty(OH_ImageSource* source, Image_String* key,
    Image_String* value);
argument[1]: OH_ImageSource *
argument[2]: OH_Image_Property* key (string)
return: result
*/
static napi_value GetImageProperty(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[2] = {0};
    size_t argCount = 2;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 2) {
        return result;
    }
    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_ImageSourceNative *imageSource = reinterpret_cast<OH_ImageSourceNative *>(ptr);


    const size_t maxKeyLen = 512;
    char key[maxKeyLen];
    size_t keySize = 0;
    napi_get_value_string_utf8(env, argValue[1], key, maxKeyLen, &keySize);


    Image_String imageKey, imageValue = {nullptr, 0};
    imageKey.data = key;
    imageKey.size = keySize;

    Image_ErrorCode errCode = OH_ImageSourceNative_GetImageProperty(imageSource, &imageKey, &imageValue);
    if (errCode != IMAGE_SUCCESS) {
        napi_create_int32(env, errCode, &result);
        return result;
    }

    napi_create_string_utf8(env, (const char *)imageValue.data, imageValue.size, &result);
    return result;
}

/*
OH_ImageSource2_ModifyImageProperty(OH_ImageSource *source, OH_Image_Property *key, OH_Image_Property *value);
argument[1]: OH_ImageSource *
argument[2]: string key;
argument[3]: string value;
return: result
*/
static napi_value ModifyImageProperty(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[3] = {0};
    size_t argCount = 3;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 3) {
        return result;
    }

    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_ImageSourceNative *imageSource = reinterpret_cast<OH_ImageSourceNative *>(ptr);

    const size_t keyLen = 512;
    char *key = (char *)malloc(keyLen);
    size_t keySize = 0;
    napi_get_value_string_utf8(env, argValue[1], key, keyLen, &keySize);

    const size_t maxValLen = 512;
    char *val = (char *)malloc(maxValLen);
    size_t valSize = 0;
    napi_get_value_string_utf8(env, argValue[2], val, maxValLen, &valSize);

    Image_String imageKey, imageVal;
    imageKey.data = key;
    imageKey.size = keySize;
    imageVal.data = val;
    imageVal.size = valSize;

    OH_LOG_INFO(LOG_APP, "end OH_ImageSource2_CreatePixelMapList 1115:%{public}s,%{public}d,%{public}s,%{public}d", key,
                keySize, val, valSize);
    Image_ErrorCode errCode = OH_ImageSourceNative_ModifyImageProperty(imageSource, &imageKey, &imageVal);
    napi_create_int32(env, errCode, &result);
    free(key);
    free(val);
    return result;
}

/*
OH_ImageSource2_GetFrameCount(OH_ImageSource *source, uint32_t *res);
argument[1]: OH_ImageSource *
return: result
*/
static napi_value GetFrameCount(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }

    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_ImageSourceNative *imageSource = reinterpret_cast<OH_ImageSourceNative *>(ptr);

    uint32_t frameCnt = 0;
    Image_ErrorCode errCode = OH_ImageSourceNative_GetFrameCount(imageSource, &frameCnt);

    napi_create_object(env, &result);
    setInt32NamedProperty(env, result, "frameCnt", frameCnt);
    setInt32NamedProperty(env, result, "errCode", errCode);

    return result;
}
/*
OH_ImageSource2_Release(OH_ImageSource *source);
argument[1]: OH_ImageSource *
return: result
*/
static napi_value SourceRelease(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }

    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_ImageSourceNative *imageSource = reinterpret_cast<OH_ImageSourceNative *>(ptr);

    Image_ErrorCode errCode = OH_ImageSourceNative_Release(imageSource);
    napi_create_int32(env, errCode, &result);

    return result;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////006////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////

/*
OH_ImagePacker2_CreatePackingOptions();
return: OH_ImagePacker_PackingOptions*
*/
static napi_value CreatePackingOptions(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    napi_get_undefined(env, &result);


    OH_PackingOptions *res = nullptr;
    Image_ErrorCode errorCode = OH_PackingOptions_Create(&res);
    if (errorCode != IMAGE_SUCCESS) {
        napi_create_int32(env, errorCode, &result);
        return result;
    }

    napi_status status = napi_create_external(env, reinterpret_cast<void *>(res), nullptr, nullptr, &result);
    if (status != napi_ok) {
        napi_throw_error(env, nullptr, "Failed to create external object");
        return nullptr;
    }
    return result;
}


/*
OH_ImagePacker2_PackingOptionsGetMimeType(OH_ImagePacker_PackingOptions *opts, Image_MimeType* format);
arguments[1]: OH_ImagePacker_PackingOptions *opts
return: minetype string

*/

static napi_value PackingOptionsGetMimeType(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }

    // get OH_ImagePacker_PackingOptions ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_PackingOptions *packingOptions = reinterpret_cast<OH_PackingOptions *>(ptr);

    char mineTypeBuf[512];
    Image_MimeType mineType;
    mineType.data = mineTypeBuf;

    Image_ErrorCode errorCode = OH_PackingOptions_GetMimeType(packingOptions, &mineType);
    if (errorCode != IMAGE_SUCCESS) {
        napi_create_int32(env, errorCode, &result);
        return result;
    }
    napi_create_string_utf8(env, mineType.data, mineType.size, &result);

    return result;
}

/*
OH_ImagePacker2_PackingOptionsSetMimeType(OH_ImagePacker_PackingOptions *opts, Image_MimeType format);
arguments[1]: OH_ImagePacker_PackingOptions
arguments[2]: minetype string
return: errorcode
*/
static napi_value PackingOptionsSetMimeType(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[2] = {0};
    size_t argCount = 2;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 2) {
        return result;
    }

    // get OH_ImagePacker_PackingOptions ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_PackingOptions *packingOptions = reinterpret_cast<OH_PackingOptions *>(ptr);

    const uint32_t maxMineTypeLen = 512;
    char mineType[maxMineTypeLen];
    size_t mineTypeSize = 0;

    napi_get_value_string_utf8(env, argValue[1], mineType, maxMineTypeLen, &mineTypeSize);

    Image_MimeType tmpMineType;
    tmpMineType.data = new (std::nothrow) char[512];
    memcpy(tmpMineType.data, mineType, mineTypeSize);
    tmpMineType.data[mineTypeSize] = '\0';

    tmpMineType.size = mineTypeSize;
    Image_ErrorCode errCode = OH_PackingOptions_SetMimeType(packingOptions, &tmpMineType);

    napi_create_int32(env, errCode, &result);
    return result;
}

/*
OH_ImagePacker2_PackingOptionsGetQuality(OH_ImagePacker_PackingOptions *opts,uint32_t *quality);
arguments[1]: OH_ImagePacker_PackingOptions *opts
return: quality int32_t
*/

static napi_value PackingOptionsGetQuality(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }

    // get OH_ImagePacker_PackingOptions ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_PackingOptions *packingOptions = reinterpret_cast<OH_PackingOptions *>(ptr);

    uint32_t quality;
    Image_ErrorCode errCode = OH_PackingOptions_GetQuality(packingOptions, &quality);
    if (errCode != IMAGE_SUCCESS) {
        napi_create_int32(env, errCode, &result);
        return result;
    }
    napi_create_int32(env, quality, &result);

    return result;
}

/*
OH_ImagePacker2_PackingOptionsSetQuality(OH_ImagePacker_PackingOptions *opts,uint32_t quality);
arguments[1]: OH_ImagePacker_PackingOptions *opts
arguments[2]: quality uint32_t
return: error code
*/
static napi_value PackingOptionsSetQuality(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    napi_value argValue[2] = {0};
    size_t argCount = 2;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 2) {
        return result;
    }

    // get OH_ImagePacker_PackingOptions ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_PackingOptions *packingOptions = reinterpret_cast<OH_PackingOptions *>(ptr);

    // get quality;
    uint32_t quality;
    napi_get_value_uint32(env, argValue[1], &quality);

    Image_ErrorCode errCode = OH_PackingOptions_SetQuality(packingOptions, quality);
    napi_create_int32(env, errCode, &result);
    return result;
}

/*
OH_ImagePacker2_ReleasePackingOptions(OH_ImagePacker_PackingOptions *opts);
arguments[1]: OH_ImagePacker_PackingOptions *opts
return: error code
*/
static napi_value ReleasePackingOptions(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }

    // get OH_ImagePacker_PackingOptions ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_PackingOptions *packingOptions = reinterpret_cast<OH_PackingOptions *>(ptr);

    Image_ErrorCode errCode = OH_PackingOptions_Release(packingOptions);

    napi_create_int32(env, errCode, &result);
    return result;
}

/*
Image_ErrorCode OH_ImagePacker2_Create(OH_ImagePacker **imagePacker);
return: OH_ImagePacker*
*/
static napi_value PackerCreate(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_get_undefined(env, &result);


    OH_ImagePackerNative *res = nullptr;
    Image_ErrorCode errCode = OH_ImagePackerNative_Create(&res);
    if (errCode != IMAGE_SUCCESS) {
        napi_create_int32(env, errCode, &result);
        return result;
    }

    napi_status status = napi_create_external(env, reinterpret_cast<void *>(res), nullptr, nullptr, &result);
    if (status != napi_ok) {
        napi_throw_error(env, nullptr, "Failed to create external object");
        return nullptr;
    }

    return result;
}

/*
OH_ImagePacker2_PackToDataFromImageSource(OH_ImagePacker *imagePacker,
                                                          OH_ImagePacker_PackingOptions *option,
                                                          OH_ImageSource *imageSource, uint8_t **outData, size_t *size);
arugment[1]:OH_ImagePacker*
arugment[2]:OH_ImagePacker_PackingOptions*
arugment[3]:OH_ImageSource*
argument[4]:uint8_t* output,
return: OH_ImagePacker*
*/
static napi_value PackToDataFromImageSource(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    napi_value argValue[4] = {0};
    size_t argCount = 4;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 4) {
        return result;
    }

    // get OH_ImagePacker ptr;
    void *ptr = nullptr;
    napi_status status = napi_get_value_external(env, argValue[0], &ptr);
    OH_ImagePackerNative *packer = reinterpret_cast<OH_ImagePackerNative *>(ptr);

    // get OH_ImagePacker_PackingOptions ptr;
    ptr = nullptr;
    status = napi_get_value_external(env, argValue[1], &ptr);
    OH_PackingOptions *opts = reinterpret_cast<OH_PackingOptions *>(ptr);

    // get OH_ImageSource ptr;
    ptr = nullptr;
    status = napi_get_value_external(env, argValue[2], &ptr);
    OH_ImageSourceNative *imageSource = reinterpret_cast<OH_ImageSourceNative *>(ptr);


    //    size_t size = 0;
    //    uint8_t *outBuffer = new (std::nothrow) uint8_t[1024 * 1024 * 32];
    //    if (!outBuffer) {
    //        return result;
    //    }
    uint8_t *outBuffer = nullptr;
    size_t outBufferSize = 0;

    status = napi_get_buffer_info(env, argValue[3], (void **)&outBuffer, &outBufferSize);
    if (status != napi_ok) {
        napi_throw_error(env, nullptr, "Failed to create napi_get_buffer_info object");
        return result;
    }

    Image_ErrorCode errCode =
        OH_ImagePackerNative_PackToDataFromImageSource(packer, opts, imageSource, outBuffer, &outBufferSize);
    if (IMAGE_SUCCESS != errCode) {
        napi_create_int32(env, errCode, &result);
        return result;
    }
    napi_create_int32(env, outBufferSize, &result);
    //    delete[] outBuffer;

    //    OH_LOG_ERROR(LOG_APP,
    //                 "PackToDataFromImageSource,OH_ImagePacker: %{public}p,OH_ImagePacker_PackingOptions: "
    //                 "%{public}p,OH_ImageSource:%{public}p,errCode:%{public}d,size:%{public}d",
    //                 packer, opts, imageSource, errCode,size);
    return result;
}

/*
OH_ImagePacker2_PackToDataFromPixelMap(OH_ImagePacker* imagePacker, OH_ImagePacker_PackingOptions*
        option, OH_Pixelmap* pixelMap, uint8_t** outData, size_t* size); arugment[1]:OH_ImagePacker*
arugment[1]:OH_ImagePacker*
arugment[2]:OH_ImagePacker_PackingOptions*
arugment[3]:OH_Pixelmap*
argument[4]: uint8_t* outbuffer
return: Image_ErrorCode
*/

static napi_value PackToDataFromPixelMap(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    napi_value argValue[4] = {0};
    size_t argCount = 4;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 4) {
        return result;
    }


    // get OH_ImagePacker ptr;
    void *ptr = nullptr;
    napi_status status = napi_get_value_external(env, argValue[0], &ptr);
    OH_ImagePackerNative *packer = reinterpret_cast<OH_ImagePackerNative *>(ptr);

    // get OH_ImagePacker_PackingOptions ptr;
    ptr = nullptr;
    status = napi_get_value_external(env, argValue[1], &ptr);
    OH_PackingOptions *opts = reinterpret_cast<OH_PackingOptions *>(ptr);

    // get OH_Pixelmap ptr;
    ptr = nullptr;
    status = napi_get_value_external(env, argValue[2], &ptr);
    OH_PixelmapNative *pixMap = reinterpret_cast<OH_PixelmapNative *>(ptr);

    Image_MimeType mineType;
    OH_PackingOptions_GetMimeType(opts, &mineType);

    //    const uint32_t maxMineTypeLen = 32;
    //    char imageType[maxMineTypeLen];
    //    size_t imageTypeSize = 0;
    //
    //    napi_get_value_string_utf8(env, argValue[3], mineType, maxMineTypeLen, &mineTypeSize);


    //    uint8_t outData[1024*4];
    //    size_t size = 0;
    //    //    uint8_t *outBuffer = nullptr;
    //    uint8_t *outBuffer = new (std::nothrow) uint8_t[1024 * 1024 * 32];
    //    if (!outBuffer)
    //        return result;
    uint8_t *outBuffer = nullptr;
    size_t outBufferSize = 0;

    status = napi_get_buffer_info(env, argValue[3], (void **)&outBuffer, &outBufferSize);
    if (status != napi_ok) {
        napi_throw_error(env, nullptr, "Failed to create napi_get_buffer_info object");
        return result;
    }

    //        OH_LOG_INFO(
    //            LOG_APP,
    //            "==================PackToDataFromPixelMap,OH_ImagePacker: %{public}p,OH_ImagePacker_PackingOptions: "
    //            "%{public}p,OH_Pixelmap:%{public}p,mineType:%{public}s,mineType.size: %{public}d ",
    //            packer, opts, pixMap, mineType.format, mineType.size);

    Image_ErrorCode errCode =
        OH_ImagePackerNative_PackToDataFromPixelmap(packer, opts, pixMap, outBuffer, &outBufferSize);
    if (IMAGE_SUCCESS != errCode) {
        napi_create_int32(env, errCode, &result);
        return result;
    }

    napi_create_int32(env, outBufferSize, &result);
    //    delete[] outBuffer;
    //        OH_LOG_INFO(LOG_APP,
    //                    "PackToDataFromPixelMap,OH_ImagePacker: %{public}p,OH_ImagePacker_PackingOptions: "
    //                    "%{public}p,OH_Pixelmap:%{public}p,mineType:%{public}s,mineType.size: %{public}d "
    //                    "errCode:%{public}d,size:%{public}d",
    //                    packer, opts, pixMap, mineType.format, mineType.size, errCode, size);
    return result;
}

/*
OH_ImagePacker2_PackToFileFromImageSource(OH_ImagePacker* imagePacker, OH_ImagePacker_PackingOptions* option,
    OH_ImageSource* imageSource, int32_t fd);
arugment[1]:OH_ImagePacker*
arugment[2]:OH_ImagePacker_PackingOptions*
arugment[3]:OH_ImageSource*
argument[4]: fd int32_t
return: Image_ErrorCode
*/
static napi_value PackToFileFromImageSource(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    napi_value argValue[4] = {0};
    size_t argCount = 4;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 4) {
        return result;
    }

    // get OH_ImagePacker ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_ImagePackerNative *packer = reinterpret_cast<OH_ImagePackerNative *>(ptr);

    // get OH_ImagePacker_PackingOptions ptr;
    ptr = nullptr;
    napi_get_value_external(env, argValue[1], &ptr);
    OH_PackingOptions *opts = reinterpret_cast<OH_PackingOptions *>(ptr);

    // get OH_ImageSource ptr;
    ptr = nullptr;
    napi_get_value_external(env, argValue[2], &ptr);
    OH_ImageSourceNative *imageSource = reinterpret_cast<OH_ImageSourceNative *>(ptr);

    // get fd ptr;
    int fd;
    napi_get_value_int32(env, argValue[3], &fd);

    Image_ErrorCode errCode = OH_ImagePackerNative_PackToFileFromImageSource(packer, opts, imageSource, fd);

    napi_create_int32(env, errCode, &result);
    return result;
}

/*
OH_ImagePacker2_PackToFileFromPixelMap(OH_ImagePacker* imagePacker, OH_ImagePacker_PackingOptions* option,
    OH_Pixelmap* pixelMap, int32_t fd)
arugment[1]:OH_ImagePacker*
arugment[2]:OH_ImagePacker_PackingOptions*
arugment[3]:OH_Pixelmap*
argument[4]: fd int32_t
return: Image_ErrorCode
*/
static napi_value PackToFileFromPixelMap(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    napi_value argValue[4] = {0};
    size_t argCount = 4;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 4) {
        return result;
    }

    // get OH_ImagePacker ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_ImagePackerNative *packer = reinterpret_cast<OH_ImagePackerNative *>(ptr);

    // get OH_ImagePacker_PackingOptions ptr;
    ptr = nullptr;
    napi_get_value_external(env, argValue[1], &ptr);
    OH_PackingOptions *opts = reinterpret_cast<OH_PackingOptions *>(ptr);

    // get OH_ImageSource ptr;
    ptr = nullptr;
    napi_get_value_external(env, argValue[2], &ptr);
    OH_PixelmapNative *pixmap = reinterpret_cast<OH_PixelmapNative *>(ptr);

    // get fd ptr;
    int fd;
    napi_get_value_int32(env, argValue[3], &fd);

    Image_ErrorCode errCode = OH_ImagePackerNative_PackToFileFromPixelmap(packer, opts, pixmap, fd);

    napi_create_int32(env, errCode, &result);
    return result;
}

/*
OH_ImagePacker2_Release(OH_ImagePacker* imagePacker)
arugment[1]:OH_ImagePacker*
return: Image_ErrorCode
*/
static napi_value PackerRelease(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }


    // get OH_ImagePacker ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_ImagePackerNative *packer = reinterpret_cast<OH_ImagePackerNative *>(ptr);
    Image_ErrorCode errCode = OH_ImagePackerNative_Release(packer);
    napi_create_int32(env, errCode, &result);
    return result;
}

/*
OH_ImageSource2_Release(OH_ImageSource *source);
argument[1]: OH_PixelmapNative *
return: result
*/
static napi_value PixelMapRelease(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_value argValue[1] = {0};
    size_t argCount = 1;

    napi_get_undefined(env, &result);

    if (napi_get_cb_info(env, info, &argCount, argValue, nullptr, nullptr) != napi_ok || argCount < 1) {
        return result;
    }

    // get OH_ImageSource ptr;
    void *ptr = nullptr;
    napi_get_value_external(env, argValue[0], &ptr);
    OH_PixelmapNative *pixelMap = reinterpret_cast<OH_PixelmapNative *>(ptr);

    Image_ErrorCode errCode = OH_PixelmapNative_Release(pixelMap);
    napi_create_int32(env, errCode, &result);

    return result;
}

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports) {
    napi_property_descriptor desc[] = {
        {"testInitializationOptions", nullptr, TestInitializationOptions, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"testCreatePixelmap", nullptr, TestCreatePixelmap, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testCreatePixelmapWithData", nullptr, TestCreatePixelmapWithData, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"testSavePixelmap", nullptr, TestSavePixelmap, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testReadPixels", nullptr, TestReadPixels, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testWritePixels", nullptr, TestWritePixels, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testGetImageInfo", nullptr, TestGetImageInfo, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testOpacity", nullptr, TestOpacity, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testScale", nullptr, TestScale, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testTranslate", nullptr, TestTranslate, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testRotate", nullptr, TestRotate, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testFlip", nullptr, TestFlip, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testCrop", nullptr, TestCrop, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testReleasePixelmap", nullptr, TestReleasePixelmap, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"CreateImageInfo", nullptr, CreateImageInfo, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"ImageInfoGetWidth", nullptr, ImageInfoGetWidth, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"ImageInfoGetHeight", nullptr, ImageInfoGetHeight, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"ReleaseImageInfo", nullptr, ReleaseImageInfo, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"CreateDecodingOptions", nullptr, CreateDecodingOptions, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"DecodingOptionsGetPixelFormat", nullptr, DecodingOptionsGetPixelFormat, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"DecodingOptionsSetPixelFormat", nullptr, DecodingOptionsSetPixelFormat, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"DecodingOptionsGetIndex", nullptr, DecodingOptionsGetIndex, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"DecodingOptionsSetIndex", nullptr, DecodingOptionsSetIndex, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"DecodingOptionsGetRotate", nullptr, DecodingOptionsGetRotate, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"DecodingOptionsSetRotate", nullptr, DecodingOptionsSetRotate, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"DecodingOptionsGetDesiredSize", nullptr, DecodingOptionsGetDesiredSize, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"DecodingOptionsSetDesiredSize", nullptr, DecodingOptionsSetDesiredSize, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"DecodingOptionsGetDesiredRegion", nullptr, DecodingOptionsGetDesiredRegion, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"DecodingOptionsSetDesiredRegion", nullptr, DecodingOptionsSetDesiredRegion, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"ReleaseDecodingOptions", nullptr, ReleaseDecodingOptions, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"CreateFromUri", nullptr, CreateFromUri, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"CreateFromFd", nullptr, CreateFromFd, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"CreateFromData", nullptr, CreateFromData, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"CreatePixelMap", nullptr, CreatePixelMap, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"CreatePixelMapList", nullptr, CreatePixelMapList, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"GetImageInfo", nullptr, GetImageInfo, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"GetImageProperty", nullptr, GetImageProperty, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"ModifyImageProperty", nullptr, ModifyImageProperty, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"GetFrameCount", nullptr, GetFrameCount, nullptr, nullptr, nullptr, napi_default, nullptr},

        {"SourceRelease", nullptr, SourceRelease, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"PixelMapRelease", nullptr, PixelMapRelease, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"CreatePackingOptions", nullptr, CreatePackingOptions, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"PackingOptionsGetMimeType", nullptr, PackingOptionsGetMimeType, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"PackingOptionsSetMimeType", nullptr, PackingOptionsSetMimeType, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"PackingOptionsGetQuality", nullptr, PackingOptionsGetQuality, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"PackingOptionsSetQuality", nullptr, PackingOptionsSetQuality, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"ReleasePackingOptions", nullptr, ReleasePackingOptions, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"PackerCreate", nullptr, PackerCreate, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"PackToDataFromImageSource", nullptr, PackToDataFromImageSource, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"PackToDataFromPixelMap", nullptr, PackToDataFromPixelMap, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"PackToFileFromImageSource", nullptr, PackToFileFromImageSource, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"PackToFileFromPixelMap", nullptr, PackToFileFromPixelMap, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"PackerRelease", nullptr, PackerRelease, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"GetDelayTime", nullptr, GetDelayTime, nullptr, nullptr, nullptr, napi_default, nullptr}};
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "ImageNdk",
    .nm_priv = ((void *)0),
    .reserved = {0},
};

extern "C" __attribute__((constructor)) void RegisterEntryModule(void) { napi_module_register(&demoModule); }