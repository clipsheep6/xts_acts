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
#include "../ActsDeqpgles20005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004534_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004534_2 ".binary_operator.sub.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004534, VkglTestCase_004534_1, VkglTestCase_004534_2);

#define VkglTestCase_004535_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004535_2 "binary_operator.sub.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004535, VkglTestCase_004535_1, VkglTestCase_004535_2);

#define VkglTestCase_004536_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004536_2 "binary_operator.sub.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004536, VkglTestCase_004536_1, VkglTestCase_004536_2);

#define VkglTestCase_004537_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004537_2 "inary_operator.sub.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004537, VkglTestCase_004537_1, VkglTestCase_004537_2);

#define VkglTestCase_004538_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004538_2 ".binary_operator.sub.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004538, VkglTestCase_004538_1, VkglTestCase_004538_2);

#define VkglTestCase_004539_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004539_2 "binary_operator.sub.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004539, VkglTestCase_004539_1, VkglTestCase_004539_2);

#define VkglTestCase_004540_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004540_2 "r.binary_operator.sub.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004540, VkglTestCase_004540_1, VkglTestCase_004540_2);

#define VkglTestCase_004541_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004541_2 ".binary_operator.sub.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004541, VkglTestCase_004541_1, VkglTestCase_004541_2);

#define VkglTestCase_004542_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004542_2 "binary_operator.sub.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004542, VkglTestCase_004542_1, VkglTestCase_004542_2);

#define VkglTestCase_004543_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004543_2 "inary_operator.sub.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004543, VkglTestCase_004543_1, VkglTestCase_004543_2);

#define VkglTestCase_004544_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004544_2 ".binary_operator.sub.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004544, VkglTestCase_004544_1, VkglTestCase_004544_2);

#define VkglTestCase_004545_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004545_2 "binary_operator.sub.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004545, VkglTestCase_004545_1, VkglTestCase_004545_2);

#define VkglTestCase_004546_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004546_2 "r.binary_operator.sub.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004546, VkglTestCase_004546_1, VkglTestCase_004546_2);

#define VkglTestCase_004547_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004547_2 ".binary_operator.sub.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004547, VkglTestCase_004547_1, VkglTestCase_004547_2);

#define VkglTestCase_004548_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004548_2 "binary_operator.sub.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004548, VkglTestCase_004548_1, VkglTestCase_004548_2);

#define VkglTestCase_004549_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004549_2 "inary_operator.sub.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004549, VkglTestCase_004549_1, VkglTestCase_004549_2);

#define VkglTestCase_004550_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004550_2 ".binary_operator.sub.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004550, VkglTestCase_004550_1, VkglTestCase_004550_2);

#define VkglTestCase_004551_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004551_2 "binary_operator.sub.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004551, VkglTestCase_004551_1, VkglTestCase_004551_2);

#define VkglTestCase_004552_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004552_2 "r.binary_operator.sub.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004552, VkglTestCase_004552_1, VkglTestCase_004552_2);

#define VkglTestCase_004553_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004553_2 ".binary_operator.sub.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004553, VkglTestCase_004553_1, VkglTestCase_004553_2);

#define VkglTestCase_004554_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004554_2 "binary_operator.sub.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004554, VkglTestCase_004554_1, VkglTestCase_004554_2);

#define VkglTestCase_004555_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004555_2 "inary_operator.sub.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004555, VkglTestCase_004555_1, VkglTestCase_004555_2);

#define VkglTestCase_004556_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004556_2 ".binary_operator.sub.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004556, VkglTestCase_004556_1, VkglTestCase_004556_2);

#define VkglTestCase_004557_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004557_2 "binary_operator.sub.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004557, VkglTestCase_004557_1, VkglTestCase_004557_2);

#define VkglTestCase_004558_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004558_2 "r.binary_operator.sub.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004558, VkglTestCase_004558_1, VkglTestCase_004558_2);

#define VkglTestCase_004559_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004559_2 ".binary_operator.sub.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004559, VkglTestCase_004559_1, VkglTestCase_004559_2);

#define VkglTestCase_004560_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004560_2 ".binary_operator.sub.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004560, VkglTestCase_004560_1, VkglTestCase_004560_2);

#define VkglTestCase_004561_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004561_2 "binary_operator.sub.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004561, VkglTestCase_004561_1, VkglTestCase_004561_2);

#define VkglTestCase_004562_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004562_2 "r.binary_operator.sub.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004562, VkglTestCase_004562_1, VkglTestCase_004562_2);

#define VkglTestCase_004563_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004563_2 ".binary_operator.sub.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004563, VkglTestCase_004563_1, VkglTestCase_004563_2);

