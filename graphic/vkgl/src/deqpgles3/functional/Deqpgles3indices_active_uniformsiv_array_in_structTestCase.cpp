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

#define VkglTestCase_036628_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036628_2 "_active_uniformsiv.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036628, VkglTestCase_036628_1, VkglTestCase_036628_2);

#define VkglTestCase_036629_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_"
#define VkglTestCase_036629_2 "active_uniformsiv.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036629, VkglTestCase_036629_1, VkglTestCase_036629_2);

#define VkglTestCase_036630_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036630_2 "s_active_uniformsiv.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036630, VkglTestCase_036630_1, VkglTestCase_036630_2);

#define VkglTestCase_036631_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036631_2 "s_active_uniformsiv.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036631, VkglTestCase_036631_1, VkglTestCase_036631_2);

#define VkglTestCase_036632_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036632_2 "_active_uniformsiv.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036632, VkglTestCase_036632_1, VkglTestCase_036632_2);

#define VkglTestCase_036633_1 "dEQP-GLES3.functional.uniform_api.info_query.indic"
#define VkglTestCase_036633_2 "es_active_uniformsiv.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036633, VkglTestCase_036633_1, VkglTestCase_036633_2);

#define VkglTestCase_036634_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036634_2 "s_active_uniformsiv.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036634, VkglTestCase_036634_1, VkglTestCase_036634_2);

#define VkglTestCase_036635_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036635_2 "_active_uniformsiv.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036635, VkglTestCase_036635_1, VkglTestCase_036635_2);

#define VkglTestCase_036636_1 "dEQP-GLES3.functional.uniform_api.info_query.indic"
#define VkglTestCase_036636_2 "es_active_uniformsiv.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036636, VkglTestCase_036636_1, VkglTestCase_036636_2);

#define VkglTestCase_036637_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036637_2 "_active_uniformsiv.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036637, VkglTestCase_036637_1, VkglTestCase_036637_2);

#define VkglTestCase_036638_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_"
#define VkglTestCase_036638_2 "active_uniformsiv.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036638, VkglTestCase_036638_1, VkglTestCase_036638_2);

#define VkglTestCase_036639_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036639_2 "s_active_uniformsiv.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036639, VkglTestCase_036639_1, VkglTestCase_036639_2);

#define VkglTestCase_036640_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036640_2 "_active_uniformsiv.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036640, VkglTestCase_036640_1, VkglTestCase_036640_2);

#define VkglTestCase_036641_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_"
#define VkglTestCase_036641_2 "active_uniformsiv.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036641, VkglTestCase_036641_1, VkglTestCase_036641_2);

#define VkglTestCase_036642_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036642_2 "s_active_uniformsiv.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036642, VkglTestCase_036642_1, VkglTestCase_036642_2);

#define VkglTestCase_036643_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_acti"
#define VkglTestCase_036643_2 "ve_uniformsiv.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036643, VkglTestCase_036643_1, VkglTestCase_036643_2);

#define VkglTestCase_036644_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_activ"
#define VkglTestCase_036644_2 "e_uniformsiv.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036644, VkglTestCase_036644_1, VkglTestCase_036644_2);

#define VkglTestCase_036645_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_act"
#define VkglTestCase_036645_2 "ive_uniformsiv.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036645, VkglTestCase_036645_1, VkglTestCase_036645_2);
