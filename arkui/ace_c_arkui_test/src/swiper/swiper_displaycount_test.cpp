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
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_DISPLAYCOUNT_0100
 * @tc.name: testSwiperDisplayCount001
 * @tc.desc: testing displayCount for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperDisplayCount001, Function | MediumTest | Level1)
{
    int32_t displayCount = 3;
    ArkUI_NumberValue value[] = {{.i32 = displayCount}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_DISPLAY_COUNT, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_DISPLAY_COUNT)->value->i32, displayCount);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_DISPLAYCOUNT_0200
 * @tc.name: testSwiperDisplayCount002
 * @tc.desc: testing displayCount for swiper with large value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperDisplayCount002, Function | MediumTest | Level1)
{
    int32_t displayCount = 10000;
    ArkUI_NumberValue value[] = {{.i32 = displayCount}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_DISPLAY_COUNT, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_DISPLAY_COUNT)->value->i32, displayCount);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_DISPLAYCOUNT_0300
 * @tc.name: testSwiperDisplayCount003
 * @tc.desc: testing displayCount for swiper with abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(SwiperCapiTest, testSwiperDisplayCount003, Function | MediumTest | Level2)
{
    int32_t displayCount = -1;
    int32_t expectCode = 1;
    ArkUI_NumberValue value[] = {{.i32 = displayCount}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_DISPLAY_COUNT, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_DISPLAY_COUNT)->value->i32, expectCode);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_DISPLAYCOUNT_0400
 * @tc.name: testSwiperDisplayCount004
 * @tc.desc: testing default values of displayCount property of the swiper
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperDisplayCount004, Function | MediumTest | Level1)
{
    int32_t displayCount = 1;
    auto swiperDefault = nodeAPI->createNode(ARKUI_NODE_SWIPER);
    ASSERT_EQ(nodeAPI->getAttribute(swiperDefault, NODE_SWIPER_DISPLAY_COUNT)->value->i32, displayCount);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_DISPLAYCOUNT_0500
 * @tc.name: testSwiperDisplayCount005
 * @tc.desc: testing displayCount for swiper with abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(SwiperCapiTest, testSwiperDisplayCount005, Function | MediumTest | Level2)
{
    int32_t displayCount = 0;
    int32_t expectCode = 1;
    ArkUI_NumberValue value[] = {{.i32 = displayCount}};
    ArkUI_AttributeItem value_item = {value, sizeof(value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_SWIPER_DISPLAY_COUNT, &value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_SWIPER_DISPLAY_COUNT)->value->i32, expectCode);
}

} // namespace ArkUICapiTest
