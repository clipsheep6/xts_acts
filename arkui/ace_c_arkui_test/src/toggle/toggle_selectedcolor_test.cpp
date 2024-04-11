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
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_SELECTEDCOLOR_0100
 * @tc.name: testToggleSelectedColor001
 * @tc.desc: testing selectedColor for toggle with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleSelectedColor001, Function | MediumTest | Level1)
{
    uint32_t selectedColor = 0xFFFF0000;
    ArkUI_NumberValue value[] = {{.u32 = selectedColor}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_TOGGLE_SELECTED_COLOR, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_TOGGLE_SELECTED_COLOR)->value->u32, selectedColor);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_SELECTEDCOLOR_0200
 * @tc.name: testToggleSelectedColor002
 * @tc.desc: testing selectedColor for toggle with small value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleSelectedColor002, Function | MediumTest | Level1)
{
    uint32_t selectedColor = 0x00000000;
    auto toggleSmall = nodeAPI->createNode(ARKUI_NODE_TOGGLE);
    ArkUI_NumberValue value[] = {{.u32 = selectedColor}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggleSmall, NODE_TOGGLE_SELECTED_COLOR, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggleSmall, NODE_TOGGLE_SELECTED_COLOR)->value->u32, selectedColor);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_SELECTEDCOLOR_0300
 * @tc.name: testToggleSelectedColor003
 * @tc.desc: testing selectedColor for toggle with large value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleSelectedColor003, Function | MediumTest | Level1)
{
    uint32_t selectedColor = 0xFFFFFFFF;
    ArkUI_NumberValue value[] = {{.u32 = selectedColor}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_TOGGLE_SELECTED_COLOR, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_TOGGLE_SELECTED_COLOR)->value->u32, selectedColor);
}

} // namespace ArkUICapiTest
