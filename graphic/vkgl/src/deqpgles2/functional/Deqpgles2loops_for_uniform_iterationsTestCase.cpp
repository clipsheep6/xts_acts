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

#define VkglTestCase_003377_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003377_2 "uniform_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003377, VkglTestCase_003377_1, VkglTestCase_003377_2);

#define VkglTestCase_003378_1 "dEQP-GLES2.functional.shaders.loops.for_u"
#define VkglTestCase_003378_2 "niform_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003378, VkglTestCase_003378_1, VkglTestCase_003378_2);

#define VkglTestCase_003379_1 "dEQP-GLES2.functional.shaders.loops.for_u"
#define VkglTestCase_003379_2 "niform_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003379, VkglTestCase_003379_1, VkglTestCase_003379_2);

#define VkglTestCase_003380_1 "dEQP-GLES2.functional.shaders.loops.for_un"
#define VkglTestCase_003380_2 "iform_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003380, VkglTestCase_003380_1, VkglTestCase_003380_2);

#define VkglTestCase_003381_1 "dEQP-GLES2.functional.shaders.loops.for_u"
#define VkglTestCase_003381_2 "niform_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003381, VkglTestCase_003381_1, VkglTestCase_003381_2);

#define VkglTestCase_003382_1 "dEQP-GLES2.functional.shaders.loops.for_un"
#define VkglTestCase_003382_2 "iform_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003382, VkglTestCase_003382_1, VkglTestCase_003382_2);

#define VkglTestCase_003383_1 "dEQP-GLES2.functional.shaders.loops.for_un"
#define VkglTestCase_003383_2 "iform_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003383, VkglTestCase_003383_1, VkglTestCase_003383_2);

#define VkglTestCase_003384_1 "dEQP-GLES2.functional.shaders.loops.for_uni"
#define VkglTestCase_003384_2 "form_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003384, VkglTestCase_003384_1, VkglTestCase_003384_2);

#define VkglTestCase_003385_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003385_2 "uniform_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003385, VkglTestCase_003385_1, VkglTestCase_003385_2);

#define VkglTestCase_003386_1 "dEQP-GLES2.functional.shaders.loops.for_u"
#define VkglTestCase_003386_2 "niform_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003386, VkglTestCase_003386_1, VkglTestCase_003386_2);

#define VkglTestCase_003387_1 "dEQP-GLES2.functional.shaders.loops.for_u"
#define VkglTestCase_003387_2 "niform_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003387, VkglTestCase_003387_1, VkglTestCase_003387_2);

#define VkglTestCase_003388_1 "dEQP-GLES2.functional.shaders.loops.for_un"
#define VkglTestCase_003388_2 "iform_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003388, VkglTestCase_003388_1, VkglTestCase_003388_2);

#define VkglTestCase_003389_1 "dEQP-GLES2.functional.shaders.loops.fo"
#define VkglTestCase_003389_2 "r_uniform_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003389, VkglTestCase_003389_1, VkglTestCase_003389_2);

#define VkglTestCase_003390_1 "dEQP-GLES2.functional.shaders.loops.for"
#define VkglTestCase_003390_2 "_uniform_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003390, VkglTestCase_003390_1, VkglTestCase_003390_2);

#define VkglTestCase_003391_1 "dEQP-GLES2.functional.shaders.loops.for_uniform_iter"
#define VkglTestCase_003391_2 "ations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003391, VkglTestCase_003391_1, VkglTestCase_003391_2);

#define VkglTestCase_003392_1 "dEQP-GLES2.functional.shaders.loops.for_uniform_itera"
#define VkglTestCase_003392_2 "tions.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003392, VkglTestCase_003392_1, VkglTestCase_003392_2);

#define VkglTestCase_003393_1 "dEQP-GLES2.functional.shaders.loops.for_uniform_iter"
#define VkglTestCase_003393_2 "ations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003393, VkglTestCase_003393_1, VkglTestCase_003393_2);

