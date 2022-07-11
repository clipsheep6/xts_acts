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
#include "../ActsDeqpgles30007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006899_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_006899_2 "_constant_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006899, VkglTestCase_006899_1, VkglTestCase_006899_2);

#define VkglTestCase_006900_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006900_2 "constant_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006900, VkglTestCase_006900_1, VkglTestCase_006900_2);

#define VkglTestCase_006901_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006901_2 "constant_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006901, VkglTestCase_006901_1, VkglTestCase_006901_2);

#define VkglTestCase_006902_1 "dEQP-GLES3.functional.shaders.loops.while_c"
#define VkglTestCase_006902_2 "onstant_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006902, VkglTestCase_006902_1, VkglTestCase_006902_2);

#define VkglTestCase_006903_1 "dEQP-GLES3.functional.shaders.loops.while_c"
#define VkglTestCase_006903_2 "onstant_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006903, VkglTestCase_006903_1, VkglTestCase_006903_2);

#define VkglTestCase_006904_1 "dEQP-GLES3.functional.shaders.loops.while_co"
#define VkglTestCase_006904_2 "nstant_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006904, VkglTestCase_006904_1, VkglTestCase_006904_2);

#define VkglTestCase_006905_1 "dEQP-GLES3.functional.shaders.loops.while_co"
#define VkglTestCase_006905_2 "nstant_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006905, VkglTestCase_006905_1, VkglTestCase_006905_2);

#define VkglTestCase_006906_1 "dEQP-GLES3.functional.shaders.loops.while_con"
#define VkglTestCase_006906_2 "stant_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006906, VkglTestCase_006906_1, VkglTestCase_006906_2);

#define VkglTestCase_006907_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006907_2 "constant_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006907, VkglTestCase_006907_1, VkglTestCase_006907_2);

#define VkglTestCase_006908_1 "dEQP-GLES3.functional.shaders.loops.while_c"
#define VkglTestCase_006908_2 "onstant_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006908, VkglTestCase_006908_1, VkglTestCase_006908_2);

#define VkglTestCase_006909_1 "dEQP-GLES3.functional.shaders.loops.while_c"
#define VkglTestCase_006909_2 "onstant_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006909, VkglTestCase_006909_1, VkglTestCase_006909_2);

#define VkglTestCase_006910_1 "dEQP-GLES3.functional.shaders.loops.while_co"
#define VkglTestCase_006910_2 "nstant_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006910, VkglTestCase_006910_1, VkglTestCase_006910_2);

#define VkglTestCase_006911_1 "dEQP-GLES3.functional.shaders.loops.whi"
#define VkglTestCase_006911_2 "le_constant_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006911, VkglTestCase_006911_1, VkglTestCase_006911_2);

#define VkglTestCase_006912_1 "dEQP-GLES3.functional.shaders.loops.whil"
#define VkglTestCase_006912_2 "e_constant_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006912, VkglTestCase_006912_1, VkglTestCase_006912_2);

#define VkglTestCase_006913_1 "dEQP-GLES3.functional.shaders.loops.while_constant_ite"
#define VkglTestCase_006913_2 "rations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006913, VkglTestCase_006913_1, VkglTestCase_006913_2);

#define VkglTestCase_006914_1 "dEQP-GLES3.functional.shaders.loops.while_constant_iter"
#define VkglTestCase_006914_2 "ations.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006914, VkglTestCase_006914_1, VkglTestCase_006914_2);

#define VkglTestCase_006915_1 "dEQP-GLES3.functional.shaders.loops.while_constant_it"
#define VkglTestCase_006915_2 "erations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006915, VkglTestCase_006915_1, VkglTestCase_006915_2);

#define VkglTestCase_006916_1 "dEQP-GLES3.functional.shaders.loops.while_constant_ite"
#define VkglTestCase_006916_2 "rations.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006916, VkglTestCase_006916_1, VkglTestCase_006916_2);

#define VkglTestCase_006917_1 "dEQP-GLES3.functional.shaders.loops.while_constant"
#define VkglTestCase_006917_2 "_iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006917, VkglTestCase_006917_1, VkglTestCase_006917_2);

#define VkglTestCase_006918_1 "dEQP-GLES3.functional.shaders.loops.while_constant_"
#define VkglTestCase_006918_2 "iterations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006918, VkglTestCase_006918_1, VkglTestCase_006918_2);

