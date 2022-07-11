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

#define VkglTestCase_007565_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007565_2 ".sub_assign.dynamic_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007565, VkglTestCase_007565_1, VkglTestCase_007565_2);

#define VkglTestCase_007566_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007566_2 "sub_assign.dynamic_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007566, VkglTestCase_007566_1, VkglTestCase_007566_2);

#define VkglTestCase_007567_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007567_2 "sub_assign.dynamic_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007567, VkglTestCase_007567_1, VkglTestCase_007567_2);

#define VkglTestCase_007568_1 "dEQP-GLES2.functional.shaders.matrix.s"
#define VkglTestCase_007568_2 "ub_assign.dynamic_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007568, VkglTestCase_007568_1, VkglTestCase_007568_2);

#define VkglTestCase_007569_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007569_2 ".sub_assign.dynamic_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007569, VkglTestCase_007569_1, VkglTestCase_007569_2);

#define VkglTestCase_007570_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007570_2 "sub_assign.dynamic_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007570, VkglTestCase_007570_1, VkglTestCase_007570_2);

#define VkglTestCase_007571_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007571_2 ".sub_assign.dynamic_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007571, VkglTestCase_007571_1, VkglTestCase_007571_2);

#define VkglTestCase_007572_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007572_2 "sub_assign.dynamic_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007572, VkglTestCase_007572_1, VkglTestCase_007572_2);

#define VkglTestCase_007573_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007573_2 "sub_assign.dynamic_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007573, VkglTestCase_007573_1, VkglTestCase_007573_2);

#define VkglTestCase_007574_1 "dEQP-GLES2.functional.shaders.matrix.s"
#define VkglTestCase_007574_2 "ub_assign.dynamic_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007574, VkglTestCase_007574_1, VkglTestCase_007574_2);

#define VkglTestCase_007575_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007575_2 ".sub_assign.dynamic_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007575, VkglTestCase_007575_1, VkglTestCase_007575_2);

#define VkglTestCase_007576_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007576_2 "sub_assign.dynamic_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007576, VkglTestCase_007576_1, VkglTestCase_007576_2);

#define VkglTestCase_007577_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007577_2 ".sub_assign.dynamic_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007577, VkglTestCase_007577_1, VkglTestCase_007577_2);

#define VkglTestCase_007578_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007578_2 "sub_assign.dynamic_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007578, VkglTestCase_007578_1, VkglTestCase_007578_2);

#define VkglTestCase_007579_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007579_2 "sub_assign.dynamic_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007579, VkglTestCase_007579_1, VkglTestCase_007579_2);

#define VkglTestCase_007580_1 "dEQP-GLES2.functional.shaders.matrix.s"
#define VkglTestCase_007580_2 "ub_assign.dynamic_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007580, VkglTestCase_007580_1, VkglTestCase_007580_2);

#define VkglTestCase_007581_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007581_2 ".sub_assign.dynamic_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007581, VkglTestCase_007581_1, VkglTestCase_007581_2);

#define VkglTestCase_007582_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007582_2 "sub_assign.dynamic_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007582, VkglTestCase_007582_1, VkglTestCase_007582_2);
