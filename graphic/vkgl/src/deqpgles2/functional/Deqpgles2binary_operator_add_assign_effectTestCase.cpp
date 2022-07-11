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
#include "../ActsDeqpgles20005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004894_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004894_2 "_operator.add_assign_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004894, VkglTestCase_004894_1, VkglTestCase_004894_2);

#define VkglTestCase_004895_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004895_2 "operator.add_assign_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004895, VkglTestCase_004895_1, VkglTestCase_004895_2);

#define VkglTestCase_004896_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004896_2 "operator.add_assign_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004896, VkglTestCase_004896_1, VkglTestCase_004896_2);

#define VkglTestCase_004897_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004897_2 "perator.add_assign_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004897, VkglTestCase_004897_1, VkglTestCase_004897_2);

#define VkglTestCase_004898_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004898_2 "_operator.add_assign_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004898, VkglTestCase_004898_1, VkglTestCase_004898_2);

#define VkglTestCase_004899_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004899_2 "operator.add_assign_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004899, VkglTestCase_004899_1, VkglTestCase_004899_2);

#define VkglTestCase_004900_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_004900_2 "y_operator.add_assign_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004900, VkglTestCase_004900_1, VkglTestCase_004900_2);

#define VkglTestCase_004901_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004901_2 "_operator.add_assign_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004901, VkglTestCase_004901_1, VkglTestCase_004901_2);

#define VkglTestCase_004902_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004902_2 "operator.add_assign_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004902, VkglTestCase_004902_1, VkglTestCase_004902_2);

#define VkglTestCase_004903_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004903_2 "perator.add_assign_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004903, VkglTestCase_004903_1, VkglTestCase_004903_2);

#define VkglTestCase_004904_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004904_2 "_operator.add_assign_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004904, VkglTestCase_004904_1, VkglTestCase_004904_2);

#define VkglTestCase_004905_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004905_2 "operator.add_assign_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004905, VkglTestCase_004905_1, VkglTestCase_004905_2);

#define VkglTestCase_004906_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_004906_2 "y_operator.add_assign_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004906, VkglTestCase_004906_1, VkglTestCase_004906_2);

#define VkglTestCase_004907_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004907_2 "_operator.add_assign_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004907, VkglTestCase_004907_1, VkglTestCase_004907_2);

#define VkglTestCase_004908_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004908_2 "operator.add_assign_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004908, VkglTestCase_004908_1, VkglTestCase_004908_2);

#define VkglTestCase_004909_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004909_2 "perator.add_assign_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004909, VkglTestCase_004909_1, VkglTestCase_004909_2);

#define VkglTestCase_004910_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004910_2 "_operator.add_assign_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004910, VkglTestCase_004910_1, VkglTestCase_004910_2);

#define VkglTestCase_004911_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004911_2 "operator.add_assign_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004911, VkglTestCase_004911_1, VkglTestCase_004911_2);

#define VkglTestCase_004912_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_004912_2 "y_operator.add_assign_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004912, VkglTestCase_004912_1, VkglTestCase_004912_2);

#define VkglTestCase_004913_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004913_2 "_operator.add_assign_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004913, VkglTestCase_004913_1, VkglTestCase_004913_2);

#define VkglTestCase_004914_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004914_2 "operator.add_assign_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004914, VkglTestCase_004914_1, VkglTestCase_004914_2);

#define VkglTestCase_004915_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004915_2 "perator.add_assign_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004915, VkglTestCase_004915_1, VkglTestCase_004915_2);

#define VkglTestCase_004916_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004916_2 "_operator.add_assign_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004916, VkglTestCase_004916_1, VkglTestCase_004916_2);

#define VkglTestCase_004917_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004917_2 "operator.add_assign_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004917, VkglTestCase_004917_1, VkglTestCase_004917_2);

#define VkglTestCase_004918_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_004918_2 "y_operator.add_assign_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004918, VkglTestCase_004918_1, VkglTestCase_004918_2);

#define VkglTestCase_004919_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004919_2 "_operator.add_assign_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004919, VkglTestCase_004919_1, VkglTestCase_004919_2);

#define VkglTestCase_004920_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004920_2 "_operator.add_assign_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004920, VkglTestCase_004920_1, VkglTestCase_004920_2);

#define VkglTestCase_004921_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004921_2 "operator.add_assign_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004921, VkglTestCase_004921_1, VkglTestCase_004921_2);

