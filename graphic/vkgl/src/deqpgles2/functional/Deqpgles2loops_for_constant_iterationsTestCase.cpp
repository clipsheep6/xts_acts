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

#define VkglTestCase_003307_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003307_2 "constant_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003307, VkglTestCase_003307_1, VkglTestCase_003307_2);

#define VkglTestCase_003308_1 "dEQP-GLES2.functional.shaders.loops.for_c"
#define VkglTestCase_003308_2 "onstant_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003308, VkglTestCase_003308_1, VkglTestCase_003308_2);

#define VkglTestCase_003309_1 "dEQP-GLES2.functional.shaders.loops.for_c"
#define VkglTestCase_003309_2 "onstant_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003309, VkglTestCase_003309_1, VkglTestCase_003309_2);

#define VkglTestCase_003310_1 "dEQP-GLES2.functional.shaders.loops.for_co"
#define VkglTestCase_003310_2 "nstant_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003310, VkglTestCase_003310_1, VkglTestCase_003310_2);

#define VkglTestCase_003311_1 "dEQP-GLES2.functional.shaders.loops.for_co"
#define VkglTestCase_003311_2 "nstant_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003311, VkglTestCase_003311_1, VkglTestCase_003311_2);

#define VkglTestCase_003312_1 "dEQP-GLES2.functional.shaders.loops.for_con"
#define VkglTestCase_003312_2 "stant_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003312, VkglTestCase_003312_1, VkglTestCase_003312_2);

#define VkglTestCase_003313_1 "dEQP-GLES2.functional.shaders.loops.for_con"
#define VkglTestCase_003313_2 "stant_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003313, VkglTestCase_003313_1, VkglTestCase_003313_2);

#define VkglTestCase_003314_1 "dEQP-GLES2.functional.shaders.loops.for_cons"
#define VkglTestCase_003314_2 "tant_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003314, VkglTestCase_003314_1, VkglTestCase_003314_2);

#define VkglTestCase_003315_1 "dEQP-GLES2.functional.shaders.loops.for_c"
#define VkglTestCase_003315_2 "onstant_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003315, VkglTestCase_003315_1, VkglTestCase_003315_2);

#define VkglTestCase_003316_1 "dEQP-GLES2.functional.shaders.loops.for_co"
#define VkglTestCase_003316_2 "nstant_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003316, VkglTestCase_003316_1, VkglTestCase_003316_2);

#define VkglTestCase_003317_1 "dEQP-GLES2.functional.shaders.loops.for_co"
#define VkglTestCase_003317_2 "nstant_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003317, VkglTestCase_003317_1, VkglTestCase_003317_2);

#define VkglTestCase_003318_1 "dEQP-GLES2.functional.shaders.loops.for_con"
#define VkglTestCase_003318_2 "stant_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003318, VkglTestCase_003318_1, VkglTestCase_003318_2);

#define VkglTestCase_003319_1 "dEQP-GLES2.functional.shaders.loops.fo"
#define VkglTestCase_003319_2 "r_constant_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003319, VkglTestCase_003319_1, VkglTestCase_003319_2);

#define VkglTestCase_003320_1 "dEQP-GLES2.functional.shaders.loops.for"
#define VkglTestCase_003320_2 "_constant_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003320, VkglTestCase_003320_1, VkglTestCase_003320_2);

#define VkglTestCase_003321_1 "dEQP-GLES2.functional.shaders.loops.for_constant_iter"
#define VkglTestCase_003321_2 "ations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003321, VkglTestCase_003321_1, VkglTestCase_003321_2);

#define VkglTestCase_003322_1 "dEQP-GLES2.functional.shaders.loops.for_constant_itera"
#define VkglTestCase_003322_2 "tions.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003322, VkglTestCase_003322_1, VkglTestCase_003322_2);

#define VkglTestCase_003323_1 "dEQP-GLES2.functional.shaders.loops.for_constant_ite"
#define VkglTestCase_003323_2 "rations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003323, VkglTestCase_003323_1, VkglTestCase_003323_2);

