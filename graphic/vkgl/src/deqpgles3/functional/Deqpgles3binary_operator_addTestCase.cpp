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
#include "../ActsDeqpgles30009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008024_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008024_2 ".binary_operator.add.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008024, VkglTestCase_008024_1, VkglTestCase_008024_2);

#define VkglTestCase_008025_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008025_2 "binary_operator.add.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008025, VkglTestCase_008025_1, VkglTestCase_008025_2);

#define VkglTestCase_008026_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008026_2 "binary_operator.add.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008026, VkglTestCase_008026_1, VkglTestCase_008026_2);

#define VkglTestCase_008027_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008027_2 "inary_operator.add.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008027, VkglTestCase_008027_1, VkglTestCase_008027_2);

#define VkglTestCase_008028_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008028_2 ".binary_operator.add.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008028, VkglTestCase_008028_1, VkglTestCase_008028_2);

#define VkglTestCase_008029_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008029_2 "binary_operator.add.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008029, VkglTestCase_008029_1, VkglTestCase_008029_2);

#define VkglTestCase_008030_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008030_2 "r.binary_operator.add.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008030, VkglTestCase_008030_1, VkglTestCase_008030_2);

#define VkglTestCase_008031_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008031_2 ".binary_operator.add.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008031, VkglTestCase_008031_1, VkglTestCase_008031_2);

#define VkglTestCase_008032_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008032_2 "binary_operator.add.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008032, VkglTestCase_008032_1, VkglTestCase_008032_2);

#define VkglTestCase_008033_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008033_2 "inary_operator.add.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008033, VkglTestCase_008033_1, VkglTestCase_008033_2);

#define VkglTestCase_008034_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008034_2 ".binary_operator.add.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008034, VkglTestCase_008034_1, VkglTestCase_008034_2);

#define VkglTestCase_008035_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008035_2 "binary_operator.add.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008035, VkglTestCase_008035_1, VkglTestCase_008035_2);

#define VkglTestCase_008036_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008036_2 "r.binary_operator.add.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008036, VkglTestCase_008036_1, VkglTestCase_008036_2);

#define VkglTestCase_008037_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008037_2 ".binary_operator.add.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008037, VkglTestCase_008037_1, VkglTestCase_008037_2);

#define VkglTestCase_008038_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008038_2 "binary_operator.add.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008038, VkglTestCase_008038_1, VkglTestCase_008038_2);

#define VkglTestCase_008039_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008039_2 "inary_operator.add.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008039, VkglTestCase_008039_1, VkglTestCase_008039_2);

#define VkglTestCase_008040_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008040_2 ".binary_operator.add.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008040, VkglTestCase_008040_1, VkglTestCase_008040_2);

#define VkglTestCase_008041_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008041_2 "binary_operator.add.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008041, VkglTestCase_008041_1, VkglTestCase_008041_2);

#define VkglTestCase_008042_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008042_2 "r.binary_operator.add.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008042, VkglTestCase_008042_1, VkglTestCase_008042_2);

#define VkglTestCase_008043_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008043_2 ".binary_operator.add.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008043, VkglTestCase_008043_1, VkglTestCase_008043_2);

#define VkglTestCase_008044_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008044_2 "binary_operator.add.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008044, VkglTestCase_008044_1, VkglTestCase_008044_2);

#define VkglTestCase_008045_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008045_2 "inary_operator.add.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008045, VkglTestCase_008045_1, VkglTestCase_008045_2);

#define VkglTestCase_008046_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008046_2 ".binary_operator.add.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008046, VkglTestCase_008046_1, VkglTestCase_008046_2);

#define VkglTestCase_008047_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008047_2 "binary_operator.add.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008047, VkglTestCase_008047_1, VkglTestCase_008047_2);

#define VkglTestCase_008048_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008048_2 "r.binary_operator.add.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008048, VkglTestCase_008048_1, VkglTestCase_008048_2);

