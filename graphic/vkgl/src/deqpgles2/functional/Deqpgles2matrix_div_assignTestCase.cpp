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

#define VkglTestCase_007601_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007601_2 ".div_assign.dynamic_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007601, VkglTestCase_007601_1, VkglTestCase_007601_2);

#define VkglTestCase_007602_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007602_2 "div_assign.dynamic_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007602, VkglTestCase_007602_1, VkglTestCase_007602_2);

#define VkglTestCase_007603_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007603_2 "div_assign.dynamic_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007603, VkglTestCase_007603_1, VkglTestCase_007603_2);

#define VkglTestCase_007604_1 "dEQP-GLES2.functional.shaders.matrix.d"
#define VkglTestCase_007604_2 "iv_assign.dynamic_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007604, VkglTestCase_007604_1, VkglTestCase_007604_2);

#define VkglTestCase_007605_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007605_2 ".div_assign.dynamic_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007605, VkglTestCase_007605_1, VkglTestCase_007605_2);

#define VkglTestCase_007606_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007606_2 "div_assign.dynamic_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007606, VkglTestCase_007606_1, VkglTestCase_007606_2);

#define VkglTestCase_007607_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007607_2 ".div_assign.dynamic_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007607, VkglTestCase_007607_1, VkglTestCase_007607_2);

#define VkglTestCase_007608_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007608_2 "div_assign.dynamic_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007608, VkglTestCase_007608_1, VkglTestCase_007608_2);

#define VkglTestCase_007609_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007609_2 "div_assign.dynamic_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007609, VkglTestCase_007609_1, VkglTestCase_007609_2);

#define VkglTestCase_007610_1 "dEQP-GLES2.functional.shaders.matrix.d"
#define VkglTestCase_007610_2 "iv_assign.dynamic_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007610, VkglTestCase_007610_1, VkglTestCase_007610_2);

#define VkglTestCase_007611_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007611_2 ".div_assign.dynamic_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007611, VkglTestCase_007611_1, VkglTestCase_007611_2);

#define VkglTestCase_007612_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007612_2 "div_assign.dynamic_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007612, VkglTestCase_007612_1, VkglTestCase_007612_2);

#define VkglTestCase_007613_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007613_2 ".div_assign.dynamic_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007613, VkglTestCase_007613_1, VkglTestCase_007613_2);

#define VkglTestCase_007614_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007614_2 "div_assign.dynamic_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007614, VkglTestCase_007614_1, VkglTestCase_007614_2);

#define VkglTestCase_007615_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007615_2 "div_assign.dynamic_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007615, VkglTestCase_007615_1, VkglTestCase_007615_2);

#define VkglTestCase_007616_1 "dEQP-GLES2.functional.shaders.matrix.d"
#define VkglTestCase_007616_2 "iv_assign.dynamic_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007616, VkglTestCase_007616_1, VkglTestCase_007616_2);

#define VkglTestCase_007617_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007617_2 ".div_assign.dynamic_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007617, VkglTestCase_007617_1, VkglTestCase_007617_2);

#define VkglTestCase_007618_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007618_2 "div_assign.dynamic_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007618, VkglTestCase_007618_1, VkglTestCase_007618_2);
