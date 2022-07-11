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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008030_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008030_2 "ions.builtin_functions.common.abs_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008030, VkglTestCase_008030_1, VkglTestCase_008030_2);

#define VkglTestCase_008031_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008031_2 "ons.builtin_functions.common.abs_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008031, VkglTestCase_008031_1, VkglTestCase_008031_2);

#define VkglTestCase_008032_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008032_2 "sions.builtin_functions.common.abs_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008032, VkglTestCase_008032_1, VkglTestCase_008032_2);

#define VkglTestCase_008033_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008033_2 "ions.builtin_functions.common.abs_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008033, VkglTestCase_008033_1, VkglTestCase_008033_2);

#define VkglTestCase_008034_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008034_2 "sions.builtin_functions.common.abs_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008034, VkglTestCase_008034_1, VkglTestCase_008034_2);

#define VkglTestCase_008035_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008035_2 "ions.builtin_functions.common.abs_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008035, VkglTestCase_008035_1, VkglTestCase_008035_2);

#define VkglTestCase_008036_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008036_2 "sions.builtin_functions.common.abs_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008036, VkglTestCase_008036_1, VkglTestCase_008036_2);

#define VkglTestCase_008037_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008037_2 "ions.builtin_functions.common.abs_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008037, VkglTestCase_008037_1, VkglTestCase_008037_2);

#define VkglTestCase_008038_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008038_2 "ions.builtin_functions.common.sign_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008038, VkglTestCase_008038_1, VkglTestCase_008038_2);

#define VkglTestCase_008039_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008039_2 "ons.builtin_functions.common.sign_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008039, VkglTestCase_008039_1, VkglTestCase_008039_2);

#define VkglTestCase_008040_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008040_2 "ions.builtin_functions.common.sign_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008040, VkglTestCase_008040_1, VkglTestCase_008040_2);

#define VkglTestCase_008041_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008041_2 "ons.builtin_functions.common.sign_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008041, VkglTestCase_008041_1, VkglTestCase_008041_2);

#define VkglTestCase_008042_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008042_2 "ions.builtin_functions.common.sign_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008042, VkglTestCase_008042_1, VkglTestCase_008042_2);

#define VkglTestCase_008043_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008043_2 "ons.builtin_functions.common.sign_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008043, VkglTestCase_008043_1, VkglTestCase_008043_2);

#define VkglTestCase_008044_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008044_2 "ions.builtin_functions.common.sign_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008044, VkglTestCase_008044_1, VkglTestCase_008044_2);

#define VkglTestCase_008045_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008045_2 "ons.builtin_functions.common.sign_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008045, VkglTestCase_008045_1, VkglTestCase_008045_2);

#define VkglTestCase_008046_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008046_2 "ons.builtin_functions.common.floor_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008046, VkglTestCase_008046_1, VkglTestCase_008046_2);

#define VkglTestCase_008047_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008047_2 "ns.builtin_functions.common.floor_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008047, VkglTestCase_008047_1, VkglTestCase_008047_2);

#define VkglTestCase_008048_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008048_2 "ions.builtin_functions.common.floor_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008048, VkglTestCase_008048_1, VkglTestCase_008048_2);

#define VkglTestCase_008049_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008049_2 "ons.builtin_functions.common.floor_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008049, VkglTestCase_008049_1, VkglTestCase_008049_2);

#define VkglTestCase_008050_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008050_2 "ions.builtin_functions.common.floor_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008050, VkglTestCase_008050_1, VkglTestCase_008050_2);

#define VkglTestCase_008051_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008051_2 "ons.builtin_functions.common.floor_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008051, VkglTestCase_008051_1, VkglTestCase_008051_2);

#define VkglTestCase_008052_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008052_2 "ions.builtin_functions.common.floor_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008052, VkglTestCase_008052_1, VkglTestCase_008052_2);

#define VkglTestCase_008053_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008053_2 "ons.builtin_functions.common.floor_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008053, VkglTestCase_008053_1, VkglTestCase_008053_2);

#define VkglTestCase_008054_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008054_2 "ions.builtin_functions.common.ceil_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008054, VkglTestCase_008054_1, VkglTestCase_008054_2);

#define VkglTestCase_008055_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008055_2 "ons.builtin_functions.common.ceil_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008055, VkglTestCase_008055_1, VkglTestCase_008055_2);

#define VkglTestCase_008056_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008056_2 "ions.builtin_functions.common.ceil_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008056, VkglTestCase_008056_1, VkglTestCase_008056_2);

