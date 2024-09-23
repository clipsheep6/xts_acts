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
    auto span = nodeAPI->createNode(ARKUI_NODE_SPAN);
    nodeAPI->addChild(text, span);
    auto ret = nodeAPI->setAttribute(span, NODE_SPAN_CONTENT, &spanContent);
    ArkUI_AttributeItem textID = {.string = "textID1"};
    nodeAPI->setAttribute(text, NODE_ID, &textID);
    ASSERT_EQ(ret, SUCCESS);
    NAPI_END;
}

static napi_value testTextSpanFontSize002(napi_env env, napi_callback_info info)
{
    NAPI_START(text, ARKUI_NODE_TEXT);
    float size = -10;
    float size1 = 16;
    ArkUI_NumberValue value[] = {{.f32 = size}};
    ArkUI_AttributeItem valueItem = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto span = nodeAPI->createNode(ARKUI_NODE_SPAN);
    nodeAPI->addChild(text, span);
    nodeAPI->setAttribute(text, NODE_FONT_SIZE, &valueItem);
    ArkUI_AttributeItem spanContent = {.string = "SpanContent"};
    nodeAPI->setAttribute(span, NODE_SPAN_CONTENT, &spanContent);
    ArkUI_AttributeItem textID = {.string = "textID2"};
    nodeAPI->setAttribute(text, NODE_ID, &textID);
    NAPI_END;
}

static napi_value testTextSpanLineHeight003(napi_env env, napi_callback_info info)
{
    NAPI_START(text, ARKUI_NODE_TEXT);
    float height = -10;
    ArkUI_NumberValue value[] = {{.f32 = height}};
    ArkUI_AttributeItem valueItem = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto span = nodeAPI->createNode(ARKUI_NODE_SPAN);
    nodeAPI->addChild(text, span);
    auto ret = nodeAPI->setAttribute(text, NODE_TEXT_LINE_HEIGHT, &valueItem);
    ArkUI_AttributeItem spanContent = {.string = "SpanContent"};
    nodeAPI->setAttribute(span, NODE_SPAN_CONTENT, &spanContent);
    ArkUI_AttributeItem textID = {.string = "textID3"};
    nodeAPI->setAttribute(text, NODE_ID, &textID);
    NAPI_END;
}

} // namespace ArkUICapiTest
