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

#define VkglTestCase_000388_1 "KHR-GLES3.shaders.loops.for_unifor"
#define VkglTestCase_000388_2 "m_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000388, VkglTestCase_000388_1, VkglTestCase_000388_2);

#define VkglTestCase_000389_1 "KHR-GLES3.shaders.loops.for_uniform"
#define VkglTestCase_000389_2 "_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000389, VkglTestCase_000389_1, VkglTestCase_000389_2);

#define VkglTestCase_000390_1 "KHR-GLES3.shaders.loops.for_uniform"
#define VkglTestCase_000390_2 "_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000390, VkglTestCase_000390_1, VkglTestCase_000390_2);

#define VkglTestCase_000391_1 "KHR-GLES3.shaders.loops.for_uniform_"
#define VkglTestCase_000391_2 "iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000391, VkglTestCase_000391_1, VkglTestCase_000391_2);

#define VkglTestCase_000392_1 "KHR-GLES3.shaders.loops.for_uniform_"
#define VkglTestCase_000392_2 "iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000392, VkglTestCase_000392_1, VkglTestCase_000392_2);

#define VkglTestCase_000393_1 "KHR-GLES3.shaders.loops.for_uniform_i"
#define VkglTestCase_000393_2 "terations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000393, VkglTestCase_000393_1, VkglTestCase_000393_2);

#define VkglTestCase_000394_1 "KHR-GLES3.shaders.loops.for_unifor"
#define VkglTestCase_000394_2 "m_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000394, VkglTestCase_000394_1, VkglTestCase_000394_2);

#define VkglTestCase_000395_1 "KHR-GLES3.shaders.loops.for_uniform"
#define VkglTestCase_000395_2 "_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000395, VkglTestCase_000395_1, VkglTestCase_000395_2);

#define VkglTestCase_000396_1 "KHR-GLES3.shaders.loops.for_uniform"
#define VkglTestCase_000396_2 "_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000396, VkglTestCase_000396_1, VkglTestCase_000396_2);

#define VkglTestCase_000397_1 "KHR-GLES3.shaders.loops.for_uniform_"
#define VkglTestCase_000397_2 "iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000397, VkglTestCase_000397_1, VkglTestCase_000397_2);

#define VkglTestCase_000398_1 "KHR-GLES3.shaders.loops.for_unif"
#define VkglTestCase_000398_2 "orm_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000398, VkglTestCase_000398_1, VkglTestCase_000398_2);

#define VkglTestCase_000399_1 "KHR-GLES3.shaders.loops.for_unifo"
#define VkglTestCase_000399_2 "rm_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000399, VkglTestCase_000399_1, VkglTestCase_000399_2);

#define VkglTestCase_000400_1 "KHR-GLES3.shaders.loops.for_uniform_iterations"
#define VkglTestCase_000400_2 ".infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000400, VkglTestCase_000400_1, VkglTestCase_000400_2);

#define VkglTestCase_000401_1 "KHR-GLES3.shaders.loops.for_uniform_iterations."
#define VkglTestCase_000401_2 "infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000401, VkglTestCase_000401_1, VkglTestCase_000401_2);

#define VkglTestCase_000402_1 "KHR-GLES3.shaders.loops.for_uniform_iterations"
#define VkglTestCase_000402_2 ".infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000402, VkglTestCase_000402_1, VkglTestCase_000402_2);

#define VkglTestCase_000403_1 "KHR-GLES3.shaders.loops.for_uniform_iterations."
#define VkglTestCase_000403_2 "infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000403, VkglTestCase_000403_1, VkglTestCase_000403_2);

#define VkglTestCase_000404_1 "KHR-GLES3.shaders.loops.for_uniform_iterat"
#define VkglTestCase_000404_2 "ions.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000404, VkglTestCase_000404_1, VkglTestCase_000404_2);

#define VkglTestCase_000405_1 "KHR-GLES3.shaders.loops.for_uniform_iterati"
#define VkglTestCase_000405_2 "ons.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000405, VkglTestCase_000405_1, VkglTestCase_000405_2);

#define VkglTestCase_000406_1 "KHR-GLES3.shaders.loops.for_uniform"
#define VkglTestCase_000406_2 "_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000406, VkglTestCase_000406_1, VkglTestCase_000406_2);

#define VkglTestCase_000407_1 "KHR-GLES3.shaders.loops.for_uniform_"
#define VkglTestCase_000407_2 "iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000407, VkglTestCase_000407_1, VkglTestCase_000407_2);

#define VkglTestCase_000408_1 "KHR-GLES3.shaders.loops.for_uniform_"
#define VkglTestCase_000408_2 "iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000408, VkglTestCase_000408_1, VkglTestCase_000408_2);

