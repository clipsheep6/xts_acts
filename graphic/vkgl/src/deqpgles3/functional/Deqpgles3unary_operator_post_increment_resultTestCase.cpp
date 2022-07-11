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
#include "../ActsDeqpgles30008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007880_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007880_2 "perator.post_increment_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007880, VkglTestCase_007880_1, VkglTestCase_007880_2);

#define VkglTestCase_007881_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007881_2 "erator.post_increment_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007881, VkglTestCase_007881_1, VkglTestCase_007881_2);

#define VkglTestCase_007882_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007882_2 "rator.post_increment_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007882, VkglTestCase_007882_1, VkglTestCase_007882_2);

#define VkglTestCase_007883_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007883_2 "ator.post_increment_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007883, VkglTestCase_007883_1, VkglTestCase_007883_2);

#define VkglTestCase_007884_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007884_2 "erator.post_increment_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007884, VkglTestCase_007884_1, VkglTestCase_007884_2);

#define VkglTestCase_007885_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007885_2 "rator.post_increment_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007885, VkglTestCase_007885_1, VkglTestCase_007885_2);

#define VkglTestCase_007886_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007886_2 "perator.post_increment_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007886, VkglTestCase_007886_1, VkglTestCase_007886_2);

#define VkglTestCase_007887_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007887_2 "erator.post_increment_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007887, VkglTestCase_007887_1, VkglTestCase_007887_2);

#define VkglTestCase_007888_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007888_2 "erator.post_increment_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007888, VkglTestCase_007888_1, VkglTestCase_007888_2);

#define VkglTestCase_007889_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007889_2 "rator.post_increment_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007889, VkglTestCase_007889_1, VkglTestCase_007889_2);

#define VkglTestCase_007890_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007890_2 "perator.post_increment_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007890, VkglTestCase_007890_1, VkglTestCase_007890_2);

#define VkglTestCase_007891_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007891_2 "erator.post_increment_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007891, VkglTestCase_007891_1, VkglTestCase_007891_2);

#define VkglTestCase_007892_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007892_2 "perator.post_increment_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007892, VkglTestCase_007892_1, VkglTestCase_007892_2);

#define VkglTestCase_007893_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007893_2 "erator.post_increment_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007893, VkglTestCase_007893_1, VkglTestCase_007893_2);

#define VkglTestCase_007894_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007894_2 "erator.post_increment_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007894, VkglTestCase_007894_1, VkglTestCase_007894_2);

#define VkglTestCase_007895_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007895_2 "rator.post_increment_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007895, VkglTestCase_007895_1, VkglTestCase_007895_2);

#define VkglTestCase_007896_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007896_2 "perator.post_increment_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007896, VkglTestCase_007896_1, VkglTestCase_007896_2);

#define VkglTestCase_007897_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007897_2 "erator.post_increment_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007897, VkglTestCase_007897_1, VkglTestCase_007897_2);

#define VkglTestCase_007898_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007898_2 "perator.post_increment_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007898, VkglTestCase_007898_1, VkglTestCase_007898_2);

#define VkglTestCase_007899_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007899_2 "erator.post_increment_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007899, VkglTestCase_007899_1, VkglTestCase_007899_2);

#define VkglTestCase_007900_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007900_2 "erator.post_increment_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007900, VkglTestCase_007900_1, VkglTestCase_007900_2);

#define VkglTestCase_007901_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007901_2 "rator.post_increment_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007901, VkglTestCase_007901_1, VkglTestCase_007901_2);

#define VkglTestCase_007902_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007902_2 "perator.post_increment_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007902, VkglTestCase_007902_1, VkglTestCase_007902_2);

#define VkglTestCase_007903_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007903_2 "erator.post_increment_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007903, VkglTestCase_007903_1, VkglTestCase_007903_2);

#define VkglTestCase_007904_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007904_2 "operator.post_increment_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007904, VkglTestCase_007904_1, VkglTestCase_007904_2);

#define VkglTestCase_007905_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007905_2 "perator.post_increment_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007905, VkglTestCase_007905_1, VkglTestCase_007905_2);

#define VkglTestCase_007906_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007906_2 "erator.post_increment_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007906, VkglTestCase_007906_1, VkglTestCase_007906_2);

#define VkglTestCase_007907_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007907_2 "rator.post_increment_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007907, VkglTestCase_007907_1, VkglTestCase_007907_2);

#define VkglTestCase_007908_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007908_2 "perator.post_increment_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007908, VkglTestCase_007908_1, VkglTestCase_007908_2);

#define VkglTestCase_007909_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007909_2 "erator.post_increment_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007909, VkglTestCase_007909_1, VkglTestCase_007909_2);

#define VkglTestCase_007910_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007910_2 "perator.post_increment_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007910, VkglTestCase_007910_1, VkglTestCase_007910_2);

#define VkglTestCase_007911_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007911_2 "erator.post_increment_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007911, VkglTestCase_007911_1, VkglTestCase_007911_2);

#define VkglTestCase_007912_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007912_2 "rator.post_increment_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007912, VkglTestCase_007912_1, VkglTestCase_007912_2);

#define VkglTestCase_007913_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007913_2 "ator.post_increment_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007913, VkglTestCase_007913_1, VkglTestCase_007913_2);

#define VkglTestCase_007914_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007914_2 "erator.post_increment_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007914, VkglTestCase_007914_1, VkglTestCase_007914_2);

#define VkglTestCase_007915_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007915_2 "rator.post_increment_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007915, VkglTestCase_007915_1, VkglTestCase_007915_2);