#define VkglTestCase_008049_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008049_2 ".binary_operator.add.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008049, VkglTestCase_008049_1, VkglTestCase_008049_2);

#define VkglTestCase_008050_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008050_2 ".binary_operator.add.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008050, VkglTestCase_008050_1, VkglTestCase_008050_2);

#define VkglTestCase_008051_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008051_2 "binary_operator.add.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008051, VkglTestCase_008051_1, VkglTestCase_008051_2);

#define VkglTestCase_008052_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008052_2 ".binary_operator.add.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008052, VkglTestCase_008052_1, VkglTestCase_008052_2);

#define VkglTestCase_008053_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008053_2 "binary_operator.add.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008053, VkglTestCase_008053_1, VkglTestCase_008053_2);

#define VkglTestCase_008054_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008054_2 "binary_operator.add.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008054, VkglTestCase_008054_1, VkglTestCase_008054_2);

#define VkglTestCase_008055_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008055_2 "inary_operator.add.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008055, VkglTestCase_008055_1, VkglTestCase_008055_2);

#define VkglTestCase_008056_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008056_2 ".binary_operator.add.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008056, VkglTestCase_008056_1, VkglTestCase_008056_2);

#define VkglTestCase_008057_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008057_2 "binary_operator.add.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008057, VkglTestCase_008057_1, VkglTestCase_008057_2);

#define VkglTestCase_008058_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008058_2 "binary_operator.add.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008058, VkglTestCase_008058_1, VkglTestCase_008058_2);

#define VkglTestCase_008059_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008059_2 "inary_operator.add.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008059, VkglTestCase_008059_1, VkglTestCase_008059_2);

#define VkglTestCase_008060_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008060_2 ".binary_operator.add.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008060, VkglTestCase_008060_1, VkglTestCase_008060_2);

#define VkglTestCase_008061_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008061_2 "binary_operator.add.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008061, VkglTestCase_008061_1, VkglTestCase_008061_2);

#define VkglTestCase_008062_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008062_2 "binary_operator.add.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008062, VkglTestCase_008062_1, VkglTestCase_008062_2);

#define VkglTestCase_008063_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008063_2 "inary_operator.add.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008063, VkglTestCase_008063_1, VkglTestCase_008063_2);

#define VkglTestCase_008064_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008064_2 "r.binary_operator.add.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008064, VkglTestCase_008064_1, VkglTestCase_008064_2);

#define VkglTestCase_008065_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008065_2 ".binary_operator.add.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008065, VkglTestCase_008065_1, VkglTestCase_008065_2);

#define VkglTestCase_008066_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008066_2 ".binary_operator.add.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008066, VkglTestCase_008066_1, VkglTestCase_008066_2);

#define VkglTestCase_008067_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008067_2 "binary_operator.add.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008067, VkglTestCase_008067_1, VkglTestCase_008067_2);

#define VkglTestCase_008068_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008068_2 ".binary_operator.add.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008068, VkglTestCase_008068_1, VkglTestCase_008068_2);

#define VkglTestCase_008069_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008069_2 "binary_operator.add.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008069, VkglTestCase_008069_1, VkglTestCase_008069_2);

#define VkglTestCase_008070_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008070_2 ".binary_operator.add.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008070, VkglTestCase_008070_1, VkglTestCase_008070_2);

#define VkglTestCase_008071_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008071_2 "binary_operator.add.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008071, VkglTestCase_008071_1, VkglTestCase_008071_2);

#define VkglTestCase_008072_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008072_2 "r.binary_operator.add.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008072, VkglTestCase_008072_1, VkglTestCase_008072_2);

#define VkglTestCase_008073_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008073_2 ".binary_operator.add.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008073, VkglTestCase_008073_1, VkglTestCase_008073_2);

#define VkglTestCase_008074_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008074_2 "binary_operator.add.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008074, VkglTestCase_008074_1, VkglTestCase_008074_2);

