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

#define VkglTestCase_000382_1 "KHR-GLES2.texture_3d.compres"
#define VkglTestCase_000382_2 "sed_texture.rgba_astc_4x4_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000382, VkglTestCase_000382_1, VkglTestCase_000382_2);

#define VkglTestCase_000383_1 "KHR-GLES2.texture_3d.compres"
#define VkglTestCase_000383_2 "sed_texture.rgba_astc_5x4_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000383, VkglTestCase_000383_1, VkglTestCase_000383_2);

#define VkglTestCase_000384_1 "KHR-GLES2.texture_3d.compres"
#define VkglTestCase_000384_2 "sed_texture.rgba_astc_5x5_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000384, VkglTestCase_000384_1, VkglTestCase_000384_2);

#define VkglTestCase_000385_1 "KHR-GLES2.texture_3d.compres"
#define VkglTestCase_000385_2 "sed_texture.rgba_astc_6x5_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000385, VkglTestCase_000385_1, VkglTestCase_000385_2);

#define VkglTestCase_000386_1 "KHR-GLES2.texture_3d.compres"
#define VkglTestCase_000386_2 "sed_texture.rgba_astc_6x6_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000386, VkglTestCase_000386_1, VkglTestCase_000386_2);

#define VkglTestCase_000387_1 "KHR-GLES2.texture_3d.compres"
#define VkglTestCase_000387_2 "sed_texture.rgba_astc_8x5_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000387, VkglTestCase_000387_1, VkglTestCase_000387_2);

#define VkglTestCase_000388_1 "KHR-GLES2.texture_3d.compres"
#define VkglTestCase_000388_2 "sed_texture.rgba_astc_8x6_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000388, VkglTestCase_000388_1, VkglTestCase_000388_2);

#define VkglTestCase_000389_1 "KHR-GLES2.texture_3d.compres"
#define VkglTestCase_000389_2 "sed_texture.rgba_astc_8x8_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000389, VkglTestCase_000389_1, VkglTestCase_000389_2);

#define VkglTestCase_000390_1 "KHR-GLES2.texture_3d.compress"
#define VkglTestCase_000390_2 "ed_texture.rgba_astc_10x5_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000390, VkglTestCase_000390_1, VkglTestCase_000390_2);

#define VkglTestCase_000391_1 "KHR-GLES2.texture_3d.compress"
#define VkglTestCase_000391_2 "ed_texture.rgba_astc_10x6_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000391, VkglTestCase_000391_1, VkglTestCase_000391_2);

#define VkglTestCase_000392_1 "KHR-GLES2.texture_3d.compress"
#define VkglTestCase_000392_2 "ed_texture.rgba_astc_10x8_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000392, VkglTestCase_000392_1, VkglTestCase_000392_2);

#define VkglTestCase_000393_1 "KHR-GLES2.texture_3d.compress"
#define VkglTestCase_000393_2 "ed_texture.rgba_astc_10x10_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000393, VkglTestCase_000393_1, VkglTestCase_000393_2);

#define VkglTestCase_000394_1 "KHR-GLES2.texture_3d.compress"
#define VkglTestCase_000394_2 "ed_texture.rgba_astc_12x10_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000394, VkglTestCase_000394_1, VkglTestCase_000394_2);

#define VkglTestCase_000395_1 "KHR-GLES2.texture_3d.compress"
#define VkglTestCase_000395_2 "ed_texture.rgba_astc_12x12_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000395, VkglTestCase_000395_1, VkglTestCase_000395_2);

#define VkglTestCase_000396_1 "KHR-GLES2.texture_3d.compressed_"
#define VkglTestCase_000396_2 "texture.srgb8_alpha8_astc_4x4_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000396, VkglTestCase_000396_1, VkglTestCase_000396_2);

#define VkglTestCase_000397_1 "KHR-GLES2.texture_3d.compressed_"
#define VkglTestCase_000397_2 "texture.srgb8_alpha8_astc_5x4_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000397, VkglTestCase_000397_1, VkglTestCase_000397_2);

#define VkglTestCase_000398_1 "KHR-GLES2.texture_3d.compressed_"
#define VkglTestCase_000398_2 "texture.srgb8_alpha8_astc_5x5_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000398, VkglTestCase_000398_1, VkglTestCase_000398_2);

#define VkglTestCase_000399_1 "KHR-GLES2.texture_3d.compressed_"
#define VkglTestCase_000399_2 "texture.srgb8_alpha8_astc_6x5_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000399, VkglTestCase_000399_1, VkglTestCase_000399_2);

#define VkglTestCase_000400_1 "KHR-GLES2.texture_3d.compressed_"
#define VkglTestCase_000400_2 "texture.srgb8_alpha8_astc_6x6_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000400, VkglTestCase_000400_1, VkglTestCase_000400_2);

#define VkglTestCase_000401_1 "KHR-GLES2.texture_3d.compressed_"
#define VkglTestCase_000401_2 "texture.srgb8_alpha8_astc_8x5_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000401, VkglTestCase_000401_1, VkglTestCase_000401_2);

#define VkglTestCase_000402_1 "KHR-GLES2.texture_3d.compressed_"
#define VkglTestCase_000402_2 "texture.srgb8_alpha8_astc_8x6_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000402, VkglTestCase_000402_1, VkglTestCase_000402_2);

#define VkglTestCase_000403_1 "KHR-GLES2.texture_3d.compressed_"
#define VkglTestCase_000403_2 "texture.srgb8_alpha8_astc_8x8_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000403, VkglTestCase_000403_1, VkglTestCase_000403_2);

#define VkglTestCase_000404_1 "KHR-GLES2.texture_3d.compressed_"
#define VkglTestCase_000404_2 "texture.sgb8_alpha8_astc_10x5_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000404, VkglTestCase_000404_1, VkglTestCase_000404_2);

#define VkglTestCase_000405_1 "KHR-GLES2.texture_3d.compressed_t"
#define VkglTestCase_000405_2 "exture.srgb8_alpha8_astc_10x6_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000405, VkglTestCase_000405_1, VkglTestCase_000405_2);

#define VkglTestCase_000406_1 "KHR-GLES2.texture_3d.compressed_t"
#define VkglTestCase_000406_2 "exture.srgb8_alpha8_astc_10x8_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000406, VkglTestCase_000406_1, VkglTestCase_000406_2);

#define VkglTestCase_000407_1 "KHR-GLES2.texture_3d.compressed_t"
#define VkglTestCase_000407_2 "exture.srgb8_alpha8_astc_10x10_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000407, VkglTestCase_000407_1, VkglTestCase_000407_2);

#define VkglTestCase_000408_1 "KHR-GLES2.texture_3d.compressed_t"
#define VkglTestCase_000408_2 "exture.srgb8_alpha8_astc_12x10_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000408, VkglTestCase_000408_1, VkglTestCase_000408_2);

#define VkglTestCase_000409_1 "KHR-GLES2.texture_3d.compressed_t"
#define VkglTestCase_000409_2 "exture.srgb8_alpha8_astc_12x12_khr"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000409, VkglTestCase_000409_1, VkglTestCase_000409_2);

#define VkglTestCase_000410_1 "KHR-GLES2.texture_3d.compressed_te"
#define VkglTestCase_000410_2 "xture.negative_compressed_tex_image"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000410, VkglTestCase_000410_1, VkglTestCase_000410_2);

#define VkglTestCase_000411_1 "KHR-GLES2.texture_3d.compressed_text"
#define VkglTestCase_000411_2 "ure.negative_compressed_tex_sub_image"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000411, VkglTestCase_000411_1, VkglTestCase_000411_2);
