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
#include "../ActsDeqpgles20015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014242_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014242_2 "al.get_uniform.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014242, VkglTestCase_014242_1, VkglTestCase_014242_2);

#define VkglTestCase_014243_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014243_2 "l.get_uniform.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014243, VkglTestCase_014243_1, VkglTestCase_014243_2);

#define VkglTestCase_014244_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014244_2 "ial.get_uniform.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014244, VkglTestCase_014244_1, VkglTestCase_014244_2);

#define VkglTestCase_014245_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014245_2 "ial.get_uniform.basic_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014245, VkglTestCase_014245_1, VkglTestCase_014245_2);

#define VkglTestCase_014246_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014246_2 "al.get_uniform.basic_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014246, VkglTestCase_014246_1, VkglTestCase_014246_2);

#define VkglTestCase_014247_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014247_2 "tial.get_uniform.basic_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014247, VkglTestCase_014247_1, VkglTestCase_014247_2);

#define VkglTestCase_014248_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014248_2 "ial.get_uniform.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014248, VkglTestCase_014248_1, VkglTestCase_014248_2);

#define VkglTestCase_014249_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014249_2 "al.get_uniform.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014249, VkglTestCase_014249_1, VkglTestCase_014249_2);

#define VkglTestCase_014250_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014250_2 "tial.get_uniform.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014250, VkglTestCase_014250_1, VkglTestCase_014250_2);

#define VkglTestCase_014251_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014251_2 "al.get_uniform.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014251, VkglTestCase_014251_1, VkglTestCase_014251_2);

#define VkglTestCase_014252_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014252_2 "l.get_uniform.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014252, VkglTestCase_014252_1, VkglTestCase_014252_2);

#define VkglTestCase_014253_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014253_2 "ial.get_uniform.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014253, VkglTestCase_014253_1, VkglTestCase_014253_2);

#define VkglTestCase_014254_1 "dEQP-GLES2.functional.uniform_api.value.initial.ge"
#define VkglTestCase_014254_2 "t_uniform.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014254, VkglTestCase_014254_1, VkglTestCase_014254_2);

#define VkglTestCase_014255_1 "dEQP-GLES2.functional.uniform_api.value.initial.get"
#define VkglTestCase_014255_2 "_uniform.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014255, VkglTestCase_014255_1, VkglTestCase_014255_2);

#define VkglTestCase_014256_1 "dEQP-GLES2.functional.uniform_api.value.initial.g"
#define VkglTestCase_014256_2 "et_uniform.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014256, VkglTestCase_014256_1, VkglTestCase_014256_2);

#define VkglTestCase_014562_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014562_2 "_pointer.get_uniform.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014562, VkglTestCase_014562_1, VkglTestCase_014562_2);

#define VkglTestCase_014563_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014563_2 "pointer.get_uniform.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014563, VkglTestCase_014563_1, VkglTestCase_014563_2);

#define VkglTestCase_014564_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014564_2 "y_pointer.get_uniform.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014564, VkglTestCase_014564_1, VkglTestCase_014564_2);

#define VkglTestCase_014565_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014565_2 "y_pointer.get_uniform.basic_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014565, VkglTestCase_014565_1, VkglTestCase_014565_2);

#define VkglTestCase_014566_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014566_2 "_pointer.get_uniform.basic_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014566, VkglTestCase_014566_1, VkglTestCase_014566_2);

#define VkglTestCase_014567_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014567_2 "by_pointer.get_uniform.basic_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014567, VkglTestCase_014567_1, VkglTestCase_014567_2);

#define VkglTestCase_014568_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014568_2 "y_pointer.get_uniform.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014568, VkglTestCase_014568_1, VkglTestCase_014568_2);

#define VkglTestCase_014569_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014569_2 "_pointer.get_uniform.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014569, VkglTestCase_014569_1, VkglTestCase_014569_2);

#define VkglTestCase_014570_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014570_2 "by_pointer.get_uniform.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014570, VkglTestCase_014570_1, VkglTestCase_014570_2);

#define VkglTestCase_014571_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014571_2 "_pointer.get_uniform.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014571, VkglTestCase_014571_1, VkglTestCase_014571_2);

#define VkglTestCase_014572_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014572_2 "pointer.get_uniform.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014572, VkglTestCase_014572_1, VkglTestCase_014572_2);

#define VkglTestCase_014573_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014573_2 "y_pointer.get_uniform.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014573, VkglTestCase_014573_1, VkglTestCase_014573_2);

#define VkglTestCase_014574_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_014574_2 "ter.get_uniform.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014574, VkglTestCase_014574_1, VkglTestCase_014574_2);

#define VkglTestCase_014575_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_point"
#define VkglTestCase_014575_2 "er.get_uniform.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014575, VkglTestCase_014575_1, VkglTestCase_014575_2);

#define VkglTestCase_014576_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_014576_2 "nter.get_uniform.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014576, VkglTestCase_014576_1, VkglTestCase_014576_2);

#define VkglTestCase_014879_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014879_2 "y_value.get_uniform.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014879, VkglTestCase_014879_1, VkglTestCase_014879_2);

#define VkglTestCase_014880_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014880_2 "_value.get_uniform.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014880, VkglTestCase_014880_1, VkglTestCase_014880_2);

#define VkglTestCase_014881_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014881_2 "by_value.get_uniform.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014881, VkglTestCase_014881_1, VkglTestCase_014881_2);

#define VkglTestCase_014882_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014882_2 "by_value.get_uniform.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014882, VkglTestCase_014882_1, VkglTestCase_014882_2);

#define VkglTestCase_014883_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014883_2 "y_value.get_uniform.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014883, VkglTestCase_014883_1, VkglTestCase_014883_2);

#define VkglTestCase_014884_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014884_2 ".by_value.get_uniform.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014884, VkglTestCase_014884_1, VkglTestCase_014884_2);

#define VkglTestCase_014885_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014885_2 "y_value.get_uniform.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014885, VkglTestCase_014885_1, VkglTestCase_014885_2);

#define VkglTestCase_014886_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014886_2 "_value.get_uniform.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014886, VkglTestCase_014886_1, VkglTestCase_014886_2);

#define VkglTestCase_014887_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014887_2 "by_value.get_uniform.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014887, VkglTestCase_014887_1, VkglTestCase_014887_2);

#define VkglTestCase_014888_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_val"
#define VkglTestCase_014888_2 "ue.get_uniform.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014888, VkglTestCase_014888_1, VkglTestCase_014888_2);

#define VkglTestCase_014889_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_valu"
#define VkglTestCase_014889_2 "e.get_uniform.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014889, VkglTestCase_014889_1, VkglTestCase_014889_2);

#define VkglTestCase_014890_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_014890_2 "lue.get_uniform.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014890, VkglTestCase_014890_1, VkglTestCase_014890_2);