#define VkglTestCase_008057_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008057_2 "ons.builtin_functions.common.ceil_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008057, VkglTestCase_008057_1, VkglTestCase_008057_2);

#define VkglTestCase_008058_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008058_2 "ions.builtin_functions.common.ceil_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008058, VkglTestCase_008058_1, VkglTestCase_008058_2);

#define VkglTestCase_008059_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008059_2 "ons.builtin_functions.common.ceil_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008059, VkglTestCase_008059_1, VkglTestCase_008059_2);

#define VkglTestCase_008060_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008060_2 "ions.builtin_functions.common.ceil_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008060, VkglTestCase_008060_1, VkglTestCase_008060_2);

#define VkglTestCase_008061_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008061_2 "ons.builtin_functions.common.ceil_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008061, VkglTestCase_008061_1, VkglTestCase_008061_2);

#define VkglTestCase_008062_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008062_2 "ons.builtin_functions.common.fract_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008062, VkglTestCase_008062_1, VkglTestCase_008062_2);

#define VkglTestCase_008063_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008063_2 "ns.builtin_functions.common.fract_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008063, VkglTestCase_008063_1, VkglTestCase_008063_2);

#define VkglTestCase_008064_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008064_2 "ions.builtin_functions.common.fract_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008064, VkglTestCase_008064_1, VkglTestCase_008064_2);

#define VkglTestCase_008065_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008065_2 "ons.builtin_functions.common.fract_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008065, VkglTestCase_008065_1, VkglTestCase_008065_2);

#define VkglTestCase_008066_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008066_2 "ions.builtin_functions.common.fract_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008066, VkglTestCase_008066_1, VkglTestCase_008066_2);

#define VkglTestCase_008067_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008067_2 "ons.builtin_functions.common.fract_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008067, VkglTestCase_008067_1, VkglTestCase_008067_2);

#define VkglTestCase_008068_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008068_2 "ions.builtin_functions.common.fract_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008068, VkglTestCase_008068_1, VkglTestCase_008068_2);

#define VkglTestCase_008069_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008069_2 "ons.builtin_functions.common.fract_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008069, VkglTestCase_008069_1, VkglTestCase_008069_2);

#define VkglTestCase_008070_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008070_2 "ions.builtin_functions.common.mod_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008070, VkglTestCase_008070_1, VkglTestCase_008070_2);

#define VkglTestCase_008071_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008071_2 "ons.builtin_functions.common.mod_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008071, VkglTestCase_008071_1, VkglTestCase_008071_2);

#define VkglTestCase_008072_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008072_2 "sions.builtin_functions.common.mod_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008072, VkglTestCase_008072_1, VkglTestCase_008072_2);

#define VkglTestCase_008073_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008073_2 "ions.builtin_functions.common.mod_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008073, VkglTestCase_008073_1, VkglTestCase_008073_2);

#define VkglTestCase_008074_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008074_2 "ns.builtin_functions.common.mod_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008074, VkglTestCase_008074_1, VkglTestCase_008074_2);

#define VkglTestCase_008075_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008075_2 "s.builtin_functions.common.mod_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008075, VkglTestCase_008075_1, VkglTestCase_008075_2);

#define VkglTestCase_008076_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008076_2 "sions.builtin_functions.common.mod_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008076, VkglTestCase_008076_1, VkglTestCase_008076_2);

#define VkglTestCase_008077_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008077_2 "ions.builtin_functions.common.mod_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008077, VkglTestCase_008077_1, VkglTestCase_008077_2);

#define VkglTestCase_008078_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008078_2 "ns.builtin_functions.common.mod_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008078, VkglTestCase_008078_1, VkglTestCase_008078_2);

#define VkglTestCase_008079_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008079_2 "s.builtin_functions.common.mod_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008079, VkglTestCase_008079_1, VkglTestCase_008079_2);

#define VkglTestCase_008080_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008080_2 "sions.builtin_functions.common.mod_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008080, VkglTestCase_008080_1, VkglTestCase_008080_2);

#define VkglTestCase_008081_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008081_2 "ions.builtin_functions.common.mod_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008081, VkglTestCase_008081_1, VkglTestCase_008081_2);

#define VkglTestCase_008082_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008082_2 "ns.builtin_functions.common.mod_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008082, VkglTestCase_008082_1, VkglTestCase_008082_2);

#define VkglTestCase_008083_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008083_2 "s.builtin_functions.common.mod_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008083, VkglTestCase_008083_1, VkglTestCase_008083_2);

#define VkglTestCase_008084_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008084_2 "ions.builtin_functions.common.min_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008084, VkglTestCase_008084_1, VkglTestCase_008084_2);

