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
#define NORMAL_COLOR 0xFFFF0000
#define ABNORMAL_COLOR 1000

namespace ArkUICapiTest {

const auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(
    OH_ArkUI_QueryModuleInterfaceByName(ARKUI_NATIVE_NODE, "ArkUI_NativeNodeAPI_1"));
const auto scroll = nodeAPI->createNode(ARKUI_NODE_SCROLL);

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_BORDER_COLOR_0100
 * @tc.name: testScrollBorderColor001
 * @tc.desc: testing border color for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollBorderColor001, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.u32 = NORMAL_COLOR}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_BORDER_COLOR, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_COLOR)->value[PARAM_0].u32, NORMAL_COLOR);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_COLOR)->value[PARAM_1].u32, NORMAL_COLOR);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_COLOR)->value[PARAM_2].u32, NORMAL_COLOR);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_COLOR)->value[PARAM_3].u32, NORMAL_COLOR);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_BORDER_COLOR_0200
 * @tc.name: testScrollBorderColor002
 * @tc.desc: testing border color for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollBorderColor002, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.u32 = NORMAL_COLOR}, {.u32 = NORMAL_COLOR}, {.u32 = NORMAL_COLOR}, {.u32 = NORMAL_COLOR}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_BORDER_COLOR, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_COLOR)->value[PARAM_0].u32, NORMAL_COLOR);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_COLOR)->value[PARAM_1].u32, NORMAL_COLOR);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_COLOR)->value[PARAM_2].u32, NORMAL_COLOR);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_BORDER_COLOR)->value[PARAM_3].u32, NORMAL_COLOR);
}

} // namespace ArkUICapiTest
