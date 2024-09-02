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
#include <dlfcn.h>
#include "picture.h"

#include "napi/native_api.h"
#include <multimedia/image_framework/image/pixelmap_native.h>
#include <multimedia/image_framework/image/image_packer_native.h>
#include <multimedia/image_framework/image/image_source_native.h>

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
#define MAX_BUFFER_SIZE 512
#define MAX_COLOR_SIZE 96
#define MAX_QUALITY_SIZE 98

OH_PixelmapNative *TEST_PIXELMAP = nullptr;
const char *LOG_APP = "imagePictureNdk";
const char* VPE_SO_NAME = "/system/lib64/libvideoprocessingengine.z.so";

const char *tag_main = "[MultiMediaImage_main]";
static ImagePictureNative *ndkPicture_ = new ImagePictureNative;

static napi_value CreatePicture_(napi_env env, napi_callback_info info) {
    //  H_LOGE("666,%d",5);
    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_value result;
//     OH_PictureNative *picture;


    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);
    
    char filePath[1024];
    size_t filePathSize;
    napi_get_value_string_utf8(env, args[0], filePath, 1024, &filePathSize);

    //  H_LOGE("name : %{public}s", filePath);

    //  H_LOGE("ndkPicture CreatePicture start");
    if(ndkPicture_->picture_!=nullptr){
        ndkPicture_->PictureNative_Release(ndkPicture_->picture_);
        ndkPicture_->picture_ = nullptr;
    }
    
    Image_ErrorCode res = ndkPicture_-> CreatePicture(filePath, filePathSize, &ndkPicture_->picture_);
    //  H_LOGE("ndkPicture CreatePicture end");
    napi_create_int32(env, res, &result);
    return result;
}

static napi_value ImageSourceNative_CreatePicture_(napi_env env, napi_callback_info info) {
    size_t requireArgc = 2;
    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_value result;


    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    char name[1024];
    size_t nameSize = 1024;
    napi_get_value_string_utf8(env, args[0], name, 1024, &nameSize);

    //  OH_LOG_INFO(LOG_APP, "name : %{public}s", name);
    uint32_t res = ndkPicture_->ImageSourceNative_CreatePicture(ndkPicture_->source_, ndkPicture_->options_, 
                                                        &ndkPicture_->picture_imagesource_);
    napi_create_int32(env, res, &result);
    return result;
}

static napi_value PictureNative_GetMainPixelmap_(napi_env env, napi_callback_info info){
    napi_value result;
    OH_PixelmapNative *mainPixelmap = nullptr;
    Image_ErrorCode res = ndkPicture_->PictureNative_GetMainPixelmap(ndkPicture_->picture_, &mainPixelmap);
    napi_create_int32(env, res, &result);
    return result;
};

static napi_value GetHdrComposedPixelmap(napi_env env, napi_callback_info info) {
    OH_PixelmapNative *pixelmap = nullptr;
    ndkPicture_->PictureNative_GetHdrComposedPixelmap(ndkPicture_->picture_, &pixelmap);
    if(pixelmap){
        //  H_LOGE("SUCC");
    }
    return 0;
}

// GetPixelmapForGainmap_
static napi_value PictureNative_GetGainmapPixelmap_(napi_env env, napi_callback_info info) {
    napi_value result;
    OH_PixelmapNative *GainmapPixelmap = nullptr;
    ndkPicture_->PictureNative_GetGainmapPixelmap(ndkPicture_->picture_, &GainmapPixelmap);
    return result;
}

// OH_PictureNative_Release
static napi_value PictureNative_Release_(napi_env env, napi_callback_info info) { 
    ndkPicture_->PictureNative_Release(ndkPicture_->picture_); 
    return 0;
}

