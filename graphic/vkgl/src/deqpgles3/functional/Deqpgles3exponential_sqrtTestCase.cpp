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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012518_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012518_2 ".exponential.sqrt.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012518, VkglTestCase_012518_1, VkglTestCase_012518_2);

#define VkglTestCase_012519_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012519_2 "exponential.sqrt.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012519, VkglTestCase_012519_1, VkglTestCase_012519_2);

#define VkglTestCase_012520_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012520_2 "r.exponential.sqrt.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012520, VkglTestCase_012520_1, VkglTestCase_012520_2);

#define VkglTestCase_012521_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012521_2 ".exponential.sqrt.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012521, VkglTestCase_012521_1, VkglTestCase_012521_2);

#define VkglTestCase_012522_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012522_2 "r.exponential.sqrt.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012522, VkglTestCase_012522_1, VkglTestCase_012522_2);

#define VkglTestCase_012523_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012523_2 ".exponential.sqrt.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012523, VkglTestCase_012523_1, VkglTestCase_012523_2);

#define VkglTestCase_012524_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012524_2 "or.exponential.sqrt.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012524, VkglTestCase_012524_1, VkglTestCase_012524_2);

#define VkglTestCase_012525_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012525_2 "r.exponential.sqrt.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012525, VkglTestCase_012525_1, VkglTestCase_012525_2);

#define VkglTestCase_012526_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012526_2 "r.exponential.sqrt.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012526, VkglTestCase_012526_1, VkglTestCase_012526_2);

#define VkglTestCase_012527_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012527_2 ".exponential.sqrt.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012527, VkglTestCase_012527_1, VkglTestCase_012527_2);

#define VkglTestCase_012528_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012528_2 "or.exponential.sqrt.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012528, VkglTestCase_012528_1, VkglTestCase_012528_2);

#define VkglTestCase_012529_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012529_2 "r.exponential.sqrt.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012529, VkglTestCase_012529_1, VkglTestCase_012529_2);

#define VkglTestCase_012530_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012530_2 "r.exponential.sqrt.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012530, VkglTestCase_012530_1, VkglTestCase_012530_2);

#define VkglTestCase_012531_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012531_2 ".exponential.sqrt.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012531, VkglTestCase_012531_1, VkglTestCase_012531_2);

#define VkglTestCase_012532_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012532_2 "or.exponential.sqrt.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012532, VkglTestCase_012532_1, VkglTestCase_012532_2);

#define VkglTestCase_012533_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012533_2 "r.exponential.sqrt.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012533, VkglTestCase_012533_1, VkglTestCase_012533_2);
