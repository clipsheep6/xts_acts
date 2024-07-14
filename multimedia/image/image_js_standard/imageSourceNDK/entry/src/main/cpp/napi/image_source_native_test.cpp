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

#include <memory>
#include <string>
#include <map>
#include <uv.h>
#include <cstddef>
#include "node_api.h"
#include "hilog/log.h"
#include "image_source_native_test.h"

namespace OHOS {
namespace Media {

using namespace std;

constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, 0xD002B05, "ImageSourceTest"};

static constexpr uint32_t NUM_0 = 0;
static constexpr uint32_t NUM_1 = 1;
static constexpr uint32_t NUM_2 = 2;
static constexpr uint32_t NUM_3 = 3;

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        {
            "JsGetImageProperty", nullptr, ImageSourceTest::JsGetImageProperty,
            nullptr, nullptr, nullptr, napi_static, nullptr
        },
        {
            "JsModifyImageProperty", nullptr, ImageSourceTest::JsModifyImageProperty,
            nullptr, nullptr, nullptr, napi_static, nullptr
        },
        {
            "JsGetDisposalTypeList", nullptr, ImageSourceTest::JsGetDisposalTypeList,
            nullptr, nullptr, nullptr, napi_static, nullptr
        },
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
    napi_value argValue[NUM_2] = {0};
    size_t argCount = NUM_2;

    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok) {
        HiviewDFX::HiLog::Error(LABEL, "JsGetImageProperty failed to parse params");
        return result;
    }

    int32_t fd = 0;
    napi_get_value_int32(env, argValue[NUM_0], &fd);
    std::string propertyKey = getStringFromArgs(env, argValue[NUM_1]);

    std::string value;
    ImageSourceModuleTest ismt;
    Image_ErrorCode ret = ismt.GetImageProperty(fd, propertyKey, &value);
    if (ret != IMAGE_SUCCESS) {
        HiviewDFX::HiLog::Error(LABEL, "JsGetImageProperty failed");
        return result;
    }
    HiviewDFX::HiLog::Error(LABEL, "value = %{public}s", value.c_str());
    napi_create_string_utf8(env, value.c_str(), NAPI_AUTO_LENGTH, &result);
    return result;
}

napi_value ImageSourceTest::JsModifyImageProperty(napi_env env, napi_callback_info info)
{
    napi_value result = nullptr;
    napi_get_undefined(env, &result);
    napi_value thisVar = nullptr;
    napi_value argValue[NUM_3] = {0};
    size_t argCount = NUM_3;

    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok) {
        HiviewDFX::HiLog::Error(LABEL, "JsModifyImageProperty failed to parse params");
        return result;
    }

    int32_t fd = 0;
    napi_get_value_int32(env, argValue[NUM_0], &fd);

    std::string propertyKey = getStringFromArgs(env, argValue[NUM_1]);
    std::string propertyValue = getStringFromArgs(env, argValue[NUM_2]);

    std::string value;
    ImageSourceModuleTest ismt;
    Image_ErrorCode ret = ismt.ModifyImageProperty(fd, propertyKey, propertyValue, &value);
    if (ret != IMAGE_SUCCESS) {
        HiviewDFX::HiLog::Error(LABEL, "JsModifyImageProperty failed");
        return result;
    }
    HiviewDFX::HiLog::Error(LABEL, "value = %{public}s", value.c_str());
    napi_create_string_utf8(env, value.c_str(), NAPI_AUTO_LENGTH, &result);
    return result;
}

std::string ImageSourceTest::getStringFromArgs(napi_env env, napi_value arg)
{
    size_t bufLength = 0;
    napi_status status = napi_get_value_string_utf8(env, arg, nullptr, 0, &bufLength);
    if (status != napi_ok || bufLength > PATH_MAX) {
        return nullptr;
    }

    char *buffer = static_cast<char *>(malloc((bufLength + 1) * sizeof(char)));
    if (buffer == nullptr) {
        return nullptr;
    }

    status = napi_get_value_string_utf8(env, arg, buffer, bufLength + 1, &bufLength);
    if (status != napi_ok) {
        free(buffer);
        return nullptr;
    }

    std::string strValue = buffer;
    free(buffer);
    return strValue;
}

napi_value ImageSourceTest::JsGetDisposalTypeList(napi_env env, napi_callback_info info)
{
    napi_value result = nullptr;
    napi_get_undefined(env, &result);
    napi_value thisVar = nullptr;

    napi_value argValue[NUM_1] = {0};
    size_t argCount = NUM_1;

    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok) {
        HiviewDFX::HiLog::Error(LABEL, "JsGetDisposalTypeList failed to parse params");

        return result;
    }

    int32_t fd = 0;
    napi_get_value_int32(env, argValue[NUM_0], &fd);

    std::vector<int32_t> disposalTypeList;
    ImageSourceModuleTest ismt;
    Image_ErrorCode ret = ismt.GetDisposalTypeList(fd, &disposalTypeList);
    if (ret != IMAGE_SUCCESS) {
        HiviewDFX::HiLog::Error(LABEL, "JsGetDisposalTypeList failed");
        return result;
    }
    size_t len = disposalTypeList.size();
    napi_create_array(env, &result);
    for (size_t i = 0; i < len; i++) {
        napi_value elem;
        napi_create_int32(env, disposalTypeList[i], &elem);
        napi_set_element(env, result, i, elem);
    }
    return result;
}

} // namespace Media
} // namespace OHOS