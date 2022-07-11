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

#define VkglTestCase_000698_1 "KHR-GLES3.shaders.loops.do_while_cons"
#define VkglTestCase_000698_2 "tant_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000698, VkglTestCase_000698_1, VkglTestCase_000698_2);

#define VkglTestCase_000699_1 "KHR-GLES3.shaders.loops.do_while_const"
#define VkglTestCase_000699_2 "ant_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000699, VkglTestCase_000699_1, VkglTestCase_000699_2);

#define VkglTestCase_000700_1 "KHR-GLES3.shaders.loops.do_while_const"
#define VkglTestCase_000700_2 "ant_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000700, VkglTestCase_000700_1, VkglTestCase_000700_2);

#define VkglTestCase_000701_1 "KHR-GLES3.shaders.loops.do_while_consta"
#define VkglTestCase_000701_2 "nt_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000701, VkglTestCase_000701_1, VkglTestCase_000701_2);

#define VkglTestCase_000702_1 "KHR-GLES3.shaders.loops.do_while_consta"
#define VkglTestCase_000702_2 "nt_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000702, VkglTestCase_000702_1, VkglTestCase_000702_2);

#define VkglTestCase_000703_1 "KHR-GLES3.shaders.loops.do_while_constan"
#define VkglTestCase_000703_2 "t_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000703, VkglTestCase_000703_1, VkglTestCase_000703_2);

#define VkglTestCase_000704_1 "KHR-GLES3.shaders.loops.do_while_cons"
#define VkglTestCase_000704_2 "tant_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000704, VkglTestCase_000704_1, VkglTestCase_000704_2);

#define VkglTestCase_000705_1 "KHR-GLES3.shaders.loops.do_while_const"
#define VkglTestCase_000705_2 "ant_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000705, VkglTestCase_000705_1, VkglTestCase_000705_2);

#define VkglTestCase_000706_1 "KHR-GLES3.shaders.loops.do_while_const"
#define VkglTestCase_000706_2 "ant_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000706, VkglTestCase_000706_1, VkglTestCase_000706_2);

#define VkglTestCase_000707_1 "KHR-GLES3.shaders.loops.do_while_consta"
#define VkglTestCase_000707_2 "nt_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000707, VkglTestCase_000707_1, VkglTestCase_000707_2);

#define VkglTestCase_000708_1 "KHR-GLES3.shaders.loops.do_while_co"
#define VkglTestCase_000708_2 "nstant_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000708, VkglTestCase_000708_1, VkglTestCase_000708_2);

#define VkglTestCase_000709_1 "KHR-GLES3.shaders.loops.do_while_con"
#define VkglTestCase_000709_2 "stant_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000709, VkglTestCase_000709_1, VkglTestCase_000709_2);

#define VkglTestCase_000710_1 "KHR-GLES3.shaders.loops.do_while_constant_iterati"
#define VkglTestCase_000710_2 "ons.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000710, VkglTestCase_000710_1, VkglTestCase_000710_2);

#define VkglTestCase_000711_1 "KHR-GLES3.shaders.loops.do_while_constant_iteratio"
#define VkglTestCase_000711_2 "ns.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000711, VkglTestCase_000711_1, VkglTestCase_000711_2);

#define VkglTestCase_000712_1 "KHR-GLES3.shaders.loops.do_while_constant_iterati"
#define VkglTestCase_000712_2 "ons.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000712, VkglTestCase_000712_1, VkglTestCase_000712_2);

#define VkglTestCase_000713_1 "KHR-GLES3.shaders.loops.do_while_constant_iteratio"
#define VkglTestCase_000713_2 "ns.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000713, VkglTestCase_000713_1, VkglTestCase_000713_2);

#define VkglTestCase_000714_1 "KHR-GLES3.shaders.loops.do_while_constant_ite"
#define VkglTestCase_000714_2 "rations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000714, VkglTestCase_000714_1, VkglTestCase_000714_2);

#define VkglTestCase_000715_1 "KHR-GLES3.shaders.loops.do_while_constant_iter"
#define VkglTestCase_000715_2 "ations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000715, VkglTestCase_000715_1, VkglTestCase_000715_2);

#define VkglTestCase_000716_1 "KHR-GLES3.shaders.loops.do_while_const"
#define VkglTestCase_000716_2 "ant_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000716, VkglTestCase_000716_1, VkglTestCase_000716_2);

#define VkglTestCase_000717_1 "KHR-GLES3.shaders.loops.do_while_consta"
#define VkglTestCase_000717_2 "nt_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000717, VkglTestCase_000717_1, VkglTestCase_000717_2);