#define VkglTestCase_003324_1 "dEQP-GLES2.functional.shaders.loops.for_constant_iter"
#define VkglTestCase_003324_2 "ations.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003324, VkglTestCase_003324_1, VkglTestCase_003324_2);

#define VkglTestCase_003325_1 "dEQP-GLES2.functional.shaders.loops.for_constant_"
#define VkglTestCase_003325_2 "iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003325, VkglTestCase_003325_1, VkglTestCase_003325_2);

#define VkglTestCase_003326_1 "dEQP-GLES2.functional.shaders.loops.for_constant_i"
#define VkglTestCase_003326_2 "terations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003326, VkglTestCase_003326_1, VkglTestCase_003326_2);

#define VkglTestCase_003327_1 "dEQP-GLES2.functional.shaders.loops.for_c"
#define VkglTestCase_003327_2 "onstant_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003327, VkglTestCase_003327_1, VkglTestCase_003327_2);

#define VkglTestCase_003328_1 "dEQP-GLES2.functional.shaders.loops.for_co"
#define VkglTestCase_003328_2 "nstant_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003328, VkglTestCase_003328_1, VkglTestCase_003328_2);

#define VkglTestCase_003329_1 "dEQP-GLES2.functional.shaders.loops.for_co"
#define VkglTestCase_003329_2 "nstant_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003329, VkglTestCase_003329_1, VkglTestCase_003329_2);

#define VkglTestCase_003330_1 "dEQP-GLES2.functional.shaders.loops.for_con"
#define VkglTestCase_003330_2 "stant_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003330, VkglTestCase_003330_1, VkglTestCase_003330_2);

#define VkglTestCase_003331_1 "dEQP-GLES2.functional.shaders.loops.for_co"
#define VkglTestCase_003331_2 "nstant_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003331, VkglTestCase_003331_1, VkglTestCase_003331_2);

#define VkglTestCase_003332_1 "dEQP-GLES2.functional.shaders.loops.for_con"
#define VkglTestCase_003332_2 "stant_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003332, VkglTestCase_003332_1, VkglTestCase_003332_2);

#define VkglTestCase_003333_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003333_2 "constant_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003333, VkglTestCase_003333_1, VkglTestCase_003333_2);

#define VkglTestCase_003334_1 "dEQP-GLES2.functional.shaders.loops.for_c"
#define VkglTestCase_003334_2 "onstant_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003334, VkglTestCase_003334_1, VkglTestCase_003334_2);

#define VkglTestCase_003335_1 "dEQP-GLES2.functional.shaders.loops.for_c"
#define VkglTestCase_003335_2 "onstant_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003335, VkglTestCase_003335_1, VkglTestCase_003335_2);

#define VkglTestCase_003336_1 "dEQP-GLES2.functional.shaders.loops.for_co"
#define VkglTestCase_003336_2 "nstant_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003336, VkglTestCase_003336_1, VkglTestCase_003336_2);

#define VkglTestCase_003337_1 "dEQP-GLES2.functional.shaders.loops.for_cons"
#define VkglTestCase_003337_2 "tant_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003337, VkglTestCase_003337_1, VkglTestCase_003337_2);

#define VkglTestCase_003338_1 "dEQP-GLES2.functional.shaders.loops.for_const"
#define VkglTestCase_003338_2 "ant_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003338, VkglTestCase_003338_1, VkglTestCase_003338_2);

#define VkglTestCase_003339_1 "dEQP-GLES2.functional.shaders.loops.for_con"
#define VkglTestCase_003339_2 "stant_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003339, VkglTestCase_003339_1, VkglTestCase_003339_2);

#define VkglTestCase_003340_1 "dEQP-GLES2.functional.shaders.loops.for_cons"
#define VkglTestCase_003340_2 "tant_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003340, VkglTestCase_003340_1, VkglTestCase_003340_2);