#define VkglTestCase_004564_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004564_2 ".binary_operator.sub.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004564, VkglTestCase_004564_1, VkglTestCase_004564_2);

#define VkglTestCase_004565_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004565_2 "binary_operator.sub.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004565, VkglTestCase_004565_1, VkglTestCase_004565_2);

#define VkglTestCase_004566_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004566_2 "binary_operator.sub.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004566, VkglTestCase_004566_1, VkglTestCase_004566_2);

#define VkglTestCase_004567_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004567_2 "inary_operator.sub.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004567, VkglTestCase_004567_1, VkglTestCase_004567_2);

#define VkglTestCase_004568_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004568_2 ".binary_operator.sub.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004568, VkglTestCase_004568_1, VkglTestCase_004568_2);

#define VkglTestCase_004569_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004569_2 "binary_operator.sub.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004569, VkglTestCase_004569_1, VkglTestCase_004569_2);

#define VkglTestCase_004570_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004570_2 ".binary_operator.sub.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004570, VkglTestCase_004570_1, VkglTestCase_004570_2);

#define VkglTestCase_004571_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004571_2 "binary_operator.sub.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004571, VkglTestCase_004571_1, VkglTestCase_004571_2);

#define VkglTestCase_004572_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004572_2 "binary_operator.sub.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004572, VkglTestCase_004572_1, VkglTestCase_004572_2);

#define VkglTestCase_004573_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004573_2 "inary_operator.sub.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004573, VkglTestCase_004573_1, VkglTestCase_004573_2);

#define VkglTestCase_004574_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004574_2 ".binary_operator.sub.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004574, VkglTestCase_004574_1, VkglTestCase_004574_2);

#define VkglTestCase_004575_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004575_2 "binary_operator.sub.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004575, VkglTestCase_004575_1, VkglTestCase_004575_2);

#define VkglTestCase_004576_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004576_2 ".binary_operator.sub.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004576, VkglTestCase_004576_1, VkglTestCase_004576_2);

#define VkglTestCase_004577_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004577_2 "binary_operator.sub.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004577, VkglTestCase_004577_1, VkglTestCase_004577_2);

#define VkglTestCase_004578_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004578_2 "binary_operator.sub.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004578, VkglTestCase_004578_1, VkglTestCase_004578_2);

#define VkglTestCase_004579_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004579_2 "inary_operator.sub.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004579, VkglTestCase_004579_1, VkglTestCase_004579_2);

#define VkglTestCase_004580_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004580_2 ".binary_operator.sub.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004580, VkglTestCase_004580_1, VkglTestCase_004580_2);

#define VkglTestCase_004581_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004581_2 "binary_operator.sub.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004581, VkglTestCase_004581_1, VkglTestCase_004581_2);

#define VkglTestCase_004582_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004582_2 "inary_operator.sub.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004582, VkglTestCase_004582_1, VkglTestCase_004582_2);

#define VkglTestCase_004583_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004583_2 "nary_operator.sub.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004583, VkglTestCase_004583_1, VkglTestCase_004583_2);

#define VkglTestCase_004584_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004584_2 "ary_operator.sub.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004584, VkglTestCase_004584_1, VkglTestCase_004584_2);

#define VkglTestCase_004585_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004585_2 "ry_operator.sub.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004585, VkglTestCase_004585_1, VkglTestCase_004585_2);

#define VkglTestCase_004586_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004586_2 "nary_operator.sub.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004586, VkglTestCase_004586_1, VkglTestCase_004586_2);

#define VkglTestCase_004587_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004587_2 "ary_operator.sub.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004587, VkglTestCase_004587_1, VkglTestCase_004587_2);

#define VkglTestCase_004588_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004588_2 "inary_operator.sub.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004588, VkglTestCase_004588_1, VkglTestCase_004588_2);

#define VkglTestCase_004589_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004589_2 "nary_operator.sub.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004589, VkglTestCase_004589_1, VkglTestCase_004589_2);

#define VkglTestCase_004590_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004590_2 "ary_operator.sub.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004590, VkglTestCase_004590_1, VkglTestCase_004590_2);

#define VkglTestCase_004591_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004591_2 "ry_operator.sub.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004591, VkglTestCase_004591_1, VkglTestCase_004591_2);

#define VkglTestCase_004592_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004592_2 "nary_operator.sub.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004592, VkglTestCase_004592_1, VkglTestCase_004592_2);

#define VkglTestCase_004593_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004593_2 "ary_operator.sub.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004593, VkglTestCase_004593_1, VkglTestCase_004593_2);

