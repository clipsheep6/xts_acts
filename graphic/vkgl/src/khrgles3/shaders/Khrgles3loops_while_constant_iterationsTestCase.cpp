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

#define VkglTestCase_000512_1 "KHR-GLES3.shaders.loops.while_const"
#define VkglTestCase_000512_2 "ant_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000512, VkglTestCase_000512_1, VkglTestCase_000512_2);

#define VkglTestCase_000513_1 "KHR-GLES3.shaders.loops.while_consta"
#define VkglTestCase_000513_2 "nt_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000513, VkglTestCase_000513_1, VkglTestCase_000513_2);

#define VkglTestCase_000514_1 "KHR-GLES3.shaders.loops.while_constan"
#define VkglTestCase_000514_2 "t_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000514, VkglTestCase_000514_1, VkglTestCase_000514_2);

#define VkglTestCase_000515_1 "KHR-GLES3.shaders.loops.while_constant"
#define VkglTestCase_000515_2 "_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000515, VkglTestCase_000515_1, VkglTestCase_000515_2);

#define VkglTestCase_000516_1 "KHR-GLES3.shaders.loops.while_constant"
#define VkglTestCase_000516_2 "_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000516, VkglTestCase_000516_1, VkglTestCase_000516_2);

#define VkglTestCase_000517_1 "KHR-GLES3.shaders.loops.while_constant_"
#define VkglTestCase_000517_2 "iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000517, VkglTestCase_000517_1, VkglTestCase_000517_2);

#define VkglTestCase_000518_1 "KHR-GLES3.shaders.loops.while_consta"
#define VkglTestCase_000518_2 "nt_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000518, VkglTestCase_000518_1, VkglTestCase_000518_2);

#define VkglTestCase_000519_1 "KHR-GLES3.shaders.loops.while_constan"
#define VkglTestCase_000519_2 "t_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000519, VkglTestCase_000519_1, VkglTestCase_000519_2);

#define VkglTestCase_000520_1 "KHR-GLES3.shaders.loops.while_constan"
#define VkglTestCase_000520_2 "t_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000520, VkglTestCase_000520_1, VkglTestCase_000520_2);

#define VkglTestCase_000521_1 "KHR-GLES3.shaders.loops.while_constant"
#define VkglTestCase_000521_2 "_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000521, VkglTestCase_000521_1, VkglTestCase_000521_2);

#define VkglTestCase_000522_1 "KHR-GLES3.shaders.loops.while_con"
#define VkglTestCase_000522_2 "stant_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000522, VkglTestCase_000522_1, VkglTestCase_000522_2);

#define VkglTestCase_000523_1 "KHR-GLES3.shaders.loops.while_cons"
#define VkglTestCase_000523_2 "tant_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000523, VkglTestCase_000523_1, VkglTestCase_000523_2);

#define VkglTestCase_000524_1 "KHR-GLES3.shaders.loops.while_constant_iteration"
#define VkglTestCase_000524_2 "s.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000524, VkglTestCase_000524_1, VkglTestCase_000524_2);

#define VkglTestCase_000525_1 "KHR-GLES3.shaders.loops.while_constant_iterations"
#define VkglTestCase_000525_2 ".infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000525, VkglTestCase_000525_1, VkglTestCase_000525_2);

#define VkglTestCase_000526_1 "KHR-GLES3.shaders.loops.while_constant_iteratio"
#define VkglTestCase_000526_2 "ns.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000526, VkglTestCase_000526_1, VkglTestCase_000526_2);

#define VkglTestCase_000527_1 "KHR-GLES3.shaders.loops.while_constant_iteration"
#define VkglTestCase_000527_2 "s.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000527, VkglTestCase_000527_1, VkglTestCase_000527_2);

#define VkglTestCase_000528_1 "KHR-GLES3.shaders.loops.while_constant_itera"
#define VkglTestCase_000528_2 "tions.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000528, VkglTestCase_000528_1, VkglTestCase_000528_2);

#define VkglTestCase_000529_1 "KHR-GLES3.shaders.loops.while_constant_iterat"
#define VkglTestCase_000529_2 "ions.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000529, VkglTestCase_000529_1, VkglTestCase_000529_2);

#define VkglTestCase_000530_1 "KHR-GLES3.shaders.loops.while_consta"
#define VkglTestCase_000530_2 "nt_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000530, VkglTestCase_000530_1, VkglTestCase_000530_2);

#define VkglTestCase_000531_1 "KHR-GLES3.shaders.loops.while_constan"
#define VkglTestCase_000531_2 "t_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000531, VkglTestCase_000531_1, VkglTestCase_000531_2);

