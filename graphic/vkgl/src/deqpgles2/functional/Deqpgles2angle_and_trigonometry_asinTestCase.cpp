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

#define VkglTestCase_005836_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005836_2 "e_and_trigonometry.asin.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005836, VkglTestCase_005836_1, VkglTestCase_005836_2);

#define VkglTestCase_005837_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005837_2 "_and_trigonometry.asin.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005837, VkglTestCase_005837_1, VkglTestCase_005837_2);

#define VkglTestCase_005838_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005838_2 "le_and_trigonometry.asin.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005838, VkglTestCase_005838_1, VkglTestCase_005838_2);

#define VkglTestCase_005839_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005839_2 "e_and_trigonometry.asin.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005839, VkglTestCase_005839_1, VkglTestCase_005839_2);

#define VkglTestCase_005840_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005840_2 "e_and_trigonometry.asin.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005840, VkglTestCase_005840_1, VkglTestCase_005840_2);

#define VkglTestCase_005841_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005841_2 "_and_trigonometry.asin.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005841, VkglTestCase_005841_1, VkglTestCase_005841_2);

#define VkglTestCase_005842_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005842_2 "le_and_trigonometry.asin.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005842, VkglTestCase_005842_1, VkglTestCase_005842_2);

#define VkglTestCase_005843_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005843_2 "e_and_trigonometry.asin.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005843, VkglTestCase_005843_1, VkglTestCase_005843_2);

#define VkglTestCase_005844_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005844_2 "e_and_trigonometry.asin.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005844, VkglTestCase_005844_1, VkglTestCase_005844_2);

#define VkglTestCase_005845_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005845_2 "_and_trigonometry.asin.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005845, VkglTestCase_005845_1, VkglTestCase_005845_2);

#define VkglTestCase_005846_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005846_2 "le_and_trigonometry.asin.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005846, VkglTestCase_005846_1, VkglTestCase_005846_2);

#define VkglTestCase_005847_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005847_2 "e_and_trigonometry.asin.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005847, VkglTestCase_005847_1, VkglTestCase_005847_2);

#define VkglTestCase_005848_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005848_2 "e_and_trigonometry.asin.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005848, VkglTestCase_005848_1, VkglTestCase_005848_2);

#define VkglTestCase_005849_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005849_2 "_and_trigonometry.asin.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005849, VkglTestCase_005849_1, VkglTestCase_005849_2);

#define VkglTestCase_005850_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005850_2 "le_and_trigonometry.asin.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005850, VkglTestCase_005850_1, VkglTestCase_005850_2);

#define VkglTestCase_005851_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005851_2 "e_and_trigonometry.asin.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005851, VkglTestCase_005851_1, VkglTestCase_005851_2);
