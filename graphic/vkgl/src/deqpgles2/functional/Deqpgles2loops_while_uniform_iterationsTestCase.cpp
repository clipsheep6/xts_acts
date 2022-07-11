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

#define VkglTestCase_003587_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003587_2 "_uniform_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003587, VkglTestCase_003587_1, VkglTestCase_003587_2);

#define VkglTestCase_003588_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003588_2 "uniform_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003588, VkglTestCase_003588_1, VkglTestCase_003588_2);

#define VkglTestCase_003589_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003589_2 "uniform_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003589, VkglTestCase_003589_1, VkglTestCase_003589_2);

#define VkglTestCase_003590_1 "dEQP-GLES2.functional.shaders.loops.while_u"
#define VkglTestCase_003590_2 "niform_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003590, VkglTestCase_003590_1, VkglTestCase_003590_2);

#define VkglTestCase_003591_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003591_2 "uniform_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003591, VkglTestCase_003591_1, VkglTestCase_003591_2);

#define VkglTestCase_003592_1 "dEQP-GLES2.functional.shaders.loops.while_u"
#define VkglTestCase_003592_2 "niform_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003592, VkglTestCase_003592_1, VkglTestCase_003592_2);

#define VkglTestCase_003593_1 "dEQP-GLES2.functional.shaders.loops.while_u"
#define VkglTestCase_003593_2 "niform_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003593, VkglTestCase_003593_1, VkglTestCase_003593_2);

#define VkglTestCase_003594_1 "dEQP-GLES2.functional.shaders.loops.while_un"
#define VkglTestCase_003594_2 "iform_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003594, VkglTestCase_003594_1, VkglTestCase_003594_2);

#define VkglTestCase_003595_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003595_2 "_uniform_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003595, VkglTestCase_003595_1, VkglTestCase_003595_2);

#define VkglTestCase_003596_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003596_2 "uniform_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003596, VkglTestCase_003596_1, VkglTestCase_003596_2);

#define VkglTestCase_003597_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003597_2 "uniform_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003597, VkglTestCase_003597_1, VkglTestCase_003597_2);

#define VkglTestCase_003598_1 "dEQP-GLES2.functional.shaders.loops.while_u"
#define VkglTestCase_003598_2 "niform_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003598, VkglTestCase_003598_1, VkglTestCase_003598_2);

#define VkglTestCase_003599_1 "dEQP-GLES2.functional.shaders.loops.whi"
#define VkglTestCase_003599_2 "le_uniform_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003599, VkglTestCase_003599_1, VkglTestCase_003599_2);

#define VkglTestCase_003600_1 "dEQP-GLES2.functional.shaders.loops.whil"
#define VkglTestCase_003600_2 "e_uniform_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003600, VkglTestCase_003600_1, VkglTestCase_003600_2);

#define VkglTestCase_003601_1 "dEQP-GLES2.functional.shaders.loops.while_uniform_ite"
#define VkglTestCase_003601_2 "rations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003601, VkglTestCase_003601_1, VkglTestCase_003601_2);

#define VkglTestCase_003602_1 "dEQP-GLES2.functional.shaders.loops.while_uniform_iter"
#define VkglTestCase_003602_2 "ations.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003602, VkglTestCase_003602_1, VkglTestCase_003602_2);

#define VkglTestCase_003603_1 "dEQP-GLES2.functional.shaders.loops.while_uniform_ite"
#define VkglTestCase_003603_2 "rations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003603, VkglTestCase_003603_1, VkglTestCase_003603_2);

#define VkglTestCase_003604_1 "dEQP-GLES2.functional.shaders.loops.while_uniform_iter"
#define VkglTestCase_003604_2 "ations.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003604, VkglTestCase_003604_1, VkglTestCase_003604_2);

#define VkglTestCase_003605_1 "dEQP-GLES2.functional.shaders.loops.while_uniform"
#define VkglTestCase_003605_2 "_iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003605, VkglTestCase_003605_1, VkglTestCase_003605_2);

#define VkglTestCase_003606_1 "dEQP-GLES2.functional.shaders.loops.while_uniform_"
#define VkglTestCase_003606_2 "iterations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003606, VkglTestCase_003606_1, VkglTestCase_003606_2);

#define VkglTestCase_003607_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003607_2 "uniform_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003607, VkglTestCase_003607_1, VkglTestCase_003607_2);

#define VkglTestCase_003608_1 "dEQP-GLES2.functional.shaders.loops.while_u"
#define VkglTestCase_003608_2 "niform_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003608, VkglTestCase_003608_1, VkglTestCase_003608_2);

#define VkglTestCase_003609_1 "dEQP-GLES2.functional.shaders.loops.while_u"
#define VkglTestCase_003609_2 "niform_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003609, VkglTestCase_003609_1, VkglTestCase_003609_2);

