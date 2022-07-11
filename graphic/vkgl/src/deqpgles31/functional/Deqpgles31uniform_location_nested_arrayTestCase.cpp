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

#define VkglTestCase_018034_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018034_2 "ocation.nested_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018034, VkglTestCase_018034_1, VkglTestCase_018034_2);

#define VkglTestCase_018035_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018035_2 "cation.nested_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018035, VkglTestCase_018035_1, VkglTestCase_018035_2);

#define VkglTestCase_018036_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018036_2 "ocation.nested_array.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018036, VkglTestCase_018036_1, VkglTestCase_018036_2);

#define VkglTestCase_018037_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018037_2 "cation.nested_array.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018037, VkglTestCase_018037_1, VkglTestCase_018037_2);

#define VkglTestCase_018038_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018038_2 "ocation.nested_array.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018038, VkglTestCase_018038_1, VkglTestCase_018038_2);

#define VkglTestCase_018039_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018039_2 "cation.nested_array.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018039, VkglTestCase_018039_1, VkglTestCase_018039_2);

#define VkglTestCase_018040_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018040_2 "ocation.nested_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018040, VkglTestCase_018040_1, VkglTestCase_018040_2);

#define VkglTestCase_018041_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018041_2 "cation.nested_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018041, VkglTestCase_018041_1, VkglTestCase_018041_2);

#define VkglTestCase_018042_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018042_2 "location.nested_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018042, VkglTestCase_018042_1, VkglTestCase_018042_2);

#define VkglTestCase_018043_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018043_2 "ocation.nested_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018043, VkglTestCase_018043_1, VkglTestCase_018043_2);

#define VkglTestCase_018044_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018044_2 "ocation.nested_array.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018044, VkglTestCase_018044_1, VkglTestCase_018044_2);

#define VkglTestCase_018045_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018045_2 "cation.nested_array.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018045, VkglTestCase_018045_1, VkglTestCase_018045_2);

#define VkglTestCase_018046_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018046_2 "ocation.nested_array.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018046, VkglTestCase_018046_1, VkglTestCase_018046_2);

#define VkglTestCase_018047_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018047_2 "cation.nested_array.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018047, VkglTestCase_018047_1, VkglTestCase_018047_2);

#define VkglTestCase_018048_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018048_2 "ocation.nested_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018048, VkglTestCase_018048_1, VkglTestCase_018048_2);

#define VkglTestCase_018049_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018049_2 "cation.nested_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018049, VkglTestCase_018049_1, VkglTestCase_018049_2);

#define VkglTestCase_018050_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018050_2 "ocation.nested_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018050, VkglTestCase_018050_1, VkglTestCase_018050_2);

#define VkglTestCase_018051_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018051_2 "cation.nested_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018051, VkglTestCase_018051_1, VkglTestCase_018051_2);

#define VkglTestCase_018052_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018052_2 "ocation.nested_array.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018052, VkglTestCase_018052_1, VkglTestCase_018052_2);

#define VkglTestCase_018053_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018053_2 "cation.nested_array.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018053, VkglTestCase_018053_1, VkglTestCase_018053_2);

#define VkglTestCase_018054_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018054_2 "ocation.nested_array.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018054, VkglTestCase_018054_1, VkglTestCase_018054_2);

#define VkglTestCase_018055_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018055_2 "cation.nested_array.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018055, VkglTestCase_018055_1, VkglTestCase_018055_2);

#define VkglTestCase_018056_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018056_2 "ocation.nested_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018056, VkglTestCase_018056_1, VkglTestCase_018056_2);

#define VkglTestCase_018057_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018057_2 "cation.nested_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018057, VkglTestCase_018057_1, VkglTestCase_018057_2);

#define VkglTestCase_018058_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018058_2 "ocation.nested_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018058, VkglTestCase_018058_1, VkglTestCase_018058_2);

#define VkglTestCase_018059_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018059_2 "cation.nested_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018059, VkglTestCase_018059_1, VkglTestCase_018059_2);

#define VkglTestCase_018060_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018060_2 "ocation.nested_array.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018060, VkglTestCase_018060_1, VkglTestCase_018060_2);

#define VkglTestCase_018061_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018061_2 "cation.nested_array.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018061, VkglTestCase_018061_1, VkglTestCase_018061_2);

#define VkglTestCase_018062_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018062_2 "ocation.nested_array.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018062, VkglTestCase_018062_1, VkglTestCase_018062_2);

