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
const auto scroll = nodeAPI -> createNode(ARKUI_NODE_SCROLL);

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_WIDTH_0100
 * @tc.name: testScrollWidth001
 * @tc.desc: testing width for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollWidth001, Function | MediumTest | Level1)
{
    float width = 300;

    ArkUI_NumberValue width_value[] = {{.f32 = width}};
    ArkUI_AttributeItem width_value_item = {width_value, sizeof(width_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_WIDTH, &width_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_WIDTH)->value->f32, width);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_WIDTH_0200
 * @tc.name: testScrollWidth002
 * @tc.desc: testing width for scroll with normal abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(ScrollCapiTest, testScrollWidth002, Function | MediumTest | Level2)
{
    float width = -100;

    ArkUI_NumberValue width_value[] = {{.f32 = width}};
    ArkUI_AttributeItem width_value_item = {width_value, sizeof(width_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_WIDTH, &width_value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(scroll, NODE_WIDTH)->value->f32, width);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_WIDTH_0300
 * @tc.name: testScrollWidth003
 * @tc.desc: testing width for scroll with large value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollWidth003, Function | MediumTest | Level1)
{
    float width = 10000;

    ArkUI_NumberValue width_value[] = {{.f32 = width}};
    ArkUI_AttributeItem width_value_item = {width_value, sizeof(width_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_WIDTH, &width_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_WIDTH)->value->f32, width);
}

} // namespace ArkUICapiTest