#define VkglTestCase_000409_1 "KHR-GLES3.shaders.loops.for_uniform_i"
#define VkglTestCase_000409_2 "terations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000409, VkglTestCase_000409_1, VkglTestCase_000409_2);

#define VkglTestCase_000410_1 "KHR-GLES3.shaders.loops.for_uniform_"
#define VkglTestCase_000410_2 "iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000410, VkglTestCase_000410_1, VkglTestCase_000410_2);

#define VkglTestCase_000411_1 "KHR-GLES3.shaders.loops.for_uniform_i"
#define VkglTestCase_000411_2 "terations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000411, VkglTestCase_000411_1, VkglTestCase_000411_2);

#define VkglTestCase_000412_1 "KHR-GLES3.shaders.loops.for_unifo"
#define VkglTestCase_000412_2 "rm_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000412, VkglTestCase_000412_1, VkglTestCase_000412_2);

#define VkglTestCase_000413_1 "KHR-GLES3.shaders.loops.for_unifor"
#define VkglTestCase_000413_2 "m_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000413, VkglTestCase_000413_1, VkglTestCase_000413_2);

#define VkglTestCase_000414_1 "KHR-GLES3.shaders.loops.for_uniform"
#define VkglTestCase_000414_2 "_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000414, VkglTestCase_000414_1, VkglTestCase_000414_2);

#define VkglTestCase_000415_1 "KHR-GLES3.shaders.loops.for_uniform_"
#define VkglTestCase_000415_2 "iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000415, VkglTestCase_000415_1, VkglTestCase_000415_2);

#define VkglTestCase_000416_1 "KHR-GLES3.shaders.loops.for_uniform_it"
#define VkglTestCase_000416_2 "erations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000416, VkglTestCase_000416_1, VkglTestCase_000416_2);

#define VkglTestCase_000417_1 "KHR-GLES3.shaders.loops.for_uniform_ite"
#define VkglTestCase_000417_2 "rations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000417, VkglTestCase_000417_1, VkglTestCase_000417_2);

#define VkglTestCase_000418_1 "KHR-GLES3.shaders.loops.for_uniform_i"
#define VkglTestCase_000418_2 "terations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000418, VkglTestCase_000418_1, VkglTestCase_000418_2);

#define VkglTestCase_000419_1 "KHR-GLES3.shaders.loops.for_uniform_it"
#define VkglTestCase_000419_2 "erations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000419, VkglTestCase_000419_1, VkglTestCase_000419_2);

#define VkglTestCase_000420_1 "KHR-GLES3.shaders.loops.for_uniform_it"
#define VkglTestCase_000420_2 "erations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000420, VkglTestCase_000420_1, VkglTestCase_000420_2);

#define VkglTestCase_000421_1 "KHR-GLES3.shaders.loops.for_uniform_ite"
#define VkglTestCase_000421_2 "rations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000421, VkglTestCase_000421_1, VkglTestCase_000421_2);

#define VkglTestCase_000422_1 "KHR-GLES3.shaders.loops.for_unifo"
#define VkglTestCase_000422_2 "rm_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000422, VkglTestCase_000422_1, VkglTestCase_000422_2);

#define VkglTestCase_000423_1 "KHR-GLES3.shaders.loops.for_unifor"
#define VkglTestCase_000423_2 "m_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000423, VkglTestCase_000423_1, VkglTestCase_000423_2);

#define VkglTestCase_000424_1 "KHR-GLES3.shaders.loops.for_unifor"
#define VkglTestCase_000424_2 "m_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000424, VkglTestCase_000424_1, VkglTestCase_000424_2);

#define VkglTestCase_000425_1 "KHR-GLES3.shaders.loops.for_uniform"
#define VkglTestCase_000425_2 "_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000425, VkglTestCase_000425_1, VkglTestCase_000425_2);

#define VkglTestCase_000426_1 "KHR-GLES3.shaders.loops.for_uniform"
#define VkglTestCase_000426_2 "_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000426, VkglTestCase_000426_1, VkglTestCase_000426_2);

#define VkglTestCase_000427_1 "KHR-GLES3.shaders.loops.for_uniform_"
#define VkglTestCase_000427_2 "iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000427, VkglTestCase_000427_1, VkglTestCase_000427_2);

#define VkglTestCase_000428_1 "KHR-GLES3.shaders.loops.for_uniform_"
#define VkglTestCase_000428_2 "iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000428, VkglTestCase_000428_1, VkglTestCase_000428_2);

