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

#define VkglTestCase_007823_1 "dEQP-GLES2.functional.shaders.inva"
#define VkglTestCase_007823_2 "riance.highp.common_subexpression_0"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007823, VkglTestCase_007823_1, VkglTestCase_007823_2);

#define VkglTestCase_007824_1 "dEQP-GLES2.functional.shaders.inva"
#define VkglTestCase_007824_2 "riance.highp.common_subexpression_1"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007824, VkglTestCase_007824_1, VkglTestCase_007824_2);

#define VkglTestCase_007825_1 "dEQP-GLES2.functional.shaders.inva"
#define VkglTestCase_007825_2 "riance.highp.common_subexpression_2"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007825, VkglTestCase_007825_1, VkglTestCase_007825_2);

#define VkglTestCase_007826_1 "dEQP-GLES2.functional.shaders.inva"
#define VkglTestCase_007826_2 "riance.highp.common_subexpression_3"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007826, VkglTestCase_007826_1, VkglTestCase_007826_2);

#define VkglTestCase_007827_1 "dEQP-GLES2.functional.shaders.invaria"
#define VkglTestCase_007827_2 "nce.highp.subexpression_precision_lowp"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007827, VkglTestCase_007827_1, VkglTestCase_007827_2);

#define VkglTestCase_007828_1 "dEQP-GLES2.functional.shaders.invarianc"
#define VkglTestCase_007828_2 "e.highp.subexpression_precision_mediump"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007828, VkglTestCase_007828_1, VkglTestCase_007828_2);

#define VkglTestCase_007829_1 "dEQP-GLES2.functional.shaders.invarian"
#define VkglTestCase_007829_2 "ce.highp.subexpression_precision_highp"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007829, VkglTestCase_007829_1, VkglTestCase_007829_2);

#define VkglTestCase_007830_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_007830_2 "ers.invariance.highp.loop_0"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007830, VkglTestCase_007830_1, VkglTestCase_007830_2);

#define VkglTestCase_007831_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_007831_2 "ers.invariance.highp.loop_1"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007831, VkglTestCase_007831_1, VkglTestCase_007831_2);

#define VkglTestCase_007832_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_007832_2 "ers.invariance.highp.loop_2"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007832, VkglTestCase_007832_1, VkglTestCase_007832_2);

#define VkglTestCase_007833_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_007833_2 "ers.invariance.highp.loop_3"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007833, VkglTestCase_007833_1, VkglTestCase_007833_2);

#define VkglTestCase_007834_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_007834_2 "ers.invariance.highp.loop_4"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007834, VkglTestCase_007834_1, VkglTestCase_007834_2);
