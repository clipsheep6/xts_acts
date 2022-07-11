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

#define VkglTestCase_006835_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006835_2 "dynamic_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006835, VkglTestCase_006835_1, VkglTestCase_006835_2);

#define VkglTestCase_006836_1 "dEQP-GLES3.functional.shaders.loops.for_d"
#define VkglTestCase_006836_2 "ynamic_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006836, VkglTestCase_006836_1, VkglTestCase_006836_2);

#define VkglTestCase_006837_1 "dEQP-GLES3.functional.shaders.loops.for_d"
#define VkglTestCase_006837_2 "ynamic_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006837, VkglTestCase_006837_1, VkglTestCase_006837_2);

#define VkglTestCase_006838_1 "dEQP-GLES3.functional.shaders.loops.for_dy"
#define VkglTestCase_006838_2 "namic_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006838, VkglTestCase_006838_1, VkglTestCase_006838_2);

#define VkglTestCase_006839_1 "dEQP-GLES3.functional.shaders.loops.for_d"
#define VkglTestCase_006839_2 "ynamic_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006839, VkglTestCase_006839_1, VkglTestCase_006839_2);

#define VkglTestCase_006840_1 "dEQP-GLES3.functional.shaders.loops.for_dy"
#define VkglTestCase_006840_2 "namic_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006840, VkglTestCase_006840_1, VkglTestCase_006840_2);

#define VkglTestCase_006841_1 "dEQP-GLES3.functional.shaders.loops.for_dy"
#define VkglTestCase_006841_2 "namic_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006841, VkglTestCase_006841_1, VkglTestCase_006841_2);

#define VkglTestCase_006842_1 "dEQP-GLES3.functional.shaders.loops.for_dyn"
#define VkglTestCase_006842_2 "amic_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006842, VkglTestCase_006842_1, VkglTestCase_006842_2);

#define VkglTestCase_006843_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006843_2 "dynamic_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006843, VkglTestCase_006843_1, VkglTestCase_006843_2);

#define VkglTestCase_006844_1 "dEQP-GLES3.functional.shaders.loops.for_d"
#define VkglTestCase_006844_2 "ynamic_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006844, VkglTestCase_006844_1, VkglTestCase_006844_2);

#define VkglTestCase_006845_1 "dEQP-GLES3.functional.shaders.loops.for_d"
#define VkglTestCase_006845_2 "ynamic_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006845, VkglTestCase_006845_1, VkglTestCase_006845_2);

#define VkglTestCase_006846_1 "dEQP-GLES3.functional.shaders.loops.for_dy"
#define VkglTestCase_006846_2 "namic_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006846, VkglTestCase_006846_1, VkglTestCase_006846_2);

#define VkglTestCase_006847_1 "dEQP-GLES3.functional.shaders.loops.fo"
#define VkglTestCase_006847_2 "r_dynamic_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006847, VkglTestCase_006847_1, VkglTestCase_006847_2);

#define VkglTestCase_006848_1 "dEQP-GLES3.functional.shaders.loops.for"
#define VkglTestCase_006848_2 "_dynamic_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006848, VkglTestCase_006848_1, VkglTestCase_006848_2);

#define VkglTestCase_006849_1 "dEQP-GLES3.functional.shaders.loops.for_dynamic_iter"
#define VkglTestCase_006849_2 "ations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006849, VkglTestCase_006849_1, VkglTestCase_006849_2);

#define VkglTestCase_006850_1 "dEQP-GLES3.functional.shaders.loops.for_dynamic_itera"
#define VkglTestCase_006850_2 "tions.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006850, VkglTestCase_006850_1, VkglTestCase_006850_2);

#define VkglTestCase_006851_1 "dEQP-GLES3.functional.shaders.loops.for_dynamic_iter"
#define VkglTestCase_006851_2 "ations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006851, VkglTestCase_006851_1, VkglTestCase_006851_2);

#define VkglTestCase_006852_1 "dEQP-GLES3.functional.shaders.loops.for_dynamic_itera"
#define VkglTestCase_006852_2 "tions.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006852, VkglTestCase_006852_1, VkglTestCase_006852_2);

#define VkglTestCase_006853_1 "dEQP-GLES3.functional.shaders.loops.for_dynamic_"
#define VkglTestCase_006853_2 "iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006853, VkglTestCase_006853_1, VkglTestCase_006853_2);

#define VkglTestCase_006854_1 "dEQP-GLES3.functional.shaders.loops.for_dynamic_i"
#define VkglTestCase_006854_2 "terations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006854, VkglTestCase_006854_1, VkglTestCase_006854_2);

#define VkglTestCase_006855_1 "dEQP-GLES3.functional.shaders.loops.for_d"
#define VkglTestCase_006855_2 "ynamic_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006855, VkglTestCase_006855_1, VkglTestCase_006855_2);