#define VkglTestCase_003341_1 "dEQP-GLES2.functional.shaders.loops.for_cons"
#define VkglTestCase_003341_2 "tant_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003341, VkglTestCase_003341_1, VkglTestCase_003341_2);

#define VkglTestCase_003342_1 "dEQP-GLES2.functional.shaders.loops.for_const"
#define VkglTestCase_003342_2 "ant_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003342, VkglTestCase_003342_1, VkglTestCase_003342_2);

#define VkglTestCase_003343_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003343_2 "constant_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003343, VkglTestCase_003343_1, VkglTestCase_003343_2);

#define VkglTestCase_003344_1 "dEQP-GLES2.functional.shaders.loops.for_c"
#define VkglTestCase_003344_2 "onstant_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003344, VkglTestCase_003344_1, VkglTestCase_003344_2);

#define VkglTestCase_003345_1 "dEQP-GLES2.functional.shaders.loops.for_c"
#define VkglTestCase_003345_2 "onstant_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003345, VkglTestCase_003345_1, VkglTestCase_003345_2);

#define VkglTestCase_003346_1 "dEQP-GLES2.functional.shaders.loops.for_co"
#define VkglTestCase_003346_2 "nstant_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003346, VkglTestCase_003346_1, VkglTestCase_003346_2);

#define VkglTestCase_003347_1 "dEQP-GLES2.functional.shaders.loops.for_co"
#define VkglTestCase_003347_2 "nstant_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003347, VkglTestCase_003347_1, VkglTestCase_003347_2);

#define VkglTestCase_003348_1 "dEQP-GLES2.functional.shaders.loops.for_con"
#define VkglTestCase_003348_2 "stant_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003348, VkglTestCase_003348_1, VkglTestCase_003348_2);

#define VkglTestCase_003349_1 "dEQP-GLES2.functional.shaders.loops.for_con"
#define VkglTestCase_003349_2 "stant_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003349, VkglTestCase_003349_1, VkglTestCase_003349_2);

#define VkglTestCase_003350_1 "dEQP-GLES2.functional.shaders.loops.for_cons"
#define VkglTestCase_003350_2 "tant_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003350, VkglTestCase_003350_1, VkglTestCase_003350_2);

#define VkglTestCase_003351_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003351_2 "constant_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003351, VkglTestCase_003351_1, VkglTestCase_003351_2);

#define VkglTestCase_003352_1 "dEQP-GLES2.functional.shaders.loops.for_c"
#define VkglTestCase_003352_2 "onstant_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003352, VkglTestCase_003352_1, VkglTestCase_003352_2);

#define VkglTestCase_003353_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003353_2 "constant_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003353, VkglTestCase_003353_1, VkglTestCase_003353_2);

#define VkglTestCase_003354_1 "dEQP-GLES2.functional.shaders.loops.for_c"
#define VkglTestCase_003354_2 "onstant_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003354, VkglTestCase_003354_1, VkglTestCase_003354_2);

#define VkglTestCase_003355_1 "dEQP-GLES2.functional.shaders.loops.for_con"
#define VkglTestCase_003355_2 "stant_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003355, VkglTestCase_003355_1, VkglTestCase_003355_2);

#define VkglTestCase_003356_1 "dEQP-GLES2.functional.shaders.loops.for_cons"
#define VkglTestCase_003356_2 "tant_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003356, VkglTestCase_003356_1, VkglTestCase_003356_2);

#define VkglTestCase_003357_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003357_2 "constant_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003357, VkglTestCase_003357_1, VkglTestCase_003357_2);

#define VkglTestCase_003358_1 "dEQP-GLES2.functional.shaders.loops.for_c"
#define VkglTestCase_003358_2 "onstant_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003358, VkglTestCase_003358_1, VkglTestCase_003358_2);

#define VkglTestCase_003359_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003359_2 "constant_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003359, VkglTestCase_003359_1, VkglTestCase_003359_2);