#define VkglTestCase_006919_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006919_2 "constant_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006919, VkglTestCase_006919_1, VkglTestCase_006919_2);

#define VkglTestCase_006920_1 "dEQP-GLES3.functional.shaders.loops.while_c"
#define VkglTestCase_006920_2 "onstant_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006920, VkglTestCase_006920_1, VkglTestCase_006920_2);

#define VkglTestCase_006921_1 "dEQP-GLES3.functional.shaders.loops.while_c"
#define VkglTestCase_006921_2 "onstant_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006921, VkglTestCase_006921_1, VkglTestCase_006921_2);

#define VkglTestCase_006922_1 "dEQP-GLES3.functional.shaders.loops.while_co"
#define VkglTestCase_006922_2 "nstant_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006922, VkglTestCase_006922_1, VkglTestCase_006922_2);

#define VkglTestCase_006923_1 "dEQP-GLES3.functional.shaders.loops.while_c"
#define VkglTestCase_006923_2 "onstant_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006923, VkglTestCase_006923_1, VkglTestCase_006923_2);

#define VkglTestCase_006924_1 "dEQP-GLES3.functional.shaders.loops.while_co"
#define VkglTestCase_006924_2 "nstant_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006924, VkglTestCase_006924_1, VkglTestCase_006924_2);

#define VkglTestCase_006925_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_006925_2 "_constant_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006925, VkglTestCase_006925_1, VkglTestCase_006925_2);

#define VkglTestCase_006926_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006926_2 "constant_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006926, VkglTestCase_006926_1, VkglTestCase_006926_2);

#define VkglTestCase_006927_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006927_2 "constant_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006927, VkglTestCase_006927_1, VkglTestCase_006927_2);

#define VkglTestCase_006928_1 "dEQP-GLES3.functional.shaders.loops.while_c"
#define VkglTestCase_006928_2 "onstant_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006928, VkglTestCase_006928_1, VkglTestCase_006928_2);

#define VkglTestCase_006929_1 "dEQP-GLES3.functional.shaders.loops.while_con"
#define VkglTestCase_006929_2 "stant_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006929, VkglTestCase_006929_1, VkglTestCase_006929_2);

#define VkglTestCase_006930_1 "dEQP-GLES3.functional.shaders.loops.while_cons"
#define VkglTestCase_006930_2 "tant_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006930, VkglTestCase_006930_1, VkglTestCase_006930_2);

#define VkglTestCase_006931_1 "dEQP-GLES3.functional.shaders.loops.while_co"
#define VkglTestCase_006931_2 "nstant_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006931, VkglTestCase_006931_1, VkglTestCase_006931_2);

#define VkglTestCase_006932_1 "dEQP-GLES3.functional.shaders.loops.while_con"
#define VkglTestCase_006932_2 "stant_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006932, VkglTestCase_006932_1, VkglTestCase_006932_2);

#define VkglTestCase_006933_1 "dEQP-GLES3.functional.shaders.loops.while_con"
#define VkglTestCase_006933_2 "stant_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006933, VkglTestCase_006933_1, VkglTestCase_006933_2);

#define VkglTestCase_006934_1 "dEQP-GLES3.functional.shaders.loops.while_cons"
#define VkglTestCase_006934_2 "tant_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006934, VkglTestCase_006934_1, VkglTestCase_006934_2);

#define VkglTestCase_006935_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_006935_2 "_constant_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006935, VkglTestCase_006935_1, VkglTestCase_006935_2);

#define VkglTestCase_006936_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006936_2 "constant_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006936, VkglTestCase_006936_1, VkglTestCase_006936_2);

#define VkglTestCase_006937_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006937_2 "constant_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006937, VkglTestCase_006937_1, VkglTestCase_006937_2);

#define VkglTestCase_006938_1 "dEQP-GLES3.functional.shaders.loops.while_c"
#define VkglTestCase_006938_2 "onstant_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006938, VkglTestCase_006938_1, VkglTestCase_006938_2);

#define VkglTestCase_006939_1 "dEQP-GLES3.functional.shaders.loops.while_c"
#define VkglTestCase_006939_2 "onstant_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006939, VkglTestCase_006939_1, VkglTestCase_006939_2);

#define VkglTestCase_006940_1 "dEQP-GLES3.functional.shaders.loops.while_co"
#define VkglTestCase_006940_2 "nstant_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006940, VkglTestCase_006940_1, VkglTestCase_006940_2);

