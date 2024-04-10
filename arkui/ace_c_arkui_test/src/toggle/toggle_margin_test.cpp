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

namespace ArkUICapiTest {

const auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(
    OH_ArkUI_QueryModuleInterfaceByName(ARKUI_NATIVE_NODE, "ArkUI_NativeNodeAPI_1"));
const auto toggle = nodeAPI->createNode(ARKUI_NODE_TOGGLE);

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_MARGIN_0100
 * @tc.name: testToggleMargin001
 * @tc.desc: testing margin for toggle with normal value (positive number)
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleMargin001, Function | MediumTest | Level1)
{
    float margin = 10;
    ArkUI_NumberValue value[] = {{.f32 = margin}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_MARGIN, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[0].f32, margin);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_MARGIN_0200
 * @tc.name: testToggleMargin002
 * @tc.desc: testing margin for toggle with normal value (negative number)
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleMargin002, Function | MediumTest | Level1)
{
    float margin = -10;
    int expectCode = 0;
    ArkUI_NumberValue value[] = {{.f32 = margin}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_MARGIN, &value_item);
    ASSERT_EQ(ret, expectCode);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[0].f32, margin);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_MARGIN_0300
 * @tc.name: testToggleMargin003
 * @tc.desc: testing margin for toggle with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleMargin003, Function | MediumTest | Level1)
{
    float margin = 100;
    ArkUI_NumberValue value[] = {{.f32 = margin}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_MARGIN, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[0].f32, margin);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_MARGIN_0400
 * @tc.name: testToggleMargin004
 * @tc.desc: testing margin for toggle with normal value (positive number)
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleMargin004, Function | MediumTest | Level1)
{
    float marginTop = 10;
    float marginRight = 20;
    float marginButton = 30;
    float marginLeft = 40;
    ArkUI_NumberValue value[] = {
        {.f32 = marginTop}, {.f32 = marginRight}, {.f32 = marginButton}, {.f32 = marginLeft}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_MARGIN, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[0].f32, marginTop);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[1].f32, marginRight);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[2].f32, marginButton);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[3].f32, marginLeft);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_MARGIN_0500
 * @tc.name: testToggleMargin005
 * @tc.desc: testing margin for toggle with normal value (negative number)
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleMargin005, Function | MediumTest | Level1)
{
    float marginTop = -10;
    float marginRight = -20;
    float marginButton = -30;
    float marginLeft = -40;
    ArkUI_NumberValue value[] = {
        {.f32 = marginTop}, {.f32 = marginRight}, {.f32 = marginButton}, {.f32 = marginLeft}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_MARGIN, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[0].f32, marginTop);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[1].f32, marginRight);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[2].f32, marginButton);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[3].f32, marginLeft);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_MARGIN_0600
 * @tc.name: testToggleMargin006
 * @tc.desc: testing margin for toggle with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleMargin006, Function | MediumTest | Level1)
{
    float marginTop = 100;
    float marginRight = 101;
    float marginButton = 102;
    float marginLeft = 103;
    ArkUI_NumberValue value[] = {
        {.f32 = marginTop}, {.f32 = marginRight}, {.f32 = marginButton}, {.f32 = marginLeft}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_MARGIN, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[0].f32, marginTop);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[1].f32, marginRight);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[2].f32, marginButton);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_MARGIN)->value[3].f32, marginLeft);
}

} // namespace ArkUICapiTest
