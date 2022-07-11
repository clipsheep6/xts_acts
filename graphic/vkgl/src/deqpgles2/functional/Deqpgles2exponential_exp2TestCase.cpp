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

#define VkglTestCase_005948_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005948_2 ".exponential.exp2.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005948, VkglTestCase_005948_1, VkglTestCase_005948_2);

#define VkglTestCase_005949_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005949_2 "exponential.exp2.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005949, VkglTestCase_005949_1, VkglTestCase_005949_2);

#define VkglTestCase_005950_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005950_2 "r.exponential.exp2.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005950, VkglTestCase_005950_1, VkglTestCase_005950_2);

#define VkglTestCase_005951_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005951_2 ".exponential.exp2.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005951, VkglTestCase_005951_1, VkglTestCase_005951_2);

#define VkglTestCase_005952_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005952_2 "r.exponential.exp2.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005952, VkglTestCase_005952_1, VkglTestCase_005952_2);

#define VkglTestCase_005953_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005953_2 ".exponential.exp2.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005953, VkglTestCase_005953_1, VkglTestCase_005953_2);

#define VkglTestCase_005954_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005954_2 "or.exponential.exp2.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005954, VkglTestCase_005954_1, VkglTestCase_005954_2);

#define VkglTestCase_005955_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005955_2 "r.exponential.exp2.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005955, VkglTestCase_005955_1, VkglTestCase_005955_2);

#define VkglTestCase_005956_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005956_2 "r.exponential.exp2.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005956, VkglTestCase_005956_1, VkglTestCase_005956_2);

#define VkglTestCase_005957_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005957_2 ".exponential.exp2.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005957, VkglTestCase_005957_1, VkglTestCase_005957_2);

#define VkglTestCase_005958_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005958_2 "or.exponential.exp2.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005958, VkglTestCase_005958_1, VkglTestCase_005958_2);

#define VkglTestCase_005959_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005959_2 "r.exponential.exp2.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005959, VkglTestCase_005959_1, VkglTestCase_005959_2);

#define VkglTestCase_005960_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005960_2 "r.exponential.exp2.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005960, VkglTestCase_005960_1, VkglTestCase_005960_2);

#define VkglTestCase_005961_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005961_2 ".exponential.exp2.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005961, VkglTestCase_005961_1, VkglTestCase_005961_2);

#define VkglTestCase_005962_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005962_2 "or.exponential.exp2.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005962, VkglTestCase_005962_1, VkglTestCase_005962_2);

#define VkglTestCase_005963_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005963_2 "r.exponential.exp2.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005963, VkglTestCase_005963_1, VkglTestCase_005963_2);