#define VkglTestCase_006941_1 "dEQP-GLES3.functional.shaders.loops.while_co"
#define VkglTestCase_006941_2 "nstant_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006941, VkglTestCase_006941_1, VkglTestCase_006941_2);

#define VkglTestCase_006942_1 "dEQP-GLES3.functional.shaders.loops.while_con"
#define VkglTestCase_006942_2 "stant_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006942, VkglTestCase_006942_1, VkglTestCase_006942_2);

#define VkglTestCase_006943_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_006943_2 "_constant_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006943, VkglTestCase_006943_1, VkglTestCase_006943_2);

#define VkglTestCase_006944_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006944_2 "constant_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006944, VkglTestCase_006944_1, VkglTestCase_006944_2);

#define VkglTestCase_006945_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_006945_2 "_constant_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006945, VkglTestCase_006945_1, VkglTestCase_006945_2);

#define VkglTestCase_006946_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006946_2 "constant_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006946, VkglTestCase_006946_1, VkglTestCase_006946_2);

#define VkglTestCase_006947_1 "dEQP-GLES3.functional.shaders.loops.while_co"
#define VkglTestCase_006947_2 "nstant_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006947, VkglTestCase_006947_1, VkglTestCase_006947_2);

#define VkglTestCase_006948_1 "dEQP-GLES3.functional.shaders.loops.while_con"
#define VkglTestCase_006948_2 "stant_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006948, VkglTestCase_006948_1, VkglTestCase_006948_2);

#define VkglTestCase_006949_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_006949_2 "_constant_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006949, VkglTestCase_006949_1, VkglTestCase_006949_2);

#define VkglTestCase_006950_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006950_2 "constant_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006950, VkglTestCase_006950_1, VkglTestCase_006950_2);

#define VkglTestCase_006951_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_006951_2 "_constant_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006951, VkglTestCase_006951_1, VkglTestCase_006951_2);

#define VkglTestCase_006952_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006952_2 "constant_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006952, VkglTestCase_006952_1, VkglTestCase_006952_2);

#define VkglTestCase_006953_1 "dEQP-GLES3.functional.shaders.loops.wh"
#define VkglTestCase_006953_2 "ile_constant_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006953, VkglTestCase_006953_1, VkglTestCase_006953_2);

#define VkglTestCase_006954_1 "dEQP-GLES3.functional.shaders.loops.whi"
#define VkglTestCase_006954_2 "le_constant_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006954, VkglTestCase_006954_1, VkglTestCase_006954_2);

#define VkglTestCase_006955_1 "dEQP-GLES3.functional.shaders.loops.w"
#define VkglTestCase_006955_2 "hile_constant_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006955, VkglTestCase_006955_1, VkglTestCase_006955_2);

#define VkglTestCase_006956_1 "dEQP-GLES3.functional.shaders.loops.wh"
#define VkglTestCase_006956_2 "ile_constant_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006956, VkglTestCase_006956_1, VkglTestCase_006956_2);

#define VkglTestCase_006957_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006957_2 "constant_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006957, VkglTestCase_006957_1, VkglTestCase_006957_2);

#define VkglTestCase_006958_1 "dEQP-GLES3.functional.shaders.loops.while_c"
#define VkglTestCase_006958_2 "onstant_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006958, VkglTestCase_006958_1, VkglTestCase_006958_2);

#define VkglTestCase_006959_1 "dEQP-GLES3.functional.shaders.loops.while_cons"
#define VkglTestCase_006959_2 "tant_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006959, VkglTestCase_006959_1, VkglTestCase_006959_2);

#define VkglTestCase_006960_1 "dEQP-GLES3.functional.shaders.loops.while_const"
#define VkglTestCase_006960_2 "ant_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006960, VkglTestCase_006960_1, VkglTestCase_006960_2);

#define VkglTestCase_006961_1 "dEQP-GLES3.functional.shaders.loops.while_cons"
#define VkglTestCase_006961_2 "tant_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006961, VkglTestCase_006961_1, VkglTestCase_006961_2);

#define VkglTestCase_006962_1 "dEQP-GLES3.functional.shaders.loops.while_const"
#define VkglTestCase_006962_2 "ant_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006962, VkglTestCase_006962_1, VkglTestCase_006962_2);
