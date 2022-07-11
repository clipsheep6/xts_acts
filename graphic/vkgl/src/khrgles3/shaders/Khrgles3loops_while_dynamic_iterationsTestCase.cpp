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

#define VkglTestCase_000636_1 "KHR-GLES3.shaders.loops.while_dynam"
#define VkglTestCase_000636_2 "ic_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000636, VkglTestCase_000636_1, VkglTestCase_000636_2);

#define VkglTestCase_000637_1 "KHR-GLES3.shaders.loops.while_dynami"
#define VkglTestCase_000637_2 "c_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000637, VkglTestCase_000637_1, VkglTestCase_000637_2);

#define VkglTestCase_000638_1 "KHR-GLES3.shaders.loops.while_dynami"
#define VkglTestCase_000638_2 "c_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000638, VkglTestCase_000638_1, VkglTestCase_000638_2);

#define VkglTestCase_000639_1 "KHR-GLES3.shaders.loops.while_dynamic"
#define VkglTestCase_000639_2 "_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000639, VkglTestCase_000639_1, VkglTestCase_000639_2);

#define VkglTestCase_000640_1 "KHR-GLES3.shaders.loops.while_dynamic"
#define VkglTestCase_000640_2 "_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000640, VkglTestCase_000640_1, VkglTestCase_000640_2);

#define VkglTestCase_000641_1 "KHR-GLES3.shaders.loops.while_dynamic_"
#define VkglTestCase_000641_2 "iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000641, VkglTestCase_000641_1, VkglTestCase_000641_2);

#define VkglTestCase_000642_1 "KHR-GLES3.shaders.loops.while_dynam"
#define VkglTestCase_000642_2 "ic_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000642, VkglTestCase_000642_1, VkglTestCase_000642_2);

#define VkglTestCase_000643_1 "KHR-GLES3.shaders.loops.while_dynami"
#define VkglTestCase_000643_2 "c_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000643, VkglTestCase_000643_1, VkglTestCase_000643_2);

#define VkglTestCase_000644_1 "KHR-GLES3.shaders.loops.while_dynami"
#define VkglTestCase_000644_2 "c_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000644, VkglTestCase_000644_1, VkglTestCase_000644_2);

#define VkglTestCase_000645_1 "KHR-GLES3.shaders.loops.while_dynamic"
#define VkglTestCase_000645_2 "_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000645, VkglTestCase_000645_1, VkglTestCase_000645_2);

#define VkglTestCase_000646_1 "KHR-GLES3.shaders.loops.while_dyn"
#define VkglTestCase_000646_2 "amic_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000646, VkglTestCase_000646_1, VkglTestCase_000646_2);

#define VkglTestCase_000647_1 "KHR-GLES3.shaders.loops.while_dyna"
#define VkglTestCase_000647_2 "mic_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000647, VkglTestCase_000647_1, VkglTestCase_000647_2);

#define VkglTestCase_000648_1 "KHR-GLES3.shaders.loops.while_dynamic_iteration"
#define VkglTestCase_000648_2 "s.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000648, VkglTestCase_000648_1, VkglTestCase_000648_2);

#define VkglTestCase_000649_1 "KHR-GLES3.shaders.loops.while_dynamic_iterations"
#define VkglTestCase_000649_2 ".infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000649, VkglTestCase_000649_1, VkglTestCase_000649_2);

#define VkglTestCase_000650_1 "KHR-GLES3.shaders.loops.while_dynamic_iteration"
#define VkglTestCase_000650_2 "s.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000650, VkglTestCase_000650_1, VkglTestCase_000650_2);

#define VkglTestCase_000651_1 "KHR-GLES3.shaders.loops.while_dynamic_iterations"
#define VkglTestCase_000651_2 ".infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000651, VkglTestCase_000651_1, VkglTestCase_000651_2);

#define VkglTestCase_000652_1 "KHR-GLES3.shaders.loops.while_dynamic_itera"
#define VkglTestCase_000652_2 "tions.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000652, VkglTestCase_000652_1, VkglTestCase_000652_2);

#define VkglTestCase_000653_1 "KHR-GLES3.shaders.loops.while_dynamic_iterat"
#define VkglTestCase_000653_2 "ions.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000653, VkglTestCase_000653_1, VkglTestCase_000653_2);

#define VkglTestCase_000654_1 "KHR-GLES3.shaders.loops.while_dynami"
#define VkglTestCase_000654_2 "c_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000654, VkglTestCase_000654_1, VkglTestCase_000654_2);

#define VkglTestCase_000655_1 "KHR-GLES3.shaders.loops.while_dynamic"
#define VkglTestCase_000655_2 "_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000655, VkglTestCase_000655_1, VkglTestCase_000655_2);

