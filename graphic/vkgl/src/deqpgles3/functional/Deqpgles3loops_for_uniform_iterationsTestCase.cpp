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

#define VkglTestCase_006771_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006771_2 "uniform_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006771, VkglTestCase_006771_1, VkglTestCase_006771_2);

#define VkglTestCase_006772_1 "dEQP-GLES3.functional.shaders.loops.for_u"
#define VkglTestCase_006772_2 "niform_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006772, VkglTestCase_006772_1, VkglTestCase_006772_2);

#define VkglTestCase_006773_1 "dEQP-GLES3.functional.shaders.loops.for_u"
#define VkglTestCase_006773_2 "niform_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006773, VkglTestCase_006773_1, VkglTestCase_006773_2);

#define VkglTestCase_006774_1 "dEQP-GLES3.functional.shaders.loops.for_un"
#define VkglTestCase_006774_2 "iform_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006774, VkglTestCase_006774_1, VkglTestCase_006774_2);

#define VkglTestCase_006775_1 "dEQP-GLES3.functional.shaders.loops.for_u"
#define VkglTestCase_006775_2 "niform_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006775, VkglTestCase_006775_1, VkglTestCase_006775_2);

#define VkglTestCase_006776_1 "dEQP-GLES3.functional.shaders.loops.for_un"
#define VkglTestCase_006776_2 "iform_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006776, VkglTestCase_006776_1, VkglTestCase_006776_2);

#define VkglTestCase_006777_1 "dEQP-GLES3.functional.shaders.loops.for_un"
#define VkglTestCase_006777_2 "iform_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006777, VkglTestCase_006777_1, VkglTestCase_006777_2);

#define VkglTestCase_006778_1 "dEQP-GLES3.functional.shaders.loops.for_uni"
#define VkglTestCase_006778_2 "form_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006778, VkglTestCase_006778_1, VkglTestCase_006778_2);

#define VkglTestCase_006779_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006779_2 "uniform_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006779, VkglTestCase_006779_1, VkglTestCase_006779_2);

#define VkglTestCase_006780_1 "dEQP-GLES3.functional.shaders.loops.for_u"
#define VkglTestCase_006780_2 "niform_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006780, VkglTestCase_006780_1, VkglTestCase_006780_2);

#define VkglTestCase_006781_1 "dEQP-GLES3.functional.shaders.loops.for_u"
#define VkglTestCase_006781_2 "niform_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006781, VkglTestCase_006781_1, VkglTestCase_006781_2);

#define VkglTestCase_006782_1 "dEQP-GLES3.functional.shaders.loops.for_un"
#define VkglTestCase_006782_2 "iform_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006782, VkglTestCase_006782_1, VkglTestCase_006782_2);

#define VkglTestCase_006783_1 "dEQP-GLES3.functional.shaders.loops.fo"
#define VkglTestCase_006783_2 "r_uniform_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006783, VkglTestCase_006783_1, VkglTestCase_006783_2);

#define VkglTestCase_006784_1 "dEQP-GLES3.functional.shaders.loops.for"
#define VkglTestCase_006784_2 "_uniform_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006784, VkglTestCase_006784_1, VkglTestCase_006784_2);

#define VkglTestCase_006785_1 "dEQP-GLES3.functional.shaders.loops.for_uniform_iter"
#define VkglTestCase_006785_2 "ations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006785, VkglTestCase_006785_1, VkglTestCase_006785_2);

#define VkglTestCase_006786_1 "dEQP-GLES3.functional.shaders.loops.for_uniform_itera"
#define VkglTestCase_006786_2 "tions.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006786, VkglTestCase_006786_1, VkglTestCase_006786_2);

#define VkglTestCase_006787_1 "dEQP-GLES3.functional.shaders.loops.for_uniform_iter"
#define VkglTestCase_006787_2 "ations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006787, VkglTestCase_006787_1, VkglTestCase_006787_2);

#define VkglTestCase_006788_1 "dEQP-GLES3.functional.shaders.loops.for_uniform_itera"
#define VkglTestCase_006788_2 "tions.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006788, VkglTestCase_006788_1, VkglTestCase_006788_2);

#define VkglTestCase_006789_1 "dEQP-GLES3.functional.shaders.loops.for_uniform_"
#define VkglTestCase_006789_2 "iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006789, VkglTestCase_006789_1, VkglTestCase_006789_2);

#define VkglTestCase_006790_1 "dEQP-GLES3.functional.shaders.loops.for_uniform_i"
#define VkglTestCase_006790_2 "terations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006790, VkglTestCase_006790_1, VkglTestCase_006790_2);

