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
#include "../ActsDeqpgles20003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002039_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002039_2 "ctions.qualifiers.in_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002039, VkglTestCase_002039_1, VkglTestCase_002039_2);

#define VkglTestCase_002040_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002040_2 "tions.qualifiers.in_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002040, VkglTestCase_002040_1, VkglTestCase_002040_2);

#define VkglTestCase_002041_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002041_2 "ctions.qualifiers.out_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002041, VkglTestCase_002041_1, VkglTestCase_002041_2);

#define VkglTestCase_002042_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002042_2 "tions.qualifiers.out_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002042, VkglTestCase_002042_1, VkglTestCase_002042_2);

#define VkglTestCase_002043_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002043_2 "tions.qualifiers.inout_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002043, VkglTestCase_002043_1, VkglTestCase_002043_2);

#define VkglTestCase_002044_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002044_2 "ions.qualifiers.inout_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002044, VkglTestCase_002044_1, VkglTestCase_002044_2);

#define VkglTestCase_002045_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002045_2 "ions.qualifiers.in_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002045, VkglTestCase_002045_1, VkglTestCase_002045_2);

#define VkglTestCase_002046_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002046_2 "ons.qualifiers.in_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002046, VkglTestCase_002046_1, VkglTestCase_002046_2);

#define VkglTestCase_002047_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002047_2 "ons.qualifiers.out_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002047, VkglTestCase_002047_1, VkglTestCase_002047_2);

#define VkglTestCase_002048_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002048_2 "ns.qualifiers.out_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002048, VkglTestCase_002048_1, VkglTestCase_002048_2);

#define VkglTestCase_002049_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002049_2 "ns.qualifiers.inout_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002049, VkglTestCase_002049_1, VkglTestCase_002049_2);

#define VkglTestCase_002050_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002050_2 "s.qualifiers.inout_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002050, VkglTestCase_002050_1, VkglTestCase_002050_2);

#define VkglTestCase_002051_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002051_2 "ons.qualifiers.in_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002051, VkglTestCase_002051_1, VkglTestCase_002051_2);

#define VkglTestCase_002052_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002052_2 "ns.qualifiers.in_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002052, VkglTestCase_002052_1, VkglTestCase_002052_2);

#define VkglTestCase_002053_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002053_2 "ons.qualifiers.out_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002053, VkglTestCase_002053_1, VkglTestCase_002053_2);

#define VkglTestCase_002054_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002054_2 "ns.qualifiers.out_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002054, VkglTestCase_002054_1, VkglTestCase_002054_2);

#define VkglTestCase_002055_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002055_2 "ns.qualifiers.inout_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002055, VkglTestCase_002055_1, VkglTestCase_002055_2);

#define VkglTestCase_002056_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002056_2 "s.qualifiers.inout_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002056, VkglTestCase_002056_1, VkglTestCase_002056_2);

#define VkglTestCase_002057_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002057_2 "tions.qualifiers.const_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002057, VkglTestCase_002057_1, VkglTestCase_002057_2);

#define VkglTestCase_002058_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002058_2 "ions.qualifiers.const_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002058, VkglTestCase_002058_1, VkglTestCase_002058_2);

#define VkglTestCase_002059_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002059_2 "ons.qualifiers.const_in_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002059, VkglTestCase_002059_1, VkglTestCase_002059_2);

#define VkglTestCase_002060_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002060_2 "ns.qualifiers.const_in_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002060, VkglTestCase_002060_1, VkglTestCase_002060_2);

#define VkglTestCase_002061_1 "dEQP-GLES2.functional.shaders.fu"
#define VkglTestCase_002061_2 "nctions.qualifiers.in_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002061, VkglTestCase_002061_1, VkglTestCase_002061_2);

#define VkglTestCase_002062_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002062_2 "ctions.qualifiers.in_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002062, VkglTestCase_002062_1, VkglTestCase_002062_2);

#define VkglTestCase_002063_1 "dEQP-GLES2.functional.shaders.fu"
#define VkglTestCase_002063_2 "nctions.qualifiers.out_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002063, VkglTestCase_002063_1, VkglTestCase_002063_2);

