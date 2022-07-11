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

#define VkglTestCase_003657_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003657_2 "_dynamic_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003657, VkglTestCase_003657_1, VkglTestCase_003657_2);

#define VkglTestCase_003658_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003658_2 "dynamic_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003658, VkglTestCase_003658_1, VkglTestCase_003658_2);

#define VkglTestCase_003659_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003659_2 "dynamic_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003659, VkglTestCase_003659_1, VkglTestCase_003659_2);

#define VkglTestCase_003660_1 "dEQP-GLES2.functional.shaders.loops.while_d"
#define VkglTestCase_003660_2 "ynamic_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003660, VkglTestCase_003660_1, VkglTestCase_003660_2);

#define VkglTestCase_003661_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003661_2 "dynamic_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003661, VkglTestCase_003661_1, VkglTestCase_003661_2);

#define VkglTestCase_003662_1 "dEQP-GLES2.functional.shaders.loops.while_d"
#define VkglTestCase_003662_2 "ynamic_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003662, VkglTestCase_003662_1, VkglTestCase_003662_2);

#define VkglTestCase_003663_1 "dEQP-GLES2.functional.shaders.loops.while_d"
#define VkglTestCase_003663_2 "ynamic_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003663, VkglTestCase_003663_1, VkglTestCase_003663_2);

#define VkglTestCase_003664_1 "dEQP-GLES2.functional.shaders.loops.while_dy"
#define VkglTestCase_003664_2 "namic_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003664, VkglTestCase_003664_1, VkglTestCase_003664_2);

#define VkglTestCase_003665_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003665_2 "_dynamic_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003665, VkglTestCase_003665_1, VkglTestCase_003665_2);

#define VkglTestCase_003666_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003666_2 "dynamic_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003666, VkglTestCase_003666_1, VkglTestCase_003666_2);

#define VkglTestCase_003667_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003667_2 "dynamic_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003667, VkglTestCase_003667_1, VkglTestCase_003667_2);

#define VkglTestCase_003668_1 "dEQP-GLES2.functional.shaders.loops.while_d"
#define VkglTestCase_003668_2 "ynamic_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003668, VkglTestCase_003668_1, VkglTestCase_003668_2);

#define VkglTestCase_003669_1 "dEQP-GLES2.functional.shaders.loops.whi"
#define VkglTestCase_003669_2 "le_dynamic_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003669, VkglTestCase_003669_1, VkglTestCase_003669_2);

#define VkglTestCase_003670_1 "dEQP-GLES2.functional.shaders.loops.whil"
#define VkglTestCase_003670_2 "e_dynamic_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003670, VkglTestCase_003670_1, VkglTestCase_003670_2);

#define VkglTestCase_003671_1 "dEQP-GLES2.functional.shaders.loops.while_dynamic_ite"
#define VkglTestCase_003671_2 "rations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003671, VkglTestCase_003671_1, VkglTestCase_003671_2);

#define VkglTestCase_003672_1 "dEQP-GLES2.functional.shaders.loops.while_dynamic_iter"
#define VkglTestCase_003672_2 "ations.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003672, VkglTestCase_003672_1, VkglTestCase_003672_2);

#define VkglTestCase_003673_1 "dEQP-GLES2.functional.shaders.loops.while_dynamic_ite"
#define VkglTestCase_003673_2 "rations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003673, VkglTestCase_003673_1, VkglTestCase_003673_2);

#define VkglTestCase_003674_1 "dEQP-GLES2.functional.shaders.loops.while_dynamic_iter"
#define VkglTestCase_003674_2 "ations.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003674, VkglTestCase_003674_1, VkglTestCase_003674_2);

#define VkglTestCase_003675_1 "dEQP-GLES2.functional.shaders.loops.while_dynamic"
#define VkglTestCase_003675_2 "_iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003675, VkglTestCase_003675_1, VkglTestCase_003675_2);

#define VkglTestCase_003676_1 "dEQP-GLES2.functional.shaders.loops.while_dynamic_"
#define VkglTestCase_003676_2 "iterations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003676, VkglTestCase_003676_1, VkglTestCase_003676_2);

#define VkglTestCase_003677_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003677_2 "dynamic_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003677, VkglTestCase_003677_1, VkglTestCase_003677_2);

#define VkglTestCase_003678_1 "dEQP-GLES2.functional.shaders.loops.while_d"
#define VkglTestCase_003678_2 "ynamic_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003678, VkglTestCase_003678_1, VkglTestCase_003678_2);

#define VkglTestCase_003679_1 "dEQP-GLES2.functional.shaders.loops.while_d"
#define VkglTestCase_003679_2 "ynamic_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003679, VkglTestCase_003679_1, VkglTestCase_003679_2);

#define VkglTestCase_003680_1 "dEQP-GLES2.functional.shaders.loops.while_dy"
#define VkglTestCase_003680_2 "namic_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003680, VkglTestCase_003680_1, VkglTestCase_003680_2);

