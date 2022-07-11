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
#include "../ActsDeqpgles30011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010988_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010988_2 "_operator.mul_assign_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010988, VkglTestCase_010988_1, VkglTestCase_010988_2);

#define VkglTestCase_010989_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010989_2 "operator.mul_assign_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010989, VkglTestCase_010989_1, VkglTestCase_010989_2);

#define VkglTestCase_010990_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010990_2 "operator.mul_assign_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010990, VkglTestCase_010990_1, VkglTestCase_010990_2);

#define VkglTestCase_010991_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010991_2 "perator.mul_assign_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010991, VkglTestCase_010991_1, VkglTestCase_010991_2);

#define VkglTestCase_010992_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010992_2 "_operator.mul_assign_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010992, VkglTestCase_010992_1, VkglTestCase_010992_2);

#define VkglTestCase_010993_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010993_2 "operator.mul_assign_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010993, VkglTestCase_010993_1, VkglTestCase_010993_2);

#define VkglTestCase_010994_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010994_2 "y_operator.mul_assign_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010994, VkglTestCase_010994_1, VkglTestCase_010994_2);

#define VkglTestCase_010995_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010995_2 "_operator.mul_assign_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010995, VkglTestCase_010995_1, VkglTestCase_010995_2);

#define VkglTestCase_010996_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010996_2 "operator.mul_assign_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010996, VkglTestCase_010996_1, VkglTestCase_010996_2);

#define VkglTestCase_010997_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010997_2 "perator.mul_assign_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010997, VkglTestCase_010997_1, VkglTestCase_010997_2);

#define VkglTestCase_010998_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010998_2 "_operator.mul_assign_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010998, VkglTestCase_010998_1, VkglTestCase_010998_2);

#define VkglTestCase_010999_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010999_2 "operator.mul_assign_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010999, VkglTestCase_010999_1, VkglTestCase_010999_2);

#define VkglTestCase_011000_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011000_2 "y_operator.mul_assign_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011000, VkglTestCase_011000_1, VkglTestCase_011000_2);

#define VkglTestCase_011001_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011001_2 "_operator.mul_assign_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011001, VkglTestCase_011001_1, VkglTestCase_011001_2);

#define VkglTestCase_011002_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011002_2 "operator.mul_assign_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011002, VkglTestCase_011002_1, VkglTestCase_011002_2);

#define VkglTestCase_011003_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011003_2 "perator.mul_assign_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011003, VkglTestCase_011003_1, VkglTestCase_011003_2);

#define VkglTestCase_011004_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011004_2 "_operator.mul_assign_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011004, VkglTestCase_011004_1, VkglTestCase_011004_2);

#define VkglTestCase_011005_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011005_2 "operator.mul_assign_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011005, VkglTestCase_011005_1, VkglTestCase_011005_2);

#define VkglTestCase_011006_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011006_2 "y_operator.mul_assign_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011006, VkglTestCase_011006_1, VkglTestCase_011006_2);

#define VkglTestCase_011007_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011007_2 "_operator.mul_assign_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011007, VkglTestCase_011007_1, VkglTestCase_011007_2);

#define VkglTestCase_011008_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011008_2 "operator.mul_assign_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011008, VkglTestCase_011008_1, VkglTestCase_011008_2);

#define VkglTestCase_011009_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011009_2 "perator.mul_assign_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011009, VkglTestCase_011009_1, VkglTestCase_011009_2);

#define VkglTestCase_011010_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011010_2 "_operator.mul_assign_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011010, VkglTestCase_011010_1, VkglTestCase_011010_2);

#define VkglTestCase_011011_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011011_2 "operator.mul_assign_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011011, VkglTestCase_011011_1, VkglTestCase_011011_2);

#define VkglTestCase_011012_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011012_2 "y_operator.mul_assign_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011012, VkglTestCase_011012_1, VkglTestCase_011012_2);