#define VkglTestCase_018063_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018063_2 "cation.nested_array.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018063, VkglTestCase_018063_1, VkglTestCase_018063_2);

#define VkglTestCase_018064_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018064_2 "ocation.nested_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018064, VkglTestCase_018064_1, VkglTestCase_018064_2);

#define VkglTestCase_018065_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018065_2 "cation.nested_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018065, VkglTestCase_018065_1, VkglTestCase_018065_2);

#define VkglTestCase_018066_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018066_2 "ocation.nested_array.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018066, VkglTestCase_018066_1, VkglTestCase_018066_2);

#define VkglTestCase_018067_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018067_2 "cation.nested_array.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018067, VkglTestCase_018067_1, VkglTestCase_018067_2);

#define VkglTestCase_018068_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018068_2 "cation.nested_array.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018068, VkglTestCase_018068_1, VkglTestCase_018068_2);

#define VkglTestCase_018069_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018069_2 "ation.nested_array.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018069, VkglTestCase_018069_1, VkglTestCase_018069_2);

#define VkglTestCase_018070_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018070_2 "cation.nested_array.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018070, VkglTestCase_018070_1, VkglTestCase_018070_2);

#define VkglTestCase_018071_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018071_2 "ation.nested_array.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018071, VkglTestCase_018071_1, VkglTestCase_018071_2);

#define VkglTestCase_018072_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018072_2 "cation.nested_array.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018072, VkglTestCase_018072_1, VkglTestCase_018072_2);

#define VkglTestCase_018073_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018073_2 "ation.nested_array.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018073, VkglTestCase_018073_1, VkglTestCase_018073_2);

#define VkglTestCase_018074_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018074_2 "ocation.nested_array.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018074, VkglTestCase_018074_1, VkglTestCase_018074_2);

#define VkglTestCase_018075_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018075_2 "cation.nested_array.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018075, VkglTestCase_018075_1, VkglTestCase_018075_2);

#define VkglTestCase_018076_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018076_2 "cation.nested_array.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018076, VkglTestCase_018076_1, VkglTestCase_018076_2);

#define VkglTestCase_018077_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018077_2 "ation.nested_array.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018077, VkglTestCase_018077_1, VkglTestCase_018077_2);

#define VkglTestCase_018078_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018078_2 "cation.nested_array.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018078, VkglTestCase_018078_1, VkglTestCase_018078_2);

#define VkglTestCase_018079_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018079_2 "ation.nested_array.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018079, VkglTestCase_018079_1, VkglTestCase_018079_2);

#define VkglTestCase_018080_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018080_2 "cation.nested_array.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018080, VkglTestCase_018080_1, VkglTestCase_018080_2);

#define VkglTestCase_018081_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018081_2 "ation.nested_array.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018081, VkglTestCase_018081_1, VkglTestCase_018081_2);

#define VkglTestCase_018082_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018082_2 "ocation.nested_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018082, VkglTestCase_018082_1, VkglTestCase_018082_2);

#define VkglTestCase_018083_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018083_2 "cation.nested_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018083, VkglTestCase_018083_1, VkglTestCase_018083_2);

#define VkglTestCase_018084_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018084_2 "ation.nested_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018084, VkglTestCase_018084_1, VkglTestCase_018084_2);

#define VkglTestCase_018085_1 "dEQP-GLES31.functional.uniform_loca"
#define VkglTestCase_018085_2 "tion.nested_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018085, VkglTestCase_018085_1, VkglTestCase_018085_2);

#define VkglTestCase_018086_1 "dEQP-GLES31.functional.uniform_loca"
#define VkglTestCase_018086_2 "tion.nested_array.isampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018086, VkglTestCase_018086_1, VkglTestCase_018086_2);

#define VkglTestCase_018087_1 "dEQP-GLES31.functional.uniform_locat"
#define VkglTestCase_018087_2 "ion.nested_array.isampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018087, VkglTestCase_018087_1, VkglTestCase_018087_2);

#define VkglTestCase_018088_1 "dEQP-GLES31.functional.uniform_loca"
#define VkglTestCase_018088_2 "tion.nested_array.usampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018088, VkglTestCase_018088_1, VkglTestCase_018088_2);

#define VkglTestCase_018089_1 "dEQP-GLES31.functional.uniform_locat"
#define VkglTestCase_018089_2 "ion.nested_array.usampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018089, VkglTestCase_018089_1, VkglTestCase_018089_2);
