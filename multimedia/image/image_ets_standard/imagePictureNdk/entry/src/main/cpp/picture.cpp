#include "picture.h"
#include <hilog/log.h>

#define NUM_0 0
#define NUM_1 1
const char *tag = "[MultiMediaImage]";

// CreatePicture
Image_ErrorCode ImagePictureNative::CreatePicture(char filePath[1024], size_t nameSize, OH_PictureNative **picture) {
    
    // 创建ImageSource实例

    errCode_ = OH_ImageSourceNative_CreateFromUri(filePath, nameSize, &source_);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI("%{public}s OH_ImageSourceNative_CreateFromUri failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI("%{public}s OH_ImageSourceNative_CreateFromUri success !", tag);
    }

    OH_DecodingOptions *ops = nullptr;
    OH_DecodingOptions_Create(&ops);
   
    errCode_ = OH_ImageSourceNative_CreatePixelmap(source_, ops, &resPixMap_);
    OH_DecodingOptions_Release(ops);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI("%{public}s OH_ImageSourceNative_CreatePixelmap failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI("%{public}s OH_ImageSourceNative_CreatePixelmap success !", tag);
    }
    
    errCode_ = OH_PictureNative_CreatePicture(resPixMap_, picture);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI("%{public}s OH_PictureNative_CreatePicture failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI("%{public}s OH_PictureNative_CreatePicture success !", tag);
    }

    return IMAGE_SUCCESS;
}

Image_ErrorCode ImagePictureNative::ImageSourceNative_CreatePicture(OH_ImageSourceNative *source,
                                                                    OH_DecodingOptionsForPicture *options,
                                                                    OH_PictureNative **picture) {
    errCode_ = OH_ImageSourceNative_CreatePicture(source, options, picture);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI("%{public}s ImageSourceNative_CreatePicture failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI("%{public}s ImageSourceNative_CreatePicture success !", tag);
    }
    return IMAGE_SUCCESS;
};

// GetMainPixelMap
Image_ErrorCode ImagePictureNative::PictureNative_GetMainPixelmap(OH_PictureNative *picture, OH_PixelmapNative **mainPixelmap) {

    errCode_ = OH_PictureNative_GetMainPixelmap(picture, mainPixelmap);
    if (errCode_ != IMAGE_SUCCESS || mainPixelmap == nullptr) {
        // DRAWING_LOGI("%{public}s OH_PictureNative_GetMainPixelmap failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI("%{public}s OH_PictureNative_GetMainPixelmap success !", tag);
    }

    return IMAGE_SUCCESS;
}

// GetMainHdrComposedPixelmap
Image_ErrorCode ImagePictureNative::PictureNative_GetHdrComposedPixelmap(OH_PictureNative *picture, OH_PixelmapNative **pixelmap) {
    errCode_ = OH_PictureNative_GetHdrComposedPixelmap(picture, pixelmap);
    if (errCode_ != IMAGE_SUCCESS || !pixelmap) {
        // DRAWING_LOGI(
             // "%s OH_PictureNative_GetHdrComposedPixelmap failed, errCode: "
             // "%{public}d.", tag,
             // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_PictureNative_GetHdrComposedPixelmap success !", tag);
    }
    return IMAGE_SUCCESS;
}

// // OH_AuxiliaryPictureNative_GetPixelmapForGainmap
Image_ErrorCode ImagePictureNative::PictureNative_GetGainmapPixelmap(OH_PictureNative *picture,
                                                                     OH_PixelmapNative **GainmapPixelmap) {
    errCode_ = OH_PictureNative_GetGainmapPixelmap(picture, GainmapPixelmap);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI( "ReleaseAuxiliaryPicture failed, errCode: %{public}d.", // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( "ReleaseAuxiliaryPicture success !");
    }

    return IMAGE_SUCCESS;
}

// // Release
Image_ErrorCode ImagePictureNative::PictureNative_Release(OH_PictureNative *picture) {
    errCode_ = OH_PictureNative_Release(picture);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(

            // "%s OH_PictureNative_Release failed, errCode: %{public}d.",tag, 
            // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_PictureNative_Release success !", tag);
    }

    return IMAGE_SUCCESS;
}


