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

namespace ArkUICapiTest {

static napi_value TestTextAreaShowCounter001(napi_env env, napi_callback_info info)
{
    NAPI_START(textarea, ARKUI_NODE_TEXT_AREA);
    ArkUI_NumberValue value[] = {{.i32 = false}, {.f32 = PARAM_90}, {.i32 = true}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_0].i32, false);
    ASSERT_EQ(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_1].f32, PARAM_90);
    ASSERT_EQ(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_2].i32, true);
    NAPI_END;
}

static napi_value TestTextAreaShowCounter002(napi_env env, napi_callback_info info)
{
    NAPI_START(textarea, ARKUI_NODE_TEXT_AREA);
    ArkUI_NumberValue value[] = {{.i32 = true}, {.f32 = PARAM_80}, {.i32 = false}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_0].i32, true);
    ASSERT_EQ(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_1].f32, PARAM_80);
    ASSERT_EQ(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_2].i32, false);
    NAPI_END;
}

static napi_value TestTextAreaShowCounter003(napi_env env, napi_callback_info info)
{
    NAPI_START(textarea, ARKUI_NODE_TEXT_AREA);
    ArkUI_NumberValue value[] = {{.i32 = true}, {.f32 = PARAM_90}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_0].i32, true);
    ASSERT_EQ(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_1].f32, PARAM_90);
    NAPI_END;
}

static napi_value TestTextAreaShowCounter004(napi_env env, napi_callback_info info)
{
    NAPI_START(textarea, ARKUI_NODE_TEXT_AREA);
    ArkUI_NumberValue value[] = {{.i32 = true}, {.f32 = PARAM_80_POINT_5}, {.i32 = true}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_0].i32, true);
    ASSERT_EQ(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_1].f32, PARAM_80);
    ASSERT_EQ(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_2].i32, true);
    NAPI_END;
}

static napi_value TestTextAreaShowCounter005(napi_env env, napi_callback_info info)
{
    NAPI_START(textarea, ARKUI_NODE_TEXT_AREA);
    ArkUI_NumberValue value[] = {{.i32 = true}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_0].i32, true);
    NAPI_END;
}

static napi_value TestTextAreaShowCounter006(napi_env env, napi_callback_info info)
{
    NAPI_START(textarea, ARKUI_NODE_TEXT_AREA);
    ArkUI_NumberValue value[] = {{.i32 = true}, {.f32 = PARAM_200}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER, &value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    if (nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER) != nullptr) {
        ASSERT_NE(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_0].i32, true);
        ASSERT_NE(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_1].f32, PARAM_200);
    }
    NAPI_END;
}

static napi_value TestTextAreaShowCounter007(napi_env env, napi_callback_info info)
{
    NAPI_START(textarea, ARKUI_NODE_TEXT_AREA);
    ArkUI_NumberValue value[] = {{.i32 = true}, {.f32 = PARAM_NEGATIVE_100}, {.i32 = PARAM_NEGATIVE_1}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER, &value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    if (nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER) != nullptr) {
        ASSERT_NE(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_0].i32, true);
        ASSERT_NE(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_1].f32, PARAM_NEGATIVE_100);
        ASSERT_NE(nodeAPI->getAttribute(textarea, NODE_TEXT_AREA_SHOW_COUNTER)->value[PARAM_2].i32, PARAM_NEGATIVE_1);
    }
    NAPI_END;
}

} // namespace ArkUICapiTest