#define VkglTestCase_003394_1 "dEQP-GLES2.functional.shaders.loops.for_uniform_itera"
#define VkglTestCase_003394_2 "tions.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003394, VkglTestCase_003394_1, VkglTestCase_003394_2);

#define VkglTestCase_003395_1 "dEQP-GLES2.functional.shaders.loops.for_uniform_"
#define VkglTestCase_003395_2 "iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003395, VkglTestCase_003395_1, VkglTestCase_003395_2);

#define VkglTestCase_003396_1 "dEQP-GLES2.functional.shaders.loops.for_uniform_i"
#define VkglTestCase_003396_2 "terations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003396, VkglTestCase_003396_1, VkglTestCase_003396_2);

#define VkglTestCase_003397_1 "dEQP-GLES2.functional.shaders.loops.for_u"
#define VkglTestCase_003397_2 "niform_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003397, VkglTestCase_003397_1, VkglTestCase_003397_2);

#define VkglTestCase_003398_1 "dEQP-GLES2.functional.shaders.loops.for_un"
#define VkglTestCase_003398_2 "iform_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003398, VkglTestCase_003398_1, VkglTestCase_003398_2);

#define VkglTestCase_003399_1 "dEQP-GLES2.functional.shaders.loops.for_un"
#define VkglTestCase_003399_2 "iform_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003399, VkglTestCase_003399_1, VkglTestCase_003399_2);

#define VkglTestCase_003400_1 "dEQP-GLES2.functional.shaders.loops.for_uni"
#define VkglTestCase_003400_2 "form_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003400, VkglTestCase_003400_1, VkglTestCase_003400_2);

#define VkglTestCase_003401_1 "dEQP-GLES2.functional.shaders.loops.for_un"
#define VkglTestCase_003401_2 "iform_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003401, VkglTestCase_003401_1, VkglTestCase_003401_2);

#define VkglTestCase_003402_1 "dEQP-GLES2.functional.shaders.loops.for_uni"
#define VkglTestCase_003402_2 "form_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003402, VkglTestCase_003402_1, VkglTestCase_003402_2);

#define VkglTestCase_003403_1 "dEQP-GLES2.functional.shaders.loops.for"
#define VkglTestCase_003403_2 "_uniform_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003403, VkglTestCase_003403_1, VkglTestCase_003403_2);

#define VkglTestCase_003404_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003404_2 "uniform_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003404, VkglTestCase_003404_1, VkglTestCase_003404_2);

#define VkglTestCase_003405_1 "dEQP-GLES2.functional.shaders.loops.for_u"
#define VkglTestCase_003405_2 "niform_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003405, VkglTestCase_003405_1, VkglTestCase_003405_2);

#define VkglTestCase_003406_1 "dEQP-GLES2.functional.shaders.loops.for_un"
#define VkglTestCase_003406_2 "iform_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003406, VkglTestCase_003406_1, VkglTestCase_003406_2);

#define VkglTestCase_003407_1 "dEQP-GLES2.functional.shaders.loops.for_unif"
#define VkglTestCase_003407_2 "orm_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003407, VkglTestCase_003407_1, VkglTestCase_003407_2);

#define VkglTestCase_003408_1 "dEQP-GLES2.functional.shaders.loops.for_unifo"
#define VkglTestCase_003408_2 "rm_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003408, VkglTestCase_003408_1, VkglTestCase_003408_2);

#define VkglTestCase_003409_1 "dEQP-GLES2.functional.shaders.loops.for_uni"
#define VkglTestCase_003409_2 "form_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003409, VkglTestCase_003409_1, VkglTestCase_003409_2);

#define VkglTestCase_003410_1 "dEQP-GLES2.functional.shaders.loops.for_unif"
#define VkglTestCase_003410_2 "orm_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003410, VkglTestCase_003410_1, VkglTestCase_003410_2);

