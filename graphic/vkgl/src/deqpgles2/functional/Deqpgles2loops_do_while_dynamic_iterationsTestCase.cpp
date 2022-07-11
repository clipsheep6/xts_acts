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

#define VkglTestCase_003863_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003863_2 "le_dynamic_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003863, VkglTestCase_003863_1, VkglTestCase_003863_2);

#define VkglTestCase_003864_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003864_2 "e_dynamic_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003864, VkglTestCase_003864_1, VkglTestCase_003864_2);

#define VkglTestCase_003865_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003865_2 "e_dynamic_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003865, VkglTestCase_003865_1, VkglTestCase_003865_2);

#define VkglTestCase_003866_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003866_2 "_dynamic_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003866, VkglTestCase_003866_1, VkglTestCase_003866_2);

#define VkglTestCase_003867_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003867_2 "_dynamic_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003867, VkglTestCase_003867_1, VkglTestCase_003867_2);

#define VkglTestCase_003868_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003868_2 "dynamic_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003868, VkglTestCase_003868_1, VkglTestCase_003868_2);

#define VkglTestCase_003869_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003869_2 "dynamic_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003869, VkglTestCase_003869_1, VkglTestCase_003869_2);

#define VkglTestCase_003870_1 "dEQP-GLES2.functional.shaders.loops.do_while_d"
#define VkglTestCase_003870_2 "ynamic_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003870, VkglTestCase_003870_1, VkglTestCase_003870_2);

#define VkglTestCase_003871_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003871_2 "e_dynamic_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003871, VkglTestCase_003871_1, VkglTestCase_003871_2);

#define VkglTestCase_003872_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003872_2 "_dynamic_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003872, VkglTestCase_003872_1, VkglTestCase_003872_2);

#define VkglTestCase_003873_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003873_2 "_dynamic_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003873, VkglTestCase_003873_1, VkglTestCase_003873_2);

#define VkglTestCase_003874_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003874_2 "dynamic_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003874, VkglTestCase_003874_1, VkglTestCase_003874_2);

#define VkglTestCase_003875_1 "dEQP-GLES2.functional.shaders.loops.do_w"
#define VkglTestCase_003875_2 "hile_dynamic_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003875, VkglTestCase_003875_1, VkglTestCase_003875_2);

#define VkglTestCase_003876_1 "dEQP-GLES2.functional.shaders.loops.do_wh"
#define VkglTestCase_003876_2 "ile_dynamic_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003876, VkglTestCase_003876_1, VkglTestCase_003876_2);

#define VkglTestCase_003877_1 "dEQP-GLES2.functional.shaders.loops.do_while_dynamic_it"
#define VkglTestCase_003877_2 "erations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003877, VkglTestCase_003877_1, VkglTestCase_003877_2);

#define VkglTestCase_003878_1 "dEQP-GLES2.functional.shaders.loops.do_while_dynamic_ite"
#define VkglTestCase_003878_2 "rations.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003878, VkglTestCase_003878_1, VkglTestCase_003878_2);

#define VkglTestCase_003879_1 "dEQP-GLES2.functional.shaders.loops.do_while_dynamic_i"
#define VkglTestCase_003879_2 "terations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003879, VkglTestCase_003879_1, VkglTestCase_003879_2);

#define VkglTestCase_003880_1 "dEQP-GLES2.functional.shaders.loops.do_while_dynamic_it"
#define VkglTestCase_003880_2 "erations.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003880, VkglTestCase_003880_1, VkglTestCase_003880_2);

#define VkglTestCase_003881_1 "dEQP-GLES2.functional.shaders.loops.do_while_dynami"
#define VkglTestCase_003881_2 "c_iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003881, VkglTestCase_003881_1, VkglTestCase_003881_2);

#define VkglTestCase_003882_1 "dEQP-GLES2.functional.shaders.loops.do_while_dynamic"
#define VkglTestCase_003882_2 "_iterations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003882, VkglTestCase_003882_1, VkglTestCase_003882_2);

#define VkglTestCase_003883_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003883_2 "e_dynamic_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003883, VkglTestCase_003883_1, VkglTestCase_003883_2);

#define VkglTestCase_003884_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003884_2 "_dynamic_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003884, VkglTestCase_003884_1, VkglTestCase_003884_2);

