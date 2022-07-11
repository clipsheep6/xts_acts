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
#include "../Khrgles2BaseFunc.h"
#include "../ActsKhrgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000021_1 "KHR-GLES2.texture_3d.filt"
#define VkglTestCase_000021_2 "ering.sizes.4x8x8_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000021, VkglTestCase_000021_1, VkglTestCase_000021_2);

#define VkglTestCase_000022_1 "KHR-GLES2.texture_3d.fil"
#define VkglTestCase_000022_2 "tering.sizes.4x8x8_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000022, VkglTestCase_000022_1, VkglTestCase_000022_2);

#define VkglTestCase_000023_1 "KHR-GLES2.texture_3d.filtering.s"
#define VkglTestCase_000023_2 "izes.4x8x8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000023, VkglTestCase_000023_1, VkglTestCase_000023_2);

#define VkglTestCase_000024_1 "KHR-GLES2.texture_3d.filtering.s"
#define VkglTestCase_000024_2 "izes.4x8x8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000024, VkglTestCase_000024_1, VkglTestCase_000024_2);

#define VkglTestCase_000025_1 "KHR-GLES2.texture_3d.filtering.s"
#define VkglTestCase_000025_2 "izes.4x8x8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000025, VkglTestCase_000025_1, VkglTestCase_000025_2);

#define VkglTestCase_000026_1 "KHR-GLES2.texture_3d.filtering."
#define VkglTestCase_000026_2 "sizes.4x8x8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000026, VkglTestCase_000026_1, VkglTestCase_000026_2);

#define VkglTestCase_000027_1 "KHR-GLES2.texture_3d.filte"
#define VkglTestCase_000027_2 "ring.sizes.32x64x16_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000027, VkglTestCase_000027_1, VkglTestCase_000027_2);

#define VkglTestCase_000028_1 "KHR-GLES2.texture_3d.filte"
#define VkglTestCase_000028_2 "ring.sizes.32x64x16_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000028, VkglTestCase_000028_1, VkglTestCase_000028_2);

#define VkglTestCase_000029_1 "KHR-GLES2.texture_3d.filtering.siz"
#define VkglTestCase_000029_2 "es.32x64x16_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000029, VkglTestCase_000029_1, VkglTestCase_000029_2);

#define VkglTestCase_000030_1 "KHR-GLES2.texture_3d.filtering.si"
#define VkglTestCase_000030_2 "zes.32x64x16_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000030, VkglTestCase_000030_1, VkglTestCase_000030_2);

#define VkglTestCase_000031_1 "KHR-GLES2.texture_3d.filtering.si"
#define VkglTestCase_000031_2 "zes.32x64x16_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000031, VkglTestCase_000031_1, VkglTestCase_000031_2);

#define VkglTestCase_000032_1 "KHR-GLES2.texture_3d.filtering.si"
#define VkglTestCase_000032_2 "zes.32x64x16_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000032, VkglTestCase_000032_1, VkglTestCase_000032_2);

#define VkglTestCase_000033_1 "KHR-GLES2.texture_3d.filter"
#define VkglTestCase_000033_2 "ing.sizes.128x32x64_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000033, VkglTestCase_000033_1, VkglTestCase_000033_2);

#define VkglTestCase_000034_1 "KHR-GLES2.texture_3d.filte"
#define VkglTestCase_000034_2 "ring.sizes.128x32x64_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000034, VkglTestCase_000034_1, VkglTestCase_000034_2);

#define VkglTestCase_000035_1 "KHR-GLES2.texture_3d.filtering.siz"
#define VkglTestCase_000035_2 "es.128x32x64_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000035, VkglTestCase_000035_1, VkglTestCase_000035_2);

#define VkglTestCase_000036_1 "KHR-GLES2.texture_3d.filtering.siz"
#define VkglTestCase_000036_2 "es.128x32x64_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000036, VkglTestCase_000036_1, VkglTestCase_000036_2);

#define VkglTestCase_000037_1 "KHR-GLES2.texture_3d.filtering.siz"
#define VkglTestCase_000037_2 "es.128x32x64_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000037, VkglTestCase_000037_1, VkglTestCase_000037_2);

#define VkglTestCase_000038_1 "KHR-GLES2.texture_3d.filtering.si"
#define VkglTestCase_000038_2 "zes.128x32x64_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000038, VkglTestCase_000038_1, VkglTestCase_000038_2);

#define VkglTestCase_000039_1 "KHR-GLES2.texture_3d.filt"
#define VkglTestCase_000039_2 "ering.sizes.3x7x5_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000039, VkglTestCase_000039_1, VkglTestCase_000039_2);

#define VkglTestCase_000040_1 "KHR-GLES2.texture_3d.fil"
#define VkglTestCase_000040_2 "tering.sizes.3x7x5_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000040, VkglTestCase_000040_1, VkglTestCase_000040_2);

#define VkglTestCase_000041_1 "KHR-GLES2.texture_3d.filtering.s"
#define VkglTestCase_000041_2 "izes.3x7x5_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000041, VkglTestCase_000041_1, VkglTestCase_000041_2);

#define VkglTestCase_000042_1 "KHR-GLES2.texture_3d.filtering.s"
#define VkglTestCase_000042_2 "izes.3x7x5_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000042, VkglTestCase_000042_1, VkglTestCase_000042_2);

#define VkglTestCase_000043_1 "KHR-GLES2.texture_3d.filtering.s"
#define VkglTestCase_000043_2 "izes.3x7x5_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000043, VkglTestCase_000043_1, VkglTestCase_000043_2);

#define VkglTestCase_000044_1 "KHR-GLES2.texture_3d.filtering."
#define VkglTestCase_000044_2 "sizes.3x7x5_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000044, VkglTestCase_000044_1, VkglTestCase_000044_2);

#define VkglTestCase_000045_1 "KHR-GLES2.texture_3d.filte"
#define VkglTestCase_000045_2 "ring.sizes.63x63x63_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000045, VkglTestCase_000045_1, VkglTestCase_000045_2);

#define VkglTestCase_000046_1 "KHR-GLES2.texture_3d.filte"
#define VkglTestCase_000046_2 "ring.sizes.63x63x63_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000046, VkglTestCase_000046_1, VkglTestCase_000046_2);

#define VkglTestCase_000047_1 "KHR-GLES2.texture_3d.filtering.siz"
#define VkglTestCase_000047_2 "es.63x63x63_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000047, VkglTestCase_000047_1, VkglTestCase_000047_2);

#define VkglTestCase_000048_1 "KHR-GLES2.texture_3d.filtering.si"
#define VkglTestCase_000048_2 "zes.63x63x63_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000048, VkglTestCase_000048_1, VkglTestCase_000048_2);

#define VkglTestCase_000049_1 "KHR-GLES2.texture_3d.filtering.si"
#define VkglTestCase_000049_2 "zes.63x63x63_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000049, VkglTestCase_000049_1, VkglTestCase_000049_2);

#define VkglTestCase_000050_1 "KHR-GLES2.texture_3d.filtering.si"
#define VkglTestCase_000050_2 "zes.63x63x63_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000050, VkglTestCase_000050_1, VkglTestCase_000050_2);
