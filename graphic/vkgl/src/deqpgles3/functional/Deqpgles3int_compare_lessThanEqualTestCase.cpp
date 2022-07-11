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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013516_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013516_2 "t_compare.lessThanEqual.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013516, VkglTestCase_013516_1, VkglTestCase_013516_2);

#define VkglTestCase_013517_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013517_2 "_compare.lessThanEqual.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013517, VkglTestCase_013517_1, VkglTestCase_013517_2);

#define VkglTestCase_013518_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013518_2 "_compare.lessThanEqual.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013518, VkglTestCase_013518_1, VkglTestCase_013518_2);

#define VkglTestCase_013519_1 "dEQP-GLES3.functional.shaders.operator.int_"
#define VkglTestCase_013519_2 "compare.lessThanEqual.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013519, VkglTestCase_013519_1, VkglTestCase_013519_2);

#define VkglTestCase_013520_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013520_2 "t_compare.lessThanEqual.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013520, VkglTestCase_013520_1, VkglTestCase_013520_2);

#define VkglTestCase_013521_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013521_2 "_compare.lessThanEqual.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013521, VkglTestCase_013521_1, VkglTestCase_013521_2);

#define VkglTestCase_013522_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013522_2 "t_compare.lessThanEqual.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013522, VkglTestCase_013522_1, VkglTestCase_013522_2);

#define VkglTestCase_013523_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013523_2 "_compare.lessThanEqual.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013523, VkglTestCase_013523_1, VkglTestCase_013523_2);

#define VkglTestCase_013524_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013524_2 "_compare.lessThanEqual.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013524, VkglTestCase_013524_1, VkglTestCase_013524_2);

#define VkglTestCase_013525_1 "dEQP-GLES3.functional.shaders.operator.int_"
#define VkglTestCase_013525_2 "compare.lessThanEqual.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013525, VkglTestCase_013525_1, VkglTestCase_013525_2);

#define VkglTestCase_013526_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013526_2 "t_compare.lessThanEqual.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013526, VkglTestCase_013526_1, VkglTestCase_013526_2);

#define VkglTestCase_013527_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013527_2 "_compare.lessThanEqual.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013527, VkglTestCase_013527_1, VkglTestCase_013527_2);

#define VkglTestCase_013528_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013528_2 "t_compare.lessThanEqual.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013528, VkglTestCase_013528_1, VkglTestCase_013528_2);

#define VkglTestCase_013529_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013529_2 "_compare.lessThanEqual.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013529, VkglTestCase_013529_1, VkglTestCase_013529_2);

#define VkglTestCase_013530_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013530_2 "_compare.lessThanEqual.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013530, VkglTestCase_013530_1, VkglTestCase_013530_2);

#define VkglTestCase_013531_1 "dEQP-GLES3.functional.shaders.operator.int_"
#define VkglTestCase_013531_2 "compare.lessThanEqual.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013531, VkglTestCase_013531_1, VkglTestCase_013531_2);

#define VkglTestCase_013532_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013532_2 "t_compare.lessThanEqual.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013532, VkglTestCase_013532_1, VkglTestCase_013532_2);

#define VkglTestCase_013533_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013533_2 "_compare.lessThanEqual.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013533, VkglTestCase_013533_1, VkglTestCase_013533_2);
