#ifndef IMAGE_SOURCE_NATIVE_TEST_H
#define IMAGE_SOURCE_NATIVE_TEST_H

#include <memory>
#include <string>
#include "napi/native_api.h"
#include "napi/native_node_api.h"
#include "image_source_module_test.h"

namespace OHOS {
namespace Media {
class ImageSourceNativeTest {
public:
    static napi_value JsImageSourceGetMimeType(napi_env env, napi_callback_info info);
private:
};
} // namespace Media
} // namespace OHOS
#endif // IMAGE_SOURCE_NATIVE_TEST_H