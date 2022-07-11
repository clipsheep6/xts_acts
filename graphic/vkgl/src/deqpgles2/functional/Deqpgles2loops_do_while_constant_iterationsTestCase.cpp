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

#define VkglTestCase_003727_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003727_2 "e_constant_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003727, VkglTestCase_003727_1, VkglTestCase_003727_2);

#define VkglTestCase_003728_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003728_2 "_constant_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003728, VkglTestCase_003728_1, VkglTestCase_003728_2);

#define VkglTestCase_003729_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003729_2 "_constant_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003729, VkglTestCase_003729_1, VkglTestCase_003729_2);

#define VkglTestCase_003730_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003730_2 "constant_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003730, VkglTestCase_003730_1, VkglTestCase_003730_2);

#define VkglTestCase_003731_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003731_2 "_constant_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003731, VkglTestCase_003731_1, VkglTestCase_003731_2);

#define VkglTestCase_003732_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003732_2 "constant_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003732, VkglTestCase_003732_1, VkglTestCase_003732_2);

#define VkglTestCase_003733_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003733_2 "constant_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003733, VkglTestCase_003733_1, VkglTestCase_003733_2);

#define VkglTestCase_003734_1 "dEQP-GLES2.functional.shaders.loops.do_while_c"
#define VkglTestCase_003734_2 "onstant_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003734, VkglTestCase_003734_1, VkglTestCase_003734_2);

#define VkglTestCase_003735_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003735_2 "e_constant_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003735, VkglTestCase_003735_1, VkglTestCase_003735_2);

#define VkglTestCase_003736_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003736_2 "_constant_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003736, VkglTestCase_003736_1, VkglTestCase_003736_2);

#define VkglTestCase_003737_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003737_2 "_constant_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003737, VkglTestCase_003737_1, VkglTestCase_003737_2);

#define VkglTestCase_003738_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003738_2 "constant_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003738, VkglTestCase_003738_1, VkglTestCase_003738_2);

#define VkglTestCase_003739_1 "dEQP-GLES2.functional.shaders.loops.do_wh"
#define VkglTestCase_003739_2 "ile_constant_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003739, VkglTestCase_003739_1, VkglTestCase_003739_2);

#define VkglTestCase_003740_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003740_2 "le_constant_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003740, VkglTestCase_003740_1, VkglTestCase_003740_2);

#define VkglTestCase_003741_1 "dEQP-GLES2.functional.shaders.loops.do_while_constant_i"
#define VkglTestCase_003741_2 "terations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003741, VkglTestCase_003741_1, VkglTestCase_003741_2);

#define VkglTestCase_003742_1 "dEQP-GLES2.functional.shaders.loops.do_while_constant_it"
#define VkglTestCase_003742_2 "erations.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003742, VkglTestCase_003742_1, VkglTestCase_003742_2);

#define VkglTestCase_003743_1 "dEQP-GLES2.functional.shaders.loops.do_while_constant_i"
#define VkglTestCase_003743_2 "terations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003743, VkglTestCase_003743_1, VkglTestCase_003743_2);

#define VkglTestCase_003744_1 "dEQP-GLES2.functional.shaders.loops.do_while_constant_it"
#define VkglTestCase_003744_2 "erations.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003744, VkglTestCase_003744_1, VkglTestCase_003744_2);

#define VkglTestCase_003745_1 "dEQP-GLES2.functional.shaders.loops.do_while_consta"
#define VkglTestCase_003745_2 "nt_iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003745, VkglTestCase_003745_1, VkglTestCase_003745_2);

#define VkglTestCase_003746_1 "dEQP-GLES2.functional.shaders.loops.do_while_constan"
#define VkglTestCase_003746_2 "t_iterations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003746, VkglTestCase_003746_1, VkglTestCase_003746_2);

#define VkglTestCase_003747_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003747_2 "_constant_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003747, VkglTestCase_003747_1, VkglTestCase_003747_2);

#define VkglTestCase_003748_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003748_2 "constant_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003748, VkglTestCase_003748_1, VkglTestCase_003748_2);

#define VkglTestCase_003749_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003749_2 "constant_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003749, VkglTestCase_003749_1, VkglTestCase_003749_2);