#define VkglTestCase_008075_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008075_2 "inary_operator.add.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008075, VkglTestCase_008075_1, VkglTestCase_008075_2);

#define VkglTestCase_008076_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008076_2 ".binary_operator.add.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008076, VkglTestCase_008076_1, VkglTestCase_008076_2);

#define VkglTestCase_008077_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008077_2 "binary_operator.add.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008077, VkglTestCase_008077_1, VkglTestCase_008077_2);

#define VkglTestCase_008078_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008078_2 "binary_operator.add.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008078, VkglTestCase_008078_1, VkglTestCase_008078_2);

#define VkglTestCase_008079_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008079_2 "inary_operator.add.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008079, VkglTestCase_008079_1, VkglTestCase_008079_2);

#define VkglTestCase_008080_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008080_2 ".binary_operator.add.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008080, VkglTestCase_008080_1, VkglTestCase_008080_2);

#define VkglTestCase_008081_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008081_2 "binary_operator.add.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008081, VkglTestCase_008081_1, VkglTestCase_008081_2);

#define VkglTestCase_008082_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008082_2 "binary_operator.add.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008082, VkglTestCase_008082_1, VkglTestCase_008082_2);

#define VkglTestCase_008083_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008083_2 "inary_operator.add.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008083, VkglTestCase_008083_1, VkglTestCase_008083_2);

#define VkglTestCase_008084_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008084_2 ".binary_operator.add.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008084, VkglTestCase_008084_1, VkglTestCase_008084_2);

#define VkglTestCase_008085_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008085_2 "binary_operator.add.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008085, VkglTestCase_008085_1, VkglTestCase_008085_2);

#define VkglTestCase_008086_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008086_2 "binary_operator.add.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008086, VkglTestCase_008086_1, VkglTestCase_008086_2);

#define VkglTestCase_008087_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008087_2 "inary_operator.add.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008087, VkglTestCase_008087_1, VkglTestCase_008087_2);

#define VkglTestCase_008088_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008088_2 ".binary_operator.add.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008088, VkglTestCase_008088_1, VkglTestCase_008088_2);

#define VkglTestCase_008089_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008089_2 "binary_operator.add.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008089, VkglTestCase_008089_1, VkglTestCase_008089_2);

#define VkglTestCase_008090_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008090_2 ".binary_operator.add.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008090, VkglTestCase_008090_1, VkglTestCase_008090_2);

#define VkglTestCase_008091_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008091_2 "binary_operator.add.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008091, VkglTestCase_008091_1, VkglTestCase_008091_2);

#define VkglTestCase_008092_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008092_2 ".binary_operator.add.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008092, VkglTestCase_008092_1, VkglTestCase_008092_2);

#define VkglTestCase_008093_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008093_2 "binary_operator.add.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008093, VkglTestCase_008093_1, VkglTestCase_008093_2);

#define VkglTestCase_008094_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008094_2 ".binary_operator.add.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008094, VkglTestCase_008094_1, VkglTestCase_008094_2);

#define VkglTestCase_008095_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008095_2 "binary_operator.add.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008095, VkglTestCase_008095_1, VkglTestCase_008095_2);

#define VkglTestCase_008096_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008096_2 "inary_operator.add.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008096, VkglTestCase_008096_1, VkglTestCase_008096_2);

#define VkglTestCase_008097_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008097_2 "nary_operator.add.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008097, VkglTestCase_008097_1, VkglTestCase_008097_2);

#define VkglTestCase_008098_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008098_2 "ary_operator.add.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008098, VkglTestCase_008098_1, VkglTestCase_008098_2);

#define VkglTestCase_008099_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008099_2 "ry_operator.add.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008099, VkglTestCase_008099_1, VkglTestCase_008099_2);

#define VkglTestCase_008100_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008100_2 "nary_operator.add.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008100, VkglTestCase_008100_1, VkglTestCase_008100_2);