#define VkglTestCase_000656_1 "KHR-GLES3.shaders.loops.while_dynamic"
#define VkglTestCase_000656_2 "_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000656, VkglTestCase_000656_1, VkglTestCase_000656_2);

#define VkglTestCase_000657_1 "KHR-GLES3.shaders.loops.while_dynamic_"
#define VkglTestCase_000657_2 "iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000657, VkglTestCase_000657_1, VkglTestCase_000657_2);

#define VkglTestCase_000658_1 "KHR-GLES3.shaders.loops.while_dynamic"
#define VkglTestCase_000658_2 "_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000658, VkglTestCase_000658_1, VkglTestCase_000658_2);

#define VkglTestCase_000659_1 "KHR-GLES3.shaders.loops.while_dynamic_"
#define VkglTestCase_000659_2 "iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000659, VkglTestCase_000659_1, VkglTestCase_000659_2);

#define VkglTestCase_000660_1 "KHR-GLES3.shaders.loops.while_dyna"
#define VkglTestCase_000660_2 "mic_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000660, VkglTestCase_000660_1, VkglTestCase_000660_2);

#define VkglTestCase_000661_1 "KHR-GLES3.shaders.loops.while_dynam"
#define VkglTestCase_000661_2 "ic_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000661, VkglTestCase_000661_1, VkglTestCase_000661_2);

#define VkglTestCase_000662_1 "KHR-GLES3.shaders.loops.while_dynami"
#define VkglTestCase_000662_2 "c_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000662, VkglTestCase_000662_1, VkglTestCase_000662_2);

#define VkglTestCase_000663_1 "KHR-GLES3.shaders.loops.while_dynamic"
#define VkglTestCase_000663_2 "_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000663, VkglTestCase_000663_1, VkglTestCase_000663_2);

#define VkglTestCase_000664_1 "KHR-GLES3.shaders.loops.while_dynamic_i"
#define VkglTestCase_000664_2 "terations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000664, VkglTestCase_000664_1, VkglTestCase_000664_2);

#define VkglTestCase_000665_1 "KHR-GLES3.shaders.loops.while_dynamic_it"
#define VkglTestCase_000665_2 "erations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000665, VkglTestCase_000665_1, VkglTestCase_000665_2);

#define VkglTestCase_000666_1 "KHR-GLES3.shaders.loops.while_dynamic_"
#define VkglTestCase_000666_2 "iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000666, VkglTestCase_000666_1, VkglTestCase_000666_2);

#define VkglTestCase_000667_1 "KHR-GLES3.shaders.loops.while_dynamic_i"
#define VkglTestCase_000667_2 "terations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000667, VkglTestCase_000667_1, VkglTestCase_000667_2);

#define VkglTestCase_000668_1 "KHR-GLES3.shaders.loops.while_dynamic_i"
#define VkglTestCase_000668_2 "terations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000668, VkglTestCase_000668_1, VkglTestCase_000668_2);

#define VkglTestCase_000669_1 "KHR-GLES3.shaders.loops.while_dynamic_it"
#define VkglTestCase_000669_2 "erations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000669, VkglTestCase_000669_1, VkglTestCase_000669_2);

#define VkglTestCase_000670_1 "KHR-GLES3.shaders.loops.while_dyna"
#define VkglTestCase_000670_2 "mic_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000670, VkglTestCase_000670_1, VkglTestCase_000670_2);

#define VkglTestCase_000671_1 "KHR-GLES3.shaders.loops.while_dynam"
#define VkglTestCase_000671_2 "ic_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000671, VkglTestCase_000671_1, VkglTestCase_000671_2);

#define VkglTestCase_000672_1 "KHR-GLES3.shaders.loops.while_dynam"
#define VkglTestCase_000672_2 "ic_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000672, VkglTestCase_000672_1, VkglTestCase_000672_2);

#define VkglTestCase_000673_1 "KHR-GLES3.shaders.loops.while_dynami"
#define VkglTestCase_000673_2 "c_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000673, VkglTestCase_000673_1, VkglTestCase_000673_2);

#define VkglTestCase_000674_1 "KHR-GLES3.shaders.loops.while_dynami"
#define VkglTestCase_000674_2 "c_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000674, VkglTestCase_000674_1, VkglTestCase_000674_2);

#define VkglTestCase_000675_1 "KHR-GLES3.shaders.loops.while_dynamic"
#define VkglTestCase_000675_2 "_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000675, VkglTestCase_000675_1, VkglTestCase_000675_2);

#define VkglTestCase_000676_1 "KHR-GLES3.shaders.loops.while_dynamic"
#define VkglTestCase_000676_2 "_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000676, VkglTestCase_000676_1, VkglTestCase_000676_2);

