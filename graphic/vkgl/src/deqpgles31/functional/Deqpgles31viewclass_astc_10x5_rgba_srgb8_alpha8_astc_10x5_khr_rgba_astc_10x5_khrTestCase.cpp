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

#define VkglTestCase_033707_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba"
#define VkglTestCase_033707_2 ".srgb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033707, VkglTestCase_033707_1, VkglTestCase_033707_2);

#define VkglTestCase_033708_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba"
#define VkglTestCase_033708_2 ".srgb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033708, VkglTestCase_033708_1, VkglTestCase_033708_2);

#define VkglTestCase_033709_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgb"
#define VkglTestCase_033709_2 "a.srgb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033709, VkglTestCase_033709_1, VkglTestCase_033709_2);

#define VkglTestCase_033710_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.sr"
#define VkglTestCase_033710_2 "gb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033710, VkglTestCase_033710_1, VkglTestCase_033710_2);

#define VkglTestCase_033711_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba"
#define VkglTestCase_033711_2 ".srgb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033711, VkglTestCase_033711_1, VkglTestCase_033711_2);

#define VkglTestCase_033712_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba"
#define VkglTestCase_033712_2 ".srgb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033712, VkglTestCase_033712_1, VkglTestCase_033712_2);

#define VkglTestCase_033713_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgb"
#define VkglTestCase_033713_2 "a.srgb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033713, VkglTestCase_033713_1, VkglTestCase_033713_2);

#define VkglTestCase_033714_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.sr"
#define VkglTestCase_033714_2 "gb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033714, VkglTestCase_033714_1, VkglTestCase_033714_2);

#define VkglTestCase_033715_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgb"
#define VkglTestCase_033715_2 "a.srgb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033715, VkglTestCase_033715_1, VkglTestCase_033715_2);

#define VkglTestCase_033716_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgb"
#define VkglTestCase_033716_2 "a.srgb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033716, VkglTestCase_033716_1, VkglTestCase_033716_2);

#define VkglTestCase_033717_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rg"
#define VkglTestCase_033717_2 "ba.srgb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033717, VkglTestCase_033717_1, VkglTestCase_033717_2);

#define VkglTestCase_033718_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.s"
#define VkglTestCase_033718_2 "rgb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033718, VkglTestCase_033718_1, VkglTestCase_033718_2);

#define VkglTestCase_033719_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.sr"
#define VkglTestCase_033719_2 "gb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033719, VkglTestCase_033719_1, VkglTestCase_033719_2);

#define VkglTestCase_033720_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.sr"
#define VkglTestCase_033720_2 "gb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033720, VkglTestCase_033720_1, VkglTestCase_033720_2);

#define VkglTestCase_033721_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.s"
#define VkglTestCase_033721_2 "rgb8_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033721, VkglTestCase_033721_1, VkglTestCase_033721_2);

#define VkglTestCase_033722_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.srgb8"
#define VkglTestCase_033722_2 "_alpha8_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033722, VkglTestCase_033722_1, VkglTestCase_033722_2);