#define VkglTestCase_003885_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003885_2 "_dynamic_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003885, VkglTestCase_003885_1, VkglTestCase_003885_2);

#define VkglTestCase_003886_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003886_2 "dynamic_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003886, VkglTestCase_003886_1, VkglTestCase_003886_2);

#define VkglTestCase_003887_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003887_2 "_dynamic_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003887, VkglTestCase_003887_1, VkglTestCase_003887_2);

#define VkglTestCase_003888_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003888_2 "dynamic_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003888, VkglTestCase_003888_1, VkglTestCase_003888_2);

#define VkglTestCase_003889_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003889_2 "e_dynamic_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003889, VkglTestCase_003889_1, VkglTestCase_003889_2);

#define VkglTestCase_003890_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003890_2 "_dynamic_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003890, VkglTestCase_003890_1, VkglTestCase_003890_2);

#define VkglTestCase_003891_1 "dEQP-GLES2.functional.shaders.loops.do_while_d"
#define VkglTestCase_003891_2 "ynamic_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003891, VkglTestCase_003891_1, VkglTestCase_003891_2);

#define VkglTestCase_003892_1 "dEQP-GLES2.functional.shaders.loops.do_while_dy"
#define VkglTestCase_003892_2 "namic_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003892, VkglTestCase_003892_1, VkglTestCase_003892_2);

#define VkglTestCase_003893_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003893_2 "dynamic_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003893, VkglTestCase_003893_1, VkglTestCase_003893_2);

#define VkglTestCase_003894_1 "dEQP-GLES2.functional.shaders.loops.do_while_d"
#define VkglTestCase_003894_2 "ynamic_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003894, VkglTestCase_003894_1, VkglTestCase_003894_2);

#define VkglTestCase_003895_1 "dEQP-GLES2.functional.shaders.loops.do_while_d"
#define VkglTestCase_003895_2 "ynamic_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003895, VkglTestCase_003895_1, VkglTestCase_003895_2);

#define VkglTestCase_003896_1 "dEQP-GLES2.functional.shaders.loops.do_while_dy"
#define VkglTestCase_003896_2 "namic_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003896, VkglTestCase_003896_1, VkglTestCase_003896_2);

#define VkglTestCase_003897_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003897_2 "le_dynamic_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003897, VkglTestCase_003897_1, VkglTestCase_003897_2);

#define VkglTestCase_003898_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003898_2 "e_dynamic_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003898, VkglTestCase_003898_1, VkglTestCase_003898_2);

#define VkglTestCase_003899_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003899_2 "e_dynamic_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003899, VkglTestCase_003899_1, VkglTestCase_003899_2);

#define VkglTestCase_003900_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003900_2 "_dynamic_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003900, VkglTestCase_003900_1, VkglTestCase_003900_2);

#define VkglTestCase_003901_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003901_2 "_dynamic_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003901, VkglTestCase_003901_1, VkglTestCase_003901_2);

#define VkglTestCase_003902_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003902_2 "dynamic_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003902, VkglTestCase_003902_1, VkglTestCase_003902_2);

#define VkglTestCase_003903_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003903_2 "dynamic_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003903, VkglTestCase_003903_1, VkglTestCase_003903_2);

#define VkglTestCase_003904_1 "dEQP-GLES2.functional.shaders.loops.do_while_d"
#define VkglTestCase_003904_2 "ynamic_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003904, VkglTestCase_003904_1, VkglTestCase_003904_2);

#define VkglTestCase_003905_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003905_2 "le_dynamic_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003905, VkglTestCase_003905_1, VkglTestCase_003905_2);

#define VkglTestCase_003906_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003906_2 "e_dynamic_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003906, VkglTestCase_003906_1, VkglTestCase_003906_2);

#define VkglTestCase_003907_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003907_2 "le_dynamic_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003907, VkglTestCase_003907_1, VkglTestCase_003907_2);

#define VkglTestCase_003908_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003908_2 "e_dynamic_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003908, VkglTestCase_003908_1, VkglTestCase_003908_2);

#define VkglTestCase_003909_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003909_2 "dynamic_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003909, VkglTestCase_003909_1, VkglTestCase_003909_2);

#define VkglTestCase_003910_1 "dEQP-GLES2.functional.shaders.loops.do_while_d"
#define VkglTestCase_003910_2 "ynamic_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003910, VkglTestCase_003910_1, VkglTestCase_003910_2);

