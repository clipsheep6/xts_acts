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

#define VkglTestCase_014112_1 "dEQP-GLES2.functional.uniform_api.info_que"
#define VkglTestCase_014112_2 "ry.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014112, VkglTestCase_014112_1, VkglTestCase_014112_2);

#define VkglTestCase_014113_1 "dEQP-GLES2.functional.uniform_api.info_quer"
#define VkglTestCase_014113_2 "y.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014113, VkglTestCase_014113_1, VkglTestCase_014113_2);

#define VkglTestCase_014114_1 "dEQP-GLES2.functional.uniform_api.info_qu"
#define VkglTestCase_014114_2 "ery.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014114, VkglTestCase_014114_1, VkglTestCase_014114_2);

#define VkglTestCase_014115_1 "dEQP-GLES2.functional.uniform_api.info_que"
#define VkglTestCase_014115_2 "ry.nested_structs_arrays.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014115, VkglTestCase_014115_1, VkglTestCase_014115_2);

#define VkglTestCase_014116_1 "dEQP-GLES2.functional.uniform_api.info_qu"
#define VkglTestCase_014116_2 "ery.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014116, VkglTestCase_014116_1, VkglTestCase_014116_2);

#define VkglTestCase_014117_1 "dEQP-GLES2.functional.uniform_api.info_que"
#define VkglTestCase_014117_2 "ry.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014117, VkglTestCase_014117_1, VkglTestCase_014117_2);

#define VkglTestCase_014118_1 "dEQP-GLES2.functional.uniform_api.info_q"
#define VkglTestCase_014118_2 "uery.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014118, VkglTestCase_014118_1, VkglTestCase_014118_2);

#define VkglTestCase_014119_1 "dEQP-GLES2.functional.uniform_api.info_que"
#define VkglTestCase_014119_2 "ry.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014119, VkglTestCase_014119_1, VkglTestCase_014119_2);

#define VkglTestCase_014120_1 "dEQP-GLES2.functional.uniform_api.info_quer"
#define VkglTestCase_014120_2 "y.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014120, VkglTestCase_014120_1, VkglTestCase_014120_2);

#define VkglTestCase_014121_1 "dEQP-GLES2.functional.uniform_api.info_qu"
#define VkglTestCase_014121_2 "ery.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014121, VkglTestCase_014121_1, VkglTestCase_014121_2);

#define VkglTestCase_014122_1 "dEQP-GLES2.functional.uniform_api.info_query.ne"
#define VkglTestCase_014122_2 "sted_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014122, VkglTestCase_014122_1, VkglTestCase_014122_2);

#define VkglTestCase_014123_1 "dEQP-GLES2.functional.uniform_api.info_query.nes"
#define VkglTestCase_014123_2 "ted_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014123, VkglTestCase_014123_1, VkglTestCase_014123_2);

#define VkglTestCase_014124_1 "dEQP-GLES2.functional.uniform_api.info_query.n"
#define VkglTestCase_014124_2 "ested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014124, VkglTestCase_014124_1, VkglTestCase_014124_2);