#define VkglTestCase_006791_1 "dEQP-GLES3.functional.shaders.loops.for_u"
#define VkglTestCase_006791_2 "niform_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006791, VkglTestCase_006791_1, VkglTestCase_006791_2);

#define VkglTestCase_006792_1 "dEQP-GLES3.functional.shaders.loops.for_un"
#define VkglTestCase_006792_2 "iform_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006792, VkglTestCase_006792_1, VkglTestCase_006792_2);

#define VkglTestCase_006793_1 "dEQP-GLES3.functional.shaders.loops.for_un"
#define VkglTestCase_006793_2 "iform_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006793, VkglTestCase_006793_1, VkglTestCase_006793_2);

#define VkglTestCase_006794_1 "dEQP-GLES3.functional.shaders.loops.for_uni"
#define VkglTestCase_006794_2 "form_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006794, VkglTestCase_006794_1, VkglTestCase_006794_2);

#define VkglTestCase_006795_1 "dEQP-GLES3.functional.shaders.loops.for_un"
#define VkglTestCase_006795_2 "iform_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006795, VkglTestCase_006795_1, VkglTestCase_006795_2);

#define VkglTestCase_006796_1 "dEQP-GLES3.functional.shaders.loops.for_uni"
#define VkglTestCase_006796_2 "form_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006796, VkglTestCase_006796_1, VkglTestCase_006796_2);

#define VkglTestCase_006797_1 "dEQP-GLES3.functional.shaders.loops.for"
#define VkglTestCase_006797_2 "_uniform_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006797, VkglTestCase_006797_1, VkglTestCase_006797_2);

#define VkglTestCase_006798_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006798_2 "uniform_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006798, VkglTestCase_006798_1, VkglTestCase_006798_2);

#define VkglTestCase_006799_1 "dEQP-GLES3.functional.shaders.loops.for_u"
#define VkglTestCase_006799_2 "niform_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006799, VkglTestCase_006799_1, VkglTestCase_006799_2);

#define VkglTestCase_006800_1 "dEQP-GLES3.functional.shaders.loops.for_un"
#define VkglTestCase_006800_2 "iform_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006800, VkglTestCase_006800_1, VkglTestCase_006800_2);

#define VkglTestCase_006801_1 "dEQP-GLES3.functional.shaders.loops.for_unif"
#define VkglTestCase_006801_2 "orm_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006801, VkglTestCase_006801_1, VkglTestCase_006801_2);

#define VkglTestCase_006802_1 "dEQP-GLES3.functional.shaders.loops.for_unifo"
#define VkglTestCase_006802_2 "rm_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006802, VkglTestCase_006802_1, VkglTestCase_006802_2);

#define VkglTestCase_006803_1 "dEQP-GLES3.functional.shaders.loops.for_uni"
#define VkglTestCase_006803_2 "form_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006803, VkglTestCase_006803_1, VkglTestCase_006803_2);

#define VkglTestCase_006804_1 "dEQP-GLES3.functional.shaders.loops.for_unif"
#define VkglTestCase_006804_2 "orm_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006804, VkglTestCase_006804_1, VkglTestCase_006804_2);

#define VkglTestCase_006805_1 "dEQP-GLES3.functional.shaders.loops.for_unif"
#define VkglTestCase_006805_2 "orm_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006805, VkglTestCase_006805_1, VkglTestCase_006805_2);

#define VkglTestCase_006806_1 "dEQP-GLES3.functional.shaders.loops.for_unifo"
#define VkglTestCase_006806_2 "rm_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006806, VkglTestCase_006806_1, VkglTestCase_006806_2);

#define VkglTestCase_006807_1 "dEQP-GLES3.functional.shaders.loops.for"
#define VkglTestCase_006807_2 "_uniform_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006807, VkglTestCase_006807_1, VkglTestCase_006807_2);

#define VkglTestCase_006808_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006808_2 "uniform_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006808, VkglTestCase_006808_1, VkglTestCase_006808_2);

#define VkglTestCase_006809_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006809_2 "uniform_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006809, VkglTestCase_006809_1, VkglTestCase_006809_2);

#define VkglTestCase_006810_1 "dEQP-GLES3.functional.shaders.loops.for_u"
#define VkglTestCase_006810_2 "niform_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006810, VkglTestCase_006810_1, VkglTestCase_006810_2);

#define VkglTestCase_006811_1 "dEQP-GLES3.functional.shaders.loops.for_u"
#define VkglTestCase_006811_2 "niform_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006811, VkglTestCase_006811_1, VkglTestCase_006811_2);

#define VkglTestCase_006812_1 "dEQP-GLES3.functional.shaders.loops.for_un"
#define VkglTestCase_006812_2 "iform_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006812, VkglTestCase_006812_1, VkglTestCase_006812_2);