#define VkglTestCase_003681_1 "dEQP-GLES2.functional.shaders.loops.while_d"
#define VkglTestCase_003681_2 "ynamic_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003681, VkglTestCase_003681_1, VkglTestCase_003681_2);

#define VkglTestCase_003682_1 "dEQP-GLES2.functional.shaders.loops.while_dy"
#define VkglTestCase_003682_2 "namic_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003682, VkglTestCase_003682_1, VkglTestCase_003682_2);

#define VkglTestCase_003683_1 "dEQP-GLES2.functional.shaders.loops.whil"
#define VkglTestCase_003683_2 "e_dynamic_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003683, VkglTestCase_003683_1, VkglTestCase_003683_2);

#define VkglTestCase_003684_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003684_2 "_dynamic_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003684, VkglTestCase_003684_1, VkglTestCase_003684_2);

#define VkglTestCase_003685_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003685_2 "dynamic_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003685, VkglTestCase_003685_1, VkglTestCase_003685_2);

#define VkglTestCase_003686_1 "dEQP-GLES2.functional.shaders.loops.while_d"
#define VkglTestCase_003686_2 "ynamic_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003686, VkglTestCase_003686_1, VkglTestCase_003686_2);

#define VkglTestCase_003687_1 "dEQP-GLES2.functional.shaders.loops.while_dyn"
#define VkglTestCase_003687_2 "amic_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003687, VkglTestCase_003687_1, VkglTestCase_003687_2);

#define VkglTestCase_003688_1 "dEQP-GLES2.functional.shaders.loops.while_dyna"
#define VkglTestCase_003688_2 "mic_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003688, VkglTestCase_003688_1, VkglTestCase_003688_2);

#define VkglTestCase_003689_1 "dEQP-GLES2.functional.shaders.loops.while_dy"
#define VkglTestCase_003689_2 "namic_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003689, VkglTestCase_003689_1, VkglTestCase_003689_2);

#define VkglTestCase_003690_1 "dEQP-GLES2.functional.shaders.loops.while_dyn"
#define VkglTestCase_003690_2 "amic_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003690, VkglTestCase_003690_1, VkglTestCase_003690_2);

#define VkglTestCase_003691_1 "dEQP-GLES2.functional.shaders.loops.while_dyn"
#define VkglTestCase_003691_2 "amic_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003691, VkglTestCase_003691_1, VkglTestCase_003691_2);

#define VkglTestCase_003692_1 "dEQP-GLES2.functional.shaders.loops.while_dyna"
#define VkglTestCase_003692_2 "mic_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003692, VkglTestCase_003692_1, VkglTestCase_003692_2);

#define VkglTestCase_003693_1 "dEQP-GLES2.functional.shaders.loops.whil"
#define VkglTestCase_003693_2 "e_dynamic_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003693, VkglTestCase_003693_1, VkglTestCase_003693_2);

#define VkglTestCase_003694_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003694_2 "_dynamic_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003694, VkglTestCase_003694_1, VkglTestCase_003694_2);

#define VkglTestCase_003695_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003695_2 "_dynamic_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003695, VkglTestCase_003695_1, VkglTestCase_003695_2);

#define VkglTestCase_003696_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003696_2 "dynamic_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003696, VkglTestCase_003696_1, VkglTestCase_003696_2);

#define VkglTestCase_003697_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003697_2 "dynamic_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003697, VkglTestCase_003697_1, VkglTestCase_003697_2);

#define VkglTestCase_003698_1 "dEQP-GLES2.functional.shaders.loops.while_d"
#define VkglTestCase_003698_2 "ynamic_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003698, VkglTestCase_003698_1, VkglTestCase_003698_2);

#define VkglTestCase_003699_1 "dEQP-GLES2.functional.shaders.loops.while_d"
#define VkglTestCase_003699_2 "ynamic_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003699, VkglTestCase_003699_1, VkglTestCase_003699_2);

#define VkglTestCase_003700_1 "dEQP-GLES2.functional.shaders.loops.while_dy"
#define VkglTestCase_003700_2 "namic_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003700, VkglTestCase_003700_1, VkglTestCase_003700_2);

#define VkglTestCase_003701_1 "dEQP-GLES2.functional.shaders.loops.whil"
#define VkglTestCase_003701_2 "e_dynamic_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003701, VkglTestCase_003701_1, VkglTestCase_003701_2);

#define VkglTestCase_003702_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003702_2 "_dynamic_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003702, VkglTestCase_003702_1, VkglTestCase_003702_2);

#define VkglTestCase_003703_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003703_2 "_dynamic_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003703, VkglTestCase_003703_1, VkglTestCase_003703_2);

#define VkglTestCase_003704_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003704_2 "dynamic_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003704, VkglTestCase_003704_1, VkglTestCase_003704_2);

