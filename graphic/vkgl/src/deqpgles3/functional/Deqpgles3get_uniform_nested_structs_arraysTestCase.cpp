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
#include "../ActsDeqpgles30038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037102_1 "dEQP-GLES3.functional.uniform_api.value.initial.g"
#define VkglTestCase_037102_2 "et_uniform.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037102, VkglTestCase_037102_1, VkglTestCase_037102_2);

#define VkglTestCase_037103_1 "dEQP-GLES3.functional.uniform_api.value.initial.ge"
#define VkglTestCase_037103_2 "t_uniform.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037103, VkglTestCase_037103_1, VkglTestCase_037103_2);

#define VkglTestCase_037104_1 "dEQP-GLES3.functional.uniform_api.value.initial."
#define VkglTestCase_037104_2 "get_uniform.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037104, VkglTestCase_037104_1, VkglTestCase_037104_2);

#define VkglTestCase_037105_1 "dEQP-GLES3.functional.uniform_api.value.initial.g"
#define VkglTestCase_037105_2 "et_uniform.nested_structs_arrays.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037105, VkglTestCase_037105_1, VkglTestCase_037105_2);

#define VkglTestCase_037106_1 "dEQP-GLES3.functional.uniform_api.value.initial.ge"
#define VkglTestCase_037106_2 "t_uniform.nested_structs_arrays.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037106, VkglTestCase_037106_1, VkglTestCase_037106_2);

#define VkglTestCase_037107_1 "dEQP-GLES3.functional.uniform_api.value.initial."
#define VkglTestCase_037107_2 "get_uniform.nested_structs_arrays.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037107, VkglTestCase_037107_1, VkglTestCase_037107_2);

#define VkglTestCase_037108_1 "dEQP-GLES3.functional.uniform_api.value.initial.g"
#define VkglTestCase_037108_2 "et_uniform.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037108, VkglTestCase_037108_1, VkglTestCase_037108_2);

#define VkglTestCase_037109_1 "dEQP-GLES3.functional.uniform_api.value.initial.ge"
#define VkglTestCase_037109_2 "t_uniform.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037109, VkglTestCase_037109_1, VkglTestCase_037109_2);

#define VkglTestCase_037110_1 "dEQP-GLES3.functional.uniform_api.value.initial."
#define VkglTestCase_037110_2 "get_uniform.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037110, VkglTestCase_037110_1, VkglTestCase_037110_2);

#define VkglTestCase_037111_1 "dEQP-GLES3.functional.uniform_api.value.initial.g"
#define VkglTestCase_037111_2 "et_uniform.nested_structs_arrays.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037111, VkglTestCase_037111_1, VkglTestCase_037111_2);

#define VkglTestCase_037112_1 "dEQP-GLES3.functional.uniform_api.value.initial.ge"
#define VkglTestCase_037112_2 "t_uniform.nested_structs_arrays.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037112, VkglTestCase_037112_1, VkglTestCase_037112_2);

#define VkglTestCase_037113_1 "dEQP-GLES3.functional.uniform_api.value.initial."
#define VkglTestCase_037113_2 "get_uniform.nested_structs_arrays.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037113, VkglTestCase_037113_1, VkglTestCase_037113_2);

#define VkglTestCase_037114_1 "dEQP-GLES3.functional.uniform_api.value.initial.g"
#define VkglTestCase_037114_2 "et_uniform.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037114, VkglTestCase_037114_1, VkglTestCase_037114_2);

#define VkglTestCase_037115_1 "dEQP-GLES3.functional.uniform_api.value.initial.ge"
#define VkglTestCase_037115_2 "t_uniform.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037115, VkglTestCase_037115_1, VkglTestCase_037115_2);

#define VkglTestCase_037116_1 "dEQP-GLES3.functional.uniform_api.value.initial."
#define VkglTestCase_037116_2 "get_uniform.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037116, VkglTestCase_037116_1, VkglTestCase_037116_2);

#define VkglTestCase_037117_1 "dEQP-GLES3.functional.uniform_api.value.initial.get_uni"
#define VkglTestCase_037117_2 "form.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037117, VkglTestCase_037117_1, VkglTestCase_037117_2);

#define VkglTestCase_037118_1 "dEQP-GLES3.functional.uniform_api.value.initial.get_unif"
#define VkglTestCase_037118_2 "orm.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037118, VkglTestCase_037118_1, VkglTestCase_037118_2);

#define VkglTestCase_037119_1 "dEQP-GLES3.functional.uniform_api.value.initial.get_un"
#define VkglTestCase_037119_2 "iform.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037119, VkglTestCase_037119_1, VkglTestCase_037119_2);

#define VkglTestCase_037585_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_037585_2 "nter.get_uniform.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037585, VkglTestCase_037585_1, VkglTestCase_037585_2);

#define VkglTestCase_037586_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_037586_2 "ter.get_uniform.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037586, VkglTestCase_037586_1, VkglTestCase_037586_2);

#define VkglTestCase_037587_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_037587_2 "inter.get_uniform.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037587, VkglTestCase_037587_1, VkglTestCase_037587_2);

