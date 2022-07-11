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

#define VkglTestCase_000450_1 "KHR-GLES3.shaders.loops.for_dynami"
#define VkglTestCase_000450_2 "c_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000450, VkglTestCase_000450_1, VkglTestCase_000450_2);

#define VkglTestCase_000451_1 "KHR-GLES3.shaders.loops.for_dynamic"
#define VkglTestCase_000451_2 "_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000451, VkglTestCase_000451_1, VkglTestCase_000451_2);

#define VkglTestCase_000452_1 "KHR-GLES3.shaders.loops.for_dynamic"
#define VkglTestCase_000452_2 "_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000452, VkglTestCase_000452_1, VkglTestCase_000452_2);

#define VkglTestCase_000453_1 "KHR-GLES3.shaders.loops.for_dynamic_"
#define VkglTestCase_000453_2 "iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000453, VkglTestCase_000453_1, VkglTestCase_000453_2);

#define VkglTestCase_000454_1 "KHR-GLES3.shaders.loops.for_dynamic_"
#define VkglTestCase_000454_2 "iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000454, VkglTestCase_000454_1, VkglTestCase_000454_2);

#define VkglTestCase_000455_1 "KHR-GLES3.shaders.loops.for_dynamic_i"
#define VkglTestCase_000455_2 "terations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000455, VkglTestCase_000455_1, VkglTestCase_000455_2);

#define VkglTestCase_000456_1 "KHR-GLES3.shaders.loops.for_dynami"
#define VkglTestCase_000456_2 "c_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000456, VkglTestCase_000456_1, VkglTestCase_000456_2);

#define VkglTestCase_000457_1 "KHR-GLES3.shaders.loops.for_dynamic"
#define VkglTestCase_000457_2 "_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000457, VkglTestCase_000457_1, VkglTestCase_000457_2);

#define VkglTestCase_000458_1 "KHR-GLES3.shaders.loops.for_dynamic"
#define VkglTestCase_000458_2 "_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000458, VkglTestCase_000458_1, VkglTestCase_000458_2);

#define VkglTestCase_000459_1 "KHR-GLES3.shaders.loops.for_dynamic_"
#define VkglTestCase_000459_2 "iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000459, VkglTestCase_000459_1, VkglTestCase_000459_2);

#define VkglTestCase_000460_1 "KHR-GLES3.shaders.loops.for_dyna"
#define VkglTestCase_000460_2 "mic_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000460, VkglTestCase_000460_1, VkglTestCase_000460_2);

#define VkglTestCase_000461_1 "KHR-GLES3.shaders.loops.for_dynam"
#define VkglTestCase_000461_2 "ic_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000461, VkglTestCase_000461_1, VkglTestCase_000461_2);

#define VkglTestCase_000462_1 "KHR-GLES3.shaders.loops.for_dynamic_iterations"
#define VkglTestCase_000462_2 ".infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000462, VkglTestCase_000462_1, VkglTestCase_000462_2);

#define VkglTestCase_000463_1 "KHR-GLES3.shaders.loops.for_dynamic_iterations."
#define VkglTestCase_000463_2 "infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000463, VkglTestCase_000463_1, VkglTestCase_000463_2);

#define VkglTestCase_000464_1 "KHR-GLES3.shaders.loops.for_dynamic_iterations"
#define VkglTestCase_000464_2 ".infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000464, VkglTestCase_000464_1, VkglTestCase_000464_2);

#define VkglTestCase_000465_1 "KHR-GLES3.shaders.loops.for_dynamic_iterations."
#define VkglTestCase_000465_2 "infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000465, VkglTestCase_000465_1, VkglTestCase_000465_2);

#define VkglTestCase_000466_1 "KHR-GLES3.shaders.loops.for_dynamic_iterat"
#define VkglTestCase_000466_2 "ions.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000466, VkglTestCase_000466_1, VkglTestCase_000466_2);

#define VkglTestCase_000467_1 "KHR-GLES3.shaders.loops.for_dynamic_iterati"
#define VkglTestCase_000467_2 "ons.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000467, VkglTestCase_000467_1, VkglTestCase_000467_2);

#define VkglTestCase_000468_1 "KHR-GLES3.shaders.loops.for_dynamic"
#define VkglTestCase_000468_2 "_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000468, VkglTestCase_000468_1, VkglTestCase_000468_2);

#define VkglTestCase_000469_1 "KHR-GLES3.shaders.loops.for_dynamic_"
#define VkglTestCase_000469_2 "iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000469, VkglTestCase_000469_1, VkglTestCase_000469_2);

