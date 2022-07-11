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

#define VkglTestCase_036592_1 "dEQP-GLES3.functional.uniform_api.info_query.indic"
#define VkglTestCase_036592_2 "es_active_uniformsiv.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036592, VkglTestCase_036592_1, VkglTestCase_036592_2);

#define VkglTestCase_036593_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036593_2 "s_active_uniformsiv.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036593, VkglTestCase_036593_1, VkglTestCase_036593_2);

#define VkglTestCase_036594_1 "dEQP-GLES3.functional.uniform_api.info_query.indi"
#define VkglTestCase_036594_2 "ces_active_uniformsiv.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036594, VkglTestCase_036594_1, VkglTestCase_036594_2);

#define VkglTestCase_036595_1 "dEQP-GLES3.functional.uniform_api.info_query.indic"
#define VkglTestCase_036595_2 "es_active_uniformsiv.basic_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036595, VkglTestCase_036595_1, VkglTestCase_036595_2);

#define VkglTestCase_036596_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036596_2 "s_active_uniformsiv.basic_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036596, VkglTestCase_036596_1, VkglTestCase_036596_2);

#define VkglTestCase_036597_1 "dEQP-GLES3.functional.uniform_api.info_query.indi"
#define VkglTestCase_036597_2 "ces_active_uniformsiv.basic_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036597, VkglTestCase_036597_1, VkglTestCase_036597_2);

#define VkglTestCase_036598_1 "dEQP-GLES3.functional.uniform_api.info_query.indic"
#define VkglTestCase_036598_2 "es_active_uniformsiv.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036598, VkglTestCase_036598_1, VkglTestCase_036598_2);

#define VkglTestCase_036599_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036599_2 "s_active_uniformsiv.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036599, VkglTestCase_036599_1, VkglTestCase_036599_2);

#define VkglTestCase_036600_1 "dEQP-GLES3.functional.uniform_api.info_query.indi"
#define VkglTestCase_036600_2 "ces_active_uniformsiv.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036600, VkglTestCase_036600_1, VkglTestCase_036600_2);

#define VkglTestCase_036601_1 "dEQP-GLES3.functional.uniform_api.info_query.indic"
#define VkglTestCase_036601_2 "es_active_uniformsiv.basic_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036601, VkglTestCase_036601_1, VkglTestCase_036601_2);

#define VkglTestCase_036602_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036602_2 "s_active_uniformsiv.basic_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036602, VkglTestCase_036602_1, VkglTestCase_036602_2);

#define VkglTestCase_036603_1 "dEQP-GLES3.functional.uniform_api.info_query.indi"
#define VkglTestCase_036603_2 "ces_active_uniformsiv.basic_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036603, VkglTestCase_036603_1, VkglTestCase_036603_2);

#define VkglTestCase_036604_1 "dEQP-GLES3.functional.uniform_api.info_query.indic"
#define VkglTestCase_036604_2 "es_active_uniformsiv.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036604, VkglTestCase_036604_1, VkglTestCase_036604_2);

#define VkglTestCase_036605_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036605_2 "s_active_uniformsiv.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036605, VkglTestCase_036605_1, VkglTestCase_036605_2);

#define VkglTestCase_036606_1 "dEQP-GLES3.functional.uniform_api.info_query.indi"
#define VkglTestCase_036606_2 "ces_active_uniformsiv.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036606, VkglTestCase_036606_1, VkglTestCase_036606_2);

#define VkglTestCase_036607_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_act"
#define VkglTestCase_036607_2 "ive_uniformsiv.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036607, VkglTestCase_036607_1, VkglTestCase_036607_2);

#define VkglTestCase_036608_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_acti"
#define VkglTestCase_036608_2 "ve_uniformsiv.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036608, VkglTestCase_036608_1, VkglTestCase_036608_2);

#define VkglTestCase_036609_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_ac"
#define VkglTestCase_036609_2 "tive_uniformsiv.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036609, VkglTestCase_036609_1, VkglTestCase_036609_2);
