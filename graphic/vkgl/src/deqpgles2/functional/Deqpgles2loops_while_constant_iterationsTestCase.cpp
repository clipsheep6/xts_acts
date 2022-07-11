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
#include "../ActsDeqpgles20004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003517_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003517_2 "_constant_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003517, VkglTestCase_003517_1, VkglTestCase_003517_2);

#define VkglTestCase_003518_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003518_2 "constant_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003518, VkglTestCase_003518_1, VkglTestCase_003518_2);

#define VkglTestCase_003519_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003519_2 "constant_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003519, VkglTestCase_003519_1, VkglTestCase_003519_2);

#define VkglTestCase_003520_1 "dEQP-GLES2.functional.shaders.loops.while_c"
#define VkglTestCase_003520_2 "onstant_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003520, VkglTestCase_003520_1, VkglTestCase_003520_2);

#define VkglTestCase_003521_1 "dEQP-GLES2.functional.shaders.loops.while_c"
#define VkglTestCase_003521_2 "onstant_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003521, VkglTestCase_003521_1, VkglTestCase_003521_2);

#define VkglTestCase_003522_1 "dEQP-GLES2.functional.shaders.loops.while_co"
#define VkglTestCase_003522_2 "nstant_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003522, VkglTestCase_003522_1, VkglTestCase_003522_2);

#define VkglTestCase_003523_1 "dEQP-GLES2.functional.shaders.loops.while_co"
#define VkglTestCase_003523_2 "nstant_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003523, VkglTestCase_003523_1, VkglTestCase_003523_2);

#define VkglTestCase_003524_1 "dEQP-GLES2.functional.shaders.loops.while_con"
#define VkglTestCase_003524_2 "stant_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003524, VkglTestCase_003524_1, VkglTestCase_003524_2);

#define VkglTestCase_003525_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003525_2 "constant_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003525, VkglTestCase_003525_1, VkglTestCase_003525_2);

#define VkglTestCase_003526_1 "dEQP-GLES2.functional.shaders.loops.while_c"
#define VkglTestCase_003526_2 "onstant_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003526, VkglTestCase_003526_1, VkglTestCase_003526_2);

#define VkglTestCase_003527_1 "dEQP-GLES2.functional.shaders.loops.while_c"
#define VkglTestCase_003527_2 "onstant_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003527, VkglTestCase_003527_1, VkglTestCase_003527_2);

#define VkglTestCase_003528_1 "dEQP-GLES2.functional.shaders.loops.while_co"
#define VkglTestCase_003528_2 "nstant_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003528, VkglTestCase_003528_1, VkglTestCase_003528_2);

#define VkglTestCase_003529_1 "dEQP-GLES2.functional.shaders.loops.whi"
#define VkglTestCase_003529_2 "le_constant_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003529, VkglTestCase_003529_1, VkglTestCase_003529_2);

#define VkglTestCase_003530_1 "dEQP-GLES2.functional.shaders.loops.whil"
#define VkglTestCase_003530_2 "e_constant_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003530, VkglTestCase_003530_1, VkglTestCase_003530_2);

#define VkglTestCase_003531_1 "dEQP-GLES2.functional.shaders.loops.while_constant_ite"
#define VkglTestCase_003531_2 "rations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003531, VkglTestCase_003531_1, VkglTestCase_003531_2);

#define VkglTestCase_003532_1 "dEQP-GLES2.functional.shaders.loops.while_constant_iter"
#define VkglTestCase_003532_2 "ations.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003532, VkglTestCase_003532_1, VkglTestCase_003532_2);

#define VkglTestCase_003533_1 "dEQP-GLES2.functional.shaders.loops.while_constant_it"
#define VkglTestCase_003533_2 "erations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003533, VkglTestCase_003533_1, VkglTestCase_003533_2);

#define VkglTestCase_003534_1 "dEQP-GLES2.functional.shaders.loops.while_constant_ite"
#define VkglTestCase_003534_2 "rations.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003534, VkglTestCase_003534_1, VkglTestCase_003534_2);

#define VkglTestCase_003535_1 "dEQP-GLES2.functional.shaders.loops.while_constant"
#define VkglTestCase_003535_2 "_iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003535, VkglTestCase_003535_1, VkglTestCase_003535_2);

#define VkglTestCase_003536_1 "dEQP-GLES2.functional.shaders.loops.while_constant_"
#define VkglTestCase_003536_2 "iterations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003536, VkglTestCase_003536_1, VkglTestCase_003536_2);

#define VkglTestCase_003537_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003537_2 "constant_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003537, VkglTestCase_003537_1, VkglTestCase_003537_2);

#define VkglTestCase_003538_1 "dEQP-GLES2.functional.shaders.loops.while_c"
#define VkglTestCase_003538_2 "onstant_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003538, VkglTestCase_003538_1, VkglTestCase_003538_2);

