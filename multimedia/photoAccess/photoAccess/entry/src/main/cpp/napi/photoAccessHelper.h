/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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

#ifndef OHMEDIALIBRARYNDK_PHOTO_ACCESS_HELPER_H
#define OHMEDIALIBRARYNDK_PHOTO_ACCESS_HELPER_H

#include "hilog/log.h"
#include "media_asset_base_capi.h"
#include "media_asset_capi.h"
#include "napi/native_api.h"
#include "image_source_native.h"
#include "media_access_helper_capi.h"
#include "media_asset_change_request_capi.h"
#include "media_asset_manager_capi.h"

#define MEDIA_LOG_TAG "MEDIA_TAGLOG"
#define MEDIA_LOG_DOMAIN 0x00000
#define LOG(fmt, ...) (void)OH_LOG_Print(LOG_APP, LOG_DEBUG, MEDIA_LOG_DOMAIN, MEDIA_LOG_TAG, fmt, ##__VA_ARGS__)

const unsigned int LOG_ID = 0xD002B70;
constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, LOG_ID, "MediaLibraryNDKTest"};
#define MY_HILOG(op, fmt, args...)                                                 \
    do                                                                             \
    {                                                                              \
        op(LABEL, "{%{public}s:%{public}d} " fmt, __FUNCTION__, __LINE__, ##args); \
    } while (0)
#define DEBUG_LOG(fmt, ...) MY_HILOG(OHOS::HiviewDFX::HiLog::Info, fmt, ##__VA_ARGS__)

typedef enum UseCaseCode {
    PARAMETER_OK = 0,     // 参数正常
    PARAMETER1_ERROR = 1, // 参数1异常
    PARAMETER2_ERROR = 2, // 参数2异常
    PARAMETER3_ERROR = 3, // 参数3异常
    PARAMETER4_ERROR = 4, // 参数4异常
    PARAMETER5_ERROR = 5, // 参数5异常
    PARAMETER_ENUM1 = 6, // 测试第一个枚举值
    PARAMETER_ENUM2 = 7, // 测试第二个枚举值

} UseCaseCode;

class NDKMediaLibrary {
public:
    NDKMediaLibrary();
    ~NDKMediaLibrary(void);

    //mediaAsset
    MediaLibrary_ErrorCode MediaAssetGetUri(int useCaseCode);
    MediaLibrary_ErrorCode MediaAssetGetDisplayName(int useCaseCode);
    MediaLibrary_ErrorCode MediaAssetGetSize(int useCaseCode);
    MediaLibrary_ErrorCode MediaAssetGetDateModifiedMs(int useCaseCode);
    MediaLibrary_ErrorCode MediaAssetGetWidth(int useCaseCode);
    MediaLibrary_ErrorCode MediaAssetGetHeight(int useCaseCode);
    MediaLibrary_ErrorCode MediaAssetGetOrientation(int useCaseCode);
    MediaLibrary_ErrorCode MediaAssetRelease(int useCaseCode);

    //changeRequest
    MediaLibrary_ErrorCode ChangeRequestAddResourceWithBuffer(int useCaseCode);
    MediaLibrary_ErrorCode ChangeRequestSaveCameraPhoto(int useCaseCode);
    MediaLibrary_ErrorCode ChangeRequestDiscardCameraPhoto(int useCaseCode);
    MediaLibrary_ErrorCode ChangeRequestRelease(int useCaseCode);

    //mediaAssetManager
    MediaLibrary_ErrorCode ManagerRequestImage(int useCaseCode);

    MediaLibrary_ErrorCode MediaAccessHelperApplyChanges(int useCaseCode);


private:
    OH_MediaAsset* mediaAsset_; // mediaAsset实例。
    OH_MediaAssetChangeRequest* changeRequest_;
    // OH_MovingPhoto* movingPhoto_;
    OH_ImageSourceNative* imageSourceNaive_;
    OH_MediaAssetManager* manager_;

    //mediaAsset photo keys
    const char* uri_; // mediaAsset URI
    const char* displayName_; // mediaAsset displayName
    uint32_t size_;
    uint32_t dateModifiedMs_;
    uint32_t width_;
    uint32_t height_;
    uint32_t orientation_;

    //mediaAssetManager
    MediaLibrary_RequestOptions requestOptions_;
    OH_MediaLibrary_OnImageDataPrepared callback_;
    MediaLibrary_RequestId requestId_;

    MediaLibrary_ErrorCode ret_;


};

#endif