#define VkglTestCase_000470_1 "KHR-GLES3.shaders.loops.for_dynamic_"
#define VkglTestCase_000470_2 "iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000470, VkglTestCase_000470_1, VkglTestCase_000470_2);

#define VkglTestCase_000471_1 "KHR-GLES3.shaders.loops.for_dynamic_i"
#define VkglTestCase_000471_2 "terations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000471, VkglTestCase_000471_1, VkglTestCase_000471_2);

#define VkglTestCase_000472_1 "KHR-GLES3.shaders.loops.for_dynamic_"
#define VkglTestCase_000472_2 "iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000472, VkglTestCase_000472_1, VkglTestCase_000472_2);

#define VkglTestCase_000473_1 "KHR-GLES3.shaders.loops.for_dynamic_i"
#define VkglTestCase_000473_2 "terations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000473, VkglTestCase_000473_1, VkglTestCase_000473_2);

#define VkglTestCase_000474_1 "KHR-GLES3.shaders.loops.for_dynam"
#define VkglTestCase_000474_2 "ic_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000474, VkglTestCase_000474_1, VkglTestCase_000474_2);

#define VkglTestCase_000475_1 "KHR-GLES3.shaders.loops.for_dynami"
#define VkglTestCase_000475_2 "c_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000475, VkglTestCase_000475_1, VkglTestCase_000475_2);

#define VkglTestCase_000476_1 "KHR-GLES3.shaders.loops.for_dynamic"
#define VkglTestCase_000476_2 "_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000476, VkglTestCase_000476_1, VkglTestCase_000476_2);

#define VkglTestCase_000477_1 "KHR-GLES3.shaders.loops.for_dynamic_"
#define VkglTestCase_000477_2 "iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000477, VkglTestCase_000477_1, VkglTestCase_000477_2);

#define VkglTestCase_000478_1 "KHR-GLES3.shaders.loops.for_dynamic_it"
#define VkglTestCase_000478_2 "erations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000478, VkglTestCase_000478_1, VkglTestCase_000478_2);

#define VkglTestCase_000479_1 "KHR-GLES3.shaders.loops.for_dynamic_ite"
#define VkglTestCase_000479_2 "rations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000479, VkglTestCase_000479_1, VkglTestCase_000479_2);

#define VkglTestCase_000480_1 "KHR-GLES3.shaders.loops.for_dynamic_i"
#define VkglTestCase_000480_2 "terations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000480, VkglTestCase_000480_1, VkglTestCase_000480_2);

#define VkglTestCase_000481_1 "KHR-GLES3.shaders.loops.for_dynamic_it"
#define VkglTestCase_000481_2 "erations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000481, VkglTestCase_000481_1, VkglTestCase_000481_2);

#define VkglTestCase_000482_1 "KHR-GLES3.shaders.loops.for_dynamic_it"
#define VkglTestCase_000482_2 "erations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000482, VkglTestCase_000482_1, VkglTestCase_000482_2);

#define VkglTestCase_000483_1 "KHR-GLES3.shaders.loops.for_dynamic_ite"
#define VkglTestCase_000483_2 "rations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000483, VkglTestCase_000483_1, VkglTestCase_000483_2);

#define VkglTestCase_000484_1 "KHR-GLES3.shaders.loops.for_dynam"
#define VkglTestCase_000484_2 "ic_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000484, VkglTestCase_000484_1, VkglTestCase_000484_2);

#define VkglTestCase_000485_1 "KHR-GLES3.shaders.loops.for_dynami"
#define VkglTestCase_000485_2 "c_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000485, VkglTestCase_000485_1, VkglTestCase_000485_2);

#define VkglTestCase_000486_1 "KHR-GLES3.shaders.loops.for_dynami"
#define VkglTestCase_000486_2 "c_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000486, VkglTestCase_000486_1, VkglTestCase_000486_2);

#define VkglTestCase_000487_1 "KHR-GLES3.shaders.loops.for_dynamic"
#define VkglTestCase_000487_2 "_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000487, VkglTestCase_000487_1, VkglTestCase_000487_2);

#define VkglTestCase_000488_1 "KHR-GLES3.shaders.loops.for_dynamic"
#define VkglTestCase_000488_2 "_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000488, VkglTestCase_000488_1, VkglTestCase_000488_2);

#define VkglTestCase_000489_1 "KHR-GLES3.shaders.loops.for_dynamic_"
#define VkglTestCase_000489_2 "iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000489, VkglTestCase_000489_1, VkglTestCase_000489_2);

#define VkglTestCase_000490_1 "KHR-GLES3.shaders.loops.for_dynamic_"
#define VkglTestCase_000490_2 "iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000490, VkglTestCase_000490_1, VkglTestCase_000490_2);