#define VkglTestCase_004594_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004594_2 "inary_operator.sub.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004594, VkglTestCase_004594_1, VkglTestCase_004594_2);

#define VkglTestCase_004595_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004595_2 "nary_operator.sub.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004595, VkglTestCase_004595_1, VkglTestCase_004595_2);

#define VkglTestCase_004596_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004596_2 "ary_operator.sub.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004596, VkglTestCase_004596_1, VkglTestCase_004596_2);

#define VkglTestCase_004597_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004597_2 "ry_operator.sub.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004597, VkglTestCase_004597_1, VkglTestCase_004597_2);

#define VkglTestCase_004598_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004598_2 "nary_operator.sub.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004598, VkglTestCase_004598_1, VkglTestCase_004598_2);

#define VkglTestCase_004599_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004599_2 "ary_operator.sub.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004599, VkglTestCase_004599_1, VkglTestCase_004599_2);

#define VkglTestCase_004600_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004600_2 "inary_operator.sub.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004600, VkglTestCase_004600_1, VkglTestCase_004600_2);

#define VkglTestCase_004601_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004601_2 "nary_operator.sub.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004601, VkglTestCase_004601_1, VkglTestCase_004601_2);

#define VkglTestCase_004602_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004602_2 "nary_operator.sub.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004602, VkglTestCase_004602_1, VkglTestCase_004602_2);

#define VkglTestCase_004603_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004603_2 "ary_operator.sub.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004603, VkglTestCase_004603_1, VkglTestCase_004603_2);

#define VkglTestCase_004604_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004604_2 "inary_operator.sub.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004604, VkglTestCase_004604_1, VkglTestCase_004604_2);

#define VkglTestCase_004605_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004605_2 "nary_operator.sub.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004605, VkglTestCase_004605_1, VkglTestCase_004605_2);

#define VkglTestCase_004606_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004606_2 "inary_operator.sub.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004606, VkglTestCase_004606_1, VkglTestCase_004606_2);

#define VkglTestCase_004607_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004607_2 "nary_operator.sub.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004607, VkglTestCase_004607_1, VkglTestCase_004607_2);

#define VkglTestCase_004608_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004608_2 "nary_operator.sub.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004608, VkglTestCase_004608_1, VkglTestCase_004608_2);

#define VkglTestCase_004609_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004609_2 "ary_operator.sub.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004609, VkglTestCase_004609_1, VkglTestCase_004609_2);

#define VkglTestCase_004610_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004610_2 "inary_operator.sub.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004610, VkglTestCase_004610_1, VkglTestCase_004610_2);

#define VkglTestCase_004611_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004611_2 "nary_operator.sub.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004611, VkglTestCase_004611_1, VkglTestCase_004611_2);

#define VkglTestCase_004612_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004612_2 "inary_operator.sub.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004612, VkglTestCase_004612_1, VkglTestCase_004612_2);

#define VkglTestCase_004613_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004613_2 "nary_operator.sub.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004613, VkglTestCase_004613_1, VkglTestCase_004613_2);

#define VkglTestCase_004614_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004614_2 "nary_operator.sub.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004614, VkglTestCase_004614_1, VkglTestCase_004614_2);

#define VkglTestCase_004615_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004615_2 "ary_operator.sub.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004615, VkglTestCase_004615_1, VkglTestCase_004615_2);

#define VkglTestCase_004616_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004616_2 "inary_operator.sub.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004616, VkglTestCase_004616_1, VkglTestCase_004616_2);

#define VkglTestCase_004617_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004617_2 "nary_operator.sub.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004617, VkglTestCase_004617_1, VkglTestCase_004617_2);

#define VkglTestCase_004618_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004618_2 "inary_operator.sub.lowp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004618, VkglTestCase_004618_1, VkglTestCase_004618_2);

#define VkglTestCase_004619_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004619_2 "nary_operator.sub.lowp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004619, VkglTestCase_004619_1, VkglTestCase_004619_2);

#define VkglTestCase_004620_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004620_2 "ary_operator.sub.mediump_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004620, VkglTestCase_004620_1, VkglTestCase_004620_2);

#define VkglTestCase_004621_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004621_2 "ry_operator.sub.mediump_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004621, VkglTestCase_004621_1, VkglTestCase_004621_2);

#define VkglTestCase_004622_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004622_2 "nary_operator.sub.highp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004622, VkglTestCase_004622_1, VkglTestCase_004622_2);

#define VkglTestCase_004623_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004623_2 "ary_operator.sub.highp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004623, VkglTestCase_004623_1, VkglTestCase_004623_2);

#define VkglTestCase_004624_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004624_2 "inary_operator.sub.lowp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004624, VkglTestCase_004624_1, VkglTestCase_004624_2);

