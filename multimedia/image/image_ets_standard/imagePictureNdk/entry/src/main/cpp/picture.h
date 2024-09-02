/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
#ifndef PICTURE_H
#define PICTURE_H

#include <memory>
#include <multimedia/image_framework/image/image_native.h>
#include <multimedia/image_framework/image/picture_native.h>
#include <string>
#include <vector>
#include "napi/native_api.h"
// #include "napi/native_node_api.h"

#include "multimedia/image_framework/image/image_source_native.h"
#include "multimedia/image_framework/image/pixelmap_native.h"
#include "multimedia/image_framework/image/image_source_native.h"
#include "multimedia/image_framework/image/image_common.h"
#include "multimedia/image_framework/image/image_native.h"
#include "multimedia/image_framework/image/image_packer_native.h"
#include <bits/alltypes.h>
// #include "log_common.h"
// #include <hilog/log.h>

class ImagePictureNative {
public:
    Image_ErrorCode errCode_ = IMAGE_SUCCESS;
    OH_DecodingOptionsForPicture *options_= nullptr;
    OH_ImagePackerNative *imagePacker = nullptr;
    OH_PackingOptions *packerOptions_= nullptr;
    OH_AuxiliaryPictureNative *auxiliaryPicture_=nullptr;
    OH_AuxiliaryPictureNative *GainMap_auxiliaryPicture_= nullptr;
    OH_PictureNative *picture_ = nullptr;
    OH_PictureNative *picture_imagesource_ = nullptr;
    OH_AuxiliaryPictureInfo *info = nullptr;
    OH_PictureMetadata *auxMetadata = nullptr;
//     OH_PictureMetadata *metadata = nullptr;
    OH_ImageSourceNative *source_ = nullptr;
    OH_PixelmapNative *resPixMap_ = nullptr;
    ImagePictureNative(){};
    ~ImagePictureNative();
    
    // Picture
    Image_ErrorCode CreatePicture(char name[1024], size_t size, OH_PictureNative **picture);
    Image_ErrorCode ImageSourceNative_CreatePicture(OH_ImageSourceNative *source, OH_DecodingOptionsForPicture *options,
                                                    OH_PictureNative **picture);
    Image_ErrorCode PictureNative_GetMainPixelmap(OH_PictureNative *picture, OH_PixelmapNative **mainPixelmap);
    Image_ErrorCode PictureNative_GetHdrComposedPixelmap(OH_PictureNative *picture, OH_PixelmapNative **pixelmap);
    Image_ErrorCode PictureNative_GetGainmapPixelmap(OH_PictureNative *picture, OH_PixelmapNative **gainmapPixelmap);
    Image_ErrorCode PictureNative_SetAuxiliaryPicture(OH_PictureNative *picture, AuxiliaryPictureType type,
                                                      OH_AuxiliaryPictureNative *auxiliaryPicture);
    Image_ErrorCode PictureNative_GetAuxiliaryPicture(OH_PictureNative *picture, AuxiliaryPictureType type, 
                                        OH_AuxiliaryPictureNative **auxiliaryPicture);
    Image_ErrorCode PictureNative_Release(OH_PictureNative *picture);
    
    // AuxiliaryPicture
    Image_ErrorCode AuxiliaryPictureNative_Create(uint8_t *data, size_t dataLength, Image_Size *size, AuxiliaryPictureType type,
                                           OH_AuxiliaryPictureNative **auxiliaryPicture);
    Image_ErrorCode AuxiliaryPictureNative_WritePixels(OH_AuxiliaryPictureNative *auxiliaryPicture, uint8_t *source,
                                                       size_t bufferSize);
    Image_ErrorCode AuxiliaryPictureNative_ReadPixels(OH_AuxiliaryPictureNative *auxiliaryPicture, 
                                                        uint8_t *destination, size_t *bufferSize);
    Image_ErrorCode AuxiliaryPictureNative_GetType(OH_AuxiliaryPictureNative *auxiliaryPicture,
                                                   AuxiliaryPictureType *type);
    Image_ErrorCode AuxiliaryPictureNative_GetInfo(OH_AuxiliaryPictureNative *auxiliaryPicture,
                                                   OH_AuxiliaryPictureInfo **info);
    Image_ErrorCode AuxiliaryPictureNative_SetInfo(OH_AuxiliaryPictureNative *auxiliaryPicture,
                                                   OH_AuxiliaryPictureInfo *info);
    Image_ErrorCode AuxiliaryPictureNative_GetMetadata(OH_AuxiliaryPictureNative *auxiliaryPicture,
        MetadataType metadataType,OH_PictureMetadata **metadata);
    Image_ErrorCode AuxiliaryPictureNative_SetMetadata(OH_AuxiliaryPictureNative *auxiliaryPicture,
        MetadataType metadataType,OH_PictureMetadata *metadata);
    Image_ErrorCode AuxiliaryPictureNative_Release(OH_AuxiliaryPictureNative *picture);

