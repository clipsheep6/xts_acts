#ifndef PIXEL_MAP_MODULE_TEST_H
#define PIXEL_MAP_MODULE_TEST_H

#include <memory>
#include <string>
#include <vector>
#include "napi/native_api.h"
#include "napi/native_node_api.h"
#include "image/image_source_native.h"
#include "image/pixelmap_native.h"
#include "image/image_source_native.h"
#include "image/image_common.h"

class ImagePixelMapNative {
public:
    ImagePixelMapNative();
    ~ImagePixelMapNative();

    int32_t GetPixelmap(int32_t fd, OH_PixelmapNative **pixelmap);
    int32_t ConvertPixelmapToNapi(napi_env env, OH_PixelmapNative *pixelmap, napi_value *res);
    int32_t ConvertPixelmapFromNapi(napi_env env, napi_value source, OH_PixelmapNative **pixelmap);
    int32_t GetPixelmapPixelFormat(napi_env env, OH_PixelmapNative *pixelmap, napi_value *format);
private:
};
#endif // PIXEL_MAP_MODULE_TEST_H