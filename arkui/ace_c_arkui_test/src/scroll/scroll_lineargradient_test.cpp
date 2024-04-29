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

const auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(
    OH_ArkUI_QueryModuleInterfaceByName(ARKUI_NATIVE_NODE, "ArkUI_NativeNodeAPI_1"));
const auto scroll = nodeAPI->createNode(ARKUI_NODE_SCROLL);

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_LINEARGRADIENT_0100
 * @tc.name: testScrollLinearGradient001
 * @tc.desc: testing linearGradient for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollLinearGradient001, Function | MediumTest | Level1)
{
    float angle = 180;
    int32_t direction = ARKUI_LINEAR_GRADIENT_DIRECTION_LEFT;
    int32_t repeating = false;
    unsigned int colors[] = {0xFFFFFFFF, 0xFF0000FF};
    float stops[] = {0.0, 0.5};
    ArkUI_ColorStop colorStop = {colors, stops, PARAM_2};

    ArkUI_NumberValue value[] = {{.f32 = angle}, {.i32 = direction}, {.i32 = repeating}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.object = &colorStop;
    auto ret = nodeAPI->setAttribute(scroll, NODE_LINEAR_GRADIENT, &value_item);

    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, angle);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->i32, direction);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->i32, repeating);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_LINEARGRADIENT_0200
 * @tc.name: testScrollLinearGradient002
 * @tc.desc: testing linearGradient for scroll with large value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollLinearGradient002, Function | MediumTest | Level1)
{
    float angle = 90;
    int32_t direction = ARKUI_LINEAR_GRADIENT_DIRECTION_TOP;
    int32_t repeating = false;
    unsigned int colors[] = {0xFFFFFFFF, 0xFF0000FF};
    float stops[] = {0.0, 0.5};
    ArkUI_ColorStop colorStop = {colors, stops, PARAM_2};

    ArkUI_NumberValue value[] = {{.f32 = angle}, {.i32 = direction}, {.i32 = repeating}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.object = &colorStop;
    auto ret = nodeAPI->setAttribute(scroll, NODE_LINEAR_GRADIENT, &value_item);

    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, angle);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->i32, direction);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->i32, repeating);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_LINEARGRADIENT_0300
 * @tc.name: testScrollLinearGradient003
 * @tc.desc: testing linearGradient for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollLinearGradient003, Function | MediumTest | Level1)
{
    float angle = 180;
    int32_t direction = ARKUI_LINEAR_GRADIENT_DIRECTION_RIGHT;
    int32_t repeating = true;
    unsigned int colors[] = {0xFFFFFFFF, 0xFF0000FF};
    float stops[] = {0.0, 0.5};
    ArkUI_ColorStop colorStop = {colors, stops, PARAM_2};

    ArkUI_NumberValue value[] = {{.f32 = angle}, {.i32 = direction}, {.i32 = repeating}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.object = &colorStop;
    auto ret = nodeAPI->setAttribute(scroll, NODE_LINEAR_GRADIENT, &value_item);

    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, angle);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, direction);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, repeating);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_LINEARGRADIENT_0400
 * @tc.name: testScrollLinearGradient004
 * @tc.desc: testing linearGradient for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollLinearGradient004, Function | MediumTest | Level1)
{
    float angle = 90;
    int32_t direction = ARKUI_LINEAR_GRADIENT_DIRECTION_BOTTOM;
    int32_t repeating = true;
    unsigned int colors[] = {0xFFFFFFFF, 0xFF0000FF};
    float stops[] = {0.0, 0.5};
    ArkUI_ColorStop colorStop = {colors, stops, PARAM_2};

    ArkUI_NumberValue value[] = {{.f32 = angle}, {.i32 = direction}, {.i32 = repeating}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.object = &colorStop;
    auto ret = nodeAPI->setAttribute(scroll, NODE_LINEAR_GRADIENT, &value_item);

    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, angle);
    ASSERT_NE(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, direction);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, repeating);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_LINEARGRADIENT_0500
 * @tc.name: testScrollLinearGradient005
 * @tc.desc: testing linearGradient for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollLinearGradient005, Function | MediumTest | Level1)
{
    float angle = 180;
    int32_t direction = ARKUI_LINEAR_GRADIENT_DIRECTION_LEFT_TOP;
    int32_t repeating = false;
    unsigned int colors[] = {0xFFFFFFFF, 0xFF0000FF};
    float stops[] = {0.0, 0.5};
    ArkUI_ColorStop colorStop = {colors, stops, PARAM_2};

    ArkUI_NumberValue value[] = {{.f32 = angle}, {.i32 = direction}, {.i32 = repeating}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.object = &colorStop;
    auto ret = nodeAPI->setAttribute(scroll, NODE_LINEAR_GRADIENT, &value_item);

    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, angle);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, direction);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, repeating);
}
/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_LINEARGRADIENT_0600
 * @tc.name: testScrollLinearGradient006
 * @tc.desc: testing linearGradient for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollLinearGradient006, Function | MediumTest | Level1)
{
    float angle = 180;
    int32_t direction = ARKUI_LINEAR_GRADIENT_DIRECTION_LEFT_BOTTOM;
    int32_t repeating = false;
    unsigned int colors[] = {0xFFFFFFFF, 0xFF0000FF};
    float stops[] = {0.0, 0.5};
    ArkUI_ColorStop colorStop = {colors, stops, PARAM_2};

    ArkUI_NumberValue value[] = {{.f32 = angle}, {.i32 = direction}, {.i32 = repeating}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.object = &colorStop;
    auto ret = nodeAPI->setAttribute(scroll, NODE_LINEAR_GRADIENT, &value_item);

    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, angle);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, direction);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, repeating);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_LINEARGRADIENT_0700
 * @tc.name: testScrollLinearGradient007
 * @tc.desc: testing linearGradient for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollLinearGradient007, Function | MediumTest | Level1)
{
    float angle = 180;
    int32_t direction = ARKUI_LINEAR_GRADIENT_DIRECTION_RIGHT_TOP;
    int32_t repeating = false;
    unsigned int colors[] = {0xFFFFFFFF, 0xFF0000FF};
    float stops[] = {0.0, 0.5};
    ArkUI_ColorStop colorStop = {colors, stops, PARAM_2};

    ArkUI_NumberValue value[] = {{.f32 = angle}, {.i32 = direction}, {.i32 = repeating}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.object = &colorStop;
    auto ret = nodeAPI->setAttribute(scroll, NODE_LINEAR_GRADIENT, &value_item);

    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, angle);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, direction);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, repeating);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_LINEARGRADIENT_0800
 * @tc.name: testScrollLinearGradient008
 * @tc.desc: testing linearGradient for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollLinearGradient008, Function | MediumTest | Level1)
{
    float angle = 180;
    int32_t direction = ARKUI_LINEAR_GRADIENT_DIRECTION_RIGHT_BOTTOM;
    int32_t repeating = false;
    unsigned int colors[] = {0xFFFFFFFF, 0xFF0000FF};
    float stops[] = {0.0, 0.5};
    ArkUI_ColorStop colorStop = {colors, stops, PARAM_2};

    ArkUI_NumberValue value[] = {{.f32 = angle}, {.i32 = direction}, {.i32 = repeating}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.object = &colorStop;
    auto ret = nodeAPI->setAttribute(scroll, NODE_LINEAR_GRADIENT, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, angle);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, direction);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, repeating);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SCROLL_LINEARGRADIENT_0900
 * @tc.name: testScrollLinearGradient009
 * @tc.desc: testing linearGradient for scroll with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ScrollCapiTest, testScrollLinearGradient009, Function | MediumTest | Level1)
{
    float angle = 180;
    int32_t direction = ARKUI_LINEAR_GRADIENT_DIRECTION_NONE;
    int32_t repeating = false;
    unsigned int colors[] = {0xFFFFFFFF, 0xFF0000FF};
    float stops[] = {0.0, 0.5};
    ArkUI_ColorStop colorStop = {colors, stops, PARAM_2};
    ArkUI_NumberValue value[] = {{.f32 = angle}, {.i32 = direction}, {.i32 = repeating}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    value_item.object = &colorStop;
    auto ret = nodeAPI->setAttribute(scroll, NODE_LINEAR_GRADIENT, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, angle);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, direction);
    ASSERT_EQ(nodeAPI->getAttribute(scroll, NODE_LINEAR_GRADIENT)->value->f32, repeating);
}

} // namespace ArkUICapiTest
