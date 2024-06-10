#ifndef PIXEL_MAP_NATIVE_TEST_H
#define PIXEL_MAP_NATIVE_TEST_H

#include <memory>
#include <string>
#include "napi/native_api.h"
#include "napi/native_node_api.h"
#include "pixel_map_module_test.h"

namespace OHOS {
namespace Media {
class ImagePixelMapNativeTest {
public:
    static napi_value JsConvertPixelmapToNapi(napi_env env, napi_callback_info info);
    static napi_value JsConvertPixelmapFromNapi(napi_env env, napi_callback_info info);
private:
};
} // namespace Media
} // namespace OHOS
#endif // PIXEL_MAP_NATIVE_TEST_H