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
#include "../ActsDeqpgles20002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001065_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001065_2 "ns.scalar_to_matrix.float_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001065, VkglTestCase_001065_1, VkglTestCase_001065_2);

#define VkglTestCase_001066_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001066_2 "s.scalar_to_matrix.float_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001066, VkglTestCase_001066_1, VkglTestCase_001066_2);

#define VkglTestCase_001067_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001067_2 "ns.scalar_to_matrix.float_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001067, VkglTestCase_001067_1, VkglTestCase_001067_2);

#define VkglTestCase_001068_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001068_2 "s.scalar_to_matrix.float_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001068, VkglTestCase_001068_1, VkglTestCase_001068_2);

#define VkglTestCase_001069_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001069_2 "ns.scalar_to_matrix.float_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001069, VkglTestCase_001069_1, VkglTestCase_001069_2);

#define VkglTestCase_001070_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001070_2 "s.scalar_to_matrix.float_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001070, VkglTestCase_001070_1, VkglTestCase_001070_2);

#define VkglTestCase_001071_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_001071_2 "ons.scalar_to_matrix.int_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001071, VkglTestCase_001071_1, VkglTestCase_001071_2);

#define VkglTestCase_001072_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001072_2 "ns.scalar_to_matrix.int_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001072, VkglTestCase_001072_1, VkglTestCase_001072_2);

#define VkglTestCase_001073_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_001073_2 "ons.scalar_to_matrix.int_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001073, VkglTestCase_001073_1, VkglTestCase_001073_2);

#define VkglTestCase_001074_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001074_2 "ns.scalar_to_matrix.int_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001074, VkglTestCase_001074_1, VkglTestCase_001074_2);

#define VkglTestCase_001075_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_001075_2 "ons.scalar_to_matrix.int_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001075, VkglTestCase_001075_1, VkglTestCase_001075_2);

#define VkglTestCase_001076_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001076_2 "ns.scalar_to_matrix.int_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001076, VkglTestCase_001076_1, VkglTestCase_001076_2);

#define VkglTestCase_001077_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001077_2 "ns.scalar_to_matrix.bool_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001077, VkglTestCase_001077_1, VkglTestCase_001077_2);

#define VkglTestCase_001078_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001078_2 "s.scalar_to_matrix.bool_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001078, VkglTestCase_001078_1, VkglTestCase_001078_2);

#define VkglTestCase_001079_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001079_2 "ns.scalar_to_matrix.bool_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001079, VkglTestCase_001079_1, VkglTestCase_001079_2);

#define VkglTestCase_001080_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001080_2 "s.scalar_to_matrix.bool_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001080, VkglTestCase_001080_1, VkglTestCase_001080_2);

#define VkglTestCase_001081_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001081_2 "ns.scalar_to_matrix.bool_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001081, VkglTestCase_001081_1, VkglTestCase_001081_2);

#define VkglTestCase_001082_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001082_2 "s.scalar_to_matrix.bool_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001082, VkglTestCase_001082_1, VkglTestCase_001082_2);
