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

#define VkglTestCase_006707_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006707_2 "constant_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006707, VkglTestCase_006707_1, VkglTestCase_006707_2);

#define VkglTestCase_006708_1 "dEQP-GLES3.functional.shaders.loops.for_c"
#define VkglTestCase_006708_2 "onstant_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006708, VkglTestCase_006708_1, VkglTestCase_006708_2);

#define VkglTestCase_006709_1 "dEQP-GLES3.functional.shaders.loops.for_c"
#define VkglTestCase_006709_2 "onstant_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006709, VkglTestCase_006709_1, VkglTestCase_006709_2);

#define VkglTestCase_006710_1 "dEQP-GLES3.functional.shaders.loops.for_co"
#define VkglTestCase_006710_2 "nstant_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006710, VkglTestCase_006710_1, VkglTestCase_006710_2);

#define VkglTestCase_006711_1 "dEQP-GLES3.functional.shaders.loops.for_co"
#define VkglTestCase_006711_2 "nstant_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006711, VkglTestCase_006711_1, VkglTestCase_006711_2);

#define VkglTestCase_006712_1 "dEQP-GLES3.functional.shaders.loops.for_con"
#define VkglTestCase_006712_2 "stant_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006712, VkglTestCase_006712_1, VkglTestCase_006712_2);

#define VkglTestCase_006713_1 "dEQP-GLES3.functional.shaders.loops.for_con"
#define VkglTestCase_006713_2 "stant_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006713, VkglTestCase_006713_1, VkglTestCase_006713_2);

#define VkglTestCase_006714_1 "dEQP-GLES3.functional.shaders.loops.for_cons"
#define VkglTestCase_006714_2 "tant_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006714, VkglTestCase_006714_1, VkglTestCase_006714_2);

#define VkglTestCase_006715_1 "dEQP-GLES3.functional.shaders.loops.for_c"
#define VkglTestCase_006715_2 "onstant_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006715, VkglTestCase_006715_1, VkglTestCase_006715_2);

#define VkglTestCase_006716_1 "dEQP-GLES3.functional.shaders.loops.for_co"
#define VkglTestCase_006716_2 "nstant_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006716, VkglTestCase_006716_1, VkglTestCase_006716_2);

#define VkglTestCase_006717_1 "dEQP-GLES3.functional.shaders.loops.for_co"
#define VkglTestCase_006717_2 "nstant_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006717, VkglTestCase_006717_1, VkglTestCase_006717_2);

#define VkglTestCase_006718_1 "dEQP-GLES3.functional.shaders.loops.for_con"
#define VkglTestCase_006718_2 "stant_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006718, VkglTestCase_006718_1, VkglTestCase_006718_2);

#define VkglTestCase_006719_1 "dEQP-GLES3.functional.shaders.loops.fo"
#define VkglTestCase_006719_2 "r_constant_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006719, VkglTestCase_006719_1, VkglTestCase_006719_2);

#define VkglTestCase_006720_1 "dEQP-GLES3.functional.shaders.loops.for"
#define VkglTestCase_006720_2 "_constant_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006720, VkglTestCase_006720_1, VkglTestCase_006720_2);

#define VkglTestCase_006721_1 "dEQP-GLES3.functional.shaders.loops.for_constant_iter"
#define VkglTestCase_006721_2 "ations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006721, VkglTestCase_006721_1, VkglTestCase_006721_2);

#define VkglTestCase_006722_1 "dEQP-GLES3.functional.shaders.loops.for_constant_itera"
#define VkglTestCase_006722_2 "tions.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006722, VkglTestCase_006722_1, VkglTestCase_006722_2);

#define VkglTestCase_006723_1 "dEQP-GLES3.functional.shaders.loops.for_constant_ite"
#define VkglTestCase_006723_2 "rations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006723, VkglTestCase_006723_1, VkglTestCase_006723_2);

#define VkglTestCase_006724_1 "dEQP-GLES3.functional.shaders.loops.for_constant_iter"
#define VkglTestCase_006724_2 "ations.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006724, VkglTestCase_006724_1, VkglTestCase_006724_2);

#define VkglTestCase_006725_1 "dEQP-GLES3.functional.shaders.loops.for_constant_"
#define VkglTestCase_006725_2 "iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006725, VkglTestCase_006725_1, VkglTestCase_006725_2);

#define VkglTestCase_006726_1 "dEQP-GLES3.functional.shaders.loops.for_constant_i"
#define VkglTestCase_006726_2 "terations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006726, VkglTestCase_006726_1, VkglTestCase_006726_2);

#define VkglTestCase_006727_1 "dEQP-GLES3.functional.shaders.loops.for_c"
#define VkglTestCase_006727_2 "onstant_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006727, VkglTestCase_006727_1, VkglTestCase_006727_2);