#define VkglTestCase_000429_1 "KHR-GLES3.shaders.loops.for_uniform_i"
#define VkglTestCase_000429_2 "terations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000429, VkglTestCase_000429_1, VkglTestCase_000429_2);

#define VkglTestCase_000430_1 "KHR-GLES3.shaders.loops.for_unifo"
#define VkglTestCase_000430_2 "rm_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000430, VkglTestCase_000430_1, VkglTestCase_000430_2);

#define VkglTestCase_000431_1 "KHR-GLES3.shaders.loops.for_unifor"
#define VkglTestCase_000431_2 "m_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000431, VkglTestCase_000431_1, VkglTestCase_000431_2);

#define VkglTestCase_000432_1 "KHR-GLES3.shaders.loops.for_unifor"
#define VkglTestCase_000432_2 "m_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000432, VkglTestCase_000432_1, VkglTestCase_000432_2);

#define VkglTestCase_000433_1 "KHR-GLES3.shaders.loops.for_uniform"
#define VkglTestCase_000433_2 "_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000433, VkglTestCase_000433_1, VkglTestCase_000433_2);

#define VkglTestCase_000434_1 "KHR-GLES3.shaders.loops.for_uniform_i"
#define VkglTestCase_000434_2 "terations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000434, VkglTestCase_000434_1, VkglTestCase_000434_2);

#define VkglTestCase_000435_1 "KHR-GLES3.shaders.loops.for_uniform_it"
#define VkglTestCase_000435_2 "erations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000435, VkglTestCase_000435_1, VkglTestCase_000435_2);

#define VkglTestCase_000436_1 "KHR-GLES3.shaders.loops.for_unifor"
#define VkglTestCase_000436_2 "m_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000436, VkglTestCase_000436_1, VkglTestCase_000436_2);

#define VkglTestCase_000437_1 "KHR-GLES3.shaders.loops.for_uniform"
#define VkglTestCase_000437_2 "_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000437, VkglTestCase_000437_1, VkglTestCase_000437_2);

#define VkglTestCase_000438_1 "KHR-GLES3.shaders.loops.for_unifor"
#define VkglTestCase_000438_2 "m_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000438, VkglTestCase_000438_1, VkglTestCase_000438_2);

#define VkglTestCase_000439_1 "KHR-GLES3.shaders.loops.for_uniform"
#define VkglTestCase_000439_2 "_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000439, VkglTestCase_000439_1, VkglTestCase_000439_2);

#define VkglTestCase_000440_1 "KHR-GLES3.shaders.loops.for_uni"
#define VkglTestCase_000440_2 "form_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000440, VkglTestCase_000440_1, VkglTestCase_000440_2);

#define VkglTestCase_000441_1 "KHR-GLES3.shaders.loops.for_unif"
#define VkglTestCase_000441_2 "orm_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000441, VkglTestCase_000441_1, VkglTestCase_000441_2);

#define VkglTestCase_000442_1 "KHR-GLES3.shaders.loops.for_un"
#define VkglTestCase_000442_2 "iform_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000442, VkglTestCase_000442_1, VkglTestCase_000442_2);

#define VkglTestCase_000443_1 "KHR-GLES3.shaders.loops.for_uni"
#define VkglTestCase_000443_2 "form_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000443, VkglTestCase_000443_1, VkglTestCase_000443_2);

#define VkglTestCase_000444_1 "KHR-GLES3.shaders.loops.for_unifor"
#define VkglTestCase_000444_2 "m_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000444, VkglTestCase_000444_1, VkglTestCase_000444_2);

#define VkglTestCase_000445_1 "KHR-GLES3.shaders.loops.for_uniform"
#define VkglTestCase_000445_2 "_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000445, VkglTestCase_000445_1, VkglTestCase_000445_2);

#define VkglTestCase_000446_1 "KHR-GLES3.shaders.loops.for_uniform_ite"
#define VkglTestCase_000446_2 "rations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000446, VkglTestCase_000446_1, VkglTestCase_000446_2);

#define VkglTestCase_000447_1 "KHR-GLES3.shaders.loops.for_uniform_iter"
#define VkglTestCase_000447_2 "ations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000447, VkglTestCase_000447_1, VkglTestCase_000447_2);

#define VkglTestCase_000448_1 "KHR-GLES3.shaders.loops.for_uniform_ite"
#define VkglTestCase_000448_2 "rations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000448, VkglTestCase_000448_1, VkglTestCase_000448_2);

#define VkglTestCase_000449_1 "KHR-GLES3.shaders.loops.for_uniform_iter"
#define VkglTestCase_000449_2 "ations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000449, VkglTestCase_000449_1, VkglTestCase_000449_2);
