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

#define VkglTestCase_003795_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003795_2 "le_uniform_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003795, VkglTestCase_003795_1, VkglTestCase_003795_2);

#define VkglTestCase_003796_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003796_2 "e_uniform_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003796, VkglTestCase_003796_1, VkglTestCase_003796_2);

#define VkglTestCase_003797_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003797_2 "e_uniform_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003797, VkglTestCase_003797_1, VkglTestCase_003797_2);

#define VkglTestCase_003798_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003798_2 "_uniform_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003798, VkglTestCase_003798_1, VkglTestCase_003798_2);

#define VkglTestCase_003799_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003799_2 "_uniform_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003799, VkglTestCase_003799_1, VkglTestCase_003799_2);

#define VkglTestCase_003800_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003800_2 "uniform_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003800, VkglTestCase_003800_1, VkglTestCase_003800_2);

#define VkglTestCase_003801_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003801_2 "uniform_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003801, VkglTestCase_003801_1, VkglTestCase_003801_2);

#define VkglTestCase_003802_1 "dEQP-GLES2.functional.shaders.loops.do_while_u"
#define VkglTestCase_003802_2 "niform_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003802, VkglTestCase_003802_1, VkglTestCase_003802_2);

#define VkglTestCase_003803_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003803_2 "e_uniform_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003803, VkglTestCase_003803_1, VkglTestCase_003803_2);

#define VkglTestCase_003804_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003804_2 "_uniform_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003804, VkglTestCase_003804_1, VkglTestCase_003804_2);

#define VkglTestCase_003805_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003805_2 "_uniform_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003805, VkglTestCase_003805_1, VkglTestCase_003805_2);

#define VkglTestCase_003806_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003806_2 "uniform_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003806, VkglTestCase_003806_1, VkglTestCase_003806_2);

#define VkglTestCase_003807_1 "dEQP-GLES2.functional.shaders.loops.do_w"
#define VkglTestCase_003807_2 "hile_uniform_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003807, VkglTestCase_003807_1, VkglTestCase_003807_2);

#define VkglTestCase_003808_1 "dEQP-GLES2.functional.shaders.loops.do_wh"
#define VkglTestCase_003808_2 "ile_uniform_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003808, VkglTestCase_003808_1, VkglTestCase_003808_2);

#define VkglTestCase_003809_1 "dEQP-GLES2.functional.shaders.loops.do_while_uniform_it"
#define VkglTestCase_003809_2 "erations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003809, VkglTestCase_003809_1, VkglTestCase_003809_2);

#define VkglTestCase_003810_1 "dEQP-GLES2.functional.shaders.loops.do_while_uniform_ite"
#define VkglTestCase_003810_2 "rations.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003810, VkglTestCase_003810_1, VkglTestCase_003810_2);

#define VkglTestCase_003811_1 "dEQP-GLES2.functional.shaders.loops.do_while_uniform_i"
#define VkglTestCase_003811_2 "terations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003811, VkglTestCase_003811_1, VkglTestCase_003811_2);

#define VkglTestCase_003812_1 "dEQP-GLES2.functional.shaders.loops.do_while_uniform_it"
#define VkglTestCase_003812_2 "erations.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003812, VkglTestCase_003812_1, VkglTestCase_003812_2);

#define VkglTestCase_003813_1 "dEQP-GLES2.functional.shaders.loops.do_while_unifor"
#define VkglTestCase_003813_2 "m_iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003813, VkglTestCase_003813_1, VkglTestCase_003813_2);

#define VkglTestCase_003814_1 "dEQP-GLES2.functional.shaders.loops.do_while_uniform"
#define VkglTestCase_003814_2 "_iterations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003814, VkglTestCase_003814_1, VkglTestCase_003814_2);

#define VkglTestCase_003815_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003815_2 "e_uniform_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003815, VkglTestCase_003815_1, VkglTestCase_003815_2);

#define VkglTestCase_003816_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003816_2 "_uniform_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003816, VkglTestCase_003816_1, VkglTestCase_003816_2);

