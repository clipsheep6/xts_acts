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

#define VkglTestCase_014384_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014384_2 "itial.render.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014384, VkglTestCase_014384_1, VkglTestCase_014384_2);

#define VkglTestCase_014385_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014385_2 "tial.render.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014385, VkglTestCase_014385_1, VkglTestCase_014385_2);

#define VkglTestCase_014386_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014386_2 "nitial.render.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014386, VkglTestCase_014386_1, VkglTestCase_014386_2);

#define VkglTestCase_014387_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014387_2 "itial.render.basic_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014387, VkglTestCase_014387_1, VkglTestCase_014387_2);

#define VkglTestCase_014388_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014388_2 "tial.render.basic_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014388, VkglTestCase_014388_1, VkglTestCase_014388_2);

#define VkglTestCase_014389_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014389_2 "nitial.render.basic_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014389, VkglTestCase_014389_1, VkglTestCase_014389_2);

#define VkglTestCase_014390_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014390_2 "itial.render.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014390, VkglTestCase_014390_1, VkglTestCase_014390_2);

#define VkglTestCase_014391_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014391_2 "tial.render.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014391, VkglTestCase_014391_1, VkglTestCase_014391_2);

#define VkglTestCase_014392_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014392_2 "nitial.render.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014392, VkglTestCase_014392_1, VkglTestCase_014392_2);

#define VkglTestCase_014393_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014393_2 "itial.render.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014393, VkglTestCase_014393_1, VkglTestCase_014393_2);

#define VkglTestCase_014394_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014394_2 "tial.render.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014394, VkglTestCase_014394_1, VkglTestCase_014394_2);

#define VkglTestCase_014395_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014395_2 "nitial.render.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014395, VkglTestCase_014395_1, VkglTestCase_014395_2);

#define VkglTestCase_014704_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014704_2 ".by_pointer.render.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014704, VkglTestCase_014704_1, VkglTestCase_014704_2);

#define VkglTestCase_014705_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014705_2 "by_pointer.render.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014705, VkglTestCase_014705_1, VkglTestCase_014705_2);

#define VkglTestCase_014706_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014706_2 "d.by_pointer.render.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014706, VkglTestCase_014706_1, VkglTestCase_014706_2);

#define VkglTestCase_014707_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014707_2 ".by_pointer.render.basic_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014707, VkglTestCase_014707_1, VkglTestCase_014707_2);

#define VkglTestCase_014708_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014708_2 "by_pointer.render.basic_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014708, VkglTestCase_014708_1, VkglTestCase_014708_2);

#define VkglTestCase_014709_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014709_2 "d.by_pointer.render.basic_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014709, VkglTestCase_014709_1, VkglTestCase_014709_2);

#define VkglTestCase_014710_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014710_2 ".by_pointer.render.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014710, VkglTestCase_014710_1, VkglTestCase_014710_2);

#define VkglTestCase_014711_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014711_2 "by_pointer.render.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014711, VkglTestCase_014711_1, VkglTestCase_014711_2);

#define VkglTestCase_014712_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014712_2 "d.by_pointer.render.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014712, VkglTestCase_014712_1, VkglTestCase_014712_2);

#define VkglTestCase_014713_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014713_2 ".by_pointer.render.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014713, VkglTestCase_014713_1, VkglTestCase_014713_2);

#define VkglTestCase_014714_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014714_2 "by_pointer.render.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014714, VkglTestCase_014714_1, VkglTestCase_014714_2);

#define VkglTestCase_014715_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014715_2 "d.by_pointer.render.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014715, VkglTestCase_014715_1, VkglTestCase_014715_2);

#define VkglTestCase_014716_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_014716_2 "inter.render.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014716, VkglTestCase_014716_1, VkglTestCase_014716_2);

#define VkglTestCase_014717_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_014717_2 "nter.render.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014717, VkglTestCase_014717_1, VkglTestCase_014717_2);

#define VkglTestCase_014718_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014718_2 "ointer.render.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014718, VkglTestCase_014718_1, VkglTestCase_014718_2);

#define VkglTestCase_014996_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014996_2 "d.by_value.render.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014996, VkglTestCase_014996_1, VkglTestCase_014996_2);

#define VkglTestCase_014997_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014997_2 ".by_value.render.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014997, VkglTestCase_014997_1, VkglTestCase_014997_2);

#define VkglTestCase_014998_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014998_2 "ed.by_value.render.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014998, VkglTestCase_014998_1, VkglTestCase_014998_2);

#define VkglTestCase_014999_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014999_2 "d.by_value.render.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014999, VkglTestCase_014999_1, VkglTestCase_014999_2);

#define VkglTestCase_015000_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015000_2 ".by_value.render.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015000, VkglTestCase_015000_1, VkglTestCase_015000_2);

#define VkglTestCase_015001_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_015001_2 "ed.by_value.render.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015001, VkglTestCase_015001_1, VkglTestCase_015001_2);

#define VkglTestCase_015002_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_015002_2 "d.by_value.render.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015002, VkglTestCase_015002_1, VkglTestCase_015002_2);

#define VkglTestCase_015003_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015003_2 ".by_value.render.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015003, VkglTestCase_015003_1, VkglTestCase_015003_2);

#define VkglTestCase_015004_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_015004_2 "ed.by_value.render.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015004, VkglTestCase_015004_1, VkglTestCase_015004_2);

#define VkglTestCase_015005_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_015005_2 "alue.render.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015005, VkglTestCase_015005_1, VkglTestCase_015005_2);

#define VkglTestCase_015006_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_015006_2 "lue.render.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015006, VkglTestCase_015006_1, VkglTestCase_015006_2);

#define VkglTestCase_015007_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_015007_2 "value.render.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015007, VkglTestCase_015007_1, VkglTestCase_015007_2);