#define VkglTestCase_003750_1 "dEQP-GLES2.functional.shaders.loops.do_while_c"
#define VkglTestCase_003750_2 "onstant_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003750, VkglTestCase_003750_1, VkglTestCase_003750_2);

#define VkglTestCase_003751_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003751_2 "constant_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003751, VkglTestCase_003751_1, VkglTestCase_003751_2);

#define VkglTestCase_003752_1 "dEQP-GLES2.functional.shaders.loops.do_while_c"
#define VkglTestCase_003752_2 "onstant_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003752, VkglTestCase_003752_1, VkglTestCase_003752_2);

#define VkglTestCase_003753_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003753_2 "_constant_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003753, VkglTestCase_003753_1, VkglTestCase_003753_2);

#define VkglTestCase_003754_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003754_2 "constant_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003754, VkglTestCase_003754_1, VkglTestCase_003754_2);

#define VkglTestCase_003755_1 "dEQP-GLES2.functional.shaders.loops.do_while_co"
#define VkglTestCase_003755_2 "nstant_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003755, VkglTestCase_003755_1, VkglTestCase_003755_2);

#define VkglTestCase_003756_1 "dEQP-GLES2.functional.shaders.loops.do_while_con"
#define VkglTestCase_003756_2 "stant_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003756, VkglTestCase_003756_1, VkglTestCase_003756_2);

#define VkglTestCase_003757_1 "dEQP-GLES2.functional.shaders.loops.do_while_c"
#define VkglTestCase_003757_2 "onstant_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003757, VkglTestCase_003757_1, VkglTestCase_003757_2);

#define VkglTestCase_003758_1 "dEQP-GLES2.functional.shaders.loops.do_while_co"
#define VkglTestCase_003758_2 "nstant_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003758, VkglTestCase_003758_1, VkglTestCase_003758_2);

#define VkglTestCase_003759_1 "dEQP-GLES2.functional.shaders.loops.do_while_co"
#define VkglTestCase_003759_2 "nstant_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003759, VkglTestCase_003759_1, VkglTestCase_003759_2);

#define VkglTestCase_003760_1 "dEQP-GLES2.functional.shaders.loops.do_while_con"
#define VkglTestCase_003760_2 "stant_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003760, VkglTestCase_003760_1, VkglTestCase_003760_2);

#define VkglTestCase_003761_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003761_2 "le_constant_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003761, VkglTestCase_003761_1, VkglTestCase_003761_2);

#define VkglTestCase_003762_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003762_2 "e_constant_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003762, VkglTestCase_003762_1, VkglTestCase_003762_2);

#define VkglTestCase_003763_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003763_2 "e_constant_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003763, VkglTestCase_003763_1, VkglTestCase_003763_2);

#define VkglTestCase_003764_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003764_2 "_constant_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003764, VkglTestCase_003764_1, VkglTestCase_003764_2);

#define VkglTestCase_003765_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003765_2 "_constant_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003765, VkglTestCase_003765_1, VkglTestCase_003765_2);

#define VkglTestCase_003766_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003766_2 "constant_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003766, VkglTestCase_003766_1, VkglTestCase_003766_2);

#define VkglTestCase_003767_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003767_2 "constant_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003767, VkglTestCase_003767_1, VkglTestCase_003767_2);

#define VkglTestCase_003768_1 "dEQP-GLES2.functional.shaders.loops.do_while_c"
#define VkglTestCase_003768_2 "onstant_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003768, VkglTestCase_003768_1, VkglTestCase_003768_2);

#define VkglTestCase_003769_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003769_2 "le_constant_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003769, VkglTestCase_003769_1, VkglTestCase_003769_2);

#define VkglTestCase_003770_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003770_2 "e_constant_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003770, VkglTestCase_003770_1, VkglTestCase_003770_2);

#define VkglTestCase_003771_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003771_2 "e_constant_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003771, VkglTestCase_003771_1, VkglTestCase_003771_2);

#define VkglTestCase_003772_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003772_2 "_constant_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003772, VkglTestCase_003772_1, VkglTestCase_003772_2);

#define VkglTestCase_003773_1 "dEQP-GLES2.functional.shaders.loops.do_while_c"
#define VkglTestCase_003773_2 "onstant_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003773, VkglTestCase_003773_1, VkglTestCase_003773_2);