#define VkglTestCase_003817_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003817_2 "_uniform_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003817, VkglTestCase_003817_1, VkglTestCase_003817_2);

#define VkglTestCase_003818_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003818_2 "uniform_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003818, VkglTestCase_003818_1, VkglTestCase_003818_2);

#define VkglTestCase_003819_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003819_2 "_uniform_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003819, VkglTestCase_003819_1, VkglTestCase_003819_2);

#define VkglTestCase_003820_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003820_2 "uniform_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003820, VkglTestCase_003820_1, VkglTestCase_003820_2);

#define VkglTestCase_003821_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003821_2 "e_uniform_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003821, VkglTestCase_003821_1, VkglTestCase_003821_2);

#define VkglTestCase_003822_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003822_2 "_uniform_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003822, VkglTestCase_003822_1, VkglTestCase_003822_2);

#define VkglTestCase_003823_1 "dEQP-GLES2.functional.shaders.loops.do_while_u"
#define VkglTestCase_003823_2 "niform_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003823, VkglTestCase_003823_1, VkglTestCase_003823_2);

#define VkglTestCase_003824_1 "dEQP-GLES2.functional.shaders.loops.do_while_un"
#define VkglTestCase_003824_2 "iform_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003824, VkglTestCase_003824_1, VkglTestCase_003824_2);

#define VkglTestCase_003825_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003825_2 "uniform_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003825, VkglTestCase_003825_1, VkglTestCase_003825_2);

#define VkglTestCase_003826_1 "dEQP-GLES2.functional.shaders.loops.do_while_u"
#define VkglTestCase_003826_2 "niform_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003826, VkglTestCase_003826_1, VkglTestCase_003826_2);

#define VkglTestCase_003827_1 "dEQP-GLES2.functional.shaders.loops.do_while_u"
#define VkglTestCase_003827_2 "niform_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003827, VkglTestCase_003827_1, VkglTestCase_003827_2);

#define VkglTestCase_003828_1 "dEQP-GLES2.functional.shaders.loops.do_while_un"
#define VkglTestCase_003828_2 "iform_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003828, VkglTestCase_003828_1, VkglTestCase_003828_2);

#define VkglTestCase_003829_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003829_2 "le_uniform_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003829, VkglTestCase_003829_1, VkglTestCase_003829_2);

#define VkglTestCase_003830_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003830_2 "e_uniform_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003830, VkglTestCase_003830_1, VkglTestCase_003830_2);

#define VkglTestCase_003831_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003831_2 "e_uniform_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003831, VkglTestCase_003831_1, VkglTestCase_003831_2);

#define VkglTestCase_003832_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003832_2 "_uniform_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003832, VkglTestCase_003832_1, VkglTestCase_003832_2);

#define VkglTestCase_003833_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003833_2 "_uniform_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003833, VkglTestCase_003833_1, VkglTestCase_003833_2);

#define VkglTestCase_003834_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003834_2 "uniform_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003834, VkglTestCase_003834_1, VkglTestCase_003834_2);

#define VkglTestCase_003835_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003835_2 "uniform_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003835, VkglTestCase_003835_1, VkglTestCase_003835_2);

#define VkglTestCase_003836_1 "dEQP-GLES2.functional.shaders.loops.do_while_u"
#define VkglTestCase_003836_2 "niform_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003836, VkglTestCase_003836_1, VkglTestCase_003836_2);

#define VkglTestCase_003837_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003837_2 "le_uniform_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003837, VkglTestCase_003837_1, VkglTestCase_003837_2);

#define VkglTestCase_003838_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003838_2 "e_uniform_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003838, VkglTestCase_003838_1, VkglTestCase_003838_2);

#define VkglTestCase_003839_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003839_2 "le_uniform_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003839, VkglTestCase_003839_1, VkglTestCase_003839_2);

#define VkglTestCase_003840_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003840_2 "e_uniform_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003840, VkglTestCase_003840_1, VkglTestCase_003840_2);

#define VkglTestCase_003841_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003841_2 "uniform_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003841, VkglTestCase_003841_1, VkglTestCase_003841_2);

