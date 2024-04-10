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
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_HEIGHT_0100
 * @tc.name: testScrollHeight001
 * @tc.desc: testing height for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollHeight001, Function | MediumTest | Level1)
{
    float height = 300;

    ArkUI_NumberValue height_value[] = {{.f32 = height}};
    ArkUI_AttributeItem height_value_item = {height_value, sizeof(height_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_HEIGHT, &height_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_HEIGHT)->value->f32, height);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_HEIGHT_0200
 * @tc.name: testScrollHeight002
 * @tc.desc: testing height for scroll with normal abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(ScrollCapiTest, testScrollHeight002, Function | MediumTest | Level2)
{
    float height = -100;

    ArkUI_NumberValue height_value[] = {{.f32 = height}};
    ArkUI_AttributeItem height_value_item = {height_value, sizeof(height_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_HEIGHT, &height_value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(scroll, NODE_HEIGHT)->value->f32, height);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_HEIGHT_0300
 * @tc.name: testScrollHeight003
 * @tc.desc: testing height for scroll with large value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollHeight003, Function | MediumTest | Level1)
{
    float height = 10000;

    ArkUI_NumberValue height_value[] = {{.f32 = height}};
    ArkUI_AttributeItem height_value_item = {height_value, sizeof(height_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_HEIGHT, &height_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_HEIGHT)->value->f32, height);
}

} // namespace ArkUICapiTest
