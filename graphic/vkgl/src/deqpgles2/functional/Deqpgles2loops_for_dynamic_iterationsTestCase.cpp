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

#define VkglTestCase_003447_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003447_2 "dynamic_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003447, VkglTestCase_003447_1, VkglTestCase_003447_2);

#define VkglTestCase_003448_1 "dEQP-GLES2.functional.shaders.loops.for_d"
#define VkglTestCase_003448_2 "ynamic_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003448, VkglTestCase_003448_1, VkglTestCase_003448_2);

#define VkglTestCase_003449_1 "dEQP-GLES2.functional.shaders.loops.for_d"
#define VkglTestCase_003449_2 "ynamic_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003449, VkglTestCase_003449_1, VkglTestCase_003449_2);

#define VkglTestCase_003450_1 "dEQP-GLES2.functional.shaders.loops.for_dy"
#define VkglTestCase_003450_2 "namic_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003450, VkglTestCase_003450_1, VkglTestCase_003450_2);

#define VkglTestCase_003451_1 "dEQP-GLES2.functional.shaders.loops.for_d"
#define VkglTestCase_003451_2 "ynamic_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003451, VkglTestCase_003451_1, VkglTestCase_003451_2);

#define VkglTestCase_003452_1 "dEQP-GLES2.functional.shaders.loops.for_dy"
#define VkglTestCase_003452_2 "namic_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003452, VkglTestCase_003452_1, VkglTestCase_003452_2);

#define VkglTestCase_003453_1 "dEQP-GLES2.functional.shaders.loops.for_dy"
#define VkglTestCase_003453_2 "namic_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003453, VkglTestCase_003453_1, VkglTestCase_003453_2);

#define VkglTestCase_003454_1 "dEQP-GLES2.functional.shaders.loops.for_dyn"
#define VkglTestCase_003454_2 "amic_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003454, VkglTestCase_003454_1, VkglTestCase_003454_2);

#define VkglTestCase_003455_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003455_2 "dynamic_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003455, VkglTestCase_003455_1, VkglTestCase_003455_2);

#define VkglTestCase_003456_1 "dEQP-GLES2.functional.shaders.loops.for_d"
#define VkglTestCase_003456_2 "ynamic_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003456, VkglTestCase_003456_1, VkglTestCase_003456_2);

#define VkglTestCase_003457_1 "dEQP-GLES2.functional.shaders.loops.for_d"
#define VkglTestCase_003457_2 "ynamic_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003457, VkglTestCase_003457_1, VkglTestCase_003457_2);

#define VkglTestCase_003458_1 "dEQP-GLES2.functional.shaders.loops.for_dy"
#define VkglTestCase_003458_2 "namic_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003458, VkglTestCase_003458_1, VkglTestCase_003458_2);

#define VkglTestCase_003459_1 "dEQP-GLES2.functional.shaders.loops.fo"
#define VkglTestCase_003459_2 "r_dynamic_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003459, VkglTestCase_003459_1, VkglTestCase_003459_2);

#define VkglTestCase_003460_1 "dEQP-GLES2.functional.shaders.loops.for"
#define VkglTestCase_003460_2 "_dynamic_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003460, VkglTestCase_003460_1, VkglTestCase_003460_2);

#define VkglTestCase_003461_1 "dEQP-GLES2.functional.shaders.loops.for_dynamic_iter"
#define VkglTestCase_003461_2 "ations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003461, VkglTestCase_003461_1, VkglTestCase_003461_2);

#define VkglTestCase_003462_1 "dEQP-GLES2.functional.shaders.loops.for_dynamic_itera"
#define VkglTestCase_003462_2 "tions.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003462, VkglTestCase_003462_1, VkglTestCase_003462_2);

#define VkglTestCase_003463_1 "dEQP-GLES2.functional.shaders.loops.for_dynamic_iter"
#define VkglTestCase_003463_2 "ations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003463, VkglTestCase_003463_1, VkglTestCase_003463_2);

