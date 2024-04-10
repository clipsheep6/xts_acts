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
#define ABNORMAL_PARAM 1000

namespace ArkUICapiTest {

const auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(
    OH_ArkUI_QueryModuleInterfaceByName(ARKUI_NATIVE_NODE, "ArkUI_NativeNodeAPI_1"));
const auto scroll = nodeAPI->createNode(ARKUI_NODE_SCROLL);

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_EDGEEFFECT_0100
 * @tc.name: testScrollEdgeEffect001
 * @tc.desc: testing edge effect for scroll with none value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollEdgeEffect001, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_EDGE_EFFECT_NONE}, {.i32 = PARAM_1}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_EDGE_EFFECT, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_EDGE_EFFECT)->value[PARAM_0].i32, ARKUI_EDGE_EFFECT_NONE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_EDGE_EFFECT)->value[PARAM_1].i32, PARAM_1);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_EDGEEFFECT_0200
 * @tc.name: testScrollEdgeEffect002
 * @tc.desc: testing edge effect for scroll with spring value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollEdgeEffect002, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_EDGE_EFFECT_SPRING}, {.i32 = PARAM_0}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_EDGE_EFFECT, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_EDGE_EFFECT)->value[PARAM_0].i32, ARKUI_EDGE_EFFECT_SPRING);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_EDGE_EFFECT)->value[PARAM_1].i32, PARAM_0);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_EDGEEFFECT_0300
 * @tc.name: testScrollEdgeEffect003
 * @tc.desc: testing edge effect for scroll with fade value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollEdgeEffect003, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_EDGE_EFFECT_FADE}, {.i32 = PARAM_1}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_EDGE_EFFECT, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_EDGE_EFFECT)->value[PARAM_0].i32, ARKUI_EDGE_EFFECT_FADE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_EDGE_EFFECT)->value[PARAM_1].i32, PARAM_1);
}

} // namespace ArkUICapiTest
