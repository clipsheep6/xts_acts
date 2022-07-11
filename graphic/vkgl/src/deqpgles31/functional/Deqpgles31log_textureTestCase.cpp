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
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018892_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018892_2 "e_coverage.log.texture.activetexture"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018892, VkglTestCase_018892_1, VkglTestCase_018892_2);

#define VkglTestCase_018893_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_018893_2 "ve_coverage.log.texture.bindtexture"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018893, VkglTestCase_018893_1, VkglTestCase_018893_2);

#define VkglTestCase_018894_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018894_2 "log.texture.compressedteximage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018894, VkglTestCase_018894_1, VkglTestCase_018894_2);

#define VkglTestCase_018895_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018895_2 "log.texture.compressedteximage2d_invalid_format"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018895, VkglTestCase_018895_1, VkglTestCase_018895_2);

#define VkglTestCase_018896_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018896_2 "ge.log.texture.compressedteximage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018896, VkglTestCase_018896_1, VkglTestCase_018896_2);

#define VkglTestCase_018897_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018897_2 "ge.log.texture.compressedteximage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018897, VkglTestCase_018897_1, VkglTestCase_018897_2);

#define VkglTestCase_018898_1 "dEQP-GLES31.functional.debug.negative_coverage.l"
#define VkglTestCase_018898_2 "og.texture.compressedteximage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018898, VkglTestCase_018898_1, VkglTestCase_018898_2);

#define VkglTestCase_018899_1 "dEQP-GLES31.functional.debug.negative_coverage.l"
#define VkglTestCase_018899_2 "og.texture.compressedteximage2d_max_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018899, VkglTestCase_018899_1, VkglTestCase_018899_2);

#define VkglTestCase_018900_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018900_2 "log.texture.compressedteximage2d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018900, VkglTestCase_018900_1, VkglTestCase_018900_2);

#define VkglTestCase_018901_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018901_2 ".log.texture.compressedteximage2d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018901, VkglTestCase_018901_1, VkglTestCase_018901_2);

#define VkglTestCase_018902_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018902_2 "ge.log.texture.compressedteximage2d_neg_size"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018902, VkglTestCase_018902_1, VkglTestCase_018902_2);

#define VkglTestCase_018903_1 "dEQP-GLES31.functional.debug.negative_coverage.log"
#define VkglTestCase_018903_2 ".texture.compressedteximage2d_invalid_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018903, VkglTestCase_018903_1, VkglTestCase_018903_2);

#define VkglTestCase_018904_1 "dEQP-GLES31.functional.debug.negative_coverage.log"
#define VkglTestCase_018904_2 ".texture.compressedteximage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018904, VkglTestCase_018904_1, VkglTestCase_018904_2);

#define VkglTestCase_018905_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018905_2 "ge.log.texture.copyteximage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018905, VkglTestCase_018905_1, VkglTestCase_018905_2);

#define VkglTestCase_018906_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018906_2 "ge.log.texture.copyteximage2d_invalid_format"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018906, VkglTestCase_018906_1, VkglTestCase_018906_2);

#define VkglTestCase_018907_1 "dEQP-GLES31.functional.debug.negative_coverage.lo"
#define VkglTestCase_018907_2 "g.texture.copyteximage2d_inequal_width_height_cube"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018907, VkglTestCase_018907_1, VkglTestCase_018907_2);

#define VkglTestCase_018908_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018908_2 "erage.log.texture.copyteximage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018908, VkglTestCase_018908_1, VkglTestCase_018908_2);

#define VkglTestCase_018909_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018909_2 "erage.log.texture.copyteximage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018909, VkglTestCase_018909_1, VkglTestCase_018909_2);

#define VkglTestCase_018910_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018910_2 "e.log.texture.copyteximage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018910, VkglTestCase_018910_1, VkglTestCase_018910_2);

#define VkglTestCase_018911_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018911_2 "e.log.texture.copyteximage2d_max_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018911, VkglTestCase_018911_1, VkglTestCase_018911_2);

#define VkglTestCase_018912_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018912_2 "ge.log.texture.copyteximage2d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018912, VkglTestCase_018912_1, VkglTestCase_018912_2);