#define VkglTestCase_006856_1 "dEQP-GLES3.functional.shaders.loops.for_dy"
#define VkglTestCase_006856_2 "namic_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006856, VkglTestCase_006856_1, VkglTestCase_006856_2);

#define VkglTestCase_006857_1 "dEQP-GLES3.functional.shaders.loops.for_dy"
#define VkglTestCase_006857_2 "namic_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006857, VkglTestCase_006857_1, VkglTestCase_006857_2);

#define VkglTestCase_006858_1 "dEQP-GLES3.functional.shaders.loops.for_dyn"
#define VkglTestCase_006858_2 "amic_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006858, VkglTestCase_006858_1, VkglTestCase_006858_2);

#define VkglTestCase_006859_1 "dEQP-GLES3.functional.shaders.loops.for_dy"
#define VkglTestCase_006859_2 "namic_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006859, VkglTestCase_006859_1, VkglTestCase_006859_2);

#define VkglTestCase_006860_1 "dEQP-GLES3.functional.shaders.loops.for_dyn"
#define VkglTestCase_006860_2 "amic_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006860, VkglTestCase_006860_1, VkglTestCase_006860_2);

#define VkglTestCase_006861_1 "dEQP-GLES3.functional.shaders.loops.for"
#define VkglTestCase_006861_2 "_dynamic_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006861, VkglTestCase_006861_1, VkglTestCase_006861_2);

#define VkglTestCase_006862_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006862_2 "dynamic_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006862, VkglTestCase_006862_1, VkglTestCase_006862_2);

#define VkglTestCase_006863_1 "dEQP-GLES3.functional.shaders.loops.for_d"
#define VkglTestCase_006863_2 "ynamic_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006863, VkglTestCase_006863_1, VkglTestCase_006863_2);

#define VkglTestCase_006864_1 "dEQP-GLES3.functional.shaders.loops.for_dy"
#define VkglTestCase_006864_2 "namic_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006864, VkglTestCase_006864_1, VkglTestCase_006864_2);

#define VkglTestCase_006865_1 "dEQP-GLES3.functional.shaders.loops.for_dyna"
#define VkglTestCase_006865_2 "mic_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006865, VkglTestCase_006865_1, VkglTestCase_006865_2);

#define VkglTestCase_006866_1 "dEQP-GLES3.functional.shaders.loops.for_dynam"
#define VkglTestCase_006866_2 "ic_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006866, VkglTestCase_006866_1, VkglTestCase_006866_2);

#define VkglTestCase_006867_1 "dEQP-GLES3.functional.shaders.loops.for_dyn"
#define VkglTestCase_006867_2 "amic_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006867, VkglTestCase_006867_1, VkglTestCase_006867_2);

#define VkglTestCase_006868_1 "dEQP-GLES3.functional.shaders.loops.for_dyna"
#define VkglTestCase_006868_2 "mic_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006868, VkglTestCase_006868_1, VkglTestCase_006868_2);

#define VkglTestCase_006869_1 "dEQP-GLES3.functional.shaders.loops.for_dyna"
#define VkglTestCase_006869_2 "mic_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006869, VkglTestCase_006869_1, VkglTestCase_006869_2);

#define VkglTestCase_006870_1 "dEQP-GLES3.functional.shaders.loops.for_dynam"
#define VkglTestCase_006870_2 "ic_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006870, VkglTestCase_006870_1, VkglTestCase_006870_2);

#define VkglTestCase_006871_1 "dEQP-GLES3.functional.shaders.loops.for"
#define VkglTestCase_006871_2 "_dynamic_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006871, VkglTestCase_006871_1, VkglTestCase_006871_2);

#define VkglTestCase_006872_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006872_2 "dynamic_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006872, VkglTestCase_006872_1, VkglTestCase_006872_2);

#define VkglTestCase_006873_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006873_2 "dynamic_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006873, VkglTestCase_006873_1, VkglTestCase_006873_2);

#define VkglTestCase_006874_1 "dEQP-GLES3.functional.shaders.loops.for_d"
#define VkglTestCase_006874_2 "ynamic_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006874, VkglTestCase_006874_1, VkglTestCase_006874_2);

#define VkglTestCase_006875_1 "dEQP-GLES3.functional.shaders.loops.for_d"
#define VkglTestCase_006875_2 "ynamic_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006875, VkglTestCase_006875_1, VkglTestCase_006875_2);

#define VkglTestCase_006876_1 "dEQP-GLES3.functional.shaders.loops.for_dy"
#define VkglTestCase_006876_2 "namic_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006876, VkglTestCase_006876_1, VkglTestCase_006876_2);