#define VkglTestCase_003774_1 "dEQP-GLES2.functional.shaders.loops.do_while_co"
#define VkglTestCase_003774_2 "nstant_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003774, VkglTestCase_003774_1, VkglTestCase_003774_2);

#define VkglTestCase_003775_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003775_2 "e_constant_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003775, VkglTestCase_003775_1, VkglTestCase_003775_2);

#define VkglTestCase_003776_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003776_2 "_constant_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003776, VkglTestCase_003776_1, VkglTestCase_003776_2);

#define VkglTestCase_003777_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003777_2 "e_constant_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003777, VkglTestCase_003777_1, VkglTestCase_003777_2);

#define VkglTestCase_003778_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003778_2 "_constant_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003778, VkglTestCase_003778_1, VkglTestCase_003778_2);

#define VkglTestCase_003779_1 "dEQP-GLES2.functional.shaders.loops.do_w"
#define VkglTestCase_003779_2 "hile_constant_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003779, VkglTestCase_003779_1, VkglTestCase_003779_2);

#define VkglTestCase_003780_1 "dEQP-GLES2.functional.shaders.loops.do_wh"
#define VkglTestCase_003780_2 "ile_constant_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003780, VkglTestCase_003780_1, VkglTestCase_003780_2);

#define VkglTestCase_003781_1 "dEQP-GLES2.functional.shaders.loops.do_"
#define VkglTestCase_003781_2 "while_constant_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003781, VkglTestCase_003781_1, VkglTestCase_003781_2);

#define VkglTestCase_003782_1 "dEQP-GLES2.functional.shaders.loops.do_w"
#define VkglTestCase_003782_2 "hile_constant_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003782, VkglTestCase_003782_1, VkglTestCase_003782_2);

#define VkglTestCase_003783_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003783_2 "e_constant_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003783, VkglTestCase_003783_1, VkglTestCase_003783_2);

#define VkglTestCase_003784_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003784_2 "_constant_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003784, VkglTestCase_003784_1, VkglTestCase_003784_2);

#define VkglTestCase_003785_1 "dEQP-GLES2.functional.shaders.loops.do_while_con"
#define VkglTestCase_003785_2 "stant_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003785, VkglTestCase_003785_1, VkglTestCase_003785_2);

#define VkglTestCase_003786_1 "dEQP-GLES2.functional.shaders.loops.do_while_cons"
#define VkglTestCase_003786_2 "tant_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003786, VkglTestCase_003786_1, VkglTestCase_003786_2);

#define VkglTestCase_003787_1 "dEQP-GLES2.functional.shaders.loops.do_while_con"
#define VkglTestCase_003787_2 "stant_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003787, VkglTestCase_003787_1, VkglTestCase_003787_2);

#define VkglTestCase_003788_1 "dEQP-GLES2.functional.shaders.loops.do_while_cons"
#define VkglTestCase_003788_2 "tant_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003788, VkglTestCase_003788_1, VkglTestCase_003788_2);

#define VkglTestCase_003789_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003789_2 "_constant_iterations.conditional_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003789, VkglTestCase_003789_1, VkglTestCase_003789_2);

#define VkglTestCase_003790_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003790_2 "constant_iterations.conditional_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003790, VkglTestCase_003790_1, VkglTestCase_003790_2);

#define VkglTestCase_003791_1 "dEQP-GLES2.functional.shaders.loops.do_while_c"
#define VkglTestCase_003791_2 "onstant_iterations.function_call_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003791, VkglTestCase_003791_1, VkglTestCase_003791_2);

#define VkglTestCase_003792_1 "dEQP-GLES2.functional.shaders.loops.do_while_co"
#define VkglTestCase_003792_2 "nstant_iterations.function_call_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003792, VkglTestCase_003792_1, VkglTestCase_003792_2);

#define VkglTestCase_003793_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003793_2 "constant_iterations.function_call_inout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003793, VkglTestCase_003793_1, VkglTestCase_003793_2);

#define VkglTestCase_003794_1 "dEQP-GLES2.functional.shaders.loops.do_while_c"
#define VkglTestCase_003794_2 "onstant_iterations.function_call_inout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003794, VkglTestCase_003794_1, VkglTestCase_003794_2);
