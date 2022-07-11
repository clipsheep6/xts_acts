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

#define VkglTestCase_007091_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007091_2 "e_constant_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007091, VkglTestCase_007091_1, VkglTestCase_007091_2);

#define VkglTestCase_007092_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007092_2 "_constant_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007092, VkglTestCase_007092_1, VkglTestCase_007092_2);

#define VkglTestCase_007093_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007093_2 "_constant_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007093, VkglTestCase_007093_1, VkglTestCase_007093_2);

#define VkglTestCase_007094_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007094_2 "constant_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007094, VkglTestCase_007094_1, VkglTestCase_007094_2);

#define VkglTestCase_007095_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007095_2 "_constant_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007095, VkglTestCase_007095_1, VkglTestCase_007095_2);

#define VkglTestCase_007096_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007096_2 "constant_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007096, VkglTestCase_007096_1, VkglTestCase_007096_2);

#define VkglTestCase_007097_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007097_2 "constant_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007097, VkglTestCase_007097_1, VkglTestCase_007097_2);

#define VkglTestCase_007098_1 "dEQP-GLES3.functional.shaders.loops.do_while_c"
#define VkglTestCase_007098_2 "onstant_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007098, VkglTestCase_007098_1, VkglTestCase_007098_2);

#define VkglTestCase_007099_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007099_2 "e_constant_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007099, VkglTestCase_007099_1, VkglTestCase_007099_2);

#define VkglTestCase_007100_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007100_2 "_constant_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007100, VkglTestCase_007100_1, VkglTestCase_007100_2);

#define VkglTestCase_007101_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007101_2 "_constant_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007101, VkglTestCase_007101_1, VkglTestCase_007101_2);

#define VkglTestCase_007102_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007102_2 "constant_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007102, VkglTestCase_007102_1, VkglTestCase_007102_2);

#define VkglTestCase_007103_1 "dEQP-GLES3.functional.shaders.loops.do_wh"
#define VkglTestCase_007103_2 "ile_constant_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007103, VkglTestCase_007103_1, VkglTestCase_007103_2);

#define VkglTestCase_007104_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007104_2 "le_constant_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007104, VkglTestCase_007104_1, VkglTestCase_007104_2);

#define VkglTestCase_007105_1 "dEQP-GLES3.functional.shaders.loops.do_while_constant_i"
#define VkglTestCase_007105_2 "terations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007105, VkglTestCase_007105_1, VkglTestCase_007105_2);

#define VkglTestCase_007106_1 "dEQP-GLES3.functional.shaders.loops.do_while_constant_it"
#define VkglTestCase_007106_2 "erations.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007106, VkglTestCase_007106_1, VkglTestCase_007106_2);

#define VkglTestCase_007107_1 "dEQP-GLES3.functional.shaders.loops.do_while_constant_i"
#define VkglTestCase_007107_2 "terations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007107, VkglTestCase_007107_1, VkglTestCase_007107_2);

#define VkglTestCase_007108_1 "dEQP-GLES3.functional.shaders.loops.do_while_constant_it"
#define VkglTestCase_007108_2 "erations.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007108, VkglTestCase_007108_1, VkglTestCase_007108_2);

#define VkglTestCase_007109_1 "dEQP-GLES3.functional.shaders.loops.do_while_consta"
#define VkglTestCase_007109_2 "nt_iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007109, VkglTestCase_007109_1, VkglTestCase_007109_2);

#define VkglTestCase_007110_1 "dEQP-GLES3.functional.shaders.loops.do_while_constan"
#define VkglTestCase_007110_2 "t_iterations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007110, VkglTestCase_007110_1, VkglTestCase_007110_2);

#define VkglTestCase_007111_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007111_2 "_constant_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007111, VkglTestCase_007111_1, VkglTestCase_007111_2);

#define VkglTestCase_007112_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007112_2 "constant_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007112, VkglTestCase_007112_1, VkglTestCase_007112_2);

#define VkglTestCase_007113_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007113_2 "constant_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007113, VkglTestCase_007113_1, VkglTestCase_007113_2);

#define VkglTestCase_007114_1 "dEQP-GLES3.functional.shaders.loops.do_while_c"
#define VkglTestCase_007114_2 "onstant_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007114, VkglTestCase_007114_1, VkglTestCase_007114_2);

#define VkglTestCase_007115_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007115_2 "constant_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007115, VkglTestCase_007115_1, VkglTestCase_007115_2);

#define VkglTestCase_007116_1 "dEQP-GLES3.functional.shaders.loops.do_while_c"
#define VkglTestCase_007116_2 "onstant_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007116, VkglTestCase_007116_1, VkglTestCase_007116_2);

#define VkglTestCase_007117_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007117_2 "_constant_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007117, VkglTestCase_007117_1, VkglTestCase_007117_2);

#define VkglTestCase_007118_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007118_2 "constant_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007118, VkglTestCase_007118_1, VkglTestCase_007118_2);

#define VkglTestCase_007119_1 "dEQP-GLES3.functional.shaders.loops.do_while_co"
#define VkglTestCase_007119_2 "nstant_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007119, VkglTestCase_007119_1, VkglTestCase_007119_2);

#define VkglTestCase_007120_1 "dEQP-GLES3.functional.shaders.loops.do_while_con"
#define VkglTestCase_007120_2 "stant_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007120, VkglTestCase_007120_1, VkglTestCase_007120_2);

#define VkglTestCase_007121_1 "dEQP-GLES3.functional.shaders.loops.do_while_c"
#define VkglTestCase_007121_2 "onstant_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007121, VkglTestCase_007121_1, VkglTestCase_007121_2);