#define VkglTestCase_000718_1 "KHR-GLES3.shaders.loops.do_while_consta"
#define VkglTestCase_000718_2 "nt_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000718, VkglTestCase_000718_1, VkglTestCase_000718_2);

#define VkglTestCase_000719_1 "KHR-GLES3.shaders.loops.do_while_constan"
#define VkglTestCase_000719_2 "t_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000719, VkglTestCase_000719_1, VkglTestCase_000719_2);

#define VkglTestCase_000720_1 "KHR-GLES3.shaders.loops.do_while_consta"
#define VkglTestCase_000720_2 "nt_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000720, VkglTestCase_000720_1, VkglTestCase_000720_2);

#define VkglTestCase_000721_1 "KHR-GLES3.shaders.loops.do_while_constan"
#define VkglTestCase_000721_2 "t_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000721, VkglTestCase_000721_1, VkglTestCase_000721_2);

#define VkglTestCase_000722_1 "KHR-GLES3.shaders.loops.do_while_const"
#define VkglTestCase_000722_2 "ant_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000722, VkglTestCase_000722_1, VkglTestCase_000722_2);

#define VkglTestCase_000723_1 "KHR-GLES3.shaders.loops.do_while_consta"
#define VkglTestCase_000723_2 "nt_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000723, VkglTestCase_000723_1, VkglTestCase_000723_2);

#define VkglTestCase_000724_1 "KHR-GLES3.shaders.loops.do_while_constant"
#define VkglTestCase_000724_2 "_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000724, VkglTestCase_000724_1, VkglTestCase_000724_2);

#define VkglTestCase_000725_1 "KHR-GLES3.shaders.loops.do_while_constant_"
#define VkglTestCase_000725_2 "iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000725, VkglTestCase_000725_1, VkglTestCase_000725_2);

#define VkglTestCase_000726_1 "KHR-GLES3.shaders.loops.do_while_constan"
#define VkglTestCase_000726_2 "t_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000726, VkglTestCase_000726_1, VkglTestCase_000726_2);

#define VkglTestCase_000727_1 "KHR-GLES3.shaders.loops.do_while_constant"
#define VkglTestCase_000727_2 "_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000727, VkglTestCase_000727_1, VkglTestCase_000727_2);

#define VkglTestCase_000728_1 "KHR-GLES3.shaders.loops.do_while_constant"
#define VkglTestCase_000728_2 "_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000728, VkglTestCase_000728_1, VkglTestCase_000728_2);

#define VkglTestCase_000729_1 "KHR-GLES3.shaders.loops.do_while_constant_"
#define VkglTestCase_000729_2 "iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000729, VkglTestCase_000729_1, VkglTestCase_000729_2);

#define VkglTestCase_000730_1 "KHR-GLES3.shaders.loops.do_while_con"
#define VkglTestCase_000730_2 "stant_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000730, VkglTestCase_000730_1, VkglTestCase_000730_2);

#define VkglTestCase_000731_1 "KHR-GLES3.shaders.loops.do_while_cons"
#define VkglTestCase_000731_2 "tant_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000731, VkglTestCase_000731_1, VkglTestCase_000731_2);

#define VkglTestCase_000732_1 "KHR-GLES3.shaders.loops.do_while_cons"
#define VkglTestCase_000732_2 "tant_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000732, VkglTestCase_000732_1, VkglTestCase_000732_2);

#define VkglTestCase_000733_1 "KHR-GLES3.shaders.loops.do_while_const"
#define VkglTestCase_000733_2 "ant_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000733, VkglTestCase_000733_1, VkglTestCase_000733_2);

#define VkglTestCase_000734_1 "KHR-GLES3.shaders.loops.do_while_const"
#define VkglTestCase_000734_2 "ant_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000734, VkglTestCase_000734_1, VkglTestCase_000734_2);

#define VkglTestCase_000735_1 "KHR-GLES3.shaders.loops.do_while_consta"
#define VkglTestCase_000735_2 "nt_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000735, VkglTestCase_000735_1, VkglTestCase_000735_2);

#define VkglTestCase_000736_1 "KHR-GLES3.shaders.loops.do_while_consta"
#define VkglTestCase_000736_2 "nt_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000736, VkglTestCase_000736_1, VkglTestCase_000736_2);

#define VkglTestCase_000737_1 "KHR-GLES3.shaders.loops.do_while_constan"
#define VkglTestCase_000737_2 "t_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000737, VkglTestCase_000737_1, VkglTestCase_000737_2);