#define VkglTestCase_018913_1 "dEQP-GLES31.functional.debug.negative_coverage.l"
#define VkglTestCase_018913_2 "og.texture.copyteximage2d_incomplete_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018913, VkglTestCase_018913_1, VkglTestCase_018913_2);

#define VkglTestCase_018914_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018914_2 "e.log.texture.copytexsubimage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018914, VkglTestCase_018914_1, VkglTestCase_018914_2);

#define VkglTestCase_018915_1 "dEQP-GLES31.functional.debug.negative_coverage.l"
#define VkglTestCase_018915_2 "og.texture.copytexsubimage2d_read_buffer_is_none"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018915, VkglTestCase_018915_1, VkglTestCase_018915_2);

#define VkglTestCase_018916_1 "dEQP-GLES31.functional.debug.negative_coverage.lo"
#define VkglTestCase_018916_2 "g.texture.copytexsubimage2d_texture_internalformat"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018916, VkglTestCase_018916_1, VkglTestCase_018916_2);

#define VkglTestCase_018917_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018917_2 "age.log.texture.copytexsubimage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018917, VkglTestCase_018917_1, VkglTestCase_018917_2);

#define VkglTestCase_018918_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018918_2 "age.log.texture.copytexsubimage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018918, VkglTestCase_018918_1, VkglTestCase_018918_2);

#define VkglTestCase_018919_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018919_2 "age.log.texture.copytexsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018919, VkglTestCase_018919_1, VkglTestCase_018919_2);

#define VkglTestCase_018920_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018920_2 "e.log.texture.copytexsubimage2d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018920, VkglTestCase_018920_1, VkglTestCase_018920_2);

#define VkglTestCase_018921_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018921_2 ".log.texture.copytexsubimage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018921, VkglTestCase_018921_1, VkglTestCase_018921_2);

#define VkglTestCase_018922_1 "dEQP-GLES31.functional.debug.negative_coverage.lo"
#define VkglTestCase_018922_2 "g.texture.copytexsubimage2d_incomplete_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018922, VkglTestCase_018922_1, VkglTestCase_018922_2);

#define VkglTestCase_018923_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018923_2 "e_coverage.log.texture.deletetextures"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018923, VkglTestCase_018923_1, VkglTestCase_018923_2);

#define VkglTestCase_018924_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018924_2 "e_coverage.log.texture.generatemipmap"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018924, VkglTestCase_018924_1, VkglTestCase_018924_2);

#define VkglTestCase_018925_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_018925_2 "ve_coverage.log.texture.gentextures"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018925, VkglTestCase_018925_1, VkglTestCase_018925_2);

#define VkglTestCase_018926_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_018926_2 "ve_coverage.log.texture.pixelstorei"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018926, VkglTestCase_018926_1, VkglTestCase_018926_2);

#define VkglTestCase_018927_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_018927_2 "ive_coverage.log.texture.teximage2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018927, VkglTestCase_018927_1, VkglTestCase_018927_2);

#define VkglTestCase_018928_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018928_2 "log.texture.teximage2d_inequal_width_height_cube"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018928, VkglTestCase_018928_1, VkglTestCase_018928_2);

#define VkglTestCase_018929_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018929_2 "overage.log.texture.teximage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018929, VkglTestCase_018929_1, VkglTestCase_018929_2);

#define VkglTestCase_018930_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018930_2 "overage.log.texture.teximage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018930, VkglTestCase_018930_1, VkglTestCase_018930_2);

#define VkglTestCase_018931_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018931_2 "age.log.texture.teximage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018931, VkglTestCase_018931_1, VkglTestCase_018931_2);

#define VkglTestCase_018932_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018932_2 "age.log.texture.teximage2d_max_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018932, VkglTestCase_018932_1, VkglTestCase_018932_2);

#define VkglTestCase_018933_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018933_2 "rage.log.texture.teximage2d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018933, VkglTestCase_018933_1, VkglTestCase_018933_2);

#define VkglTestCase_018934_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018934_2 "e.log.texture.teximage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018934, VkglTestCase_018934_1, VkglTestCase_018934_2);

#define VkglTestCase_018935_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018935_2 "e_coverage.log.texture.texsubimage2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018935, VkglTestCase_018935_1, VkglTestCase_018935_2);

