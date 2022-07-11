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

#define VkglTestCase_005916_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005916_2 "r.exponential.exp.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005916, VkglTestCase_005916_1, VkglTestCase_005916_2);

#define VkglTestCase_005917_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005917_2 ".exponential.exp.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005917, VkglTestCase_005917_1, VkglTestCase_005917_2);

#define VkglTestCase_005918_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005918_2 "or.exponential.exp.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005918, VkglTestCase_005918_1, VkglTestCase_005918_2);

#define VkglTestCase_005919_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005919_2 "r.exponential.exp.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005919, VkglTestCase_005919_1, VkglTestCase_005919_2);

#define VkglTestCase_005920_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005920_2 "r.exponential.exp.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005920, VkglTestCase_005920_1, VkglTestCase_005920_2);

#define VkglTestCase_005921_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005921_2 ".exponential.exp.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005921, VkglTestCase_005921_1, VkglTestCase_005921_2);

#define VkglTestCase_005922_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005922_2 "or.exponential.exp.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005922, VkglTestCase_005922_1, VkglTestCase_005922_2);

#define VkglTestCase_005923_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005923_2 "r.exponential.exp.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005923, VkglTestCase_005923_1, VkglTestCase_005923_2);

#define VkglTestCase_005924_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005924_2 "r.exponential.exp.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005924, VkglTestCase_005924_1, VkglTestCase_005924_2);

#define VkglTestCase_005925_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005925_2 ".exponential.exp.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005925, VkglTestCase_005925_1, VkglTestCase_005925_2);

#define VkglTestCase_005926_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005926_2 "or.exponential.exp.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005926, VkglTestCase_005926_1, VkglTestCase_005926_2);

#define VkglTestCase_005927_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005927_2 "r.exponential.exp.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005927, VkglTestCase_005927_1, VkglTestCase_005927_2);

#define VkglTestCase_005928_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005928_2 "r.exponential.exp.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005928, VkglTestCase_005928_1, VkglTestCase_005928_2);

#define VkglTestCase_005929_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005929_2 ".exponential.exp.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005929, VkglTestCase_005929_1, VkglTestCase_005929_2);

#define VkglTestCase_005930_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005930_2 "or.exponential.exp.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005930, VkglTestCase_005930_1, VkglTestCase_005930_2);

#define VkglTestCase_005931_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005931_2 "r.exponential.exp.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005931, VkglTestCase_005931_1, VkglTestCase_005931_2);