#define VkglTestCase_000738_1 "KHR-GLES3.shaders.loops.do_while_con"
#define VkglTestCase_000738_2 "stant_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000738, VkglTestCase_000738_1, VkglTestCase_000738_2);

#define VkglTestCase_000739_1 "KHR-GLES3.shaders.loops.do_while_cons"
#define VkglTestCase_000739_2 "tant_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000739, VkglTestCase_000739_1, VkglTestCase_000739_2);

#define VkglTestCase_000740_1 "KHR-GLES3.shaders.loops.do_while_cons"
#define VkglTestCase_000740_2 "tant_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000740, VkglTestCase_000740_1, VkglTestCase_000740_2);

#define VkglTestCase_000741_1 "KHR-GLES3.shaders.loops.do_while_const"
#define VkglTestCase_000741_2 "ant_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000741, VkglTestCase_000741_1, VkglTestCase_000741_2);

#define VkglTestCase_000742_1 "KHR-GLES3.shaders.loops.do_while_constan"
#define VkglTestCase_000742_2 "t_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000742, VkglTestCase_000742_1, VkglTestCase_000742_2);

#define VkglTestCase_000743_1 "KHR-GLES3.shaders.loops.do_while_constant"
#define VkglTestCase_000743_2 "_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000743, VkglTestCase_000743_1, VkglTestCase_000743_2);

#define VkglTestCase_000744_1 "KHR-GLES3.shaders.loops.do_while_cons"
#define VkglTestCase_000744_2 "tant_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000744, VkglTestCase_000744_1, VkglTestCase_000744_2);

#define VkglTestCase_000745_1 "KHR-GLES3.shaders.loops.do_while_const"
#define VkglTestCase_000745_2 "ant_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000745, VkglTestCase_000745_1, VkglTestCase_000745_2);

#define VkglTestCase_000746_1 "KHR-GLES3.shaders.loops.do_while_cons"
#define VkglTestCase_000746_2 "tant_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000746, VkglTestCase_000746_1, VkglTestCase_000746_2);

#define VkglTestCase_000747_1 "KHR-GLES3.shaders.loops.do_while_const"
#define VkglTestCase_000747_2 "ant_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000747, VkglTestCase_000747_1, VkglTestCase_000747_2);

#define VkglTestCase_000748_1 "KHR-GLES3.shaders.loops.do_while_c"
#define VkglTestCase_000748_2 "onstant_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000748, VkglTestCase_000748_1, VkglTestCase_000748_2);

#define VkglTestCase_000749_1 "KHR-GLES3.shaders.loops.do_while_co"
#define VkglTestCase_000749_2 "nstant_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000749, VkglTestCase_000749_1, VkglTestCase_000749_2);

#define VkglTestCase_000750_1 "KHR-GLES3.shaders.loops.do_while_"
#define VkglTestCase_000750_2 "constant_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000750, VkglTestCase_000750_1, VkglTestCase_000750_2);

#define VkglTestCase_000751_1 "KHR-GLES3.shaders.loops.do_while_c"
#define VkglTestCase_000751_2 "onstant_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000751, VkglTestCase_000751_1, VkglTestCase_000751_2);

#define VkglTestCase_000752_1 "KHR-GLES3.shaders.loops.do_while_cons"
#define VkglTestCase_000752_2 "tant_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000752, VkglTestCase_000752_1, VkglTestCase_000752_2);

#define VkglTestCase_000753_1 "KHR-GLES3.shaders.loops.do_while_const"
#define VkglTestCase_000753_2 "ant_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000753, VkglTestCase_000753_1, VkglTestCase_000753_2);

#define VkglTestCase_000754_1 "KHR-GLES3.shaders.loops.do_while_constant_"
#define VkglTestCase_000754_2 "iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000754, VkglTestCase_000754_1, VkglTestCase_000754_2);

#define VkglTestCase_000755_1 "KHR-GLES3.shaders.loops.do_while_constant_i"
#define VkglTestCase_000755_2 "terations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000755, VkglTestCase_000755_1, VkglTestCase_000755_2);

#define VkglTestCase_000756_1 "KHR-GLES3.shaders.loops.do_while_constant_"
#define VkglTestCase_000756_2 "iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000756, VkglTestCase_000756_1, VkglTestCase_000756_2);

#define VkglTestCase_000757_1 "KHR-GLES3.shaders.loops.do_while_constant_i"
#define VkglTestCase_000757_2 "terations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000757, VkglTestCase_000757_1, VkglTestCase_000757_2);