#define VkglTestCase_011013_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011013_2 "_operator.mul_assign_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011013, VkglTestCase_011013_1, VkglTestCase_011013_2);

#define VkglTestCase_011014_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011014_2 "_operator.mul_assign_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011014, VkglTestCase_011014_1, VkglTestCase_011014_2);

#define VkglTestCase_011015_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011015_2 "operator.mul_assign_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011015, VkglTestCase_011015_1, VkglTestCase_011015_2);

#define VkglTestCase_011016_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011016_2 "_operator.mul_assign_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011016, VkglTestCase_011016_1, VkglTestCase_011016_2);

#define VkglTestCase_011017_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011017_2 "operator.mul_assign_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011017, VkglTestCase_011017_1, VkglTestCase_011017_2);

#define VkglTestCase_011018_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011018_2 "operator.mul_assign_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011018, VkglTestCase_011018_1, VkglTestCase_011018_2);

#define VkglTestCase_011019_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011019_2 "perator.mul_assign_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011019, VkglTestCase_011019_1, VkglTestCase_011019_2);

#define VkglTestCase_011020_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011020_2 "_operator.mul_assign_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011020, VkglTestCase_011020_1, VkglTestCase_011020_2);

#define VkglTestCase_011021_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011021_2 "operator.mul_assign_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011021, VkglTestCase_011021_1, VkglTestCase_011021_2);

#define VkglTestCase_011022_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011022_2 "operator.mul_assign_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011022, VkglTestCase_011022_1, VkglTestCase_011022_2);

#define VkglTestCase_011023_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011023_2 "perator.mul_assign_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011023, VkglTestCase_011023_1, VkglTestCase_011023_2);

#define VkglTestCase_011024_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011024_2 "_operator.mul_assign_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011024, VkglTestCase_011024_1, VkglTestCase_011024_2);

#define VkglTestCase_011025_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011025_2 "operator.mul_assign_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011025, VkglTestCase_011025_1, VkglTestCase_011025_2);

#define VkglTestCase_011026_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011026_2 "operator.mul_assign_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011026, VkglTestCase_011026_1, VkglTestCase_011026_2);

#define VkglTestCase_011027_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011027_2 "perator.mul_assign_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011027, VkglTestCase_011027_1, VkglTestCase_011027_2);

#define VkglTestCase_011028_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011028_2 "y_operator.mul_assign_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011028, VkglTestCase_011028_1, VkglTestCase_011028_2);

#define VkglTestCase_011029_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011029_2 "_operator.mul_assign_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011029, VkglTestCase_011029_1, VkglTestCase_011029_2);

#define VkglTestCase_011030_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011030_2 "_operator.mul_assign_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011030, VkglTestCase_011030_1, VkglTestCase_011030_2);

#define VkglTestCase_011031_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011031_2 "operator.mul_assign_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011031, VkglTestCase_011031_1, VkglTestCase_011031_2);

#define VkglTestCase_011032_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011032_2 "_operator.mul_assign_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011032, VkglTestCase_011032_1, VkglTestCase_011032_2);

#define VkglTestCase_011033_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011033_2 "operator.mul_assign_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011033, VkglTestCase_011033_1, VkglTestCase_011033_2);

#define VkglTestCase_011034_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011034_2 "_operator.mul_assign_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011034, VkglTestCase_011034_1, VkglTestCase_011034_2);

#define VkglTestCase_011035_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011035_2 "operator.mul_assign_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011035, VkglTestCase_011035_1, VkglTestCase_011035_2);

#define VkglTestCase_011036_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011036_2 "y_operator.mul_assign_result.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011036, VkglTestCase_011036_1, VkglTestCase_011036_2);

#define VkglTestCase_011037_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011037_2 "_operator.mul_assign_result.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011037, VkglTestCase_011037_1, VkglTestCase_011037_2);

#define VkglTestCase_011038_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011038_2 "operator.mul_assign_result.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011038, VkglTestCase_011038_1, VkglTestCase_011038_2);

