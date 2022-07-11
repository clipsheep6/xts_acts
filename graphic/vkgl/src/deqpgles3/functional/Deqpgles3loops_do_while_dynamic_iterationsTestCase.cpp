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

#define VkglTestCase_007215_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007215_2 "le_dynamic_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007215, VkglTestCase_007215_1, VkglTestCase_007215_2);

#define VkglTestCase_007216_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007216_2 "e_dynamic_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007216, VkglTestCase_007216_1, VkglTestCase_007216_2);

#define VkglTestCase_007217_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007217_2 "e_dynamic_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007217, VkglTestCase_007217_1, VkglTestCase_007217_2);

#define VkglTestCase_007218_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007218_2 "_dynamic_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007218, VkglTestCase_007218_1, VkglTestCase_007218_2);

#define VkglTestCase_007219_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007219_2 "_dynamic_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007219, VkglTestCase_007219_1, VkglTestCase_007219_2);

#define VkglTestCase_007220_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007220_2 "dynamic_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007220, VkglTestCase_007220_1, VkglTestCase_007220_2);

#define VkglTestCase_007221_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007221_2 "dynamic_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007221, VkglTestCase_007221_1, VkglTestCase_007221_2);

#define VkglTestCase_007222_1 "dEQP-GLES3.functional.shaders.loops.do_while_d"
#define VkglTestCase_007222_2 "ynamic_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007222, VkglTestCase_007222_1, VkglTestCase_007222_2);

#define VkglTestCase_007223_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007223_2 "e_dynamic_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007223, VkglTestCase_007223_1, VkglTestCase_007223_2);

#define VkglTestCase_007224_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007224_2 "_dynamic_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007224, VkglTestCase_007224_1, VkglTestCase_007224_2);

#define VkglTestCase_007225_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007225_2 "_dynamic_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007225, VkglTestCase_007225_1, VkglTestCase_007225_2);

#define VkglTestCase_007226_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007226_2 "dynamic_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007226, VkglTestCase_007226_1, VkglTestCase_007226_2);

#define VkglTestCase_007227_1 "dEQP-GLES3.functional.shaders.loops.do_w"
#define VkglTestCase_007227_2 "hile_dynamic_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007227, VkglTestCase_007227_1, VkglTestCase_007227_2);

#define VkglTestCase_007228_1 "dEQP-GLES3.functional.shaders.loops.do_wh"
#define VkglTestCase_007228_2 "ile_dynamic_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007228, VkglTestCase_007228_1, VkglTestCase_007228_2);

#define VkglTestCase_007229_1 "dEQP-GLES3.functional.shaders.loops.do_while_dynamic_it"
#define VkglTestCase_007229_2 "erations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007229, VkglTestCase_007229_1, VkglTestCase_007229_2);

#define VkglTestCase_007230_1 "dEQP-GLES3.functional.shaders.loops.do_while_dynamic_ite"
#define VkglTestCase_007230_2 "rations.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007230, VkglTestCase_007230_1, VkglTestCase_007230_2);

#define VkglTestCase_007231_1 "dEQP-GLES3.functional.shaders.loops.do_while_dynamic_i"
#define VkglTestCase_007231_2 "terations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007231, VkglTestCase_007231_1, VkglTestCase_007231_2);

#define VkglTestCase_007232_1 "dEQP-GLES3.functional.shaders.loops.do_while_dynamic_it"
#define VkglTestCase_007232_2 "erations.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007232, VkglTestCase_007232_1, VkglTestCase_007232_2);

#define VkglTestCase_007233_1 "dEQP-GLES3.functional.shaders.loops.do_while_dynami"
#define VkglTestCase_007233_2 "c_iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007233, VkglTestCase_007233_1, VkglTestCase_007233_2);

#define VkglTestCase_007234_1 "dEQP-GLES3.functional.shaders.loops.do_while_dynamic"
#define VkglTestCase_007234_2 "_iterations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007234, VkglTestCase_007234_1, VkglTestCase_007234_2);