    // AuxiliaryPictureInfo
    Image_ErrorCode AuxiliaryPictureInfo_Create(OH_AuxiliaryPictureInfo **info);
    Image_ErrorCode AuxiliaryPictureInfo_GetType(OH_AuxiliaryPictureInfo *info, AuxiliaryPictureType *type);
    Image_ErrorCode AuxiliaryPictureInfo_SetType(OH_AuxiliaryPictureInfo *info, AuxiliaryPictureType type);
    Image_ErrorCode AuxiliaryPictureInfo_GetSize(OH_AuxiliaryPictureInfo *info, Image_Size *size);
    Image_ErrorCode AuxiliaryPictureInfo_SetSize(OH_AuxiliaryPictureInfo *info, Image_Size *size);
    Image_ErrorCode AuxiliaryPictureInfo_GetRowStride(OH_AuxiliaryPictureInfo *info, uint32_t *rowStride);
    Image_ErrorCode AuxiliaryPictureInfo_SetRowStride(OH_AuxiliaryPictureInfo *info, uint32_t rowStride);
    Image_ErrorCode AuxiliaryPictureInfo_GetPixelFormat(OH_AuxiliaryPictureInfo *info, PIXEL_FORMAT *pixelFormat);
    Image_ErrorCode AuxiliaryPictureInfo_SetPixelFormat(OH_AuxiliaryPictureInfo *info, PIXEL_FORMAT pixelFormat);
    Image_ErrorCode AuxiliaryPictureInfo_Release(OH_AuxiliaryPictureInfo *info);

    // Metadata
    Image_ErrorCode PictureMetadata_Create(MetadataType metadataType,OH_PictureMetadata **metadata);
    Image_ErrorCode PictureMetadata_GetProperty(OH_PictureMetadata *metadata, Image_String *key, Image_String *value);
    Image_ErrorCode PictureMetadata_SetProperty(OH_PictureMetadata *metadata, Image_String *key, Image_String *value);
    Image_ErrorCode PictureMetadata_Release(OH_PictureMetadata *metadata);
    
    // ImagePacker
    Image_ErrorCode ImagePackerNative_PackToDataFromPicture(OH_ImagePackerNative *imagePacker,
                                                            OH_PackingOptions *options, OH_PictureNative *picture,
                                                            uint8_t *outData, size_t *size);
    Image_ErrorCode ImagePackerNative_PackToFileFromPicture(OH_ImagePackerNative *imagePacker,
                                                            OH_PackingOptions *options, OH_PictureNative *picture,
                                                            int32_t fd);

    // DecodingOptionsForPicture
    Image_ErrorCode DecodingOptionsForPicture_Create(OH_DecodingOptionsForPicture **options);
    Image_ErrorCode DecodingOptionsForPicture_GetDesiredAuxiliaryPictures(OH_DecodingOptionsForPicture *options,
                                                        AuxiliaryPictureType **desiredAuxiliaryPictures, size_t *length);
    Image_ErrorCode DecodingOptionsForPicture_SetDesiredAuxiliaryPictures(OH_DecodingOptionsForPicture *options,
                                               AuxiliaryPictureType *desiredAuxiliaryPictures, size_t length);
    Image_ErrorCode DecodingOptionsForPicture_Release(OH_DecodingOptionsForPicture *options);

private:
    std::string message = "marshalling";
    OH_PixelmapNative *commodityPixelMap = nullptr;
    OH_PixelmapNative *pixelmapForSetAux = nullptr;
    OH_PixelmapNative *mainPixelmap = nullptr;
    OH_PictureNative *pictureForSetAux = nullptr;
    OH_PictureNative *pictureByImageSource = nullptr;
    OH_AuxiliaryPictureNative *Aux_picture = nullptr;
    OH_AuxiliaryPictureNative *aPictureForSet = nullptr;
    OH_AuxiliaryPictureNative *aPictureForGet = nullptr;
    OH_AuxiliaryPictureNative *Aux_picture_for_operations = nullptr;
    OH_ImageSourceNative *imageSource = nullptr;
};

#endif // PICTURE_H