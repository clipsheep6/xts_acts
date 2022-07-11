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
#include "../ActsDeqpgles20009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008224_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008224_2 "ns.builtin_functions.matrix.compMult_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008224, VkglTestCase_008224_1, VkglTestCase_008224_2);

#define VkglTestCase_008225_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008225_2 "s.builtin_functions.matrix.compMult_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008225, VkglTestCase_008225_1, VkglTestCase_008225_2);

#define VkglTestCase_008226_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008226_2 "ns.builtin_functions.matrix.compMult_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008226, VkglTestCase_008226_1, VkglTestCase_008226_2);

#define VkglTestCase_008227_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008227_2 "s.builtin_functions.matrix.compMult_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008227, VkglTestCase_008227_1, VkglTestCase_008227_2);

#define VkglTestCase_008228_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008228_2 "ns.builtin_functions.matrix.compMult_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008228, VkglTestCase_008228_1, VkglTestCase_008228_2);

#define VkglTestCase_008229_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008229_2 "s.builtin_functions.matrix.compMult_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008229, VkglTestCase_008229_1, VkglTestCase_008229_2);
