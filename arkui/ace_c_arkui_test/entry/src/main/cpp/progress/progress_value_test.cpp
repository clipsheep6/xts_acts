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
#define COMPLETE 100

namespace ArkUICapiTest {

static napi_value TestProgressValue001(napi_env env, napi_callback_info info)
{
    NAPI_START(progress, ARKUI_NODE_PROGRESS);
    ArkUI_NumberValue value[] = {{.f32 = PARAM_50_POINT_5}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(progress, NODE_PROGRESS_VALUE, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(progress, NODE_PROGRESS_VALUE)->value[PARAM_0].f32, PARAM_50_POINT_5);
    NAPI_END;
}

static napi_value TestProgressValue002(napi_env env, napi_callback_info info)
{
    NAPI_START(progress, ARKUI_NODE_PROGRESS);
    ArkUI_NumberValue value[] = {{.f32 = PARAM_NEGATIVE_50_POINT_5}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(progress, NODE_PROGRESS_VALUE, &value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(progress, NODE_PROGRESS_VALUE)->value[PARAM_0].f32, PARAM_NEGATIVE_50_POINT_5);
    NAPI_END;
}

static napi_value TestProgressValue003(napi_env env, napi_callback_info info)
{
    NAPI_START(progress, ARKUI_NODE_PROGRESS);
    ArkUI_NumberValue value[] = {{.f32 = PARAM_101_POINT_5}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(progress, NODE_PROGRESS_VALUE, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(progress, NODE_PROGRESS_VALUE)->value[PARAM_0].f32, COMPLETE);
    NAPI_END;
}
} // namespace ArkUICapiTest