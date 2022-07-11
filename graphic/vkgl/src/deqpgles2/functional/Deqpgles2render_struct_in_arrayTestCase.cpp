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

#define VkglTestCase_014396_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014396_2 "ial.render.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014396, VkglTestCase_014396_1, VkglTestCase_014396_2);

#define VkglTestCase_014397_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014397_2 "al.render.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014397, VkglTestCase_014397_1, VkglTestCase_014397_2);

#define VkglTestCase_014398_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014398_2 "tial.render.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014398, VkglTestCase_014398_1, VkglTestCase_014398_2);

#define VkglTestCase_014399_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014399_2 "tial.render.struct_in_array.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014399, VkglTestCase_014399_1, VkglTestCase_014399_2);

#define VkglTestCase_014400_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014400_2 "ial.render.struct_in_array.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014400, VkglTestCase_014400_1, VkglTestCase_014400_2);

#define VkglTestCase_014401_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014401_2 "itial.render.struct_in_array.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014401, VkglTestCase_014401_1, VkglTestCase_014401_2);

#define VkglTestCase_014402_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014402_2 "tial.render.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014402, VkglTestCase_014402_1, VkglTestCase_014402_2);

#define VkglTestCase_014403_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014403_2 "ial.render.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014403, VkglTestCase_014403_1, VkglTestCase_014403_2);

#define VkglTestCase_014404_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014404_2 "itial.render.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014404, VkglTestCase_014404_1, VkglTestCase_014404_2);

#define VkglTestCase_014405_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014405_2 "ial.render.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014405, VkglTestCase_014405_1, VkglTestCase_014405_2);

#define VkglTestCase_014406_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014406_2 "al.render.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014406, VkglTestCase_014406_1, VkglTestCase_014406_2);

#define VkglTestCase_014407_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014407_2 "tial.render.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014407, VkglTestCase_014407_1, VkglTestCase_014407_2);

#define VkglTestCase_014719_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014719_2 "y_pointer.render.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014719, VkglTestCase_014719_1, VkglTestCase_014719_2);

#define VkglTestCase_014720_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014720_2 "_pointer.render.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014720, VkglTestCase_014720_1, VkglTestCase_014720_2);

#define VkglTestCase_014721_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014721_2 "by_pointer.render.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014721, VkglTestCase_014721_1, VkglTestCase_014721_2);

#define VkglTestCase_014722_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014722_2 "by_pointer.render.struct_in_array.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014722, VkglTestCase_014722_1, VkglTestCase_014722_2);

#define VkglTestCase_014723_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014723_2 "y_pointer.render.struct_in_array.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014723, VkglTestCase_014723_1, VkglTestCase_014723_2);

#define VkglTestCase_014724_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014724_2 ".by_pointer.render.struct_in_array.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014724, VkglTestCase_014724_1, VkglTestCase_014724_2);

#define VkglTestCase_014725_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014725_2 "by_pointer.render.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014725, VkglTestCase_014725_1, VkglTestCase_014725_2);

#define VkglTestCase_014726_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014726_2 "y_pointer.render.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014726, VkglTestCase_014726_1, VkglTestCase_014726_2);

#define VkglTestCase_014727_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014727_2 ".by_pointer.render.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014727, VkglTestCase_014727_1, VkglTestCase_014727_2);

#define VkglTestCase_014728_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014728_2 "y_pointer.render.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014728, VkglTestCase_014728_1, VkglTestCase_014728_2);

#define VkglTestCase_014729_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014729_2 "_pointer.render.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014729, VkglTestCase_014729_1, VkglTestCase_014729_2);

#define VkglTestCase_014730_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014730_2 "by_pointer.render.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014730, VkglTestCase_014730_1, VkglTestCase_014730_2);

#define VkglTestCase_014731_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_014731_2 "nter.render.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014731, VkglTestCase_014731_1, VkglTestCase_014731_2);

#define VkglTestCase_014732_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_014732_2 "ter.render.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014732, VkglTestCase_014732_1, VkglTestCase_014732_2);

#define VkglTestCase_014733_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_014733_2 "inter.render.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014733, VkglTestCase_014733_1, VkglTestCase_014733_2);

#define VkglTestCase_015008_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015008_2 "by_value.render.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015008, VkglTestCase_015008_1, VkglTestCase_015008_2);

#define VkglTestCase_015009_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015009_2 "y_value.render.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015009, VkglTestCase_015009_1, VkglTestCase_015009_2);

#define VkglTestCase_015010_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015010_2 ".by_value.render.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015010, VkglTestCase_015010_1, VkglTestCase_015010_2);

#define VkglTestCase_015011_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015011_2 ".by_value.render.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015011, VkglTestCase_015011_1, VkglTestCase_015011_2);

#define VkglTestCase_015012_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015012_2 "by_value.render.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015012, VkglTestCase_015012_1, VkglTestCase_015012_2);

#define VkglTestCase_015013_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_015013_2 "d.by_value.render.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015013, VkglTestCase_015013_1, VkglTestCase_015013_2);

#define VkglTestCase_015014_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015014_2 "by_value.render.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015014, VkglTestCase_015014_1, VkglTestCase_015014_2);

#define VkglTestCase_015015_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015015_2 "y_value.render.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015015, VkglTestCase_015015_1, VkglTestCase_015015_2);

#define VkglTestCase_015016_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015016_2 ".by_value.render.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015016, VkglTestCase_015016_1, VkglTestCase_015016_2);

#define VkglTestCase_015017_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_015017_2 "lue.render.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015017, VkglTestCase_015017_1, VkglTestCase_015017_2);

#define VkglTestCase_015018_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_val"
#define VkglTestCase_015018_2 "ue.render.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015018, VkglTestCase_015018_1, VkglTestCase_015018_2);

#define VkglTestCase_015019_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_015019_2 "alue.render.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015019, VkglTestCase_015019_1, VkglTestCase_015019_2);