#define VkglTestCase_003705_1 "dEQP-GLES2.functional.shaders.loops.while_dy"
#define VkglTestCase_003705_2 "namic_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003705, VkglTestCase_003705_1, VkglTestCase_003705_2);

#define VkglTestCase_003706_1 "dEQP-GLES2.functional.shaders.loops.while_dyn"
#define VkglTestCase_003706_2 "amic_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003706, VkglTestCase_003706_1, VkglTestCase_003706_2);

#define VkglTestCase_003707_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003707_2 "_dynamic_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003707, VkglTestCase_003707_1, VkglTestCase_003707_2);

#define VkglTestCase_003708_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003708_2 "dynamic_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003708, VkglTestCase_003708_1, VkglTestCase_003708_2);

#define VkglTestCase_003709_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003709_2 "_dynamic_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003709, VkglTestCase_003709_1, VkglTestCase_003709_2);

#define VkglTestCase_003710_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003710_2 "dynamic_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003710, VkglTestCase_003710_1, VkglTestCase_003710_2);

#define VkglTestCase_003711_1 "dEQP-GLES2.functional.shaders.loops.wh"
#define VkglTestCase_003711_2 "ile_dynamic_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003711, VkglTestCase_003711_1, VkglTestCase_003711_2);

#define VkglTestCase_003712_1 "dEQP-GLES2.functional.shaders.loops.whi"
#define VkglTestCase_003712_2 "le_dynamic_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003712, VkglTestCase_003712_1, VkglTestCase_003712_2);

#define VkglTestCase_003713_1 "dEQP-GLES2.functional.shaders.loops.w"
#define VkglTestCase_003713_2 "hile_dynamic_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003713, VkglTestCase_003713_1, VkglTestCase_003713_2);

#define VkglTestCase_003714_1 "dEQP-GLES2.functional.shaders.loops.wh"
#define VkglTestCase_003714_2 "ile_dynamic_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003714, VkglTestCase_003714_1, VkglTestCase_003714_2);

#define VkglTestCase_003715_1 "dEQP-GLES2.functional.shaders.loops.while"
#define VkglTestCase_003715_2 "_dynamic_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003715, VkglTestCase_003715_1, VkglTestCase_003715_2);

#define VkglTestCase_003716_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003716_2 "dynamic_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003716, VkglTestCase_003716_1, VkglTestCase_003716_2);

#define VkglTestCase_003717_1 "dEQP-GLES2.functional.shaders.loops.while_dyna"
#define VkglTestCase_003717_2 "mic_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003717, VkglTestCase_003717_1, VkglTestCase_003717_2);

#define VkglTestCase_003718_1 "dEQP-GLES2.functional.shaders.loops.while_dynam"
#define VkglTestCase_003718_2 "ic_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003718, VkglTestCase_003718_1, VkglTestCase_003718_2);

#define VkglTestCase_003719_1 "dEQP-GLES2.functional.shaders.loops.while_dyna"
#define VkglTestCase_003719_2 "mic_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003719, VkglTestCase_003719_1, VkglTestCase_003719_2);

#define VkglTestCase_003720_1 "dEQP-GLES2.functional.shaders.loops.while_dynam"
#define VkglTestCase_003720_2 "ic_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003720, VkglTestCase_003720_1, VkglTestCase_003720_2);

#define VkglTestCase_003721_1 "dEQP-GLES2.functional.shaders.loops.while_"
#define VkglTestCase_003721_2 "dynamic_iterations.conditional_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003721, VkglTestCase_003721_1, VkglTestCase_003721_2);

#define VkglTestCase_003722_1 "dEQP-GLES2.functional.shaders.loops.while_d"
#define VkglTestCase_003722_2 "ynamic_iterations.conditional_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003722, VkglTestCase_003722_1, VkglTestCase_003722_2);

#define VkglTestCase_003723_1 "dEQP-GLES2.functional.shaders.loops.while_dy"
#define VkglTestCase_003723_2 "namic_iterations.function_call_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003723, VkglTestCase_003723_1, VkglTestCase_003723_2);

#define VkglTestCase_003724_1 "dEQP-GLES2.functional.shaders.loops.while_dyn"
#define VkglTestCase_003724_2 "amic_iterations.function_call_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003724, VkglTestCase_003724_1, VkglTestCase_003724_2);

#define VkglTestCase_003725_1 "dEQP-GLES2.functional.shaders.loops.while_d"
#define VkglTestCase_003725_2 "ynamic_iterations.function_call_inout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003725, VkglTestCase_003725_1, VkglTestCase_003725_2);

#define VkglTestCase_003726_1 "dEQP-GLES2.functional.shaders.loops.while_dy"
#define VkglTestCase_003726_2 "namic_iterations.function_call_inout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003726, VkglTestCase_003726_1, VkglTestCase_003726_2);