#define VkglTestCase_002064_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002064_2 "ctions.qualifiers.out_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002064, VkglTestCase_002064_1, VkglTestCase_002064_2);

#define VkglTestCase_002065_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002065_2 "ctions.qualifiers.inout_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002065, VkglTestCase_002065_1, VkglTestCase_002065_2);

#define VkglTestCase_002066_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002066_2 "tions.qualifiers.inout_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002066, VkglTestCase_002066_1, VkglTestCase_002066_2);

#define VkglTestCase_002067_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002067_2 "tions.qualifiers.in_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002067, VkglTestCase_002067_1, VkglTestCase_002067_2);

#define VkglTestCase_002068_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002068_2 "ions.qualifiers.in_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002068, VkglTestCase_002068_1, VkglTestCase_002068_2);

#define VkglTestCase_002069_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002069_2 "ions.qualifiers.out_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002069, VkglTestCase_002069_1, VkglTestCase_002069_2);

#define VkglTestCase_002070_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002070_2 "ons.qualifiers.out_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002070, VkglTestCase_002070_1, VkglTestCase_002070_2);

#define VkglTestCase_002071_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002071_2 "ons.qualifiers.inout_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002071, VkglTestCase_002071_1, VkglTestCase_002071_2);

#define VkglTestCase_002072_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002072_2 "ns.qualifiers.inout_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002072, VkglTestCase_002072_1, VkglTestCase_002072_2);

#define VkglTestCase_002073_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002073_2 "ions.qualifiers.in_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002073, VkglTestCase_002073_1, VkglTestCase_002073_2);

#define VkglTestCase_002074_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002074_2 "ons.qualifiers.in_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002074, VkglTestCase_002074_1, VkglTestCase_002074_2);

#define VkglTestCase_002075_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002075_2 "ions.qualifiers.out_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002075, VkglTestCase_002075_1, VkglTestCase_002075_2);

#define VkglTestCase_002076_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002076_2 "ons.qualifiers.out_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002076, VkglTestCase_002076_1, VkglTestCase_002076_2);

#define VkglTestCase_002077_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002077_2 "ons.qualifiers.inout_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002077, VkglTestCase_002077_1, VkglTestCase_002077_2);

#define VkglTestCase_002078_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002078_2 "ns.qualifiers.inout_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002078, VkglTestCase_002078_1, VkglTestCase_002078_2);

#define VkglTestCase_002079_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002079_2 "ctions.qualifiers.const_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002079, VkglTestCase_002079_1, VkglTestCase_002079_2);

#define VkglTestCase_002080_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002080_2 "tions.qualifiers.const_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002080, VkglTestCase_002080_1, VkglTestCase_002080_2);

#define VkglTestCase_002081_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002081_2 "ions.qualifiers.const_in_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002081, VkglTestCase_002081_1, VkglTestCase_002081_2);

#define VkglTestCase_002082_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002082_2 "ons.qualifiers.const_in_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002082, VkglTestCase_002082_1, VkglTestCase_002082_2);

#define VkglTestCase_002083_1 "dEQP-GLES2.functional.shaders.fu"
#define VkglTestCase_002083_2 "nctions.qualifiers.in_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002083, VkglTestCase_002083_1, VkglTestCase_002083_2);

#define VkglTestCase_002084_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002084_2 "ctions.qualifiers.in_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002084, VkglTestCase_002084_1, VkglTestCase_002084_2);

#define VkglTestCase_002085_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002085_2 "ctions.qualifiers.out_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002085, VkglTestCase_002085_1, VkglTestCase_002085_2);

#define VkglTestCase_002086_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002086_2 "tions.qualifiers.out_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002086, VkglTestCase_002086_1, VkglTestCase_002086_2);

#define VkglTestCase_002087_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002087_2 "tions.qualifiers.inout_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002087, VkglTestCase_002087_1, VkglTestCase_002087_2);

#define VkglTestCase_002088_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002088_2 "ions.qualifiers.inout_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002088, VkglTestCase_002088_1, VkglTestCase_002088_2);
