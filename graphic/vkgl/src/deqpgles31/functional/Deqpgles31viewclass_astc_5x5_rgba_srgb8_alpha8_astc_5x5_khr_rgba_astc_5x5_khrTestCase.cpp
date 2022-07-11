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

#define VkglTestCase_033323_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgb"
#define VkglTestCase_033323_2 "a.srgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033323, VkglTestCase_033323_1, VkglTestCase_033323_2);

#define VkglTestCase_033324_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgb"
#define VkglTestCase_033324_2 "a.srgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033324, VkglTestCase_033324_1, VkglTestCase_033324_2);

#define VkglTestCase_033325_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rg"
#define VkglTestCase_033325_2 "ba.srgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033325, VkglTestCase_033325_1, VkglTestCase_033325_2);

#define VkglTestCase_033326_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.s"
#define VkglTestCase_033326_2 "rgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033326, VkglTestCase_033326_1, VkglTestCase_033326_2);

#define VkglTestCase_033327_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgb"
#define VkglTestCase_033327_2 "a.srgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033327, VkglTestCase_033327_1, VkglTestCase_033327_2);

#define VkglTestCase_033328_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgb"
#define VkglTestCase_033328_2 "a.srgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033328, VkglTestCase_033328_1, VkglTestCase_033328_2);

#define VkglTestCase_033329_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rg"
#define VkglTestCase_033329_2 "ba.srgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033329, VkglTestCase_033329_1, VkglTestCase_033329_2);

#define VkglTestCase_033330_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.s"
#define VkglTestCase_033330_2 "rgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033330, VkglTestCase_033330_1, VkglTestCase_033330_2);

#define VkglTestCase_033331_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rg"
#define VkglTestCase_033331_2 "ba.srgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033331, VkglTestCase_033331_1, VkglTestCase_033331_2);

#define VkglTestCase_033332_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rg"
#define VkglTestCase_033332_2 "ba.srgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033332, VkglTestCase_033332_1, VkglTestCase_033332_2);

#define VkglTestCase_033333_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_r"
#define VkglTestCase_033333_2 "gba.srgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033333, VkglTestCase_033333_1, VkglTestCase_033333_2);

#define VkglTestCase_033334_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba."
#define VkglTestCase_033334_2 "srgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033334, VkglTestCase_033334_1, VkglTestCase_033334_2);

#define VkglTestCase_033335_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.s"
#define VkglTestCase_033335_2 "rgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033335, VkglTestCase_033335_1, VkglTestCase_033335_2);

#define VkglTestCase_033336_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.s"
#define VkglTestCase_033336_2 "rgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033336, VkglTestCase_033336_1, VkglTestCase_033336_2);

#define VkglTestCase_033337_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba."
#define VkglTestCase_033337_2 "srgb8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033337, VkglTestCase_033337_1, VkglTestCase_033337_2);

#define VkglTestCase_033338_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.srgb"
#define VkglTestCase_033338_2 "8_alpha8_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033338, VkglTestCase_033338_1, VkglTestCase_033338_2);
