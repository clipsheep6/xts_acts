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
#include "../ActsDeqpgles20007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006512_1 "dEQP-GLES2.functional.shaders.operator.ge"
#define VkglTestCase_006512_2 "ometric.refract.mediump_float_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006512, VkglTestCase_006512_1, VkglTestCase_006512_2);

#define VkglTestCase_006513_1 "dEQP-GLES2.functional.shaders.operator.geo"
#define VkglTestCase_006513_2 "metric.refract.mediump_float_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006513, VkglTestCase_006513_1, VkglTestCase_006513_2);

#define VkglTestCase_006514_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006514_2 "eometric.refract.highp_float_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006514, VkglTestCase_006514_1, VkglTestCase_006514_2);

#define VkglTestCase_006515_1 "dEQP-GLES2.functional.shaders.operator.ge"
#define VkglTestCase_006515_2 "ometric.refract.highp_float_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006515, VkglTestCase_006515_1, VkglTestCase_006515_2);

#define VkglTestCase_006516_1 "dEQP-GLES2.functional.shaders.operator.ge"
#define VkglTestCase_006516_2 "ometric.refract.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006516, VkglTestCase_006516_1, VkglTestCase_006516_2);

#define VkglTestCase_006517_1 "dEQP-GLES2.functional.shaders.operator.geo"
#define VkglTestCase_006517_2 "metric.refract.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006517, VkglTestCase_006517_1, VkglTestCase_006517_2);

#define VkglTestCase_006518_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006518_2 "eometric.refract.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006518, VkglTestCase_006518_1, VkglTestCase_006518_2);

#define VkglTestCase_006519_1 "dEQP-GLES2.functional.shaders.operator.ge"
#define VkglTestCase_006519_2 "ometric.refract.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006519, VkglTestCase_006519_1, VkglTestCase_006519_2);

#define VkglTestCase_006520_1 "dEQP-GLES2.functional.shaders.operator.ge"
#define VkglTestCase_006520_2 "ometric.refract.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006520, VkglTestCase_006520_1, VkglTestCase_006520_2);

#define VkglTestCase_006521_1 "dEQP-GLES2.functional.shaders.operator.geo"
#define VkglTestCase_006521_2 "metric.refract.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006521, VkglTestCase_006521_1, VkglTestCase_006521_2);

#define VkglTestCase_006522_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006522_2 "eometric.refract.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006522, VkglTestCase_006522_1, VkglTestCase_006522_2);

#define VkglTestCase_006523_1 "dEQP-GLES2.functional.shaders.operator.ge"
#define VkglTestCase_006523_2 "ometric.refract.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006523, VkglTestCase_006523_1, VkglTestCase_006523_2);

#define VkglTestCase_006524_1 "dEQP-GLES2.functional.shaders.operator.ge"
#define VkglTestCase_006524_2 "ometric.refract.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006524, VkglTestCase_006524_1, VkglTestCase_006524_2);

#define VkglTestCase_006525_1 "dEQP-GLES2.functional.shaders.operator.geo"
#define VkglTestCase_006525_2 "metric.refract.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006525, VkglTestCase_006525_1, VkglTestCase_006525_2);

#define VkglTestCase_006526_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006526_2 "eometric.refract.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006526, VkglTestCase_006526_1, VkglTestCase_006526_2);

#define VkglTestCase_006527_1 "dEQP-GLES2.functional.shaders.operator.ge"
#define VkglTestCase_006527_2 "ometric.refract.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006527, VkglTestCase_006527_1, VkglTestCase_006527_2);
