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

#define VkglTestCase_014287_1 "dEQP-GLES2.functional.uniform_api.value.initial.g"
#define VkglTestCase_014287_2 "et_uniform.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014287, VkglTestCase_014287_1, VkglTestCase_014287_2);

#define VkglTestCase_014288_1 "dEQP-GLES2.functional.uniform_api.value.initial.ge"
#define VkglTestCase_014288_2 "t_uniform.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014288, VkglTestCase_014288_1, VkglTestCase_014288_2);

#define VkglTestCase_014289_1 "dEQP-GLES2.functional.uniform_api.value.initial."
#define VkglTestCase_014289_2 "get_uniform.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014289, VkglTestCase_014289_1, VkglTestCase_014289_2);

#define VkglTestCase_014290_1 "dEQP-GLES2.functional.uniform_api.value.initial.ge"
#define VkglTestCase_014290_2 "t_uniform.nested_structs_arrays.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014290, VkglTestCase_014290_1, VkglTestCase_014290_2);

#define VkglTestCase_014291_1 "dEQP-GLES2.functional.uniform_api.value.initial.g"
#define VkglTestCase_014291_2 "et_uniform.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014291, VkglTestCase_014291_1, VkglTestCase_014291_2);

#define VkglTestCase_014292_1 "dEQP-GLES2.functional.uniform_api.value.initial.ge"
#define VkglTestCase_014292_2 "t_uniform.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014292, VkglTestCase_014292_1, VkglTestCase_014292_2);

#define VkglTestCase_014293_1 "dEQP-GLES2.functional.uniform_api.value.initial."
#define VkglTestCase_014293_2 "get_uniform.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014293, VkglTestCase_014293_1, VkglTestCase_014293_2);

#define VkglTestCase_014294_1 "dEQP-GLES2.functional.uniform_api.value.initial.g"
#define VkglTestCase_014294_2 "et_uniform.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014294, VkglTestCase_014294_1, VkglTestCase_014294_2);

#define VkglTestCase_014295_1 "dEQP-GLES2.functional.uniform_api.value.initial.ge"
#define VkglTestCase_014295_2 "t_uniform.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014295, VkglTestCase_014295_1, VkglTestCase_014295_2);

#define VkglTestCase_014296_1 "dEQP-GLES2.functional.uniform_api.value.initial."
#define VkglTestCase_014296_2 "get_uniform.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014296, VkglTestCase_014296_1, VkglTestCase_014296_2);

#define VkglTestCase_014297_1 "dEQP-GLES2.functional.uniform_api.value.initial.get_uni"
#define VkglTestCase_014297_2 "form.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014297, VkglTestCase_014297_1, VkglTestCase_014297_2);

#define VkglTestCase_014298_1 "dEQP-GLES2.functional.uniform_api.value.initial.get_unif"
#define VkglTestCase_014298_2 "orm.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014298, VkglTestCase_014298_1, VkglTestCase_014298_2);

#define VkglTestCase_014299_1 "dEQP-GLES2.functional.uniform_api.value.initial.get_un"
#define VkglTestCase_014299_2 "iform.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014299, VkglTestCase_014299_1, VkglTestCase_014299_2);

#define VkglTestCase_014607_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_014607_2 "nter.get_uniform.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014607, VkglTestCase_014607_1, VkglTestCase_014607_2);

#define VkglTestCase_014608_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_014608_2 "ter.get_uniform.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014608, VkglTestCase_014608_1, VkglTestCase_014608_2);

#define VkglTestCase_014609_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_014609_2 "inter.get_uniform.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014609, VkglTestCase_014609_1, VkglTestCase_014609_2);

#define VkglTestCase_014610_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_014610_2 "ter.get_uniform.nested_structs_arrays.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014610, VkglTestCase_014610_1, VkglTestCase_014610_2);

#define VkglTestCase_014611_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_014611_2 "nter.get_uniform.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014611, VkglTestCase_014611_1, VkglTestCase_014611_2);

#define VkglTestCase_014612_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_014612_2 "ter.get_uniform.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014612, VkglTestCase_014612_1, VkglTestCase_014612_2);

#define VkglTestCase_014613_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_014613_2 "inter.get_uniform.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014613, VkglTestCase_014613_1, VkglTestCase_014613_2);

#define VkglTestCase_014614_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_014614_2 "nter.get_uniform.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014614, VkglTestCase_014614_1, VkglTestCase_014614_2);

#define VkglTestCase_014615_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_014615_2 "ter.get_uniform.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014615, VkglTestCase_014615_1, VkglTestCase_014615_2);

#define VkglTestCase_014616_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_014616_2 "inter.get_uniform.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014616, VkglTestCase_014616_1, VkglTestCase_014616_2);

#define VkglTestCase_014617_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.g"
#define VkglTestCase_014617_2 "et_uniform.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014617, VkglTestCase_014617_1, VkglTestCase_014617_2);

#define VkglTestCase_014618_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.ge"
#define VkglTestCase_014618_2 "t_uniform.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014618, VkglTestCase_014618_1, VkglTestCase_014618_2);

#define VkglTestCase_014619_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer."
#define VkglTestCase_014619_2 "get_uniform.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014619, VkglTestCase_014619_1, VkglTestCase_014619_2);

#define VkglTestCase_014915_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_014915_2 "lue.get_uniform.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014915, VkglTestCase_014915_1, VkglTestCase_014915_2);

#define VkglTestCase_014916_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_val"
#define VkglTestCase_014916_2 "ue.get_uniform.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014916, VkglTestCase_014916_1, VkglTestCase_014916_2);

#define VkglTestCase_014917_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_014917_2 "alue.get_uniform.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014917, VkglTestCase_014917_1, VkglTestCase_014917_2);

#define VkglTestCase_014918_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_014918_2 "lue.get_uniform.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014918, VkglTestCase_014918_1, VkglTestCase_014918_2);

#define VkglTestCase_014919_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_val"
#define VkglTestCase_014919_2 "ue.get_uniform.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014919, VkglTestCase_014919_1, VkglTestCase_014919_2);

#define VkglTestCase_014920_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_014920_2 "alue.get_uniform.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014920, VkglTestCase_014920_1, VkglTestCase_014920_2);

#define VkglTestCase_014921_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_014921_2 "lue.get_uniform.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014921, VkglTestCase_014921_1, VkglTestCase_014921_2);

#define VkglTestCase_014922_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_val"
#define VkglTestCase_014922_2 "ue.get_uniform.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014922, VkglTestCase_014922_1, VkglTestCase_014922_2);

#define VkglTestCase_014923_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_014923_2 "alue.get_uniform.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014923, VkglTestCase_014923_1, VkglTestCase_014923_2);

#define VkglTestCase_014924_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.ge"
#define VkglTestCase_014924_2 "t_uniform.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014924, VkglTestCase_014924_1, VkglTestCase_014924_2);

#define VkglTestCase_014925_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get"
#define VkglTestCase_014925_2 "_uniform.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014925, VkglTestCase_014925_1, VkglTestCase_014925_2);

#define VkglTestCase_014926_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.g"
#define VkglTestCase_014926_2 "et_uniform.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014926, VkglTestCase_014926_1, VkglTestCase_014926_2);
