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
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036646_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_ac"
#define VkglTestCase_036646_2 "tive_uniformsiv.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036646, VkglTestCase_036646_1, VkglTestCase_036646_2);

#define VkglTestCase_036647_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_act"
#define VkglTestCase_036647_2 "ive_uniformsiv.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036647, VkglTestCase_036647_1, VkglTestCase_036647_2);

#define VkglTestCase_036648_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_a"
#define VkglTestCase_036648_2 "ctive_uniformsiv.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036648, VkglTestCase_036648_1, VkglTestCase_036648_2);

#define VkglTestCase_036649_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_a"
#define VkglTestCase_036649_2 "ctive_uniformsiv.nested_structs_arrays.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036649, VkglTestCase_036649_1, VkglTestCase_036649_2);

#define VkglTestCase_036650_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_ac"
#define VkglTestCase_036650_2 "tive_uniformsiv.nested_structs_arrays.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036650, VkglTestCase_036650_1, VkglTestCase_036650_2);

#define VkglTestCase_036651_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_"
#define VkglTestCase_036651_2 "active_uniformsiv.nested_structs_arrays.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036651, VkglTestCase_036651_1, VkglTestCase_036651_2);

#define VkglTestCase_036652_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_a"
#define VkglTestCase_036652_2 "ctive_uniformsiv.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036652, VkglTestCase_036652_1, VkglTestCase_036652_2);

#define VkglTestCase_036653_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_ac"
#define VkglTestCase_036653_2 "tive_uniformsiv.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036653, VkglTestCase_036653_1, VkglTestCase_036653_2);

#define VkglTestCase_036654_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_"
#define VkglTestCase_036654_2 "active_uniformsiv.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036654, VkglTestCase_036654_1, VkglTestCase_036654_2);

#define VkglTestCase_036655_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_ac"
#define VkglTestCase_036655_2 "tive_uniformsiv.nested_structs_arrays.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036655, VkglTestCase_036655_1, VkglTestCase_036655_2);

#define VkglTestCase_036656_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_act"
#define VkglTestCase_036656_2 "ive_uniformsiv.nested_structs_arrays.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036656, VkglTestCase_036656_1, VkglTestCase_036656_2);

#define VkglTestCase_036657_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_a"
#define VkglTestCase_036657_2 "ctive_uniformsiv.nested_structs_arrays.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036657, VkglTestCase_036657_1, VkglTestCase_036657_2);

#define VkglTestCase_036658_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_ac"
#define VkglTestCase_036658_2 "tive_uniformsiv.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036658, VkglTestCase_036658_1, VkglTestCase_036658_2);

#define VkglTestCase_036659_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_act"
#define VkglTestCase_036659_2 "ive_uniformsiv.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036659, VkglTestCase_036659_1, VkglTestCase_036659_2);

#define VkglTestCase_036660_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_a"
#define VkglTestCase_036660_2 "ctive_uniformsiv.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036660, VkglTestCase_036660_1, VkglTestCase_036660_2);

#define VkglTestCase_036661_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_"
#define VkglTestCase_036661_2 "uniformsiv.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036661, VkglTestCase_036661_1, VkglTestCase_036661_2);

#define VkglTestCase_036662_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_u"
#define VkglTestCase_036662_2 "niformsiv.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036662, VkglTestCase_036662_1, VkglTestCase_036662_2);

#define VkglTestCase_036663_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active"
#define VkglTestCase_036663_2 "_uniformsiv.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036663, VkglTestCase_036663_1, VkglTestCase_036663_2);