#define VkglTestCase_000677_1 "KHR-GLES3.shaders.loops.while_dynamic_"
#define VkglTestCase_000677_2 "iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000677, VkglTestCase_000677_1, VkglTestCase_000677_2);

#define VkglTestCase_000678_1 "KHR-GLES3.shaders.loops.while_dyna"
#define VkglTestCase_000678_2 "mic_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000678, VkglTestCase_000678_1, VkglTestCase_000678_2);

#define VkglTestCase_000679_1 "KHR-GLES3.shaders.loops.while_dynam"
#define VkglTestCase_000679_2 "ic_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000679, VkglTestCase_000679_1, VkglTestCase_000679_2);

#define VkglTestCase_000680_1 "KHR-GLES3.shaders.loops.while_dynam"
#define VkglTestCase_000680_2 "ic_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000680, VkglTestCase_000680_1, VkglTestCase_000680_2);

#define VkglTestCase_000681_1 "KHR-GLES3.shaders.loops.while_dynami"
#define VkglTestCase_000681_2 "c_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000681, VkglTestCase_000681_1, VkglTestCase_000681_2);

#define VkglTestCase_000682_1 "KHR-GLES3.shaders.loops.while_dynamic_"
#define VkglTestCase_000682_2 "iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000682, VkglTestCase_000682_1, VkglTestCase_000682_2);

#define VkglTestCase_000683_1 "KHR-GLES3.shaders.loops.while_dynamic_i"
#define VkglTestCase_000683_2 "terations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000683, VkglTestCase_000683_1, VkglTestCase_000683_2);

#define VkglTestCase_000684_1 "KHR-GLES3.shaders.loops.while_dynam"
#define VkglTestCase_000684_2 "ic_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000684, VkglTestCase_000684_1, VkglTestCase_000684_2);

#define VkglTestCase_000685_1 "KHR-GLES3.shaders.loops.while_dynami"
#define VkglTestCase_000685_2 "c_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000685, VkglTestCase_000685_1, VkglTestCase_000685_2);

#define VkglTestCase_000686_1 "KHR-GLES3.shaders.loops.while_dynam"
#define VkglTestCase_000686_2 "ic_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000686, VkglTestCase_000686_1, VkglTestCase_000686_2);

#define VkglTestCase_000687_1 "KHR-GLES3.shaders.loops.while_dynami"
#define VkglTestCase_000687_2 "c_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000687, VkglTestCase_000687_1, VkglTestCase_000687_2);

#define VkglTestCase_000688_1 "KHR-GLES3.shaders.loops.while_dy"
#define VkglTestCase_000688_2 "namic_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000688, VkglTestCase_000688_1, VkglTestCase_000688_2);

#define VkglTestCase_000689_1 "KHR-GLES3.shaders.loops.while_dyn"
#define VkglTestCase_000689_2 "amic_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000689, VkglTestCase_000689_1, VkglTestCase_000689_2);

#define VkglTestCase_000690_1 "KHR-GLES3.shaders.loops.while_d"
#define VkglTestCase_000690_2 "ynamic_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000690, VkglTestCase_000690_1, VkglTestCase_000690_2);

#define VkglTestCase_000691_1 "KHR-GLES3.shaders.loops.while_dy"
#define VkglTestCase_000691_2 "namic_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000691, VkglTestCase_000691_1, VkglTestCase_000691_2);

#define VkglTestCase_000692_1 "KHR-GLES3.shaders.loops.while_dynam"
#define VkglTestCase_000692_2 "ic_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000692, VkglTestCase_000692_1, VkglTestCase_000692_2);

#define VkglTestCase_000693_1 "KHR-GLES3.shaders.loops.while_dynami"
#define VkglTestCase_000693_2 "c_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000693, VkglTestCase_000693_1, VkglTestCase_000693_2);

#define VkglTestCase_000694_1 "KHR-GLES3.shaders.loops.while_dynamic_it"
#define VkglTestCase_000694_2 "erations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000694, VkglTestCase_000694_1, VkglTestCase_000694_2);

#define VkglTestCase_000695_1 "KHR-GLES3.shaders.loops.while_dynamic_ite"
#define VkglTestCase_000695_2 "rations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000695, VkglTestCase_000695_1, VkglTestCase_000695_2);

#define VkglTestCase_000696_1 "KHR-GLES3.shaders.loops.while_dynamic_it"
#define VkglTestCase_000696_2 "erations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000696, VkglTestCase_000696_1, VkglTestCase_000696_2);

#define VkglTestCase_000697_1 "KHR-GLES3.shaders.loops.while_dynamic_ite"
#define VkglTestCase_000697_2 "rations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000697, VkglTestCase_000697_1, VkglTestCase_000697_2);