#define VkglTestCase_000491_1 "KHR-GLES3.shaders.loops.for_dynamic_i"
#define VkglTestCase_000491_2 "terations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000491, VkglTestCase_000491_1, VkglTestCase_000491_2);

#define VkglTestCase_000492_1 "KHR-GLES3.shaders.loops.for_dynam"
#define VkglTestCase_000492_2 "ic_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000492, VkglTestCase_000492_1, VkglTestCase_000492_2);

#define VkglTestCase_000493_1 "KHR-GLES3.shaders.loops.for_dynami"
#define VkglTestCase_000493_2 "c_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000493, VkglTestCase_000493_1, VkglTestCase_000493_2);

#define VkglTestCase_000494_1 "KHR-GLES3.shaders.loops.for_dynami"
#define VkglTestCase_000494_2 "c_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000494, VkglTestCase_000494_1, VkglTestCase_000494_2);

#define VkglTestCase_000495_1 "KHR-GLES3.shaders.loops.for_dynamic"
#define VkglTestCase_000495_2 "_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000495, VkglTestCase_000495_1, VkglTestCase_000495_2);

#define VkglTestCase_000496_1 "KHR-GLES3.shaders.loops.for_dynamic_i"
#define VkglTestCase_000496_2 "terations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000496, VkglTestCase_000496_1, VkglTestCase_000496_2);

#define VkglTestCase_000497_1 "KHR-GLES3.shaders.loops.for_dynamic_it"
#define VkglTestCase_000497_2 "erations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000497, VkglTestCase_000497_1, VkglTestCase_000497_2);

#define VkglTestCase_000498_1 "KHR-GLES3.shaders.loops.for_dynami"
#define VkglTestCase_000498_2 "c_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000498, VkglTestCase_000498_1, VkglTestCase_000498_2);

#define VkglTestCase_000499_1 "KHR-GLES3.shaders.loops.for_dynamic"
#define VkglTestCase_000499_2 "_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000499, VkglTestCase_000499_1, VkglTestCase_000499_2);

#define VkglTestCase_000500_1 "KHR-GLES3.shaders.loops.for_dynami"
#define VkglTestCase_000500_2 "c_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000500, VkglTestCase_000500_1, VkglTestCase_000500_2);

#define VkglTestCase_000501_1 "KHR-GLES3.shaders.loops.for_dynamic"
#define VkglTestCase_000501_2 "_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000501, VkglTestCase_000501_1, VkglTestCase_000501_2);

#define VkglTestCase_000502_1 "KHR-GLES3.shaders.loops.for_dyn"
#define VkglTestCase_000502_2 "amic_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000502, VkglTestCase_000502_1, VkglTestCase_000502_2);

#define VkglTestCase_000503_1 "KHR-GLES3.shaders.loops.for_dyna"
#define VkglTestCase_000503_2 "mic_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000503, VkglTestCase_000503_1, VkglTestCase_000503_2);

#define VkglTestCase_000504_1 "KHR-GLES3.shaders.loops.for_dy"
#define VkglTestCase_000504_2 "namic_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000504, VkglTestCase_000504_1, VkglTestCase_000504_2);

#define VkglTestCase_000505_1 "KHR-GLES3.shaders.loops.for_dyn"
#define VkglTestCase_000505_2 "amic_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000505, VkglTestCase_000505_1, VkglTestCase_000505_2);

#define VkglTestCase_000506_1 "KHR-GLES3.shaders.loops.for_dynami"
#define VkglTestCase_000506_2 "c_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000506, VkglTestCase_000506_1, VkglTestCase_000506_2);

#define VkglTestCase_000507_1 "KHR-GLES3.shaders.loops.for_dynamic"
#define VkglTestCase_000507_2 "_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000507, VkglTestCase_000507_1, VkglTestCase_000507_2);

#define VkglTestCase_000508_1 "KHR-GLES3.shaders.loops.for_dynamic_ite"
#define VkglTestCase_000508_2 "rations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000508, VkglTestCase_000508_1, VkglTestCase_000508_2);

#define VkglTestCase_000509_1 "KHR-GLES3.shaders.loops.for_dynamic_iter"
#define VkglTestCase_000509_2 "ations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000509, VkglTestCase_000509_1, VkglTestCase_000509_2);

#define VkglTestCase_000510_1 "KHR-GLES3.shaders.loops.for_dynamic_ite"
#define VkglTestCase_000510_2 "rations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000510, VkglTestCase_000510_1, VkglTestCase_000510_2);

#define VkglTestCase_000511_1 "KHR-GLES3.shaders.loops.for_dynamic_iter"
#define VkglTestCase_000511_2 "ations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000511, VkglTestCase_000511_1, VkglTestCase_000511_2);
