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
#include "../ActsDeqpgles20006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005748_1 "dEQP-GLES2.functional.shaders.operator.angle_"
#define VkglTestCase_005748_2 "and_trigonometry.degrees.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005748, VkglTestCase_005748_1, VkglTestCase_005748_2);

#define VkglTestCase_005749_1 "dEQP-GLES2.functional.shaders.operator.angle_a"
#define VkglTestCase_005749_2 "nd_trigonometry.degrees.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005749, VkglTestCase_005749_1, VkglTestCase_005749_2);

#define VkglTestCase_005750_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005750_2 "_and_trigonometry.degrees.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005750, VkglTestCase_005750_1, VkglTestCase_005750_2);

#define VkglTestCase_005751_1 "dEQP-GLES2.functional.shaders.operator.angle_"
#define VkglTestCase_005751_2 "and_trigonometry.degrees.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005751, VkglTestCase_005751_1, VkglTestCase_005751_2);

#define VkglTestCase_005752_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005752_2 "_and_trigonometry.degrees.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005752, VkglTestCase_005752_1, VkglTestCase_005752_2);

#define VkglTestCase_005753_1 "dEQP-GLES2.functional.shaders.operator.angle_"
#define VkglTestCase_005753_2 "and_trigonometry.degrees.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005753, VkglTestCase_005753_1, VkglTestCase_005753_2);

#define VkglTestCase_005754_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005754_2 "e_and_trigonometry.degrees.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005754, VkglTestCase_005754_1, VkglTestCase_005754_2);

#define VkglTestCase_005755_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005755_2 "_and_trigonometry.degrees.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005755, VkglTestCase_005755_1, VkglTestCase_005755_2);

#define VkglTestCase_005756_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005756_2 "_and_trigonometry.degrees.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005756, VkglTestCase_005756_1, VkglTestCase_005756_2);

#define VkglTestCase_005757_1 "dEQP-GLES2.functional.shaders.operator.angle_"
#define VkglTestCase_005757_2 "and_trigonometry.degrees.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005757, VkglTestCase_005757_1, VkglTestCase_005757_2);

#define VkglTestCase_005758_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005758_2 "e_and_trigonometry.degrees.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005758, VkglTestCase_005758_1, VkglTestCase_005758_2);

#define VkglTestCase_005759_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005759_2 "_and_trigonometry.degrees.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005759, VkglTestCase_005759_1, VkglTestCase_005759_2);

#define VkglTestCase_005760_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005760_2 "_and_trigonometry.degrees.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005760, VkglTestCase_005760_1, VkglTestCase_005760_2);

#define VkglTestCase_005761_1 "dEQP-GLES2.functional.shaders.operator.angle_"
#define VkglTestCase_005761_2 "and_trigonometry.degrees.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005761, VkglTestCase_005761_1, VkglTestCase_005761_2);

#define VkglTestCase_005762_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005762_2 "e_and_trigonometry.degrees.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005762, VkglTestCase_005762_1, VkglTestCase_005762_2);

#define VkglTestCase_005763_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005763_2 "_and_trigonometry.degrees.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005763, VkglTestCase_005763_1, VkglTestCase_005763_2);
