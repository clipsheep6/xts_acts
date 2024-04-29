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
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_BACKGROUNDIMAGE_0100
 * @tc.name: testSwiperBackgroundImage001
 * @tc.desc: testing backgroundImage for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperBackgroundImage001, Function | MediumTest | Level1)
{
    const char *imageUrl = "./resources/base/media/icon.png";

    ArkUI_NumberValue background_image_value[] = {{.i32 = ARKUI_IMAGE_REPEAT_NONE}};
    ArkUI_AttributeItem background_image_value_item = {
        background_image_value, sizeof(background_image_value) / sizeof(ArkUI_NumberValue), imageUrl};
    auto ret = nodeAPI->setAttribute(swiper, NODE_BACKGROUND_IMAGE, &background_image_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_STREQ(nodeAPI->getAttribute(swiper, NODE_BACKGROUND_IMAGE)->string, imageUrl);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_BACKGROUND_IMAGE)->value->i32, ARKUI_IMAGE_REPEAT_NONE);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_BACKGROUNDIMAGE_0200
 * @tc.name: testSwiperBackgroundImage002
 * @tc.desc: testing backgroundImage for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperBackgroundImage002, Function | MediumTest | Level1)
{
    const char *imageUrl = "./resources/base/media/icon.png";

    ArkUI_NumberValue background_image_value[] = {{.i32 = ARKUI_IMAGE_REPEAT_X}};
    ArkUI_AttributeItem background_image_value_item = {
        background_image_value, sizeof(background_image_value) / sizeof(ArkUI_NumberValue), imageUrl};
    auto ret = nodeAPI->setAttribute(swiper, NODE_BACKGROUND_IMAGE, &background_image_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_STREQ(nodeAPI->getAttribute(swiper, NODE_BACKGROUND_IMAGE)->string, imageUrl);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_BACKGROUND_IMAGE)->value->i32, ARKUI_IMAGE_REPEAT_X);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_BACKGROUNDIMAGE_0300
 * @tc.name: testSwiperBackgroundImage003
 * @tc.desc: testing backgroundImage for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperBackgroundImage003, Function | MediumTest | Level1)
{
    const char *imageUrl = "./resources/base/media/icon.png";

    ArkUI_NumberValue background_image_value[] = {{.i32 = ARKUI_IMAGE_REPEAT_Y}};
    ArkUI_AttributeItem background_image_value_item = {
        background_image_value, sizeof(background_image_value) / sizeof(ArkUI_NumberValue), imageUrl};
    auto ret = nodeAPI->setAttribute(swiper, NODE_BACKGROUND_IMAGE, &background_image_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_STREQ(nodeAPI->getAttribute(swiper, NODE_BACKGROUND_IMAGE)->string, imageUrl);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_BACKGROUND_IMAGE)->value->i32, ARKUI_IMAGE_REPEAT_Y);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_BACKGROUNDIMAGE_0400
 * @tc.name: testSwiperBackgroundImage004
 * @tc.desc: testing backgroundImage for swiper with normal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperBackgroundImage004, Function | MediumTest | Level1)
{
    const char *imageUrl = "./resources/base/media/icon.png";

    ArkUI_NumberValue background_image_value[] = {{.i32 = ARKUI_IMAGE_REPEAT_XY}};
    ArkUI_AttributeItem background_image_value_item = {
        background_image_value, sizeof(background_image_value) / sizeof(ArkUI_NumberValue), imageUrl};
    auto ret = nodeAPI->setAttribute(swiper, NODE_BACKGROUND_IMAGE, &background_image_value_item);
    ASSERT_EQ(ret, SUCCESS);
    ASSERT_STREQ(nodeAPI->getAttribute(swiper, NODE_BACKGROUND_IMAGE)->string, imageUrl);
    ASSERT_EQ(nodeAPI->getAttribute(swiper, NODE_BACKGROUND_IMAGE)->value->i32, ARKUI_IMAGE_REPEAT_XY);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_BACKGROUNDIMAGE_0500
 * @tc.name: testSwiperBackgroundImage005
 * @tc.desc: testing backgroundImage for swiper with abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(SwiperCapiTest, testSwiperBackgroundImage005, Function | MediumTest | Level2)
{
    int32_t repeatValue = -1;
    const char *imageUrl = "./resources/base/media/icon.png";

    auto swiperDefault = nodeAPI->createNode(ARKUI_NODE_SWIPER);
    ArkUI_NumberValue background_image_value[] = {{.i32 = repeatValue}};
    ArkUI_AttributeItem background_image_value_item = {
        background_image_value, sizeof(background_image_value) / sizeof(ArkUI_NumberValue), imageUrl};
    auto ret = nodeAPI->setAttribute(swiperDefault, NODE_BACKGROUND_IMAGE, &background_image_value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_STRNE(nodeAPI->getAttribute(swiperDefault, NODE_BACKGROUND_IMAGE)->string, imageUrl);
    ASSERT_NE(nodeAPI->getAttribute(swiperDefault, NODE_BACKGROUND_IMAGE)->value->i32, repeatValue);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_BACKGROUNDIMAGE_0600
 * @tc.name: testSwiperBackgroundImage006
 * @tc.desc: testing backgroundImage for swiper with abnormal value
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 2
 */
HWTEST_F(SwiperCapiTest, testSwiperBackgroundImage006, Function | MediumTest | Level2)
{
    int32_t repeatValue = -1;
    const char *imageUrl = "abcdefg";

    ArkUI_NumberValue background_image_value[] = {{.i32 = repeatValue}};
    ArkUI_AttributeItem background_image_value_item = {
        background_image_value, sizeof(background_image_value) / sizeof(ArkUI_NumberValue), imageUrl};
    auto ret = nodeAPI->setAttribute(swiper, NODE_BACKGROUND_IMAGE, &background_image_value_item);
    ASSERT_EQ(ret, INVALID_PARAM);
    ASSERT_STRNE(nodeAPI->getAttribute(swiper, NODE_BACKGROUND_IMAGE)->string, imageUrl);
    ASSERT_NE(nodeAPI->getAttribute(swiper, NODE_BACKGROUND_IMAGE)->value->i32, repeatValue);
}

/*
 * @tc.number: SUB_ARKUI_CAPI_SWIPER_BACKGROUNDIMAGE_0700
 * @tc.name: testSwiperBackgroundImage007
 * @tc.desc: testing default values of backgroundImage property of the swiper
 * @tc.size: MediumTest
 * @tc.type: Function
 * @tc.level: Level 1
 */
HWTEST_F(SwiperCapiTest, testSwiperBackgroundImage007, Function | MediumTest | Level1)
{
    auto swiperDefault = nodeAPI->createNode(ARKUI_NODE_SWIPER);
    ASSERT_EQ(nodeAPI->getAttribute(swiperDefault, NODE_BACKGROUND_IMAGE)->value->i32, ARKUI_IMAGE_REPEAT_NONE);
}

} // namespace ArkUICapiTest
