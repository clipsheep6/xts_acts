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
namespace ArkUICapiTest {

static napi_value TestSliderTrackThickness001(napi_env env, napi_callback_info info)
{
    NAPI_START(slider, ARKUI_NODE_SLIDER);
    ArkUI_NumberValue value[] = {{.f32 = PARAM_16}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(slider, NODE_SLIDER_TRACK_THICKNESS, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(slider, NODE_SLIDER_TRACK_THICKNESS)->value[PARAM_0].f32, PARAM_16);
    NAPI_END;
}

static napi_value TestSliderTrackThickness002(napi_env env, napi_callback_info info)
{
    NAPI_START(slider, ARKUI_NODE_SLIDER);
    int32_t styleValue = ARKUI_SLIDER_STYLE_IN_SET;
    ArkUI_NumberValue value[] = {{.i32 = styleValue}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(slider, NODE_SLIDER_STYLE, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(slider, NODE_SLIDER_TRACK_THICKNESS)->value[PARAM_0].f32, 20.0f);
    NAPI_END;
}

static napi_value TestSliderTrackThickness003(napi_env env, napi_callback_info info)
{
    NAPI_START(slider, ARKUI_NODE_SLIDER);
    int32_t styleValue = ARKUI_SLIDER_STYLE_OUT_SET;
    ArkUI_NumberValue value[] = {{.i32 = styleValue}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(slider, NODE_SLIDER_STYLE, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(slider, NODE_SLIDER_TRACK_THICKNESS)->value[PARAM_0].f32, 4.0f);
    NAPI_END;
}

static napi_value TestSliderTrackThickness004(napi_env env, napi_callback_info info)
{
    NAPI_START(slider, ARKUI_NODE_SLIDER);
    float thickness = -16.0f;
    ArkUI_NumberValue value[] = {{.f32 = thickness}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(slider, NODE_SLIDER_TRACK_THICKNESS, &value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(slider, NODE_SLIDER_TRACK_THICKNESS)->value[PARAM_0].f32, -16.0f);
    NAPI_END;
}

} // namespace ArkUICapiTest