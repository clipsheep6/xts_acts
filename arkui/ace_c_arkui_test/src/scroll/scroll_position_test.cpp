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
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_POSITION_0100
 * @tc.name: testScrollPosition001
 * @tc.desc: testing position for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollPosition001, Function | MediumTest | Level1)
{
    float positionX = 10;
    float positionY = 10;

    ArkUI_NumberValue position_value[] = {{.f32 = positionX}, {.f32 = positionY}};
    ArkUI_AttributeItem position_value_item = {position_value, sizeof(position_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_POSITION, &position_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_POSITION)->value[0].f32, positionX);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_POSITION)->value[1].f32, positionY);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_POSITION_0200
 * @tc.name: testScrollPosition002
 * @tc.desc: testing position for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollPosition002, Function | MediumTest | Level1)
{
    float positionX = -10;
    float positionY = -10;

    ArkUI_NumberValue position_value[] = {{.f32 = positionX}, {.f32 = positionY}};
    ArkUI_AttributeItem position_value_item = {position_value, sizeof(position_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_POSITION, &position_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_POSITION)->value[0].f32, positionX);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_POSITION)->value[1].f32, positionY);
}

} // namespace ArkUICapiTest
