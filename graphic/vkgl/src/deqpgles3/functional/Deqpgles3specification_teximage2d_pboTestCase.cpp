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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025877_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025877_2 "ification.teximage2d_pbo.rgba32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025877, VkglTestCase_025877_1, VkglTestCase_025877_2);

#define VkglTestCase_025878_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025878_2 "fication.teximage2d_pbo.rgba32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025878, VkglTestCase_025878_1, VkglTestCase_025878_2);

#define VkglTestCase_025879_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025879_2 "ification.teximage2d_pbo.rgba32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025879, VkglTestCase_025879_1, VkglTestCase_025879_2);

#define VkglTestCase_025880_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025880_2 "fication.teximage2d_pbo.rgba32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025880, VkglTestCase_025880_1, VkglTestCase_025880_2);

#define VkglTestCase_025881_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025881_2 "fication.teximage2d_pbo.rgba32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025881, VkglTestCase_025881_1, VkglTestCase_025881_2);

#define VkglTestCase_025882_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025882_2 "ication.teximage2d_pbo.rgba32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025882, VkglTestCase_025882_1, VkglTestCase_025882_2);

#define VkglTestCase_025883_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025883_2 "ification.teximage2d_pbo.rgba16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025883, VkglTestCase_025883_1, VkglTestCase_025883_2);

#define VkglTestCase_025884_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025884_2 "fication.teximage2d_pbo.rgba16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025884, VkglTestCase_025884_1, VkglTestCase_025884_2);

#define VkglTestCase_025885_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025885_2 "ification.teximage2d_pbo.rgba16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025885, VkglTestCase_025885_1, VkglTestCase_025885_2);

#define VkglTestCase_025886_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025886_2 "fication.teximage2d_pbo.rgba16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025886, VkglTestCase_025886_1, VkglTestCase_025886_2);

#define VkglTestCase_025887_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025887_2 "fication.teximage2d_pbo.rgba16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025887, VkglTestCase_025887_1, VkglTestCase_025887_2);

#define VkglTestCase_025888_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025888_2 "ication.teximage2d_pbo.rgba16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025888, VkglTestCase_025888_1, VkglTestCase_025888_2);

#define VkglTestCase_025889_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025889_2 "cification.teximage2d_pbo.rgba8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025889, VkglTestCase_025889_1, VkglTestCase_025889_2);

#define VkglTestCase_025890_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025890_2 "ification.teximage2d_pbo.rgba8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025890, VkglTestCase_025890_1, VkglTestCase_025890_2);

#define VkglTestCase_025891_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025891_2 "ification.teximage2d_pbo.rgba8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025891, VkglTestCase_025891_1, VkglTestCase_025891_2);

#define VkglTestCase_025892_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025892_2 "fication.teximage2d_pbo.rgba8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025892, VkglTestCase_025892_1, VkglTestCase_025892_2);

#define VkglTestCase_025893_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025893_2 "ification.teximage2d_pbo.rgba8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025893, VkglTestCase_025893_1, VkglTestCase_025893_2);

#define VkglTestCase_025894_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025894_2 "fication.teximage2d_pbo.rgba8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025894, VkglTestCase_025894_1, VkglTestCase_025894_2);

#define VkglTestCase_025895_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025895_2 "cation.teximage2d_pbo.srgb8_alpha8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025895, VkglTestCase_025895_1, VkglTestCase_025895_2);

#define VkglTestCase_025896_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025896_2 "ation.teximage2d_pbo.srgb8_alpha8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025896, VkglTestCase_025896_1, VkglTestCase_025896_2);

#define VkglTestCase_025897_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025897_2 "fication.teximage2d_pbo.rgb10_a2_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025897, VkglTestCase_025897_1, VkglTestCase_025897_2);

#define VkglTestCase_025898_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025898_2 "ication.teximage2d_pbo.rgb10_a2_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025898, VkglTestCase_025898_1, VkglTestCase_025898_2);

#define VkglTestCase_025899_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025899_2 "ication.teximage2d_pbo.rgb10_a2ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025899, VkglTestCase_025899_1, VkglTestCase_025899_2);

#define VkglTestCase_025900_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025900_2 "cation.teximage2d_pbo.rgb10_a2ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025900, VkglTestCase_025900_1, VkglTestCase_025900_2);

#define VkglTestCase_025901_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025901_2 "cification.teximage2d_pbo.rgba4_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025901, VkglTestCase_025901_1, VkglTestCase_025901_2);

#define VkglTestCase_025902_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025902_2 "ification.teximage2d_pbo.rgba4_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025902, VkglTestCase_025902_1, VkglTestCase_025902_2);

#define VkglTestCase_025903_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025903_2 "ification.teximage2d_pbo.rgb5_a1_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025903, VkglTestCase_025903_1, VkglTestCase_025903_2);