#define VkglTestCase_000532_1 "KHR-GLES3.shaders.loops.while_constan"
#define VkglTestCase_000532_2 "t_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000532, VkglTestCase_000532_1, VkglTestCase_000532_2);

#define VkglTestCase_000533_1 "KHR-GLES3.shaders.loops.while_constant"
#define VkglTestCase_000533_2 "_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000533, VkglTestCase_000533_1, VkglTestCase_000533_2);

#define VkglTestCase_000534_1 "KHR-GLES3.shaders.loops.while_constan"
#define VkglTestCase_000534_2 "t_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000534, VkglTestCase_000534_1, VkglTestCase_000534_2);

#define VkglTestCase_000535_1 "KHR-GLES3.shaders.loops.while_constant"
#define VkglTestCase_000535_2 "_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000535, VkglTestCase_000535_1, VkglTestCase_000535_2);

#define VkglTestCase_000536_1 "KHR-GLES3.shaders.loops.while_const"
#define VkglTestCase_000536_2 "ant_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000536, VkglTestCase_000536_1, VkglTestCase_000536_2);

#define VkglTestCase_000537_1 "KHR-GLES3.shaders.loops.while_consta"
#define VkglTestCase_000537_2 "nt_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000537, VkglTestCase_000537_1, VkglTestCase_000537_2);

#define VkglTestCase_000538_1 "KHR-GLES3.shaders.loops.while_consta"
#define VkglTestCase_000538_2 "nt_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000538, VkglTestCase_000538_1, VkglTestCase_000538_2);

#define VkglTestCase_000539_1 "KHR-GLES3.shaders.loops.while_constan"
#define VkglTestCase_000539_2 "t_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000539, VkglTestCase_000539_1, VkglTestCase_000539_2);

#define VkglTestCase_000540_1 "KHR-GLES3.shaders.loops.while_constant_"
#define VkglTestCase_000540_2 "iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000540, VkglTestCase_000540_1, VkglTestCase_000540_2);

#define VkglTestCase_000541_1 "KHR-GLES3.shaders.loops.while_constant_i"
#define VkglTestCase_000541_2 "terations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000541, VkglTestCase_000541_1, VkglTestCase_000541_2);

#define VkglTestCase_000542_1 "KHR-GLES3.shaders.loops.while_constant"
#define VkglTestCase_000542_2 "_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000542, VkglTestCase_000542_1, VkglTestCase_000542_2);

#define VkglTestCase_000543_1 "KHR-GLES3.shaders.loops.while_constant_"
#define VkglTestCase_000543_2 "iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000543, VkglTestCase_000543_1, VkglTestCase_000543_2);

#define VkglTestCase_000544_1 "KHR-GLES3.shaders.loops.while_constant_"
#define VkglTestCase_000544_2 "iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000544, VkglTestCase_000544_1, VkglTestCase_000544_2);

#define VkglTestCase_000545_1 "KHR-GLES3.shaders.loops.while_constant_i"
#define VkglTestCase_000545_2 "terations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000545, VkglTestCase_000545_1, VkglTestCase_000545_2);

#define VkglTestCase_000546_1 "KHR-GLES3.shaders.loops.while_const"
#define VkglTestCase_000546_2 "ant_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000546, VkglTestCase_000546_1, VkglTestCase_000546_2);

#define VkglTestCase_000547_1 "KHR-GLES3.shaders.loops.while_consta"
#define VkglTestCase_000547_2 "nt_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000547, VkglTestCase_000547_1, VkglTestCase_000547_2);

#define VkglTestCase_000548_1 "KHR-GLES3.shaders.loops.while_consta"
#define VkglTestCase_000548_2 "nt_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000548, VkglTestCase_000548_1, VkglTestCase_000548_2);

#define VkglTestCase_000549_1 "KHR-GLES3.shaders.loops.while_constan"
#define VkglTestCase_000549_2 "t_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000549, VkglTestCase_000549_1, VkglTestCase_000549_2);

#define VkglTestCase_000550_1 "KHR-GLES3.shaders.loops.while_constan"
#define VkglTestCase_000550_2 "t_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000550, VkglTestCase_000550_1, VkglTestCase_000550_2);

#define VkglTestCase_000551_1 "KHR-GLES3.shaders.loops.while_constant"
#define VkglTestCase_000551_2 "_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000551, VkglTestCase_000551_1, VkglTestCase_000551_2);

#define VkglTestCase_000552_1 "KHR-GLES3.shaders.loops.while_constant"
#define VkglTestCase_000552_2 "_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000552, VkglTestCase_000552_1, VkglTestCase_000552_2);