#define VkglTestCase_006877_1 "dEQP-GLES3.functional.shaders.loops.for_dy"
#define VkglTestCase_006877_2 "namic_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006877, VkglTestCase_006877_1, VkglTestCase_006877_2);

#define VkglTestCase_006878_1 "dEQP-GLES3.functional.shaders.loops.for_dyn"
#define VkglTestCase_006878_2 "amic_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006878, VkglTestCase_006878_1, VkglTestCase_006878_2);

#define VkglTestCase_006879_1 "dEQP-GLES3.functional.shaders.loops.for"
#define VkglTestCase_006879_2 "_dynamic_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006879, VkglTestCase_006879_1, VkglTestCase_006879_2);

#define VkglTestCase_006880_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006880_2 "dynamic_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006880, VkglTestCase_006880_1, VkglTestCase_006880_2);

#define VkglTestCase_006881_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006881_2 "dynamic_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006881, VkglTestCase_006881_1, VkglTestCase_006881_2);

#define VkglTestCase_006882_1 "dEQP-GLES3.functional.shaders.loops.for_d"
#define VkglTestCase_006882_2 "ynamic_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006882, VkglTestCase_006882_1, VkglTestCase_006882_2);

#define VkglTestCase_006883_1 "dEQP-GLES3.functional.shaders.loops.for_dyn"
#define VkglTestCase_006883_2 "amic_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006883, VkglTestCase_006883_1, VkglTestCase_006883_2);

#define VkglTestCase_006884_1 "dEQP-GLES3.functional.shaders.loops.for_dyna"
#define VkglTestCase_006884_2 "mic_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006884, VkglTestCase_006884_1, VkglTestCase_006884_2);

#define VkglTestCase_006885_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006885_2 "dynamic_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006885, VkglTestCase_006885_1, VkglTestCase_006885_2);

#define VkglTestCase_006886_1 "dEQP-GLES3.functional.shaders.loops.for_d"
#define VkglTestCase_006886_2 "ynamic_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006886, VkglTestCase_006886_1, VkglTestCase_006886_2);

#define VkglTestCase_006887_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006887_2 "dynamic_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006887, VkglTestCase_006887_1, VkglTestCase_006887_2);

#define VkglTestCase_006888_1 "dEQP-GLES3.functional.shaders.loops.for_d"
#define VkglTestCase_006888_2 "ynamic_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006888, VkglTestCase_006888_1, VkglTestCase_006888_2);

#define VkglTestCase_006889_1 "dEQP-GLES3.functional.shaders.loops.f"
#define VkglTestCase_006889_2 "or_dynamic_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006889, VkglTestCase_006889_1, VkglTestCase_006889_2);

#define VkglTestCase_006890_1 "dEQP-GLES3.functional.shaders.loops.fo"
#define VkglTestCase_006890_2 "r_dynamic_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006890, VkglTestCase_006890_1, VkglTestCase_006890_2);

#define VkglTestCase_006891_1 "dEQP-GLES3.functional.shaders.loops."
#define VkglTestCase_006891_2 "for_dynamic_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006891, VkglTestCase_006891_1, VkglTestCase_006891_2);

#define VkglTestCase_006892_1 "dEQP-GLES3.functional.shaders.loops.f"
#define VkglTestCase_006892_2 "or_dynamic_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006892, VkglTestCase_006892_1, VkglTestCase_006892_2);

#define VkglTestCase_006893_1 "dEQP-GLES3.functional.shaders.loops.for_"
#define VkglTestCase_006893_2 "dynamic_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006893, VkglTestCase_006893_1, VkglTestCase_006893_2);

#define VkglTestCase_006894_1 "dEQP-GLES3.functional.shaders.loops.for_d"
#define VkglTestCase_006894_2 "ynamic_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006894, VkglTestCase_006894_1, VkglTestCase_006894_2);

#define VkglTestCase_006895_1 "dEQP-GLES3.functional.shaders.loops.for_dynam"
#define VkglTestCase_006895_2 "ic_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006895, VkglTestCase_006895_1, VkglTestCase_006895_2);

#define VkglTestCase_006896_1 "dEQP-GLES3.functional.shaders.loops.for_dynami"
#define VkglTestCase_006896_2 "c_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006896, VkglTestCase_006896_1, VkglTestCase_006896_2);

#define VkglTestCase_006897_1 "dEQP-GLES3.functional.shaders.loops.for_dynam"
#define VkglTestCase_006897_2 "ic_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006897, VkglTestCase_006897_1, VkglTestCase_006897_2);

#define VkglTestCase_006898_1 "dEQP-GLES3.functional.shaders.loops.for_dynami"
#define VkglTestCase_006898_2 "c_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006898, VkglTestCase_006898_1, VkglTestCase_006898_2);
