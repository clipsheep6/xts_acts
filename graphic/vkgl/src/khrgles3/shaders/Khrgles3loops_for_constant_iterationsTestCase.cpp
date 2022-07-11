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

#define VkglTestCase_000326_1 "KHR-GLES3.shaders.loops.for_consta"
#define VkglTestCase_000326_2 "nt_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000326, VkglTestCase_000326_1, VkglTestCase_000326_2);

#define VkglTestCase_000327_1 "KHR-GLES3.shaders.loops.for_constan"
#define VkglTestCase_000327_2 "t_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000327, VkglTestCase_000327_1, VkglTestCase_000327_2);

#define VkglTestCase_000328_1 "KHR-GLES3.shaders.loops.for_constant"
#define VkglTestCase_000328_2 "_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000328, VkglTestCase_000328_1, VkglTestCase_000328_2);

#define VkglTestCase_000329_1 "KHR-GLES3.shaders.loops.for_constant_"
#define VkglTestCase_000329_2 "iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000329, VkglTestCase_000329_1, VkglTestCase_000329_2);

#define VkglTestCase_000330_1 "KHR-GLES3.shaders.loops.for_constant_"
#define VkglTestCase_000330_2 "iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000330, VkglTestCase_000330_1, VkglTestCase_000330_2);

#define VkglTestCase_000331_1 "KHR-GLES3.shaders.loops.for_constant_i"
#define VkglTestCase_000331_2 "terations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000331, VkglTestCase_000331_1, VkglTestCase_000331_2);

#define VkglTestCase_000332_1 "KHR-GLES3.shaders.loops.for_constan"
#define VkglTestCase_000332_2 "t_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000332, VkglTestCase_000332_1, VkglTestCase_000332_2);

#define VkglTestCase_000333_1 "KHR-GLES3.shaders.loops.for_constant"
#define VkglTestCase_000333_2 "_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000333, VkglTestCase_000333_1, VkglTestCase_000333_2);

#define VkglTestCase_000334_1 "KHR-GLES3.shaders.loops.for_constant"
#define VkglTestCase_000334_2 "_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000334, VkglTestCase_000334_1, VkglTestCase_000334_2);

#define VkglTestCase_000335_1 "KHR-GLES3.shaders.loops.for_constant_"
#define VkglTestCase_000335_2 "iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000335, VkglTestCase_000335_1, VkglTestCase_000335_2);

#define VkglTestCase_000336_1 "KHR-GLES3.shaders.loops.for_cons"
#define VkglTestCase_000336_2 "tant_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000336, VkglTestCase_000336_1, VkglTestCase_000336_2);

#define VkglTestCase_000337_1 "KHR-GLES3.shaders.loops.for_const"
#define VkglTestCase_000337_2 "ant_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000337, VkglTestCase_000337_1, VkglTestCase_000337_2);

#define VkglTestCase_000338_1 "KHR-GLES3.shaders.loops.for_constant_iterations"
#define VkglTestCase_000338_2 ".infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000338, VkglTestCase_000338_1, VkglTestCase_000338_2);

#define VkglTestCase_000339_1 "KHR-GLES3.shaders.loops.for_constant_iterations."
#define VkglTestCase_000339_2 "infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000339, VkglTestCase_000339_1, VkglTestCase_000339_2);

#define VkglTestCase_000340_1 "KHR-GLES3.shaders.loops.for_constant_iteration"
#define VkglTestCase_000340_2 "s.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000340, VkglTestCase_000340_1, VkglTestCase_000340_2);

#define VkglTestCase_000341_1 "KHR-GLES3.shaders.loops.for_constant_iterations"
#define VkglTestCase_000341_2 ".infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000341, VkglTestCase_000341_1, VkglTestCase_000341_2);

#define VkglTestCase_000342_1 "KHR-GLES3.shaders.loops.for_constant_iterat"
#define VkglTestCase_000342_2 "ions.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000342, VkglTestCase_000342_1, VkglTestCase_000342_2);

#define VkglTestCase_000343_1 "KHR-GLES3.shaders.loops.for_constant_iterati"
#define VkglTestCase_000343_2 "ons.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000343, VkglTestCase_000343_1, VkglTestCase_000343_2);

#define VkglTestCase_000344_1 "KHR-GLES3.shaders.loops.for_constan"
#define VkglTestCase_000344_2 "t_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000344, VkglTestCase_000344_1, VkglTestCase_000344_2);

#define VkglTestCase_000345_1 "KHR-GLES3.shaders.loops.for_constant"
#define VkglTestCase_000345_2 "_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000345, VkglTestCase_000345_1, VkglTestCase_000345_2);

