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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000574_1 "KHR-GLES3.shaders.loops.while_unifo"
#define VkglTestCase_000574_2 "rm_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000574, VkglTestCase_000574_1, VkglTestCase_000574_2);

#define VkglTestCase_000575_1 "KHR-GLES3.shaders.loops.while_unifor"
#define VkglTestCase_000575_2 "m_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000575, VkglTestCase_000575_1, VkglTestCase_000575_2);

#define VkglTestCase_000576_1 "KHR-GLES3.shaders.loops.while_unifor"
#define VkglTestCase_000576_2 "m_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000576, VkglTestCase_000576_1, VkglTestCase_000576_2);

#define VkglTestCase_000577_1 "KHR-GLES3.shaders.loops.while_uniform"
#define VkglTestCase_000577_2 "_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000577, VkglTestCase_000577_1, VkglTestCase_000577_2);

#define VkglTestCase_000578_1 "KHR-GLES3.shaders.loops.while_uniform"
#define VkglTestCase_000578_2 "_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000578, VkglTestCase_000578_1, VkglTestCase_000578_2);

#define VkglTestCase_000579_1 "KHR-GLES3.shaders.loops.while_uniform_"
#define VkglTestCase_000579_2 "iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000579, VkglTestCase_000579_1, VkglTestCase_000579_2);

#define VkglTestCase_000580_1 "KHR-GLES3.shaders.loops.while_unifo"
#define VkglTestCase_000580_2 "rm_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000580, VkglTestCase_000580_1, VkglTestCase_000580_2);

#define VkglTestCase_000581_1 "KHR-GLES3.shaders.loops.while_unifor"
#define VkglTestCase_000581_2 "m_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000581, VkglTestCase_000581_1, VkglTestCase_000581_2);

#define VkglTestCase_000582_1 "KHR-GLES3.shaders.loops.while_unifor"
#define VkglTestCase_000582_2 "m_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000582, VkglTestCase_000582_1, VkglTestCase_000582_2);

#define VkglTestCase_000583_1 "KHR-GLES3.shaders.loops.while_uniform"
#define VkglTestCase_000583_2 "_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000583, VkglTestCase_000583_1, VkglTestCase_000583_2);

#define VkglTestCase_000584_1 "KHR-GLES3.shaders.loops.while_uni"
#define VkglTestCase_000584_2 "form_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000584, VkglTestCase_000584_1, VkglTestCase_000584_2);

#define VkglTestCase_000585_1 "KHR-GLES3.shaders.loops.while_unif"
#define VkglTestCase_000585_2 "orm_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000585, VkglTestCase_000585_1, VkglTestCase_000585_2);

#define VkglTestCase_000586_1 "KHR-GLES3.shaders.loops.while_uniform_iteration"
#define VkglTestCase_000586_2 "s.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000586, VkglTestCase_000586_1, VkglTestCase_000586_2);

#define VkglTestCase_000587_1 "KHR-GLES3.shaders.loops.while_uniform_iterations"
#define VkglTestCase_000587_2 ".infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000587, VkglTestCase_000587_1, VkglTestCase_000587_2);

#define VkglTestCase_000588_1 "KHR-GLES3.shaders.loops.while_uniform_iteration"
#define VkglTestCase_000588_2 "s.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000588, VkglTestCase_000588_1, VkglTestCase_000588_2);

#define VkglTestCase_000589_1 "KHR-GLES3.shaders.loops.while_uniform_iterations"
#define VkglTestCase_000589_2 ".infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000589, VkglTestCase_000589_1, VkglTestCase_000589_2);

#define VkglTestCase_000590_1 "KHR-GLES3.shaders.loops.while_uniform_itera"
#define VkglTestCase_000590_2 "tions.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000590, VkglTestCase_000590_1, VkglTestCase_000590_2);

#define VkglTestCase_000591_1 "KHR-GLES3.shaders.loops.while_uniform_iterat"
#define VkglTestCase_000591_2 "ions.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000591, VkglTestCase_000591_1, VkglTestCase_000591_2);

#define VkglTestCase_000592_1 "KHR-GLES3.shaders.loops.while_unifor"
#define VkglTestCase_000592_2 "m_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000592, VkglTestCase_000592_1, VkglTestCase_000592_2);

#define VkglTestCase_000593_1 "KHR-GLES3.shaders.loops.while_uniform"
#define VkglTestCase_000593_2 "_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000593, VkglTestCase_000593_1, VkglTestCase_000593_2);

#define VkglTestCase_000594_1 "KHR-GLES3.shaders.loops.while_uniform"
#define VkglTestCase_000594_2 "_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000594, VkglTestCase_000594_1, VkglTestCase_000594_2);

