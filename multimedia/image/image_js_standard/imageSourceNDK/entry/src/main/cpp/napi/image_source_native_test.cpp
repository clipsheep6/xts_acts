#include <memory>
#include <string>
#include <map>
#include <uv.h>
#include "node_api.h"
#include "hilog/log.h"
#include "image_source_native_test.h"

#define STATIC_FUNCTION(n, f) { (n), nullptr, ImageSourceTest::f, nullptr, nullptr, nullptr, napi_static, nullptr }

namespace OHOS {
namespace Media {

using namespace std;

constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, 0xD002B05, "ImageSourceTest"};

static constexpr uint32_t NUM_0 = 0;
static constexpr uint32_t NUM_1 = 1;

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        STATIC_FUNCTION("JsGetImageProperty", JsGetImageProperty),
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

napi_value ImageSourceTest::JsGetImageProperty(napi_env env, napi_callback_info info)
{
    napi_value result = nullptr;
    napi_get_undefined(env, &result);
    napi_value thisVar = nullptr;
    napi_value argValue[NUM_1] = {0};
    size_t argCount = NUM_1;

    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok) {
        HiviewDFX::HiLog::Error(LABEL, "JsGetImageProperty failed to parse params");
        return result;
    }

    int32_t fd = 0;
    napi_get_value_int32(env, argValue[NUM_0], &fd);
    std::string value;
    ImageSourceModuleTest ISMT;
    Image_ErrorCode ret = ISMT.GetImageProperty(fd, &value);
    if (ret != IMAGE_SUCCESS)
    {
        HiviewDFX::HiLog::Error(LABEL, "JsGetImageProperty failed");
        return result;
    }
    HiviewDFX::HiLog::Error(LABEL, "value = %{public}s", value.c_str());
    napi_create_string_utf8(env, value.c_str(), NAPI_AUTO_LENGTH, &result);
    return result;
}

} // namespace Media
} // namespace OHOS