// CreateAuxiliaryPicture
Image_ErrorCode ImagePictureNative::AuxiliaryPictureNative_Create(uint8_t *data, size_t dataLength, Image_Size *size,
                                                            AuxiliaryPictureType type,
                                                           OH_AuxiliaryPictureNative **auxiliaryPicture_) {
    // DRAWING_LOGE("XF33333 AuxiliaryPictureNative_Create Start !");
    errCode_ = OH_AuxiliaryPictureNative_Create(data, dataLength, size, type, auxiliaryPicture_);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI("%{public}s OH_AuxiliaryPictureNative_Create failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI("%{public}s OH_AuxiliaryPictureNative_Create success !", tag);
    }

    return IMAGE_SUCCESS;
};

// AuxiliaryPictureNative_GetType
Image_ErrorCode ImagePictureNative::AuxiliaryPictureNative_GetType(OH_AuxiliaryPictureNative *auxiliaryPicture,
                                                                   AuxiliaryPictureType *type) {
    errCode_ = OH_AuxiliaryPictureNative_GetType(auxiliaryPicture, type);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(
            
            // "%s OH_AuxiliaryPictureNative_GetType failed, errCode: %{public}d.", tag,
            // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_AuxiliaryPictureNative_GetType success !", tag);
    }

    return IMAGE_SUCCESS;
};
//
// SetAuxiliaryPicture
Image_ErrorCode ImagePictureNative::PictureNative_SetAuxiliaryPicture(OH_PictureNative *picture, AuxiliaryPictureType type,
                                                        OH_AuxiliaryPictureNative *auxiliaryPicture) {
    errCode_ = OH_PictureNative_SetAuxiliaryPicture(picture, type, auxiliaryPicture);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI("%{public}s OH_PictureNative_SetAuxiliaryPicture failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI("%{public}s OH_PictureNative_SetAuxiliaryPicture success !", tag);
    }

    return IMAGE_SUCCESS;
}

// GetAuxiliaryPicture
Image_ErrorCode ImagePictureNative::PictureNative_GetAuxiliaryPicture(OH_PictureNative *picture, AuxiliaryPictureType type,
                                                        OH_AuxiliaryPictureNative **auxiliaryPicture) {
    errCode_ = OH_PictureNative_GetAuxiliaryPicture(picture, type, auxiliaryPicture);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI("%{public}s OH_PictureNative_GetAuxiliaryPicture failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI("%{public}s OH_PictureNative_GetAuxiliaryPicture success !", tag);
    }

    return IMAGE_SUCCESS;
}

// AuxiliaryPictureNative_WritePixels
Image_ErrorCode ImagePictureNative::AuxiliaryPictureNative_WritePixels(OH_AuxiliaryPictureNative *auxiliaryPicture,
                                                                       uint8_t *source, size_t bufferSize) {
    errCode_ = OH_AuxiliaryPictureNative_WritePixels(auxiliaryPicture, source, bufferSize);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI("%{public}s OH_AuxiliaryPictureNative_WritePixels failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI("%{public}s OH_AuxiliaryPictureNative_WritePixels success !", tag);
    }

    return IMAGE_SUCCESS;
};
//
// OH_AuxiliaryPictureNative_ReadPixels
Image_ErrorCode ImagePictureNative::AuxiliaryPictureNative_ReadPixels(OH_AuxiliaryPictureNative *auxiliaryPicture,
                                                                      uint8_t *destination, size_t *bufferSize) {
    errCode_ = OH_AuxiliaryPictureNative_ReadPixels(auxiliaryPicture, destination, bufferSize);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(
            
            // "%s OH_AuxiliaryPictureNative_ReadPixels failed, errCode: %{public}d.", tag,
            // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_AuxiliaryPictureNative_ReadPixels success !", tag);
    }

    return IMAGE_SUCCESS;
};

// 	OH_AuxiliaryPictureInfo_Create(OH_AuxiliaryPictureInfo **info);	
Image_ErrorCode ImagePictureNative::AuxiliaryPictureInfo_Create(OH_AuxiliaryPictureInfo **info) {
    errCode_ = OH_AuxiliaryPictureInfo_Create(info);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(
            
            // "%s OH_AuxiliaryPictureInfo_Create failed, errCode: %{public}d.", tag,
            // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_AuxiliaryPictureInfo_Create success !", tag);
    }

    return IMAGE_SUCCESS;
};

// AuxiliaryPictureInfo_GetType
Image_ErrorCode ImagePictureNative::AuxiliaryPictureInfo_GetType(OH_AuxiliaryPictureInfo *info,
                                                                 AuxiliaryPictureType *type) {
    errCode_ = OH_AuxiliaryPictureInfo_GetType(info, type);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI( "%s AuxiliaryPictureInfo_GetType failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( "%s AuxiliaryPictureInfo_GetType success !", tag);
    }
    return IMAGE_SUCCESS;
}

