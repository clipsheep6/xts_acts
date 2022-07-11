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
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000728_1 "dEQP-GLES2.functional.s"
#define VkglTestCase_000728_2 "haders.linkage.varying_1"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000728, VkglTestCase_000728_1, VkglTestCase_000728_2);

#define VkglTestCase_000729_1 "dEQP-GLES2.functional.s"
#define VkglTestCase_000729_2 "haders.linkage.varying_2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000729, VkglTestCase_000729_1, VkglTestCase_000729_2);

#define VkglTestCase_000730_1 "dEQP-GLES2.functional.s"
#define VkglTestCase_000730_2 "haders.linkage.varying_3"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000730, VkglTestCase_000730_1, VkglTestCase_000730_2);

#define VkglTestCase_000731_1 "dEQP-GLES2.functional.s"
#define VkglTestCase_000731_2 "haders.linkage.varying_4"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000731, VkglTestCase_000731_1, VkglTestCase_000731_2);

#define VkglTestCase_000732_1 "dEQP-GLES2.functional.s"
#define VkglTestCase_000732_2 "haders.linkage.varying_5"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000732, VkglTestCase_000732_1, VkglTestCase_000732_2);

#define VkglTestCase_000733_1 "dEQP-GLES2.functional.s"
#define VkglTestCase_000733_2 "haders.linkage.varying_6"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000733, VkglTestCase_000733_1, VkglTestCase_000733_2);

#define VkglTestCase_000734_1 "dEQP-GLES2.functional.s"
#define VkglTestCase_000734_2 "haders.linkage.varying_7"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000734, VkglTestCase_000734_1, VkglTestCase_000734_2);

#define VkglTestCase_000735_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_000735_2 "s.linkage.varying_type_float"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000735, VkglTestCase_000735_1, VkglTestCase_000735_2);

#define VkglTestCase_000736_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000736_2 "rs.linkage.varying_type_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000736, VkglTestCase_000736_1, VkglTestCase_000736_2);

#define VkglTestCase_000737_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000737_2 "rs.linkage.varying_type_vec3"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000737, VkglTestCase_000737_1, VkglTestCase_000737_2);

#define VkglTestCase_000738_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000738_2 "rs.linkage.varying_type_vec4"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000738, VkglTestCase_000738_1, VkglTestCase_000738_2);

#define VkglTestCase_000739_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000739_2 "rs.linkage.varying_type_mat2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000739, VkglTestCase_000739_1, VkglTestCase_000739_2);

#define VkglTestCase_000740_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000740_2 "rs.linkage.varying_type_mat3"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000740, VkglTestCase_000740_1, VkglTestCase_000740_2);

#define VkglTestCase_000741_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_000741_2 "rs.linkage.varying_type_mat4"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000741, VkglTestCase_000741_1, VkglTestCase_000741_2);

#define VkglTestCase_000742_1 "dEQP-GLES2.functional.shaders.lin"
#define VkglTestCase_000742_2 "kage.varying_differing_precision_1"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000742, VkglTestCase_000742_1, VkglTestCase_000742_2);

#define VkglTestCase_000743_1 "dEQP-GLES2.functional.shaders.lin"
#define VkglTestCase_000743_2 "kage.varying_differing_precision_2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000743, VkglTestCase_000743_1, VkglTestCase_000743_2);

#define VkglTestCase_000744_1 "dEQP-GLES2.functional.shaders.lin"
#define VkglTestCase_000744_2 "kage.varying_differing_precision_3"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000744, VkglTestCase_000744_1, VkglTestCase_000744_2);

#define VkglTestCase_000745_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_000745_2 "linkage.varying_type_mismatch_2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000745, VkglTestCase_000745_1, VkglTestCase_000745_2);

#define VkglTestCase_000746_1 "dEQP-GLES2.functional.shaders.l"
#define VkglTestCase_000746_2 "inkage.invalid_varying_type_int"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000746, VkglTestCase_000746_1, VkglTestCase_000746_2);

#define VkglTestCase_000747_1 "dEQP-GLES2.functional.shaders.l"
#define VkglTestCase_000747_2 "inkage.invalid_varying_type_bool"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000747, VkglTestCase_000747_1, VkglTestCase_000747_2);

#define VkglTestCase_000748_1 "dEQP-GLES2.functional.shaders.li"
#define VkglTestCase_000748_2 "nkage.invalid_varying_type_struct"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000748, VkglTestCase_000748_1, VkglTestCase_000748_2);

#define VkglTestCase_000749_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_000749_2 "s.linkage.varying_readback_1"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000749, VkglTestCase_000749_1, VkglTestCase_000749_2);

#define VkglTestCase_000750_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_000750_2 "s.linkage.varying_writeback_1"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000750, VkglTestCase_000750_1, VkglTestCase_000750_2);

#define VkglTestCase_000751_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_000751_2 "ers.linkage.uniform_struct"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000751, VkglTestCase_000751_1, VkglTestCase_000751_2);

#define VkglTestCase_000752_1 "dEQP-GLES2.functional.shaders.li"
#define VkglTestCase_000752_2 "nkage.uniform_struct_vertex_only"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000752, VkglTestCase_000752_1, VkglTestCase_000752_2);

#define VkglTestCase_000753_1 "dEQP-GLES2.functional.shaders.lin"
#define VkglTestCase_000753_2 "kage.uniform_struct_fragment_only"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000753, VkglTestCase_000753_1, VkglTestCase_000753_2);

#define VkglTestCase_000754_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_000754_2 "linkage.uniform_struct_partial"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000754, VkglTestCase_000754_1, VkglTestCase_000754_2);