#define VkglTestCase_003842_1 "dEQP-GLES2.functional.shaders.loops.do_while_u"
#define VkglTestCase_003842_2 "niform_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003842, VkglTestCase_003842_1, VkglTestCase_003842_2);

#define VkglTestCase_003843_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003843_2 "le_uniform_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003843, VkglTestCase_003843_1, VkglTestCase_003843_2);

#define VkglTestCase_003844_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003844_2 "e_uniform_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003844, VkglTestCase_003844_1, VkglTestCase_003844_2);

#define VkglTestCase_003845_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003845_2 "le_uniform_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003845, VkglTestCase_003845_1, VkglTestCase_003845_2);

#define VkglTestCase_003846_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003846_2 "e_uniform_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003846, VkglTestCase_003846_1, VkglTestCase_003846_2);

#define VkglTestCase_003847_1 "dEQP-GLES2.functional.shaders.loops.do_"
#define VkglTestCase_003847_2 "while_uniform_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003847, VkglTestCase_003847_1, VkglTestCase_003847_2);

#define VkglTestCase_003848_1 "dEQP-GLES2.functional.shaders.loops.do_w"
#define VkglTestCase_003848_2 "hile_uniform_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003848, VkglTestCase_003848_1, VkglTestCase_003848_2);

#define VkglTestCase_003849_1 "dEQP-GLES2.functional.shaders.loops.do"
#define VkglTestCase_003849_2 "_while_uniform_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003849, VkglTestCase_003849_1, VkglTestCase_003849_2);

#define VkglTestCase_003850_1 "dEQP-GLES2.functional.shaders.loops.do_"
#define VkglTestCase_003850_2 "while_uniform_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003850, VkglTestCase_003850_1, VkglTestCase_003850_2);

#define VkglTestCase_003851_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003851_2 "e_uniform_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003851, VkglTestCase_003851_1, VkglTestCase_003851_2);

#define VkglTestCase_003852_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003852_2 "_uniform_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003852, VkglTestCase_003852_1, VkglTestCase_003852_2);

#define VkglTestCase_003853_1 "dEQP-GLES2.functional.shaders.loops.do_while_un"
#define VkglTestCase_003853_2 "iform_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003853, VkglTestCase_003853_1, VkglTestCase_003853_2);

#define VkglTestCase_003854_1 "dEQP-GLES2.functional.shaders.loops.do_while_uni"
#define VkglTestCase_003854_2 "form_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003854, VkglTestCase_003854_1, VkglTestCase_003854_2);

#define VkglTestCase_003855_1 "dEQP-GLES2.functional.shaders.loops.do_while_un"
#define VkglTestCase_003855_2 "iform_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003855, VkglTestCase_003855_1, VkglTestCase_003855_2);

#define VkglTestCase_003856_1 "dEQP-GLES2.functional.shaders.loops.do_while_uni"
#define VkglTestCase_003856_2 "form_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003856, VkglTestCase_003856_1, VkglTestCase_003856_2);

#define VkglTestCase_003857_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003857_2 "e_uniform_iterations.conditional_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003857, VkglTestCase_003857_1, VkglTestCase_003857_2);

#define VkglTestCase_003858_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003858_2 "_uniform_iterations.conditional_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003858, VkglTestCase_003858_1, VkglTestCase_003858_2);

#define VkglTestCase_003859_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003859_2 "uniform_iterations.function_call_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003859, VkglTestCase_003859_1, VkglTestCase_003859_2);

#define VkglTestCase_003860_1 "dEQP-GLES2.functional.shaders.loops.do_while_u"
#define VkglTestCase_003860_2 "niform_iterations.function_call_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003860, VkglTestCase_003860_1, VkglTestCase_003860_2);

#define VkglTestCase_003861_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003861_2 "uniform_iterations.function_call_inout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003861, VkglTestCase_003861_1, VkglTestCase_003861_2);

#define VkglTestCase_003862_1 "dEQP-GLES2.functional.shaders.loops.do_while_u"
#define VkglTestCase_003862_2 "niform_iterations.function_call_inout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003862, VkglTestCase_003862_1, VkglTestCase_003862_2);
