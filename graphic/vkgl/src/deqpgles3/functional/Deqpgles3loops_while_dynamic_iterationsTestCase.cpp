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
#include "../ActsDeqpgles30008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007027_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007027_2 "_dynamic_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007027, VkglTestCase_007027_1, VkglTestCase_007027_2);

#define VkglTestCase_007028_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007028_2 "dynamic_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007028, VkglTestCase_007028_1, VkglTestCase_007028_2);

#define VkglTestCase_007029_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007029_2 "dynamic_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007029, VkglTestCase_007029_1, VkglTestCase_007029_2);

#define VkglTestCase_007030_1 "dEQP-GLES3.functional.shaders.loops.while_d"
#define VkglTestCase_007030_2 "ynamic_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007030, VkglTestCase_007030_1, VkglTestCase_007030_2);

#define VkglTestCase_007031_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007031_2 "dynamic_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007031, VkglTestCase_007031_1, VkglTestCase_007031_2);

#define VkglTestCase_007032_1 "dEQP-GLES3.functional.shaders.loops.while_d"
#define VkglTestCase_007032_2 "ynamic_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007032, VkglTestCase_007032_1, VkglTestCase_007032_2);

#define VkglTestCase_007033_1 "dEQP-GLES3.functional.shaders.loops.while_d"
#define VkglTestCase_007033_2 "ynamic_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007033, VkglTestCase_007033_1, VkglTestCase_007033_2);

#define VkglTestCase_007034_1 "dEQP-GLES3.functional.shaders.loops.while_dy"
#define VkglTestCase_007034_2 "namic_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007034, VkglTestCase_007034_1, VkglTestCase_007034_2);

#define VkglTestCase_007035_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007035_2 "_dynamic_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007035, VkglTestCase_007035_1, VkglTestCase_007035_2);

#define VkglTestCase_007036_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007036_2 "dynamic_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007036, VkglTestCase_007036_1, VkglTestCase_007036_2);

#define VkglTestCase_007037_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007037_2 "dynamic_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007037, VkglTestCase_007037_1, VkglTestCase_007037_2);

#define VkglTestCase_007038_1 "dEQP-GLES3.functional.shaders.loops.while_d"
#define VkglTestCase_007038_2 "ynamic_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007038, VkglTestCase_007038_1, VkglTestCase_007038_2);

#define VkglTestCase_007039_1 "dEQP-GLES3.functional.shaders.loops.whi"
#define VkglTestCase_007039_2 "le_dynamic_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007039, VkglTestCase_007039_1, VkglTestCase_007039_2);

#define VkglTestCase_007040_1 "dEQP-GLES3.functional.shaders.loops.whil"
#define VkglTestCase_007040_2 "e_dynamic_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007040, VkglTestCase_007040_1, VkglTestCase_007040_2);

#define VkglTestCase_007041_1 "dEQP-GLES3.functional.shaders.loops.while_dynamic_ite"
#define VkglTestCase_007041_2 "rations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007041, VkglTestCase_007041_1, VkglTestCase_007041_2);

#define VkglTestCase_007042_1 "dEQP-GLES3.functional.shaders.loops.while_dynamic_iter"
#define VkglTestCase_007042_2 "ations.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007042, VkglTestCase_007042_1, VkglTestCase_007042_2);

#define VkglTestCase_007043_1 "dEQP-GLES3.functional.shaders.loops.while_dynamic_ite"
#define VkglTestCase_007043_2 "rations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007043, VkglTestCase_007043_1, VkglTestCase_007043_2);

#define VkglTestCase_007044_1 "dEQP-GLES3.functional.shaders.loops.while_dynamic_iter"
#define VkglTestCase_007044_2 "ations.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007044, VkglTestCase_007044_1, VkglTestCase_007044_2);

#define VkglTestCase_007045_1 "dEQP-GLES3.functional.shaders.loops.while_dynamic"
#define VkglTestCase_007045_2 "_iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007045, VkglTestCase_007045_1, VkglTestCase_007045_2);

#define VkglTestCase_007046_1 "dEQP-GLES3.functional.shaders.loops.while_dynamic_"
#define VkglTestCase_007046_2 "iterations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007046, VkglTestCase_007046_1, VkglTestCase_007046_2);

#define VkglTestCase_007047_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007047_2 "dynamic_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007047, VkglTestCase_007047_1, VkglTestCase_007047_2);