static napi_value AuxiliaryPictureNative_Create_(napi_env env, napi_callback_info info) {
//     //  H_LOGE("XF AuxiliaryPictureNative_Create Start !");
    //  H_LOGE("XF2222 AuxiliaryPictureNative_Create Start !");
    napi_value result;
    uint8_t data1[] = {1};
    uint8_t *data = data1 ;
//     napi_get_value_uint8_t(env, args[0], data); // 缺少napi层实现
    uint32_t dataLength = 10;
//     napi_get_value_uint32(env, args[1], &dataLength);
    Image_Size size;
    size.height = 2;
    size.width = 2;
    AuxiliaryPictureType type = GAINMAP;
    //  H_LOGE("XF2222 AuxiliaryPictureNative_Create Start !");
    uint32_t res = ndkPicture_->AuxiliaryPictureNative_Create(data, dataLength, &size, type
                                                        , &ndkPicture_->auxiliaryPicture_);
    //  H_LOGE("%{public}d AuxiliaryPictureNative_Create success !",ndkPicture_->auxiliaryPicture_?0:1);
    napi_create_int32(env, res, &result);
    return result;
}

// OH_AuxiliaryPictureNative_GetType
static napi_value AuxiliaryPictureNative_GetType_(napi_env env, napi_callback_info info) {

    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);

    AuxiliaryPictureType type;
    napi_value result;
    uint32_t res = ndkPicture_->AuxiliaryPictureNative_GetType(ndkPicture_->auxiliaryPicture_, 
                                                                    &type);
    napi_create_int32(env, res, &result);
    return result;
}

static napi_value PictureNative_SetAuxiliaryPicture_(napi_env env, napi_callback_info info){
    AuxiliaryPictureType type = GAINMAP;
    napi_value result;
    //  H_LOGE("xf1111 PictureNative_SetAuxiliaryPicture_ start");
    if(ndkPicture_->auxiliaryPicture_ == nullptr){
        //  H_LOGE("%{public}s OH_PictureNative_SetAuxiliaryPicture is nullptr", tag_main);
    }
    
    uint32_t res = ndkPicture_->PictureNative_SetAuxiliaryPicture(ndkPicture_->picture_, type,
                                                                           ndkPicture_->auxiliaryPicture_);
    //  H_LOGE("xf1111 PictureNative_SetAuxiliaryPicture_ succ");
    napi_create_int32(env, res, &result);
    return result;
};

static napi_value PictureNative_GetAuxiliaryPicture_(napi_env env, napi_callback_info info) {
    AuxiliaryPictureType type = GAINMAP;
    //  H_LOGE("xf1111 PictureNative_GetAuxiliaryPicture_  start");
    ndkPicture_->PictureNative_GetAuxiliaryPicture(ndkPicture_->picture_, type, 
                                                &ndkPicture_->auxiliaryPicture_);
    return 0;
};

static napi_value AuxiliaryPictureNative_WritePixels_(napi_env env, napi_callback_info info) {

    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);

    uint8_t a[20] ={10};
    uint8_t *source = a;
//     napi_get_value_uint8_t(env, args[0], source);
    size_t bufferSize = 20;
    //  H_LOGE("xf1111 PictureNative_GetAuxiliaryPicture_  start");
    ndkPicture_->AuxiliaryPictureNative_WritePixels(ndkPicture_->auxiliaryPicture_,
                                                                               source, bufferSize);
    return 0;
};

static napi_value AuxiliaryPictureNative_ReadPixels_(napi_env env, napi_callback_info info) {

    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);

    uint8_t *destination = new uint8_t[20];
//     napi_get_value_uint8_t(env, args[0], destination);
    size_t bufferSize=20;
    //  H_LOGE("xf1111 PictureNative_GetAuxiliaryPicture_  start");
    ndkPicture_->AuxiliaryPictureNative_ReadPixels(ndkPicture_->auxiliaryPicture_, 
                                                            destination, &bufferSize);
    
    if(destination){
        delete []destination;
    }
    return 0;
};

static napi_value AuxiliaryPictureInfo_Create_(napi_env env, napi_callback_info info){
    OH_AuxiliaryPictureInfo *auxiliary_info = nullptr;
    
    ndkPicture_->AuxiliaryPictureInfo_Create(&auxiliary_info);
    if(auxiliary_info!=nullptr)
    {
         //  H_LOGE("xf1111 AuxiliaryPictureInfo_Create_  succ");
        ndkPicture_->info = auxiliary_info;
    }
    return 0;
};