// AuxiliaryPictureInfo_SetType
Image_ErrorCode ImagePictureNative::AuxiliaryPictureInfo_SetType(OH_AuxiliaryPictureInfo *info,
                                                                 AuxiliaryPictureType type) {
    errCode_ = OH_AuxiliaryPictureInfo_SetType(info, type);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI( "%s AuxiliaryPictureInfo_SetType failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( "%s AuxiliaryPictureInfo_SetType success !", tag);
    }
    return IMAGE_SUCCESS;
}

Image_ErrorCode ImagePictureNative::AuxiliaryPictureInfo_GetSize(OH_AuxiliaryPictureInfo *info, Image_Size *size) {
    errCode_ = OH_AuxiliaryPictureInfo_GetSize(info, size);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI( "%s AuxiliaryPictureInfo_GetSize failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( "%s AuxiliaryPictureInfo_GetSize success !", tag);
    }
    return IMAGE_SUCCESS;
}

Image_ErrorCode ImagePictureNative::AuxiliaryPictureInfo_SetSize(OH_AuxiliaryPictureInfo *info, Image_Size *size) {
    errCode_ = OH_AuxiliaryPictureInfo_SetSize(info, size);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI( "%s AuxiliaryPictureInfo_GetSize failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( "%s AuxiliaryPictureInfo_GetSize success !", tag);
    }
    return IMAGE_SUCCESS;
}

Image_ErrorCode ImagePictureNative::AuxiliaryPictureNative_GetInfo(OH_AuxiliaryPictureNative *auxiliaryPicture, 
                                                                    OH_AuxiliaryPictureInfo **info){
    errCode_ = OH_AuxiliaryPictureNative_GetInfo(auxiliaryPicture, info);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(
            
            // "%s OH_AuxiliaryPictureNative_GetInfo failed, errCode: %{public}d.", tag,
            // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_AuxiliaryPictureNative_GetInfo success !", tag);
    }
    return IMAGE_SUCCESS;
};

Image_ErrorCode ImagePictureNative::AuxiliaryPictureNative_SetInfo(OH_AuxiliaryPictureNative *auxiliaryPicture,
                                                                   OH_AuxiliaryPictureInfo *info) {
    errCode_ = OH_AuxiliaryPictureNative_SetInfo(auxiliaryPicture, info);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(
            
            // "%s OH_AuxiliaryPictureNative_SetInfo failed, errCode: %{public}d.", tag,
            // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_AuxiliaryPictureNative_SetInfo success !", tag);
    }
    return IMAGE_SUCCESS;
};

// AuxiliaryPictureNative_GetMetadata
Image_ErrorCode ImagePictureNative::AuxiliaryPictureNative_GetMetadata(OH_AuxiliaryPictureNative *auxiliaryPicture,
    MetadataType metadataType, OH_PictureMetadata **auxMetadata) {
    errCode_ = OH_AuxiliaryPictureNative_GetMetadata(auxiliaryPicture,metadataType, auxMetadata);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI( "%s AuxiliaryPictureNative_GetMetadata failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( "%s AuxiliaryPictureNative_GetMetadata success !", tag);
    }
    return IMAGE_SUCCESS;
}

// AuxiliaryPictureNative_SetMetadata
Image_ErrorCode ImagePictureNative::AuxiliaryPictureNative_SetMetadata(OH_AuxiliaryPictureNative *auxiliaryPicture,
MetadataType metadataType, OH_PictureMetadata *auxMetadata) {
    errCode_ = OH_AuxiliaryPictureNative_SetMetadata(auxiliaryPicture,metadataType, auxMetadata);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI( "%s AuxiliaryPictureNative_SetMetadata failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( "%s AuxiliaryPictureNative_SetMetadata success !", tag);
    }
    return IMAGE_SUCCESS;
}

// ReleasePicture
Image_ErrorCode ImagePictureNative::AuxiliaryPictureNative_Release(OH_AuxiliaryPictureNative *picture) {
    errCode_ = OH_AuxiliaryPictureNative_Release(picture);
    picture = nullptr;
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI( "%{public}s ReleaseAuxiliaryPicture failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( "%s ReleaseAuxiliaryPicture success !", tag);
    }
    return IMAGE_SUCCESS;
}