#define VkglTestCase_003464_1 "dEQP-GLES2.functional.shaders.loops.for_dynamic_itera"
#define VkglTestCase_003464_2 "tions.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003464, VkglTestCase_003464_1, VkglTestCase_003464_2);

#define VkglTestCase_003465_1 "dEQP-GLES2.functional.shaders.loops.for_dynamic_"
#define VkglTestCase_003465_2 "iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003465, VkglTestCase_003465_1, VkglTestCase_003465_2);

#define VkglTestCase_003466_1 "dEQP-GLES2.functional.shaders.loops.for_dynamic_i"
#define VkglTestCase_003466_2 "terations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003466, VkglTestCase_003466_1, VkglTestCase_003466_2);

#define VkglTestCase_003467_1 "dEQP-GLES2.functional.shaders.loops.for_d"
#define VkglTestCase_003467_2 "ynamic_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003467, VkglTestCase_003467_1, VkglTestCase_003467_2);

#define VkglTestCase_003468_1 "dEQP-GLES2.functional.shaders.loops.for_dy"
#define VkglTestCase_003468_2 "namic_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003468, VkglTestCase_003468_1, VkglTestCase_003468_2);

#define VkglTestCase_003469_1 "dEQP-GLES2.functional.shaders.loops.for_dy"
#define VkglTestCase_003469_2 "namic_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003469, VkglTestCase_003469_1, VkglTestCase_003469_2);

#define VkglTestCase_003470_1 "dEQP-GLES2.functional.shaders.loops.for_dyn"
#define VkglTestCase_003470_2 "amic_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003470, VkglTestCase_003470_1, VkglTestCase_003470_2);

#define VkglTestCase_003471_1 "dEQP-GLES2.functional.shaders.loops.for_dy"
#define VkglTestCase_003471_2 "namic_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003471, VkglTestCase_003471_1, VkglTestCase_003471_2);

#define VkglTestCase_003472_1 "dEQP-GLES2.functional.shaders.loops.for_dyn"
#define VkglTestCase_003472_2 "amic_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003472, VkglTestCase_003472_1, VkglTestCase_003472_2);

#define VkglTestCase_003473_1 "dEQP-GLES2.functional.shaders.loops.for"
#define VkglTestCase_003473_2 "_dynamic_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003473, VkglTestCase_003473_1, VkglTestCase_003473_2);

#define VkglTestCase_003474_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003474_2 "dynamic_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003474, VkglTestCase_003474_1, VkglTestCase_003474_2);

#define VkglTestCase_003475_1 "dEQP-GLES2.functional.shaders.loops.for_d"
#define VkglTestCase_003475_2 "ynamic_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003475, VkglTestCase_003475_1, VkglTestCase_003475_2);

#define VkglTestCase_003476_1 "dEQP-GLES2.functional.shaders.loops.for_dy"
#define VkglTestCase_003476_2 "namic_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003476, VkglTestCase_003476_1, VkglTestCase_003476_2);

#define VkglTestCase_003477_1 "dEQP-GLES2.functional.shaders.loops.for_dyna"
#define VkglTestCase_003477_2 "mic_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003477, VkglTestCase_003477_1, VkglTestCase_003477_2);

#define VkglTestCase_003478_1 "dEQP-GLES2.functional.shaders.loops.for_dynam"
#define VkglTestCase_003478_2 "ic_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003478, VkglTestCase_003478_1, VkglTestCase_003478_2);

#define VkglTestCase_003479_1 "dEQP-GLES2.functional.shaders.loops.for_dyn"
#define VkglTestCase_003479_2 "amic_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003479, VkglTestCase_003479_1, VkglTestCase_003479_2);

#define VkglTestCase_003480_1 "dEQP-GLES2.functional.shaders.loops.for_dyna"
#define VkglTestCase_003480_2 "mic_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003480, VkglTestCase_003480_1, VkglTestCase_003480_2);