#define VkglTestCase_000595_1 "KHR-GLES3.shaders.loops.while_uniform_"
#define VkglTestCase_000595_2 "iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000595, VkglTestCase_000595_1, VkglTestCase_000595_2);

#define VkglTestCase_000596_1 "KHR-GLES3.shaders.loops.while_uniform"
#define VkglTestCase_000596_2 "_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000596, VkglTestCase_000596_1, VkglTestCase_000596_2);

#define VkglTestCase_000597_1 "KHR-GLES3.shaders.loops.while_uniform_"
#define VkglTestCase_000597_2 "iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000597, VkglTestCase_000597_1, VkglTestCase_000597_2);

#define VkglTestCase_000598_1 "KHR-GLES3.shaders.loops.while_unif"
#define VkglTestCase_000598_2 "orm_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000598, VkglTestCase_000598_1, VkglTestCase_000598_2);

#define VkglTestCase_000599_1 "KHR-GLES3.shaders.loops.while_unifo"
#define VkglTestCase_000599_2 "rm_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000599, VkglTestCase_000599_1, VkglTestCase_000599_2);

#define VkglTestCase_000600_1 "KHR-GLES3.shaders.loops.while_unifor"
#define VkglTestCase_000600_2 "m_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000600, VkglTestCase_000600_1, VkglTestCase_000600_2);

#define VkglTestCase_000601_1 "KHR-GLES3.shaders.loops.while_uniform"
#define VkglTestCase_000601_2 "_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000601, VkglTestCase_000601_1, VkglTestCase_000601_2);

#define VkglTestCase_000602_1 "KHR-GLES3.shaders.loops.while_uniform_i"
#define VkglTestCase_000602_2 "terations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000602, VkglTestCase_000602_1, VkglTestCase_000602_2);

#define VkglTestCase_000603_1 "KHR-GLES3.shaders.loops.while_uniform_it"
#define VkglTestCase_000603_2 "erations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000603, VkglTestCase_000603_1, VkglTestCase_000603_2);

#define VkglTestCase_000604_1 "KHR-GLES3.shaders.loops.while_uniform_"
#define VkglTestCase_000604_2 "iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000604, VkglTestCase_000604_1, VkglTestCase_000604_2);

#define VkglTestCase_000605_1 "KHR-GLES3.shaders.loops.while_uniform_i"
#define VkglTestCase_000605_2 "terations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000605, VkglTestCase_000605_1, VkglTestCase_000605_2);

#define VkglTestCase_000606_1 "KHR-GLES3.shaders.loops.while_uniform_i"
#define VkglTestCase_000606_2 "terations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000606, VkglTestCase_000606_1, VkglTestCase_000606_2);

#define VkglTestCase_000607_1 "KHR-GLES3.shaders.loops.while_uniform_it"
#define VkglTestCase_000607_2 "erations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000607, VkglTestCase_000607_1, VkglTestCase_000607_2);

#define VkglTestCase_000608_1 "KHR-GLES3.shaders.loops.while_unif"
#define VkglTestCase_000608_2 "orm_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000608, VkglTestCase_000608_1, VkglTestCase_000608_2);

#define VkglTestCase_000609_1 "KHR-GLES3.shaders.loops.while_unifo"
#define VkglTestCase_000609_2 "rm_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000609, VkglTestCase_000609_1, VkglTestCase_000609_2);

#define VkglTestCase_000610_1 "KHR-GLES3.shaders.loops.while_unifo"
#define VkglTestCase_000610_2 "rm_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000610, VkglTestCase_000610_1, VkglTestCase_000610_2);

#define VkglTestCase_000611_1 "KHR-GLES3.shaders.loops.while_unifor"
#define VkglTestCase_000611_2 "m_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000611, VkglTestCase_000611_1, VkglTestCase_000611_2);

#define VkglTestCase_000612_1 "KHR-GLES3.shaders.loops.while_unifor"
#define VkglTestCase_000612_2 "m_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000612, VkglTestCase_000612_1, VkglTestCase_000612_2);

#define VkglTestCase_000613_1 "KHR-GLES3.shaders.loops.while_uniform"
#define VkglTestCase_000613_2 "_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000613, VkglTestCase_000613_1, VkglTestCase_000613_2);

#define VkglTestCase_000614_1 "KHR-GLES3.shaders.loops.while_uniform"
#define VkglTestCase_000614_2 "_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000614, VkglTestCase_000614_1, VkglTestCase_000614_2);