#define VkglTestCase_025904_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025904_2 "fication.teximage2d_pbo.rgb5_a1_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025904, VkglTestCase_025904_1, VkglTestCase_025904_2);

#define VkglTestCase_025905_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025905_2 "ication.teximage2d_pbo.rgba8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025905, VkglTestCase_025905_1, VkglTestCase_025905_2);

#define VkglTestCase_025906_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025906_2 "cation.teximage2d_pbo.rgba8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025906, VkglTestCase_025906_1, VkglTestCase_025906_2);

#define VkglTestCase_025907_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025907_2 "cification.teximage2d_pbo.rgb8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025907, VkglTestCase_025907_1, VkglTestCase_025907_2);

#define VkglTestCase_025908_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025908_2 "ification.teximage2d_pbo.rgb8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025908, VkglTestCase_025908_1, VkglTestCase_025908_2);

#define VkglTestCase_025909_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025909_2 "ification.teximage2d_pbo.rgb565_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025909, VkglTestCase_025909_1, VkglTestCase_025909_2);

#define VkglTestCase_025910_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025910_2 "fication.teximage2d_pbo.rgb565_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025910, VkglTestCase_025910_1, VkglTestCase_025910_2);

#define VkglTestCase_025911_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025911_2 "ation.teximage2d_pbo.r11f_g11f_b10f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025911, VkglTestCase_025911_1, VkglTestCase_025911_2);

#define VkglTestCase_025912_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_025912_2 "tion.teximage2d_pbo.r11f_g11f_b10f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025912, VkglTestCase_025912_1, VkglTestCase_025912_2);

#define VkglTestCase_025913_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025913_2 "ification.teximage2d_pbo.rgb32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025913, VkglTestCase_025913_1, VkglTestCase_025913_2);

#define VkglTestCase_025914_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025914_2 "fication.teximage2d_pbo.rgb32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025914, VkglTestCase_025914_1, VkglTestCase_025914_2);

#define VkglTestCase_025915_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025915_2 "ification.teximage2d_pbo.rgb32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025915, VkglTestCase_025915_1, VkglTestCase_025915_2);

#define VkglTestCase_025916_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025916_2 "fication.teximage2d_pbo.rgb32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025916, VkglTestCase_025916_1, VkglTestCase_025916_2);

#define VkglTestCase_025917_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025917_2 "ification.teximage2d_pbo.rgb32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025917, VkglTestCase_025917_1, VkglTestCase_025917_2);

#define VkglTestCase_025918_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025918_2 "fication.teximage2d_pbo.rgb32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025918, VkglTestCase_025918_1, VkglTestCase_025918_2);

#define VkglTestCase_025919_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025919_2 "ification.teximage2d_pbo.rgb16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025919, VkglTestCase_025919_1, VkglTestCase_025919_2);

#define VkglTestCase_025920_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025920_2 "fication.teximage2d_pbo.rgb16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025920, VkglTestCase_025920_1, VkglTestCase_025920_2);

#define VkglTestCase_025921_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025921_2 "ification.teximage2d_pbo.rgb16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025921, VkglTestCase_025921_1, VkglTestCase_025921_2);

#define VkglTestCase_025922_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025922_2 "fication.teximage2d_pbo.rgb16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025922, VkglTestCase_025922_1, VkglTestCase_025922_2);

#define VkglTestCase_025923_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025923_2 "ification.teximage2d_pbo.rgb16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025923, VkglTestCase_025923_1, VkglTestCase_025923_2);

#define VkglTestCase_025924_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025924_2 "fication.teximage2d_pbo.rgb16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025924, VkglTestCase_025924_1, VkglTestCase_025924_2);

#define VkglTestCase_025925_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025925_2 "ication.teximage2d_pbo.rgb8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025925, VkglTestCase_025925_1, VkglTestCase_025925_2);

#define VkglTestCase_025926_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025926_2 "cation.teximage2d_pbo.rgb8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025926, VkglTestCase_025926_1, VkglTestCase_025926_2);

#define VkglTestCase_025927_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025927_2 "cification.teximage2d_pbo.rgb8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025927, VkglTestCase_025927_1, VkglTestCase_025927_2);

#define VkglTestCase_025928_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025928_2 "ification.teximage2d_pbo.rgb8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025928, VkglTestCase_025928_1, VkglTestCase_025928_2);

#define VkglTestCase_025929_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025929_2 "ification.teximage2d_pbo.rgb8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025929, VkglTestCase_025929_1, VkglTestCase_025929_2);

#define VkglTestCase_025930_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025930_2 "fication.teximage2d_pbo.rgb8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025930, VkglTestCase_025930_1, VkglTestCase_025930_2);

