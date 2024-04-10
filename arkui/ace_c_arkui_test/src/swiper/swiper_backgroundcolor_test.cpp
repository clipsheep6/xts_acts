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
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_BACKGROUNDCOLOR_0100
 * @tc.name: testSwiperBackgroundColor001
 * @tc.desc: testing backgroundColor for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperBackgroundColor001, Function | MediumTest | Level1)
{
    uint32_t backgroundColor = 0xFFFF0000;

    ArkUI_NumberValue backgroundColor_value[] = {{.u32 = backgroundColor}};
    ArkUI_AttributeItem backgroundColor_item = {backgroundColor_value,
                                                sizeof(backgroundColor_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_BACKGROUND_COLOR, &backgroundColor_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_BACKGROUND_COLOR)->value->u32, backgroundColor);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_BACKGROUNDCOLOR_0200
 * @tc.name: testSwiperBackgroundColor002
 * @tc.desc: testing backgroundColor for swiper with large value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperBackgroundColor002, Function | MediumTest | Level1)
{
    uint32_t backgroundColor = 0xFFFFFFFF;

    ArkUI_NumberValue backgroundColor_value[] = {{.u32 = backgroundColor}};
    ArkUI_AttributeItem backgroundColor_item = {backgroundColor_value,
                                                sizeof(backgroundColor_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_BACKGROUND_COLOR, &backgroundColor_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_BACKGROUND_COLOR)->value->u32, backgroundColor);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_BACKGROUNDCOLOR_0300
 * @tc.name: testSwiperBackgroundColor003
 * @tc.desc: testing backgroundColor for swiper with small value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperBackgroundColor003, Function | MediumTest | Level1)
{
    uint32_t backgroundColor = 0x00000000;

    ArkUI_NumberValue backgroundColor_value[] = {{.u32 = backgroundColor}};
    ArkUI_AttributeItem backgroundColor_item = {backgroundColor_value,
                                                sizeof(backgroundColor_value) / sizeof(ArkUI_NumberValue)};
    auto ret = nodeAPI->setAttribute(swiper, NODE_BACKGROUND_COLOR, &backgroundColor_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_BACKGROUND_COLOR)->value->u32, backgroundColor);
}

} // namespace ArkUICapiTest