#define VkglTestCase_008085_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008085_2 "ons.builtin_functions.common.min_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008085, VkglTestCase_008085_1, VkglTestCase_008085_2);

#define VkglTestCase_008086_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008086_2 "sions.builtin_functions.common.min_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008086, VkglTestCase_008086_1, VkglTestCase_008086_2);

#define VkglTestCase_008087_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008087_2 "ions.builtin_functions.common.min_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008087, VkglTestCase_008087_1, VkglTestCase_008087_2);

#define VkglTestCase_008088_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008088_2 "ns.builtin_functions.common.min_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008088, VkglTestCase_008088_1, VkglTestCase_008088_2);

#define VkglTestCase_008089_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008089_2 "s.builtin_functions.common.min_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008089, VkglTestCase_008089_1, VkglTestCase_008089_2);

#define VkglTestCase_008090_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008090_2 "sions.builtin_functions.common.min_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008090, VkglTestCase_008090_1, VkglTestCase_008090_2);

#define VkglTestCase_008091_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008091_2 "ions.builtin_functions.common.min_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008091, VkglTestCase_008091_1, VkglTestCase_008091_2);

#define VkglTestCase_008092_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008092_2 "ns.builtin_functions.common.min_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008092, VkglTestCase_008092_1, VkglTestCase_008092_2);

#define VkglTestCase_008093_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008093_2 "s.builtin_functions.common.min_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008093, VkglTestCase_008093_1, VkglTestCase_008093_2);

#define VkglTestCase_008094_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008094_2 "sions.builtin_functions.common.min_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008094, VkglTestCase_008094_1, VkglTestCase_008094_2);

#define VkglTestCase_008095_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008095_2 "ions.builtin_functions.common.min_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008095, VkglTestCase_008095_1, VkglTestCase_008095_2);

#define VkglTestCase_008096_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008096_2 "ns.builtin_functions.common.min_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008096, VkglTestCase_008096_1, VkglTestCase_008096_2);

#define VkglTestCase_008097_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008097_2 "s.builtin_functions.common.min_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008097, VkglTestCase_008097_1, VkglTestCase_008097_2);

#define VkglTestCase_008098_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008098_2 "ions.builtin_functions.common.max_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008098, VkglTestCase_008098_1, VkglTestCase_008098_2);

#define VkglTestCase_008099_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008099_2 "ons.builtin_functions.common.max_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008099, VkglTestCase_008099_1, VkglTestCase_008099_2);

#define VkglTestCase_008100_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008100_2 "sions.builtin_functions.common.max_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008100, VkglTestCase_008100_1, VkglTestCase_008100_2);

#define VkglTestCase_008101_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008101_2 "ions.builtin_functions.common.max_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008101, VkglTestCase_008101_1, VkglTestCase_008101_2);

#define VkglTestCase_008102_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008102_2 "ns.builtin_functions.common.max_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008102, VkglTestCase_008102_1, VkglTestCase_008102_2);

#define VkglTestCase_008103_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008103_2 "s.builtin_functions.common.max_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008103, VkglTestCase_008103_1, VkglTestCase_008103_2);

#define VkglTestCase_008104_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008104_2 "sions.builtin_functions.common.max_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008104, VkglTestCase_008104_1, VkglTestCase_008104_2);

#define VkglTestCase_008105_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008105_2 "ions.builtin_functions.common.max_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008105, VkglTestCase_008105_1, VkglTestCase_008105_2);

#define VkglTestCase_008106_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008106_2 "ns.builtin_functions.common.max_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008106, VkglTestCase_008106_1, VkglTestCase_008106_2);

#define VkglTestCase_008107_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008107_2 "s.builtin_functions.common.max_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008107, VkglTestCase_008107_1, VkglTestCase_008107_2);

#define VkglTestCase_008108_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008108_2 "sions.builtin_functions.common.max_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008108, VkglTestCase_008108_1, VkglTestCase_008108_2);

#define VkglTestCase_008109_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008109_2 "ions.builtin_functions.common.max_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008109, VkglTestCase_008109_1, VkglTestCase_008109_2);

#define VkglTestCase_008110_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008110_2 "ns.builtin_functions.common.max_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008110, VkglTestCase_008110_1, VkglTestCase_008110_2);

#define VkglTestCase_008111_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008111_2 "s.builtin_functions.common.max_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008111, VkglTestCase_008111_1, VkglTestCase_008111_2);

#define VkglTestCase_008112_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008112_2 "ons.builtin_functions.common.clamp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008112, VkglTestCase_008112_1, VkglTestCase_008112_2);

