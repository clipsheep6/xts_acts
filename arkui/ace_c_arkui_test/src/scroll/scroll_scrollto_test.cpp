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
#define TIME 1000
#define OFFSET 10
#define ABNORMAL_PARAM 1000
#define DEFAULT 0

namespace ArkUICapiTest {

const auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(
    OH_ArkUI_QueryModuleInterfaceByName(ARKUI_NATIVE_NODE, "ArkUI_NativeNodeAPI_1"));
const auto scroll = nodeAPI->createNode(ARKUI_NODE_SCROLL);

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLTO_0100
 * @tc.name: testScrollScrollTo001
 * @tc.desc: testing scroll to for scroll with linear value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollTo001, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.f32 = OFFSET}, {.f32 = OFFSET}, {.i32 = TIME}, {.i32 = ARKUI_CURVE_LINEAR}, {.i32 = DEFAULT}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_OFFSET, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_0].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_3].i32, TIME);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_4].i32, ARKUI_CURVE_LINEAR);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_5].i32, DEFAULT);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLTO_0200
 * @tc.name: testScrollScrollTo002
 * @tc.desc: testing scroll to for scroll with ease value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollTo002, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.f32 = OFFSET}, {.f32 = OFFSET}, {.i32 = TIME}, {.i32 = ARKUI_CURVE_EASE}, {.i32 = DEFAULT}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_OFFSET, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_0].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_3].i32, TIME);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_4].i32, ARKUI_CURVE_EASE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_5].i32, DEFAULT);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLTO_0300
 * @tc.name: testScrollScrollTo003
 * @tc.desc: testing scroll to for scroll with ease in value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollTo003, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.f32 = OFFSET}, {.f32 = OFFSET}, {.i32 = TIME}, {.i32 = ARKUI_CURVE_EASE_IN}, {.i32 = DEFAULT}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_OFFSET, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_0].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_3].i32, TIME);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_4].i32, ARKUI_CURVE_EASE_IN);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_5].i32, DEFAULT);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLTO_0400
 * @tc.name: testScrollScrollTo004
 * @tc.desc: testing scroll to for scroll with ease out value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollTo004, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.f32 = OFFSET}, {.f32 = OFFSET}, {.i32 = TIME}, {.i32 = ARKUI_CURVE_EASE_OUT}, {.i32 = DEFAULT}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_OFFSET, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_0].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_3].i32, TIME);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_4].i32, ARKUI_CURVE_EASE_OUT);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_5].i32, DEFAULT);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLTO_0500
 * @tc.name: testScrollScrollTo005
 * @tc.desc: testing scroll to for scroll with ease in out value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollTo005, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.f32 = OFFSET}, {.f32 = OFFSET}, {.i32 = TIME}, {.i32 = ARKUI_CURVE_EASE_IN_OUT}, {.i32 = DEFAULT}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_OFFSET, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_0].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_3].i32, TIME);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_4].i32, ARKUI_CURVE_EASE_IN_OUT);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_5].i32, DEFAULT);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLTO_0600
 * @tc.name: testScrollScrollTo006
 * @tc.desc: testing scroll to for scroll with fast out slow in value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollTo006, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.f32 = OFFSET}, {.f32 = OFFSET}, {.i32 = TIME}, {.i32 = ARKUI_CURVE_FAST_OUT_SLOW_IN}, {.i32 = DEFAULT}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_OFFSET, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_0].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_3].i32, TIME);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_4].i32, ARKUI_CURVE_FAST_OUT_SLOW_IN);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_5].i32, DEFAULT);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLTO_0700
 * @tc.name: testScrollScrollTo007
 * @tc.desc: testing scroll to for scroll with linear out slow in value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollTo007, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.f32 = OFFSET}, {.f32 = OFFSET}, {.i32 = TIME}, {.i32 = ARKUI_CURVE_LINEAR_OUT_SLOW_IN}, {.i32 = DEFAULT}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_OFFSET, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_0].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_3].i32, TIME);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_4].i32, ARKUI_CURVE_LINEAR_OUT_SLOW_IN);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_5].i32, DEFAULT);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLTO_0800
 * @tc.name: testScrollScrollTo008
 * @tc.desc: testing scroll to for scroll with fast out linear in value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollTo008, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.f32 = OFFSET}, {.f32 = OFFSET}, {.i32 = TIME}, {.i32 = ARKUI_CURVE_FAST_OUT_LINEAR_IN}, {.i32 = DEFAULT}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_OFFSET, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_0].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_3].i32, TIME);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_4].i32, ARKUI_CURVE_FAST_OUT_LINEAR_IN);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_5].i32, DEFAULT);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLTO_0900
 * @tc.name: testScrollScrollTo009
 * @tc.desc: testing scroll to for scroll with extreme deceleration value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollTo009, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.f32 = OFFSET}, {.f32 = OFFSET}, {.i32 = TIME}, {.i32 = ARKUI_CURVE_EXTREME_DECELERATION}, {.i32 = DEFAULT}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_OFFSET, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_0].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_3].i32, TIME);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_4].i32, ARKUI_CURVE_EXTREME_DECELERATION);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_5].i32, DEFAULT);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLTO_1000
 * @tc.name: testScrollScrollTo010
 * @tc.desc: testing scroll to for scroll with sharp value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollTo010, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.f32 = OFFSET}, {.f32 = OFFSET}, {.i32 = TIME}, {.i32 = ARKUI_CURVE_SHARP}, {.i32 = DEFAULT}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_OFFSET, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_0].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_3].i32, TIME);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_4].i32, ARKUI_CURVE_SHARP);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_5].i32, DEFAULT);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLTO_1100
 * @tc.name: testScrollScrollTo011
 * @tc.desc: testing scroll to for scroll with rhythm value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollTo011, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.f32 = OFFSET}, {.f32 = OFFSET}, {.i32 = TIME}, {.i32 = ARKUI_CURVE_RHYTHM}, {.i32 = DEFAULT}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_OFFSET, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_0].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_3].i32, TIME);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_4].i32, ARKUI_CURVE_RHYTHM);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_5].i32, DEFAULT);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLTO_1200
 * @tc.name: testScrollScrollTo012
 * @tc.desc: testing scroll to for scroll with smooth value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollTo012, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.f32 = OFFSET}, {.f32 = OFFSET}, {.i32 = TIME}, {.i32 = ARKUI_CURVE_SMOOTH}, {.i32 = DEFAULT}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_OFFSET, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_0].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_3].i32, TIME);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_4].i32, ARKUI_CURVE_SMOOTH);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_5].i32, DEFAULT);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLTO_1300
 * @tc.name: testScrollScrollTo013
 * @tc.desc: testing scroll to for scroll with friction value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollTo013, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.f32 = OFFSET}, {.f32 = OFFSET}, {.i32 = TIME}, {.i32 = ARKUI_CURVE_FRICTION}, {.i32 = DEFAULT}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_OFFSET, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_0].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_3].i32, TIME);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_4].i32, ARKUI_CURVE_FRICTION);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_OFFSET)->value[PARAM_5].i32, DEFAULT);
}
} // namespace ArkUICapiTest