#define VkglTestCase_018936_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018936_2 "erage.log.texture.texsubimage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018936, VkglTestCase_018936_1, VkglTestCase_018936_2);

#define VkglTestCase_018937_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018937_2 "erage.log.texture.texsubimage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018937, VkglTestCase_018937_1, VkglTestCase_018937_2);

#define VkglTestCase_018938_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018938_2 "erage.log.texture.texsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018938, VkglTestCase_018938_1, VkglTestCase_018938_2);

#define VkglTestCase_018939_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018939_2 "age.log.texture.texsubimage2d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018939, VkglTestCase_018939_1, VkglTestCase_018939_2);

#define VkglTestCase_018940_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018940_2 "ge.log.texture.texsubimage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018940, VkglTestCase_018940_1, VkglTestCase_018940_2);

#define VkglTestCase_018941_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018941_2 "log.texture.texsubimage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018941, VkglTestCase_018941_1, VkglTestCase_018941_2);

#define VkglTestCase_018942_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018942_2 "e_coverage.log.texture.texparameteri"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018942, VkglTestCase_018942_1, VkglTestCase_018942_2);

#define VkglTestCase_018943_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018943_2 "e_coverage.log.texture.texparameterf"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018943, VkglTestCase_018943_1, VkglTestCase_018943_2);

#define VkglTestCase_018944_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018944_2 "e_coverage.log.texture.texparameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018944, VkglTestCase_018944_1, VkglTestCase_018944_2);

#define VkglTestCase_018945_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018945_2 "e_coverage.log.texture.texparameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018945, VkglTestCase_018945_1, VkglTestCase_018945_2);

#define VkglTestCase_018946_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018946_2 "_coverage.log.texture.texparameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018946, VkglTestCase_018946_1, VkglTestCase_018946_2);

#define VkglTestCase_018947_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018947_2 "_coverage.log.texture.texparameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018947, VkglTestCase_018947_1, VkglTestCase_018947_2);

#define VkglTestCase_018948_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018948_2 "erage.log.texture.compressedtexsubimage2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018948, VkglTestCase_018948_1, VkglTestCase_018948_2);

#define VkglTestCase_018949_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018949_2 ".log.texture.compressedtexsubimage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018949, VkglTestCase_018949_1, VkglTestCase_018949_2);

#define VkglTestCase_018950_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018950_2 ".log.texture.compressedtexsubimage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018950, VkglTestCase_018950_1, VkglTestCase_018950_2);

#define VkglTestCase_018951_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018951_2 ".log.texture.compressedtexsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018951, VkglTestCase_018951_1, VkglTestCase_018951_2);

#define VkglTestCase_018952_1 "dEQP-GLES31.functional.debug.negative_coverage.l"
#define VkglTestCase_018952_2 "og.texture.compressedtexsubimage2d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018952, VkglTestCase_018952_1, VkglTestCase_018952_2);

#define VkglTestCase_018953_1 "dEQP-GLES31.functional.debug.negative_coverage.lo"
#define VkglTestCase_018953_2 "g.texture.compressedtexsubimage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018953, VkglTestCase_018953_1, VkglTestCase_018953_2);

#define VkglTestCase_018954_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018954_2 "log.texture.compressedtexsubimage2d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018954, VkglTestCase_018954_1, VkglTestCase_018954_2);

#define VkglTestCase_018955_1 "dEQP-GLES31.functional.debug.negative_coverage.log.t"
#define VkglTestCase_018955_2 "exture.compressedtexsubimage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018955, VkglTestCase_018955_1, VkglTestCase_018955_2);

#define VkglTestCase_018956_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_018956_2 "ive_coverage.log.texture.teximage3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018956, VkglTestCase_018956_1, VkglTestCase_018956_2);

#define VkglTestCase_018957_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018957_2 "overage.log.texture.teximage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018957, VkglTestCase_018957_1, VkglTestCase_018957_2);

#define VkglTestCase_018958_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018958_2 "overage.log.texture.teximage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018958, VkglTestCase_018958_1, VkglTestCase_018958_2);

#define VkglTestCase_018959_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018959_2 ".log.texture.teximage3d_neg_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018959, VkglTestCase_018959_1, VkglTestCase_018959_2);