#define VkglTestCase_000615_1 "KHR-GLES3.shaders.loops.while_uniform_"
#define VkglTestCase_000615_2 "iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000615, VkglTestCase_000615_1, VkglTestCase_000615_2);

#define VkglTestCase_000616_1 "KHR-GLES3.shaders.loops.while_unif"
#define VkglTestCase_000616_2 "orm_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000616, VkglTestCase_000616_1, VkglTestCase_000616_2);

#define VkglTestCase_000617_1 "KHR-GLES3.shaders.loops.while_unifo"
#define VkglTestCase_000617_2 "rm_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000617, VkglTestCase_000617_1, VkglTestCase_000617_2);

#define VkglTestCase_000618_1 "KHR-GLES3.shaders.loops.while_unifo"
#define VkglTestCase_000618_2 "rm_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000618, VkglTestCase_000618_1, VkglTestCase_000618_2);

#define VkglTestCase_000619_1 "KHR-GLES3.shaders.loops.while_unifor"
#define VkglTestCase_000619_2 "m_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000619, VkglTestCase_000619_1, VkglTestCase_000619_2);

#define VkglTestCase_000620_1 "KHR-GLES3.shaders.loops.while_uniform_"
#define VkglTestCase_000620_2 "iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000620, VkglTestCase_000620_1, VkglTestCase_000620_2);

#define VkglTestCase_000621_1 "KHR-GLES3.shaders.loops.while_uniform_i"
#define VkglTestCase_000621_2 "terations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000621, VkglTestCase_000621_1, VkglTestCase_000621_2);

#define VkglTestCase_000622_1 "KHR-GLES3.shaders.loops.while_unifo"
#define VkglTestCase_000622_2 "rm_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000622, VkglTestCase_000622_1, VkglTestCase_000622_2);

#define VkglTestCase_000623_1 "KHR-GLES3.shaders.loops.while_unifor"
#define VkglTestCase_000623_2 "m_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000623, VkglTestCase_000623_1, VkglTestCase_000623_2);

#define VkglTestCase_000624_1 "KHR-GLES3.shaders.loops.while_unifo"
#define VkglTestCase_000624_2 "rm_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000624, VkglTestCase_000624_1, VkglTestCase_000624_2);

#define VkglTestCase_000625_1 "KHR-GLES3.shaders.loops.while_unifor"
#define VkglTestCase_000625_2 "m_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000625, VkglTestCase_000625_1, VkglTestCase_000625_2);

#define VkglTestCase_000626_1 "KHR-GLES3.shaders.loops.while_un"
#define VkglTestCase_000626_2 "iform_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000626, VkglTestCase_000626_1, VkglTestCase_000626_2);

#define VkglTestCase_000627_1 "KHR-GLES3.shaders.loops.while_uni"
#define VkglTestCase_000627_2 "form_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000627, VkglTestCase_000627_1, VkglTestCase_000627_2);

#define VkglTestCase_000628_1 "KHR-GLES3.shaders.loops.while_u"
#define VkglTestCase_000628_2 "niform_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000628, VkglTestCase_000628_1, VkglTestCase_000628_2);

#define VkglTestCase_000629_1 "KHR-GLES3.shaders.loops.while_un"
#define VkglTestCase_000629_2 "iform_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000629, VkglTestCase_000629_1, VkglTestCase_000629_2);

#define VkglTestCase_000630_1 "KHR-GLES3.shaders.loops.while_unifo"
#define VkglTestCase_000630_2 "rm_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000630, VkglTestCase_000630_1, VkglTestCase_000630_2);

#define VkglTestCase_000631_1 "KHR-GLES3.shaders.loops.while_unifor"
#define VkglTestCase_000631_2 "m_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000631, VkglTestCase_000631_1, VkglTestCase_000631_2);

#define VkglTestCase_000632_1 "KHR-GLES3.shaders.loops.while_uniform_it"
#define VkglTestCase_000632_2 "erations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000632, VkglTestCase_000632_1, VkglTestCase_000632_2);

#define VkglTestCase_000633_1 "KHR-GLES3.shaders.loops.while_uniform_ite"
#define VkglTestCase_000633_2 "rations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000633, VkglTestCase_000633_1, VkglTestCase_000633_2);

#define VkglTestCase_000634_1 "KHR-GLES3.shaders.loops.while_uniform_it"
#define VkglTestCase_000634_2 "erations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000634, VkglTestCase_000634_1, VkglTestCase_000634_2);

#define VkglTestCase_000635_1 "KHR-GLES3.shaders.loops.while_uniform_ite"
#define VkglTestCase_000635_2 "rations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000635, VkglTestCase_000635_1, VkglTestCase_000635_2);
