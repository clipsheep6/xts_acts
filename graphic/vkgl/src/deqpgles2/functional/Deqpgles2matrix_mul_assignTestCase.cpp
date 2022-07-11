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
#include "../ActsDeqpgles20008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007583_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007583_2 ".mul_assign.dynamic_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007583, VkglTestCase_007583_1, VkglTestCase_007583_2);

#define VkglTestCase_007584_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007584_2 "mul_assign.dynamic_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007584, VkglTestCase_007584_1, VkglTestCase_007584_2);

#define VkglTestCase_007585_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007585_2 "mul_assign.dynamic_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007585, VkglTestCase_007585_1, VkglTestCase_007585_2);

#define VkglTestCase_007586_1 "dEQP-GLES2.functional.shaders.matrix.m"
#define VkglTestCase_007586_2 "ul_assign.dynamic_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007586, VkglTestCase_007586_1, VkglTestCase_007586_2);

#define VkglTestCase_007587_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007587_2 ".mul_assign.dynamic_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007587, VkglTestCase_007587_1, VkglTestCase_007587_2);

#define VkglTestCase_007588_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007588_2 "mul_assign.dynamic_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007588, VkglTestCase_007588_1, VkglTestCase_007588_2);

#define VkglTestCase_007589_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007589_2 ".mul_assign.dynamic_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007589, VkglTestCase_007589_1, VkglTestCase_007589_2);

#define VkglTestCase_007590_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007590_2 "mul_assign.dynamic_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007590, VkglTestCase_007590_1, VkglTestCase_007590_2);

#define VkglTestCase_007591_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007591_2 "mul_assign.dynamic_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007591, VkglTestCase_007591_1, VkglTestCase_007591_2);

#define VkglTestCase_007592_1 "dEQP-GLES2.functional.shaders.matrix.m"
#define VkglTestCase_007592_2 "ul_assign.dynamic_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007592, VkglTestCase_007592_1, VkglTestCase_007592_2);

#define VkglTestCase_007593_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007593_2 ".mul_assign.dynamic_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007593, VkglTestCase_007593_1, VkglTestCase_007593_2);

#define VkglTestCase_007594_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007594_2 "mul_assign.dynamic_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007594, VkglTestCase_007594_1, VkglTestCase_007594_2);

#define VkglTestCase_007595_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007595_2 ".mul_assign.dynamic_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007595, VkglTestCase_007595_1, VkglTestCase_007595_2);

#define VkglTestCase_007596_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007596_2 "mul_assign.dynamic_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007596, VkglTestCase_007596_1, VkglTestCase_007596_2);

#define VkglTestCase_007597_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007597_2 "mul_assign.dynamic_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007597, VkglTestCase_007597_1, VkglTestCase_007597_2);

#define VkglTestCase_007598_1 "dEQP-GLES2.functional.shaders.matrix.m"
#define VkglTestCase_007598_2 "ul_assign.dynamic_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007598, VkglTestCase_007598_1, VkglTestCase_007598_2);

#define VkglTestCase_007599_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007599_2 ".mul_assign.dynamic_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007599, VkglTestCase_007599_1, VkglTestCase_007599_2);

#define VkglTestCase_007600_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007600_2 "mul_assign.dynamic_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007600, VkglTestCase_007600_1, VkglTestCase_007600_2);