#define VkglTestCase_007048_1 "dEQP-GLES3.functional.shaders.loops.while_d"
#define VkglTestCase_007048_2 "ynamic_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007048, VkglTestCase_007048_1, VkglTestCase_007048_2);

#define VkglTestCase_007049_1 "dEQP-GLES3.functional.shaders.loops.while_d"
#define VkglTestCase_007049_2 "ynamic_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007049, VkglTestCase_007049_1, VkglTestCase_007049_2);

#define VkglTestCase_007050_1 "dEQP-GLES3.functional.shaders.loops.while_dy"
#define VkglTestCase_007050_2 "namic_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007050, VkglTestCase_007050_1, VkglTestCase_007050_2);

#define VkglTestCase_007051_1 "dEQP-GLES3.functional.shaders.loops.while_d"
#define VkglTestCase_007051_2 "ynamic_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007051, VkglTestCase_007051_1, VkglTestCase_007051_2);

#define VkglTestCase_007052_1 "dEQP-GLES3.functional.shaders.loops.while_dy"
#define VkglTestCase_007052_2 "namic_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007052, VkglTestCase_007052_1, VkglTestCase_007052_2);

#define VkglTestCase_007053_1 "dEQP-GLES3.functional.shaders.loops.whil"
#define VkglTestCase_007053_2 "e_dynamic_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007053, VkglTestCase_007053_1, VkglTestCase_007053_2);

#define VkglTestCase_007054_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007054_2 "_dynamic_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007054, VkglTestCase_007054_1, VkglTestCase_007054_2);

#define VkglTestCase_007055_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007055_2 "dynamic_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007055, VkglTestCase_007055_1, VkglTestCase_007055_2);

#define VkglTestCase_007056_1 "dEQP-GLES3.functional.shaders.loops.while_d"
#define VkglTestCase_007056_2 "ynamic_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007056, VkglTestCase_007056_1, VkglTestCase_007056_2);

#define VkglTestCase_007057_1 "dEQP-GLES3.functional.shaders.loops.while_dyn"
#define VkglTestCase_007057_2 "amic_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007057, VkglTestCase_007057_1, VkglTestCase_007057_2);

#define VkglTestCase_007058_1 "dEQP-GLES3.functional.shaders.loops.while_dyna"
#define VkglTestCase_007058_2 "mic_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007058, VkglTestCase_007058_1, VkglTestCase_007058_2);

#define VkglTestCase_007059_1 "dEQP-GLES3.functional.shaders.loops.while_dy"
#define VkglTestCase_007059_2 "namic_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007059, VkglTestCase_007059_1, VkglTestCase_007059_2);

#define VkglTestCase_007060_1 "dEQP-GLES3.functional.shaders.loops.while_dyn"
#define VkglTestCase_007060_2 "amic_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007060, VkglTestCase_007060_1, VkglTestCase_007060_2);

#define VkglTestCase_007061_1 "dEQP-GLES3.functional.shaders.loops.while_dyn"
#define VkglTestCase_007061_2 "amic_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007061, VkglTestCase_007061_1, VkglTestCase_007061_2);

#define VkglTestCase_007062_1 "dEQP-GLES3.functional.shaders.loops.while_dyna"
#define VkglTestCase_007062_2 "mic_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007062, VkglTestCase_007062_1, VkglTestCase_007062_2);

#define VkglTestCase_007063_1 "dEQP-GLES3.functional.shaders.loops.whil"
#define VkglTestCase_007063_2 "e_dynamic_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007063, VkglTestCase_007063_1, VkglTestCase_007063_2);

#define VkglTestCase_007064_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007064_2 "_dynamic_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007064, VkglTestCase_007064_1, VkglTestCase_007064_2);

#define VkglTestCase_007065_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007065_2 "_dynamic_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007065, VkglTestCase_007065_1, VkglTestCase_007065_2);

#define VkglTestCase_007066_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007066_2 "dynamic_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007066, VkglTestCase_007066_1, VkglTestCase_007066_2);

#define VkglTestCase_007067_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007067_2 "dynamic_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007067, VkglTestCase_007067_1, VkglTestCase_007067_2);

#define VkglTestCase_007068_1 "dEQP-GLES3.functional.shaders.loops.while_d"
#define VkglTestCase_007068_2 "ynamic_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007068, VkglTestCase_007068_1, VkglTestCase_007068_2);

