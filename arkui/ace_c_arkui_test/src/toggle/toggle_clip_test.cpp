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
const auto toggle = nodeAPI->createNode(ARKUI_NODE_TOGGLE);

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_0100
 * @tc.name: testToggleClip001
 * @tc.desc: testing clip for toggle with normal rect value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleClip001, Function | MediumTest | Level1)
{
    float clipRectWidth = 20;
    float clipRectHeight = 20;
    float clipRectRoundedWidth = 3;
    float clipRectRoundedHeight = 3;
    ArkUI_NumberValue clip_value[] = {{.i32 = ARKUI_CLIP_TYPE_RECTANGLE},
                                      {.f32 = clipRectWidth},
                                      {.f32 = clipRectHeight},
                                      {.f32 = clipRectRoundedWidth},
                                      {.f32 = clipRectRoundedHeight}};
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP_SHAPE, &clip_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[0].i32, ARKUI_CLIP_TYPE_RECTANGLE);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[1].f32, clipRectWidth);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[2].f32, clipRectHeight);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[3].f32, clipRectRoundedWidth);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[4].f32, clipRectRoundedHeight);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_0200
 * @tc.name: testToggleClip002
 * @tc.desc: testing clip for toggle with abnormal rect value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(ToggleCapiTest, testToggleClip002, Function | MediumTest | Level2)
{
    float clipRectWidth = -20;
    float clipRectHeight = -20;
    float clipRectRoundedWidth = -3;
    float clipRectRoundedHeight = -3;
    ArkUI_NumberValue clip_value[] = {{.i32 = ARKUI_CLIP_TYPE_RECTANGLE},
                                      {.f32 = clipRectWidth},
                                      {.f32 = clipRectHeight},
                                      {.f32 = clipRectRoundedWidth},
                                      {.f32 = clipRectRoundedHeight}};
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP_SHAPE, &clip_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[0].i32, ARKUI_CLIP_TYPE_RECTANGLE);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[1].f32, clipRectWidth);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[2].f32, clipRectHeight);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[3].f32, clipRectRoundedWidth);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[4].f32, clipRectRoundedHeight);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_0300
 * @tc.name: testToggleClip003
 * @tc.desc: testing clip for toggle with large rect value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleClip003, Function | MediumTest | Level1)
{
    float clipRectWidth = 30000;
    float clipRectHeight = 30000;
    float clipRectRoundedWidth = 10000;
    float clipRectRoundedHeight = 10000;
    ArkUI_NumberValue clip_value[] = {{.i32 = ARKUI_CLIP_TYPE_RECTANGLE},
                                      {.f32 = clipRectWidth},
                                      {.f32 = clipRectHeight},
                                      {.f32 = clipRectRoundedWidth},
                                      {.f32 = clipRectRoundedHeight}};
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP_SHAPE, &clip_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[0].i32, ARKUI_CLIP_TYPE_RECTANGLE);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[1].f32, clipRectWidth);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[2].f32, clipRectHeight);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[3].f32, clipRectRoundedWidth);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[4].f32, clipRectRoundedHeight);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_0400
 * @tc.name: testToggleClip004
 * @tc.desc: testing clip for toggle with normal circle value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleClip004, Function | MediumTest | Level1)
{
    float clipCircleWidth = 20;
    float clipCircleHeight = 20;
    ArkUI_NumberValue clip_value[] = {
        {.i32 = ARKUI_CLIP_TYPE_CIRCLE}, {.f32 = clipCircleWidth}, {.f32 = clipCircleHeight}};
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP_SHAPE, &clip_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[0].i32, ARKUI_CLIP_TYPE_CIRCLE);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[1].f32, clipCircleWidth);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[2].f32, clipCircleHeight);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_0500
 * @tc.name: testToggleClip005
 * @tc.desc: testing clip for toggle with abnormal circle value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(ToggleCapiTest, testToggleClip005, Function | MediumTest | Level2)
{
    float clipCircleWidth = -20;
    float clipCircleHeight = -20;
    ArkUI_NumberValue clip_value[] = {
        {.i32 = ARKUI_CLIP_TYPE_CIRCLE}, {.f32 = clipCircleWidth}, {.f32 = clipCircleHeight}};
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP_SHAPE, &clip_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[0].i32, ARKUI_CLIP_TYPE_CIRCLE);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[1].f32, clipCircleWidth);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[2].f32, clipCircleHeight);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_0600
 * @tc.name: testToggleClip006
 * @tc.desc: testing clip for toggle with large circle value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleClip006, Function | MediumTest | Level1)
{
    float clipCircleWidth = 10000;
    float clipCircleHeight = 10000;
    ArkUI_NumberValue clip_value[] = {
        {.i32 = ARKUI_CLIP_TYPE_CIRCLE}, {.f32 = clipCircleWidth}, {.f32 = clipCircleHeight}};
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP_SHAPE, &clip_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[0].i32, ARKUI_CLIP_TYPE_CIRCLE);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[1].f32, clipCircleWidth);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[2].f32, clipCircleHeight);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_0700
 * @tc.name: testToggleClip007
 * @tc.desc: testing clip for toggle with normal ellipse value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleClip007, Function | MediumTest | Level1)
{
    float clipEllipseWidth = 35;
    float clipEllipseHeight = 20;
    ArkUI_NumberValue clip_value[] = {
        {.i32 = ARKUI_CLIP_TYPE_ELLIPSE}, {.f32 = clipEllipseWidth}, {.f32 = clipEllipseHeight}};
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP_SHAPE, &clip_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[0].i32, ARKUI_CLIP_TYPE_ELLIPSE);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[1].f32, clipEllipseWidth);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[2].f32, clipEllipseHeight);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_0800
 * @tc.name: testToggleClip008
 * @tc.desc: testing clip for toggle with abnormal ellipse value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(ToggleCapiTest, testToggleClip008, Function | MediumTest | Level2)
{
    float clipEllipseWidth = -35;
    float clipEllipseHeight = -20;
    ArkUI_NumberValue clip_value[] = {
        {.i32 = ARKUI_CLIP_TYPE_ELLIPSE}, {.f32 = clipEllipseWidth}, {.f32 = clipEllipseHeight}};
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP_SHAPE, &clip_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[0].i32, ARKUI_CLIP_TYPE_ELLIPSE);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[1].f32, clipEllipseWidth);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[2].f32, clipEllipseHeight);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_0900
 * @tc.name: testToggleClip009
 * @tc.desc: testing clip for toggle with large ellipse value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleClip009, Function | MediumTest | Level1)
{
    float clipEllipseWidth = 20000;
    float clipEllipseHeight = 10000;
    ArkUI_NumberValue clip_value[] = {
        {.i32 = ARKUI_CLIP_TYPE_ELLIPSE}, {.f32 = clipEllipseWidth}, {.f32 = clipEllipseHeight}};
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP_SHAPE, &clip_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[0].i32, ARKUI_CLIP_TYPE_ELLIPSE);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[1].f32, clipEllipseWidth);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[2].f32, clipEllipseHeight);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_1000
 * @tc.name: testToggleClip010
 * @tc.desc: testing clip for toggle with normal path value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleClip010, Function | MediumTest | Level1)
{
    float clipPathWidth = 35;
    float clipPathHeight = 20;
    ArkUI_NumberValue clip_value[] = {
        {.i32 = ARKUI_CLIP_TYPE_PATH}, {.f32 = clipPathWidth}, {.f32 = clipPathHeight}};
    const char *path = "M0 0 H20 V20 H0 Z";
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue), path};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP_SHAPE, &clip_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[0].i32, ARKUI_CLIP_TYPE_PATH);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[1].f32, clipPathWidth);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[2].f32, clipPathHeight);
    ASSERT_STREQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->string, path);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_1100
 * @tc.name: testToggleClip011
 * @tc.desc: testing clip for toggle with abnormal path value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(ToggleCapiTest, testToggleClip011, Function | MediumTest | Level2)
{
    float clipPathWidth = -35;
    float clipPathHeight = -20;
    ArkUI_NumberValue clip_value[] = {
        {.i32 = ARKUI_CLIP_TYPE_PATH}, {.f32 = clipPathWidth}, {.f32 = clipPathHeight}};
    const char *path = "";
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue), path};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP_SHAPE, &clip_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[0].i32, ARKUI_CLIP_TYPE_PATH);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[1].f32, clipPathWidth);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[2].f32, clipPathHeight);
    ASSERT_STRNE(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->string, path);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_1200
 * @tc.name: testToggleClip012
 * @tc.desc: testing clip for toggle with large path value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleClip012, Function | MediumTest | Level1)
{
    float clipPathWidth = 10000;
    float clipPathHeight = 10000;
    ArkUI_NumberValue clip_value[] = {
        {.i32 = ARKUI_CLIP_TYPE_PATH}, {.f32 = clipPathWidth}, {.f32 = clipPathHeight}};
    const char *path = "M0 0 H20 V20 H0 Z";
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue), path};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP_SHAPE, &clip_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[0].i32, ARKUI_CLIP_TYPE_PATH);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[1].f32, clipPathWidth);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->value[2].f32, clipPathHeight);
    ASSERT_STREQ(nodeAPI->getAttribute(toggle, NODE_CLIP_SHAPE)->string, path);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_1300
 * @tc.name: testToggleClip013
 * @tc.desc: testing clip for toggle with normal bool value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleClip013, Function | MediumTest | Level1)
{
    int32_t clipBool = 1;
    ArkUI_NumberValue clip_value[] = {{.i32 = clipBool}};
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP, &clip_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP)->value[0].i32, clipBool);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_1400
 * @tc.name: testToggleClip014
 * @tc.desc: testing clip for toggle with normal bool value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleClip014, Function | MediumTest | Level1)
{
    int32_t clipBool = 0;
    ArkUI_NumberValue clip_value[] = {{.i32 = clipBool}};
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP, &clip_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(toggle, NODE_CLIP)->value[0].i32, clipBool);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_1500
 * @tc.name: testToggleClip015
 * @tc.desc: testing clip for toggle with abnormal bool value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(ToggleCapiTest, testToggleClip015, Function | MediumTest | Level2)
{
    int32_t clipBool = -1;
    ArkUI_NumberValue clip_value[] = {{.i32 = clipBool}};
    ArkUI_AttributeItem clip_item = {clip_value, sizeof(clip_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(toggle, NODE_CLIP, &clip_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(toggle, NODE_CLIP)->value[0].i32, clipBool);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_TOGGLE_CLIP_1600
 * @tc.name: testToggleClip016
 * @tc.desc: testing clip for toggle with default bool value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(ToggleCapiTest, testToggleClip016, Function | MediumTest | Level1)
{
    int32_t clipBool = 0;
    auto toggleDefault = nodeAPI->createNode(ARKUI_NODE_TOGGLE);
    ASSERT_EQ(nodeAPI->getAttribute(toggleDefault, NODE_CLIP)->value[0].i32, clipBool);
}

} // namespace ArkUICapiTest
