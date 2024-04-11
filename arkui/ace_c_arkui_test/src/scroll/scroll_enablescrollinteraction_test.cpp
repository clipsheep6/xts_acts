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

namespace ArkUICapiTest {

const auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(
    OH_ArkUI_QueryModuleInterfaceByName(ARKUI_NATIVE_NODE, "ArkUI_NativeNodeAPI_1"));
const auto scroll = nodeAPI->createNode(ARKUI_NODE_SCROLL);

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_ENABLESRCOLLINTERACTION_0100
 * @tc.name: testScrollEnableScrollInteraction001
 * @tc.desc: testing enable scroll interaction for scroll with true value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollEnableScrollInteraction001, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = true}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_ENABLE_SCROLL_INTERACTION, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_ENABLE_SCROLL_INTERACTION)->value->i32, true);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_ENABLESRCOLLINTERACTION_0200
 * @tc.name: testScrollEnableScrollInteraction002
 * @tc.desc: testing enable scroll interaction for scroll with false value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollEnableScrollInteraction002, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = false}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_ENABLE_SCROLL_INTERACTION, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_ENABLE_SCROLL_INTERACTION)->value->i32, false);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_ENABLESRCOLLINTERACTION_0300
 * @tc.name: testScrollEnableScrollInteraction003
 * @tc.desc: testing enable scroll interaction for scroll with abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(ScrollCapiTest, testScrollEnableScrollInteraction003, Function | MediumTest | Level2)
{
    ArkUI_NumberValue value[] = {{.i32 = ABNORMAL_PARAM}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_ENABLE_SCROLL_INTERACTION, &value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(scroll, NODE_SCROLL_ENABLE_SCROLL_INTERACTION)->value->i32, ABNORMAL_PARAM);
}

} // namespace ArkUICapiTest
