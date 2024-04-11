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
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_LOOP_0100
 * @tc.name: testSwiperLoop001
 * @tc.desc: testing loop for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperLoop001, Function | MediumTest | Level1)
{
    int32_t loop = 0;
    ArkUI_NumberValue value[] = {{.i32 = loop}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_LOOP, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_LOOP)->value->i32, loop);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_LOOP_0200
 * @tc.name: testSwiperLoop002
 * @tc.desc: testing loop for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperLoop002, Function | MediumTest | Level1)
{
    int32_t loop = 1;
    ArkUI_NumberValue value[] = {{.i32 = loop}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_LOOP, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_LOOP)->value->i32, loop);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_LOOP_0300
 * @tc.name: testSwiperLoop003
 * @tc.desc: testing default values of loop property of the swiper
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperLoop003, Function | MediumTest | Level1)
{
    int32_t loop = 1;
    auto swiperDefault = nodeAPI->createNode(ARKUI_NODE_SWIPER);
    ASSERT_EQ(nodeAPI->getAttribute(swiperDefault, NODE_SWIPER_LOOP)->value->i32, loop);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_LOOP_0400
 * @tc.name: testSwiperLoop004
 * @tc.desc: testing loop for swiper with abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(SwiperCapiTest, testSwiperLoop004, Function | MediumTest | Level2)
{
    int32_t loop = -1;
    ArkUI_NumberValue value[] = {{.i32 = loop}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_LOOP, &value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(swiper, NODE_SWIPER_LOOP)->value->i32, loop);
}

} // namespace ArkUICapiTest
