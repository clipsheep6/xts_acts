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

#define VkglTestCase_000758_1 "KHR-GLES3.shaders.loops.do_while_uni"
#define VkglTestCase_000758_2 "form_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000758, VkglTestCase_000758_1, VkglTestCase_000758_2);

#define VkglTestCase_000759_1 "KHR-GLES3.shaders.loops.do_while_unif"
#define VkglTestCase_000759_2 "orm_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000759, VkglTestCase_000759_1, VkglTestCase_000759_2);

#define VkglTestCase_000760_1 "KHR-GLES3.shaders.loops.do_while_unifo"
#define VkglTestCase_000760_2 "rm_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000760, VkglTestCase_000760_1, VkglTestCase_000760_2);

#define VkglTestCase_000761_1 "KHR-GLES3.shaders.loops.do_while_unifor"
#define VkglTestCase_000761_2 "m_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000761, VkglTestCase_000761_1, VkglTestCase_000761_2);

#define VkglTestCase_000762_1 "KHR-GLES3.shaders.loops.do_while_unifor"
#define VkglTestCase_000762_2 "m_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000762, VkglTestCase_000762_1, VkglTestCase_000762_2);

#define VkglTestCase_000763_1 "KHR-GLES3.shaders.loops.do_while_uniform"
#define VkglTestCase_000763_2 "_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000763, VkglTestCase_000763_1, VkglTestCase_000763_2);

#define VkglTestCase_000764_1 "KHR-GLES3.shaders.loops.do_while_unif"
#define VkglTestCase_000764_2 "orm_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000764, VkglTestCase_000764_1, VkglTestCase_000764_2);

#define VkglTestCase_000765_1 "KHR-GLES3.shaders.loops.do_while_unifo"
#define VkglTestCase_000765_2 "rm_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000765, VkglTestCase_000765_1, VkglTestCase_000765_2);

#define VkglTestCase_000766_1 "KHR-GLES3.shaders.loops.do_while_unifo"
#define VkglTestCase_000766_2 "rm_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000766, VkglTestCase_000766_1, VkglTestCase_000766_2);

#define VkglTestCase_000767_1 "KHR-GLES3.shaders.loops.do_while_unifor"
#define VkglTestCase_000767_2 "m_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000767, VkglTestCase_000767_1, VkglTestCase_000767_2);

#define VkglTestCase_000768_1 "KHR-GLES3.shaders.loops.do_while_u"
#define VkglTestCase_000768_2 "niform_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000768, VkglTestCase_000768_1, VkglTestCase_000768_2);

#define VkglTestCase_000769_1 "KHR-GLES3.shaders.loops.do_while_un"
#define VkglTestCase_000769_2 "iform_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000769, VkglTestCase_000769_1, VkglTestCase_000769_2);

#define VkglTestCase_000770_1 "KHR-GLES3.shaders.loops.do_while_uniform_iteratio"
#define VkglTestCase_000770_2 "ns.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000770, VkglTestCase_000770_1, VkglTestCase_000770_2);

#define VkglTestCase_000771_1 "KHR-GLES3.shaders.loops.do_while_uniform_iteration"
#define VkglTestCase_000771_2 "s.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000771, VkglTestCase_000771_1, VkglTestCase_000771_2);

#define VkglTestCase_000772_1 "KHR-GLES3.shaders.loops.do_while_uniform_iterati"
#define VkglTestCase_000772_2 "ons.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000772, VkglTestCase_000772_1, VkglTestCase_000772_2);

#define VkglTestCase_000773_1 "KHR-GLES3.shaders.loops.do_while_uniform_iteratio"
#define VkglTestCase_000773_2 "ns.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000773, VkglTestCase_000773_1, VkglTestCase_000773_2);

#define VkglTestCase_000774_1 "KHR-GLES3.shaders.loops.do_while_uniform_iter"
#define VkglTestCase_000774_2 "ations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000774, VkglTestCase_000774_1, VkglTestCase_000774_2);

#define VkglTestCase_000775_1 "KHR-GLES3.shaders.loops.do_while_uniform_itera"
#define VkglTestCase_000775_2 "tions.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000775, VkglTestCase_000775_1, VkglTestCase_000775_2);

#define VkglTestCase_000776_1 "KHR-GLES3.shaders.loops.do_while_unif"
#define VkglTestCase_000776_2 "orm_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000776, VkglTestCase_000776_1, VkglTestCase_000776_2);

#define VkglTestCase_000777_1 "KHR-GLES3.shaders.loops.do_while_unifo"
#define VkglTestCase_000777_2 "rm_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000777, VkglTestCase_000777_1, VkglTestCase_000777_2);

