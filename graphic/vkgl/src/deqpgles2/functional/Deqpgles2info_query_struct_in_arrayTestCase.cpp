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

#define VkglTestCase_014082_1 "dEQP-GLES2.functional.uniform_api.info_"
#define VkglTestCase_014082_2 "query.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014082, VkglTestCase_014082_1, VkglTestCase_014082_2);

#define VkglTestCase_014083_1 "dEQP-GLES2.functional.uniform_api.info_q"
#define VkglTestCase_014083_2 "uery.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014083, VkglTestCase_014083_1, VkglTestCase_014083_2);

#define VkglTestCase_014084_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014084_2 "_query.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014084, VkglTestCase_014084_1, VkglTestCase_014084_2);

#define VkglTestCase_014085_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014085_2 "_query.struct_in_array.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014085, VkglTestCase_014085_1, VkglTestCase_014085_2);

#define VkglTestCase_014086_1 "dEQP-GLES2.functional.uniform_api.info_"
#define VkglTestCase_014086_2 "query.struct_in_array.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014086, VkglTestCase_014086_1, VkglTestCase_014086_2);

#define VkglTestCase_014087_1 "dEQP-GLES2.functional.uniform_api.inf"
#define VkglTestCase_014087_2 "o_query.struct_in_array.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014087, VkglTestCase_014087_1, VkglTestCase_014087_2);

#define VkglTestCase_014088_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014088_2 "_query.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014088, VkglTestCase_014088_1, VkglTestCase_014088_2);

#define VkglTestCase_014089_1 "dEQP-GLES2.functional.uniform_api.info_"
#define VkglTestCase_014089_2 "query.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014089, VkglTestCase_014089_1, VkglTestCase_014089_2);

#define VkglTestCase_014090_1 "dEQP-GLES2.functional.uniform_api.inf"
#define VkglTestCase_014090_2 "o_query.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014090, VkglTestCase_014090_1, VkglTestCase_014090_2);

#define VkglTestCase_014091_1 "dEQP-GLES2.functional.uniform_api.info_"
#define VkglTestCase_014091_2 "query.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014091, VkglTestCase_014091_1, VkglTestCase_014091_2);

#define VkglTestCase_014092_1 "dEQP-GLES2.functional.uniform_api.info_q"
#define VkglTestCase_014092_2 "uery.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014092, VkglTestCase_014092_1, VkglTestCase_014092_2);

#define VkglTestCase_014093_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014093_2 "_query.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014093, VkglTestCase_014093_1, VkglTestCase_014093_2);

#define VkglTestCase_014094_1 "dEQP-GLES2.functional.uniform_api.info_query"
#define VkglTestCase_014094_2 ".struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014094, VkglTestCase_014094_1, VkglTestCase_014094_2);

#define VkglTestCase_014095_1 "dEQP-GLES2.functional.uniform_api.info_query."
#define VkglTestCase_014095_2 "struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014095, VkglTestCase_014095_1, VkglTestCase_014095_2);

#define VkglTestCase_014096_1 "dEQP-GLES2.functional.uniform_api.info_quer"
#define VkglTestCase_014096_2 "y.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014096, VkglTestCase_014096_1, VkglTestCase_014096_2);