#define VkglTestCase_008101_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008101_2 "ary_operator.add.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008101, VkglTestCase_008101_1, VkglTestCase_008101_2);

#define VkglTestCase_008102_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008102_2 "inary_operator.add.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008102, VkglTestCase_008102_1, VkglTestCase_008102_2);

#define VkglTestCase_008103_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008103_2 "nary_operator.add.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008103, VkglTestCase_008103_1, VkglTestCase_008103_2);

#define VkglTestCase_008104_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008104_2 "ary_operator.add.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008104, VkglTestCase_008104_1, VkglTestCase_008104_2);

#define VkglTestCase_008105_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008105_2 "ry_operator.add.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008105, VkglTestCase_008105_1, VkglTestCase_008105_2);

#define VkglTestCase_008106_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008106_2 "nary_operator.add.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008106, VkglTestCase_008106_1, VkglTestCase_008106_2);

#define VkglTestCase_008107_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008107_2 "ary_operator.add.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008107, VkglTestCase_008107_1, VkglTestCase_008107_2);

#define VkglTestCase_008108_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008108_2 "inary_operator.add.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008108, VkglTestCase_008108_1, VkglTestCase_008108_2);

#define VkglTestCase_008109_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008109_2 "nary_operator.add.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008109, VkglTestCase_008109_1, VkglTestCase_008109_2);

#define VkglTestCase_008110_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008110_2 "ary_operator.add.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008110, VkglTestCase_008110_1, VkglTestCase_008110_2);

#define VkglTestCase_008111_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008111_2 "ry_operator.add.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008111, VkglTestCase_008111_1, VkglTestCase_008111_2);

#define VkglTestCase_008112_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008112_2 "nary_operator.add.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008112, VkglTestCase_008112_1, VkglTestCase_008112_2);

#define VkglTestCase_008113_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008113_2 "ary_operator.add.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008113, VkglTestCase_008113_1, VkglTestCase_008113_2);

#define VkglTestCase_008114_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008114_2 "inary_operator.add.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008114, VkglTestCase_008114_1, VkglTestCase_008114_2);

#define VkglTestCase_008115_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008115_2 "nary_operator.add.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008115, VkglTestCase_008115_1, VkglTestCase_008115_2);

#define VkglTestCase_008116_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008116_2 "nary_operator.add.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008116, VkglTestCase_008116_1, VkglTestCase_008116_2);

#define VkglTestCase_008117_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008117_2 "ary_operator.add.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008117, VkglTestCase_008117_1, VkglTestCase_008117_2);

#define VkglTestCase_008118_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008118_2 "inary_operator.add.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008118, VkglTestCase_008118_1, VkglTestCase_008118_2);

#define VkglTestCase_008119_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008119_2 "nary_operator.add.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008119, VkglTestCase_008119_1, VkglTestCase_008119_2);

#define VkglTestCase_008120_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008120_2 "nary_operator.add.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008120, VkglTestCase_008120_1, VkglTestCase_008120_2);

#define VkglTestCase_008121_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008121_2 "ary_operator.add.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008121, VkglTestCase_008121_1, VkglTestCase_008121_2);

#define VkglTestCase_008122_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008122_2 "inary_operator.add.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008122, VkglTestCase_008122_1, VkglTestCase_008122_2);

#define VkglTestCase_008123_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008123_2 "nary_operator.add.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008123, VkglTestCase_008123_1, VkglTestCase_008123_2);

#define VkglTestCase_008124_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008124_2 "nary_operator.add.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008124, VkglTestCase_008124_1, VkglTestCase_008124_2);

#define VkglTestCase_008125_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008125_2 "ary_operator.add.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008125, VkglTestCase_008125_1, VkglTestCase_008125_2);

#define VkglTestCase_008126_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008126_2 "inary_operator.add.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008126, VkglTestCase_008126_1, VkglTestCase_008126_2);

#define VkglTestCase_008127_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008127_2 "nary_operator.add.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008127, VkglTestCase_008127_1, VkglTestCase_008127_2);