// Image_ErrorCode OH_AuxiliaryPictureInfo_GetType(OH_AuxiliaryPictureInfo *info, AuxiliaryPictureType *type);
static napi_value AuxiliaryPictureInfo_GetType_(napi_env env, napi_callback_info info) {
    size_t argc = 1;
    napi_value args[1] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    AuxiliaryPictureType type = GAINMAP; // init
    napi_value result;
    uint32_t res = ndkPicture_->AuxiliaryPictureInfo_GetType(ndkPicture_->info, &type);
    napi_create_int32(env, res, &result);
    return result;
}

// Image_ErrorCode OH_AuxiliaryPictureInfo_SetType(OH_AuxiliaryPictureInfo *info, AuxiliaryPictureType type);
static napi_value AuxiliaryPictureInfo_SetType_(napi_env env, napi_callback_info info) {
    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[0], &valuetype1);

    AuxiliaryPictureType type = GAINMAP;
    napi_value result;
    uint32_t res = ndkPicture_->AuxiliaryPictureInfo_SetType(ndkPicture_->info, type);
    napi_create_int32(env, res, &result);
    return result;
}

static napi_value AuxiliaryPictureInfo_GetSize_(napi_env env, napi_callback_info info){

    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[0], &valuetype1);

    OH_AuxiliaryPictureInfo *AuxiliaryInfo;
    Image_Size *size;
    napi_value result;
    uint32_t res = ndkPicture_->AuxiliaryPictureInfo_GetSize(AuxiliaryInfo, size);
    napi_create_int32(env, res, &result);
    return result;
};

static napi_value AuxiliaryPictureInfo_SetSize_(napi_env env, napi_callback_info info) {

    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[0], &valuetype1);

    OH_AuxiliaryPictureInfo *AuxiliaryInfo;
    Image_Size *size;
    napi_value result;
    uint32_t res = ndkPicture_->AuxiliaryPictureInfo_SetSize(AuxiliaryInfo, size);
    napi_create_int32(env, res, &result);
    return result;
};

static napi_value AuxiliaryPictureNative_GetInfo_(napi_env env, napi_callback_info info) {

    ndkPicture_->AuxiliaryPictureNative_GetInfo(ndkPicture_->auxiliaryPicture_, 
                                                        &ndkPicture_->info);
    if(ndkPicture_->info==nullptr){
        //  H_LOGE("FAIL");
    }
    return 0;
};
//
static napi_value AuxiliaryPictureNative_SetInfo_(napi_env env, napi_callback_info info) {

    napi_value result;
    uint32_t res = ndkPicture_->AuxiliaryPictureNative_SetInfo(ndkPicture_->auxiliaryPicture_, 
                                                                        ndkPicture_->info);
    napi_create_int32(env, res, &result);
    return result;
};

// Image_ErrorCode OH_AuxiliaryPictureNative_GetMetadata(OH_AuxiliaryPictureNative *auxiliaryPicture,
//                                                       OH_PictureMetadata **metadata);
static napi_value AuxiliaryPictureNative_GetMetadata_(napi_env env, napi_callback_info info) {
    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);

    napi_value result;
    MetadataType metadataType = EXIF_METADATA;
    uint32_t res = ndkPicture_->AuxiliaryPictureNative_GetMetadata(ndkPicture_->auxiliaryPicture_,
                                                        metadataType,&ndkPicture_->auxMetadata);
    napi_create_int32(env, res, &result);
    return result;
}

// Image_ErrorCode OH_AuxiliaryPictureNative_SetMetadata(OH_AuxiliaryPictureNative *auxiliaryPicture,
//                                                       OH_PictureMetadata *metadata);
static napi_value AuxiliaryPictureNative_SetMetadata_(napi_env env, napi_callback_info info) {
    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);

    napi_value result;
    MetadataType metadataType = EXIF_METADATA;
    uint32_t res = ndkPicture_->AuxiliaryPictureNative_SetMetadata(ndkPicture_->auxiliaryPicture_,metadataType,
                                                                            ndkPicture_->auxMetadata);
    napi_create_int32(env, res, &result);
    return result;
}

