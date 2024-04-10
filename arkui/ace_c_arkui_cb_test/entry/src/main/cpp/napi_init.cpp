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
#include "toggle/toggle_onchange_test.h"
#include "toggle/toggle_enabled_test.h"
#include "scroll/scroll_nestedscroll_test.h"
#include "scroll/scroll_hittestbehavior_test.h"
#include "scroll/scroll_onappear_test.h"
#include "scroll/scroll_onscroll_test.h"
#include "scroll/scroll_onscrolledge_test.h"
#include "scroll/scroll_onscrollframebegin_test.h"
#include "scroll/scroll_onscrollstart_test.h"
#include "scroll/scroll_onscrollstop_test.h"
#include "scroll/scroll_scrolledge_test.h"
#include "manager/plugin_manager.h"

namespace ArkUICApiCBTest {
EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    OH_LOG_Print(LOG_APP, LOG_INFO, LOG_PRINT_DOMAIN, "Init", "Init begins");
    if ((env == nullptr) || (exports == nullptr)) {
        OH_LOG_Print(LOG_APP, LOG_ERROR, LOG_PRINT_DOMAIN, "Init", "env or exports is null");
        return nullptr;
    }

    napi_property_descriptor desc[] = {
        {"getContext", nullptr, PluginManager::GetContext, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"toggleOnChangeTest", nullptr, ToggleOnChangeTest::CreateNativeNode, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"toggleEnabledTest", nullptr, ToggleEnabledTest::CreateNativeNode, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"scrollNestedScrollTest", nullptr, ScrollNestedScrollTest::CreateNativeNode, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"scrollNestedScrollChangeTestType", nullptr, ScrollNestedScrollTest::ChangeTestType, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"scrollOnScrollTest", nullptr, ScrollOnScrollTest::CreateNativeNode, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"scrollOnScrollFrameBeginTest", nullptr, ScrollOnScrollFrameBeginTest::CreateNativeNode, nullptr, nullptr,
         nullptr, napi_default, nullptr},
        {"scrollOnAppearTest", nullptr, ScrollOnAppearTest::CreateNativeNode, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"scrollOnScrollEdgeTest", nullptr, ScrollOnScrollEdgeTest::CreateNativeNode, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"scrollScrollEdgeTest", nullptr, ScrollScrollEdgeTest::CreateNativeNode, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"scrollOnScrollStopTest", nullptr, ScrollOnScrollStopTest::CreateNativeNode, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"scrollOnScrollStartTest", nullptr, ScrollOnScrollStartTest::CreateNativeNode, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"scrollHitTestBehaviorTest", nullptr, ScrollHitTestBehaviorTest::CreateNativeNode, nullptr, nullptr, nullptr,
         napi_default, nullptr},
    };
    if (napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc) != napi_ok) {
        OH_LOG_Print(LOG_APP, LOG_ERROR, LOG_PRINT_DOMAIN, "Init", "napi_define_properties failed");
        return nullptr;
    }

    PluginManager::GetInstance()->Export(env, exports);
    return exports;
}
EXTERN_C_END

static napi_module nativerenderModule = {.nm_version = 1,
                                         .nm_flags = 0,
                                         .nm_filename = nullptr,
                                         .nm_register_func = Init,
                                         .nm_modname = "nativerender",
                                         .nm_priv = ((void *)0),
                                         .reserved = {0}};

extern "C" __attribute__((constructor)) void RegisterModule(void) { napi_module_register(&nativerenderModule); }
} // namespace ArkUICApiCBTest