#define VkglTestCase_008128_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008128_2 "inary_operator.add.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008128, VkglTestCase_008128_1, VkglTestCase_008128_2);

#define VkglTestCase_008129_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008129_2 "nary_operator.add.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008129, VkglTestCase_008129_1, VkglTestCase_008129_2);

#define VkglTestCase_008130_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008130_2 "inary_operator.add.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008130, VkglTestCase_008130_1, VkglTestCase_008130_2);

#define VkglTestCase_008131_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008131_2 "nary_operator.add.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008131, VkglTestCase_008131_1, VkglTestCase_008131_2);

#define VkglTestCase_008132_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008132_2 "inary_operator.add.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008132, VkglTestCase_008132_1, VkglTestCase_008132_2);

#define VkglTestCase_008133_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008133_2 "nary_operator.add.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008133, VkglTestCase_008133_1, VkglTestCase_008133_2);

#define VkglTestCase_008134_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008134_2 "ary_operator.add.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008134, VkglTestCase_008134_1, VkglTestCase_008134_2);

#define VkglTestCase_008135_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008135_2 "ry_operator.add.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008135, VkglTestCase_008135_1, VkglTestCase_008135_2);

#define VkglTestCase_008136_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008136_2 "inary_operator.add.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008136, VkglTestCase_008136_1, VkglTestCase_008136_2);

#define VkglTestCase_008137_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008137_2 "nary_operator.add.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008137, VkglTestCase_008137_1, VkglTestCase_008137_2);

#define VkglTestCase_008138_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008138_2 "ary_operator.add.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008138, VkglTestCase_008138_1, VkglTestCase_008138_2);

#define VkglTestCase_008139_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008139_2 "ry_operator.add.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008139, VkglTestCase_008139_1, VkglTestCase_008139_2);

#define VkglTestCase_008140_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008140_2 "inary_operator.add.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008140, VkglTestCase_008140_1, VkglTestCase_008140_2);

#define VkglTestCase_008141_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008141_2 "nary_operator.add.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008141, VkglTestCase_008141_1, VkglTestCase_008141_2);

#define VkglTestCase_008142_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008142_2 "ary_operator.add.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008142, VkglTestCase_008142_1, VkglTestCase_008142_2);

#define VkglTestCase_008143_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008143_2 "ry_operator.add.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008143, VkglTestCase_008143_1, VkglTestCase_008143_2);

#define VkglTestCase_008144_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008144_2 "nary_operator.add.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008144, VkglTestCase_008144_1, VkglTestCase_008144_2);

#define VkglTestCase_008145_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008145_2 "ary_operator.add.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008145, VkglTestCase_008145_1, VkglTestCase_008145_2);

#define VkglTestCase_008146_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008146_2 "nary_operator.add.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008146, VkglTestCase_008146_1, VkglTestCase_008146_2);

#define VkglTestCase_008147_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008147_2 "ary_operator.add.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008147, VkglTestCase_008147_1, VkglTestCase_008147_2);

#define VkglTestCase_008148_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008148_2 "nary_operator.add.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008148, VkglTestCase_008148_1, VkglTestCase_008148_2);

#define VkglTestCase_008149_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008149_2 "ary_operator.add.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008149, VkglTestCase_008149_1, VkglTestCase_008149_2);

#define VkglTestCase_008150_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008150_2 "inary_operator.add.lowp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008150, VkglTestCase_008150_1, VkglTestCase_008150_2);

#define VkglTestCase_008151_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008151_2 "nary_operator.add.lowp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008151, VkglTestCase_008151_1, VkglTestCase_008151_2);

#define VkglTestCase_008152_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008152_2 "ary_operator.add.mediump_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008152, VkglTestCase_008152_1, VkglTestCase_008152_2);

#define VkglTestCase_008153_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008153_2 "ry_operator.add.mediump_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008153, VkglTestCase_008153_1, VkglTestCase_008153_2);

