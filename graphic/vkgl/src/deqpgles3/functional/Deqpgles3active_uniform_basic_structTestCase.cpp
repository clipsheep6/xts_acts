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

#define VkglTestCase_036352_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036352_2 "active_uniform.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036352, VkglTestCase_036352_1, VkglTestCase_036352_2);

#define VkglTestCase_036353_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036353_2 "ctive_uniform.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036353, VkglTestCase_036353_1, VkglTestCase_036353_2);

#define VkglTestCase_036354_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036354_2 ".active_uniform.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036354, VkglTestCase_036354_1, VkglTestCase_036354_2);

#define VkglTestCase_036355_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036355_2 ".active_uniform.basic_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036355, VkglTestCase_036355_1, VkglTestCase_036355_2);

#define VkglTestCase_036356_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036356_2 "active_uniform.basic_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036356, VkglTestCase_036356_1, VkglTestCase_036356_2);

#define VkglTestCase_036357_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036357_2 "y.active_uniform.basic_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036357, VkglTestCase_036357_1, VkglTestCase_036357_2);

#define VkglTestCase_036358_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036358_2 ".active_uniform.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036358, VkglTestCase_036358_1, VkglTestCase_036358_2);

#define VkglTestCase_036359_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036359_2 "active_uniform.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036359, VkglTestCase_036359_1, VkglTestCase_036359_2);

#define VkglTestCase_036360_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036360_2 "y.active_uniform.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036360, VkglTestCase_036360_1, VkglTestCase_036360_2);

#define VkglTestCase_036361_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036361_2 "active_uniform.basic_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036361, VkglTestCase_036361_1, VkglTestCase_036361_2);

#define VkglTestCase_036362_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036362_2 "ctive_uniform.basic_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036362, VkglTestCase_036362_1, VkglTestCase_036362_2);

#define VkglTestCase_036363_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036363_2 ".active_uniform.basic_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036363, VkglTestCase_036363_1, VkglTestCase_036363_2);

#define VkglTestCase_036364_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036364_2 "active_uniform.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036364, VkglTestCase_036364_1, VkglTestCase_036364_2);

#define VkglTestCase_036365_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036365_2 "ctive_uniform.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036365, VkglTestCase_036365_1, VkglTestCase_036365_2);

#define VkglTestCase_036366_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036366_2 ".active_uniform.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036366, VkglTestCase_036366_1, VkglTestCase_036366_2);

#define VkglTestCase_036367_1 "dEQP-GLES3.functional.uniform_api.info_query.activ"
#define VkglTestCase_036367_2 "e_uniform.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036367, VkglTestCase_036367_1, VkglTestCase_036367_2);

#define VkglTestCase_036368_1 "dEQP-GLES3.functional.uniform_api.info_query.active"
#define VkglTestCase_036368_2 "_uniform.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036368, VkglTestCase_036368_1, VkglTestCase_036368_2);

#define VkglTestCase_036369_1 "dEQP-GLES3.functional.uniform_api.info_query.acti"
#define VkglTestCase_036369_2 "ve_uniform.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036369, VkglTestCase_036369_1, VkglTestCase_036369_2);