#define VkglTestCase_007069_1 "dEQP-GLES3.functional.shaders.loops.while_d"
#define VkglTestCase_007069_2 "ynamic_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007069, VkglTestCase_007069_1, VkglTestCase_007069_2);

#define VkglTestCase_007070_1 "dEQP-GLES3.functional.shaders.loops.while_dy"
#define VkglTestCase_007070_2 "namic_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007070, VkglTestCase_007070_1, VkglTestCase_007070_2);

#define VkglTestCase_007071_1 "dEQP-GLES3.functional.shaders.loops.whil"
#define VkglTestCase_007071_2 "e_dynamic_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007071, VkglTestCase_007071_1, VkglTestCase_007071_2);

#define VkglTestCase_007072_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007072_2 "_dynamic_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007072, VkglTestCase_007072_1, VkglTestCase_007072_2);

#define VkglTestCase_007073_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007073_2 "_dynamic_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007073, VkglTestCase_007073_1, VkglTestCase_007073_2);

#define VkglTestCase_007074_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007074_2 "dynamic_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007074, VkglTestCase_007074_1, VkglTestCase_007074_2);

#define VkglTestCase_007075_1 "dEQP-GLES3.functional.shaders.loops.while_dy"
#define VkglTestCase_007075_2 "namic_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007075, VkglTestCase_007075_1, VkglTestCase_007075_2);

#define VkglTestCase_007076_1 "dEQP-GLES3.functional.shaders.loops.while_dyn"
#define VkglTestCase_007076_2 "amic_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007076, VkglTestCase_007076_1, VkglTestCase_007076_2);

#define VkglTestCase_007077_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007077_2 "_dynamic_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007077, VkglTestCase_007077_1, VkglTestCase_007077_2);

#define VkglTestCase_007078_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007078_2 "dynamic_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007078, VkglTestCase_007078_1, VkglTestCase_007078_2);

#define VkglTestCase_007079_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007079_2 "_dynamic_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007079, VkglTestCase_007079_1, VkglTestCase_007079_2);

#define VkglTestCase_007080_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007080_2 "dynamic_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007080, VkglTestCase_007080_1, VkglTestCase_007080_2);

#define VkglTestCase_007081_1 "dEQP-GLES3.functional.shaders.loops.wh"
#define VkglTestCase_007081_2 "ile_dynamic_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007081, VkglTestCase_007081_1, VkglTestCase_007081_2);

#define VkglTestCase_007082_1 "dEQP-GLES3.functional.shaders.loops.whi"
#define VkglTestCase_007082_2 "le_dynamic_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007082, VkglTestCase_007082_1, VkglTestCase_007082_2);

#define VkglTestCase_007083_1 "dEQP-GLES3.functional.shaders.loops.w"
#define VkglTestCase_007083_2 "hile_dynamic_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007083, VkglTestCase_007083_1, VkglTestCase_007083_2);

#define VkglTestCase_007084_1 "dEQP-GLES3.functional.shaders.loops.wh"
#define VkglTestCase_007084_2 "ile_dynamic_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007084, VkglTestCase_007084_1, VkglTestCase_007084_2);

#define VkglTestCase_007085_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007085_2 "_dynamic_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007085, VkglTestCase_007085_1, VkglTestCase_007085_2);

#define VkglTestCase_007086_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007086_2 "dynamic_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007086, VkglTestCase_007086_1, VkglTestCase_007086_2);

#define VkglTestCase_007087_1 "dEQP-GLES3.functional.shaders.loops.while_dyna"
#define VkglTestCase_007087_2 "mic_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007087, VkglTestCase_007087_1, VkglTestCase_007087_2);

#define VkglTestCase_007088_1 "dEQP-GLES3.functional.shaders.loops.while_dynam"
#define VkglTestCase_007088_2 "ic_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007088, VkglTestCase_007088_1, VkglTestCase_007088_2);

#define VkglTestCase_007089_1 "dEQP-GLES3.functional.shaders.loops.while_dyna"
#define VkglTestCase_007089_2 "mic_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007089, VkglTestCase_007089_1, VkglTestCase_007089_2);

#define VkglTestCase_007090_1 "dEQP-GLES3.functional.shaders.loops.while_dynam"
#define VkglTestCase_007090_2 "ic_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007090, VkglTestCase_007090_1, VkglTestCase_007090_2);