// ReleaseAuxiliaryPicture_
static napi_value ReleaseAuxiliaryPicture_(napi_env env, napi_callback_info info) {
    ndkPicture_->AuxiliaryPictureNative_Release(ndkPicture_->auxiliaryPicture_);
    return 0;
    
}

static napi_value AuxiliaryPictureInfo_GetRowStride_(napi_env env, napi_callback_info info) {

    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);

    OH_AuxiliaryPictureInfo *auxiliaryInfo;
    uint32_t rowStride;
    ndkPicture_->AuxiliaryPictureInfo_GetRowStride(ndkPicture_->info, &rowStride);
    return 0;
};

static napi_value AuxiliaryPictureInfo_SetRowStride_(napi_env env, napi_callback_info info) {

    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);
    

    uint32_t rowStride;
    napi_get_value_uint32(env, args[0], &rowStride);
    ndkPicture_->AuxiliaryPictureInfo_SetRowStride(ndkPicture_->info, rowStride);
    return 0;
};

static napi_value AuxiliaryPictureInfo_GetPixelFormat_(napi_env env, napi_callback_info info) {
    OH_AuxiliaryPictureInfo *auxiliaryInfo;
    PIXEL_FORMAT pixelFormat;
    ndkPicture_->AuxiliaryPictureInfo_GetPixelFormat(ndkPicture_->info, &pixelFormat);
    //  H_LOGE("PIXEL_FORMAT:%{public}d",pixelFormat);
    return 0;
};

static napi_value AuxiliaryPictureInfo_SetPixelFormat_(napi_env env, napi_callback_info info) {

    PIXEL_FORMAT pixelFormat = PIXEL_FORMAT_RGBA_8888;
    ndkPicture_->AuxiliaryPictureInfo_SetPixelFormat(ndkPicture_->info, pixelFormat);
    return 0;
};

// Image_ErrorCode OH_AuxiliaryPictureInfo_Release(OH_AuxiliaryPictureInfo *info);
static napi_value AuxiliaryPictureInfo_Release_(napi_env env, napi_callback_info info) {
    ndkPicture_->AuxiliaryPictureInfo_Release(ndkPicture_->info);
    return 0;
}

// Image_ErrorCode PictureMetadata_Create(OH_PictureMetadata **metadata);
static napi_value PictureMetadata_Create_(napi_env env, napi_callback_info info) {
    size_t argc = 1;
    napi_value args[1] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_value result;
    MetadataType metadataType = EXIF_METADATA;
    uint32_t res = ndkPicture_->PictureMetadata_Create(EXIF_METADATA,&ndkPicture_->auxMetadata);
    napi_create_int32(env, res, &result);
    return result;
}

// Image_ErrorCode OH_PictureMetadata_GetProperty(OH_PictureMetadata *metadata, Image_String *key, Image_String *value);
static napi_value PictureMetadata_GetProperty_(napi_env env, napi_callback_info info) {
    size_t argc = 1;
    napi_value args[1] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_value result;
    Image_String key;
    key.data = "ImageWidth";
    key.size = 10;
    Image_String value;
    uint32_t res = ndkPicture_->PictureMetadata_GetProperty(ndkPicture_->auxMetadata, &key, &value);
    napi_create_int32(env, res, &result);
    return result;
}

// Image_ErrorCode PictureMetadata_SetProperty(OH_PictureMetadata *metadata, Image_String *key, Image_String *value);
static napi_value PictureMetadata_SetProperty_(napi_env env, napi_callback_info info) {
    size_t argc = 1;
    napi_value args[1] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_value result;
    Image_String key;
    key.data = "key";
    key.size = 3;
    Image_String value;
    value.data = "value666";
    value.size = 3;
    uint32_t res = ndkPicture_->PictureMetadata_SetProperty(ndkPicture_->auxMetadata, &key, &value);

    key.data = "ImageWidth";
    key.size = 10;
    value.data = "666";
    value.size = 3;
    res = ndkPicture_->PictureMetadata_SetProperty(ndkPicture_->auxMetadata, &key, &value);


    napi_create_int32(env, res, &result);
    return result;
}