#define VkglTestCase_025931_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025931_2 "cification.teximage2d_pbo.srgb8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025931, VkglTestCase_025931_1, VkglTestCase_025931_2);

#define VkglTestCase_025932_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025932_2 "ification.teximage2d_pbo.srgb8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025932, VkglTestCase_025932_1, VkglTestCase_025932_2);

#define VkglTestCase_025933_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025933_2 "ification.teximage2d_pbo.rgb9_e5_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025933, VkglTestCase_025933_1, VkglTestCase_025933_2);

#define VkglTestCase_025934_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025934_2 "fication.teximage2d_pbo.rgb9_e5_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025934, VkglTestCase_025934_1, VkglTestCase_025934_2);

#define VkglTestCase_025935_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025935_2 "cification.teximage2d_pbo.rg32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025935, VkglTestCase_025935_1, VkglTestCase_025935_2);

#define VkglTestCase_025936_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025936_2 "ification.teximage2d_pbo.rg32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025936, VkglTestCase_025936_1, VkglTestCase_025936_2);

#define VkglTestCase_025937_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025937_2 "cification.teximage2d_pbo.rg32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025937, VkglTestCase_025937_1, VkglTestCase_025937_2);

#define VkglTestCase_025938_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025938_2 "ification.teximage2d_pbo.rg32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025938, VkglTestCase_025938_1, VkglTestCase_025938_2);

#define VkglTestCase_025939_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025939_2 "ification.teximage2d_pbo.rg32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025939, VkglTestCase_025939_1, VkglTestCase_025939_2);

#define VkglTestCase_025940_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025940_2 "fication.teximage2d_pbo.rg32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025940, VkglTestCase_025940_1, VkglTestCase_025940_2);

#define VkglTestCase_025941_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025941_2 "cification.teximage2d_pbo.rg16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025941, VkglTestCase_025941_1, VkglTestCase_025941_2);

#define VkglTestCase_025942_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025942_2 "ification.teximage2d_pbo.rg16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025942, VkglTestCase_025942_1, VkglTestCase_025942_2);

#define VkglTestCase_025943_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025943_2 "cification.teximage2d_pbo.rg16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025943, VkglTestCase_025943_1, VkglTestCase_025943_2);

#define VkglTestCase_025944_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025944_2 "ification.teximage2d_pbo.rg16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025944, VkglTestCase_025944_1, VkglTestCase_025944_2);

#define VkglTestCase_025945_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025945_2 "ification.teximage2d_pbo.rg16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025945, VkglTestCase_025945_1, VkglTestCase_025945_2);

#define VkglTestCase_025946_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025946_2 "fication.teximage2d_pbo.rg16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025946, VkglTestCase_025946_1, VkglTestCase_025946_2);

#define VkglTestCase_025947_1 "dEQP-GLES3.functional.texture.sp"
#define VkglTestCase_025947_2 "ecification.teximage2d_pbo.rg8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025947, VkglTestCase_025947_1, VkglTestCase_025947_2);

#define VkglTestCase_025948_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025948_2 "cification.teximage2d_pbo.rg8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025948, VkglTestCase_025948_1, VkglTestCase_025948_2);

#define VkglTestCase_025949_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025949_2 "cification.teximage2d_pbo.rg8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025949, VkglTestCase_025949_1, VkglTestCase_025949_2);

#define VkglTestCase_025950_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025950_2 "ification.teximage2d_pbo.rg8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025950, VkglTestCase_025950_1, VkglTestCase_025950_2);

#define VkglTestCase_025951_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025951_2 "cification.teximage2d_pbo.rg8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025951, VkglTestCase_025951_1, VkglTestCase_025951_2);

#define VkglTestCase_025952_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025952_2 "ification.teximage2d_pbo.rg8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025952, VkglTestCase_025952_1, VkglTestCase_025952_2);

#define VkglTestCase_025953_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025953_2 "fication.teximage2d_pbo.rg8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025953, VkglTestCase_025953_1, VkglTestCase_025953_2);

#define VkglTestCase_025954_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025954_2 "ication.teximage2d_pbo.rg8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025954, VkglTestCase_025954_1, VkglTestCase_025954_2);

#define VkglTestCase_025955_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025955_2 "cification.teximage2d_pbo.r32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025955, VkglTestCase_025955_1, VkglTestCase_025955_2);

#define VkglTestCase_025956_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025956_2 "ification.teximage2d_pbo.r32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025956, VkglTestCase_025956_1, VkglTestCase_025956_2);

#define VkglTestCase_025957_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025957_2 "cification.teximage2d_pbo.r32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025957, VkglTestCase_025957_1, VkglTestCase_025957_2);

#define VkglTestCase_025958_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025958_2 "ification.teximage2d_pbo.r32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025958, VkglTestCase_025958_1, VkglTestCase_025958_2);