#define VkglTestCase_000346_1 "KHR-GLES3.shaders.loops.for_constant"
#define VkglTestCase_000346_2 "_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000346, VkglTestCase_000346_1, VkglTestCase_000346_2);

#define VkglTestCase_000347_1 "KHR-GLES3.shaders.loops.for_constant_"
#define VkglTestCase_000347_2 "iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000347, VkglTestCase_000347_1, VkglTestCase_000347_2);

#define VkglTestCase_000348_1 "KHR-GLES3.shaders.loops.for_constant"
#define VkglTestCase_000348_2 "_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000348, VkglTestCase_000348_1, VkglTestCase_000348_2);

#define VkglTestCase_000349_1 "KHR-GLES3.shaders.loops.for_constant_"
#define VkglTestCase_000349_2 "iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000349, VkglTestCase_000349_1, VkglTestCase_000349_2);

#define VkglTestCase_000350_1 "KHR-GLES3.shaders.loops.for_consta"
#define VkglTestCase_000350_2 "nt_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000350, VkglTestCase_000350_1, VkglTestCase_000350_2);

#define VkglTestCase_000351_1 "KHR-GLES3.shaders.loops.for_constan"
#define VkglTestCase_000351_2 "t_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000351, VkglTestCase_000351_1, VkglTestCase_000351_2);

#define VkglTestCase_000352_1 "KHR-GLES3.shaders.loops.for_constan"
#define VkglTestCase_000352_2 "t_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000352, VkglTestCase_000352_1, VkglTestCase_000352_2);

#define VkglTestCase_000353_1 "KHR-GLES3.shaders.loops.for_constant"
#define VkglTestCase_000353_2 "_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000353, VkglTestCase_000353_1, VkglTestCase_000353_2);

#define VkglTestCase_000354_1 "KHR-GLES3.shaders.loops.for_constant_i"
#define VkglTestCase_000354_2 "terations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000354, VkglTestCase_000354_1, VkglTestCase_000354_2);

#define VkglTestCase_000355_1 "KHR-GLES3.shaders.loops.for_constant_it"
#define VkglTestCase_000355_2 "erations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000355, VkglTestCase_000355_1, VkglTestCase_000355_2);

#define VkglTestCase_000356_1 "KHR-GLES3.shaders.loops.for_constant_"
#define VkglTestCase_000356_2 "iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000356, VkglTestCase_000356_1, VkglTestCase_000356_2);

#define VkglTestCase_000357_1 "KHR-GLES3.shaders.loops.for_constant_i"
#define VkglTestCase_000357_2 "terations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000357, VkglTestCase_000357_1, VkglTestCase_000357_2);

#define VkglTestCase_000358_1 "KHR-GLES3.shaders.loops.for_constant_i"
#define VkglTestCase_000358_2 "terations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000358, VkglTestCase_000358_1, VkglTestCase_000358_2);

#define VkglTestCase_000359_1 "KHR-GLES3.shaders.loops.for_constant_it"
#define VkglTestCase_000359_2 "erations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000359, VkglTestCase_000359_1, VkglTestCase_000359_2);

#define VkglTestCase_000360_1 "KHR-GLES3.shaders.loops.for_consta"
#define VkglTestCase_000360_2 "nt_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000360, VkglTestCase_000360_1, VkglTestCase_000360_2);

#define VkglTestCase_000361_1 "KHR-GLES3.shaders.loops.for_constan"
#define VkglTestCase_000361_2 "t_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000361, VkglTestCase_000361_1, VkglTestCase_000361_2);

#define VkglTestCase_000362_1 "KHR-GLES3.shaders.loops.for_constan"
#define VkglTestCase_000362_2 "t_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000362, VkglTestCase_000362_1, VkglTestCase_000362_2);

#define VkglTestCase_000363_1 "KHR-GLES3.shaders.loops.for_constant"
#define VkglTestCase_000363_2 "_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000363, VkglTestCase_000363_1, VkglTestCase_000363_2);

#define VkglTestCase_000364_1 "KHR-GLES3.shaders.loops.for_constant"
#define VkglTestCase_000364_2 "_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000364, VkglTestCase_000364_1, VkglTestCase_000364_2);

#define VkglTestCase_000365_1 "KHR-GLES3.shaders.loops.for_constant_"
#define VkglTestCase_000365_2 "iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000365, VkglTestCase_000365_1, VkglTestCase_000365_2);

#define VkglTestCase_000366_1 "KHR-GLES3.shaders.loops.for_constant_"
#define VkglTestCase_000366_2 "iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000366, VkglTestCase_000366_1, VkglTestCase_000366_2);