#define VkglTestCase_003481_1 "dEQP-GLES2.functional.shaders.loops.for_dyna"
#define VkglTestCase_003481_2 "mic_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003481, VkglTestCase_003481_1, VkglTestCase_003481_2);

#define VkglTestCase_003482_1 "dEQP-GLES2.functional.shaders.loops.for_dynam"
#define VkglTestCase_003482_2 "ic_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003482, VkglTestCase_003482_1, VkglTestCase_003482_2);

#define VkglTestCase_003483_1 "dEQP-GLES2.functional.shaders.loops.for"
#define VkglTestCase_003483_2 "_dynamic_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003483, VkglTestCase_003483_1, VkglTestCase_003483_2);

#define VkglTestCase_003484_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003484_2 "dynamic_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003484, VkglTestCase_003484_1, VkglTestCase_003484_2);

#define VkglTestCase_003485_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003485_2 "dynamic_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003485, VkglTestCase_003485_1, VkglTestCase_003485_2);

#define VkglTestCase_003486_1 "dEQP-GLES2.functional.shaders.loops.for_d"
#define VkglTestCase_003486_2 "ynamic_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003486, VkglTestCase_003486_1, VkglTestCase_003486_2);

#define VkglTestCase_003487_1 "dEQP-GLES2.functional.shaders.loops.for_d"
#define VkglTestCase_003487_2 "ynamic_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003487, VkglTestCase_003487_1, VkglTestCase_003487_2);

#define VkglTestCase_003488_1 "dEQP-GLES2.functional.shaders.loops.for_dy"
#define VkglTestCase_003488_2 "namic_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003488, VkglTestCase_003488_1, VkglTestCase_003488_2);

#define VkglTestCase_003489_1 "dEQP-GLES2.functional.shaders.loops.for_dy"
#define VkglTestCase_003489_2 "namic_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003489, VkglTestCase_003489_1, VkglTestCase_003489_2);

#define VkglTestCase_003490_1 "dEQP-GLES2.functional.shaders.loops.for_dyn"
#define VkglTestCase_003490_2 "amic_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003490, VkglTestCase_003490_1, VkglTestCase_003490_2);

#define VkglTestCase_003491_1 "dEQP-GLES2.functional.shaders.loops.for"
#define VkglTestCase_003491_2 "_dynamic_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003491, VkglTestCase_003491_1, VkglTestCase_003491_2);

#define VkglTestCase_003492_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003492_2 "dynamic_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003492, VkglTestCase_003492_1, VkglTestCase_003492_2);

#define VkglTestCase_003493_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003493_2 "dynamic_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003493, VkglTestCase_003493_1, VkglTestCase_003493_2);

#define VkglTestCase_003494_1 "dEQP-GLES2.functional.shaders.loops.for_d"
#define VkglTestCase_003494_2 "ynamic_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003494, VkglTestCase_003494_1, VkglTestCase_003494_2);

#define VkglTestCase_003495_1 "dEQP-GLES2.functional.shaders.loops.for_dyn"
#define VkglTestCase_003495_2 "amic_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003495, VkglTestCase_003495_1, VkglTestCase_003495_2);

#define VkglTestCase_003496_1 "dEQP-GLES2.functional.shaders.loops.for_dyna"
#define VkglTestCase_003496_2 "mic_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003496, VkglTestCase_003496_1, VkglTestCase_003496_2);

#define VkglTestCase_003497_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003497_2 "dynamic_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003497, VkglTestCase_003497_1, VkglTestCase_003497_2);

#define VkglTestCase_003498_1 "dEQP-GLES2.functional.shaders.loops.for_d"
#define VkglTestCase_003498_2 "ynamic_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003498, VkglTestCase_003498_1, VkglTestCase_003498_2);

#define VkglTestCase_003499_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003499_2 "dynamic_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003499, VkglTestCase_003499_1, VkglTestCase_003499_2);