#define VkglTestCase_007235_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007235_2 "e_dynamic_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007235, VkglTestCase_007235_1, VkglTestCase_007235_2);

#define VkglTestCase_007236_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007236_2 "_dynamic_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007236, VkglTestCase_007236_1, VkglTestCase_007236_2);

#define VkglTestCase_007237_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007237_2 "_dynamic_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007237, VkglTestCase_007237_1, VkglTestCase_007237_2);

#define VkglTestCase_007238_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007238_2 "dynamic_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007238, VkglTestCase_007238_1, VkglTestCase_007238_2);

#define VkglTestCase_007239_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007239_2 "_dynamic_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007239, VkglTestCase_007239_1, VkglTestCase_007239_2);

#define VkglTestCase_007240_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007240_2 "dynamic_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007240, VkglTestCase_007240_1, VkglTestCase_007240_2);

#define VkglTestCase_007241_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007241_2 "e_dynamic_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007241, VkglTestCase_007241_1, VkglTestCase_007241_2);

#define VkglTestCase_007242_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007242_2 "_dynamic_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007242, VkglTestCase_007242_1, VkglTestCase_007242_2);

#define VkglTestCase_007243_1 "dEQP-GLES3.functional.shaders.loops.do_while_d"
#define VkglTestCase_007243_2 "ynamic_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007243, VkglTestCase_007243_1, VkglTestCase_007243_2);

#define VkglTestCase_007244_1 "dEQP-GLES3.functional.shaders.loops.do_while_dy"
#define VkglTestCase_007244_2 "namic_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007244, VkglTestCase_007244_1, VkglTestCase_007244_2);

#define VkglTestCase_007245_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007245_2 "dynamic_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007245, VkglTestCase_007245_1, VkglTestCase_007245_2);

#define VkglTestCase_007246_1 "dEQP-GLES3.functional.shaders.loops.do_while_d"
#define VkglTestCase_007246_2 "ynamic_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007246, VkglTestCase_007246_1, VkglTestCase_007246_2);

#define VkglTestCase_007247_1 "dEQP-GLES3.functional.shaders.loops.do_while_d"
#define VkglTestCase_007247_2 "ynamic_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007247, VkglTestCase_007247_1, VkglTestCase_007247_2);

#define VkglTestCase_007248_1 "dEQP-GLES3.functional.shaders.loops.do_while_dy"
#define VkglTestCase_007248_2 "namic_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007248, VkglTestCase_007248_1, VkglTestCase_007248_2);

#define VkglTestCase_007249_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007249_2 "le_dynamic_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007249, VkglTestCase_007249_1, VkglTestCase_007249_2);

#define VkglTestCase_007250_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007250_2 "e_dynamic_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007250, VkglTestCase_007250_1, VkglTestCase_007250_2);

#define VkglTestCase_007251_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007251_2 "e_dynamic_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007251, VkglTestCase_007251_1, VkglTestCase_007251_2);

#define VkglTestCase_007252_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007252_2 "_dynamic_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007252, VkglTestCase_007252_1, VkglTestCase_007252_2);

#define VkglTestCase_007253_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007253_2 "_dynamic_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007253, VkglTestCase_007253_1, VkglTestCase_007253_2);

#define VkglTestCase_007254_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007254_2 "dynamic_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007254, VkglTestCase_007254_1, VkglTestCase_007254_2);

#define VkglTestCase_007255_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007255_2 "dynamic_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007255, VkglTestCase_007255_1, VkglTestCase_007255_2);

#define VkglTestCase_007256_1 "dEQP-GLES3.functional.shaders.loops.do_while_d"
#define VkglTestCase_007256_2 "ynamic_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007256, VkglTestCase_007256_1, VkglTestCase_007256_2);

#define VkglTestCase_007257_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007257_2 "le_dynamic_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007257, VkglTestCase_007257_1, VkglTestCase_007257_2);

