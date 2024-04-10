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

#include "../common_test.h"

#define SUCCESS 0

#define ABNORMAL_PARAM 1000
#define BORDER_WIDTH_PARAM 40
#define PARAM_10 10
#define PARAM_50 50
#define PARAM_M10 (-10)
#define PARAM_M50 (-50)

namespace ArkUICapiTest {

const auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(
    OH_ArkUI_QueryModuleInterfaceByName(ARKUI_NATIVE_NODE, "ArkUI_NativeNodeAPI_1"));
const auto scroll = nodeAPI->createNode(ARKUI_NODE_SCROLL);

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_BORDERWIDTH_0100
 * @tc.name: testScrollBorderWidth001
 * @tc.desc: testing border width for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollBorderWidth001, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.f32 = BORDER_WIDTH_PARAM}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_BORDER_WIDTH, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_WIDTH)->value[PARAM_0].f32, BORDER_WIDTH_PARAM);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_WIDTH)->value[PARAM_1].f32, BORDER_WIDTH_PARAM);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_WIDTH)->value[PARAM_2].f32, BORDER_WIDTH_PARAM);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_WIDTH)->value[PARAM_3].f32, BORDER_WIDTH_PARAM);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_BORDERWIDTH_0200
 * @tc.name: testScrollBorderWidth002
 * @tc.desc: testing border width for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollBorderWidth002, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[PARAM_4] = {{.f32 = PARAM_10}, {.f32 = PARAM_50}, {.f32 = PARAM_10}, {.f32 = PARAM_50}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_BORDER_WIDTH, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_WIDTH)->value[PARAM_0].f32, PARAM_10);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_WIDTH)->value[PARAM_1].f32, PARAM_50);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_WIDTH)->value[PARAM_2].f32, PARAM_10);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_WIDTH)->value[PARAM_3].f32, PARAM_50);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_BORDERWIDTH_0300
 * @tc.name: testScrollBorderWidth003
 * @tc.desc: testing border width for scroll with abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(ScrollCapiTest, testScrollBorderWidth003, Function | MediumTest | Level2)
{
    ArkUI_NumberValue value[PARAM_4] = {{.f32 = PARAM_M10}, {.f32 = PARAM_M50}, {.f32 = PARAM_M10}, {.f32 = PARAM_M50}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_BORDER_WIDTH, &value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(scroll, NODE_BORDER_WIDTH)->value[PARAM_0].f32, PARAM_M10);
    ASSERT_NE(nodeAPI->getAttribute(scroll, NODE_BORDER_WIDTH)->value[PARAM_1].f32, PARAM_M50);
    ASSERT_NE(nodeAPI->getAttribute(scroll, NODE_BORDER_WIDTH)->value[PARAM_2].f32, PARAM_M10);
    ASSERT_NE(nodeAPI->getAttribute(scroll, NODE_BORDER_WIDTH)->value[PARAM_3].f32, PARAM_M50);
}

} // namespace ArkUICapiTest