#define VkglTestCase_004922_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_004922_2 "y_operator.add_assign_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004922, VkglTestCase_004922_1, VkglTestCase_004922_2);

#define VkglTestCase_004923_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004923_2 "_operator.add_assign_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004923, VkglTestCase_004923_1, VkglTestCase_004923_2);

#define VkglTestCase_004924_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004924_2 "_operator.add_assign_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004924, VkglTestCase_004924_1, VkglTestCase_004924_2);

#define VkglTestCase_004925_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004925_2 "operator.add_assign_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004925, VkglTestCase_004925_1, VkglTestCase_004925_2);

#define VkglTestCase_004926_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004926_2 "operator.add_assign_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004926, VkglTestCase_004926_1, VkglTestCase_004926_2);

#define VkglTestCase_004927_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004927_2 "perator.add_assign_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004927, VkglTestCase_004927_1, VkglTestCase_004927_2);

#define VkglTestCase_004928_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004928_2 "_operator.add_assign_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004928, VkglTestCase_004928_1, VkglTestCase_004928_2);

#define VkglTestCase_004929_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004929_2 "operator.add_assign_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004929, VkglTestCase_004929_1, VkglTestCase_004929_2);

#define VkglTestCase_004930_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004930_2 "_operator.add_assign_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004930, VkglTestCase_004930_1, VkglTestCase_004930_2);

#define VkglTestCase_004931_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004931_2 "operator.add_assign_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004931, VkglTestCase_004931_1, VkglTestCase_004931_2);

#define VkglTestCase_004932_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004932_2 "operator.add_assign_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004932, VkglTestCase_004932_1, VkglTestCase_004932_2);

#define VkglTestCase_004933_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004933_2 "perator.add_assign_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004933, VkglTestCase_004933_1, VkglTestCase_004933_2);

#define VkglTestCase_004934_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004934_2 "_operator.add_assign_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004934, VkglTestCase_004934_1, VkglTestCase_004934_2);

#define VkglTestCase_004935_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004935_2 "operator.add_assign_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004935, VkglTestCase_004935_1, VkglTestCase_004935_2);

#define VkglTestCase_004936_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004936_2 "_operator.add_assign_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004936, VkglTestCase_004936_1, VkglTestCase_004936_2);

#define VkglTestCase_004937_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004937_2 "operator.add_assign_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004937, VkglTestCase_004937_1, VkglTestCase_004937_2);

#define VkglTestCase_004938_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004938_2 "operator.add_assign_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004938, VkglTestCase_004938_1, VkglTestCase_004938_2);

#define VkglTestCase_004939_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004939_2 "perator.add_assign_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004939, VkglTestCase_004939_1, VkglTestCase_004939_2);

#define VkglTestCase_004940_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004940_2 "_operator.add_assign_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004940, VkglTestCase_004940_1, VkglTestCase_004940_2);

#define VkglTestCase_004941_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004941_2 "operator.add_assign_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004941, VkglTestCase_004941_1, VkglTestCase_004941_2);

#define VkglTestCase_004942_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004942_2 "perator.add_assign_effect.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004942, VkglTestCase_004942_1, VkglTestCase_004942_2);

#define VkglTestCase_004943_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004943_2 "erator.add_assign_effect.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004943, VkglTestCase_004943_1, VkglTestCase_004943_2);

#define VkglTestCase_004944_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_004944_2 "rator.add_assign_effect.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004944, VkglTestCase_004944_1, VkglTestCase_004944_2);

#define VkglTestCase_004945_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_004945_2 "ator.add_assign_effect.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004945, VkglTestCase_004945_1, VkglTestCase_004945_2);

#define VkglTestCase_004946_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004946_2 "erator.add_assign_effect.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004946, VkglTestCase_004946_1, VkglTestCase_004946_2);

#define VkglTestCase_004947_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_004947_2 "rator.add_assign_effect.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004947, VkglTestCase_004947_1, VkglTestCase_004947_2);

#define VkglTestCase_004948_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004948_2 "perator.add_assign_effect.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004948, VkglTestCase_004948_1, VkglTestCase_004948_2);

#define VkglTestCase_004949_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004949_2 "erator.add_assign_effect.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004949, VkglTestCase_004949_1, VkglTestCase_004949_2);