#define VkglTestCase_007916_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007916_2 "perator.post_increment_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007916, VkglTestCase_007916_1, VkglTestCase_007916_2);

#define VkglTestCase_007917_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007917_2 "erator.post_increment_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007917, VkglTestCase_007917_1, VkglTestCase_007917_2);

#define VkglTestCase_007918_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007918_2 "rator.post_increment_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007918, VkglTestCase_007918_1, VkglTestCase_007918_2);

#define VkglTestCase_007919_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007919_2 "ator.post_increment_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007919, VkglTestCase_007919_1, VkglTestCase_007919_2);

#define VkglTestCase_007920_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007920_2 "erator.post_increment_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007920, VkglTestCase_007920_1, VkglTestCase_007920_2);

#define VkglTestCase_007921_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007921_2 "rator.post_increment_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007921, VkglTestCase_007921_1, VkglTestCase_007921_2);

#define VkglTestCase_007922_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007922_2 "perator.post_increment_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007922, VkglTestCase_007922_1, VkglTestCase_007922_2);

#define VkglTestCase_007923_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007923_2 "erator.post_increment_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007923, VkglTestCase_007923_1, VkglTestCase_007923_2);

#define VkglTestCase_007924_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007924_2 "rator.post_increment_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007924, VkglTestCase_007924_1, VkglTestCase_007924_2);

#define VkglTestCase_007925_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007925_2 "ator.post_increment_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007925, VkglTestCase_007925_1, VkglTestCase_007925_2);

#define VkglTestCase_007926_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007926_2 "erator.post_increment_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007926, VkglTestCase_007926_1, VkglTestCase_007926_2);

#define VkglTestCase_007927_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007927_2 "rator.post_increment_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007927, VkglTestCase_007927_1, VkglTestCase_007927_2);

#define VkglTestCase_007928_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007928_2 "perator.post_increment_result.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007928, VkglTestCase_007928_1, VkglTestCase_007928_2);

#define VkglTestCase_007929_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007929_2 "erator.post_increment_result.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007929, VkglTestCase_007929_1, VkglTestCase_007929_2);

#define VkglTestCase_007930_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007930_2 "erator.post_increment_result.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007930, VkglTestCase_007930_1, VkglTestCase_007930_2);

#define VkglTestCase_007931_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007931_2 "rator.post_increment_result.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007931, VkglTestCase_007931_1, VkglTestCase_007931_2);

#define VkglTestCase_007932_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007932_2 "perator.post_increment_result.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007932, VkglTestCase_007932_1, VkglTestCase_007932_2);

#define VkglTestCase_007933_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007933_2 "erator.post_increment_result.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007933, VkglTestCase_007933_1, VkglTestCase_007933_2);

#define VkglTestCase_007934_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007934_2 "perator.post_increment_result.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007934, VkglTestCase_007934_1, VkglTestCase_007934_2);

#define VkglTestCase_007935_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007935_2 "erator.post_increment_result.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007935, VkglTestCase_007935_1, VkglTestCase_007935_2);

#define VkglTestCase_007936_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007936_2 "rator.post_increment_result.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007936, VkglTestCase_007936_1, VkglTestCase_007936_2);

#define VkglTestCase_007937_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007937_2 "ator.post_increment_result.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007937, VkglTestCase_007937_1, VkglTestCase_007937_2);

#define VkglTestCase_007938_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007938_2 "erator.post_increment_result.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007938, VkglTestCase_007938_1, VkglTestCase_007938_2);

#define VkglTestCase_007939_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007939_2 "rator.post_increment_result.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007939, VkglTestCase_007939_1, VkglTestCase_007939_2);

#define VkglTestCase_007940_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007940_2 "perator.post_increment_result.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007940, VkglTestCase_007940_1, VkglTestCase_007940_2);

#define VkglTestCase_007941_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007941_2 "erator.post_increment_result.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007941, VkglTestCase_007941_1, VkglTestCase_007941_2);

#define VkglTestCase_007942_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007942_2 "rator.post_increment_result.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007942, VkglTestCase_007942_1, VkglTestCase_007942_2);

#define VkglTestCase_007943_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007943_2 "ator.post_increment_result.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007943, VkglTestCase_007943_1, VkglTestCase_007943_2);

#define VkglTestCase_007944_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007944_2 "erator.post_increment_result.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007944, VkglTestCase_007944_1, VkglTestCase_007944_2);

#define VkglTestCase_007945_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007945_2 "rator.post_increment_result.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007945, VkglTestCase_007945_1, VkglTestCase_007945_2);

#define VkglTestCase_007946_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007946_2 "perator.post_increment_result.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007946, VkglTestCase_007946_1, VkglTestCase_007946_2);

#define VkglTestCase_007947_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007947_2 "erator.post_increment_result.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007947, VkglTestCase_007947_1, VkglTestCase_007947_2);

#define VkglTestCase_007948_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007948_2 "rator.post_increment_result.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007948, VkglTestCase_007948_1, VkglTestCase_007948_2);

#define VkglTestCase_007949_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007949_2 "ator.post_increment_result.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007949, VkglTestCase_007949_1, VkglTestCase_007949_2);

#define VkglTestCase_007950_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007950_2 "erator.post_increment_result.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007950, VkglTestCase_007950_1, VkglTestCase_007950_2);

#define VkglTestCase_007951_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007951_2 "rator.post_increment_result.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007951, VkglTestCase_007951_1, VkglTestCase_007951_2);
