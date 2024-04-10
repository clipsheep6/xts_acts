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
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_INDICATOR_0100
 * @tc.name: testSwiperIndicator001
 * @tc.desc: testing indicator for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperIndicator001, Function | MediumTest | Level1)
{
    int32_t indicator = 0;
    ArkUI_NumberValue value[] = {{.i32 = indicator}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_SHOW_INDICATOR, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_SHOW_INDICATOR)->value->i32, indicator);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_INDICATOR_0200
 * @tc.name: testSwiperIndicator002
 * @tc.desc: testing indicator for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperIndicator002, Function | MediumTest | Level1)
{
    int32_t indicator = 1;
    ArkUI_NumberValue value[] = {{.i32 = indicator}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_SHOW_INDICATOR, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_SHOW_INDICATOR)->value->i32, indicator);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_INDICATOR_0300
 * @tc.name: testSwiperIndicator003
 * @tc.desc: testing default values of indicator property of the swiper
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperIndicator003, Function | MediumTest | Level1)
{
    int32_t indicator = 1;
    auto swiperDefault = nodeAPI->createNode(ARKUI_NODE_SWIPER);
    ASSERT_EQ(nodeAPI->getAttribute(swiperDefault, NODE_SWIPER_SHOW_INDICATOR)->value->i32, indicator);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_INDICATOR_0400
 * @tc.name: testSwiperIndicator004
 * @tc.desc: testing indicator for swiper with abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(SwiperCapiTest, testSwiperIndicator004, Function | MediumTest | Level2)
{
    int32_t indicator = -1;
    ArkUI_NumberValue value[] = {{.i32 = indicator}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_SHOW_INDICATOR, &value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(swiper, NODE_SWIPER_SHOW_INDICATOR)->value->i32, indicator);
}

} // namespace ArkUICapiTest