#define VkglTestCase_006728_1 "dEQP-GLES3.functional.shaders.loops.for_co"
#define VkglTestCase_006728_2 "nstant_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006728, VkglTestCase_006728_1, VkglTestCase_006728_2);

#define VkglTestCase_006729_1 "dEQP-GLES3.functional.shaders.loops.for_co"
#define VkglTestCase_006729_2 "nstant_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006729, VkglTestCase_006729_1, VkglTestCase_006729_2);

#define VkglTestCase_006730_1 "dEQP-GLES3.functional.shaders.loops.for_con"
#define VkglTestCase_006730_2 "stant_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006730, VkglTestCase_006730_1, VkglTestCase_006730_2);

#define VkglTestCase_006731_1 "dEQP-GLES3.functional.shaders.loops.for_co"
#define VkglTestCase_006731_2 "nstant_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006731, VkglTestCase_006731_1, VkglTestCase_006731_2);

#define VkglTestCase_006732_1 "dEQP-GLES3.functional.shaders.loops.for_con"
#define VkglTestCase_006732_2 "stant_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006732, VkglTestCase_006732_1, VkglTestCase_006732_2);

#define VkglTestCase_006733_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006733_2 "constant_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006733, VkglTestCase_006733_1, VkglTestCase_006733_2);

#define VkglTestCase_006734_1 "dEQP-GLES3.functional.shaders.loops.for_c"
#define VkglTestCase_006734_2 "onstant_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006734, VkglTestCase_006734_1, VkglTestCase_006734_2);

#define VkglTestCase_006735_1 "dEQP-GLES3.functional.shaders.loops.for_c"
#define VkglTestCase_006735_2 "onstant_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006735, VkglTestCase_006735_1, VkglTestCase_006735_2);

#define VkglTestCase_006736_1 "dEQP-GLES3.functional.shaders.loops.for_co"
#define VkglTestCase_006736_2 "nstant_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006736, VkglTestCase_006736_1, VkglTestCase_006736_2);

#define VkglTestCase_006737_1 "dEQP-GLES3.functional.shaders.loops.for_cons"
#define VkglTestCase_006737_2 "tant_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006737, VkglTestCase_006737_1, VkglTestCase_006737_2);

#define VkglTestCase_006738_1 "dEQP-GLES3.functional.shaders.loops.for_const"
#define VkglTestCase_006738_2 "ant_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006738, VkglTestCase_006738_1, VkglTestCase_006738_2);

#define VkglTestCase_006739_1 "dEQP-GLES3.functional.shaders.loops.for_con"
#define VkglTestCase_006739_2 "stant_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006739, VkglTestCase_006739_1, VkglTestCase_006739_2);

#define VkglTestCase_006740_1 "dEQP-GLES3.functional.shaders.loops.for_cons"
#define VkglTestCase_006740_2 "tant_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006740, VkglTestCase_006740_1, VkglTestCase_006740_2);

#define VkglTestCase_006741_1 "dEQP-GLES3.functional.shaders.loops.for_cons"
#define VkglTestCase_006741_2 "tant_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006741, VkglTestCase_006741_1, VkglTestCase_006741_2);

#define VkglTestCase_006742_1 "dEQP-GLES3.functional.shaders.loops.for_const"
#define VkglTestCase_006742_2 "ant_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006742, VkglTestCase_006742_1, VkglTestCase_006742_2);

#define VkglTestCase_006743_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006743_2 "constant_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006743, VkglTestCase_006743_1, VkglTestCase_006743_2);

#define VkglTestCase_006744_1 "dEQP-GLES3.functional.shaders.loops.for_c"
#define VkglTestCase_006744_2 "onstant_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006744, VkglTestCase_006744_1, VkglTestCase_006744_2);

#define VkglTestCase_006745_1 "dEQP-GLES3.functional.shaders.loops.for_c"
#define VkglTestCase_006745_2 "onstant_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006745, VkglTestCase_006745_1, VkglTestCase_006745_2);

#define VkglTestCase_006746_1 "dEQP-GLES3.functional.shaders.loops.for_co"
#define VkglTestCase_006746_2 "nstant_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006746, VkglTestCase_006746_1, VkglTestCase_006746_2);

#define VkglTestCase_006747_1 "dEQP-GLES3.functional.shaders.loops.for_co"
#define VkglTestCase_006747_2 "nstant_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006747, VkglTestCase_006747_1, VkglTestCase_006747_2);

#define VkglTestCase_006748_1 "dEQP-GLES3.functional.shaders.loops.for_con"
#define VkglTestCase_006748_2 "stant_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006748, VkglTestCase_006748_1, VkglTestCase_006748_2);