#define VkglTestCase_011039_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011039_2 "perator.mul_assign_result.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011039, VkglTestCase_011039_1, VkglTestCase_011039_2);

#define VkglTestCase_011040_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011040_2 "_operator.mul_assign_result.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011040, VkglTestCase_011040_1, VkglTestCase_011040_2);

#define VkglTestCase_011041_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011041_2 "operator.mul_assign_result.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011041, VkglTestCase_011041_1, VkglTestCase_011041_2);

#define VkglTestCase_011042_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011042_2 "operator.mul_assign_result.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011042, VkglTestCase_011042_1, VkglTestCase_011042_2);

#define VkglTestCase_011043_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011043_2 "perator.mul_assign_result.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011043, VkglTestCase_011043_1, VkglTestCase_011043_2);

#define VkglTestCase_011044_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011044_2 "_operator.mul_assign_result.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011044, VkglTestCase_011044_1, VkglTestCase_011044_2);

#define VkglTestCase_011045_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011045_2 "operator.mul_assign_result.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011045, VkglTestCase_011045_1, VkglTestCase_011045_2);

#define VkglTestCase_011046_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011046_2 "operator.mul_assign_result.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011046, VkglTestCase_011046_1, VkglTestCase_011046_2);

#define VkglTestCase_011047_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011047_2 "perator.mul_assign_result.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011047, VkglTestCase_011047_1, VkglTestCase_011047_2);

#define VkglTestCase_011048_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011048_2 "_operator.mul_assign_result.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011048, VkglTestCase_011048_1, VkglTestCase_011048_2);

#define VkglTestCase_011049_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011049_2 "operator.mul_assign_result.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011049, VkglTestCase_011049_1, VkglTestCase_011049_2);

#define VkglTestCase_011050_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011050_2 "operator.mul_assign_result.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011050, VkglTestCase_011050_1, VkglTestCase_011050_2);

#define VkglTestCase_011051_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011051_2 "perator.mul_assign_result.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011051, VkglTestCase_011051_1, VkglTestCase_011051_2);

#define VkglTestCase_011052_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011052_2 "_operator.mul_assign_result.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011052, VkglTestCase_011052_1, VkglTestCase_011052_2);

#define VkglTestCase_011053_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011053_2 "operator.mul_assign_result.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011053, VkglTestCase_011053_1, VkglTestCase_011053_2);

#define VkglTestCase_011054_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011054_2 "_operator.mul_assign_result.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011054, VkglTestCase_011054_1, VkglTestCase_011054_2);

#define VkglTestCase_011055_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011055_2 "operator.mul_assign_result.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011055, VkglTestCase_011055_1, VkglTestCase_011055_2);

#define VkglTestCase_011056_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011056_2 "_operator.mul_assign_result.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011056, VkglTestCase_011056_1, VkglTestCase_011056_2);

#define VkglTestCase_011057_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011057_2 "operator.mul_assign_result.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011057, VkglTestCase_011057_1, VkglTestCase_011057_2);

#define VkglTestCase_011058_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011058_2 "_operator.mul_assign_result.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011058, VkglTestCase_011058_1, VkglTestCase_011058_2);

#define VkglTestCase_011059_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011059_2 "operator.mul_assign_result.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011059, VkglTestCase_011059_1, VkglTestCase_011059_2);

#define VkglTestCase_011060_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011060_2 "perator.mul_assign_result.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011060, VkglTestCase_011060_1, VkglTestCase_011060_2);

#define VkglTestCase_011061_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011061_2 "erator.mul_assign_result.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011061, VkglTestCase_011061_1, VkglTestCase_011061_2);

#define VkglTestCase_011062_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011062_2 "rator.mul_assign_result.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011062, VkglTestCase_011062_1, VkglTestCase_011062_2);

#define VkglTestCase_011063_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011063_2 "ator.mul_assign_result.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011063, VkglTestCase_011063_1, VkglTestCase_011063_2);