#define VkglTestCase_000755_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_000755_2 "s.linkage.uniform_struct_vec4"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000755, VkglTestCase_000755_1, VkglTestCase_000755_2);

#define VkglTestCase_000756_1 "dEQP-GLES2.functional.shaders.link"
#define VkglTestCase_000756_2 "age.uniform_struct_vertex_only_vec4"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000756, VkglTestCase_000756_1, VkglTestCase_000756_2);

#define VkglTestCase_000757_1 "dEQP-GLES2.functional.shaders.linka"
#define VkglTestCase_000757_2 "ge.uniform_struct_fragment_only_vec4"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000757, VkglTestCase_000757_1, VkglTestCase_000757_2);

#define VkglTestCase_000758_1 "dEQP-GLES2.functional.shaders.li"
#define VkglTestCase_000758_2 "nkage.uniform_struct_partial_vec4"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000758, VkglTestCase_000758_1, VkglTestCase_000758_2);

#define VkglTestCase_000759_1 "dEQP-GLES2.functional.shaders.l"
#define VkglTestCase_000759_2 "inkage.uniform_struct_vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000759, VkglTestCase_000759_1, VkglTestCase_000759_2);

#define VkglTestCase_000760_1 "dEQP-GLES2.functional.shaders.linkage"
#define VkglTestCase_000760_2 ".uniform_struct_vertex_only_vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000760, VkglTestCase_000760_1, VkglTestCase_000760_2);

#define VkglTestCase_000761_1 "dEQP-GLES2.functional.shaders.linkage."
#define VkglTestCase_000761_2 "uniform_struct_fragment_only_vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000761, VkglTestCase_000761_1, VkglTestCase_000761_2);

#define VkglTestCase_000762_1 "dEQP-GLES2.functional.shaders.linka"
#define VkglTestCase_000762_2 "ge.uniform_struct_partial_vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000762, VkglTestCase_000762_1, VkglTestCase_000762_2);

#define VkglTestCase_000763_1 "dEQP-GLES2.functional.shaders.l"
#define VkglTestCase_000763_2 "inkage.uniform_struct_vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000763, VkglTestCase_000763_1, VkglTestCase_000763_2);

#define VkglTestCase_000764_1 "dEQP-GLES2.functional.shaders.linkage"
#define VkglTestCase_000764_2 ".uniform_struct_vertex_only_vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000764, VkglTestCase_000764_1, VkglTestCase_000764_2);

#define VkglTestCase_000765_1 "dEQP-GLES2.functional.shaders.linkage."
#define VkglTestCase_000765_2 "uniform_struct_fragment_only_vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000765, VkglTestCase_000765_1, VkglTestCase_000765_2);

#define VkglTestCase_000766_1 "dEQP-GLES2.functional.shaders.linka"
#define VkglTestCase_000766_2 "ge.uniform_struct_partial_vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000766, VkglTestCase_000766_1, VkglTestCase_000766_2);

#define VkglTestCase_000767_1 "dEQP-GLES2.functional.shaders.linkag"
#define VkglTestCase_000767_2 "e.uniform_struct_partial_vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000767, VkglTestCase_000767_1, VkglTestCase_000767_2);

#define VkglTestCase_000768_1 "dEQP-GLES2.functional.shaders.linkage."
#define VkglTestCase_000768_2 "uniform_struct_partial_vec4_vec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000768, VkglTestCase_000768_1, VkglTestCase_000768_2);

#define VkglTestCase_000769_1 "dEQP-GLES2.functional.shaders.linka"
#define VkglTestCase_000769_2 "ge.uniform_struct_partial_vec2_vec3"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000769, VkglTestCase_000769_1, VkglTestCase_000769_2);

#define VkglTestCase_000770_1 "dEQP-GLES2.functional.shaders.link"
#define VkglTestCase_000770_2 "age.uniform_struct_partial_vec2_int"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000770, VkglTestCase_000770_1, VkglTestCase_000770_2);

#define VkglTestCase_000771_1 "dEQP-GLES2.functional.shaders.linka"
#define VkglTestCase_000771_2 "ge.uniform_struct_partial_int_float"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000771, VkglTestCase_000771_1, VkglTestCase_000771_2);

#define VkglTestCase_000772_1 "dEQP-GLES2.functional.shaders.linka"
#define VkglTestCase_000772_2 "ge.uniform_struct_partial_bvec2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000772, VkglTestCase_000772_1, VkglTestCase_000772_2);

#define VkglTestCase_000773_1 "dEQP-GLES2.functional.shaders.linka"
#define VkglTestCase_000773_2 "ge.uniform_struct_partial_ivec2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000773, VkglTestCase_000773_1, VkglTestCase_000773_2);

#define VkglTestCase_000774_1 "dEQP-GLES2.functional.shaders.linkag"
#define VkglTestCase_000774_2 "e.uniform_struct_partial_ivec2_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000774, VkglTestCase_000774_1, VkglTestCase_000774_2);

#define VkglTestCase_000775_1 "dEQP-GLES2.functional.shaders.li"
#define VkglTestCase_000775_2 "nkage.uniform_struct_use_case_rip"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000775, VkglTestCase_000775_1, VkglTestCase_000775_2);

#define VkglTestCase_000776_1 "dEQP-GLES2.functional.shaders.linkage."
#define VkglTestCase_000776_2 "uniform_struct_use_case_rip_sans_highp"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000776, VkglTestCase_000776_1, VkglTestCase_000776_2);
