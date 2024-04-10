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

#define PARAM_SNAP 1

#define ABNORMAL_PARAM 1000

namespace ArkUICapiTest {

const auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(
    OH_ArkUI_QueryModuleInterfaceByName(ARKUI_NATIVE_NODE, "ArkUI_NativeNodeAPI_1"));
const auto scroll = nodeAPI->createNode(ARKUI_NODE_SCROLL);

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLSNAP_0100
 * @tc.name: testScrollScrollSnap001
 * @tc.desc: testing scroll snap for scroll with default value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollSnap001, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.i32 = ARKUI_SCROLL_SNAP_ALIGN_NONE}, {.i32 = true}, {.i32 = true}, {.f32 = PARAM_SNAP}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_SNAP, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_0].i32, ARKUI_SCROLL_SNAP_ALIGN_NONE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_1].i32, true);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_2].i32, true);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_3].f32, PARAM_SNAP);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLSNAP_0200
 * @tc.name: testScrollScrollSnap002
 * @tc.desc: testing scroll snap for scroll with start value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollSnap002, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.i32 = ARKUI_SCROLL_SNAP_ALIGN_START}, {.i32 = true}, {.i32 = true}, {.f32 = PARAM_SNAP}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_SNAP, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_0].i32, ARKUI_SCROLL_SNAP_ALIGN_START);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_1].i32, true);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_2].i32, true);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_3].f32, PARAM_SNAP);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLSNAP_0300
 * @tc.name: testScrollScrollSnap003
 * @tc.desc: testing scroll snap for scroll with center value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollSnap003, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.i32 = ARKUI_SCROLL_SNAP_ALIGN_CENTER}, {.i32 = true}, {.i32 = true}, {.f32 = PARAM_SNAP}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_SNAP, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_0].i32, ARKUI_SCROLL_SNAP_ALIGN_CENTER);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_1].i32, true);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_2].i32, true);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_3].f32, PARAM_SNAP);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLSNAP_0400
 * @tc.name: testScrollScrollSnap004
 * @tc.desc: testing scroll snap for scroll with end value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollSnap004, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {
        {.i32 = ARKUI_SCROLL_SNAP_ALIGN_END}, {.i32 = true}, {.i32 = true}, {.f32 = PARAM_SNAP}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_SNAP, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_0].i32, ARKUI_SCROLL_SNAP_ALIGN_END);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_1].i32, true);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_2].i32, true);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_SNAP)->value[PARAM_3].f32, PARAM_SNAP);
}

} // namespace ArkUICapiTest