#define VkglTestCase_011064_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011064_2 "erator.mul_assign_result.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011064, VkglTestCase_011064_1, VkglTestCase_011064_2);

#define VkglTestCase_011065_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011065_2 "rator.mul_assign_result.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011065, VkglTestCase_011065_1, VkglTestCase_011065_2);

#define VkglTestCase_011066_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011066_2 "perator.mul_assign_result.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011066, VkglTestCase_011066_1, VkglTestCase_011066_2);

#define VkglTestCase_011067_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011067_2 "erator.mul_assign_result.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011067, VkglTestCase_011067_1, VkglTestCase_011067_2);

#define VkglTestCase_011068_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011068_2 "rator.mul_assign_result.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011068, VkglTestCase_011068_1, VkglTestCase_011068_2);

#define VkglTestCase_011069_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011069_2 "ator.mul_assign_result.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011069, VkglTestCase_011069_1, VkglTestCase_011069_2);

#define VkglTestCase_011070_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011070_2 "erator.mul_assign_result.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011070, VkglTestCase_011070_1, VkglTestCase_011070_2);

#define VkglTestCase_011071_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011071_2 "rator.mul_assign_result.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011071, VkglTestCase_011071_1, VkglTestCase_011071_2);

#define VkglTestCase_011072_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011072_2 "perator.mul_assign_result.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011072, VkglTestCase_011072_1, VkglTestCase_011072_2);

#define VkglTestCase_011073_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011073_2 "erator.mul_assign_result.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011073, VkglTestCase_011073_1, VkglTestCase_011073_2);

#define VkglTestCase_011074_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011074_2 "rator.mul_assign_result.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011074, VkglTestCase_011074_1, VkglTestCase_011074_2);

#define VkglTestCase_011075_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011075_2 "ator.mul_assign_result.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011075, VkglTestCase_011075_1, VkglTestCase_011075_2);

#define VkglTestCase_011076_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011076_2 "erator.mul_assign_result.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011076, VkglTestCase_011076_1, VkglTestCase_011076_2);

#define VkglTestCase_011077_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011077_2 "rator.mul_assign_result.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011077, VkglTestCase_011077_1, VkglTestCase_011077_2);

#define VkglTestCase_011078_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011078_2 "perator.mul_assign_result.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011078, VkglTestCase_011078_1, VkglTestCase_011078_2);

#define VkglTestCase_011079_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011079_2 "erator.mul_assign_result.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011079, VkglTestCase_011079_1, VkglTestCase_011079_2);

#define VkglTestCase_011080_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011080_2 "erator.mul_assign_result.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011080, VkglTestCase_011080_1, VkglTestCase_011080_2);

#define VkglTestCase_011081_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011081_2 "rator.mul_assign_result.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011081, VkglTestCase_011081_1, VkglTestCase_011081_2);

#define VkglTestCase_011082_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011082_2 "perator.mul_assign_result.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011082, VkglTestCase_011082_1, VkglTestCase_011082_2);

#define VkglTestCase_011083_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011083_2 "erator.mul_assign_result.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011083, VkglTestCase_011083_1, VkglTestCase_011083_2);

#define VkglTestCase_011084_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011084_2 "erator.mul_assign_result.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011084, VkglTestCase_011084_1, VkglTestCase_011084_2);

#define VkglTestCase_011085_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011085_2 "rator.mul_assign_result.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011085, VkglTestCase_011085_1, VkglTestCase_011085_2);

#define VkglTestCase_011086_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011086_2 "perator.mul_assign_result.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011086, VkglTestCase_011086_1, VkglTestCase_011086_2);

#define VkglTestCase_011087_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011087_2 "erator.mul_assign_result.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011087, VkglTestCase_011087_1, VkglTestCase_011087_2);

#define VkglTestCase_011088_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011088_2 "erator.mul_assign_result.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011088, VkglTestCase_011088_1, VkglTestCase_011088_2);

