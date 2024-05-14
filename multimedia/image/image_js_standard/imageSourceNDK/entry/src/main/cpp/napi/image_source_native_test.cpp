#include <memory>
#include <string>
#include <map>
#include <uv.h>
#include "node_api.h"
#include "hilog/log.h"
#include "image_source_native_test.h"

#define STATIC_FUNCTION(n, f) { (n), nullptr, ImageSourceNativeTest::f, nullptr, nullptr, nullptr, napi_static, nullptr }

namespace OHOS {
namespace Media {

using namespace std;

constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, 0xD002B05, "ImageSourceNativeTest"};

static constexpr uint32_t NUM_0 = 0;
static constexpr uint32_t NUM_1 = 1;

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        STATIC_FUNCTION("JsConvertPixelmapToNapi", JsConvertPixelmapToNapi),
        STATIC_FUNCTION("JsConvertPixelmapFromNapi", JsConvertPixelmapFromNapi),
        STATIC_FUNCTION("JsImageSourceGetMimeType", JsImageSourceGetMimeType),
        STATIC_FUNCTION("JsPixelMapGetMimeType", JsPixelMapGetMimeType),
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

extern "C" __attribute__((constructor)) void RegisterEntryModule(void)
{
    napi_module_register(&demoModule);
}

static uint32_t getNativeImageSource(napi_env env, napi_callback_info info,
    napi_value* argValue, size_t &argCount)
{
    napi_value thisVar = nullptr;
    if (argValue == nullptr || argCount == 0) {
        return -1;
    }
    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok) {
        return -1;
    }
    return 0;
}

napi_value ImageSourceNativeTest::JsImageSourceGetMimeType(napi_env env, napi_callback_info info)
{
    napi_value result = nullptr;
    napi_get_undefined(env, &result);
    napi_value argValue[NUM_1] = {0};
    size_t argCount = 1;
    uint32_t num = getNativeImageSource(env, info, argValue, argCount);
    if (num != 0)
    {
        HiviewDFX::HiLog::Error(LABEL, "getNativeImageSource failed");
        return result;
    }
    int32_t fd = 0;
    napi_get_value_int32(env, argValue[NUM_0], &fd);

    OH_ImageSourceNative *source = nullptr;
    ImageSourceNative ISMT;
    int32_t ret = ISMT.GetImageSource(fd, &source);
    if (ret != IMAGE_SUCCESS)
    {
        HiviewDFX::HiLog::Error(LABEL, "GetImageSource failed");
        return result;
    }

    Image_MimeType mimeType;
    int32_t ret1 = ISMT.GetImageSourceMimeType(source, &mimeType);
    if (ret1 != 0)
    {
        HiviewDFX::HiLog::Error(LABEL, "GetImageSourceMimeType failed");
        napi_create_int32(env, ret1, &result);
        return result;
    }
    std::string name(mimeType.data, mimeType.size);
    napi_create_string_utf8(env, name.c_str(), NAPI_AUTO_LENGTH, &result);
    return result;
}

} // namespace Media
} // namespace OHOS