#define VkglTestCase_007258_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007258_2 "e_dynamic_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007258, VkglTestCase_007258_1, VkglTestCase_007258_2);

#define VkglTestCase_007259_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007259_2 "le_dynamic_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007259, VkglTestCase_007259_1, VkglTestCase_007259_2);

#define VkglTestCase_007260_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007260_2 "e_dynamic_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007260, VkglTestCase_007260_1, VkglTestCase_007260_2);

#define VkglTestCase_007261_1 "dEQP-GLES3.functional.shaders.loops.do_while_"
#define VkglTestCase_007261_2 "dynamic_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007261, VkglTestCase_007261_1, VkglTestCase_007261_2);

#define VkglTestCase_007262_1 "dEQP-GLES3.functional.shaders.loops.do_while_d"
#define VkglTestCase_007262_2 "ynamic_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007262, VkglTestCase_007262_1, VkglTestCase_007262_2);

#define VkglTestCase_007263_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007263_2 "le_dynamic_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007263, VkglTestCase_007263_1, VkglTestCase_007263_2);

#define VkglTestCase_007264_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007264_2 "e_dynamic_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007264, VkglTestCase_007264_1, VkglTestCase_007264_2);

#define VkglTestCase_007265_1 "dEQP-GLES3.functional.shaders.loops.do_whi"
#define VkglTestCase_007265_2 "le_dynamic_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007265, VkglTestCase_007265_1, VkglTestCase_007265_2);

#define VkglTestCase_007266_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007266_2 "e_dynamic_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007266, VkglTestCase_007266_1, VkglTestCase_007266_2);

#define VkglTestCase_007267_1 "dEQP-GLES3.functional.shaders.loops.do_"
#define VkglTestCase_007267_2 "while_dynamic_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007267, VkglTestCase_007267_1, VkglTestCase_007267_2);

#define VkglTestCase_007268_1 "dEQP-GLES3.functional.shaders.loops.do_w"
#define VkglTestCase_007268_2 "hile_dynamic_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007268, VkglTestCase_007268_1, VkglTestCase_007268_2);

#define VkglTestCase_007269_1 "dEQP-GLES3.functional.shaders.loops.do"
#define VkglTestCase_007269_2 "_while_dynamic_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007269, VkglTestCase_007269_1, VkglTestCase_007269_2);

#define VkglTestCase_007270_1 "dEQP-GLES3.functional.shaders.loops.do_"
#define VkglTestCase_007270_2 "while_dynamic_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007270, VkglTestCase_007270_1, VkglTestCase_007270_2);

#define VkglTestCase_007271_1 "dEQP-GLES3.functional.shaders.loops.do_whil"
#define VkglTestCase_007271_2 "e_dynamic_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007271, VkglTestCase_007271_1, VkglTestCase_007271_2);

#define VkglTestCase_007272_1 "dEQP-GLES3.functional.shaders.loops.do_while"
#define VkglTestCase_007272_2 "_dynamic_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007272, VkglTestCase_007272_1, VkglTestCase_007272_2);

#define VkglTestCase_007273_1 "dEQP-GLES3.functional.shaders.loops.do_while_dy"
#define VkglTestCase_007273_2 "namic_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007273, VkglTestCase_007273_1, VkglTestCase_007273_2);

#define VkglTestCase_007274_1 "dEQP-GLES3.functional.shaders.loops.do_while_dyn"
#define VkglTestCase_007274_2 "amic_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007274, VkglTestCase_007274_1, VkglTestCase_007274_2);

#define VkglTestCase_007275_1 "dEQP-GLES3.functional.shaders.loops.do_while_dy"
#define VkglTestCase_007275_2 "namic_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007275, VkglTestCase_007275_1, VkglTestCase_007275_2);

#define VkglTestCase_007276_1 "dEQP-GLES3.functional.shaders.loops.do_while_dyn"
#define VkglTestCase_007276_2 "amic_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007276, VkglTestCase_007276_1, VkglTestCase_007276_2);
