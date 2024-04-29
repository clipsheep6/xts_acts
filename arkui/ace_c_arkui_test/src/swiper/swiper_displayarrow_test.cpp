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
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_DISPLAYARROW_0100
 * @tc.name: testSwiperDisplayArrow001
 * @tc.desc: testing displayArrow for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperDisplayArrow001, Function | MediumTest | Level1)
{
    ArkUI_NumberValue displayArrow_value[] = {{.i32 = ARKUI_SWIPER_ARROW_HIDE}};
    ArkUI_AttributeItem displayArrow_value_item = {displayArrow_value,
                                                   sizeof(displayArrow_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_SHOW_DISPLAY_ARROW, &displayArrow_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_SHOW_DISPLAY_ARROW)->value->i32, ARKUI_SWIPER_ARROW_HIDE);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_DISPLAYARROW_0200
 * @tc.name: testSwiperDisplayArrow002
 * @tc.desc: testing displayArrow for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperDisplayArrow002, Function | MediumTest | Level1)
{
    ArkUI_NumberValue displayArrow_value[] = {{.i32 = ARKUI_SWIPER_ARROW_SHOW}};
    ArkUI_AttributeItem displayArrow_value_item = {displayArrow_value,
                                                   sizeof(displayArrow_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_SHOW_DISPLAY_ARROW, &displayArrow_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_SHOW_DISPLAY_ARROW)->value->i32, ARKUI_SWIPER_ARROW_SHOW);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_DISPLAYARROW_0300
 * @tc.name: testSwiperDisplayArrow003
 * @tc.desc: testing displayArrow for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperDisplayArrow003, Function | MediumTest | Level1)
{
    ArkUI_NumberValue displayArrow_value[] = {{.i32 = ARKUI_SWIPER_ARROW_SHOW_ON_HOVER}};
    ArkUI_AttributeItem displayArrow_value_item = {displayArrow_value,
                                                   sizeof(displayArrow_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_SHOW_DISPLAY_ARROW, &displayArrow_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_SHOW_DISPLAY_ARROW)->value->i32,
              ARKUI_SWIPER_ARROW_SHOW_ON_HOVER);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_DISPLAYARROW_0400
 * @tc.name: testSwiperDisplayArrow004
 * @tc.desc: testing displayArrow for swiper with abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(SwiperCapiTest, testSwiperDisplayArrow004, Function | MediumTest | Level2)
{
    int32_t displayArrow = -1;

    ArkUI_NumberValue displayArrow_value[] = {{.i32 = displayArrow}};
    ArkUI_AttributeItem displayArrow_value_item = {displayArrow_value,
                                                   sizeof(displayArrow_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_SHOW_DISPLAY_ARROW, &displayArrow_value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(swiper, NODE_SWIPER_SHOW_DISPLAY_ARROW)->value->i32, displayArrow);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_DISPLAYARROW_0500
 * @tc.name: testSwiperDisplayArrow005
 * @tc.desc: testing default values of displayArrow property of the swiper
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperDisplayArrow005, Function | MediumTest | Level1)
{
    auto swiperDefault = nodeAPI->createNode(ARKUI_NODE_SWIPER);
    ASSERT_EQ(nodeAPI->getAttribute(swiperDefault, NODE_SWIPER_SHOW_DISPLAY_ARROW)->value->i32,
              ARKUI_SWIPER_ARROW_HIDE);
}

} // namespace ArkUICapiTest
