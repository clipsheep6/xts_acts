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

class SwiperCapiTest : public testing::Test {};

const auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(
    OH_ArkUI_QueryModuleInterfaceByName(ARKUI_NATIVE_NODE, "ArkUI_NativeNodeAPI_1"));
const auto swiper = nodeAPI->createNode(ARKUI_NODE_SWIPER);

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_0100
 * @tc.name: testSwiperCurve001
 * @tc.desc: testing curve for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve001, Function | MediumTest | Level1)
{
    ArkUI_NumberValue curve_value[] = {{.i32 = ARKUI_CURVE_LINEAR}};
    ArkUI_AttributeItem curve_value_item = {curve_value, sizeof(curve_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_CURVE, &curve_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_CURVE)->value->i32, ARKUI_CURVE_LINEAR);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_0200
 * @tc.name: testSwiperCurve002
 * @tc.desc: testing curve for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve002, Function | MediumTest | Level1)
{
    ArkUI_NumberValue curve_value[] = {{.i32 = ARKUI_CURVE_EASE}};
    ArkUI_AttributeItem curve_value_item = {curve_value, sizeof(curve_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_CURVE, &curve_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_CURVE)->value->i32, ARKUI_CURVE_EASE);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_0300
 * @tc.name: testSwiperCurve003
 * @tc.desc: testing curve for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve003, Function | MediumTest | Level1)
{
    ArkUI_NumberValue curve_value[] = {{.i32 = ARKUI_CURVE_EASE_IN}};
    ArkUI_AttributeItem curve_value_item = {curve_value, sizeof(curve_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_CURVE, &curve_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_CURVE)->value->i32, ARKUI_CURVE_EASE_IN);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_0400
 * @tc.name: testSwiperCurve004
 * @tc.desc: testing curve for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve004, Function | MediumTest | Level1)
{
    ArkUI_NumberValue curve_value[] = {{.i32 = ARKUI_CURVE_EASE_OUT}};
    ArkUI_AttributeItem curve_value_item = {curve_value, sizeof(curve_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_CURVE, &curve_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_CURVE)->value->i32, ARKUI_CURVE_EASE_OUT);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_0500
 * @tc.name: testSwiperCurve005
 * @tc.desc: testing curve for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve005, Function | MediumTest | Level1)
{
    ArkUI_NumberValue curve_value[] = {{.i32 = ARKUI_CURVE_EASE_IN_OUT}};
    ArkUI_AttributeItem curve_value_item = {curve_value, sizeof(curve_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_CURVE, &curve_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_CURVE)->value->i32, ARKUI_CURVE_EASE_IN_OUT);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_0600
 * @tc.name: testSwiperCurve006
 * @tc.desc: testing curve for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve006, Function | MediumTest | Level1)
{
    ArkUI_NumberValue curve_value[] = {{.i32 = ARKUI_CURVE_FAST_OUT_SLOW_IN}};
    ArkUI_AttributeItem curve_value_item = {curve_value, sizeof(curve_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_CURVE, &curve_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_CURVE)->value->i32, ARKUI_CURVE_FAST_OUT_SLOW_IN);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_0700
 * @tc.name: testSwiperCurve007
 * @tc.desc: testing curve for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve007, Function | MediumTest | Level1)
{
    ArkUI_NumberValue curve_value[] = {{.i32 = ARKUI_CURVE_LINEAR_OUT_SLOW_IN}};
    ArkUI_AttributeItem curve_value_item = {curve_value, sizeof(curve_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_CURVE, &curve_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_CURVE)->value->i32, ARKUI_CURVE_LINEAR_OUT_SLOW_IN);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_0800
 * @tc.name: testSwiperCurve008
 * @tc.desc: testing curve for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve008, Function | MediumTest | Level1)
{
    ArkUI_NumberValue curve_value[] = {{.i32 = ARKUI_CURVE_FAST_OUT_LINEAR_IN}};
    ArkUI_AttributeItem curve_value_item = {curve_value, sizeof(curve_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_CURVE, &curve_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_CURVE)->value->i32, ARKUI_CURVE_FAST_OUT_LINEAR_IN);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_0900
 * @tc.name: testSwiperCurve009
 * @tc.desc: testing curve for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve009, Function | MediumTest | Level1)
{
    ArkUI_NumberValue curve_value[] = {{.i32 = ARKUI_CURVE_EXTREME_DECELERATION}};
    ArkUI_AttributeItem curve_value_item = {curve_value, sizeof(curve_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_CURVE, &curve_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_CURVE)->value->i32, ARKUI_CURVE_EXTREME_DECELERATION);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_1000
 * @tc.name: testSwiperCurve010
 * @tc.desc: testing curve for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve010, Function | MediumTest | Level1)
{
    ArkUI_NumberValue curve_value[] = {{.i32 = ARKUI_CURVE_SHARP}};
    ArkUI_AttributeItem curve_value_item = {curve_value, sizeof(curve_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_CURVE, &curve_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_CURVE)->value->i32, ARKUI_CURVE_SHARP);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_1100
 * @tc.name: testSwiperCurve011
 * @tc.desc: testing curve for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve011, Function | MediumTest | Level1)
{
    ArkUI_NumberValue curve_value[] = {{.i32 = ARKUI_CURVE_RHYTHM}};
    ArkUI_AttributeItem curve_value_item = {curve_value, sizeof(curve_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_CURVE, &curve_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_CURVE)->value->i32, ARKUI_CURVE_RHYTHM);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_1200
 * @tc.name: testSwiperCurve012
 * @tc.desc: testing curve for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve012, Function | MediumTest | Level1)
{
    ArkUI_NumberValue curve_value[] = {{.i32 = ARKUI_CURVE_SMOOTH}};
    ArkUI_AttributeItem curve_value_item = {curve_value, sizeof(curve_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_CURVE, &curve_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_CURVE)->value->i32, ARKUI_CURVE_SMOOTH);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_1300
 * @tc.name: testSwiperCurve013
 * @tc.desc: testing curve for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve013, Function | MediumTest | Level1)
{
    ArkUI_NumberValue curve_value[] = {{.i32 = ARKUI_CURVE_FRICTION}};
    ArkUI_AttributeItem curve_value_item = {curve_value, sizeof(curve_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_CURVE, &curve_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_CURVE)->value->i32, ARKUI_CURVE_FRICTION);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_1400
 * @tc.name: testSwiperCurve014
 * @tc.desc: testing curve for swiper with abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve014, Function | MediumTest | Level2)
{
    int32_t curve = -1;

    ArkUI_NumberValue curve_value[] = {{.i32 = curve}};
    ArkUI_AttributeItem curve_value_item = {curve_value, sizeof(curve_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_CURVE, &curve_value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(swiper, NODE_SWIPER_CURVE)->value->i32, curve);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_CURVE_1500
 * @tc.name: testSwiperCurve015
 * @tc.desc: testing default values of curve property of the swiper
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperCurve015, Function | MediumTest | Level1)
{
    auto swiperDefault = nodeAPI->createNode(ARKUI_NODE_SWIPER);
    ASSERT_EQ(nodeAPI->getAttribute(swiperDefault, NODE_SWIPER_CURVE)->value->i32, ARKUI_CURVE_LINEAR);
}

} // namespace ArkUICapiTest