#define VkglTestCase_003610_1 "dEQP-GLES2.functional.shaders.loops.while_un"
#define VkglTestCase_003610_2 "iform_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003610, VkglTestCase_003610_1, VkglTestCase_003610_2);

#define VkglTestCase_003611_1 "dEQP-GLES2.functional.shaders.loops.while_u"
#define VkglTestCase_003611_2 "niform_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003611, VkglTestCase_003611_1, VkglTestCase_003611_2);

#define VkglTestCase_003612_1 "dEQP-GLES2.functional.shaders.loops.while_un"
#define VkglTestCase_003612_2 "iform_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003612, VkglTestCase_003612_1, VkglTestCase_003612_2);

#define VkglTestCase_003613_1 "dEQP-GLES2.functional.shaders.loops.whil"
#define VkglTestCase_003613_2 "e_uniform_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003613, VkglTestCase_003613_1, VkglTestCase_003613_2);

#define VkglTestCase_003614_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003614_2 "_uniform_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003614, VkglTestCase_003614_1, VkglTestCase_003614_2);

#define VkglTestCase_003615_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003615_2 "uniform_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003615, VkglTestCase_003615_1, VkglTestCase_003615_2);

#define VkglTestCase_003616_1 "dEQP-GLES2.functional.shaders.loops.while_u"
#define VkglTestCase_003616_2 "niform_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003616, VkglTestCase_003616_1, VkglTestCase_003616_2);

#define VkglTestCase_003617_1 "dEQP-GLES2.functional.shaders.loops.while_uni"
#define VkglTestCase_003617_2 "form_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003617, VkglTestCase_003617_1, VkglTestCase_003617_2);

#define VkglTestCase_003618_1 "dEQP-GLES2.functional.shaders.loops.while_unif"
#define VkglTestCase_003618_2 "orm_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003618, VkglTestCase_003618_1, VkglTestCase_003618_2);

#define VkglTestCase_003619_1 "dEQP-GLES2.functional.shaders.loops.while_un"
#define VkglTestCase_003619_2 "iform_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003619, VkglTestCase_003619_1, VkglTestCase_003619_2);

#define VkglTestCase_003620_1 "dEQP-GLES2.functional.shaders.loops.while_uni"
#define VkglTestCase_003620_2 "form_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003620, VkglTestCase_003620_1, VkglTestCase_003620_2);

#define VkglTestCase_003621_1 "dEQP-GLES2.functional.shaders.loops.while_uni"
#define VkglTestCase_003621_2 "form_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003621, VkglTestCase_003621_1, VkglTestCase_003621_2);

#define VkglTestCase_003622_1 "dEQP-GLES2.functional.shaders.loops.while_unif"
#define VkglTestCase_003622_2 "orm_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003622, VkglTestCase_003622_1, VkglTestCase_003622_2);

#define VkglTestCase_003623_1 "dEQP-GLES2.functional.shaders.loops.whil"
#define VkglTestCase_003623_2 "e_uniform_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003623, VkglTestCase_003623_1, VkglTestCase_003623_2);

#define VkglTestCase_003624_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003624_2 "_uniform_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003624, VkglTestCase_003624_1, VkglTestCase_003624_2);

#define VkglTestCase_003625_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003625_2 "_uniform_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003625, VkglTestCase_003625_1, VkglTestCase_003625_2);

#define VkglTestCase_003626_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003626_2 "uniform_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003626, VkglTestCase_003626_1, VkglTestCase_003626_2);

#define VkglTestCase_003627_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003627_2 "uniform_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003627, VkglTestCase_003627_1, VkglTestCase_003627_2);

#define VkglTestCase_003628_1 "dEQP-GLES2.functional.shaders.loops.while_u"
#define VkglTestCase_003628_2 "niform_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003628, VkglTestCase_003628_1, VkglTestCase_003628_2);

#define VkglTestCase_003629_1 "dEQP-GLES2.functional.shaders.loops.while_u"
#define VkglTestCase_003629_2 "niform_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003629, VkglTestCase_003629_1, VkglTestCase_003629_2);

#define VkglTestCase_003630_1 "dEQP-GLES2.functional.shaders.loops.while_un"
#define VkglTestCase_003630_2 "iform_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003630, VkglTestCase_003630_1, VkglTestCase_003630_2);

#define VkglTestCase_003631_1 "dEQP-GLES2.functional.shaders.loops.whil"
#define VkglTestCase_003631_2 "e_uniform_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003631, VkglTestCase_003631_1, VkglTestCase_003631_2);

#define VkglTestCase_003632_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003632_2 "_uniform_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003632, VkglTestCase_003632_1, VkglTestCase_003632_2);

#define VkglTestCase_003633_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003633_2 "_uniform_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003633, VkglTestCase_003633_1, VkglTestCase_003633_2);