#define VkglTestCase_003539_1 "dEQP-GLES2.functional.shaders.loops.while_c"
#define VkglTestCase_003539_2 "onstant_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003539, VkglTestCase_003539_1, VkglTestCase_003539_2);

#define VkglTestCase_003540_1 "dEQP-GLES2.functional.shaders.loops.while_co"
#define VkglTestCase_003540_2 "nstant_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003540, VkglTestCase_003540_1, VkglTestCase_003540_2);

#define VkglTestCase_003541_1 "dEQP-GLES2.functional.shaders.loops.while_c"
#define VkglTestCase_003541_2 "onstant_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003541, VkglTestCase_003541_1, VkglTestCase_003541_2);

#define VkglTestCase_003542_1 "dEQP-GLES2.functional.shaders.loops.while_co"
#define VkglTestCase_003542_2 "nstant_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003542, VkglTestCase_003542_1, VkglTestCase_003542_2);

#define VkglTestCase_003543_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003543_2 "_constant_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003543, VkglTestCase_003543_1, VkglTestCase_003543_2);

#define VkglTestCase_003544_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003544_2 "constant_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003544, VkglTestCase_003544_1, VkglTestCase_003544_2);

#define VkglTestCase_003545_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003545_2 "constant_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003545, VkglTestCase_003545_1, VkglTestCase_003545_2);

#define VkglTestCase_003546_1 "dEQP-GLES2.functional.shaders.loops.while_c"
#define VkglTestCase_003546_2 "onstant_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003546, VkglTestCase_003546_1, VkglTestCase_003546_2);

#define VkglTestCase_003547_1 "dEQP-GLES2.functional.shaders.loops.while_con"
#define VkglTestCase_003547_2 "stant_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003547, VkglTestCase_003547_1, VkglTestCase_003547_2);

#define VkglTestCase_003548_1 "dEQP-GLES2.functional.shaders.loops.while_cons"
#define VkglTestCase_003548_2 "tant_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003548, VkglTestCase_003548_1, VkglTestCase_003548_2);

#define VkglTestCase_003549_1 "dEQP-GLES2.functional.shaders.loops.while_co"
#define VkglTestCase_003549_2 "nstant_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003549, VkglTestCase_003549_1, VkglTestCase_003549_2);

#define VkglTestCase_003550_1 "dEQP-GLES2.functional.shaders.loops.while_con"
#define VkglTestCase_003550_2 "stant_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003550, VkglTestCase_003550_1, VkglTestCase_003550_2);

#define VkglTestCase_003551_1 "dEQP-GLES2.functional.shaders.loops.while_con"
#define VkglTestCase_003551_2 "stant_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003551, VkglTestCase_003551_1, VkglTestCase_003551_2);

#define VkglTestCase_003552_1 "dEQP-GLES2.functional.shaders.loops.while_cons"
#define VkglTestCase_003552_2 "tant_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003552, VkglTestCase_003552_1, VkglTestCase_003552_2);

#define VkglTestCase_003553_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003553_2 "_constant_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003553, VkglTestCase_003553_1, VkglTestCase_003553_2);

#define VkglTestCase_003554_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003554_2 "constant_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003554, VkglTestCase_003554_1, VkglTestCase_003554_2);

#define VkglTestCase_003555_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003555_2 "constant_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003555, VkglTestCase_003555_1, VkglTestCase_003555_2);

#define VkglTestCase_003556_1 "dEQP-GLES2.functional.shaders.loops.while_c"
#define VkglTestCase_003556_2 "onstant_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003556, VkglTestCase_003556_1, VkglTestCase_003556_2);

#define VkglTestCase_003557_1 "dEQP-GLES2.functional.shaders.loops.while_c"
#define VkglTestCase_003557_2 "onstant_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003557, VkglTestCase_003557_1, VkglTestCase_003557_2);

#define VkglTestCase_003558_1 "dEQP-GLES2.functional.shaders.loops.while_co"
#define VkglTestCase_003558_2 "nstant_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003558, VkglTestCase_003558_1, VkglTestCase_003558_2);

#define VkglTestCase_003559_1 "dEQP-GLES2.functional.shaders.loops.while_co"
#define VkglTestCase_003559_2 "nstant_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003559, VkglTestCase_003559_1, VkglTestCase_003559_2);

#define VkglTestCase_003560_1 "dEQP-GLES2.functional.shaders.loops.while_con"
#define VkglTestCase_003560_2 "stant_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003560, VkglTestCase_003560_1, VkglTestCase_003560_2);

#define VkglTestCase_003561_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003561_2 "_constant_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003561, VkglTestCase_003561_1, VkglTestCase_003561_2);

#define VkglTestCase_003562_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003562_2 "constant_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003562, VkglTestCase_003562_1, VkglTestCase_003562_2);