#define VkglTestCase_003911_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003911_2 "le_dynamic_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003911, VkglTestCase_003911_1, VkglTestCase_003911_2);

#define VkglTestCase_003912_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003912_2 "e_dynamic_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003912, VkglTestCase_003912_1, VkglTestCase_003912_2);

#define VkglTestCase_003913_1 "dEQP-GLES2.functional.shaders.loops.do_whi"
#define VkglTestCase_003913_2 "le_dynamic_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003913, VkglTestCase_003913_1, VkglTestCase_003913_2);

#define VkglTestCase_003914_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003914_2 "e_dynamic_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003914, VkglTestCase_003914_1, VkglTestCase_003914_2);

#define VkglTestCase_003915_1 "dEQP-GLES2.functional.shaders.loops.do_"
#define VkglTestCase_003915_2 "while_dynamic_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003915, VkglTestCase_003915_1, VkglTestCase_003915_2);

#define VkglTestCase_003916_1 "dEQP-GLES2.functional.shaders.loops.do_w"
#define VkglTestCase_003916_2 "hile_dynamic_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003916, VkglTestCase_003916_1, VkglTestCase_003916_2);

#define VkglTestCase_003917_1 "dEQP-GLES2.functional.shaders.loops.do"
#define VkglTestCase_003917_2 "_while_dynamic_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003917, VkglTestCase_003917_1, VkglTestCase_003917_2);

#define VkglTestCase_003918_1 "dEQP-GLES2.functional.shaders.loops.do_"
#define VkglTestCase_003918_2 "while_dynamic_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003918, VkglTestCase_003918_1, VkglTestCase_003918_2);

#define VkglTestCase_003919_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003919_2 "e_dynamic_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003919, VkglTestCase_003919_1, VkglTestCase_003919_2);

#define VkglTestCase_003920_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003920_2 "_dynamic_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003920, VkglTestCase_003920_1, VkglTestCase_003920_2);

#define VkglTestCase_003921_1 "dEQP-GLES2.functional.shaders.loops.do_while_dy"
#define VkglTestCase_003921_2 "namic_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003921, VkglTestCase_003921_1, VkglTestCase_003921_2);

#define VkglTestCase_003922_1 "dEQP-GLES2.functional.shaders.loops.do_while_dyn"
#define VkglTestCase_003922_2 "amic_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003922, VkglTestCase_003922_1, VkglTestCase_003922_2);

#define VkglTestCase_003923_1 "dEQP-GLES2.functional.shaders.loops.do_while_dy"
#define VkglTestCase_003923_2 "namic_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003923, VkglTestCase_003923_1, VkglTestCase_003923_2);

#define VkglTestCase_003924_1 "dEQP-GLES2.functional.shaders.loops.do_while_dyn"
#define VkglTestCase_003924_2 "amic_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003924, VkglTestCase_003924_1, VkglTestCase_003924_2);

#define VkglTestCase_003925_1 "dEQP-GLES2.functional.shaders.loops.do_whil"
#define VkglTestCase_003925_2 "e_dynamic_iterations.conditional_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003925, VkglTestCase_003925_1, VkglTestCase_003925_2);

#define VkglTestCase_003926_1 "dEQP-GLES2.functional.shaders.loops.do_while"
#define VkglTestCase_003926_2 "_dynamic_iterations.conditional_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003926, VkglTestCase_003926_1, VkglTestCase_003926_2);

#define VkglTestCase_003927_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003927_2 "dynamic_iterations.function_call_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003927, VkglTestCase_003927_1, VkglTestCase_003927_2);

#define VkglTestCase_003928_1 "dEQP-GLES2.functional.shaders.loops.do_while_d"
#define VkglTestCase_003928_2 "ynamic_iterations.function_call_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003928, VkglTestCase_003928_1, VkglTestCase_003928_2);

#define VkglTestCase_003929_1 "dEQP-GLES2.functional.shaders.loops.do_while_"
#define VkglTestCase_003929_2 "dynamic_iterations.function_call_inout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003929, VkglTestCase_003929_1, VkglTestCase_003929_2);

#define VkglTestCase_003930_1 "dEQP-GLES2.functional.shaders.loops.do_while_d"
#define VkglTestCase_003930_2 "ynamic_iterations.function_call_inout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003930, VkglTestCase_003930_1, VkglTestCase_003930_2);
