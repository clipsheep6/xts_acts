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

#define VkglTestCase_033963_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba"
#define VkglTestCase_033963_2 ".srgb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033963, VkglTestCase_033963_1, VkglTestCase_033963_2);

#define VkglTestCase_033964_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba"
#define VkglTestCase_033964_2 ".srgb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033964, VkglTestCase_033964_1, VkglTestCase_033964_2);

#define VkglTestCase_033965_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgb"
#define VkglTestCase_033965_2 "a.srgb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033965, VkglTestCase_033965_1, VkglTestCase_033965_2);

#define VkglTestCase_033966_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.sr"
#define VkglTestCase_033966_2 "gb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033966, VkglTestCase_033966_1, VkglTestCase_033966_2);

#define VkglTestCase_033967_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba"
#define VkglTestCase_033967_2 ".srgb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033967, VkglTestCase_033967_1, VkglTestCase_033967_2);

#define VkglTestCase_033968_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba"
#define VkglTestCase_033968_2 ".srgb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033968, VkglTestCase_033968_1, VkglTestCase_033968_2);

#define VkglTestCase_033969_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgb"
#define VkglTestCase_033969_2 "a.srgb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033969, VkglTestCase_033969_1, VkglTestCase_033969_2);

#define VkglTestCase_033970_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.sr"
#define VkglTestCase_033970_2 "gb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033970, VkglTestCase_033970_1, VkglTestCase_033970_2);

#define VkglTestCase_033971_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgb"
#define VkglTestCase_033971_2 "a.srgb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033971, VkglTestCase_033971_1, VkglTestCase_033971_2);

#define VkglTestCase_033972_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgb"
#define VkglTestCase_033972_2 "a.srgb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033972, VkglTestCase_033972_1, VkglTestCase_033972_2);

#define VkglTestCase_033973_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rg"
#define VkglTestCase_033973_2 "ba.srgb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033973, VkglTestCase_033973_1, VkglTestCase_033973_2);

#define VkglTestCase_033974_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.s"
#define VkglTestCase_033974_2 "rgb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033974, VkglTestCase_033974_1, VkglTestCase_033974_2);

#define VkglTestCase_033975_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.sr"
#define VkglTestCase_033975_2 "gb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033975, VkglTestCase_033975_1, VkglTestCase_033975_2);

#define VkglTestCase_033976_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.sr"
#define VkglTestCase_033976_2 "gb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033976, VkglTestCase_033976_1, VkglTestCase_033976_2);

#define VkglTestCase_033977_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.s"
#define VkglTestCase_033977_2 "rgb8_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033977, VkglTestCase_033977_1, VkglTestCase_033977_2);

#define VkglTestCase_033978_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.srgb8"
#define VkglTestCase_033978_2 "_alpha8_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033978, VkglTestCase_033978_1, VkglTestCase_033978_2);