#define VkglTestCase_003563_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003563_2 "_constant_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003563, VkglTestCase_003563_1, VkglTestCase_003563_2);

#define VkglTestCase_003564_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003564_2 "constant_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003564, VkglTestCase_003564_1, VkglTestCase_003564_2);

#define VkglTestCase_003565_1 "dEQP-GLES2.functional.shaders.loops.while_co"
#define VkglTestCase_003565_2 "nstant_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003565, VkglTestCase_003565_1, VkglTestCase_003565_2);

#define VkglTestCase_003566_1 "dEQP-GLES2.functional.shaders.loops.while_con"
#define VkglTestCase_003566_2 "stant_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003566, VkglTestCase_003566_1, VkglTestCase_003566_2);

#define VkglTestCase_003567_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003567_2 "_constant_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003567, VkglTestCase_003567_1, VkglTestCase_003567_2);

#define VkglTestCase_003568_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003568_2 "constant_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003568, VkglTestCase_003568_1, VkglTestCase_003568_2);

#define VkglTestCase_003569_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003569_2 "_constant_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003569, VkglTestCase_003569_1, VkglTestCase_003569_2);

#define VkglTestCase_003570_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003570_2 "constant_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003570, VkglTestCase_003570_1, VkglTestCase_003570_2);

#define VkglTestCase_003571_1 "dEQP-GLES2.functional.shaders.loops.wh"
#define VkglTestCase_003571_2 "ile_constant_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003571, VkglTestCase_003571_1, VkglTestCase_003571_2);

#define VkglTestCase_003572_1 "dEQP-GLES2.functional.shaders.loops.whi"
#define VkglTestCase_003572_2 "le_constant_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003572, VkglTestCase_003572_1, VkglTestCase_003572_2);

#define VkglTestCase_003573_1 "dEQP-GLES2.functional.shaders.loops.w"
#define VkglTestCase_003573_2 "hile_constant_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003573, VkglTestCase_003573_1, VkglTestCase_003573_2);

#define VkglTestCase_003574_1 "dEQP-GLES2.functional.shaders.loops.wh"
#define VkglTestCase_003574_2 "ile_constant_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003574, VkglTestCase_003574_1, VkglTestCase_003574_2);

#define VkglTestCase_003575_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003575_2 "constant_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003575, VkglTestCase_003575_1, VkglTestCase_003575_2);

#define VkglTestCase_003576_1 "dEQP-GLES2.functional.shaders.loops.while_c"
#define VkglTestCase_003576_2 "onstant_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003576, VkglTestCase_003576_1, VkglTestCase_003576_2);

#define VkglTestCase_003577_1 "dEQP-GLES2.functional.shaders.loops.while_cons"
#define VkglTestCase_003577_2 "tant_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003577, VkglTestCase_003577_1, VkglTestCase_003577_2);

#define VkglTestCase_003578_1 "dEQP-GLES2.functional.shaders.loops.while_const"
#define VkglTestCase_003578_2 "ant_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003578, VkglTestCase_003578_1, VkglTestCase_003578_2);

#define VkglTestCase_003579_1 "dEQP-GLES2.functional.shaders.loops.while_cons"
#define VkglTestCase_003579_2 "tant_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003579, VkglTestCase_003579_1, VkglTestCase_003579_2);

#define VkglTestCase_003580_1 "dEQP-GLES2.functional.shaders.loops.while_const"
#define VkglTestCase_003580_2 "ant_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003580, VkglTestCase_003580_1, VkglTestCase_003580_2);

#define VkglTestCase_003581_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003581_2 "constant_iterations.conditional_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003581, VkglTestCase_003581_1, VkglTestCase_003581_2);

#define VkglTestCase_003582_1 "dEQP-GLES2.functional.shaders.loops.while_c"
#define VkglTestCase_003582_2 "onstant_iterations.conditional_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003582, VkglTestCase_003582_1, VkglTestCase_003582_2);

#define VkglTestCase_003583_1 "dEQP-GLES2.functional.shaders.loops.while_co"
#define VkglTestCase_003583_2 "nstant_iterations.function_call_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003583, VkglTestCase_003583_1, VkglTestCase_003583_2);

#define VkglTestCase_003584_1 "dEQP-GLES2.functional.shaders.loops.while_con"
#define VkglTestCase_003584_2 "stant_iterations.function_call_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003584, VkglTestCase_003584_1, VkglTestCase_003584_2);

#define VkglTestCase_003585_1 "dEQP-GLES2.functional.shaders.loops.while_co"
#define VkglTestCase_003585_2 "nstant_iterations.function_call_inout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003585, VkglTestCase_003585_1, VkglTestCase_003585_2);

#define VkglTestCase_003586_1 "dEQP-GLES2.functional.shaders.loops.while_con"
#define VkglTestCase_003586_2 "stant_iterations.function_call_inout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003586, VkglTestCase_003586_1, VkglTestCase_003586_2);
