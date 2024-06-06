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

#include "common/common.h"
#include <ace/xcomponent/native_interface_xcomponent.h>


namespace ArkUICapiTest {

static napi_value testArkUI001(napi_env env, napi_callback_info info)
{
    auto ret = OH_NativeXComponent_SetNeedSoftKeyboard(nullptr, false);
    ASSERT_EQ(ret, -2);
    NAPI_END;
}

static napi_value testArkUI002(napi_env env, napi_callback_info info)
{
    auto ret = OH_NativeXComponent_RegisterSurfaceShowCallback(nullptr, nullptr);
    ASSERT_EQ(ret, -2);
    NAPI_END;
}

static napi_value testArkUI003(napi_env env, napi_callback_info info)
{
    auto ret = OH_NativeXComponent_RegisterSurfaceHideCallback(nullptr, nullptr);
    ASSERT_EQ(ret, -2);
    NAPI_END;
}

static napi_value testArkUI004(napi_env env, napi_callback_info info)
{
    auto ret = OH_NativeXComponent_RegisterOnTouchInterceptCallback (nullptr, nullptr);
    ASSERT_EQ(ret, 401);
    NAPI_END;
}

static napi_value testArkUI005(napi_env env, napi_callback_info info)
{
    auto ret = OH_NativeXComponent_GetTouchEventSourceType (nullptr, -1, nullptr);
    ASSERT_EQ(ret, OH_NATIVEXCOMPONENT_RESULT_BAD_PARAMETER);
    NAPI_END;
}


static napi_value testArkUI006(napi_env env, napi_callback_info info) {
    auto ret = OH_ArkUI_LayoutConstraint_Copy(nullptr);
    if (ret == nullptr) {
        NAPI_END;
    }
}

static napi_value testArkUI007(napi_env env, napi_callback_info info) {
    auto layoutContraint = OH_ArkUI_LayoutConstraint_Create();
    auto disposeValue = OH_ArkUI_LayoutConstraint_Dispose(layoutContraint);
    auto copyValue = OH_ArkUI_LayoutConstraint_Copy(nullptr);
    if (copyValue == nullptr) {
        NAPI_END;
    }
}
static napi_value testArkUI008(napi_env env, napi_callback_info info) {
    auto layoutContraint = OH_ArkUI_LayoutConstraint_Create();
    auto copyValue = OH_ArkUI_LayoutConstraint_Copy(layoutContraint);
    auto disposeValue = OH_ArkUI_LayoutConstraint_Dispose(nullptr);
    if (disposeValue == nullptr) {
        NAPI_END;
    }
}


} // namespace ArkUICapiTest
