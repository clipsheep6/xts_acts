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
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_WIDTH_0100
 * @tc.name: testSwiperWidth001
 * @tc.desc: testing width for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperWidth001, Function | MediumTest | Level1)
{
    float width = 300;

    ArkUI_NumberValue width_value[] = {{.f32 = width}};
    ArkUI_AttributeItem width_value_item = {width_value, sizeof(width_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_WIDTH, &width_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_WIDTH)->value->f32, width);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_WIDTH_0200
 * @tc.name: testSwiperWidth002
 * @tc.desc: testing width for swiper with normal abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(SwiperCapiTest, testSwiperWidth002, Function | MediumTest | Level2)
{
    float width = -100;

    ArkUI_NumberValue width_value[] = {{.f32 = width}};
    ArkUI_AttributeItem width_value_item = {width_value, sizeof(width_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_WIDTH, &width_value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_NE(nodeAPI->getAttribute(swiper, NODE_WIDTH)->value->f32, width);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_WIDTH_0300
 * @tc.name: testSwiperWidth003
 * @tc.desc: testing width for swiper with large value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperWidth003, Function | MediumTest | Level1)
{
    float width = 10000;

    ArkUI_NumberValue width_value[] = {{.f32 = width}};
    ArkUI_AttributeItem width_value_item = {width_value, sizeof(width_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_WIDTH, &width_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_WIDTH)->value->f32, width);
}

} // namespace ArkUICapiTest
