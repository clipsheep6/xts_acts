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

#define VkglTestCase_000818_1 "KHR-GLES3.shaders.loops.do_while_dyn"
#define VkglTestCase_000818_2 "amic_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000818, VkglTestCase_000818_1, VkglTestCase_000818_2);

#define VkglTestCase_000819_1 "KHR-GLES3.shaders.loops.do_while_dyna"
#define VkglTestCase_000819_2 "mic_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000819, VkglTestCase_000819_1, VkglTestCase_000819_2);

#define VkglTestCase_000820_1 "KHR-GLES3.shaders.loops.do_while_dynam"
#define VkglTestCase_000820_2 "ic_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000820, VkglTestCase_000820_1, VkglTestCase_000820_2);

#define VkglTestCase_000821_1 "KHR-GLES3.shaders.loops.do_while_dynami"
#define VkglTestCase_000821_2 "c_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000821, VkglTestCase_000821_1, VkglTestCase_000821_2);

#define VkglTestCase_000822_1 "KHR-GLES3.shaders.loops.do_while_dynami"
#define VkglTestCase_000822_2 "c_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000822, VkglTestCase_000822_1, VkglTestCase_000822_2);

#define VkglTestCase_000823_1 "KHR-GLES3.shaders.loops.do_while_dynamic"
#define VkglTestCase_000823_2 "_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000823, VkglTestCase_000823_1, VkglTestCase_000823_2);

#define VkglTestCase_000824_1 "KHR-GLES3.shaders.loops.do_while_dyna"
#define VkglTestCase_000824_2 "mic_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000824, VkglTestCase_000824_1, VkglTestCase_000824_2);

#define VkglTestCase_000825_1 "KHR-GLES3.shaders.loops.do_while_dynam"
#define VkglTestCase_000825_2 "ic_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000825, VkglTestCase_000825_1, VkglTestCase_000825_2);

#define VkglTestCase_000826_1 "KHR-GLES3.shaders.loops.do_while_dynam"
#define VkglTestCase_000826_2 "ic_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000826, VkglTestCase_000826_1, VkglTestCase_000826_2);

#define VkglTestCase_000827_1 "KHR-GLES3.shaders.loops.do_while_dynami"
#define VkglTestCase_000827_2 "c_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000827, VkglTestCase_000827_1, VkglTestCase_000827_2);

#define VkglTestCase_000828_1 "KHR-GLES3.shaders.loops.do_while_d"
#define VkglTestCase_000828_2 "ynamic_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000828, VkglTestCase_000828_1, VkglTestCase_000828_2);

#define VkglTestCase_000829_1 "KHR-GLES3.shaders.loops.do_while_dy"
#define VkglTestCase_000829_2 "namic_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000829, VkglTestCase_000829_1, VkglTestCase_000829_2);

#define VkglTestCase_000830_1 "KHR-GLES3.shaders.loops.do_while_dynamic_iteratio"
#define VkglTestCase_000830_2 "ns.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000830, VkglTestCase_000830_1, VkglTestCase_000830_2);

#define VkglTestCase_000831_1 "KHR-GLES3.shaders.loops.do_while_dynamic_iteration"
#define VkglTestCase_000831_2 "s.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000831, VkglTestCase_000831_1, VkglTestCase_000831_2);

#define VkglTestCase_000832_1 "KHR-GLES3.shaders.loops.do_while_dynamic_iterati"
#define VkglTestCase_000832_2 "ons.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000832, VkglTestCase_000832_1, VkglTestCase_000832_2);

#define VkglTestCase_000833_1 "KHR-GLES3.shaders.loops.do_while_dynamic_iteratio"
#define VkglTestCase_000833_2 "ns.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000833, VkglTestCase_000833_1, VkglTestCase_000833_2);

#define VkglTestCase_000834_1 "KHR-GLES3.shaders.loops.do_while_dynamic_iter"
#define VkglTestCase_000834_2 "ations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000834, VkglTestCase_000834_1, VkglTestCase_000834_2);

#define VkglTestCase_000835_1 "KHR-GLES3.shaders.loops.do_while_dynamic_itera"
#define VkglTestCase_000835_2 "tions.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000835, VkglTestCase_000835_1, VkglTestCase_000835_2);

#define VkglTestCase_000836_1 "KHR-GLES3.shaders.loops.do_while_dyna"
#define VkglTestCase_000836_2 "mic_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000836, VkglTestCase_000836_1, VkglTestCase_000836_2);

#define VkglTestCase_000837_1 "KHR-GLES3.shaders.loops.do_while_dynam"
#define VkglTestCase_000837_2 "ic_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000837, VkglTestCase_000837_1, VkglTestCase_000837_2);

