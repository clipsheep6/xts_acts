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

#define VkglTestCase_036388_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036388_2 "ctive_uniform.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036388, VkglTestCase_036388_1, VkglTestCase_036388_2);

#define VkglTestCase_036389_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036389_2 "tive_uniform.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036389, VkglTestCase_036389_1, VkglTestCase_036389_2);

#define VkglTestCase_036390_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036390_2 "active_uniform.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036390, VkglTestCase_036390_1, VkglTestCase_036390_2);

#define VkglTestCase_036391_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036391_2 "ctive_uniform.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036391, VkglTestCase_036391_1, VkglTestCase_036391_2);

#define VkglTestCase_036392_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036392_2 "tive_uniform.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036392, VkglTestCase_036392_1, VkglTestCase_036392_2);

#define VkglTestCase_036393_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036393_2 "active_uniform.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036393, VkglTestCase_036393_1, VkglTestCase_036393_2);

#define VkglTestCase_036394_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036394_2 "ctive_uniform.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036394, VkglTestCase_036394_1, VkglTestCase_036394_2);

#define VkglTestCase_036395_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036395_2 "tive_uniform.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036395, VkglTestCase_036395_1, VkglTestCase_036395_2);

#define VkglTestCase_036396_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036396_2 "active_uniform.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036396, VkglTestCase_036396_1, VkglTestCase_036396_2);

#define VkglTestCase_036397_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036397_2 "ctive_uniform.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036397, VkglTestCase_036397_1, VkglTestCase_036397_2);

#define VkglTestCase_036398_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036398_2 "tive_uniform.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036398, VkglTestCase_036398_1, VkglTestCase_036398_2);

#define VkglTestCase_036399_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036399_2 "active_uniform.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036399, VkglTestCase_036399_1, VkglTestCase_036399_2);

#define VkglTestCase_036400_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036400_2 "ctive_uniform.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036400, VkglTestCase_036400_1, VkglTestCase_036400_2);

#define VkglTestCase_036401_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036401_2 "tive_uniform.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036401, VkglTestCase_036401_1, VkglTestCase_036401_2);

#define VkglTestCase_036402_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036402_2 "active_uniform.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036402, VkglTestCase_036402_1, VkglTestCase_036402_2);

#define VkglTestCase_036403_1 "dEQP-GLES3.functional.uniform_api.info_query.active_"
#define VkglTestCase_036403_2 "uniform.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036403, VkglTestCase_036403_1, VkglTestCase_036403_2);

#define VkglTestCase_036404_1 "dEQP-GLES3.functional.uniform_api.info_query.active_u"
#define VkglTestCase_036404_2 "niform.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036404, VkglTestCase_036404_1, VkglTestCase_036404_2);

#define VkglTestCase_036405_1 "dEQP-GLES3.functional.uniform_api.info_query.active"
#define VkglTestCase_036405_2 "_uniform.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036405, VkglTestCase_036405_1, VkglTestCase_036405_2);
