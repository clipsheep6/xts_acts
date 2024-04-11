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
#define OFFSET 10

namespace ArkUICapiTest {

const auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(
    OH_ArkUI_QueryModuleInterfaceByName(ARKUI_NATIVE_NODE, "ArkUI_NativeNodeAPI_1"));
const auto scroll = nodeAPI->createNode(ARKUI_NODE_SCROLL);

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_OVERLAY_0100
 * @tc.name: testScrollOverlay001
 * @tc.desc: testing overlay for scroll with default value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollOverlay001, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_ALIGNMENT_TOP_START}, {.f32 = OFFSET}, {.f32 = OFFSET}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.string = "ScrollOverLayTest";
    auto ret = nodeAPI->setAttribute(scroll, NODE_OVERLAY, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_0].i32, ARKUI_ALIGNMENT_TOP_START);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_2].f32, OFFSET);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_OVERLAY_0200
 * @tc.name: testScrollOverlay002
 * @tc.desc: testing overlay for scroll with top value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollOverlay002, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_ALIGNMENT_TOP}, {.f32 = OFFSET}, {.f32 = OFFSET}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.string = "ScrollOverLayTest";
    auto ret = nodeAPI->setAttribute(scroll, NODE_OVERLAY, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_0].i32, ARKUI_ALIGNMENT_TOP);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_2].f32, OFFSET);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_OVERLAY_0300
 * @tc.name: testScrollOverlay003
 * @tc.desc: testing overlay for scroll with topEnd value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollOverlay003, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_ALIGNMENT_TOP_END}, {.f32 = OFFSET}, {.f32 = OFFSET}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.string = "ScrollOverLayTest";
    auto ret = nodeAPI->setAttribute(scroll, NODE_OVERLAY, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_0].i32, ARKUI_ALIGNMENT_TOP_END);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_2].f32, OFFSET);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_OVERLAY_0400
 * @tc.name: testScrollOverlay004
 * @tc.desc: testing overlay for scroll with start value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollOverlay004, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_ALIGNMENT_START}, {.f32 = OFFSET}, {.f32 = OFFSET}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.string = "ScrollOverLayTest";
    auto ret = nodeAPI->setAttribute(scroll, NODE_OVERLAY, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_0].i32, ARKUI_ALIGNMENT_START);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_2].f32, OFFSET);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_OVERLAY_0500
 * @tc.name: testScrollOverlay005
 * @tc.desc: testing overlay for scroll with center value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollOverlay005, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_ALIGNMENT_CENTER}, {.f32 = OFFSET}, {.f32 = OFFSET}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.string = "ScrollOverLayTest";
    auto ret = nodeAPI->setAttribute(scroll, NODE_OVERLAY, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_0].i32, ARKUI_ALIGNMENT_CENTER);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_2].f32, OFFSET);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_OVERLAY_0600
 * @tc.name: testScrollOverlay006
 * @tc.desc: testing overlay for scroll with end value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollOverlay006, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_ALIGNMENT_END}, {.f32 = OFFSET}, {.f32 = OFFSET}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.string = "ScrollOverLayTest";
    auto ret = nodeAPI->setAttribute(scroll, NODE_OVERLAY, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_0].i32, ARKUI_ALIGNMENT_END);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_2].f32, OFFSET);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_OVERLAY_0700
 * @tc.name: testScrollOverlay007
 * @tc.desc: testing overlay for scroll with bottomStart value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollOverlay007, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_ALIGNMENT_BOTTOM_START}, {.f32 = OFFSET}, {.f32 = OFFSET}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.string = "ScrollOverLayTest";
    auto ret = nodeAPI->setAttribute(scroll, NODE_OVERLAY, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_0].i32, ARKUI_ALIGNMENT_BOTTOM_START);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_2].f32, OFFSET);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_OVERLAY_0800
 * @tc.name: testScrollOverlay008
 * @tc.desc: testing overlay for scroll with bottom value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollOverlay008, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_ALIGNMENT_BOTTOM}, {.f32 = OFFSET}, {.f32 = OFFSET}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.string = "ScrollOverLayTest";
    auto ret = nodeAPI->setAttribute(scroll, NODE_OVERLAY, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_0].i32, ARKUI_ALIGNMENT_BOTTOM);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_2].f32, OFFSET);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_OVERLAY_0900
 * @tc.name: testScrollOverlay009
 * @tc.desc: testing overlay for scroll with bottomEnd value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollOverlay009, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_ALIGNMENT_BOTTOM_END}, {.f32 = OFFSET}, {.f32 = OFFSET}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.string = "ScrollOverLayTest";
    auto ret = nodeAPI->setAttribute(scroll, NODE_OVERLAY, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_0].i32, ARKUI_ALIGNMENT_BOTTOM_END);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_1].f32, OFFSET);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OVERLAY)->value[PARAM_2].f32, OFFSET);
}

} // namespace ArkUICapiTest
