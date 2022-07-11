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
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004038_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004038_2 "tions.datatypes.float_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004038, VkglTestCase_004038_1, VkglTestCase_004038_2);

#define VkglTestCase_004039_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004039_2 "ions.datatypes.float_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004039, VkglTestCase_004039_1, VkglTestCase_004039_2);

#define VkglTestCase_004040_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004040_2 "ctions.datatypes.float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004040, VkglTestCase_004040_1, VkglTestCase_004040_2);

#define VkglTestCase_004041_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004041_2 "tions.datatypes.float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004041, VkglTestCase_004041_1, VkglTestCase_004041_2);

#define VkglTestCase_004042_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004042_2 "ctions.datatypes.float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004042, VkglTestCase_004042_1, VkglTestCase_004042_2);

#define VkglTestCase_004043_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004043_2 "tions.datatypes.float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004043, VkglTestCase_004043_1, VkglTestCase_004043_2);

#define VkglTestCase_004044_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004044_2 "ctions.datatypes.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004044, VkglTestCase_004044_1, VkglTestCase_004044_2);

#define VkglTestCase_004045_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004045_2 "tions.datatypes.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004045, VkglTestCase_004045_1, VkglTestCase_004045_2);

#define VkglTestCase_004046_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004046_2 "ctions.datatypes.float_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004046, VkglTestCase_004046_1, VkglTestCase_004046_2);

#define VkglTestCase_004047_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004047_2 "tions.datatypes.float_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004047, VkglTestCase_004047_1, VkglTestCase_004047_2);

#define VkglTestCase_004048_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004048_2 "ctions.datatypes.float_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004048, VkglTestCase_004048_1, VkglTestCase_004048_2);

#define VkglTestCase_004049_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004049_2 "tions.datatypes.float_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004049, VkglTestCase_004049_1, VkglTestCase_004049_2);

#define VkglTestCase_004050_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004050_2 "ctions.datatypes.float_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004050, VkglTestCase_004050_1, VkglTestCase_004050_2);

#define VkglTestCase_004051_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004051_2 "tions.datatypes.float_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004051, VkglTestCase_004051_1, VkglTestCase_004051_2);

#define VkglTestCase_004052_1 "dEQP-GLES3.functional.shaders.fu"
#define VkglTestCase_004052_2 "nctions.datatypes.int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004052, VkglTestCase_004052_1, VkglTestCase_004052_2);

#define VkglTestCase_004053_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004053_2 "ctions.datatypes.int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004053, VkglTestCase_004053_1, VkglTestCase_004053_2);

#define VkglTestCase_004054_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004054_2 "ctions.datatypes.int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004054, VkglTestCase_004054_1, VkglTestCase_004054_2);

#define VkglTestCase_004055_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004055_2 "tions.datatypes.int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004055, VkglTestCase_004055_1, VkglTestCase_004055_2);

#define VkglTestCase_004056_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004056_2 "ctions.datatypes.int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004056, VkglTestCase_004056_1, VkglTestCase_004056_2);

#define VkglTestCase_004057_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004057_2 "tions.datatypes.int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004057, VkglTestCase_004057_1, VkglTestCase_004057_2);

#define VkglTestCase_004058_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004058_2 "ctions.datatypes.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004058, VkglTestCase_004058_1, VkglTestCase_004058_2);

#define VkglTestCase_004059_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004059_2 "tions.datatypes.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004059, VkglTestCase_004059_1, VkglTestCase_004059_2);

#define VkglTestCase_004060_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004060_2 "ctions.datatypes.uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004060, VkglTestCase_004060_1, VkglTestCase_004060_2);

#define VkglTestCase_004061_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004061_2 "tions.datatypes.uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004061, VkglTestCase_004061_1, VkglTestCase_004061_2);

#define VkglTestCase_004062_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004062_2 "ctions.datatypes.uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004062, VkglTestCase_004062_1, VkglTestCase_004062_2);

#define VkglTestCase_004063_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004063_2 "tions.datatypes.uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004063, VkglTestCase_004063_1, VkglTestCase_004063_2);

#define VkglTestCase_004064_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004064_2 "ctions.datatypes.uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004064, VkglTestCase_004064_1, VkglTestCase_004064_2);

#define VkglTestCase_004065_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004065_2 "tions.datatypes.uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004065, VkglTestCase_004065_1, VkglTestCase_004065_2);

#define VkglTestCase_004066_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004066_2 "ctions.datatypes.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004066, VkglTestCase_004066_1, VkglTestCase_004066_2);

#define VkglTestCase_004067_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004067_2 "tions.datatypes.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004067, VkglTestCase_004067_1, VkglTestCase_004067_2);

#define VkglTestCase_004068_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004068_2 "ctions.datatypes.bool_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004068, VkglTestCase_004068_1, VkglTestCase_004068_2);

#define VkglTestCase_004069_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004069_2 "tions.datatypes.bool_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004069, VkglTestCase_004069_1, VkglTestCase_004069_2);

#define VkglTestCase_004070_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004070_2 "ctions.datatypes.bool_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004070, VkglTestCase_004070_1, VkglTestCase_004070_2);

#define VkglTestCase_004071_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004071_2 "tions.datatypes.bool_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004071, VkglTestCase_004071_1, VkglTestCase_004071_2);

#define VkglTestCase_004072_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004072_2 "ctions.datatypes.bool_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004072, VkglTestCase_004072_1, VkglTestCase_004072_2);

#define VkglTestCase_004073_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004073_2 "tions.datatypes.bool_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004073, VkglTestCase_004073_1, VkglTestCase_004073_2);