#define VkglTestCase_003360_1 "dEQP-GLES2.functional.shaders.loops.for_c"
#define VkglTestCase_003360_2 "onstant_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003360, VkglTestCase_003360_1, VkglTestCase_003360_2);

#define VkglTestCase_003361_1 "dEQP-GLES2.functional.shaders.loops.f"
#define VkglTestCase_003361_2 "or_constant_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003361, VkglTestCase_003361_1, VkglTestCase_003361_2);

#define VkglTestCase_003362_1 "dEQP-GLES2.functional.shaders.loops.fo"
#define VkglTestCase_003362_2 "r_constant_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003362, VkglTestCase_003362_1, VkglTestCase_003362_2);

#define VkglTestCase_003363_1 "dEQP-GLES2.functional.shaders.loops."
#define VkglTestCase_003363_2 "for_constant_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003363, VkglTestCase_003363_1, VkglTestCase_003363_2);

#define VkglTestCase_003364_1 "dEQP-GLES2.functional.shaders.loops.f"
#define VkglTestCase_003364_2 "or_constant_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003364, VkglTestCase_003364_1, VkglTestCase_003364_2);

#define VkglTestCase_003365_1 "dEQP-GLES2.functional.shaders.loops.for_c"
#define VkglTestCase_003365_2 "onstant_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003365, VkglTestCase_003365_1, VkglTestCase_003365_2);

#define VkglTestCase_003366_1 "dEQP-GLES2.functional.shaders.loops.for_co"
#define VkglTestCase_003366_2 "nstant_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003366, VkglTestCase_003366_1, VkglTestCase_003366_2);

#define VkglTestCase_003367_1 "dEQP-GLES2.functional.shaders.loops.for_const"
#define VkglTestCase_003367_2 "ant_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003367, VkglTestCase_003367_1, VkglTestCase_003367_2);

#define VkglTestCase_003368_1 "dEQP-GLES2.functional.shaders.loops.for_consta"
#define VkglTestCase_003368_2 "nt_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003368, VkglTestCase_003368_1, VkglTestCase_003368_2);

#define VkglTestCase_003369_1 "dEQP-GLES2.functional.shaders.loops.for_const"
#define VkglTestCase_003369_2 "ant_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003369, VkglTestCase_003369_1, VkglTestCase_003369_2);

#define VkglTestCase_003370_1 "dEQP-GLES2.functional.shaders.loops.for_consta"
#define VkglTestCase_003370_2 "nt_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003370, VkglTestCase_003370_1, VkglTestCase_003370_2);

#define VkglTestCase_003371_1 "dEQP-GLES2.functional.shaders.loops.for_c"
#define VkglTestCase_003371_2 "onstant_iterations.conditional_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003371, VkglTestCase_003371_1, VkglTestCase_003371_2);

#define VkglTestCase_003372_1 "dEQP-GLES2.functional.shaders.loops.for_co"
#define VkglTestCase_003372_2 "nstant_iterations.conditional_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003372, VkglTestCase_003372_1, VkglTestCase_003372_2);

#define VkglTestCase_003373_1 "dEQP-GLES2.functional.shaders.loops.for_con"
#define VkglTestCase_003373_2 "stant_iterations.function_call_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003373, VkglTestCase_003373_1, VkglTestCase_003373_2);

#define VkglTestCase_003374_1 "dEQP-GLES2.functional.shaders.loops.for_cons"
#define VkglTestCase_003374_2 "tant_iterations.function_call_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003374, VkglTestCase_003374_1, VkglTestCase_003374_2);

#define VkglTestCase_003375_1 "dEQP-GLES2.functional.shaders.loops.for_con"
#define VkglTestCase_003375_2 "stant_iterations.function_call_inout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003375, VkglTestCase_003375_1, VkglTestCase_003375_2);

#define VkglTestCase_003376_1 "dEQP-GLES2.functional.shaders.loops.for_cons"
#define VkglTestCase_003376_2 "tant_iterations.function_call_inout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003376, VkglTestCase_003376_1, VkglTestCase_003376_2);
