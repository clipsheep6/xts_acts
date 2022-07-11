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

#define VkglTestCase_014097_1 "dEQP-GLES2.functional.uniform_api.info_"
#define VkglTestCase_014097_2 "query.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014097, VkglTestCase_014097_1, VkglTestCase_014097_2);

#define VkglTestCase_014098_1 "dEQP-GLES2.functional.uniform_api.info_q"
#define VkglTestCase_014098_2 "uery.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014098, VkglTestCase_014098_1, VkglTestCase_014098_2);

#define VkglTestCase_014099_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014099_2 "_query.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014099, VkglTestCase_014099_1, VkglTestCase_014099_2);

#define VkglTestCase_014100_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014100_2 "_query.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014100, VkglTestCase_014100_1, VkglTestCase_014100_2);

#define VkglTestCase_014101_1 "dEQP-GLES2.functional.uniform_api.info_"
#define VkglTestCase_014101_2 "query.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014101, VkglTestCase_014101_1, VkglTestCase_014101_2);

#define VkglTestCase_014102_1 "dEQP-GLES2.functional.uniform_api.inf"
#define VkglTestCase_014102_2 "o_query.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014102, VkglTestCase_014102_1, VkglTestCase_014102_2);

#define VkglTestCase_014103_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014103_2 "_query.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014103, VkglTestCase_014103_1, VkglTestCase_014103_2);

#define VkglTestCase_014104_1 "dEQP-GLES2.functional.uniform_api.info_"
#define VkglTestCase_014104_2 "query.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014104, VkglTestCase_014104_1, VkglTestCase_014104_2);

#define VkglTestCase_014105_1 "dEQP-GLES2.functional.uniform_api.inf"
#define VkglTestCase_014105_2 "o_query.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014105, VkglTestCase_014105_1, VkglTestCase_014105_2);

#define VkglTestCase_014106_1 "dEQP-GLES2.functional.uniform_api.info_"
#define VkglTestCase_014106_2 "query.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014106, VkglTestCase_014106_1, VkglTestCase_014106_2);

#define VkglTestCase_014107_1 "dEQP-GLES2.functional.uniform_api.info_q"
#define VkglTestCase_014107_2 "uery.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014107, VkglTestCase_014107_1, VkglTestCase_014107_2);

#define VkglTestCase_014108_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014108_2 "_query.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014108, VkglTestCase_014108_1, VkglTestCase_014108_2);

#define VkglTestCase_014109_1 "dEQP-GLES2.functional.uniform_api.info_query"
#define VkglTestCase_014109_2 ".array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014109, VkglTestCase_014109_1, VkglTestCase_014109_2);

#define VkglTestCase_014110_1 "dEQP-GLES2.functional.uniform_api.info_query."
#define VkglTestCase_014110_2 "array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014110, VkglTestCase_014110_1, VkglTestCase_014110_2);

#define VkglTestCase_014111_1 "dEQP-GLES2.functional.uniform_api.info_quer"
#define VkglTestCase_014111_2 "y.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014111, VkglTestCase_014111_1, VkglTestCase_014111_2);