// Image_ErrorCode PictureMetadata_Release(OH_PictureMetadata *metadata);
static napi_value PictureMetadata_Release_(napi_env env, napi_callback_info info) {
    size_t argc = 1;
    napi_value args[1] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_value result;
    uint32_t res = ndkPicture_->PictureMetadata_Release(ndkPicture_->auxMetadata);
    napi_create_int32(env, res, &result);
    return result;
}

// OH_ImagePackerNative *imagePacker, OH_PackingOptions *options, OH_PictureNative *picture, uint8_t *outData, size_t *size
static napi_value ImagePackerNative_PackToDataFromPicture_(napi_env env, napi_callback_info info) {

    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);



    uint8_t *outData = new uint8_t[5];
//     napi_get_value_uint8_t(env, args[1], outData);
    size_t size=5;

    ndkPicture_->ImagePackerNative_PackToDataFromPicture(ndkPicture_->imagePacker, ndkPicture_->packerOptions_,
                                                ndkPicture_->picture_, outData, &size);
    return 0;
    
};

// OH_ImagePackerNative *imagePacker, OH_PackingOptions *options, OH_PictureNative *picture, int32_t fd
static napi_value ImagePackerNative_PackToFileFromPicture_(napi_env env, napi_callback_info info) {

    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);

    OH_ImagePackerNative *imagePacker;
    OH_PackingOptions *options;

//     napi_get_value_int32(env, args[1], &fd);
    int32_t fd = open("test", O_WRONLY|O_CREAT);
    ndkPicture_->ImagePackerNative_PackToFileFromPicture(ndkPicture_->imagePacker, ndkPicture_->packerOptions_, 
                                                                    ndkPicture_->picture_, fd);
    return 0;
};

static napi_value DecodingOptionsForPicture_Create_(napi_env env, napi_callback_info info){

    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);

//     OH_DecodingOptionsForPicture **options;
    
    ndkPicture_->DecodingOptionsForPicture_Create(&ndkPicture_->options_);
    return 0;
};


static napi_value DecodingOptionsForPicture_GetDesiredAuxiliaryPictures_(napi_env env, napi_callback_info info) {

    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);

    OH_DecodingOptionsForPicture *options;
    AuxiliaryPictureType *desiredAuxiliaryPictures = nullptr;
    size_t length = 0;
    ndkPicture_->DecodingOptionsForPicture_GetDesiredAuxiliaryPictures(ndkPicture_->options_, 
                                                    &desiredAuxiliaryPictures,&length);
    if(length>0 and desiredAuxiliaryPictures!=nullptr){
        for (int i=0; i<length; i++) {
            //  H_LOGE("id:%{public}d,AuxType:%{public}d",i,desiredAuxiliaryPictures[i]);
        }
    }
    
    return 0;

};


static napi_value DecodingOptionsForPicture_SetDesiredAuxiliaryPictures_(napi_env env, napi_callback_info info){

    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);

    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);

    OH_DecodingOptionsForPicture * options;
    size_t length = 2;
    AuxiliaryPictureType desiredAuxiliaryPictures[2];
    desiredAuxiliaryPictures[0] = GAINMAP;
    desiredAuxiliaryPictures[1] = DEPTH_MAP;
    ndkPicture_->DecodingOptionsForPicture_SetDesiredAuxiliaryPictures(ndkPicture_->options_, 
                                                                            desiredAuxiliaryPictures, 
                                                                            length);

    return 0;
};

static napi_value DecodingOptionsForPicture_Release_(napi_env env, napi_callback_info info){
    ndkPicture_->DecodingOptionsForPicture_Release(ndkPicture_->options_);
    return 0;
};


EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports) {
    napi_property_descriptor desc[] = {
        {"createPicture", nullptr, CreatePicture_, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"pictureNative_GetMainPixelmap", nullptr, PictureNative_GetMainPixelmap_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"getHdrComposedPixelmap", nullptr, GetHdrComposedPixelmap, nullptr, nullptr,
         nullptr, napi_default, nullptr},
        {"pictureNative_GetGainmapPixelmap", nullptr, PictureNative_GetGainmapPixelmap_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"pictureNative_SetAuxiliaryPicture", nullptr, PictureNative_SetAuxiliaryPicture_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"pictureNative_GetAuxiliaryPicture", nullptr, PictureNative_GetAuxiliaryPicture_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"pictureNative_Release", nullptr, PictureNative_Release_, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"auxiliaryPictureNative_Create", nullptr, AuxiliaryPictureNative_Create_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"auxiliaryPictureNative_GetType", nullptr, AuxiliaryPictureNative_GetType_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"auxiliaryPictureNative_WritePixels", nullptr, AuxiliaryPictureNative_WritePixels_, nullptr, nullptr, nullptr,
          napi_default, nullptr},
        {"auxiliaryPictureNative_ReadPixels", nullptr, AuxiliaryPictureNative_ReadPixels_, nullptr, nullptr, nullptr, 
          napi_default, nullptr},
        {"auxiliaryPictureNative_GetInfo", nullptr, AuxiliaryPictureNative_GetInfo_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"auxiliaryPictureNative_SetInfo", nullptr, AuxiliaryPictureNative_SetInfo_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"releaseAuxiliaryPicture", nullptr, ReleaseAuxiliaryPicture_, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        
        {"auxiliaryPictureInfo_Create", nullptr, AuxiliaryPictureInfo_Create_, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"auxiliaryPictureInfo_GetRowStride", nullptr, AuxiliaryPictureInfo_GetRowStride_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"auxiliaryPictureInfo_SetRowStride", nullptr, AuxiliaryPictureInfo_SetRowStride_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"auxiliaryPictureInfo_GetType", nullptr, AuxiliaryPictureInfo_GetType_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"auxiliaryPictureInfo_SetType", nullptr, AuxiliaryPictureInfo_SetType_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"auxiliaryPictureInfo_GetSize", nullptr, AuxiliaryPictureInfo_GetSize_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"auxiliaryPictureInfo_SetSize", nullptr, AuxiliaryPictureInfo_SetSize_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"auxiliaryPictureInfo_GetPixelFormat", nullptr, AuxiliaryPictureInfo_GetPixelFormat_, nullptr, nullptr,
         nullptr, napi_default, nullptr},
        {"auxiliaryPictureInfo_SetPixelFormat", nullptr, AuxiliaryPictureInfo_SetPixelFormat_, nullptr, nullptr,
         nullptr, napi_default, nullptr},
        {"auxiliaryPictureInfo_Release", nullptr, AuxiliaryPictureInfo_Release_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
    
    
        {"imageSourceNative_CreatePicture", nullptr, ImageSourceNative_CreatePicture_, nullptr, nullptr, nullptr,
         napi_default, nullptr},

        {"pictureMetadata_Create", nullptr, PictureMetadata_Create_, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"pictureMetadata_GetProperty", nullptr, PictureMetadata_GetProperty_, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"pictureMetadata_SetProperty", nullptr, PictureMetadata_SetProperty_, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"pictureMetadata_Release", nullptr, PictureMetadata_Release_, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"auxiliaryPictureNative_GetMetadata", nullptr, AuxiliaryPictureNative_GetMetadata_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"auxiliaryPictureNative_SetMetadata", nullptr, AuxiliaryPictureNative_SetMetadata_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"imagePackerNative_PackToDataFromPicture", nullptr, ImagePackerNative_PackToDataFromPicture_, nullptr, nullptr,
         nullptr, napi_default, nullptr},
        {"imagePackerNative_PackToFileFromPicture", nullptr, ImagePackerNative_PackToFileFromPicture_, nullptr, nullptr,
         nullptr, napi_default, nullptr},
        {"decodingOptionsForPicture_Create", nullptr, DecodingOptionsForPicture_Create_, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"decodingOptionsForPicture_GetDesiredAuxiliaryPictures", nullptr,
         DecodingOptionsForPicture_GetDesiredAuxiliaryPictures_, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"decodingOptionsForPicture_SetDesiredAuxiliaryPictures", nullptr,
         DecodingOptionsForPicture_SetDesiredAuxiliaryPictures_, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"decodingOptionsForPicture_Release", nullptr, DecodingOptionsForPicture_Release_, nullptr, nullptr, nullptr,
         napi_default, nullptr}};
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