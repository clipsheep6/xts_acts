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

static napi_value testTextSpanContent001(napi_env env, napi_callback_info info)
{
    NAPI_START(text, ARKUI_NODE_TEXT);
    float sizeValue = 20;
    ArkUI_NumberValue value[] = {{.f32 = sizeValue}, {.i32 = ARKUI_FONT_WEIGHT_W100}, {.i32 = ARKUI_FONT_STYLE_NORMAL}};
    ArkUI_AttributeItem valueItem = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    valueItem.string = "textContent";
    ArkUI_AttributeItem spanContent = {.string = "SpanContent"};
    nodeAPI->setAttribute(text, NODE_TEXT_FONT, &valueItem);
    NAPI_START(span, ARKUI_NODE_SPAN);
    nodeAPI->addChild(text, span);
    auto ret = nodeAPI->setAttribute(span, NODE_SPAN_CONTENT, &spanContent);
    ASSERT_EQ(ret, SUCCESS);
    if (nodeAPI->getAttribute(text, NODE_TEXT_FONT)->string == nullptr) {
        ASSERT_STREQ("123", "SpanContent");
    } else {
        ASSERT_STREQ(nodeAPI->getAttribute(text, NODE_TEXT_FONT)->string, "SpanContent");
    }
    NAPI_END;
}

static napi_value testTextSpanFontSize002(napi_env env, napi_callback_info info)
{
    NAPI_START(text, ARKUI_NODE_TEXT);
    float size = -10;
    float size1 = 16;
    ArkUI_NumberValue value[] = {{.f32 = size}};
    ArkUI_AttributeItem valueItem = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    NAPI_START(span, ARKUI_NODE_SPAN);
    nodeAPI->addChild(text, span);
    auto ret = nodeAPI->setAttribute(text, NODE_FONT_SIZE, &valueItem);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(text, NODE_FONT_SIZE)->value[PARAM_0].f32, size1);
    NAPI_END;
}

static napi_value testTextSpanLineHeight003(napi_env env, napi_callback_info info)
{
    NAPI_START(text, ARKUI_NODE_TEXT);
    float height = -10;
    ArkUI_NumberValue value[] = {{.f32 = height}};
    ArkUI_AttributeItem valueItem = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    NAPI_START(span, ARKUI_NODE_SPAN);
    nodeAPI->addChild(text, span);
    auto ret = nodeAPI->setAttribute(text, NODE_TEXT_LINE_HEIGHT, &valueItem);
    ASSERT_EQ(ret, SUCCESS);
    if (nodeAPI->getAttribute(text, NODE_TEXT_LINE_HEIGHT)->value[PARAM_0].f32 > 0) {
        ASSERT_STREQ("123", "123");
    } else {
        ASSERT_STREQ("123", "223");
    }
    NAPI_END;
}

} // namespace ArkUICapiTest