#define VkglTestCase_008154_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008154_2 "nary_operator.add.highp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008154, VkglTestCase_008154_1, VkglTestCase_008154_2);

#define VkglTestCase_008155_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008155_2 "ary_operator.add.highp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008155, VkglTestCase_008155_1, VkglTestCase_008155_2);

#define VkglTestCase_008156_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008156_2 "inary_operator.add.lowp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008156, VkglTestCase_008156_1, VkglTestCase_008156_2);

#define VkglTestCase_008157_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008157_2 "nary_operator.add.lowp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008157, VkglTestCase_008157_1, VkglTestCase_008157_2);

#define VkglTestCase_008158_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008158_2 "ary_operator.add.mediump_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008158, VkglTestCase_008158_1, VkglTestCase_008158_2);

#define VkglTestCase_008159_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008159_2 "ry_operator.add.mediump_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008159, VkglTestCase_008159_1, VkglTestCase_008159_2);

#define VkglTestCase_008160_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008160_2 "nary_operator.add.highp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008160, VkglTestCase_008160_1, VkglTestCase_008160_2);

#define VkglTestCase_008161_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008161_2 "ary_operator.add.highp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008161, VkglTestCase_008161_1, VkglTestCase_008161_2);

#define VkglTestCase_008162_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008162_2 "inary_operator.add.lowp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008162, VkglTestCase_008162_1, VkglTestCase_008162_2);

#define VkglTestCase_008163_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008163_2 "nary_operator.add.lowp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008163, VkglTestCase_008163_1, VkglTestCase_008163_2);

#define VkglTestCase_008164_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008164_2 "ary_operator.add.mediump_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008164, VkglTestCase_008164_1, VkglTestCase_008164_2);

#define VkglTestCase_008165_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008165_2 "ry_operator.add.mediump_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008165, VkglTestCase_008165_1, VkglTestCase_008165_2);

#define VkglTestCase_008166_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008166_2 "nary_operator.add.highp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008166, VkglTestCase_008166_1, VkglTestCase_008166_2);

#define VkglTestCase_008167_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008167_2 "ary_operator.add.highp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008167, VkglTestCase_008167_1, VkglTestCase_008167_2);

#define VkglTestCase_008168_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008168_2 "inary_operator.add.lowp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008168, VkglTestCase_008168_1, VkglTestCase_008168_2);

#define VkglTestCase_008169_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008169_2 "nary_operator.add.lowp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008169, VkglTestCase_008169_1, VkglTestCase_008169_2);

#define VkglTestCase_008170_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008170_2 "nary_operator.add.mediump_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008170, VkglTestCase_008170_1, VkglTestCase_008170_2);

#define VkglTestCase_008171_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008171_2 "ary_operator.add.mediump_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008171, VkglTestCase_008171_1, VkglTestCase_008171_2);

#define VkglTestCase_008172_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008172_2 "inary_operator.add.lowp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008172, VkglTestCase_008172_1, VkglTestCase_008172_2);

#define VkglTestCase_008173_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008173_2 "nary_operator.add.lowp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008173, VkglTestCase_008173_1, VkglTestCase_008173_2);

#define VkglTestCase_008174_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008174_2 "nary_operator.add.mediump_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008174, VkglTestCase_008174_1, VkglTestCase_008174_2);

#define VkglTestCase_008175_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008175_2 "ary_operator.add.mediump_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008175, VkglTestCase_008175_1, VkglTestCase_008175_2);

#define VkglTestCase_008176_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008176_2 "inary_operator.add.lowp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008176, VkglTestCase_008176_1, VkglTestCase_008176_2);

#define VkglTestCase_008177_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008177_2 "nary_operator.add.lowp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008177, VkglTestCase_008177_1, VkglTestCase_008177_2);

#define VkglTestCase_008178_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008178_2 "nary_operator.add.mediump_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008178, VkglTestCase_008178_1, VkglTestCase_008178_2);

