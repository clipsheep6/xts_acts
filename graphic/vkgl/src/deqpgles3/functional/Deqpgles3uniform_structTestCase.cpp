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
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001556_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001556_2 ".linkage.uniform.struct.basic"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001556, VkglTestCase_001556_1, VkglTestCase_001556_2);

#define VkglTestCase_001557_1 "dEQP-GLES3.functional.shaders.li"
#define VkglTestCase_001557_2 "nkage.uniform.struct.vertex_only"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001557, VkglTestCase_001557_1, VkglTestCase_001557_2);

#define VkglTestCase_001558_1 "dEQP-GLES3.functional.shaders.lin"
#define VkglTestCase_001558_2 "kage.uniform.struct.fragment_only"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001558, VkglTestCase_001558_1, VkglTestCase_001558_2);

#define VkglTestCase_001559_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001559_2 "linkage.uniform.struct.partial"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001559, VkglTestCase_001559_1, VkglTestCase_001559_2);

#define VkglTestCase_001560_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001560_2 "s.linkage.uniform.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001560, VkglTestCase_001560_1, VkglTestCase_001560_2);

#define VkglTestCase_001561_1 "dEQP-GLES3.functional.shaders.link"
#define VkglTestCase_001561_2 "age.uniform.struct.vertex_only_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001561, VkglTestCase_001561_1, VkglTestCase_001561_2);

#define VkglTestCase_001562_1 "dEQP-GLES3.functional.shaders.linka"
#define VkglTestCase_001562_2 "ge.uniform.struct.fragment_only_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001562, VkglTestCase_001562_1, VkglTestCase_001562_2);

#define VkglTestCase_001563_1 "dEQP-GLES3.functional.shaders.li"
#define VkglTestCase_001563_2 "nkage.uniform.struct.partial_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001563, VkglTestCase_001563_1, VkglTestCase_001563_2);

#define VkglTestCase_001564_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001564_2 "inkage.uniform.struct.vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001564, VkglTestCase_001564_1, VkglTestCase_001564_2);

#define VkglTestCase_001565_1 "dEQP-GLES3.functional.shaders.linkage"
#define VkglTestCase_001565_2 ".uniform.struct.vertex_only_vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001565, VkglTestCase_001565_1, VkglTestCase_001565_2);

#define VkglTestCase_001566_1 "dEQP-GLES3.functional.shaders.linkage."
#define VkglTestCase_001566_2 "uniform.struct.fragment_only_vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001566, VkglTestCase_001566_1, VkglTestCase_001566_2);

#define VkglTestCase_001567_1 "dEQP-GLES3.functional.shaders.linka"
#define VkglTestCase_001567_2 "ge.uniform.struct.partial_vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001567, VkglTestCase_001567_1, VkglTestCase_001567_2);

#define VkglTestCase_001568_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001568_2 "inkage.uniform.struct.vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001568, VkglTestCase_001568_1, VkglTestCase_001568_2);

#define VkglTestCase_001569_1 "dEQP-GLES3.functional.shaders.linkage"
#define VkglTestCase_001569_2 ".uniform.struct.vertex_only_vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001569, VkglTestCase_001569_1, VkglTestCase_001569_2);

#define VkglTestCase_001570_1 "dEQP-GLES3.functional.shaders.linkage."
#define VkglTestCase_001570_2 "uniform.struct.fragment_only_vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001570, VkglTestCase_001570_1, VkglTestCase_001570_2);

#define VkglTestCase_001571_1 "dEQP-GLES3.functional.shaders.linka"
#define VkglTestCase_001571_2 "ge.uniform.struct.partial_vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001571, VkglTestCase_001571_1, VkglTestCase_001571_2);

#define VkglTestCase_001572_1 "dEQP-GLES3.functional.shaders.linkag"
#define VkglTestCase_001572_2 "e.uniform.struct.partial_vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001572, VkglTestCase_001572_1, VkglTestCase_001572_2);