#define VkglTestCase_006749_1 "dEQP-GLES3.functional.shaders.loops.for_con"
#define VkglTestCase_006749_2 "stant_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006749, VkglTestCase_006749_1, VkglTestCase_006749_2);

#define VkglTestCase_006750_1 "dEQP-GLES3.functional.shaders.loops.for_cons"
#define VkglTestCase_006750_2 "tant_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006750, VkglTestCase_006750_1, VkglTestCase_006750_2);

#define VkglTestCase_006751_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006751_2 "constant_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006751, VkglTestCase_006751_1, VkglTestCase_006751_2);

#define VkglTestCase_006752_1 "dEQP-GLES3.functional.shaders.loops.for_c"
#define VkglTestCase_006752_2 "onstant_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006752, VkglTestCase_006752_1, VkglTestCase_006752_2);

#define VkglTestCase_006753_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006753_2 "constant_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006753, VkglTestCase_006753_1, VkglTestCase_006753_2);

#define VkglTestCase_006754_1 "dEQP-GLES3.functional.shaders.loops.for_c"
#define VkglTestCase_006754_2 "onstant_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006754, VkglTestCase_006754_1, VkglTestCase_006754_2);

#define VkglTestCase_006755_1 "dEQP-GLES3.functional.shaders.loops.for_con"
#define VkglTestCase_006755_2 "stant_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006755, VkglTestCase_006755_1, VkglTestCase_006755_2);

#define VkglTestCase_006756_1 "dEQP-GLES3.functional.shaders.loops.for_cons"
#define VkglTestCase_006756_2 "tant_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006756, VkglTestCase_006756_1, VkglTestCase_006756_2);

#define VkglTestCase_006757_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006757_2 "constant_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006757, VkglTestCase_006757_1, VkglTestCase_006757_2);

#define VkglTestCase_006758_1 "dEQP-GLES3.functional.shaders.loops.for_c"
#define VkglTestCase_006758_2 "onstant_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006758, VkglTestCase_006758_1, VkglTestCase_006758_2);

#define VkglTestCase_006759_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006759_2 "constant_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006759, VkglTestCase_006759_1, VkglTestCase_006759_2);

#define VkglTestCase_006760_1 "dEQP-GLES3.functional.shaders.loops.for_c"
#define VkglTestCase_006760_2 "onstant_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006760, VkglTestCase_006760_1, VkglTestCase_006760_2);

#define VkglTestCase_006761_1 "dEQP-GLES3.functional.shaders.loops.f"
#define VkglTestCase_006761_2 "or_constant_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006761, VkglTestCase_006761_1, VkglTestCase_006761_2);

#define VkglTestCase_006762_1 "dEQP-GLES3.functional.shaders.loops.fo"
#define VkglTestCase_006762_2 "r_constant_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006762, VkglTestCase_006762_1, VkglTestCase_006762_2);

#define VkglTestCase_006763_1 "dEQP-GLES3.functional.shaders.loops."
#define VkglTestCase_006763_2 "for_constant_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006763, VkglTestCase_006763_1, VkglTestCase_006763_2);

#define VkglTestCase_006764_1 "dEQP-GLES3.functional.shaders.loops.f"
#define VkglTestCase_006764_2 "or_constant_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006764, VkglTestCase_006764_1, VkglTestCase_006764_2);

#define VkglTestCase_006765_1 "dEQP-GLES3.functional.shaders.loops.for_c"
#define VkglTestCase_006765_2 "onstant_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006765, VkglTestCase_006765_1, VkglTestCase_006765_2);

#define VkglTestCase_006766_1 "dEQP-GLES3.functional.shaders.loops.for_co"
#define VkglTestCase_006766_2 "nstant_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006766, VkglTestCase_006766_1, VkglTestCase_006766_2);

#define VkglTestCase_006767_1 "dEQP-GLES3.functional.shaders.loops.for_const"
#define VkglTestCase_006767_2 "ant_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006767, VkglTestCase_006767_1, VkglTestCase_006767_2);

#define VkglTestCase_006768_1 "dEQP-GLES3.functional.shaders.loops.for_consta"
#define VkglTestCase_006768_2 "nt_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006768, VkglTestCase_006768_1, VkglTestCase_006768_2);

#define VkglTestCase_006769_1 "dEQP-GLES3.functional.shaders.loops.for_const"
#define VkglTestCase_006769_2 "ant_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006769, VkglTestCase_006769_1, VkglTestCase_006769_2);

#define VkglTestCase_006770_1 "dEQP-GLES3.functional.shaders.loops.for_consta"
#define VkglTestCase_006770_2 "nt_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006770, VkglTestCase_006770_1, VkglTestCase_006770_2);