#define VkglTestCase_007122_1 "dEQP-GLES3.functional.shaders.loops.do_while_co"
#define VkglTestCase_007122_2 "nstant_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007122, VkglTestCase_007122_1, VkglTestCase_007122_2);

#define VkglTestCase_007123_1 "dEQP-GLES3.functional.shaders.loops.do_while_co"
#define VkglTestCase_007123_2 "nstant_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007123, VkglTestCase_007123_1, VkglTestCase_007123_2);

#define VkglTestCase_007124_1 "dEQP-GLES3.functional.shaders.loops.do_while_con"
#define VkglTestCase_007124_2 "stant_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007124, VkglTestCase_007124_1, VkglTestCase_007124_2);

#define VkglTestCase_007125_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007125_2 "le_constant_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007125, VkglTestCase_007125_1, VkglTestCase_007125_2);

#define VkglTestCase_007126_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007126_2 "e_constant_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007126, VkglTestCase_007126_1, VkglTestCase_007126_2);

#define VkglTestCase_007127_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007127_2 "e_constant_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007127, VkglTestCase_007127_1, VkglTestCase_007127_2);

#define VkglTestCase_007128_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007128_2 "_constant_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007128, VkglTestCase_007128_1, VkglTestCase_007128_2);

#define VkglTestCase_007129_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007129_2 "_constant_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007129, VkglTestCase_007129_1, VkglTestCase_007129_2);

#define VkglTestCase_007130_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007130_2 "constant_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007130, VkglTestCase_007130_1, VkglTestCase_007130_2);

#define VkglTestCase_007131_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007131_2 "constant_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007131, VkglTestCase_007131_1, VkglTestCase_007131_2);

#define VkglTestCase_007132_1 "dEQP-GLES3.functional.shaders.loops.do_while_c"
#define VkglTestCase_007132_2 "onstant_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007132, VkglTestCase_007132_1, VkglTestCase_007132_2);

#define VkglTestCase_007133_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007133_2 "le_constant_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007133, VkglTestCase_007133_1, VkglTestCase_007133_2);

#define VkglTestCase_007134_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007134_2 "e_constant_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007134, VkglTestCase_007134_1, VkglTestCase_007134_2);

#define VkglTestCase_007135_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007135_2 "e_constant_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007135, VkglTestCase_007135_1, VkglTestCase_007135_2);

#define VkglTestCase_007136_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007136_2 "_constant_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007136, VkglTestCase_007136_1, VkglTestCase_007136_2);

#define VkglTestCase_007137_1 "dEQP-GLES3.functional.shaders.loops.do_while_c"
#define VkglTestCase_007137_2 "onstant_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007137, VkglTestCase_007137_1, VkglTestCase_007137_2);

#define VkglTestCase_007138_1 "dEQP-GLES3.functional.shaders.loops.do_while_co"
#define VkglTestCase_007138_2 "nstant_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007138, VkglTestCase_007138_1, VkglTestCase_007138_2);

#define VkglTestCase_007139_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007139_2 "e_constant_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007139, VkglTestCase_007139_1, VkglTestCase_007139_2);

#define VkglTestCase_007140_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007140_2 "_constant_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007140, VkglTestCase_007140_1, VkglTestCase_007140_2);

#define VkglTestCase_007141_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007141_2 "e_constant_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007141, VkglTestCase_007141_1, VkglTestCase_007141_2);

#define VkglTestCase_007142_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007142_2 "_constant_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007142, VkglTestCase_007142_1, VkglTestCase_007142_2);

#define VkglTestCase_007143_1 "dEQP-GLES3.functional.shaders.loops.do_w"
#define VkglTestCase_007143_2 "hile_constant_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007143, VkglTestCase_007143_1, VkglTestCase_007143_2);

#define VkglTestCase_007144_1 "dEQP-GLES3.functional.shaders.loops.do_wh"
#define VkglTestCase_007144_2 "ile_constant_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007144, VkglTestCase_007144_1, VkglTestCase_007144_2);

#define VkglTestCase_007145_1 "dEQP-GLES3.functional.shaders.loops.do_"
#define VkglTestCase_007145_2 "while_constant_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007145, VkglTestCase_007145_1, VkglTestCase_007145_2);

#define VkglTestCase_007146_1 "dEQP-GLES3.functional.shaders.loops.do_w"
#define VkglTestCase_007146_2 "hile_constant_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007146, VkglTestCase_007146_1, VkglTestCase_007146_2);

#define VkglTestCase_007147_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007147_2 "e_constant_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007147, VkglTestCase_007147_1, VkglTestCase_007147_2);

#define VkglTestCase_007148_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007148_2 "_constant_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007148, VkglTestCase_007148_1, VkglTestCase_007148_2);

#define VkglTestCase_007149_1 "dEQP-GLES3.functional.shaders.loops.do_while_con"
#define VkglTestCase_007149_2 "stant_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007149, VkglTestCase_007149_1, VkglTestCase_007149_2);

#define VkglTestCase_007150_1 "dEQP-GLES3.functional.shaders.loops.do_while_cons"
#define VkglTestCase_007150_2 "tant_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007150, VkglTestCase_007150_1, VkglTestCase_007150_2);

#define VkglTestCase_007151_1 "dEQP-GLES3.functional.shaders.loops.do_while_con"
#define VkglTestCase_007151_2 "stant_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007151, VkglTestCase_007151_1, VkglTestCase_007151_2);

#define VkglTestCase_007152_1 "dEQP-GLES3.functional.shaders.loops.do_while_cons"
#define VkglTestCase_007152_2 "tant_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007152, VkglTestCase_007152_1, VkglTestCase_007152_2);
