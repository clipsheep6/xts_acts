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

#define VkglTestCase_007153_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007153_2 "le_uniform_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007153, VkglTestCase_007153_1, VkglTestCase_007153_2);

#define VkglTestCase_007154_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007154_2 "e_uniform_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007154, VkglTestCase_007154_1, VkglTestCase_007154_2);

#define VkglTestCase_007155_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007155_2 "e_uniform_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007155, VkglTestCase_007155_1, VkglTestCase_007155_2);

#define VkglTestCase_007156_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007156_2 "_uniform_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007156, VkglTestCase_007156_1, VkglTestCase_007156_2);

#define VkglTestCase_007157_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007157_2 "_uniform_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007157, VkglTestCase_007157_1, VkglTestCase_007157_2);

#define VkglTestCase_007158_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007158_2 "uniform_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007158, VkglTestCase_007158_1, VkglTestCase_007158_2);

#define VkglTestCase_007159_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007159_2 "uniform_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007159, VkglTestCase_007159_1, VkglTestCase_007159_2);

#define VkglTestCase_007160_1 "dEQP-GLES3.functional.shaders.loops.do_while_u"
#define VkglTestCase_007160_2 "niform_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007160, VkglTestCase_007160_1, VkglTestCase_007160_2);

#define VkglTestCase_007161_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007161_2 "e_uniform_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007161, VkglTestCase_007161_1, VkglTestCase_007161_2);

#define VkglTestCase_007162_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007162_2 "_uniform_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007162, VkglTestCase_007162_1, VkglTestCase_007162_2);

#define VkglTestCase_007163_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007163_2 "_uniform_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007163, VkglTestCase_007163_1, VkglTestCase_007163_2);

#define VkglTestCase_007164_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007164_2 "uniform_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007164, VkglTestCase_007164_1, VkglTestCase_007164_2);

#define VkglTestCase_007165_1 "dEQP-GLES3.functional.shaders.loops.do_w"
#define VkglTestCase_007165_2 "hile_uniform_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007165, VkglTestCase_007165_1, VkglTestCase_007165_2);

#define VkglTestCase_007166_1 "dEQP-GLES3.functional.shaders.loops.do_wh"
#define VkglTestCase_007166_2 "ile_uniform_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007166, VkglTestCase_007166_1, VkglTestCase_007166_2);

#define VkglTestCase_007167_1 "dEQP-GLES3.functional.shaders.loops.do_while_uniform_it"
#define VkglTestCase_007167_2 "erations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007167, VkglTestCase_007167_1, VkglTestCase_007167_2);

#define VkglTestCase_007168_1 "dEQP-GLES3.functional.shaders.loops.do_while_uniform_ite"
#define VkglTestCase_007168_2 "rations.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007168, VkglTestCase_007168_1, VkglTestCase_007168_2);

#define VkglTestCase_007169_1 "dEQP-GLES3.functional.shaders.loops.do_while_uniform_i"
#define VkglTestCase_007169_2 "terations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007169, VkglTestCase_007169_1, VkglTestCase_007169_2);

#define VkglTestCase_007170_1 "dEQP-GLES3.functional.shaders.loops.do_while_uniform_it"
#define VkglTestCase_007170_2 "erations.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007170, VkglTestCase_007170_1, VkglTestCase_007170_2);

#define VkglTestCase_007171_1 "dEQP-GLES3.functional.shaders.loops.do_while_unifor"
#define VkglTestCase_007171_2 "m_iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007171, VkglTestCase_007171_1, VkglTestCase_007171_2);

#define VkglTestCase_007172_1 "dEQP-GLES3.functional.shaders.loops.do_while_uniform"
#define VkglTestCase_007172_2 "_iterations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007172, VkglTestCase_007172_1, VkglTestCase_007172_2);

#define VkglTestCase_007173_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007173_2 "e_uniform_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007173, VkglTestCase_007173_1, VkglTestCase_007173_2);

#define VkglTestCase_007174_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007174_2 "_uniform_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007174, VkglTestCase_007174_1, VkglTestCase_007174_2);

#define VkglTestCase_007175_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007175_2 "_uniform_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007175, VkglTestCase_007175_1, VkglTestCase_007175_2);

#define VkglTestCase_007176_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007176_2 "uniform_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007176, VkglTestCase_007176_1, VkglTestCase_007176_2);

#define VkglTestCase_007177_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007177_2 "_uniform_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007177, VkglTestCase_007177_1, VkglTestCase_007177_2);

#define VkglTestCase_007178_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007178_2 "uniform_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007178, VkglTestCase_007178_1, VkglTestCase_007178_2);

#define VkglTestCase_007179_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007179_2 "e_uniform_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007179, VkglTestCase_007179_1, VkglTestCase_007179_2);

#define VkglTestCase_007180_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007180_2 "_uniform_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007180, VkglTestCase_007180_1, VkglTestCase_007180_2);

#define VkglTestCase_007181_1 "dEQP-GLES3.functional.shaders.loops.do_while_u"
#define VkglTestCase_007181_2 "niform_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007181, VkglTestCase_007181_1, VkglTestCase_007181_2);

#define VkglTestCase_007182_1 "dEQP-GLES3.functional.shaders.loops.do_while_un"
#define VkglTestCase_007182_2 "iform_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007182, VkglTestCase_007182_1, VkglTestCase_007182_2);

#define VkglTestCase_007183_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007183_2 "uniform_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007183, VkglTestCase_007183_1, VkglTestCase_007183_2);