#define VkglTestCase_025959_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025959_2 "cification.teximage2d_pbo.r32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025959, VkglTestCase_025959_1, VkglTestCase_025959_2);

#define VkglTestCase_025960_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025960_2 "ification.teximage2d_pbo.r32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025960, VkglTestCase_025960_1, VkglTestCase_025960_2);

#define VkglTestCase_025961_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025961_2 "cification.teximage2d_pbo.r16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025961, VkglTestCase_025961_1, VkglTestCase_025961_2);

#define VkglTestCase_025962_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025962_2 "ification.teximage2d_pbo.r16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025962, VkglTestCase_025962_1, VkglTestCase_025962_2);

#define VkglTestCase_025963_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025963_2 "cification.teximage2d_pbo.r16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025963, VkglTestCase_025963_1, VkglTestCase_025963_2);

#define VkglTestCase_025964_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025964_2 "ification.teximage2d_pbo.r16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025964, VkglTestCase_025964_1, VkglTestCase_025964_2);

#define VkglTestCase_025965_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025965_2 "cification.teximage2d_pbo.r16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025965, VkglTestCase_025965_1, VkglTestCase_025965_2);

#define VkglTestCase_025966_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025966_2 "ification.teximage2d_pbo.r16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025966, VkglTestCase_025966_1, VkglTestCase_025966_2);

#define VkglTestCase_025967_1 "dEQP-GLES3.functional.texture.sp"
#define VkglTestCase_025967_2 "ecification.teximage2d_pbo.r8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025967, VkglTestCase_025967_1, VkglTestCase_025967_2);

#define VkglTestCase_025968_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025968_2 "cification.teximage2d_pbo.r8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025968, VkglTestCase_025968_1, VkglTestCase_025968_2);

#define VkglTestCase_025969_1 "dEQP-GLES3.functional.texture.sp"
#define VkglTestCase_025969_2 "ecification.teximage2d_pbo.r8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025969, VkglTestCase_025969_1, VkglTestCase_025969_2);

#define VkglTestCase_025970_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025970_2 "cification.teximage2d_pbo.r8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025970, VkglTestCase_025970_1, VkglTestCase_025970_2);

#define VkglTestCase_025971_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025971_2 "cification.teximage2d_pbo.r8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025971, VkglTestCase_025971_1, VkglTestCase_025971_2);

#define VkglTestCase_025972_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025972_2 "ification.teximage2d_pbo.r8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025972, VkglTestCase_025972_1, VkglTestCase_025972_2);

#define VkglTestCase_025973_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025973_2 "fication.teximage2d_pbo.r8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025973, VkglTestCase_025973_1, VkglTestCase_025973_2);

#define VkglTestCase_025974_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025974_2 "ication.teximage2d_pbo.r8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025974, VkglTestCase_025974_1, VkglTestCase_025974_2);

#define VkglTestCase_025975_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025975_2 "ication.teximage2d_pbo.rgb8_offset_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025975, VkglTestCase_025975_1, VkglTestCase_025975_2);

#define VkglTestCase_025976_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025976_2 "cation.teximage2d_pbo.rgb8_offset_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025976, VkglTestCase_025976_1, VkglTestCase_025976_2);

#define VkglTestCase_025977_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025977_2 "ation.teximage2d_pbo.rgb8_alignment_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025977, VkglTestCase_025977_1, VkglTestCase_025977_2);

#define VkglTestCase_025978_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_025978_2 "tion.teximage2d_pbo.rgb8_alignment_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025978, VkglTestCase_025978_1, VkglTestCase_025978_2);

#define VkglTestCase_025979_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025979_2 "ation.teximage2d_pbo.rgb8_row_length_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025979, VkglTestCase_025979_1, VkglTestCase_025979_2);

#define VkglTestCase_025980_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_025980_2 "tion.teximage2d_pbo.rgb8_row_length_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025980, VkglTestCase_025980_1, VkglTestCase_025980_2);

#define VkglTestCase_025981_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025981_2 "ation.teximage2d_pbo.rgb8_skip_rows_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025981, VkglTestCase_025981_1, VkglTestCase_025981_2);

#define VkglTestCase_025982_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_025982_2 "tion.teximage2d_pbo.rgb8_skip_rows_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025982, VkglTestCase_025982_1, VkglTestCase_025982_2);

#define VkglTestCase_025983_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_025983_2 "tion.teximage2d_pbo.rgb8_skip_pixels_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025983, VkglTestCase_025983_1, VkglTestCase_025983_2);

#define VkglTestCase_025984_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_025984_2 "ion.teximage2d_pbo.rgb8_skip_pixels_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025984, VkglTestCase_025984_1, VkglTestCase_025984_2);