#define VkglTestCase_003411_1 "dEQP-GLES2.functional.shaders.loops.for_unif"
#define VkglTestCase_003411_2 "orm_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003411, VkglTestCase_003411_1, VkglTestCase_003411_2);

#define VkglTestCase_003412_1 "dEQP-GLES2.functional.shaders.loops.for_unifo"
#define VkglTestCase_003412_2 "rm_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003412, VkglTestCase_003412_1, VkglTestCase_003412_2);

#define VkglTestCase_003413_1 "dEQP-GLES2.functional.shaders.loops.for"
#define VkglTestCase_003413_2 "_uniform_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003413, VkglTestCase_003413_1, VkglTestCase_003413_2);

#define VkglTestCase_003414_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003414_2 "uniform_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003414, VkglTestCase_003414_1, VkglTestCase_003414_2);

#define VkglTestCase_003415_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003415_2 "uniform_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003415, VkglTestCase_003415_1, VkglTestCase_003415_2);

#define VkglTestCase_003416_1 "dEQP-GLES2.functional.shaders.loops.for_u"
#define VkglTestCase_003416_2 "niform_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003416, VkglTestCase_003416_1, VkglTestCase_003416_2);

#define VkglTestCase_003417_1 "dEQP-GLES2.functional.shaders.loops.for_u"
#define VkglTestCase_003417_2 "niform_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003417, VkglTestCase_003417_1, VkglTestCase_003417_2);

#define VkglTestCase_003418_1 "dEQP-GLES2.functional.shaders.loops.for_un"
#define VkglTestCase_003418_2 "iform_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003418, VkglTestCase_003418_1, VkglTestCase_003418_2);

#define VkglTestCase_003419_1 "dEQP-GLES2.functional.shaders.loops.for_un"
#define VkglTestCase_003419_2 "iform_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003419, VkglTestCase_003419_1, VkglTestCase_003419_2);

#define VkglTestCase_003420_1 "dEQP-GLES2.functional.shaders.loops.for_uni"
#define VkglTestCase_003420_2 "form_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003420, VkglTestCase_003420_1, VkglTestCase_003420_2);

#define VkglTestCase_003421_1 "dEQP-GLES2.functional.shaders.loops.for"
#define VkglTestCase_003421_2 "_uniform_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003421, VkglTestCase_003421_1, VkglTestCase_003421_2);

#define VkglTestCase_003422_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003422_2 "uniform_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003422, VkglTestCase_003422_1, VkglTestCase_003422_2);

#define VkglTestCase_003423_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003423_2 "uniform_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003423, VkglTestCase_003423_1, VkglTestCase_003423_2);

#define VkglTestCase_003424_1 "dEQP-GLES2.functional.shaders.loops.for_u"
#define VkglTestCase_003424_2 "niform_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003424, VkglTestCase_003424_1, VkglTestCase_003424_2);

#define VkglTestCase_003425_1 "dEQP-GLES2.functional.shaders.loops.for_uni"
#define VkglTestCase_003425_2 "form_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003425, VkglTestCase_003425_1, VkglTestCase_003425_2);

#define VkglTestCase_003426_1 "dEQP-GLES2.functional.shaders.loops.for_unif"
#define VkglTestCase_003426_2 "orm_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003426, VkglTestCase_003426_1, VkglTestCase_003426_2);

#define VkglTestCase_003427_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003427_2 "uniform_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003427, VkglTestCase_003427_1, VkglTestCase_003427_2);

#define VkglTestCase_003428_1 "dEQP-GLES2.functional.shaders.loops.for_u"
#define VkglTestCase_003428_2 "niform_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003428, VkglTestCase_003428_1, VkglTestCase_003428_2);

#define VkglTestCase_003429_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003429_2 "uniform_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003429, VkglTestCase_003429_1, VkglTestCase_003429_2);

#define VkglTestCase_003430_1 "dEQP-GLES2.functional.shaders.loops.for_u"
#define VkglTestCase_003430_2 "niform_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003430, VkglTestCase_003430_1, VkglTestCase_003430_2);

