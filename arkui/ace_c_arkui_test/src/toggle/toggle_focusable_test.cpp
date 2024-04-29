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
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_FOCUSABLE_0100
 * @tc.name: testToggleFocusable001
 * @tc.desc: testing focusable for toggle with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleFocusable001, Function | MediumTest | Level1)
{
    int focusable = 1;
    ArkUI_NumberValue value[] = {{.i32 = focusable}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_FOCUSABLE, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_FOCUSABLE)->value->i32, focusable);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_FOCUSABLE_0200
 * @tc.name: testToggleFocusable002
 * @tc.desc: testing focusable for toggle with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleFocusable002, Function | MediumTest | Level1)
{
    int focusable = 0;
    ArkUI_NumberValue value[] = {{.i32 = focusable}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_FOCUSABLE, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_FOCUSABLE)->value->i32, focusable);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_FOCUSABLE_0300
 * @tc.name: testToggleFocusable003
 * @tc.desc: testing focusable for toggle with abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(ToggleCapiTest, testToggleFocusable003, Function | MediumTest | Level2)
{
    int focusable = -1;
    ArkUI_NumberValue value[] = {{.i32 = focusable}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_FOCUSABLE, &value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_FOCUSABLE)->value->i32, focusable);
}

} // namespace ArkUICapiTest
