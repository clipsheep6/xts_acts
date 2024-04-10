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
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SHADOW_0100
 * @tc.name: testScrollShadow001
 * @tc.desc: testing shadow for scroll with min shadow
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollShadow001, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_SHADOW_STYLE_OUTER_DEFAULT_XS}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SHADOW, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SHADOW)->value->i32, ARKUI_SHADOW_STYLE_OUTER_DEFAULT_XS);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SHADOW_0200
 * @tc.name: testScrollShadow002
 * @tc.desc: testing shadow for scroll with little shadow
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollShadow002, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_SHADOW_STYLE_OUTER_DEFAULT_SM}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SHADOW, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SHADOW)->value->i32, ARKUI_SHADOW_STYLE_OUTER_DEFAULT_SM);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SHADOW_0300
 * @tc.name: testScrollShadow003
 * @tc.desc: testing shadow for scroll with middle value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollShadow003, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_SHADOW_STYLE_OUTER_DEFAULT_MD}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SHADOW, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SHADOW)->value->i32, ARKUI_SHADOW_STYLE_OUTER_DEFAULT_MD);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SHADOW_0400
 * @tc.name: testScrollShadow004
 * @tc.desc: testing shadow for scroll with big value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollShadow004, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_SHADOW_STYLE_OUTER_DEFAULT_LG}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SHADOW, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SHADOW)->value->i32, ARKUI_SHADOW_STYLE_OUTER_DEFAULT_LG);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SHADOW_0500
 * @tc.name: testScrollShadow005
 * @tc.desc: testing shadow for scroll with float little shadow
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollShadow005, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_SHADOW_STYLE_OUTER_FLOATING_SM}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SHADOW, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SHADOW)->value->i32, ARKUI_SHADOW_STYLE_OUTER_FLOATING_SM);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SHADOW_0600
 * @tc.name: testScrollShadow006
 * @tc.desc: testing shadow for scroll with float middle shadow
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollShadow006, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_SHADOW_STYLE_OUTER_FLOATING_MD}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SHADOW, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SHADOW)->value->i32, ARKUI_SHADOW_STYLE_OUTER_FLOATING_MD);
}
} // namespace ArkUICapiTest