#define VkglTestCase_003634_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003634_2 "uniform_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003634, VkglTestCase_003634_1, VkglTestCase_003634_2);

#define VkglTestCase_003635_1 "dEQP-GLES2.functional.shaders.loops.while_un"
#define VkglTestCase_003635_2 "iform_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003635, VkglTestCase_003635_1, VkglTestCase_003635_2);

#define VkglTestCase_003636_1 "dEQP-GLES2.functional.shaders.loops.while_uni"
#define VkglTestCase_003636_2 "form_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003636, VkglTestCase_003636_1, VkglTestCase_003636_2);

#define VkglTestCase_003637_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003637_2 "_uniform_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003637, VkglTestCase_003637_1, VkglTestCase_003637_2);

#define VkglTestCase_003638_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003638_2 "uniform_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003638, VkglTestCase_003638_1, VkglTestCase_003638_2);

#define VkglTestCase_003639_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003639_2 "_uniform_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003639, VkglTestCase_003639_1, VkglTestCase_003639_2);

#define VkglTestCase_003640_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003640_2 "uniform_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003640, VkglTestCase_003640_1, VkglTestCase_003640_2);

#define VkglTestCase_003641_1 "dEQP-GLES2.functional.shaders.loops.wh"
#define VkglTestCase_003641_2 "ile_uniform_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003641, VkglTestCase_003641_1, VkglTestCase_003641_2);

#define VkglTestCase_003642_1 "dEQP-GLES2.functional.shaders.loops.whi"
#define VkglTestCase_003642_2 "le_uniform_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003642, VkglTestCase_003642_1, VkglTestCase_003642_2);

#define VkglTestCase_003643_1 "dEQP-GLES2.functional.shaders.loops.w"
#define VkglTestCase_003643_2 "hile_uniform_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003643, VkglTestCase_003643_1, VkglTestCase_003643_2);

#define VkglTestCase_003644_1 "dEQP-GLES2.functional.shaders.loops.wh"
#define VkglTestCase_003644_2 "ile_uniform_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003644, VkglTestCase_003644_1, VkglTestCase_003644_2);

#define VkglTestCase_003645_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003645_2 "_uniform_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003645, VkglTestCase_003645_1, VkglTestCase_003645_2);

#define VkglTestCase_003646_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003646_2 "uniform_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003646, VkglTestCase_003646_1, VkglTestCase_003646_2);

#define VkglTestCase_003647_1 "dEQP-GLES2.functional.shaders.loops.while_unif"
#define VkglTestCase_003647_2 "orm_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003647, VkglTestCase_003647_1, VkglTestCase_003647_2);

#define VkglTestCase_003648_1 "dEQP-GLES2.functional.shaders.loops.while_unifo"
#define VkglTestCase_003648_2 "rm_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003648, VkglTestCase_003648_1, VkglTestCase_003648_2);

#define VkglTestCase_003649_1 "dEQP-GLES2.functional.shaders.loops.while_unif"
#define VkglTestCase_003649_2 "orm_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003649, VkglTestCase_003649_1, VkglTestCase_003649_2);

#define VkglTestCase_003650_1 "dEQP-GLES2.functional.shaders.loops.while_unifo"
#define VkglTestCase_003650_2 "rm_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003650, VkglTestCase_003650_1, VkglTestCase_003650_2);

#define VkglTestCase_003651_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003651_2 "uniform_iterations.conditional_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003651, VkglTestCase_003651_1, VkglTestCase_003651_2);

#define VkglTestCase_003652_1 "dEQP-GLES2.functional.shaders.loops.while_u"
#define VkglTestCase_003652_2 "niform_iterations.conditional_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003652, VkglTestCase_003652_1, VkglTestCase_003652_2);

#define VkglTestCase_003653_1 "dEQP-GLES2.functional.shaders.loops.while_un"
#define VkglTestCase_003653_2 "iform_iterations.function_call_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003653, VkglTestCase_003653_1, VkglTestCase_003653_2);

#define VkglTestCase_003654_1 "dEQP-GLES2.functional.shaders.loops.while_uni"
#define VkglTestCase_003654_2 "form_iterations.function_call_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003654, VkglTestCase_003654_1, VkglTestCase_003654_2);

#define VkglTestCase_003655_1 "dEQP-GLES2.functional.shaders.loops.while_u"
#define VkglTestCase_003655_2 "niform_iterations.function_call_inout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003655, VkglTestCase_003655_1, VkglTestCase_003655_2);

#define VkglTestCase_003656_1 "dEQP-GLES2.functional.shaders.loops.while_un"
#define VkglTestCase_003656_2 "iform_iterations.function_call_inout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003656, VkglTestCase_003656_1, VkglTestCase_003656_2);