#define VkglTestCase_008113_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008113_2 "ns.builtin_functions.common.clamp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008113, VkglTestCase_008113_1, VkglTestCase_008113_2);

#define VkglTestCase_008114_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008114_2 "ions.builtin_functions.common.clamp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008114, VkglTestCase_008114_1, VkglTestCase_008114_2);

#define VkglTestCase_008115_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008115_2 "ons.builtin_functions.common.clamp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008115, VkglTestCase_008115_1, VkglTestCase_008115_2);

#define VkglTestCase_008116_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008116_2 "s.builtin_functions.common.clamp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008116, VkglTestCase_008116_1, VkglTestCase_008116_2);

#define VkglTestCase_008117_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008117_2 ".builtin_functions.common.clamp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008117, VkglTestCase_008117_1, VkglTestCase_008117_2);

#define VkglTestCase_008118_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008118_2 "ions.builtin_functions.common.clamp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008118, VkglTestCase_008118_1, VkglTestCase_008118_2);

#define VkglTestCase_008119_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008119_2 "ons.builtin_functions.common.clamp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008119, VkglTestCase_008119_1, VkglTestCase_008119_2);

#define VkglTestCase_008120_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008120_2 "s.builtin_functions.common.clamp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008120, VkglTestCase_008120_1, VkglTestCase_008120_2);

#define VkglTestCase_008121_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008121_2 ".builtin_functions.common.clamp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008121, VkglTestCase_008121_1, VkglTestCase_008121_2);

#define VkglTestCase_008122_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008122_2 "ions.builtin_functions.common.clamp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008122, VkglTestCase_008122_1, VkglTestCase_008122_2);

#define VkglTestCase_008123_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008123_2 "ons.builtin_functions.common.clamp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008123, VkglTestCase_008123_1, VkglTestCase_008123_2);

#define VkglTestCase_008124_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008124_2 "s.builtin_functions.common.clamp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008124, VkglTestCase_008124_1, VkglTestCase_008124_2);

#define VkglTestCase_008125_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008125_2 ".builtin_functions.common.clamp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008125, VkglTestCase_008125_1, VkglTestCase_008125_2);

#define VkglTestCase_008126_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008126_2 "ions.builtin_functions.common.mix_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008126, VkglTestCase_008126_1, VkglTestCase_008126_2);

#define VkglTestCase_008127_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008127_2 "ons.builtin_functions.common.mix_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008127, VkglTestCase_008127_1, VkglTestCase_008127_2);

#define VkglTestCase_008128_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008128_2 "sions.builtin_functions.common.mix_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008128, VkglTestCase_008128_1, VkglTestCase_008128_2);

#define VkglTestCase_008129_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008129_2 "ions.builtin_functions.common.mix_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008129, VkglTestCase_008129_1, VkglTestCase_008129_2);

#define VkglTestCase_008130_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008130_2 "ns.builtin_functions.common.mix_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008130, VkglTestCase_008130_1, VkglTestCase_008130_2);

#define VkglTestCase_008131_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008131_2 "s.builtin_functions.common.mix_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008131, VkglTestCase_008131_1, VkglTestCase_008131_2);

#define VkglTestCase_008132_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008132_2 "sions.builtin_functions.common.mix_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008132, VkglTestCase_008132_1, VkglTestCase_008132_2);

#define VkglTestCase_008133_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008133_2 "ions.builtin_functions.common.mix_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008133, VkglTestCase_008133_1, VkglTestCase_008133_2);

#define VkglTestCase_008134_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008134_2 "ns.builtin_functions.common.mix_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008134, VkglTestCase_008134_1, VkglTestCase_008134_2);

#define VkglTestCase_008135_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008135_2 "s.builtin_functions.common.mix_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008135, VkglTestCase_008135_1, VkglTestCase_008135_2);

#define VkglTestCase_008136_1 "dEQP-GLES2.functional.shaders.constant_expres"
#define VkglTestCase_008136_2 "sions.builtin_functions.common.mix_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008136, VkglTestCase_008136_1, VkglTestCase_008136_2);

#define VkglTestCase_008137_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008137_2 "ions.builtin_functions.common.mix_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008137, VkglTestCase_008137_1, VkglTestCase_008137_2);

#define VkglTestCase_008138_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008138_2 "ns.builtin_functions.common.mix_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008138, VkglTestCase_008138_1, VkglTestCase_008138_2);

#define VkglTestCase_008139_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008139_2 "s.builtin_functions.common.mix_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008139, VkglTestCase_008139_1, VkglTestCase_008139_2);

