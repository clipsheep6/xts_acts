/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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
#include <string>

#include "napi/native_api.h"
#include "BasicServicesKit/time_service.h"
#include <cstdlib>
#include <js_native_api_types.h>

namespace {
    static const uint32_t TIME_ZONE_LENGTH = 40;
}

static napi_value OHTimeServiceGetTimeZone(napi_env env, napi_callback_info info)
{
    char str[TIME_ZONE_LENGTH] = {0};
    TimeService_ErrCode returnValue = OH_TimeService_GetTimeZone(str, TIME_ZONE_LENGTH);
    if (returnValue == TimeService_ErrCode::TIMESERVICE_ERR_OK) {
        napi_value result = nullptr;
        if (napi_create_string_utf8(env, str, NAPI_AUTO_LENGTH, &result) != napi_ok) {
            const napi_extended_error_info* errorInfo = nullptr;
            napi_get_last_error_info(env, &errorInfo);
            bool isPending = false;
            napi_is_exception_pending(env, &isPending);
            if (!isPending && errorInfo != nullptr) {
                const char* errorMessage =
                        errorInfo->error_message != nullptr ? errorInfo->error_message : "empty error message";
                napi_throw_error(env, nullptr, errorMessage);
            }
        }
        return result;
    }
    napi_value result = nullptr;
    if (napi_create_int32(env, returnValue, &result) != napi_ok) {
        const napi_extended_error_info* errorInfo = nullptr;
        napi_get_last_error_info(env, &errorInfo);
        bool isPending = false;
        napi_is_exception_pending(env, &isPending);
        if (!isPending && errorInfo != nullptr) {
            const char* errorMessage =
                    errorInfo->error_message != nullptr ? errorInfo->error_message : "empty error message";
            napi_throw_error(env, nullptr, errorMessage);
        }
    }
    return result;
}

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        { "OHTimeServiceGetTimeZone",
          nullptr, OHTimeServiceGetTimeZone, nullptr, nullptr, nullptr, napi_default, nullptr }
    };
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version =1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    // 模块对外接口注册函数
    .nm_register_func = Init,
    // 自定义模块
    .nm_modname = "timeservicendk",
    .nm_priv = ((void*)0),
    .reserved = { 0 },
};

extern "C" __attribute__((constructor)) void RegisterEntryModule(void)
{
    napi_module_register(&demoModule);
}