#define VkglTestCase_000367_1 "KHR-GLES3.shaders.loops.for_constant_i"
#define VkglTestCase_000367_2 "terations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000367, VkglTestCase_000367_1, VkglTestCase_000367_2);

#define VkglTestCase_000368_1 "KHR-GLES3.shaders.loops.for_consta"
#define VkglTestCase_000368_2 "nt_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000368, VkglTestCase_000368_1, VkglTestCase_000368_2);

#define VkglTestCase_000369_1 "KHR-GLES3.shaders.loops.for_constan"
#define VkglTestCase_000369_2 "t_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000369, VkglTestCase_000369_1, VkglTestCase_000369_2);

#define VkglTestCase_000370_1 "KHR-GLES3.shaders.loops.for_consta"
#define VkglTestCase_000370_2 "nt_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000370, VkglTestCase_000370_1, VkglTestCase_000370_2);

#define VkglTestCase_000371_1 "KHR-GLES3.shaders.loops.for_constan"
#define VkglTestCase_000371_2 "t_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000371, VkglTestCase_000371_1, VkglTestCase_000371_2);

#define VkglTestCase_000372_1 "KHR-GLES3.shaders.loops.for_constant_"
#define VkglTestCase_000372_2 "iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000372, VkglTestCase_000372_1, VkglTestCase_000372_2);

#define VkglTestCase_000373_1 "KHR-GLES3.shaders.loops.for_constant_i"
#define VkglTestCase_000373_2 "terations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000373, VkglTestCase_000373_1, VkglTestCase_000373_2);

#define VkglTestCase_000374_1 "KHR-GLES3.shaders.loops.for_consta"
#define VkglTestCase_000374_2 "nt_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000374, VkglTestCase_000374_1, VkglTestCase_000374_2);

#define VkglTestCase_000375_1 "KHR-GLES3.shaders.loops.for_constan"
#define VkglTestCase_000375_2 "t_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000375, VkglTestCase_000375_1, VkglTestCase_000375_2);

#define VkglTestCase_000376_1 "KHR-GLES3.shaders.loops.for_consta"
#define VkglTestCase_000376_2 "nt_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000376, VkglTestCase_000376_1, VkglTestCase_000376_2);

#define VkglTestCase_000377_1 "KHR-GLES3.shaders.loops.for_constan"
#define VkglTestCase_000377_2 "t_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000377, VkglTestCase_000377_1, VkglTestCase_000377_2);

#define VkglTestCase_000378_1 "KHR-GLES3.shaders.loops.for_con"
#define VkglTestCase_000378_2 "stant_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000378, VkglTestCase_000378_1, VkglTestCase_000378_2);

#define VkglTestCase_000379_1 "KHR-GLES3.shaders.loops.for_cons"
#define VkglTestCase_000379_2 "tant_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000379, VkglTestCase_000379_1, VkglTestCase_000379_2);

#define VkglTestCase_000380_1 "KHR-GLES3.shaders.loops.for_co"
#define VkglTestCase_000380_2 "nstant_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000380, VkglTestCase_000380_1, VkglTestCase_000380_2);

#define VkglTestCase_000381_1 "KHR-GLES3.shaders.loops.for_con"
#define VkglTestCase_000381_2 "stant_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000381, VkglTestCase_000381_1, VkglTestCase_000381_2);

#define VkglTestCase_000382_1 "KHR-GLES3.shaders.loops.for_constan"
#define VkglTestCase_000382_2 "t_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000382, VkglTestCase_000382_1, VkglTestCase_000382_2);

#define VkglTestCase_000383_1 "KHR-GLES3.shaders.loops.for_constant"
#define VkglTestCase_000383_2 "_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000383, VkglTestCase_000383_1, VkglTestCase_000383_2);

#define VkglTestCase_000384_1 "KHR-GLES3.shaders.loops.for_constant_it"
#define VkglTestCase_000384_2 "erations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000384, VkglTestCase_000384_1, VkglTestCase_000384_2);

#define VkglTestCase_000385_1 "KHR-GLES3.shaders.loops.for_constant_ite"
#define VkglTestCase_000385_2 "rations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000385, VkglTestCase_000385_1, VkglTestCase_000385_2);

#define VkglTestCase_000386_1 "KHR-GLES3.shaders.loops.for_constant_it"
#define VkglTestCase_000386_2 "erations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000386, VkglTestCase_000386_1, VkglTestCase_000386_2);

#define VkglTestCase_000387_1 "KHR-GLES3.shaders.loops.for_constant_ite"
#define VkglTestCase_000387_2 "rations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000387, VkglTestCase_000387_1, VkglTestCase_000387_2);
