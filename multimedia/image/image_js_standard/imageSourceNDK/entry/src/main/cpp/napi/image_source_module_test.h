#ifndef IMAGE_SOURCE_MODULE_TEST_H
#define IMAGE_SOURCE_MODULE_TEST_H

#include <memory>
#include <string>
#include <vector>
#include "napi/native_api.h"
#include "napi/native_node_api.h"
#include "image/image_source_native.h"
#include "image/pixelmap_native.h"
#include "image/image_source_native.h"
#include "image/image_common.h"

class ImageSourceNative {
public:
    ImageSourceNative();
    ~ImageSourceNative();

    int32_t GetImageSource(int32_t fd, OH_ImageSourceNative **source);
    int32_t GetImageSourceMimeType(OH_ImageSourceNative *source, Image_MimeType *mimetype);
private:
};
#endif // IMAGE_SOURCE_MODULE_TEST_H