#define VkglTestCase_001573_1 "dEQP-GLES3.functional.shaders.linkage."
#define VkglTestCase_001573_2 "uniform.struct.partial_vec4_vec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001573, VkglTestCase_001573_1, VkglTestCase_001573_2);

#define VkglTestCase_001574_1 "dEQP-GLES3.functional.shaders.linka"
#define VkglTestCase_001574_2 "ge.uniform.struct.partial_vec2_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001574, VkglTestCase_001574_1, VkglTestCase_001574_2);

#define VkglTestCase_001575_1 "dEQP-GLES3.functional.shaders.link"
#define VkglTestCase_001575_2 "age.uniform.struct.partial_vec2_int"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001575, VkglTestCase_001575_1, VkglTestCase_001575_2);

#define VkglTestCase_001576_1 "dEQP-GLES3.functional.shaders.linka"
#define VkglTestCase_001576_2 "ge.uniform.struct.partial_int_float"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001576, VkglTestCase_001576_1, VkglTestCase_001576_2);

#define VkglTestCase_001577_1 "dEQP-GLES3.functional.shaders.linka"
#define VkglTestCase_001577_2 "ge.uniform.struct.partial_bvec2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001577, VkglTestCase_001577_1, VkglTestCase_001577_2);

#define VkglTestCase_001578_1 "dEQP-GLES3.functional.shaders.linka"
#define VkglTestCase_001578_2 "ge.uniform.struct.partial_ivec2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001578, VkglTestCase_001578_1, VkglTestCase_001578_2);

#define VkglTestCase_001579_1 "dEQP-GLES3.functional.shaders.linkag"
#define VkglTestCase_001579_2 "e.uniform.struct.partial_ivec2_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001579, VkglTestCase_001579_1, VkglTestCase_001579_2);

#define VkglTestCase_001580_1 "dEQP-GLES3.functional.shaders.link"
#define VkglTestCase_001580_2 "age.uniform.struct.type_conflict_1"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001580, VkglTestCase_001580_1, VkglTestCase_001580_2);

#define VkglTestCase_001581_1 "dEQP-GLES3.functional.shaders.link"
#define VkglTestCase_001581_2 "age.uniform.struct.type_conflict_2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001581, VkglTestCase_001581_1, VkglTestCase_001581_2);

#define VkglTestCase_001582_1 "dEQP-GLES3.functional.shaders.link"
#define VkglTestCase_001582_2 "age.uniform.struct.type_conflict_3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001582, VkglTestCase_001582_1, VkglTestCase_001582_2);

#define VkglTestCase_001583_1 "dEQP-GLES3.functional.shaders.linkag"
#define VkglTestCase_001583_2 "e.uniform.struct.precision_conflict_1"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001583, VkglTestCase_001583_1, VkglTestCase_001583_2);

#define VkglTestCase_001584_1 "dEQP-GLES3.functional.shaders.linkag"
#define VkglTestCase_001584_2 "e.uniform.struct.precision_conflict_2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001584, VkglTestCase_001584_1, VkglTestCase_001584_2);

#define VkglTestCase_001585_1 "dEQP-GLES3.functional.shaders.linkag"
#define VkglTestCase_001585_2 "e.uniform.struct.precision_conflict_3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001585, VkglTestCase_001585_1, VkglTestCase_001585_2);

#define VkglTestCase_001586_1 "dEQP-GLES3.functional.shaders.linkag"
#define VkglTestCase_001586_2 "e.uniform.struct.precision_conflict_4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001586, VkglTestCase_001586_1, VkglTestCase_001586_2);

#define VkglTestCase_001587_1 "dEQP-GLES3.functional.shaders.linka"
#define VkglTestCase_001587_2 "ge.uniform.struct.light_struct_highp"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001587, VkglTestCase_001587_1, VkglTestCase_001587_2);

#define VkglTestCase_001588_1 "dEQP-GLES3.functional.shaders.linkag"
#define VkglTestCase_001588_2 "e.uniform.struct.light_struct_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001588, VkglTestCase_001588_1, VkglTestCase_001588_2);