#define VkglTestCase_003431_1 "dEQP-GLES2.functional.shaders.loops.f"
#define VkglTestCase_003431_2 "or_uniform_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003431, VkglTestCase_003431_1, VkglTestCase_003431_2);

#define VkglTestCase_003432_1 "dEQP-GLES2.functional.shaders.loops.fo"
#define VkglTestCase_003432_2 "r_uniform_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003432, VkglTestCase_003432_1, VkglTestCase_003432_2);

#define VkglTestCase_003433_1 "dEQP-GLES2.functional.shaders.loops."
#define VkglTestCase_003433_2 "for_uniform_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003433, VkglTestCase_003433_1, VkglTestCase_003433_2);

#define VkglTestCase_003434_1 "dEQP-GLES2.functional.shaders.loops.f"
#define VkglTestCase_003434_2 "or_uniform_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003434, VkglTestCase_003434_1, VkglTestCase_003434_2);

#define VkglTestCase_003435_1 "dEQP-GLES2.functional.shaders.loops.for_"
#define VkglTestCase_003435_2 "uniform_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003435, VkglTestCase_003435_1, VkglTestCase_003435_2);

#define VkglTestCase_003436_1 "dEQP-GLES2.functional.shaders.loops.for_u"
#define VkglTestCase_003436_2 "niform_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003436, VkglTestCase_003436_1, VkglTestCase_003436_2);

#define VkglTestCase_003437_1 "dEQP-GLES2.functional.shaders.loops.for_unifo"
#define VkglTestCase_003437_2 "rm_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003437, VkglTestCase_003437_1, VkglTestCase_003437_2);

#define VkglTestCase_003438_1 "dEQP-GLES2.functional.shaders.loops.for_unifor"
#define VkglTestCase_003438_2 "m_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003438, VkglTestCase_003438_1, VkglTestCase_003438_2);

#define VkglTestCase_003439_1 "dEQP-GLES2.functional.shaders.loops.for_unifo"
#define VkglTestCase_003439_2 "rm_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003439, VkglTestCase_003439_1, VkglTestCase_003439_2);

#define VkglTestCase_003440_1 "dEQP-GLES2.functional.shaders.loops.for_unifor"
#define VkglTestCase_003440_2 "m_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003440, VkglTestCase_003440_1, VkglTestCase_003440_2);

#define VkglTestCase_003441_1 "dEQP-GLES2.functional.shaders.loops.for_u"
#define VkglTestCase_003441_2 "niform_iterations.conditional_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003441, VkglTestCase_003441_1, VkglTestCase_003441_2);

#define VkglTestCase_003442_1 "dEQP-GLES2.functional.shaders.loops.for_un"
#define VkglTestCase_003442_2 "iform_iterations.conditional_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003442, VkglTestCase_003442_1, VkglTestCase_003442_2);

#define VkglTestCase_003443_1 "dEQP-GLES2.functional.shaders.loops.for_uni"
#define VkglTestCase_003443_2 "form_iterations.function_call_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003443, VkglTestCase_003443_1, VkglTestCase_003443_2);

#define VkglTestCase_003444_1 "dEQP-GLES2.functional.shaders.loops.for_unif"
#define VkglTestCase_003444_2 "orm_iterations.function_call_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003444, VkglTestCase_003444_1, VkglTestCase_003444_2);

#define VkglTestCase_003445_1 "dEQP-GLES2.functional.shaders.loops.for_un"
#define VkglTestCase_003445_2 "iform_iterations.function_call_inout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003445, VkglTestCase_003445_1, VkglTestCase_003445_2);

#define VkglTestCase_003446_1 "dEQP-GLES2.functional.shaders.loops.for_uni"
#define VkglTestCase_003446_2 "form_iterations.function_call_inout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003446, VkglTestCase_003446_1, VkglTestCase_003446_2);
