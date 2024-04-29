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
#define PARAM_0 0
#define PARAM_1 1
#define PARAM_MIDDLE 0.5
#define PARAM_ABNORAML (-1)

namespace ArkUICapiTest {

const auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(
    OH_ArkUI_QueryModuleInterfaceByName(ARKUI_NATIVE_NODE, "ArkUI_NativeNodeAPI_1"));
const auto scroll = nodeAPI->createNode(ARKUI_NODE_SCROLL);

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_OPACITY_0100
 * @tc.name: testScrollOpacity001
 * @tc.desc: testing opacity for scroll with min value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollOpacity001, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.f32 = PARAM_0}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_OPACITY, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OPACITY)->value->f32, PARAM_0);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_OPACITY_0200
 * @tc.name: testScrollOpacity002
 * @tc.desc: testing opacity for scroll with middle value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollOpacity002, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.f32 = PARAM_MIDDLE}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_OPACITY, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OPACITY)->value->f32, PARAM_MIDDLE);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_OPACITY_0300
 * @tc.name: testScrollOpacity003
 * @tc.desc: testing opacity for scroll with max value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollOpacity003, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.f32 = PARAM_1}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_OPACITY, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_OPACITY)->value->f32, PARAM_1);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_OPACITY_0400
 * @tc.name: testScrollOpacity004
 * @tc.desc: testing opacity for scroll with abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(ScrollCapiTest, testScrollOpacity004, Function | MediumTest | Level2)
{
    ArkUI_NumberValue value[] = {{.f32 = PARAM_ABNORAML}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_OPACITY, &value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(scroll, NODE_OPACITY)->value->f32, PARAM_ABNORAML);
}

} // namespace ArkUICapiTest