#define VkglTestCase_000778_1 "KHR-GLES3.shaders.loops.do_while_unifo"
#define VkglTestCase_000778_2 "rm_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000778, VkglTestCase_000778_1, VkglTestCase_000778_2);

#define VkglTestCase_000779_1 "KHR-GLES3.shaders.loops.do_while_unifor"
#define VkglTestCase_000779_2 "m_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000779, VkglTestCase_000779_1, VkglTestCase_000779_2);

#define VkglTestCase_000780_1 "KHR-GLES3.shaders.loops.do_while_unifo"
#define VkglTestCase_000780_2 "rm_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000780, VkglTestCase_000780_1, VkglTestCase_000780_2);

#define VkglTestCase_000781_1 "KHR-GLES3.shaders.loops.do_while_unifor"
#define VkglTestCase_000781_2 "m_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000781, VkglTestCase_000781_1, VkglTestCase_000781_2);

#define VkglTestCase_000782_1 "KHR-GLES3.shaders.loops.do_while_unif"
#define VkglTestCase_000782_2 "orm_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000782, VkglTestCase_000782_1, VkglTestCase_000782_2);

#define VkglTestCase_000783_1 "KHR-GLES3.shaders.loops.do_while_unifo"
#define VkglTestCase_000783_2 "rm_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000783, VkglTestCase_000783_1, VkglTestCase_000783_2);

#define VkglTestCase_000784_1 "KHR-GLES3.shaders.loops.do_while_uniform"
#define VkglTestCase_000784_2 "_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000784, VkglTestCase_000784_1, VkglTestCase_000784_2);

#define VkglTestCase_000785_1 "KHR-GLES3.shaders.loops.do_while_uniform_"
#define VkglTestCase_000785_2 "iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000785, VkglTestCase_000785_1, VkglTestCase_000785_2);

#define VkglTestCase_000786_1 "KHR-GLES3.shaders.loops.do_while_unifor"
#define VkglTestCase_000786_2 "m_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000786, VkglTestCase_000786_1, VkglTestCase_000786_2);

#define VkglTestCase_000787_1 "KHR-GLES3.shaders.loops.do_while_uniform"
#define VkglTestCase_000787_2 "_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000787, VkglTestCase_000787_1, VkglTestCase_000787_2);

#define VkglTestCase_000788_1 "KHR-GLES3.shaders.loops.do_while_uniform"
#define VkglTestCase_000788_2 "_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000788, VkglTestCase_000788_1, VkglTestCase_000788_2);

#define VkglTestCase_000789_1 "KHR-GLES3.shaders.loops.do_while_uniform_"
#define VkglTestCase_000789_2 "iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000789, VkglTestCase_000789_1, VkglTestCase_000789_2);

#define VkglTestCase_000790_1 "KHR-GLES3.shaders.loops.do_while_uni"
#define VkglTestCase_000790_2 "form_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000790, VkglTestCase_000790_1, VkglTestCase_000790_2);

#define VkglTestCase_000791_1 "KHR-GLES3.shaders.loops.do_while_unif"
#define VkglTestCase_000791_2 "orm_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000791, VkglTestCase_000791_1, VkglTestCase_000791_2);

#define VkglTestCase_000792_1 "KHR-GLES3.shaders.loops.do_while_unif"
#define VkglTestCase_000792_2 "orm_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000792, VkglTestCase_000792_1, VkglTestCase_000792_2);

#define VkglTestCase_000793_1 "KHR-GLES3.shaders.loops.do_while_unifo"
#define VkglTestCase_000793_2 "rm_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000793, VkglTestCase_000793_1, VkglTestCase_000793_2);

#define VkglTestCase_000794_1 "KHR-GLES3.shaders.loops.do_while_unifo"
#define VkglTestCase_000794_2 "rm_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000794, VkglTestCase_000794_1, VkglTestCase_000794_2);

#define VkglTestCase_000795_1 "KHR-GLES3.shaders.loops.do_while_unifor"
#define VkglTestCase_000795_2 "m_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000795, VkglTestCase_000795_1, VkglTestCase_000795_2);

#define VkglTestCase_000796_1 "KHR-GLES3.shaders.loops.do_while_unifor"
#define VkglTestCase_000796_2 "m_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000796, VkglTestCase_000796_1, VkglTestCase_000796_2);

#define VkglTestCase_000797_1 "KHR-GLES3.shaders.loops.do_while_uniform"
#define VkglTestCase_000797_2 "_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000797, VkglTestCase_000797_1, VkglTestCase_000797_2);