// OH_AuxiliaryPictureInfo_GetRowStride(OH_AuxiliaryPictureInfo *info, uint32_t *rowStride);
Image_ErrorCode ImagePictureNative::AuxiliaryPictureInfo_GetRowStride(OH_AuxiliaryPictureInfo *info, uint32_t *rowStride) {
    errCode_ = OH_AuxiliaryPictureInfo_GetRowStride(info, rowStride);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(
            
            // "%s OH_AuxiliaryPictureInfo_GetRowStride failed, errCode: %{public}d.", tag,
            // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_AuxiliaryPictureInfo_GetRowStride success !", tag);
    }
    return IMAGE_SUCCESS;
};


Image_ErrorCode ImagePictureNative::AuxiliaryPictureInfo_SetRowStride(OH_AuxiliaryPictureInfo *info, uint32_t rowStride) {
    errCode_ = OH_AuxiliaryPictureInfo_SetRowStride(info, rowStride);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(
            
            // "%s OH_AuxiliaryPictureInfo_SetRowStride failed, errCode: %{public}d.",
            // // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_AuxiliaryPictureInfo_SetRowStride success !", tag);
    }

    return IMAGE_SUCCESS;
};


Image_ErrorCode ImagePictureNative::AuxiliaryPictureInfo_GetPixelFormat(OH_AuxiliaryPictureInfo *info, 
                                                                        PIXEL_FORMAT *pixelFormat) {
    errCode_ = OH_AuxiliaryPictureInfo_GetPixelFormat(info, pixelFormat);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(
            
            // "%s OH_AuxiliaryPictureInfo_GetPixelFormat failed, errCode: %{public}d.",
            // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_AuxiliaryPictureInfo_GetPixelFormat success !", tag);
    }

    return IMAGE_SUCCESS;
};


Image_ErrorCode ImagePictureNative::AuxiliaryPictureInfo_SetPixelFormat(OH_AuxiliaryPictureInfo *info, 
                                                                        PIXEL_FORMAT pixelFormat) {
    errCode_ = OH_AuxiliaryPictureInfo_SetPixelFormat(info, pixelFormat);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(
            
            // "%s OH_AuxiliaryPictureInfo_SetPixelFormat failed, errCode: %{public}d.",
            // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_AuxiliaryPictureInfo_SetPixelFormat success !", tag);
    }

    return IMAGE_SUCCESS;
};

// AuxiliaryPictureInfo_Release
Image_ErrorCode ImagePictureNative::AuxiliaryPictureInfo_Release(OH_AuxiliaryPictureInfo *info) {
    errCode_ = OH_AuxiliaryPictureInfo_Release(info);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI( "%s AuxiliaryPictureInfo_Release failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( "%s AuxiliaryPictureInfo_Release success !", tag);
    }

    return IMAGE_SUCCESS;
}

Image_ErrorCode ImagePictureNative::PictureMetadata_Create(MetadataType metadataType,OH_PictureMetadata **metadata) {
    errCode_ = OH_PictureMetadata_Create(metadataType,metadata);
    if (errCode_ != IMAGE_SUCCESS || !metadata) {
        // DRAWING_LOGI( "%s PictureMetadata_Create failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( "%s PictureMetadata_Create success !", tag);
    }

    return IMAGE_SUCCESS;
}

Image_ErrorCode ImagePictureNative::PictureMetadata_GetProperty(OH_PictureMetadata *metadata, Image_String *key,
                                                                Image_String *value) {
    errCode_ = OH_PictureMetadata_GetProperty(metadata, key, value);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI( "%s PictureMetadata_GetProperty failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( "%s PictureMetadata_GetProperty success !", tag);
    }

    return IMAGE_SUCCESS;
}

Image_ErrorCode ImagePictureNative::PictureMetadata_SetProperty(OH_PictureMetadata *metadata, Image_String *key,
                                                                Image_String *value) {
    errCode_ = OH_PictureMetadata_SetProperty(metadata, key, value);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI( "%s PictureMetadata_SetProperty failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( "%s PictureMetadata_SetProperty success !", tag);
    }

    return IMAGE_SUCCESS;
}

Image_ErrorCode ImagePictureNative::PictureMetadata_Release(OH_PictureMetadata *metadata) {
    errCode_ = OH_PictureMetadata_Release(metadata);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI( "%s PictureMetadata_Release failed, errCode: %{public}d.", // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( "%s PictureMetadata_Release success !", tag);
    }

    return IMAGE_SUCCESS;
}