#define VkglTestCase_000553_1 "KHR-GLES3.shaders.loops.while_constant_"
#define VkglTestCase_000553_2 "iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000553, VkglTestCase_000553_1, VkglTestCase_000553_2);

#define VkglTestCase_000554_1 "KHR-GLES3.shaders.loops.while_const"
#define VkglTestCase_000554_2 "ant_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000554, VkglTestCase_000554_1, VkglTestCase_000554_2);

#define VkglTestCase_000555_1 "KHR-GLES3.shaders.loops.while_consta"
#define VkglTestCase_000555_2 "nt_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000555, VkglTestCase_000555_1, VkglTestCase_000555_2);

#define VkglTestCase_000556_1 "KHR-GLES3.shaders.loops.while_const"
#define VkglTestCase_000556_2 "ant_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000556, VkglTestCase_000556_1, VkglTestCase_000556_2);

#define VkglTestCase_000557_1 "KHR-GLES3.shaders.loops.while_consta"
#define VkglTestCase_000557_2 "nt_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000557, VkglTestCase_000557_1, VkglTestCase_000557_2);

#define VkglTestCase_000558_1 "KHR-GLES3.shaders.loops.while_constant"
#define VkglTestCase_000558_2 "_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000558, VkglTestCase_000558_1, VkglTestCase_000558_2);

#define VkglTestCase_000559_1 "KHR-GLES3.shaders.loops.while_constant_"
#define VkglTestCase_000559_2 "iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000559, VkglTestCase_000559_1, VkglTestCase_000559_2);

#define VkglTestCase_000560_1 "KHR-GLES3.shaders.loops.while_const"
#define VkglTestCase_000560_2 "ant_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000560, VkglTestCase_000560_1, VkglTestCase_000560_2);

#define VkglTestCase_000561_1 "KHR-GLES3.shaders.loops.while_consta"
#define VkglTestCase_000561_2 "nt_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000561, VkglTestCase_000561_1, VkglTestCase_000561_2);

#define VkglTestCase_000562_1 "KHR-GLES3.shaders.loops.while_const"
#define VkglTestCase_000562_2 "ant_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000562, VkglTestCase_000562_1, VkglTestCase_000562_2);

#define VkglTestCase_000563_1 "KHR-GLES3.shaders.loops.while_consta"
#define VkglTestCase_000563_2 "nt_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000563, VkglTestCase_000563_1, VkglTestCase_000563_2);

#define VkglTestCase_000564_1 "KHR-GLES3.shaders.loops.while_co"
#define VkglTestCase_000564_2 "nstant_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000564, VkglTestCase_000564_1, VkglTestCase_000564_2);

#define VkglTestCase_000565_1 "KHR-GLES3.shaders.loops.while_con"
#define VkglTestCase_000565_2 "stant_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000565, VkglTestCase_000565_1, VkglTestCase_000565_2);

#define VkglTestCase_000566_1 "KHR-GLES3.shaders.loops.while_c"
#define VkglTestCase_000566_2 "onstant_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000566, VkglTestCase_000566_1, VkglTestCase_000566_2);

#define VkglTestCase_000567_1 "KHR-GLES3.shaders.loops.while_co"
#define VkglTestCase_000567_2 "nstant_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000567, VkglTestCase_000567_1, VkglTestCase_000567_2);

#define VkglTestCase_000568_1 "KHR-GLES3.shaders.loops.while_consta"
#define VkglTestCase_000568_2 "nt_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000568, VkglTestCase_000568_1, VkglTestCase_000568_2);

#define VkglTestCase_000569_1 "KHR-GLES3.shaders.loops.while_constan"
#define VkglTestCase_000569_2 "t_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000569, VkglTestCase_000569_1, VkglTestCase_000569_2);

#define VkglTestCase_000570_1 "KHR-GLES3.shaders.loops.while_constant_i"
#define VkglTestCase_000570_2 "terations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000570, VkglTestCase_000570_1, VkglTestCase_000570_2);

#define VkglTestCase_000571_1 "KHR-GLES3.shaders.loops.while_constant_it"
#define VkglTestCase_000571_2 "erations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000571, VkglTestCase_000571_1, VkglTestCase_000571_2);

#define VkglTestCase_000572_1 "KHR-GLES3.shaders.loops.while_constant_i"
#define VkglTestCase_000572_2 "terations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000572, VkglTestCase_000572_1, VkglTestCase_000572_2);

#define VkglTestCase_000573_1 "KHR-GLES3.shaders.loops.while_constant_it"
#define VkglTestCase_000573_2 "erations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000573, VkglTestCase_000573_1, VkglTestCase_000573_2);
