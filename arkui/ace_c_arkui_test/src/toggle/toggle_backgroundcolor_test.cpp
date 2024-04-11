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
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_BACKGROUNDCOLOR_0100
 * @tc.name: testToggleBackgroundColor001
 * @tc.desc: testing backgroundColor for toggle with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleBackgroundColor001, Function | MediumTest | Level1)
{
    uint32_t backgroundColor = 0xFFFF0000;
    ArkUI_NumberValue value[] = {{.u32 = backgroundColor}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_BACKGROUND_COLOR, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_BACKGROUND_COLOR)->value->u32, backgroundColor);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_BACKGROUNDCOLOR_0200
 * @tc.name: testToggleBackgroundColor002
 * @tc.desc: testing backgroundColor for toggle with small value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleBackgroundColor002, Function | MediumTest | Level1)
{
    uint32_t backgroundColor = 0x00000000;
    ArkUI_NumberValue value[] = {{.u32 = backgroundColor}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_BACKGROUND_COLOR, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_BACKGROUND_COLOR)->value->u32, backgroundColor);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_BACKGROUNDCOLOR_0300
 * @tc.name: testToggleBackgroundColor003
 * @tc.desc: testing backgroundColor for toggle with large value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleBackgroundColor003, Function | MediumTest | Level1)
{
    uint32_t backgroundColor = 0xFFFFFFFF;
    ArkUI_NumberValue value[] = {{.u32 = backgroundColor}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_BACKGROUND_COLOR, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_BACKGROUND_COLOR)->value->u32, backgroundColor);
}

} // namespace ArkUICapiTest
