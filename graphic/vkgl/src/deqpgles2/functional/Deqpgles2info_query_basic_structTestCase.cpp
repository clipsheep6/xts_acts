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

#define VkglTestCase_014067_1 "dEQP-GLES2.functional.uniform_api.inf"
#define VkglTestCase_014067_2 "o_query.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014067, VkglTestCase_014067_1, VkglTestCase_014067_2);

#define VkglTestCase_014068_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014068_2 "_query.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014068, VkglTestCase_014068_1, VkglTestCase_014068_2);

#define VkglTestCase_014069_1 "dEQP-GLES2.functional.uniform_api.in"
#define VkglTestCase_014069_2 "fo_query.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014069, VkglTestCase_014069_1, VkglTestCase_014069_2);

#define VkglTestCase_014070_1 "dEQP-GLES2.functional.uniform_api.inf"
#define VkglTestCase_014070_2 "o_query.basic_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014070, VkglTestCase_014070_1, VkglTestCase_014070_2);

#define VkglTestCase_014071_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014071_2 "_query.basic_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014071, VkglTestCase_014071_1, VkglTestCase_014071_2);

#define VkglTestCase_014072_1 "dEQP-GLES2.functional.uniform_api.in"
#define VkglTestCase_014072_2 "fo_query.basic_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014072, VkglTestCase_014072_1, VkglTestCase_014072_2);

#define VkglTestCase_014073_1 "dEQP-GLES2.functional.uniform_api.inf"
#define VkglTestCase_014073_2 "o_query.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014073, VkglTestCase_014073_1, VkglTestCase_014073_2);

#define VkglTestCase_014074_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014074_2 "_query.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014074, VkglTestCase_014074_1, VkglTestCase_014074_2);

#define VkglTestCase_014075_1 "dEQP-GLES2.functional.uniform_api.in"
#define VkglTestCase_014075_2 "fo_query.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014075, VkglTestCase_014075_1, VkglTestCase_014075_2);

#define VkglTestCase_014076_1 "dEQP-GLES2.functional.uniform_api.inf"
#define VkglTestCase_014076_2 "o_query.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014076, VkglTestCase_014076_1, VkglTestCase_014076_2);

#define VkglTestCase_014077_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014077_2 "_query.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014077, VkglTestCase_014077_1, VkglTestCase_014077_2);

#define VkglTestCase_014078_1 "dEQP-GLES2.functional.uniform_api.in"
#define VkglTestCase_014078_2 "fo_query.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014078, VkglTestCase_014078_1, VkglTestCase_014078_2);

#define VkglTestCase_014079_1 "dEQP-GLES2.functional.uniform_api.info_quer"
#define VkglTestCase_014079_2 "y.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014079, VkglTestCase_014079_1, VkglTestCase_014079_2);

#define VkglTestCase_014080_1 "dEQP-GLES2.functional.uniform_api.info_query"
#define VkglTestCase_014080_2 ".basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014080, VkglTestCase_014080_1, VkglTestCase_014080_2);

#define VkglTestCase_014081_1 "dEQP-GLES2.functional.uniform_api.info_que"
#define VkglTestCase_014081_2 "ry.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014081, VkglTestCase_014081_1, VkglTestCase_014081_2);