#define VkglTestCase_004074_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004074_2 "ctions.datatypes.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004074, VkglTestCase_004074_1, VkglTestCase_004074_2);

#define VkglTestCase_004075_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004075_2 "tions.datatypes.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004075, VkglTestCase_004075_1, VkglTestCase_004075_2);

#define VkglTestCase_004076_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004076_2 "functions.datatypes.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004076, VkglTestCase_004076_1, VkglTestCase_004076_2);

#define VkglTestCase_004077_1 "dEQP-GLES3.functional.shaders.f"
#define VkglTestCase_004077_2 "unctions.datatypes.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004077, VkglTestCase_004077_1, VkglTestCase_004077_2);

#define VkglTestCase_004078_1 "dEQP-GLES3.functional.shaders.f"
#define VkglTestCase_004078_2 "unctions.datatypes.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004078, VkglTestCase_004078_1, VkglTestCase_004078_2);

#define VkglTestCase_004079_1 "dEQP-GLES3.functional.shaders.fu"
#define VkglTestCase_004079_2 "nctions.datatypes.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004079, VkglTestCase_004079_1, VkglTestCase_004079_2);

#define VkglTestCase_004080_1 "dEQP-GLES3.functional.shaders.f"
#define VkglTestCase_004080_2 "unctions.datatypes.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004080, VkglTestCase_004080_1, VkglTestCase_004080_2);

#define VkglTestCase_004081_1 "dEQP-GLES3.functional.shaders.fu"
#define VkglTestCase_004081_2 "nctions.datatypes.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004081, VkglTestCase_004081_1, VkglTestCase_004081_2);

#define VkglTestCase_004082_1 "dEQP-GLES3.functional.shaders.f"
#define VkglTestCase_004082_2 "unctions.datatypes.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004082, VkglTestCase_004082_1, VkglTestCase_004082_2);

#define VkglTestCase_004083_1 "dEQP-GLES3.functional.shaders.fu"
#define VkglTestCase_004083_2 "nctions.datatypes.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004083, VkglTestCase_004083_1, VkglTestCase_004083_2);

#define VkglTestCase_004084_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004084_2 "functions.datatypes.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004084, VkglTestCase_004084_1, VkglTestCase_004084_2);

#define VkglTestCase_004085_1 "dEQP-GLES3.functional.shaders.f"
#define VkglTestCase_004085_2 "unctions.datatypes.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004085, VkglTestCase_004085_1, VkglTestCase_004085_2);

#define VkglTestCase_004086_1 "dEQP-GLES3.functional.shaders.f"
#define VkglTestCase_004086_2 "unctions.datatypes.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004086, VkglTestCase_004086_1, VkglTestCase_004086_2);

#define VkglTestCase_004087_1 "dEQP-GLES3.functional.shaders.fu"
#define VkglTestCase_004087_2 "nctions.datatypes.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004087, VkglTestCase_004087_1, VkglTestCase_004087_2);

#define VkglTestCase_004088_1 "dEQP-GLES3.functional.shaders.f"
#define VkglTestCase_004088_2 "unctions.datatypes.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004088, VkglTestCase_004088_1, VkglTestCase_004088_2);

#define VkglTestCase_004089_1 "dEQP-GLES3.functional.shaders.fu"
#define VkglTestCase_004089_2 "nctions.datatypes.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004089, VkglTestCase_004089_1, VkglTestCase_004089_2);

#define VkglTestCase_004090_1 "dEQP-GLES3.functional.shaders.f"
#define VkglTestCase_004090_2 "unctions.datatypes.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004090, VkglTestCase_004090_1, VkglTestCase_004090_2);

#define VkglTestCase_004091_1 "dEQP-GLES3.functional.shaders.fu"
#define VkglTestCase_004091_2 "nctions.datatypes.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004091, VkglTestCase_004091_1, VkglTestCase_004091_2);

#define VkglTestCase_004092_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004092_2 "functions.datatypes.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004092, VkglTestCase_004092_1, VkglTestCase_004092_2);

#define VkglTestCase_004093_1 "dEQP-GLES3.functional.shaders.f"
#define VkglTestCase_004093_2 "unctions.datatypes.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004093, VkglTestCase_004093_1, VkglTestCase_004093_2);

#define VkglTestCase_004094_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004094_2 "tions.datatypes.float_struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004094, VkglTestCase_004094_1, VkglTestCase_004094_2);

#define VkglTestCase_004095_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004095_2 "ions.datatypes.float_struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004095, VkglTestCase_004095_1, VkglTestCase_004095_2);

#define VkglTestCase_004096_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004096_2 "ions.datatypes.struct_struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004096, VkglTestCase_004096_1, VkglTestCase_004096_2);

#define VkglTestCase_004097_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004097_2 "ons.datatypes.struct_struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004097, VkglTestCase_004097_1, VkglTestCase_004097_2);

#define VkglTestCase_004098_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004098_2 "s.datatypes.struct_nested_struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004098, VkglTestCase_004098_1, VkglTestCase_004098_2);

#define VkglTestCase_004099_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004099_2 ".datatypes.struct_nested_struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004099, VkglTestCase_004099_1, VkglTestCase_004099_2);

#define VkglTestCase_004100_1 "dEQP-GLES3.functional.shaders.functions.dat"
#define VkglTestCase_004100_2 "atypes.struct_constructor_highp_in_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004100, VkglTestCase_004100_1, VkglTestCase_004100_2);
