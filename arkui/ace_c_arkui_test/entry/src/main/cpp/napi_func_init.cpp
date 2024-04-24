/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "common/common.h"
#include "commonattrs/commonattrs_align_test.cpp"
#include "commonattrs/commonattrs_direction_test.cpp"

namespace ArkUICapiTest {
EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    if ((env == nullptr) || (exports == nullptr)) {
        OH_LOG_Print(LOG_APP, LOG_ERROR, LOG_PRINT_DOMAIN, "Init", "env or exports is null");
        return nullptr;
    }

    napi_property_descriptor desc[] = {
        {"testCommonAttrsAlign001", nullptr, TestCommonAttrsAlign001, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testCommonAttrsAlign002", nullptr, TestCommonAttrsAlign002, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testCommonAttrsAlign003", nullptr, TestCommonAttrsAlign003, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testCommonAttrsAlign004", nullptr, TestCommonAttrsAlign004, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testCommonAttrsAlign005", nullptr, TestCommonAttrsAlign005, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testCommonAttrsAlign006", nullptr, TestCommonAttrsAlign006, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testCommonAttrsAlign007", nullptr, TestCommonAttrsAlign007, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testCommonAttrsAlign008", nullptr, TestCommonAttrsAlign008, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testCommonAttrsAlign009", nullptr, TestCommonAttrsAlign009, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testCommonAttrsAlign010", nullptr, TestCommonAttrsAlign010, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testCommonAttrsAlign011", nullptr, TestCommonAttrsAlign011, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"testCommonAttrsDirection001", nullptr, TestCommonAttrsDirection001, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"testCommonAttrsDirection002", nullptr, TestCommonAttrsDirection002, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"testCommonAttrsDirection003", nullptr, TestCommonAttrsDirection003, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"testCommonAttrsDirection004", nullptr, TestCommonAttrsDirection004, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"testCommonAttrsDirection005", nullptr, TestCommonAttrsDirection005, nullptr, nullptr, nullptr, napi_default,
         nullptr},
    };
    if (napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc) != napi_ok) {
        OH_LOG_Print(LOG_APP, LOG_ERROR, LOG_PRINT_DOMAIN, "Init", "napi_define_properties failed");
        return nullptr;
    }

    return exports;
}
EXTERN_C_END

static napi_module nativefuncModule = {.nm_version = 1,
                                       .nm_flags = 0,
                                       .nm_filename = nullptr,
                                       .nm_register_func = Init,
                                       .nm_modname = "nativefunc",
                                       .nm_priv = ((void *)0),
                                       .reserved = {0}};

extern "C" __attribute__((constructor)) void RegisterModule(void) { napi_module_register(&nativefuncModule); }
} // namespace ArkUICapiTest
