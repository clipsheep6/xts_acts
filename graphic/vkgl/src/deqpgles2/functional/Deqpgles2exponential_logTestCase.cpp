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

#define VkglTestCase_005932_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005932_2 "r.exponential.log.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005932, VkglTestCase_005932_1, VkglTestCase_005932_2);

#define VkglTestCase_005933_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005933_2 ".exponential.log.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005933, VkglTestCase_005933_1, VkglTestCase_005933_2);

#define VkglTestCase_005934_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005934_2 "or.exponential.log.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005934, VkglTestCase_005934_1, VkglTestCase_005934_2);

#define VkglTestCase_005935_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005935_2 "r.exponential.log.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005935, VkglTestCase_005935_1, VkglTestCase_005935_2);

#define VkglTestCase_005936_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005936_2 "r.exponential.log.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005936, VkglTestCase_005936_1, VkglTestCase_005936_2);

#define VkglTestCase_005937_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005937_2 ".exponential.log.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005937, VkglTestCase_005937_1, VkglTestCase_005937_2);

#define VkglTestCase_005938_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005938_2 "or.exponential.log.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005938, VkglTestCase_005938_1, VkglTestCase_005938_2);

#define VkglTestCase_005939_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005939_2 "r.exponential.log.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005939, VkglTestCase_005939_1, VkglTestCase_005939_2);

#define VkglTestCase_005940_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005940_2 "r.exponential.log.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005940, VkglTestCase_005940_1, VkglTestCase_005940_2);

#define VkglTestCase_005941_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005941_2 ".exponential.log.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005941, VkglTestCase_005941_1, VkglTestCase_005941_2);

#define VkglTestCase_005942_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005942_2 "or.exponential.log.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005942, VkglTestCase_005942_1, VkglTestCase_005942_2);

#define VkglTestCase_005943_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005943_2 "r.exponential.log.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005943, VkglTestCase_005943_1, VkglTestCase_005943_2);

#define VkglTestCase_005944_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005944_2 "r.exponential.log.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005944, VkglTestCase_005944_1, VkglTestCase_005944_2);

#define VkglTestCase_005945_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005945_2 ".exponential.log.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005945, VkglTestCase_005945_1, VkglTestCase_005945_2);

#define VkglTestCase_005946_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005946_2 "or.exponential.log.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005946, VkglTestCase_005946_1, VkglTestCase_005946_2);

#define VkglTestCase_005947_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005947_2 "r.exponential.log.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005947, VkglTestCase_005947_1, VkglTestCase_005947_2);