#define VkglTestCase_004625_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004625_2 "nary_operator.sub.lowp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004625, VkglTestCase_004625_1, VkglTestCase_004625_2);

#define VkglTestCase_004626_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004626_2 "ary_operator.sub.mediump_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004626, VkglTestCase_004626_1, VkglTestCase_004626_2);

#define VkglTestCase_004627_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004627_2 "ry_operator.sub.mediump_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004627, VkglTestCase_004627_1, VkglTestCase_004627_2);

#define VkglTestCase_004628_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004628_2 "nary_operator.sub.highp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004628, VkglTestCase_004628_1, VkglTestCase_004628_2);

#define VkglTestCase_004629_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004629_2 "ary_operator.sub.highp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004629, VkglTestCase_004629_1, VkglTestCase_004629_2);

#define VkglTestCase_004630_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004630_2 "inary_operator.sub.lowp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004630, VkglTestCase_004630_1, VkglTestCase_004630_2);

#define VkglTestCase_004631_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004631_2 "nary_operator.sub.lowp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004631, VkglTestCase_004631_1, VkglTestCase_004631_2);

#define VkglTestCase_004632_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004632_2 "ary_operator.sub.mediump_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004632, VkglTestCase_004632_1, VkglTestCase_004632_2);

#define VkglTestCase_004633_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004633_2 "ry_operator.sub.mediump_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004633, VkglTestCase_004633_1, VkglTestCase_004633_2);

#define VkglTestCase_004634_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004634_2 "nary_operator.sub.highp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004634, VkglTestCase_004634_1, VkglTestCase_004634_2);

#define VkglTestCase_004635_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004635_2 "ary_operator.sub.highp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004635, VkglTestCase_004635_1, VkglTestCase_004635_2);

#define VkglTestCase_004636_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004636_2 "inary_operator.sub.lowp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004636, VkglTestCase_004636_1, VkglTestCase_004636_2);

#define VkglTestCase_004637_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004637_2 "nary_operator.sub.lowp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004637, VkglTestCase_004637_1, VkglTestCase_004637_2);

#define VkglTestCase_004638_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004638_2 "nary_operator.sub.mediump_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004638, VkglTestCase_004638_1, VkglTestCase_004638_2);

#define VkglTestCase_004639_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004639_2 "ary_operator.sub.mediump_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004639, VkglTestCase_004639_1, VkglTestCase_004639_2);

#define VkglTestCase_004640_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004640_2 "inary_operator.sub.highp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004640, VkglTestCase_004640_1, VkglTestCase_004640_2);

#define VkglTestCase_004641_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004641_2 "nary_operator.sub.highp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004641, VkglTestCase_004641_1, VkglTestCase_004641_2);

#define VkglTestCase_004642_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004642_2 "inary_operator.sub.lowp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004642, VkglTestCase_004642_1, VkglTestCase_004642_2);

#define VkglTestCase_004643_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004643_2 "nary_operator.sub.lowp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004643, VkglTestCase_004643_1, VkglTestCase_004643_2);

#define VkglTestCase_004644_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004644_2 "nary_operator.sub.mediump_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004644, VkglTestCase_004644_1, VkglTestCase_004644_2);

#define VkglTestCase_004645_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004645_2 "ary_operator.sub.mediump_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004645, VkglTestCase_004645_1, VkglTestCase_004645_2);

#define VkglTestCase_004646_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004646_2 "inary_operator.sub.highp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004646, VkglTestCase_004646_1, VkglTestCase_004646_2);

#define VkglTestCase_004647_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004647_2 "nary_operator.sub.highp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004647, VkglTestCase_004647_1, VkglTestCase_004647_2);

#define VkglTestCase_004648_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004648_2 "inary_operator.sub.lowp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004648, VkglTestCase_004648_1, VkglTestCase_004648_2);

#define VkglTestCase_004649_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004649_2 "nary_operator.sub.lowp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004649, VkglTestCase_004649_1, VkglTestCase_004649_2);

#define VkglTestCase_004650_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004650_2 "nary_operator.sub.mediump_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004650, VkglTestCase_004650_1, VkglTestCase_004650_2);

#define VkglTestCase_004651_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004651_2 "ary_operator.sub.mediump_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004651, VkglTestCase_004651_1, VkglTestCase_004651_2);

#define VkglTestCase_004652_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004652_2 "inary_operator.sub.highp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004652, VkglTestCase_004652_1, VkglTestCase_004652_2);

#define VkglTestCase_004653_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004653_2 "nary_operator.sub.highp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004653, VkglTestCase_004653_1, VkglTestCase_004653_2);
