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

#define VkglTestCase_033195_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgb"
#define VkglTestCase_033195_2 "a.srgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033195, VkglTestCase_033195_1, VkglTestCase_033195_2);

#define VkglTestCase_033196_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgb"
#define VkglTestCase_033196_2 "a.srgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033196, VkglTestCase_033196_1, VkglTestCase_033196_2);

#define VkglTestCase_033197_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
#define VkglTestCase_033197_2 "ba.srgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033197, VkglTestCase_033197_1, VkglTestCase_033197_2);

#define VkglTestCase_033198_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.s"
#define VkglTestCase_033198_2 "rgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033198, VkglTestCase_033198_1, VkglTestCase_033198_2);

#define VkglTestCase_033199_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgb"
#define VkglTestCase_033199_2 "a.srgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033199, VkglTestCase_033199_1, VkglTestCase_033199_2);

#define VkglTestCase_033200_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgb"
#define VkglTestCase_033200_2 "a.srgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033200, VkglTestCase_033200_1, VkglTestCase_033200_2);

#define VkglTestCase_033201_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
#define VkglTestCase_033201_2 "ba.srgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033201, VkglTestCase_033201_1, VkglTestCase_033201_2);

#define VkglTestCase_033202_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.s"
#define VkglTestCase_033202_2 "rgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033202, VkglTestCase_033202_1, VkglTestCase_033202_2);

#define VkglTestCase_033203_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
#define VkglTestCase_033203_2 "ba.srgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033203, VkglTestCase_033203_1, VkglTestCase_033203_2);

#define VkglTestCase_033204_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
#define VkglTestCase_033204_2 "ba.srgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033204, VkglTestCase_033204_1, VkglTestCase_033204_2);

#define VkglTestCase_033205_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_r"
#define VkglTestCase_033205_2 "gba.srgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033205, VkglTestCase_033205_1, VkglTestCase_033205_2);

#define VkglTestCase_033206_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba."
#define VkglTestCase_033206_2 "srgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033206, VkglTestCase_033206_1, VkglTestCase_033206_2);

#define VkglTestCase_033207_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.s"
#define VkglTestCase_033207_2 "rgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033207, VkglTestCase_033207_1, VkglTestCase_033207_2);

#define VkglTestCase_033208_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.s"
#define VkglTestCase_033208_2 "rgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033208, VkglTestCase_033208_1, VkglTestCase_033208_2);

#define VkglTestCase_033209_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba."
#define VkglTestCase_033209_2 "srgb8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033209, VkglTestCase_033209_1, VkglTestCase_033209_2);

#define VkglTestCase_033210_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.srgb"
#define VkglTestCase_033210_2 "8_alpha8_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033210, VkglTestCase_033210_1, VkglTestCase_033210_2);