#define VkglTestCase_006813_1 "dEQP-GLES3.functional.shaders.loops.for_un"
#define VkglTestCase_006813_2 "iform_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006813, VkglTestCase_006813_1, VkglTestCase_006813_2);

#define VkglTestCase_006814_1 "dEQP-GLES3.functional.shaders.loops.for_uni"
#define VkglTestCase_006814_2 "form_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006814, VkglTestCase_006814_1, VkglTestCase_006814_2);

#define VkglTestCase_006815_1 "dEQP-GLES3.functional.shaders.loops.for"
#define VkglTestCase_006815_2 "_uniform_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006815, VkglTestCase_006815_1, VkglTestCase_006815_2);

#define VkglTestCase_006816_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006816_2 "uniform_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006816, VkglTestCase_006816_1, VkglTestCase_006816_2);

#define VkglTestCase_006817_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006817_2 "uniform_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006817, VkglTestCase_006817_1, VkglTestCase_006817_2);

#define VkglTestCase_006818_1 "dEQP-GLES3.functional.shaders.loops.for_u"
#define VkglTestCase_006818_2 "niform_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006818, VkglTestCase_006818_1, VkglTestCase_006818_2);

#define VkglTestCase_006819_1 "dEQP-GLES3.functional.shaders.loops.for_uni"
#define VkglTestCase_006819_2 "form_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006819, VkglTestCase_006819_1, VkglTestCase_006819_2);

#define VkglTestCase_006820_1 "dEQP-GLES3.functional.shaders.loops.for_unif"
#define VkglTestCase_006820_2 "orm_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006820, VkglTestCase_006820_1, VkglTestCase_006820_2);

#define VkglTestCase_006821_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006821_2 "uniform_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006821, VkglTestCase_006821_1, VkglTestCase_006821_2);

#define VkglTestCase_006822_1 "dEQP-GLES3.functional.shaders.loops.for_u"
#define VkglTestCase_006822_2 "niform_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006822, VkglTestCase_006822_1, VkglTestCase_006822_2);

#define VkglTestCase_006823_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006823_2 "uniform_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006823, VkglTestCase_006823_1, VkglTestCase_006823_2);

#define VkglTestCase_006824_1 "dEQP-GLES3.functional.shaders.loops.for_u"
#define VkglTestCase_006824_2 "niform_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006824, VkglTestCase_006824_1, VkglTestCase_006824_2);

#define VkglTestCase_006825_1 "dEQP-GLES3.functional.shaders.loops.f"
#define VkglTestCase_006825_2 "or_uniform_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006825, VkglTestCase_006825_1, VkglTestCase_006825_2);

#define VkglTestCase_006826_1 "dEQP-GLES3.functional.shaders.loops.fo"
#define VkglTestCase_006826_2 "r_uniform_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006826, VkglTestCase_006826_1, VkglTestCase_006826_2);

#define VkglTestCase_006827_1 "dEQP-GLES3.functional.shaders.loops."
#define VkglTestCase_006827_2 "for_uniform_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006827, VkglTestCase_006827_1, VkglTestCase_006827_2);

#define VkglTestCase_006828_1 "dEQP-GLES3.functional.shaders.loops.f"
#define VkglTestCase_006828_2 "or_uniform_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006828, VkglTestCase_006828_1, VkglTestCase_006828_2);

#define VkglTestCase_006829_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006829_2 "uniform_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006829, VkglTestCase_006829_1, VkglTestCase_006829_2);

#define VkglTestCase_006830_1 "dEQP-GLES3.functional.shaders.loops.for_u"
#define VkglTestCase_006830_2 "niform_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006830, VkglTestCase_006830_1, VkglTestCase_006830_2);

#define VkglTestCase_006831_1 "dEQP-GLES3.functional.shaders.loops.for_unifo"
#define VkglTestCase_006831_2 "rm_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006831, VkglTestCase_006831_1, VkglTestCase_006831_2);

#define VkglTestCase_006832_1 "dEQP-GLES3.functional.shaders.loops.for_unifor"
#define VkglTestCase_006832_2 "m_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006832, VkglTestCase_006832_1, VkglTestCase_006832_2);

#define VkglTestCase_006833_1 "dEQP-GLES3.functional.shaders.loops.for_unifo"
#define VkglTestCase_006833_2 "rm_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006833, VkglTestCase_006833_1, VkglTestCase_006833_2);

#define VkglTestCase_006834_1 "dEQP-GLES3.functional.shaders.loops.for_unifor"
#define VkglTestCase_006834_2 "m_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006834, VkglTestCase_006834_1, VkglTestCase_006834_2);
