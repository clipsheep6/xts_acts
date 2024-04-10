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
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLBAR_0100
 * @tc.name: testScrollScrollBar001
 * @tc.desc: testing scroll bar for scroll with default value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollBar001, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_SCROLL_BAR_DISPLAY_MODE_AUTO}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_BAR_DISPLAY_MODE, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_BAR_DISPLAY_MODE)->value->i32,
              ARKUI_SCROLL_BAR_DISPLAY_MODE_AUTO);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLBAR_0200
 * @tc.name: testScrollScrollBar002
 * @tc.desc: testing scroll bar for scroll with off value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollBar002, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_SCROLL_BAR_DISPLAY_MODE_OFF}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_BAR_DISPLAY_MODE, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_BAR_DISPLAY_MODE)->value->i32,
              ARKUI_SCROLL_BAR_DISPLAY_MODE_OFF);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLBAR_0300
 * @tc.name: testScrollScrollBar003
 * @tc.desc: testing scroll bar for scroll with enum of on value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollBar003, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.i32 = ARKUI_SCROLL_BAR_DISPLAY_MODE_ON}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_BAR_DISPLAY_MODE, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_SCROLL_BAR_DISPLAY_MODE)->value->i32,
              ARKUI_SCROLL_BAR_DISPLAY_MODE_ON);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_SCROLLBAR_0400
 * @tc.name: testScrollScrollBar004
 * @tc.desc: testing scroll bar for scroll with abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollScrollBar004, Function | MediumTest | Level1)
{
    int32_t mode = ABNORMAL_PARAM;
    ArkUI_NumberValue value[] = {{.i32 = mode}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_SCROLL_BAR_DISPLAY_MODE, &value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(scroll, NODE_SCROLL_BAR_DISPLAY_MODE)->value->i32, mode);
}

} // namespace ArkUICapiTest