#define VkglTestCase_000798_1 "KHR-GLES3.shaders.loops.do_while_uni"
#define VkglTestCase_000798_2 "form_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000798, VkglTestCase_000798_1, VkglTestCase_000798_2);

#define VkglTestCase_000799_1 "KHR-GLES3.shaders.loops.do_while_unif"
#define VkglTestCase_000799_2 "orm_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000799, VkglTestCase_000799_1, VkglTestCase_000799_2);

#define VkglTestCase_000800_1 "KHR-GLES3.shaders.loops.do_while_uni"
#define VkglTestCase_000800_2 "form_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000800, VkglTestCase_000800_1, VkglTestCase_000800_2);

#define VkglTestCase_000801_1 "KHR-GLES3.shaders.loops.do_while_unif"
#define VkglTestCase_000801_2 "orm_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000801, VkglTestCase_000801_1, VkglTestCase_000801_2);

#define VkglTestCase_000802_1 "KHR-GLES3.shaders.loops.do_while_unifor"
#define VkglTestCase_000802_2 "m_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000802, VkglTestCase_000802_1, VkglTestCase_000802_2);

#define VkglTestCase_000803_1 "KHR-GLES3.shaders.loops.do_while_uniform"
#define VkglTestCase_000803_2 "_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000803, VkglTestCase_000803_1, VkglTestCase_000803_2);

#define VkglTestCase_000804_1 "KHR-GLES3.shaders.loops.do_while_uni"
#define VkglTestCase_000804_2 "form_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000804, VkglTestCase_000804_1, VkglTestCase_000804_2);

#define VkglTestCase_000805_1 "KHR-GLES3.shaders.loops.do_while_unif"
#define VkglTestCase_000805_2 "orm_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000805, VkglTestCase_000805_1, VkglTestCase_000805_2);

#define VkglTestCase_000806_1 "KHR-GLES3.shaders.loops.do_while_uni"
#define VkglTestCase_000806_2 "form_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000806, VkglTestCase_000806_1, VkglTestCase_000806_2);

#define VkglTestCase_000807_1 "KHR-GLES3.shaders.loops.do_while_unif"
#define VkglTestCase_000807_2 "orm_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000807, VkglTestCase_000807_1, VkglTestCase_000807_2);

#define VkglTestCase_000808_1 "KHR-GLES3.shaders.loops.do_while_"
#define VkglTestCase_000808_2 "uniform_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000808, VkglTestCase_000808_1, VkglTestCase_000808_2);

#define VkglTestCase_000809_1 "KHR-GLES3.shaders.loops.do_while_u"
#define VkglTestCase_000809_2 "niform_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000809, VkglTestCase_000809_1, VkglTestCase_000809_2);

#define VkglTestCase_000810_1 "KHR-GLES3.shaders.loops.do_while"
#define VkglTestCase_000810_2 "_uniform_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000810, VkglTestCase_000810_1, VkglTestCase_000810_2);

#define VkglTestCase_000811_1 "KHR-GLES3.shaders.loops.do_while_"
#define VkglTestCase_000811_2 "uniform_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000811, VkglTestCase_000811_1, VkglTestCase_000811_2);

#define VkglTestCase_000812_1 "KHR-GLES3.shaders.loops.do_while_unif"
#define VkglTestCase_000812_2 "orm_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000812, VkglTestCase_000812_1, VkglTestCase_000812_2);

#define VkglTestCase_000813_1 "KHR-GLES3.shaders.loops.do_while_unifo"
#define VkglTestCase_000813_2 "rm_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000813, VkglTestCase_000813_1, VkglTestCase_000813_2);

#define VkglTestCase_000814_1 "KHR-GLES3.shaders.loops.do_while_uniform_"
#define VkglTestCase_000814_2 "iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000814, VkglTestCase_000814_1, VkglTestCase_000814_2);

#define VkglTestCase_000815_1 "KHR-GLES3.shaders.loops.do_while_uniform_i"
#define VkglTestCase_000815_2 "terations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000815, VkglTestCase_000815_1, VkglTestCase_000815_2);

#define VkglTestCase_000816_1 "KHR-GLES3.shaders.loops.do_while_uniform_"
#define VkglTestCase_000816_2 "iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000816, VkglTestCase_000816_1, VkglTestCase_000816_2);

#define VkglTestCase_000817_1 "KHR-GLES3.shaders.loops.do_while_uniform_i"
#define VkglTestCase_000817_2 "terations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000817, VkglTestCase_000817_1, VkglTestCase_000817_2);
