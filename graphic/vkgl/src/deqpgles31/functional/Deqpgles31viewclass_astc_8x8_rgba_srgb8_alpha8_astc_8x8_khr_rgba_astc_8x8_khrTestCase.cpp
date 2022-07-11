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

#define VkglTestCase_033643_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgb"
#define VkglTestCase_033643_2 "a.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033643, VkglTestCase_033643_1, VkglTestCase_033643_2);

#define VkglTestCase_033644_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgb"
#define VkglTestCase_033644_2 "a.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033644, VkglTestCase_033644_1, VkglTestCase_033644_2);

#define VkglTestCase_033645_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
#define VkglTestCase_033645_2 "ba.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033645, VkglTestCase_033645_1, VkglTestCase_033645_2);

#define VkglTestCase_033646_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.s"
#define VkglTestCase_033646_2 "rgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033646, VkglTestCase_033646_1, VkglTestCase_033646_2);

#define VkglTestCase_033647_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgb"
#define VkglTestCase_033647_2 "a.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033647, VkglTestCase_033647_1, VkglTestCase_033647_2);

#define VkglTestCase_033648_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgb"
#define VkglTestCase_033648_2 "a.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033648, VkglTestCase_033648_1, VkglTestCase_033648_2);

#define VkglTestCase_033649_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
#define VkglTestCase_033649_2 "ba.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033649, VkglTestCase_033649_1, VkglTestCase_033649_2);

#define VkglTestCase_033650_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.s"
#define VkglTestCase_033650_2 "rgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033650, VkglTestCase_033650_1, VkglTestCase_033650_2);

#define VkglTestCase_033651_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
#define VkglTestCase_033651_2 "ba.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033651, VkglTestCase_033651_1, VkglTestCase_033651_2);

#define VkglTestCase_033652_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
#define VkglTestCase_033652_2 "ba.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033652, VkglTestCase_033652_1, VkglTestCase_033652_2);

#define VkglTestCase_033653_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_r"
#define VkglTestCase_033653_2 "gba.srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033653, VkglTestCase_033653_1, VkglTestCase_033653_2);

#define VkglTestCase_033654_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba."
#define VkglTestCase_033654_2 "srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033654, VkglTestCase_033654_1, VkglTestCase_033654_2);

#define VkglTestCase_033655_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.s"
#define VkglTestCase_033655_2 "rgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033655, VkglTestCase_033655_1, VkglTestCase_033655_2);

#define VkglTestCase_033656_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.s"
#define VkglTestCase_033656_2 "rgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033656, VkglTestCase_033656_1, VkglTestCase_033656_2);

#define VkglTestCase_033657_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba."
#define VkglTestCase_033657_2 "srgb8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033657, VkglTestCase_033657_1, VkglTestCase_033657_2);

#define VkglTestCase_033658_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.srgb"
#define VkglTestCase_033658_2 "8_alpha8_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033658, VkglTestCase_033658_1, VkglTestCase_033658_2);