#define VkglTestCase_003500_1 "dEQP-GLES2.functional.shaders.loops.for_d"
#define VkglTestCase_003500_2 "ynamic_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003500, VkglTestCase_003500_1, VkglTestCase_003500_2);

#define VkglTestCase_003501_1 "dEQP-GLES2.functional.shaders.loops.f"
#define VkglTestCase_003501_2 "or_dynamic_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003501, VkglTestCase_003501_1, VkglTestCase_003501_2);

#define VkglTestCase_003502_1 "dEQP-GLES2.functional.shaders.loops.fo"
#define VkglTestCase_003502_2 "r_dynamic_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003502, VkglTestCase_003502_1, VkglTestCase_003502_2);

#define VkglTestCase_003503_1 "dEQP-GLES2.functional.shaders.loops."
#define VkglTestCase_003503_2 "for_dynamic_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003503, VkglTestCase_003503_1, VkglTestCase_003503_2);

#define VkglTestCase_003504_1 "dEQP-GLES2.functional.shaders.loops.f"
#define VkglTestCase_003504_2 "or_dynamic_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003504, VkglTestCase_003504_1, VkglTestCase_003504_2);

#define VkglTestCase_003505_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003505_2 "dynamic_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003505, VkglTestCase_003505_1, VkglTestCase_003505_2);

#define VkglTestCase_003506_1 "dEQP-GLES2.functional.shaders.loops.for_d"
#define VkglTestCase_003506_2 "ynamic_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003506, VkglTestCase_003506_1, VkglTestCase_003506_2);

#define VkglTestCase_003507_1 "dEQP-GLES2.functional.shaders.loops.for_dynam"
#define VkglTestCase_003507_2 "ic_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003507, VkglTestCase_003507_1, VkglTestCase_003507_2);

#define VkglTestCase_003508_1 "dEQP-GLES2.functional.shaders.loops.for_dynami"
#define VkglTestCase_003508_2 "c_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003508, VkglTestCase_003508_1, VkglTestCase_003508_2);

#define VkglTestCase_003509_1 "dEQP-GLES2.functional.shaders.loops.for_dynam"
#define VkglTestCase_003509_2 "ic_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003509, VkglTestCase_003509_1, VkglTestCase_003509_2);

#define VkglTestCase_003510_1 "dEQP-GLES2.functional.shaders.loops.for_dynami"
#define VkglTestCase_003510_2 "c_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003510, VkglTestCase_003510_1, VkglTestCase_003510_2);

#define VkglTestCase_003511_1 "dEQP-GLES2.functional.shaders.loops.for_d"
#define VkglTestCase_003511_2 "ynamic_iterations.conditional_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003511, VkglTestCase_003511_1, VkglTestCase_003511_2);

#define VkglTestCase_003512_1 "dEQP-GLES2.functional.shaders.loops.for_dy"
#define VkglTestCase_003512_2 "namic_iterations.conditional_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003512, VkglTestCase_003512_1, VkglTestCase_003512_2);

#define VkglTestCase_003513_1 "dEQP-GLES2.functional.shaders.loops.for_dyn"
#define VkglTestCase_003513_2 "amic_iterations.function_call_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003513, VkglTestCase_003513_1, VkglTestCase_003513_2);

#define VkglTestCase_003514_1 "dEQP-GLES2.functional.shaders.loops.for_dyna"
#define VkglTestCase_003514_2 "mic_iterations.function_call_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003514, VkglTestCase_003514_1, VkglTestCase_003514_2);

#define VkglTestCase_003515_1 "dEQP-GLES2.functional.shaders.loops.for_dy"
#define VkglTestCase_003515_2 "namic_iterations.function_call_inout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003515, VkglTestCase_003515_1, VkglTestCase_003515_2);

#define VkglTestCase_003516_1 "dEQP-GLES2.functional.shaders.loops.for_dyn"
#define VkglTestCase_003516_2 "amic_iterations.function_call_inout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003516, VkglTestCase_003516_1, VkglTestCase_003516_2);
