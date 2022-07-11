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

#define VkglTestCase_008168_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008168_2 "s.builtin_functions.geometric.length_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008168, VkglTestCase_008168_1, VkglTestCase_008168_2);

#define VkglTestCase_008169_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008169_2 ".builtin_functions.geometric.length_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008169, VkglTestCase_008169_1, VkglTestCase_008169_2);

#define VkglTestCase_008170_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008170_2 "ns.builtin_functions.geometric.length_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008170, VkglTestCase_008170_1, VkglTestCase_008170_2);

#define VkglTestCase_008171_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008171_2 "s.builtin_functions.geometric.length_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008171, VkglTestCase_008171_1, VkglTestCase_008171_2);

#define VkglTestCase_008172_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008172_2 "ns.builtin_functions.geometric.length_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008172, VkglTestCase_008172_1, VkglTestCase_008172_2);

#define VkglTestCase_008173_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008173_2 "s.builtin_functions.geometric.length_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008173, VkglTestCase_008173_1, VkglTestCase_008173_2);

#define VkglTestCase_008174_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008174_2 "ns.builtin_functions.geometric.length_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008174, VkglTestCase_008174_1, VkglTestCase_008174_2);

#define VkglTestCase_008175_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008175_2 "s.builtin_functions.geometric.length_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008175, VkglTestCase_008175_1, VkglTestCase_008175_2);

#define VkglTestCase_008176_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008176_2 ".builtin_functions.geometric.distance_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008176, VkglTestCase_008176_1, VkglTestCase_008176_2);

#define VkglTestCase_008177_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008177_2 "builtin_functions.geometric.distance_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008177, VkglTestCase_008177_1, VkglTestCase_008177_2);

#define VkglTestCase_008178_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008178_2 "s.builtin_functions.geometric.distance_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008178, VkglTestCase_008178_1, VkglTestCase_008178_2);

#define VkglTestCase_008179_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008179_2 ".builtin_functions.geometric.distance_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008179, VkglTestCase_008179_1, VkglTestCase_008179_2);

#define VkglTestCase_008180_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008180_2 "s.builtin_functions.geometric.distance_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008180, VkglTestCase_008180_1, VkglTestCase_008180_2);

#define VkglTestCase_008181_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008181_2 ".builtin_functions.geometric.distance_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008181, VkglTestCase_008181_1, VkglTestCase_008181_2);

#define VkglTestCase_008182_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008182_2 "s.builtin_functions.geometric.distance_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008182, VkglTestCase_008182_1, VkglTestCase_008182_2);

#define VkglTestCase_008183_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008183_2 ".builtin_functions.geometric.distance_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008183, VkglTestCase_008183_1, VkglTestCase_008183_2);

#define VkglTestCase_008184_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008184_2 "ons.builtin_functions.geometric.dot_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008184, VkglTestCase_008184_1, VkglTestCase_008184_2);

#define VkglTestCase_008185_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008185_2 "ns.builtin_functions.geometric.dot_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008185, VkglTestCase_008185_1, VkglTestCase_008185_2);

#define VkglTestCase_008186_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008186_2 "ons.builtin_functions.geometric.dot_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008186, VkglTestCase_008186_1, VkglTestCase_008186_2);

#define VkglTestCase_008187_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008187_2 "ns.builtin_functions.geometric.dot_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008187, VkglTestCase_008187_1, VkglTestCase_008187_2);

#define VkglTestCase_008188_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008188_2 "ons.builtin_functions.geometric.dot_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008188, VkglTestCase_008188_1, VkglTestCase_008188_2);

#define VkglTestCase_008189_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008189_2 "ns.builtin_functions.geometric.dot_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008189, VkglTestCase_008189_1, VkglTestCase_008189_2);

#define VkglTestCase_008190_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_008190_2 "ons.builtin_functions.geometric.dot_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008190, VkglTestCase_008190_1, VkglTestCase_008190_2);

#define VkglTestCase_008191_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008191_2 "ns.builtin_functions.geometric.dot_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008191, VkglTestCase_008191_1, VkglTestCase_008191_2);

#define VkglTestCase_008192_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008192_2 ".builtin_functions.geometric.normalize_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008192, VkglTestCase_008192_1, VkglTestCase_008192_2);

#define VkglTestCase_008193_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008193_2 "builtin_functions.geometric.normalize_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008193, VkglTestCase_008193_1, VkglTestCase_008193_2);

#define VkglTestCase_008194_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008194_2 ".builtin_functions.geometric.normalize_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008194, VkglTestCase_008194_1, VkglTestCase_008194_2);

#define VkglTestCase_008195_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008195_2 "builtin_functions.geometric.normalize_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008195, VkglTestCase_008195_1, VkglTestCase_008195_2);

