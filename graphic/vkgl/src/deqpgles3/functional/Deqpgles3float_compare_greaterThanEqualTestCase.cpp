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

#define VkglTestCase_013444_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013444_2 "t_compare.greaterThanEqual.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013444, VkglTestCase_013444_1, VkglTestCase_013444_2);

#define VkglTestCase_013445_1 "dEQP-GLES3.functional.shaders.operator.float"
#define VkglTestCase_013445_2 "_compare.greaterThanEqual.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013445, VkglTestCase_013445_1, VkglTestCase_013445_2);

#define VkglTestCase_013446_1 "dEQP-GLES3.functional.shaders.operator.float"
#define VkglTestCase_013446_2 "_compare.greaterThanEqual.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013446, VkglTestCase_013446_1, VkglTestCase_013446_2);

#define VkglTestCase_013447_1 "dEQP-GLES3.functional.shaders.operator.float_"
#define VkglTestCase_013447_2 "compare.greaterThanEqual.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013447, VkglTestCase_013447_1, VkglTestCase_013447_2);

#define VkglTestCase_013448_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013448_2 "t_compare.greaterThanEqual.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013448, VkglTestCase_013448_1, VkglTestCase_013448_2);

#define VkglTestCase_013449_1 "dEQP-GLES3.functional.shaders.operator.float"
#define VkglTestCase_013449_2 "_compare.greaterThanEqual.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013449, VkglTestCase_013449_1, VkglTestCase_013449_2);

#define VkglTestCase_013450_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013450_2 "t_compare.greaterThanEqual.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013450, VkglTestCase_013450_1, VkglTestCase_013450_2);

#define VkglTestCase_013451_1 "dEQP-GLES3.functional.shaders.operator.float"
#define VkglTestCase_013451_2 "_compare.greaterThanEqual.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013451, VkglTestCase_013451_1, VkglTestCase_013451_2);

#define VkglTestCase_013452_1 "dEQP-GLES3.functional.shaders.operator.float"
#define VkglTestCase_013452_2 "_compare.greaterThanEqual.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013452, VkglTestCase_013452_1, VkglTestCase_013452_2);

#define VkglTestCase_013453_1 "dEQP-GLES3.functional.shaders.operator.float_"
#define VkglTestCase_013453_2 "compare.greaterThanEqual.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013453, VkglTestCase_013453_1, VkglTestCase_013453_2);

#define VkglTestCase_013454_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013454_2 "t_compare.greaterThanEqual.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013454, VkglTestCase_013454_1, VkglTestCase_013454_2);

#define VkglTestCase_013455_1 "dEQP-GLES3.functional.shaders.operator.float"
#define VkglTestCase_013455_2 "_compare.greaterThanEqual.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013455, VkglTestCase_013455_1, VkglTestCase_013455_2);

#define VkglTestCase_013456_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013456_2 "t_compare.greaterThanEqual.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013456, VkglTestCase_013456_1, VkglTestCase_013456_2);

#define VkglTestCase_013457_1 "dEQP-GLES3.functional.shaders.operator.float"
#define VkglTestCase_013457_2 "_compare.greaterThanEqual.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013457, VkglTestCase_013457_1, VkglTestCase_013457_2);

#define VkglTestCase_013458_1 "dEQP-GLES3.functional.shaders.operator.float"
#define VkglTestCase_013458_2 "_compare.greaterThanEqual.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013458, VkglTestCase_013458_1, VkglTestCase_013458_2);

#define VkglTestCase_013459_1 "dEQP-GLES3.functional.shaders.operator.float_"
#define VkglTestCase_013459_2 "compare.greaterThanEqual.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013459, VkglTestCase_013459_1, VkglTestCase_013459_2);

#define VkglTestCase_013460_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013460_2 "t_compare.greaterThanEqual.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013460, VkglTestCase_013460_1, VkglTestCase_013460_2);

#define VkglTestCase_013461_1 "dEQP-GLES3.functional.shaders.operator.float"
#define VkglTestCase_013461_2 "_compare.greaterThanEqual.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013461, VkglTestCase_013461_1, VkglTestCase_013461_2);