#define VkglTestCase_008179_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008179_2 "ary_operator.add.mediump_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008179, VkglTestCase_008179_1, VkglTestCase_008179_2);

#define VkglTestCase_008180_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008180_2 "inary_operator.add.highp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008180, VkglTestCase_008180_1, VkglTestCase_008180_2);

#define VkglTestCase_008181_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008181_2 "nary_operator.add.highp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008181, VkglTestCase_008181_1, VkglTestCase_008181_2);

#define VkglTestCase_008182_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008182_2 "inary_operator.add.highp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008182, VkglTestCase_008182_1, VkglTestCase_008182_2);

#define VkglTestCase_008183_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008183_2 "nary_operator.add.highp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008183, VkglTestCase_008183_1, VkglTestCase_008183_2);

#define VkglTestCase_008184_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008184_2 "inary_operator.add.highp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008184, VkglTestCase_008184_1, VkglTestCase_008184_2);

#define VkglTestCase_008185_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008185_2 "nary_operator.add.highp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008185, VkglTestCase_008185_1, VkglTestCase_008185_2);

#define VkglTestCase_008186_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008186_2 "inary_operator.add.lowp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008186, VkglTestCase_008186_1, VkglTestCase_008186_2);

#define VkglTestCase_008187_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008187_2 "nary_operator.add.lowp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008187, VkglTestCase_008187_1, VkglTestCase_008187_2);

#define VkglTestCase_008188_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008188_2 "ary_operator.add.mediump_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008188, VkglTestCase_008188_1, VkglTestCase_008188_2);

#define VkglTestCase_008189_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008189_2 "ry_operator.add.mediump_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008189, VkglTestCase_008189_1, VkglTestCase_008189_2);

#define VkglTestCase_008190_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008190_2 "inary_operator.add.lowp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008190, VkglTestCase_008190_1, VkglTestCase_008190_2);

#define VkglTestCase_008191_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008191_2 "nary_operator.add.lowp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008191, VkglTestCase_008191_1, VkglTestCase_008191_2);

#define VkglTestCase_008192_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008192_2 "ary_operator.add.mediump_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008192, VkglTestCase_008192_1, VkglTestCase_008192_2);

#define VkglTestCase_008193_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008193_2 "ry_operator.add.mediump_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008193, VkglTestCase_008193_1, VkglTestCase_008193_2);

#define VkglTestCase_008194_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008194_2 "inary_operator.add.lowp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008194, VkglTestCase_008194_1, VkglTestCase_008194_2);

#define VkglTestCase_008195_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008195_2 "nary_operator.add.lowp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008195, VkglTestCase_008195_1, VkglTestCase_008195_2);

#define VkglTestCase_008196_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008196_2 "ary_operator.add.mediump_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008196, VkglTestCase_008196_1, VkglTestCase_008196_2);

#define VkglTestCase_008197_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008197_2 "ry_operator.add.mediump_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008197, VkglTestCase_008197_1, VkglTestCase_008197_2);

#define VkglTestCase_008198_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008198_2 "nary_operator.add.highp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008198, VkglTestCase_008198_1, VkglTestCase_008198_2);

#define VkglTestCase_008199_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008199_2 "ary_operator.add.highp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008199, VkglTestCase_008199_1, VkglTestCase_008199_2);

#define VkglTestCase_008200_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008200_2 "nary_operator.add.highp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008200, VkglTestCase_008200_1, VkglTestCase_008200_2);

#define VkglTestCase_008201_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008201_2 "ary_operator.add.highp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008201, VkglTestCase_008201_1, VkglTestCase_008201_2);

#define VkglTestCase_008202_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008202_2 "nary_operator.add.highp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008202, VkglTestCase_008202_1, VkglTestCase_008202_2);

#define VkglTestCase_008203_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008203_2 "ary_operator.add.highp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008203, VkglTestCase_008203_1, VkglTestCase_008203_2);