#define VkglTestCase_008196_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008196_2 ".builtin_functions.geometric.normalize_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008196, VkglTestCase_008196_1, VkglTestCase_008196_2);

#define VkglTestCase_008197_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008197_2 "builtin_functions.geometric.normalize_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008197, VkglTestCase_008197_1, VkglTestCase_008197_2);

#define VkglTestCase_008198_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008198_2 ".builtin_functions.geometric.normalize_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008198, VkglTestCase_008198_1, VkglTestCase_008198_2);

#define VkglTestCase_008199_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008199_2 "builtin_functions.geometric.normalize_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008199, VkglTestCase_008199_1, VkglTestCase_008199_2);

#define VkglTestCase_008200_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008200_2 "builtin_functions.geometric.faceforward_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008200, VkglTestCase_008200_1, VkglTestCase_008200_2);

#define VkglTestCase_008201_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008201_2 "uiltin_functions.geometric.faceforward_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008201, VkglTestCase_008201_1, VkglTestCase_008201_2);

#define VkglTestCase_008202_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008202_2 "builtin_functions.geometric.faceforward_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008202, VkglTestCase_008202_1, VkglTestCase_008202_2);

#define VkglTestCase_008203_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008203_2 "uiltin_functions.geometric.faceforward_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008203, VkglTestCase_008203_1, VkglTestCase_008203_2);

#define VkglTestCase_008204_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008204_2 "builtin_functions.geometric.faceforward_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008204, VkglTestCase_008204_1, VkglTestCase_008204_2);

#define VkglTestCase_008205_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008205_2 "uiltin_functions.geometric.faceforward_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008205, VkglTestCase_008205_1, VkglTestCase_008205_2);

#define VkglTestCase_008206_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008206_2 "builtin_functions.geometric.faceforward_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008206, VkglTestCase_008206_1, VkglTestCase_008206_2);

#define VkglTestCase_008207_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008207_2 "uiltin_functions.geometric.faceforward_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008207, VkglTestCase_008207_1, VkglTestCase_008207_2);

#define VkglTestCase_008208_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008208_2 "s.builtin_functions.geometric.reflect_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008208, VkglTestCase_008208_1, VkglTestCase_008208_2);

#define VkglTestCase_008209_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008209_2 ".builtin_functions.geometric.reflect_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008209, VkglTestCase_008209_1, VkglTestCase_008209_2);

#define VkglTestCase_008210_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008210_2 "s.builtin_functions.geometric.reflect_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008210, VkglTestCase_008210_1, VkglTestCase_008210_2);

#define VkglTestCase_008211_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008211_2 ".builtin_functions.geometric.reflect_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008211, VkglTestCase_008211_1, VkglTestCase_008211_2);

#define VkglTestCase_008212_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008212_2 "s.builtin_functions.geometric.reflect_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008212, VkglTestCase_008212_1, VkglTestCase_008212_2);

#define VkglTestCase_008213_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008213_2 ".builtin_functions.geometric.reflect_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008213, VkglTestCase_008213_1, VkglTestCase_008213_2);

#define VkglTestCase_008214_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008214_2 "s.builtin_functions.geometric.reflect_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008214, VkglTestCase_008214_1, VkglTestCase_008214_2);

#define VkglTestCase_008215_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008215_2 ".builtin_functions.geometric.reflect_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008215, VkglTestCase_008215_1, VkglTestCase_008215_2);

#define VkglTestCase_008216_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008216_2 "s.builtin_functions.geometric.refract_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008216, VkglTestCase_008216_1, VkglTestCase_008216_2);

#define VkglTestCase_008217_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008217_2 ".builtin_functions.geometric.refract_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008217, VkglTestCase_008217_1, VkglTestCase_008217_2);

#define VkglTestCase_008218_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008218_2 "s.builtin_functions.geometric.refract_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008218, VkglTestCase_008218_1, VkglTestCase_008218_2);

#define VkglTestCase_008219_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008219_2 ".builtin_functions.geometric.refract_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008219, VkglTestCase_008219_1, VkglTestCase_008219_2);

#define VkglTestCase_008220_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008220_2 "s.builtin_functions.geometric.refract_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008220, VkglTestCase_008220_1, VkglTestCase_008220_2);

#define VkglTestCase_008221_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008221_2 ".builtin_functions.geometric.refract_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008221, VkglTestCase_008221_1, VkglTestCase_008221_2);

#define VkglTestCase_008222_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008222_2 "s.builtin_functions.geometric.refract_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008222, VkglTestCase_008222_1, VkglTestCase_008222_2);

#define VkglTestCase_008223_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008223_2 ".builtin_functions.geometric.refract_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008223, VkglTestCase_008223_1, VkglTestCase_008223_2);