#define VkglTestCase_018960_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018960_2 ".log.texture.teximage3d_max_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018960, VkglTestCase_018960_1, VkglTestCase_018960_2);

#define VkglTestCase_018961_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018961_2 "rage.log.texture.teximage3d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018961, VkglTestCase_018961_1, VkglTestCase_018961_2);

#define VkglTestCase_018962_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018962_2 "e.log.texture.teximage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018962, VkglTestCase_018962_1, VkglTestCase_018962_2);

#define VkglTestCase_018963_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018963_2 "e_coverage.log.texture.texsubimage3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018963, VkglTestCase_018963_1, VkglTestCase_018963_2);

#define VkglTestCase_018964_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018964_2 "erage.log.texture.texsubimage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018964, VkglTestCase_018964_1, VkglTestCase_018964_2);

#define VkglTestCase_018965_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018965_2 "erage.log.texture.texsubimage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018965, VkglTestCase_018965_1, VkglTestCase_018965_2);

#define VkglTestCase_018966_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018966_2 "erage.log.texture.texsubimage3d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018966, VkglTestCase_018966_1, VkglTestCase_018966_2);

#define VkglTestCase_018967_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018967_2 "age.log.texture.texsubimage3d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018967, VkglTestCase_018967_1, VkglTestCase_018967_2);

#define VkglTestCase_018968_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018968_2 "ge.log.texture.texsubimage3d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018968, VkglTestCase_018968_1, VkglTestCase_018968_2);

#define VkglTestCase_018969_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018969_2 "log.texture.texsubimage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018969, VkglTestCase_018969_1, VkglTestCase_018969_2);

#define VkglTestCase_018970_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018970_2 "coverage.log.texture.copytexsubimage3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018970, VkglTestCase_018970_1, VkglTestCase_018970_2);

#define VkglTestCase_018971_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018971_2 "age.log.texture.copytexsubimage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018971, VkglTestCase_018971_1, VkglTestCase_018971_2);

#define VkglTestCase_018972_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018972_2 "age.log.texture.copytexsubimage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018972, VkglTestCase_018972_1, VkglTestCase_018972_2);

#define VkglTestCase_018973_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018973_2 "age.log.texture.copytexsubimage3d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018973, VkglTestCase_018973_1, VkglTestCase_018973_2);

#define VkglTestCase_018974_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018974_2 "e.log.texture.copytexsubimage3d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018974, VkglTestCase_018974_1, VkglTestCase_018974_2);

#define VkglTestCase_018975_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018975_2 ".log.texture.copytexsubimage3d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018975, VkglTestCase_018975_1, VkglTestCase_018975_2);

#define VkglTestCase_018976_1 "dEQP-GLES31.functional.debug.negative_coverage.lo"
#define VkglTestCase_018976_2 "g.texture.copytexsubimage3d_incomplete_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018976, VkglTestCase_018976_1, VkglTestCase_018976_2);

#define VkglTestCase_018977_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018977_2 "overage.log.texture.compressedteximage3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018977, VkglTestCase_018977_1, VkglTestCase_018977_2);

#define VkglTestCase_018978_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018978_2 "ge.log.texture.compressedteximage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018978, VkglTestCase_018978_1, VkglTestCase_018978_2);

#define VkglTestCase_018979_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018979_2 "ge.log.texture.compressedteximage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018979, VkglTestCase_018979_1, VkglTestCase_018979_2);

#define VkglTestCase_018980_1 "dEQP-GLES31.functional.debug.negative_coverage.log."
#define VkglTestCase_018980_2 "texture.compressedteximage3d_neg_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018980, VkglTestCase_018980_1, VkglTestCase_018980_2);

#define VkglTestCase_018981_1 "dEQP-GLES31.functional.debug.negative_coverage.log."
#define VkglTestCase_018981_2 "texture.compressedteximage3d_max_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018981, VkglTestCase_018981_1, VkglTestCase_018981_2);

#define VkglTestCase_018982_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018982_2 "log.texture.compressedteximage3d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018982, VkglTestCase_018982_1, VkglTestCase_018982_2);

#define VkglTestCase_018983_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018983_2 ".log.texture.compressedteximage3d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018983, VkglTestCase_018983_1, VkglTestCase_018983_2);

