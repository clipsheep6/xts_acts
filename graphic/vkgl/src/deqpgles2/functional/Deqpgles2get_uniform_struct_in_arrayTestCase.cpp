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

#define VkglTestCase_014257_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014257_2 "l.get_uniform.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014257, VkglTestCase_014257_1, VkglTestCase_014257_2);

#define VkglTestCase_014258_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014258_2 ".get_uniform.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014258, VkglTestCase_014258_1, VkglTestCase_014258_2);

#define VkglTestCase_014259_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014259_2 "al.get_uniform.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014259, VkglTestCase_014259_1, VkglTestCase_014259_2);

#define VkglTestCase_014260_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014260_2 "l.get_uniform.struct_in_array.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014260, VkglTestCase_014260_1, VkglTestCase_014260_2);

#define VkglTestCase_014261_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014261_2 ".get_uniform.struct_in_array.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014261, VkglTestCase_014261_1, VkglTestCase_014261_2);

#define VkglTestCase_014262_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014262_2 "al.get_uniform.struct_in_array.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014262, VkglTestCase_014262_1, VkglTestCase_014262_2);

#define VkglTestCase_014263_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014263_2 "l.get_uniform.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014263, VkglTestCase_014263_1, VkglTestCase_014263_2);

#define VkglTestCase_014264_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014264_2 ".get_uniform.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014264, VkglTestCase_014264_1, VkglTestCase_014264_2);

#define VkglTestCase_014265_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014265_2 "al.get_uniform.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014265, VkglTestCase_014265_1, VkglTestCase_014265_2);

#define VkglTestCase_014266_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014266_2 "l.get_uniform.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014266, VkglTestCase_014266_1, VkglTestCase_014266_2);

#define VkglTestCase_014267_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014267_2 ".get_uniform.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014267, VkglTestCase_014267_1, VkglTestCase_014267_2);

#define VkglTestCase_014268_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014268_2 "al.get_uniform.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014268, VkglTestCase_014268_1, VkglTestCase_014268_2);

#define VkglTestCase_014269_1 "dEQP-GLES2.functional.uniform_api.value.initial.get_"
#define VkglTestCase_014269_2 "uniform.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014269, VkglTestCase_014269_1, VkglTestCase_014269_2);

#define VkglTestCase_014270_1 "dEQP-GLES2.functional.uniform_api.value.initial.get_u"
#define VkglTestCase_014270_2 "niform.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014270, VkglTestCase_014270_1, VkglTestCase_014270_2);

#define VkglTestCase_014271_1 "dEQP-GLES2.functional.uniform_api.value.initial.get"
#define VkglTestCase_014271_2 "_uniform.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014271, VkglTestCase_014271_1, VkglTestCase_014271_2);

#define VkglTestCase_014577_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014577_2 "pointer.get_uniform.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014577, VkglTestCase_014577_1, VkglTestCase_014577_2);

#define VkglTestCase_014578_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014578_2 "ointer.get_uniform.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014578, VkglTestCase_014578_1, VkglTestCase_014578_2);

#define VkglTestCase_014579_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014579_2 "_pointer.get_uniform.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014579, VkglTestCase_014579_1, VkglTestCase_014579_2);

#define VkglTestCase_014580_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014580_2 "pointer.get_uniform.struct_in_array.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014580, VkglTestCase_014580_1, VkglTestCase_014580_2);

#define VkglTestCase_014581_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014581_2 "ointer.get_uniform.struct_in_array.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014581, VkglTestCase_014581_1, VkglTestCase_014581_2);

#define VkglTestCase_014582_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014582_2 "_pointer.get_uniform.struct_in_array.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014582, VkglTestCase_014582_1, VkglTestCase_014582_2);

#define VkglTestCase_014583_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014583_2 "pointer.get_uniform.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014583, VkglTestCase_014583_1, VkglTestCase_014583_2);

#define VkglTestCase_014584_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014584_2 "ointer.get_uniform.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014584, VkglTestCase_014584_1, VkglTestCase_014584_2);

#define VkglTestCase_014585_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014585_2 "_pointer.get_uniform.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014585, VkglTestCase_014585_1, VkglTestCase_014585_2);

#define VkglTestCase_014586_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014586_2 "pointer.get_uniform.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014586, VkglTestCase_014586_1, VkglTestCase_014586_2);

#define VkglTestCase_014587_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014587_2 "ointer.get_uniform.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014587, VkglTestCase_014587_1, VkglTestCase_014587_2);

#define VkglTestCase_014588_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014588_2 "_pointer.get_uniform.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014588, VkglTestCase_014588_1, VkglTestCase_014588_2);

#define VkglTestCase_014589_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointe"
#define VkglTestCase_014589_2 "r.get_uniform.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014589, VkglTestCase_014589_1, VkglTestCase_014589_2);

#define VkglTestCase_014590_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer"
#define VkglTestCase_014590_2 ".get_uniform.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014590, VkglTestCase_014590_1, VkglTestCase_014590_2);

#define VkglTestCase_014591_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_point"
#define VkglTestCase_014591_2 "er.get_uniform.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014591, VkglTestCase_014591_1, VkglTestCase_014591_2);

#define VkglTestCase_014891_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014891_2 "_value.get_uniform.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014891, VkglTestCase_014891_1, VkglTestCase_014891_2);

#define VkglTestCase_014892_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014892_2 "value.get_uniform.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014892, VkglTestCase_014892_1, VkglTestCase_014892_2);

#define VkglTestCase_014893_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014893_2 "y_value.get_uniform.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014893, VkglTestCase_014893_1, VkglTestCase_014893_2);

#define VkglTestCase_014894_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014894_2 "_value.get_uniform.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014894, VkglTestCase_014894_1, VkglTestCase_014894_2);

#define VkglTestCase_014895_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014895_2 "value.get_uniform.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014895, VkglTestCase_014895_1, VkglTestCase_014895_2);

#define VkglTestCase_014896_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014896_2 "y_value.get_uniform.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014896, VkglTestCase_014896_1, VkglTestCase_014896_2);

#define VkglTestCase_014897_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014897_2 "_value.get_uniform.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014897, VkglTestCase_014897_1, VkglTestCase_014897_2);

#define VkglTestCase_014898_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014898_2 "value.get_uniform.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014898, VkglTestCase_014898_1, VkglTestCase_014898_2);

#define VkglTestCase_014899_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014899_2 "y_value.get_uniform.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014899, VkglTestCase_014899_1, VkglTestCase_014899_2);

#define VkglTestCase_014900_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value"
#define VkglTestCase_014900_2 ".get_uniform.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014900, VkglTestCase_014900_1, VkglTestCase_014900_2);

#define VkglTestCase_014901_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value."
#define VkglTestCase_014901_2 "get_uniform.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014901, VkglTestCase_014901_1, VkglTestCase_014901_2);

#define VkglTestCase_014902_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_valu"
#define VkglTestCase_014902_2 "e.get_uniform.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014902, VkglTestCase_014902_1, VkglTestCase_014902_2);
