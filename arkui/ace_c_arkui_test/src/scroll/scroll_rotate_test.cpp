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
#define DEFAULT_VALUE 0
#define NORMAL_VALUE 10
#define ABNORMAL_VALUE (-1)

namespace ArkUICapiTest {

const auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(
    OH_ArkUI_QueryModuleInterfaceByName(ARKUI_NATIVE_NODE, "ArkUI_NativeNodeAPI_1"));
const auto scroll = nodeAPI->createNode(ARKUI_NODE_SCROLL);

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_ROTATE_0100
 * @tc.name: testScrollRotate001
 * @tc.desc: testing Rotate for scroll with default value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollRotate001, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.f32 = DEFAULT_VALUE},
                                 {.f32 = DEFAULT_VALUE},
                                 {.f32 = DEFAULT_VALUE},
                                 {.f32 = DEFAULT_VALUE},
                                 {.f32 = DEFAULT_VALUE}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_ROTATE, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_ROTATE)->value[PARAM_0].f32, DEFAULT_VALUE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_ROTATE)->value[PARAM_1].f32, DEFAULT_VALUE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_ROTATE)->value[PARAM_2].f32, DEFAULT_VALUE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_ROTATE)->value[PARAM_3].f32, DEFAULT_VALUE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_ROTATE)->value[PARAM_4].f32, DEFAULT_VALUE);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_ROTATE_0200
 * @tc.name: testScrollRotate002
 * @tc.desc: testing Rotate for scroll with normal value for line of sight
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollRotate002, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.f32 = DEFAULT_VALUE},
                                 {.f32 = DEFAULT_VALUE},
                                 {.f32 = DEFAULT_VALUE},
                                 {.f32 = DEFAULT_VALUE},
                                 {.f32 = NORMAL_VALUE}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_ROTATE, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_ROTATE)->value[PARAM_0].f32, DEFAULT_VALUE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_ROTATE)->value[PARAM_1].f32, DEFAULT_VALUE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_ROTATE)->value[PARAM_2].f32, DEFAULT_VALUE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_ROTATE)->value[PARAM_3].f32, DEFAULT_VALUE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_ROTATE)->value[PARAM_4].f32, NORMAL_VALUE);
}
} // namespace ArkUICapiTest