#define VkglTestCase_007184_1 "dEQP-GLES3.functional.shaders.loops.do_while_u"
#define VkglTestCase_007184_2 "niform_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007184, VkglTestCase_007184_1, VkglTestCase_007184_2);

#define VkglTestCase_007185_1 "dEQP-GLES3.functional.shaders.loops.do_while_u"
#define VkglTestCase_007185_2 "niform_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007185, VkglTestCase_007185_1, VkglTestCase_007185_2);

#define VkglTestCase_007186_1 "dEQP-GLES3.functional.shaders.loops.do_while_un"
#define VkglTestCase_007186_2 "iform_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007186, VkglTestCase_007186_1, VkglTestCase_007186_2);

#define VkglTestCase_007187_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007187_2 "le_uniform_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007187, VkglTestCase_007187_1, VkglTestCase_007187_2);

#define VkglTestCase_007188_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007188_2 "e_uniform_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007188, VkglTestCase_007188_1, VkglTestCase_007188_2);

#define VkglTestCase_007189_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007189_2 "e_uniform_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007189, VkglTestCase_007189_1, VkglTestCase_007189_2);

#define VkglTestCase_007190_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007190_2 "_uniform_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007190, VkglTestCase_007190_1, VkglTestCase_007190_2);

#define VkglTestCase_007191_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007191_2 "_uniform_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007191, VkglTestCase_007191_1, VkglTestCase_007191_2);

#define VkglTestCase_007192_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007192_2 "uniform_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007192, VkglTestCase_007192_1, VkglTestCase_007192_2);

#define VkglTestCase_007193_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007193_2 "uniform_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007193, VkglTestCase_007193_1, VkglTestCase_007193_2);

#define VkglTestCase_007194_1 "dEQP-GLES3.functional.shaders.loops.do_while_u"
#define VkglTestCase_007194_2 "niform_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007194, VkglTestCase_007194_1, VkglTestCase_007194_2);

#define VkglTestCase_007195_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007195_2 "le_uniform_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007195, VkglTestCase_007195_1, VkglTestCase_007195_2);

#define VkglTestCase_007196_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007196_2 "e_uniform_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007196, VkglTestCase_007196_1, VkglTestCase_007196_2);

#define VkglTestCase_007197_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007197_2 "le_uniform_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007197, VkglTestCase_007197_1, VkglTestCase_007197_2);

#define VkglTestCase_007198_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007198_2 "e_uniform_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007198, VkglTestCase_007198_1, VkglTestCase_007198_2);

#define VkglTestCase_007199_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007199_2 "uniform_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007199, VkglTestCase_007199_1, VkglTestCase_007199_2);

#define VkglTestCase_007200_1 "dEQP-GLES3.functional.shaders.loops.do_while_u"
#define VkglTestCase_007200_2 "niform_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007200, VkglTestCase_007200_1, VkglTestCase_007200_2);

#define VkglTestCase_007201_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007201_2 "le_uniform_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007201, VkglTestCase_007201_1, VkglTestCase_007201_2);

#define VkglTestCase_007202_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007202_2 "e_uniform_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007202, VkglTestCase_007202_1, VkglTestCase_007202_2);

#define VkglTestCase_007203_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007203_2 "le_uniform_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007203, VkglTestCase_007203_1, VkglTestCase_007203_2);

#define VkglTestCase_007204_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007204_2 "e_uniform_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007204, VkglTestCase_007204_1, VkglTestCase_007204_2);

#define VkglTestCase_007205_1 "dEQP-GLES3.functional.shaders.loops.do_"
#define VkglTestCase_007205_2 "while_uniform_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007205, VkglTestCase_007205_1, VkglTestCase_007205_2);

#define VkglTestCase_007206_1 "dEQP-GLES3.functional.shaders.loops.do_w"
#define VkglTestCase_007206_2 "hile_uniform_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007206, VkglTestCase_007206_1, VkglTestCase_007206_2);

#define VkglTestCase_007207_1 "dEQP-GLES3.functional.shaders.loops.do"
#define VkglTestCase_007207_2 "_while_uniform_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007207, VkglTestCase_007207_1, VkglTestCase_007207_2);

#define VkglTestCase_007208_1 "dEQP-GLES3.functional.shaders.loops.do_"
#define VkglTestCase_007208_2 "while_uniform_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007208, VkglTestCase_007208_1, VkglTestCase_007208_2);

#define VkglTestCase_007209_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007209_2 "e_uniform_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007209, VkglTestCase_007209_1, VkglTestCase_007209_2);

#define VkglTestCase_007210_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007210_2 "_uniform_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007210, VkglTestCase_007210_1, VkglTestCase_007210_2);

#define VkglTestCase_007211_1 "dEQP-GLES3.functional.shaders.loops.do_while_un"
#define VkglTestCase_007211_2 "iform_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007211, VkglTestCase_007211_1, VkglTestCase_007211_2);

#define VkglTestCase_007212_1 "dEQP-GLES3.functional.shaders.loops.do_while_uni"
#define VkglTestCase_007212_2 "form_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007212, VkglTestCase_007212_1, VkglTestCase_007212_2);

#define VkglTestCase_007213_1 "dEQP-GLES3.functional.shaders.loops.do_while_un"
#define VkglTestCase_007213_2 "iform_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007213, VkglTestCase_007213_1, VkglTestCase_007213_2);

#define VkglTestCase_007214_1 "dEQP-GLES3.functional.shaders.loops.do_while_uni"
#define VkglTestCase_007214_2 "form_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007214, VkglTestCase_007214_1, VkglTestCase_007214_2);