#define VkglTestCase_000838_1 "KHR-GLES3.shaders.loops.do_while_dynam"
#define VkglTestCase_000838_2 "ic_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000838, VkglTestCase_000838_1, VkglTestCase_000838_2);

#define VkglTestCase_000839_1 "KHR-GLES3.shaders.loops.do_while_dynami"
#define VkglTestCase_000839_2 "c_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000839, VkglTestCase_000839_1, VkglTestCase_000839_2);

#define VkglTestCase_000840_1 "KHR-GLES3.shaders.loops.do_while_dynam"
#define VkglTestCase_000840_2 "ic_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000840, VkglTestCase_000840_1, VkglTestCase_000840_2);

#define VkglTestCase_000841_1 "KHR-GLES3.shaders.loops.do_while_dynami"
#define VkglTestCase_000841_2 "c_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000841, VkglTestCase_000841_1, VkglTestCase_000841_2);

#define VkglTestCase_000842_1 "KHR-GLES3.shaders.loops.do_while_dyna"
#define VkglTestCase_000842_2 "mic_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000842, VkglTestCase_000842_1, VkglTestCase_000842_2);

#define VkglTestCase_000843_1 "KHR-GLES3.shaders.loops.do_while_dynam"
#define VkglTestCase_000843_2 "ic_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000843, VkglTestCase_000843_1, VkglTestCase_000843_2);

#define VkglTestCase_000844_1 "KHR-GLES3.shaders.loops.do_while_dynamic"
#define VkglTestCase_000844_2 "_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000844, VkglTestCase_000844_1, VkglTestCase_000844_2);

#define VkglTestCase_000845_1 "KHR-GLES3.shaders.loops.do_while_dynamic_"
#define VkglTestCase_000845_2 "iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000845, VkglTestCase_000845_1, VkglTestCase_000845_2);

#define VkglTestCase_000846_1 "KHR-GLES3.shaders.loops.do_while_dynami"
#define VkglTestCase_000846_2 "c_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000846, VkglTestCase_000846_1, VkglTestCase_000846_2);

#define VkglTestCase_000847_1 "KHR-GLES3.shaders.loops.do_while_dynamic"
#define VkglTestCase_000847_2 "_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000847, VkglTestCase_000847_1, VkglTestCase_000847_2);

#define VkglTestCase_000848_1 "KHR-GLES3.shaders.loops.do_while_dynamic"
#define VkglTestCase_000848_2 "_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000848, VkglTestCase_000848_1, VkglTestCase_000848_2);

#define VkglTestCase_000849_1 "KHR-GLES3.shaders.loops.do_while_dynamic_"
#define VkglTestCase_000849_2 "iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000849, VkglTestCase_000849_1, VkglTestCase_000849_2);

#define VkglTestCase_000850_1 "KHR-GLES3.shaders.loops.do_while_dyn"
#define VkglTestCase_000850_2 "amic_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000850, VkglTestCase_000850_1, VkglTestCase_000850_2);

#define VkglTestCase_000851_1 "KHR-GLES3.shaders.loops.do_while_dyna"
#define VkglTestCase_000851_2 "mic_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000851, VkglTestCase_000851_1, VkglTestCase_000851_2);

#define VkglTestCase_000852_1 "KHR-GLES3.shaders.loops.do_while_dyna"
#define VkglTestCase_000852_2 "mic_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000852, VkglTestCase_000852_1, VkglTestCase_000852_2);

#define VkglTestCase_000853_1 "KHR-GLES3.shaders.loops.do_while_dynam"
#define VkglTestCase_000853_2 "ic_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000853, VkglTestCase_000853_1, VkglTestCase_000853_2);

#define VkglTestCase_000854_1 "KHR-GLES3.shaders.loops.do_while_dynam"
#define VkglTestCase_000854_2 "ic_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000854, VkglTestCase_000854_1, VkglTestCase_000854_2);

#define VkglTestCase_000855_1 "KHR-GLES3.shaders.loops.do_while_dynami"
#define VkglTestCase_000855_2 "c_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000855, VkglTestCase_000855_1, VkglTestCase_000855_2);

#define VkglTestCase_000856_1 "KHR-GLES3.shaders.loops.do_while_dynami"
#define VkglTestCase_000856_2 "c_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000856, VkglTestCase_000856_1, VkglTestCase_000856_2);

#define VkglTestCase_000857_1 "KHR-GLES3.shaders.loops.do_while_dynamic"
#define VkglTestCase_000857_2 "_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000857, VkglTestCase_000857_1, VkglTestCase_000857_2);

