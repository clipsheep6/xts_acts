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

#define VkglTestCase_012486_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012486_2 ".exponential.exp2.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012486, VkglTestCase_012486_1, VkglTestCase_012486_2);

#define VkglTestCase_012487_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012487_2 "exponential.exp2.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012487, VkglTestCase_012487_1, VkglTestCase_012487_2);

#define VkglTestCase_012488_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012488_2 "r.exponential.exp2.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012488, VkglTestCase_012488_1, VkglTestCase_012488_2);

#define VkglTestCase_012489_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012489_2 ".exponential.exp2.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012489, VkglTestCase_012489_1, VkglTestCase_012489_2);

#define VkglTestCase_012490_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012490_2 "r.exponential.exp2.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012490, VkglTestCase_012490_1, VkglTestCase_012490_2);

#define VkglTestCase_012491_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012491_2 ".exponential.exp2.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012491, VkglTestCase_012491_1, VkglTestCase_012491_2);

#define VkglTestCase_012492_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012492_2 "or.exponential.exp2.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012492, VkglTestCase_012492_1, VkglTestCase_012492_2);

#define VkglTestCase_012493_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012493_2 "r.exponential.exp2.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012493, VkglTestCase_012493_1, VkglTestCase_012493_2);

#define VkglTestCase_012494_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012494_2 "r.exponential.exp2.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012494, VkglTestCase_012494_1, VkglTestCase_012494_2);

#define VkglTestCase_012495_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012495_2 ".exponential.exp2.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012495, VkglTestCase_012495_1, VkglTestCase_012495_2);

#define VkglTestCase_012496_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012496_2 "or.exponential.exp2.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012496, VkglTestCase_012496_1, VkglTestCase_012496_2);

#define VkglTestCase_012497_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012497_2 "r.exponential.exp2.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012497, VkglTestCase_012497_1, VkglTestCase_012497_2);

#define VkglTestCase_012498_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012498_2 "r.exponential.exp2.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012498, VkglTestCase_012498_1, VkglTestCase_012498_2);

#define VkglTestCase_012499_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012499_2 ".exponential.exp2.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012499, VkglTestCase_012499_1, VkglTestCase_012499_2);

#define VkglTestCase_012500_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012500_2 "or.exponential.exp2.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012500, VkglTestCase_012500_1, VkglTestCase_012500_2);

#define VkglTestCase_012501_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012501_2 "r.exponential.exp2.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012501, VkglTestCase_012501_1, VkglTestCase_012501_2);