#define VkglTestCase_011089_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011089_2 "rator.mul_assign_result.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011089, VkglTestCase_011089_1, VkglTestCase_011089_2);

#define VkglTestCase_011090_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011090_2 "perator.mul_assign_result.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011090, VkglTestCase_011090_1, VkglTestCase_011090_2);

#define VkglTestCase_011091_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011091_2 "erator.mul_assign_result.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011091, VkglTestCase_011091_1, VkglTestCase_011091_2);

#define VkglTestCase_011092_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011092_2 "perator.mul_assign_result.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011092, VkglTestCase_011092_1, VkglTestCase_011092_2);

#define VkglTestCase_011093_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011093_2 "erator.mul_assign_result.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011093, VkglTestCase_011093_1, VkglTestCase_011093_2);

#define VkglTestCase_011094_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011094_2 "perator.mul_assign_result.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011094, VkglTestCase_011094_1, VkglTestCase_011094_2);

#define VkglTestCase_011095_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011095_2 "erator.mul_assign_result.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011095, VkglTestCase_011095_1, VkglTestCase_011095_2);

#define VkglTestCase_011096_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011096_2 "perator.mul_assign_result.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011096, VkglTestCase_011096_1, VkglTestCase_011096_2);

#define VkglTestCase_011097_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011097_2 "erator.mul_assign_result.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011097, VkglTestCase_011097_1, VkglTestCase_011097_2);

#define VkglTestCase_011098_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011098_2 "rator.mul_assign_result.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011098, VkglTestCase_011098_1, VkglTestCase_011098_2);

#define VkglTestCase_011099_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011099_2 "ator.mul_assign_result.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011099, VkglTestCase_011099_1, VkglTestCase_011099_2);

#define VkglTestCase_011100_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011100_2 "perator.mul_assign_result.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011100, VkglTestCase_011100_1, VkglTestCase_011100_2);

#define VkglTestCase_011101_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011101_2 "erator.mul_assign_result.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011101, VkglTestCase_011101_1, VkglTestCase_011101_2);

#define VkglTestCase_011102_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011102_2 "rator.mul_assign_result.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011102, VkglTestCase_011102_1, VkglTestCase_011102_2);

#define VkglTestCase_011103_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011103_2 "ator.mul_assign_result.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011103, VkglTestCase_011103_1, VkglTestCase_011103_2);

#define VkglTestCase_011104_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011104_2 "perator.mul_assign_result.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011104, VkglTestCase_011104_1, VkglTestCase_011104_2);

#define VkglTestCase_011105_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011105_2 "erator.mul_assign_result.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011105, VkglTestCase_011105_1, VkglTestCase_011105_2);

#define VkglTestCase_011106_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011106_2 "rator.mul_assign_result.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011106, VkglTestCase_011106_1, VkglTestCase_011106_2);

#define VkglTestCase_011107_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011107_2 "ator.mul_assign_result.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011107, VkglTestCase_011107_1, VkglTestCase_011107_2);

#define VkglTestCase_011108_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011108_2 "erator.mul_assign_result.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011108, VkglTestCase_011108_1, VkglTestCase_011108_2);

#define VkglTestCase_011109_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011109_2 "rator.mul_assign_result.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011109, VkglTestCase_011109_1, VkglTestCase_011109_2);

#define VkglTestCase_011110_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011110_2 "erator.mul_assign_result.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011110, VkglTestCase_011110_1, VkglTestCase_011110_2);

#define VkglTestCase_011111_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011111_2 "rator.mul_assign_result.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011111, VkglTestCase_011111_1, VkglTestCase_011111_2);

#define VkglTestCase_011112_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011112_2 "erator.mul_assign_result.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011112, VkglTestCase_011112_1, VkglTestCase_011112_2);

#define VkglTestCase_011113_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011113_2 "rator.mul_assign_result.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_011113, VkglTestCase_011113_1, VkglTestCase_011113_2);
