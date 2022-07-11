/*
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033563_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgb"
#define VkglTestCase_033563_2 "a.rgba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033563, VkglTestCase_033563_1, VkglTestCase_033563_2);

#define VkglTestCase_033564_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgb"
#define VkglTestCase_033564_2 "a.rgba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033564, VkglTestCase_033564_1, VkglTestCase_033564_2);

#define VkglTestCase_033565_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rg"
#define VkglTestCase_033565_2 "ba.rgba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033565, VkglTestCase_033565_1, VkglTestCase_033565_2);

#define VkglTestCase_033566_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.r"
#define VkglTestCase_033566_2 "gba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033566, VkglTestCase_033566_1, VkglTestCase_033566_2);

#define VkglTestCase_033567_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgb"
#define VkglTestCase_033567_2 "a.rgba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033567, VkglTestCase_033567_1, VkglTestCase_033567_2);

#define VkglTestCase_033568_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgb"
#define VkglTestCase_033568_2 "a.rgba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033568, VkglTestCase_033568_1, VkglTestCase_033568_2);

#define VkglTestCase_033569_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rg"
#define VkglTestCase_033569_2 "ba.rgba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033569, VkglTestCase_033569_1, VkglTestCase_033569_2);

#define VkglTestCase_033570_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.r"
#define VkglTestCase_033570_2 "gba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033570, VkglTestCase_033570_1, VkglTestCase_033570_2);

#define VkglTestCase_033571_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rg"
#define VkglTestCase_033571_2 "ba.rgba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033571, VkglTestCase_033571_1, VkglTestCase_033571_2);

#define VkglTestCase_033572_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rg"
#define VkglTestCase_033572_2 "ba.rgba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033572, VkglTestCase_033572_1, VkglTestCase_033572_2);

#define VkglTestCase_033573_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_r"
#define VkglTestCase_033573_2 "gba.rgba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033573, VkglTestCase_033573_1, VkglTestCase_033573_2);

#define VkglTestCase_033574_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba."
#define VkglTestCase_033574_2 "rgba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033574, VkglTestCase_033574_1, VkglTestCase_033574_2);

#define VkglTestCase_033575_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.r"
#define VkglTestCase_033575_2 "gba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033575, VkglTestCase_033575_1, VkglTestCase_033575_2);

#define VkglTestCase_033576_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.r"
#define VkglTestCase_033576_2 "gba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033576, VkglTestCase_033576_1, VkglTestCase_033576_2);

#define VkglTestCase_033577_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba."
#define VkglTestCase_033577_2 "rgba_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033577, VkglTestCase_033577_1, VkglTestCase_033577_2);

#define VkglTestCase_033578_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.rgba"
#define VkglTestCase_033578_2 "_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033578, VkglTestCase_033578_1, VkglTestCase_033578_2);
