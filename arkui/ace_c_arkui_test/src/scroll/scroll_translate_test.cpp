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

#define NORMAL_VALUE 50
#define BIG_VALUE 200
#define DEFAULT_VALUE 0
#define PARAM_100 100

namespace ArkUICapiTest {

const auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(
    OH_ArkUI_QueryModuleInterfaceByName(ARKUI_NATIVE_NODE, "ArkUI_NativeNodeAPI_1"));
const auto scroll = nodeAPI->createNode(ARKUI_NODE_SCROLL);

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_TRANSLATE_0100
 * @tc.name: testScrollTranslate001
 * @tc.desc: testing translate for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollTranslate001, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.f32 = NORMAL_VALUE}, {.f32 = NORMAL_VALUE}, {.f32 = NORMAL_VALUE}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_TRANSLATE, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_TRANSLATE)->value[PARAM_0].f32, NORMAL_VALUE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_TRANSLATE)->value[PARAM_1].f32, NORMAL_VALUE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_TRANSLATE)->value[PARAM_2].f32, NORMAL_VALUE);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_TRANSLATE_0200
 * @tc.name: testScrollTranslate002
 * @tc.desc: testing translate for scroll with big value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollTranslate002, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.f32 = BIG_VALUE}, {.f32 = BIG_VALUE}, {.f32 = BIG_VALUE}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_TRANSLATE, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_TRANSLATE)->value[PARAM_0].f32, BIG_VALUE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_TRANSLATE)->value[PARAM_1].f32, BIG_VALUE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_TRANSLATE)->value[PARAM_2].f32, BIG_VALUE);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_TRANSLATE_0300
 * @tc.name: testScrollTranslate003
 * @tc.desc: testing translate for scroll with overlapping value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollTranslate003, Function | MediumTest | Level1)
{
    ArkUI_NumberValue value[] = {{.f32 = BIG_VALUE}, {.f32 = NORMAL_VALUE}, {.f32 = BIG_VALUE}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_TRANSLATE, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_TRANSLATE)->value[PARAM_0].f32, BIG_VALUE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_TRANSLATE)->value[PARAM_1].f32, NORMAL_VALUE);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_TRANSLATE)->value[PARAM_2].f32, BIG_VALUE);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_TRANSLATE_0400
 * @tc.name: testScrollTranslate004
 * @tc.desc: testing translate for scroll with default value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(ScrollCapiTest, testScrollTranslate004, Function | MediumTest | Level2)
{
    int32_t mode = PARAM_100;
    ArkUI_NumberValue value[] = {{.f32 = mode}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(scroll, NODE_TRANSLATE, &value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(scroll, NODE_TRANSLATE)->value[PARAM_0].f32, PARAM_100);
    ASSERT_NE(nodeAPI->getAttribute(scroll, NODE_TRANSLATE)->value[PARAM_1].f32, PARAM_100);
    ASSERT_NE(nodeAPI->getAttribute(scroll, NODE_TRANSLATE)->value[PARAM_2].f32, PARAM_100);
}

} // namespace ArkUICapiTest