Image_ErrorCode ImagePictureNative::ImagePackerNative_PackToDataFromPicture(OH_ImagePackerNative *imagePacker, 
                                                                        OH_PackingOptions *options,
                                                                        OH_PictureNative *picture, uint8_t *outData, size_t *size ) {
    if(options == nullptr){
        errCode_ = OH_PackingOptions_Create(&options);
    }
    if(imagePacker== nullptr){    
        errCode_ = OH_ImagePackerNative_Create(&imagePacker);
    }
    Image_MimeType format;
    format.size=5;
    format.data = "abced";
    OH_PackingOptions_SetMimeType(options,&format);
    errCode_ = OH_ImagePackerNative_PackToDataFromPicture(imagePacker, options, picture, outData, size);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(

            // "%s OH_ImagePackerNative_PackToDataFromPicture failed, errCode: %{public}d.",
            // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_ImagePackerNative_PackToDataFromPicture success !", tag);
    }

    return IMAGE_SUCCESS;
};

Image_ErrorCode ImagePictureNative::ImagePackerNative_PackToFileFromPicture(OH_ImagePackerNative *imagePacker, 
                                                                            OH_PackingOptions *options,
                                                                            OH_PictureNative *picture, int32_t fd) {
    if(options == nullptr){
        errCode_ = OH_PackingOptions_Create(&options);
    }
    if(imagePacker== nullptr){    
        errCode_ = OH_ImagePackerNative_Create(&imagePacker);
    }
    Image_MimeType format;
    format.size=5;
    format.data = "abced";
    OH_PackingOptions_SetMimeType(options,&format);
    errCode_ = OH_ImagePackerNative_PackToFileFromPicture(imagePacker, options, picture, fd);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(

            // "%s OH_ImagePackerNative_PackToFileFromPicture failed, errCode: %{public}d.",
            // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_ImagePackerNative_PackToFileFromPicture success !", tag);
    }

    return IMAGE_SUCCESS;
};


Image_ErrorCode ImagePictureNative::DecodingOptionsForPicture_Create(OH_DecodingOptionsForPicture **options) {
    errCode_ = OH_DecodingOptionsForPicture_Create(options);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(
                     // "%s OH_DecodingOptionsForPicture_Create failed, errCode: %{public}d.",
                     // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_DecodingOptionsForPicture_Create success !", tag);
    }

    return IMAGE_SUCCESS;
};


Image_ErrorCode ImagePictureNative::DecodingOptionsForPicture_GetDesiredAuxiliaryPictures(OH_DecodingOptionsForPicture *options, 
                                                                AuxiliaryPictureType **desiredAuxiliaryPictures, size_t *length) {
    errCode_ = OH_DecodingOptionsForPicture_GetDesiredAuxiliaryPictures(options, desiredAuxiliaryPictures, length);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(
                     // "%s OH_DecodingOptionsForPicture_GetDesiredAuxiliaryPictures failed, errCode: "
                     // "%{public}d.",
                     // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_DecodingOptionsForPicture_GetDesiredAuxiliaryPictures success !", tag);
    }

    return IMAGE_SUCCESS;
};

Image_ErrorCode ImagePictureNative::DecodingOptionsForPicture_SetDesiredAuxiliaryPictures(OH_DecodingOptionsForPicture *options,
                                                                AuxiliaryPictureType *desiredAuxiliaryPictures,
                                                                size_t length){
    errCode_ = OH_DecodingOptionsForPicture_SetDesiredAuxiliaryPictures(options, desiredAuxiliaryPictures, length);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(
                     // "%s OH_DecodingOptionsForPicture_SetDesiredAuxiliaryPictures failed,errCode: "
                     // "%{public}d.",
                     // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_DecodingOptionsForPicture_SetDesiredAuxiliaryPictures success !", tag);
    }

    return IMAGE_SUCCESS;
};


Image_ErrorCode ImagePictureNative::DecodingOptionsForPicture_Release(OH_DecodingOptionsForPicture *options) {
    errCode_ = OH_DecodingOptionsForPicture_Release(options);
    if (errCode_ != IMAGE_SUCCESS) {
        // DRAWING_LOGI(
                     // "%s OH_DecodingOptionsForPicture_Release failed,errCode: %{public}d.",
                     // tag, // errCode_);
        return errCode_;
    } else {
        // DRAWING_LOGI( // "%s OH_DecodingOptionsForPicture_Release success !", tag);
    }

    return IMAGE_SUCCESS;
};
