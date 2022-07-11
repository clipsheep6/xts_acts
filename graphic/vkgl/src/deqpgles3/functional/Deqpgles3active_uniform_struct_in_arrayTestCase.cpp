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

#define VkglTestCase_036370_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036370_2 "ctive_uniform.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036370, VkglTestCase_036370_1, VkglTestCase_036370_2);

#define VkglTestCase_036371_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036371_2 "tive_uniform.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036371, VkglTestCase_036371_1, VkglTestCase_036371_2);

#define VkglTestCase_036372_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036372_2 "active_uniform.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036372, VkglTestCase_036372_1, VkglTestCase_036372_2);

#define VkglTestCase_036373_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036373_2 "ctive_uniform.struct_in_array.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036373, VkglTestCase_036373_1, VkglTestCase_036373_2);

#define VkglTestCase_036374_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036374_2 "tive_uniform.struct_in_array.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036374, VkglTestCase_036374_1, VkglTestCase_036374_2);

#define VkglTestCase_036375_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036375_2 "active_uniform.struct_in_array.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036375, VkglTestCase_036375_1, VkglTestCase_036375_2);

#define VkglTestCase_036376_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036376_2 "ctive_uniform.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036376, VkglTestCase_036376_1, VkglTestCase_036376_2);

#define VkglTestCase_036377_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036377_2 "tive_uniform.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036377, VkglTestCase_036377_1, VkglTestCase_036377_2);

#define VkglTestCase_036378_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036378_2 "active_uniform.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036378, VkglTestCase_036378_1, VkglTestCase_036378_2);

#define VkglTestCase_036379_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036379_2 "ctive_uniform.struct_in_array.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036379, VkglTestCase_036379_1, VkglTestCase_036379_2);

#define VkglTestCase_036380_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036380_2 "tive_uniform.struct_in_array.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036380, VkglTestCase_036380_1, VkglTestCase_036380_2);

#define VkglTestCase_036381_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036381_2 "active_uniform.struct_in_array.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036381, VkglTestCase_036381_1, VkglTestCase_036381_2);

#define VkglTestCase_036382_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036382_2 "ctive_uniform.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036382, VkglTestCase_036382_1, VkglTestCase_036382_2);

#define VkglTestCase_036383_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036383_2 "tive_uniform.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036383, VkglTestCase_036383_1, VkglTestCase_036383_2);

#define VkglTestCase_036384_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036384_2 "active_uniform.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036384, VkglTestCase_036384_1, VkglTestCase_036384_2);

#define VkglTestCase_036385_1 "dEQP-GLES3.functional.uniform_api.info_query.active_"
#define VkglTestCase_036385_2 "uniform.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036385, VkglTestCase_036385_1, VkglTestCase_036385_2);

#define VkglTestCase_036386_1 "dEQP-GLES3.functional.uniform_api.info_query.active_u"
#define VkglTestCase_036386_2 "niform.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036386, VkglTestCase_036386_1, VkglTestCase_036386_2);

#define VkglTestCase_036387_1 "dEQP-GLES3.functional.uniform_api.info_query.active"
#define VkglTestCase_036387_2 "_uniform.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036387, VkglTestCase_036387_1, VkglTestCase_036387_2);