#define VkglTestCase_037588_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_037588_2 "nter.get_uniform.nested_structs_arrays.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037588, VkglTestCase_037588_1, VkglTestCase_037588_2);

#define VkglTestCase_037589_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_037589_2 "ter.get_uniform.nested_structs_arrays.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037589, VkglTestCase_037589_1, VkglTestCase_037589_2);

#define VkglTestCase_037590_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_037590_2 "inter.get_uniform.nested_structs_arrays.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037590, VkglTestCase_037590_1, VkglTestCase_037590_2);

#define VkglTestCase_037591_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_037591_2 "nter.get_uniform.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037591, VkglTestCase_037591_1, VkglTestCase_037591_2);

#define VkglTestCase_037592_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_037592_2 "ter.get_uniform.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037592, VkglTestCase_037592_1, VkglTestCase_037592_2);

#define VkglTestCase_037593_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_037593_2 "inter.get_uniform.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037593, VkglTestCase_037593_1, VkglTestCase_037593_2);

#define VkglTestCase_037594_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_037594_2 "nter.get_uniform.nested_structs_arrays.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037594, VkglTestCase_037594_1, VkglTestCase_037594_2);

#define VkglTestCase_037595_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_037595_2 "ter.get_uniform.nested_structs_arrays.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037595, VkglTestCase_037595_1, VkglTestCase_037595_2);

#define VkglTestCase_037596_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_037596_2 "inter.get_uniform.nested_structs_arrays.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037596, VkglTestCase_037596_1, VkglTestCase_037596_2);

#define VkglTestCase_037597_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_037597_2 "nter.get_uniform.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037597, VkglTestCase_037597_1, VkglTestCase_037597_2);

#define VkglTestCase_037598_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_037598_2 "ter.get_uniform.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037598, VkglTestCase_037598_1, VkglTestCase_037598_2);

#define VkglTestCase_037599_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_037599_2 "inter.get_uniform.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037599, VkglTestCase_037599_1, VkglTestCase_037599_2);

#define VkglTestCase_037600_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.g"
#define VkglTestCase_037600_2 "et_uniform.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037600, VkglTestCase_037600_1, VkglTestCase_037600_2);

#define VkglTestCase_037601_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer.ge"
#define VkglTestCase_037601_2 "t_uniform.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037601, VkglTestCase_037601_1, VkglTestCase_037601_2);

#define VkglTestCase_037602_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer."
#define VkglTestCase_037602_2 "get_uniform.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037602, VkglTestCase_037602_1, VkglTestCase_037602_2);

#define VkglTestCase_038035_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_038035_2 "lue.get_uniform.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038035, VkglTestCase_038035_1, VkglTestCase_038035_2);

#define VkglTestCase_038036_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_val"
#define VkglTestCase_038036_2 "ue.get_uniform.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038036, VkglTestCase_038036_1, VkglTestCase_038036_2);

#define VkglTestCase_038037_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_038037_2 "alue.get_uniform.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038037, VkglTestCase_038037_1, VkglTestCase_038037_2);

#define VkglTestCase_038038_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_038038_2 "lue.get_uniform.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038038, VkglTestCase_038038_1, VkglTestCase_038038_2);

#define VkglTestCase_038039_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_val"
#define VkglTestCase_038039_2 "ue.get_uniform.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038039, VkglTestCase_038039_1, VkglTestCase_038039_2);

#define VkglTestCase_038040_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_038040_2 "alue.get_uniform.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038040, VkglTestCase_038040_1, VkglTestCase_038040_2);

#define VkglTestCase_038041_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_038041_2 "lue.get_uniform.nested_structs_arrays.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038041, VkglTestCase_038041_1, VkglTestCase_038041_2);

#define VkglTestCase_038042_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_val"
#define VkglTestCase_038042_2 "ue.get_uniform.nested_structs_arrays.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038042, VkglTestCase_038042_1, VkglTestCase_038042_2);

#define VkglTestCase_038043_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_038043_2 "alue.get_uniform.nested_structs_arrays.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038043, VkglTestCase_038043_1, VkglTestCase_038043_2);

#define VkglTestCase_038044_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_038044_2 "lue.get_uniform.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038044, VkglTestCase_038044_1, VkglTestCase_038044_2);

#define VkglTestCase_038045_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_val"
#define VkglTestCase_038045_2 "ue.get_uniform.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038045, VkglTestCase_038045_1, VkglTestCase_038045_2);

#define VkglTestCase_038046_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_038046_2 "alue.get_uniform.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038046, VkglTestCase_038046_1, VkglTestCase_038046_2);

#define VkglTestCase_038047_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.ge"
#define VkglTestCase_038047_2 "t_uniform.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038047, VkglTestCase_038047_1, VkglTestCase_038047_2);

#define VkglTestCase_038048_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.get"
#define VkglTestCase_038048_2 "_uniform.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038048, VkglTestCase_038048_1, VkglTestCase_038048_2);

#define VkglTestCase_038049_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value.g"
#define VkglTestCase_038049_2 "et_uniform.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038049, VkglTestCase_038049_1, VkglTestCase_038049_2);
