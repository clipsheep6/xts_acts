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

const auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(OH_ArkUI_GetNativeAPI(ARKUI_NATIVE_NODE, 1));
const auto scroll = nodeAPI -> createNode(ARKUI_NODE_SCROLL);

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_HEIGHT_0100
 * @tc.name: testScrollHeight001
 * @tc.desc: testing height for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollHeight001, Function | MediumTest | Level1)
{
    int setValue = 200;
    ArkUI_NumberValue value[] = {{.f32 = setValue}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_HEIGHT, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_HEIGHT)->value->f32, setValue);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_HEIGHT_0200
 * @tc.name: testScrollHeight002
 * @tc.desc: testing height for scroll with large value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollHeight002, Function | MediumTest | Level1)
{
    int setValue = 10000;
    ArkUI_NumberValue value[] = {{.f32 = setValue}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_HEIGHT, &value_item);
    ASSERT_EQ(ret, SUCCESS);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_HEIGHT_0300
 * @tc.name: testScrollHeight003
 * @tc.desc: testing height for scroll with abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(ScrollCapiTest, testScrollHeight003, Function | MediumTest | Level2)
{
    int setValue = -10;
    ArkUI_NumberValue value[] = {{.f32 = setValue}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_HEIGHT, &value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
}

} // namespace ArkUICapiTest