#define VkglTestCase_004950_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_004950_2 "rator.add_assign_effect.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004950, VkglTestCase_004950_1, VkglTestCase_004950_2);

#define VkglTestCase_004951_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_004951_2 "ator.add_assign_effect.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004951, VkglTestCase_004951_1, VkglTestCase_004951_2);

#define VkglTestCase_004952_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004952_2 "erator.add_assign_effect.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004952, VkglTestCase_004952_1, VkglTestCase_004952_2);

#define VkglTestCase_004953_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_004953_2 "rator.add_assign_effect.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004953, VkglTestCase_004953_1, VkglTestCase_004953_2);

#define VkglTestCase_004954_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004954_2 "perator.add_assign_effect.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004954, VkglTestCase_004954_1, VkglTestCase_004954_2);

#define VkglTestCase_004955_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004955_2 "erator.add_assign_effect.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004955, VkglTestCase_004955_1, VkglTestCase_004955_2);

#define VkglTestCase_004956_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_004956_2 "rator.add_assign_effect.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004956, VkglTestCase_004956_1, VkglTestCase_004956_2);

#define VkglTestCase_004957_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_004957_2 "ator.add_assign_effect.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004957, VkglTestCase_004957_1, VkglTestCase_004957_2);

#define VkglTestCase_004958_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004958_2 "erator.add_assign_effect.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004958, VkglTestCase_004958_1, VkglTestCase_004958_2);

#define VkglTestCase_004959_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_004959_2 "rator.add_assign_effect.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004959, VkglTestCase_004959_1, VkglTestCase_004959_2);

#define VkglTestCase_004960_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004960_2 "perator.add_assign_effect.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004960, VkglTestCase_004960_1, VkglTestCase_004960_2);

#define VkglTestCase_004961_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004961_2 "erator.add_assign_effect.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004961, VkglTestCase_004961_1, VkglTestCase_004961_2);

#define VkglTestCase_004962_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004962_2 "erator.add_assign_effect.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004962, VkglTestCase_004962_1, VkglTestCase_004962_2);

#define VkglTestCase_004963_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_004963_2 "rator.add_assign_effect.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004963, VkglTestCase_004963_1, VkglTestCase_004963_2);

#define VkglTestCase_004964_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004964_2 "perator.add_assign_effect.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004964, VkglTestCase_004964_1, VkglTestCase_004964_2);

#define VkglTestCase_004965_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004965_2 "erator.add_assign_effect.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004965, VkglTestCase_004965_1, VkglTestCase_004965_2);

#define VkglTestCase_004966_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004966_2 "perator.add_assign_effect.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004966, VkglTestCase_004966_1, VkglTestCase_004966_2);

#define VkglTestCase_004967_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004967_2 "erator.add_assign_effect.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004967, VkglTestCase_004967_1, VkglTestCase_004967_2);

#define VkglTestCase_004968_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004968_2 "erator.add_assign_effect.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004968, VkglTestCase_004968_1, VkglTestCase_004968_2);

#define VkglTestCase_004969_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_004969_2 "rator.add_assign_effect.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004969, VkglTestCase_004969_1, VkglTestCase_004969_2);

#define VkglTestCase_004970_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004970_2 "perator.add_assign_effect.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004970, VkglTestCase_004970_1, VkglTestCase_004970_2);

#define VkglTestCase_004971_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004971_2 "erator.add_assign_effect.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004971, VkglTestCase_004971_1, VkglTestCase_004971_2);

#define VkglTestCase_004972_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004972_2 "perator.add_assign_effect.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004972, VkglTestCase_004972_1, VkglTestCase_004972_2);

#define VkglTestCase_004973_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004973_2 "erator.add_assign_effect.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004973, VkglTestCase_004973_1, VkglTestCase_004973_2);

#define VkglTestCase_004974_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004974_2 "erator.add_assign_effect.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004974, VkglTestCase_004974_1, VkglTestCase_004974_2);

#define VkglTestCase_004975_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_004975_2 "rator.add_assign_effect.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004975, VkglTestCase_004975_1, VkglTestCase_004975_2);

#define VkglTestCase_004976_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004976_2 "perator.add_assign_effect.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004976, VkglTestCase_004976_1, VkglTestCase_004976_2);

#define VkglTestCase_004977_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_004977_2 "erator.add_assign_effect.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004977, VkglTestCase_004977_1, VkglTestCase_004977_2);
