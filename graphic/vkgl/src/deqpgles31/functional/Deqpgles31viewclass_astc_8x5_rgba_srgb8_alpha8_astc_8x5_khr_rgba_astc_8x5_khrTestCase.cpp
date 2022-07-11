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

#define VkglTestCase_033515_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgb"
#define VkglTestCase_033515_2 "a.srgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033515, VkglTestCase_033515_1, VkglTestCase_033515_2);

#define VkglTestCase_033516_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgb"
#define VkglTestCase_033516_2 "a.srgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033516, VkglTestCase_033516_1, VkglTestCase_033516_2);

#define VkglTestCase_033517_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rg"
#define VkglTestCase_033517_2 "ba.srgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033517, VkglTestCase_033517_1, VkglTestCase_033517_2);

#define VkglTestCase_033518_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.s"
#define VkglTestCase_033518_2 "rgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033518, VkglTestCase_033518_1, VkglTestCase_033518_2);

#define VkglTestCase_033519_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgb"
#define VkglTestCase_033519_2 "a.srgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033519, VkglTestCase_033519_1, VkglTestCase_033519_2);

#define VkglTestCase_033520_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgb"
#define VkglTestCase_033520_2 "a.srgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033520, VkglTestCase_033520_1, VkglTestCase_033520_2);

#define VkglTestCase_033521_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rg"
#define VkglTestCase_033521_2 "ba.srgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033521, VkglTestCase_033521_1, VkglTestCase_033521_2);

#define VkglTestCase_033522_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.s"
#define VkglTestCase_033522_2 "rgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033522, VkglTestCase_033522_1, VkglTestCase_033522_2);

#define VkglTestCase_033523_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rg"
#define VkglTestCase_033523_2 "ba.srgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033523, VkglTestCase_033523_1, VkglTestCase_033523_2);

#define VkglTestCase_033524_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rg"
#define VkglTestCase_033524_2 "ba.srgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033524, VkglTestCase_033524_1, VkglTestCase_033524_2);

#define VkglTestCase_033525_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_r"
#define VkglTestCase_033525_2 "gba.srgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033525, VkglTestCase_033525_1, VkglTestCase_033525_2);

#define VkglTestCase_033526_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba."
#define VkglTestCase_033526_2 "srgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033526, VkglTestCase_033526_1, VkglTestCase_033526_2);

#define VkglTestCase_033527_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.s"
#define VkglTestCase_033527_2 "rgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033527, VkglTestCase_033527_1, VkglTestCase_033527_2);

#define VkglTestCase_033528_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.s"
#define VkglTestCase_033528_2 "rgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033528, VkglTestCase_033528_1, VkglTestCase_033528_2);

#define VkglTestCase_033529_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba."
#define VkglTestCase_033529_2 "srgb8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033529, VkglTestCase_033529_1, VkglTestCase_033529_2);

#define VkglTestCase_033530_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.srgb"
#define VkglTestCase_033530_2 "8_alpha8_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033530, VkglTestCase_033530_1, VkglTestCase_033530_2);