#define VkglTestCase_018984_1 "dEQP-GLES31.functional.debug.negative_coverage.log"
#define VkglTestCase_018984_2 ".texture.compressedteximage3d_invalid_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018984, VkglTestCase_018984_1, VkglTestCase_018984_2);

#define VkglTestCase_018985_1 "dEQP-GLES31.functional.debug.negative_coverage.log"
#define VkglTestCase_018985_2 ".texture.compressedteximage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018985, VkglTestCase_018985_1, VkglTestCase_018985_2);

#define VkglTestCase_018986_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018986_2 "erage.log.texture.compressedtexsubimage3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018986, VkglTestCase_018986_1, VkglTestCase_018986_2);

#define VkglTestCase_018987_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018987_2 ".log.texture.compressedtexsubimage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018987, VkglTestCase_018987_1, VkglTestCase_018987_2);

#define VkglTestCase_018988_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018988_2 ".log.texture.compressedtexsubimage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018988, VkglTestCase_018988_1, VkglTestCase_018988_2);

#define VkglTestCase_018989_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018989_2 ".log.texture.compressedtexsubimage3d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018989, VkglTestCase_018989_1, VkglTestCase_018989_2);

#define VkglTestCase_018990_1 "dEQP-GLES31.functional.debug.negative_coverage.l"
#define VkglTestCase_018990_2 "og.texture.compressedtexsubimage3d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018990, VkglTestCase_018990_1, VkglTestCase_018990_2);

#define VkglTestCase_018991_1 "dEQP-GLES31.functional.debug.negative_coverage.log.t"
#define VkglTestCase_018991_2 "exture.compressedtexsubimage3d_neg_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018991, VkglTestCase_018991_1, VkglTestCase_018991_2);

#define VkglTestCase_018992_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018992_2 "log.texture.compressedtexsubimage3d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018992, VkglTestCase_018992_1, VkglTestCase_018992_2);

#define VkglTestCase_018993_1 "dEQP-GLES31.functional.debug.negative_coverage.log.t"
#define VkglTestCase_018993_2 "exture.compressedtexsubimage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018993, VkglTestCase_018993_1, VkglTestCase_018993_2);

#define VkglTestCase_018994_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_018994_2 "ve_coverage.log.texture.texstorage2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018994, VkglTestCase_018994_1, VkglTestCase_018994_2);

#define VkglTestCase_018995_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018995_2 "age.log.texture.texstorage2d_invalid_binding"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018995, VkglTestCase_018995_1, VkglTestCase_018995_2);

#define VkglTestCase_018996_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018996_2 "age.log.texture.texstorage2d_invalid_levels"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018996, VkglTestCase_018996_1, VkglTestCase_018996_2);

#define VkglTestCase_018997_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_018997_2 "ve_coverage.log.texture.texstorage3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018997, VkglTestCase_018997_1, VkglTestCase_018997_2);

#define VkglTestCase_018998_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018998_2 "age.log.texture.texstorage3d_invalid_binding"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018998, VkglTestCase_018998_1, VkglTestCase_018998_2);

#define VkglTestCase_018999_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018999_2 "age.log.texture.texstorage3d_invalid_levels"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018999, VkglTestCase_018999_1, VkglTestCase_018999_2);

#define VkglTestCase_019000_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019000_2 "rage.log.texture.srgb_decode_texparameteri"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_019000, VkglTestCase_019000_1, VkglTestCase_019000_2);

#define VkglTestCase_019001_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019001_2 "rage.log.texture.srgb_decode_texparameterf"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_019001, VkglTestCase_019001_1, VkglTestCase_019001_2);

#define VkglTestCase_019002_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019002_2 "rage.log.texture.srgb_decode_texparameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_019002, VkglTestCase_019002_1, VkglTestCase_019002_2);

#define VkglTestCase_019003_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019003_2 "rage.log.texture.srgb_decode_texparameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_019003, VkglTestCase_019003_1, VkglTestCase_019003_2);

#define VkglTestCase_019004_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019004_2 "age.log.texture.srgb_decode_texparameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_019004, VkglTestCase_019004_1, VkglTestCase_019004_2);

#define VkglTestCase_019005_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019005_2 "age.log.texture.srgb_decode_texparameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_019005, VkglTestCase_019005_1, VkglTestCase_019005_2);