#define VkglTestCase_000858_1 "KHR-GLES3.shaders.loops.do_while_dyn"
#define VkglTestCase_000858_2 "amic_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000858, VkglTestCase_000858_1, VkglTestCase_000858_2);

#define VkglTestCase_000859_1 "KHR-GLES3.shaders.loops.do_while_dyna"
#define VkglTestCase_000859_2 "mic_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000859, VkglTestCase_000859_1, VkglTestCase_000859_2);

#define VkglTestCase_000860_1 "KHR-GLES3.shaders.loops.do_while_dyn"
#define VkglTestCase_000860_2 "amic_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000860, VkglTestCase_000860_1, VkglTestCase_000860_2);

#define VkglTestCase_000861_1 "KHR-GLES3.shaders.loops.do_while_dyna"
#define VkglTestCase_000861_2 "mic_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000861, VkglTestCase_000861_1, VkglTestCase_000861_2);

#define VkglTestCase_000862_1 "KHR-GLES3.shaders.loops.do_while_dynami"
#define VkglTestCase_000862_2 "c_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000862, VkglTestCase_000862_1, VkglTestCase_000862_2);

#define VkglTestCase_000863_1 "KHR-GLES3.shaders.loops.do_while_dynamic"
#define VkglTestCase_000863_2 "_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000863, VkglTestCase_000863_1, VkglTestCase_000863_2);

#define VkglTestCase_000864_1 "KHR-GLES3.shaders.loops.do_while_dyn"
#define VkglTestCase_000864_2 "amic_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000864, VkglTestCase_000864_1, VkglTestCase_000864_2);

#define VkglTestCase_000865_1 "KHR-GLES3.shaders.loops.do_while_dyna"
#define VkglTestCase_000865_2 "mic_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000865, VkglTestCase_000865_1, VkglTestCase_000865_2);

#define VkglTestCase_000866_1 "KHR-GLES3.shaders.loops.do_while_dyn"
#define VkglTestCase_000866_2 "amic_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000866, VkglTestCase_000866_1, VkglTestCase_000866_2);

#define VkglTestCase_000867_1 "KHR-GLES3.shaders.loops.do_while_dyna"
#define VkglTestCase_000867_2 "mic_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000867, VkglTestCase_000867_1, VkglTestCase_000867_2);

#define VkglTestCase_000868_1 "KHR-GLES3.shaders.loops.do_while_"
#define VkglTestCase_000868_2 "dynamic_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000868, VkglTestCase_000868_1, VkglTestCase_000868_2);

#define VkglTestCase_000869_1 "KHR-GLES3.shaders.loops.do_while_d"
#define VkglTestCase_000869_2 "ynamic_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000869, VkglTestCase_000869_1, VkglTestCase_000869_2);

#define VkglTestCase_000870_1 "KHR-GLES3.shaders.loops.do_while"
#define VkglTestCase_000870_2 "_dynamic_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000870, VkglTestCase_000870_1, VkglTestCase_000870_2);

#define VkglTestCase_000871_1 "KHR-GLES3.shaders.loops.do_while_"
#define VkglTestCase_000871_2 "dynamic_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000871, VkglTestCase_000871_1, VkglTestCase_000871_2);

#define VkglTestCase_000872_1 "KHR-GLES3.shaders.loops.do_while_dyna"
#define VkglTestCase_000872_2 "mic_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000872, VkglTestCase_000872_1, VkglTestCase_000872_2);

#define VkglTestCase_000873_1 "KHR-GLES3.shaders.loops.do_while_dynam"
#define VkglTestCase_000873_2 "ic_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000873, VkglTestCase_000873_1, VkglTestCase_000873_2);

#define VkglTestCase_000874_1 "KHR-GLES3.shaders.loops.do_while_dynamic_"
#define VkglTestCase_000874_2 "iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000874, VkglTestCase_000874_1, VkglTestCase_000874_2);

#define VkglTestCase_000875_1 "KHR-GLES3.shaders.loops.do_while_dynamic_i"
#define VkglTestCase_000875_2 "terations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000875, VkglTestCase_000875_1, VkglTestCase_000875_2);

#define VkglTestCase_000876_1 "KHR-GLES3.shaders.loops.do_while_dynamic_"
#define VkglTestCase_000876_2 "iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000876, VkglTestCase_000876_1, VkglTestCase_000876_2);

#define VkglTestCase_000877_1 "KHR-GLES3.shaders.loops.do_while_dynamic_i"
#define VkglTestCase_000877_2 "terations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000877, VkglTestCase_000877_1, VkglTestCase_000877_2);