#define VkglTestCase_008140_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008140_2 "ions.builtin_functions.common.step_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008140, VkglTestCase_008140_1, VkglTestCase_008140_2);

#define VkglTestCase_008141_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008141_2 "ons.builtin_functions.common.step_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008141, VkglTestCase_008141_1, VkglTestCase_008141_2);

#define VkglTestCase_008142_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008142_2 "ions.builtin_functions.common.step_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008142, VkglTestCase_008142_1, VkglTestCase_008142_2);

#define VkglTestCase_008143_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008143_2 "ons.builtin_functions.common.step_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008143, VkglTestCase_008143_1, VkglTestCase_008143_2);

#define VkglTestCase_008144_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008144_2 "s.builtin_functions.common.step_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008144, VkglTestCase_008144_1, VkglTestCase_008144_2);

#define VkglTestCase_008145_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008145_2 ".builtin_functions.common.step_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008145, VkglTestCase_008145_1, VkglTestCase_008145_2);

#define VkglTestCase_008146_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008146_2 "ions.builtin_functions.common.step_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008146, VkglTestCase_008146_1, VkglTestCase_008146_2);

#define VkglTestCase_008147_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008147_2 "ons.builtin_functions.common.step_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008147, VkglTestCase_008147_1, VkglTestCase_008147_2);

#define VkglTestCase_008148_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008148_2 "s.builtin_functions.common.step_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008148, VkglTestCase_008148_1, VkglTestCase_008148_2);

#define VkglTestCase_008149_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008149_2 ".builtin_functions.common.step_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008149, VkglTestCase_008149_1, VkglTestCase_008149_2);

#define VkglTestCase_008150_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_008150_2 "ions.builtin_functions.common.step_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008150, VkglTestCase_008150_1, VkglTestCase_008150_2);

#define VkglTestCase_008151_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008151_2 "ons.builtin_functions.common.step_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008151, VkglTestCase_008151_1, VkglTestCase_008151_2);

#define VkglTestCase_008152_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008152_2 "s.builtin_functions.common.step_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008152, VkglTestCase_008152_1, VkglTestCase_008152_2);

#define VkglTestCase_008153_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008153_2 ".builtin_functions.common.step_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008153, VkglTestCase_008153_1, VkglTestCase_008153_2);

#define VkglTestCase_008154_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008154_2 "s.builtin_functions.common.smoothstep_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008154, VkglTestCase_008154_1, VkglTestCase_008154_2);

#define VkglTestCase_008155_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008155_2 ".builtin_functions.common.smoothstep_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008155, VkglTestCase_008155_1, VkglTestCase_008155_2);

#define VkglTestCase_008156_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008156_2 "s.builtin_functions.common.smoothstep_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008156, VkglTestCase_008156_1, VkglTestCase_008156_2);

#define VkglTestCase_008157_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008157_2 ".builtin_functions.common.smoothstep_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008157, VkglTestCase_008157_1, VkglTestCase_008157_2);

#define VkglTestCase_008158_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008158_2 "uiltin_functions.common.smoothstep_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008158, VkglTestCase_008158_1, VkglTestCase_008158_2);

#define VkglTestCase_008159_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008159_2 "iltin_functions.common.smoothstep_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008159, VkglTestCase_008159_1, VkglTestCase_008159_2);

#define VkglTestCase_008160_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008160_2 "s.builtin_functions.common.smoothstep_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008160, VkglTestCase_008160_1, VkglTestCase_008160_2);

#define VkglTestCase_008161_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008161_2 ".builtin_functions.common.smoothstep_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008161, VkglTestCase_008161_1, VkglTestCase_008161_2);

#define VkglTestCase_008162_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008162_2 "uiltin_functions.common.smoothstep_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008162, VkglTestCase_008162_1, VkglTestCase_008162_2);

#define VkglTestCase_008163_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008163_2 "iltin_functions.common.smoothstep_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008163, VkglTestCase_008163_1, VkglTestCase_008163_2);

#define VkglTestCase_008164_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008164_2 "s.builtin_functions.common.smoothstep_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008164, VkglTestCase_008164_1, VkglTestCase_008164_2);

#define VkglTestCase_008165_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008165_2 ".builtin_functions.common.smoothstep_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008165, VkglTestCase_008165_1, VkglTestCase_008165_2);

#define VkglTestCase_008166_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008166_2 "uiltin_functions.common.smoothstep_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008166, VkglTestCase_008166_1, VkglTestCase_008166_2);

#define VkglTestCase_008167_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008167_2 "iltin_functions.common.smoothstep_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008167, VkglTestCase_008167_1, VkglTestCase_008167_2);
