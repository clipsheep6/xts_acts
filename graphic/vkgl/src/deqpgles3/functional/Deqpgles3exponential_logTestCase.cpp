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

#define VkglTestCase_012470_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012470_2 "r.exponential.log.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012470, VkglTestCase_012470_1, VkglTestCase_012470_2);

#define VkglTestCase_012471_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012471_2 ".exponential.log.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012471, VkglTestCase_012471_1, VkglTestCase_012471_2);

#define VkglTestCase_012472_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012472_2 "or.exponential.log.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012472, VkglTestCase_012472_1, VkglTestCase_012472_2);

#define VkglTestCase_012473_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012473_2 "r.exponential.log.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012473, VkglTestCase_012473_1, VkglTestCase_012473_2);

#define VkglTestCase_012474_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012474_2 "r.exponential.log.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012474, VkglTestCase_012474_1, VkglTestCase_012474_2);

#define VkglTestCase_012475_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012475_2 ".exponential.log.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012475, VkglTestCase_012475_1, VkglTestCase_012475_2);

#define VkglTestCase_012476_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012476_2 "or.exponential.log.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012476, VkglTestCase_012476_1, VkglTestCase_012476_2);

#define VkglTestCase_012477_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012477_2 "r.exponential.log.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012477, VkglTestCase_012477_1, VkglTestCase_012477_2);

#define VkglTestCase_012478_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012478_2 "r.exponential.log.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012478, VkglTestCase_012478_1, VkglTestCase_012478_2);

#define VkglTestCase_012479_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012479_2 ".exponential.log.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012479, VkglTestCase_012479_1, VkglTestCase_012479_2);

#define VkglTestCase_012480_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012480_2 "or.exponential.log.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012480, VkglTestCase_012480_1, VkglTestCase_012480_2);

#define VkglTestCase_012481_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012481_2 "r.exponential.log.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012481, VkglTestCase_012481_1, VkglTestCase_012481_2);

#define VkglTestCase_012482_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012482_2 "r.exponential.log.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012482, VkglTestCase_012482_1, VkglTestCase_012482_2);

#define VkglTestCase_012483_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012483_2 ".exponential.log.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012483, VkglTestCase_012483_1, VkglTestCase_012483_2);

#define VkglTestCase_012484_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012484_2 "or.exponential.log.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012484, VkglTestCase_012484_1, VkglTestCase_012484_2);

#define VkglTestCase_012485_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012485_2 "r.exponential.log.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012485, VkglTestCase_012485_1, VkglTestCase_012485_2);
