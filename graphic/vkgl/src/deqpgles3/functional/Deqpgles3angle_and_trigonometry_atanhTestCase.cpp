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

#define VkglTestCase_012422_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012422_2 "_and_trigonometry.atanh.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012422, VkglTestCase_012422_1, VkglTestCase_012422_2);

#define VkglTestCase_012423_1 "dEQP-GLES3.functional.shaders.operator.angle_"
#define VkglTestCase_012423_2 "and_trigonometry.atanh.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012423, VkglTestCase_012423_1, VkglTestCase_012423_2);

#define VkglTestCase_012424_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012424_2 "e_and_trigonometry.atanh.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012424, VkglTestCase_012424_1, VkglTestCase_012424_2);

#define VkglTestCase_012425_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012425_2 "_and_trigonometry.atanh.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012425, VkglTestCase_012425_1, VkglTestCase_012425_2);

#define VkglTestCase_012426_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012426_2 "e_and_trigonometry.atanh.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012426, VkglTestCase_012426_1, VkglTestCase_012426_2);

#define VkglTestCase_012427_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012427_2 "_and_trigonometry.atanh.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012427, VkglTestCase_012427_1, VkglTestCase_012427_2);

#define VkglTestCase_012428_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012428_2 "le_and_trigonometry.atanh.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012428, VkglTestCase_012428_1, VkglTestCase_012428_2);

#define VkglTestCase_012429_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012429_2 "e_and_trigonometry.atanh.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012429, VkglTestCase_012429_1, VkglTestCase_012429_2);

#define VkglTestCase_012430_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012430_2 "e_and_trigonometry.atanh.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012430, VkglTestCase_012430_1, VkglTestCase_012430_2);

#define VkglTestCase_012431_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012431_2 "_and_trigonometry.atanh.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012431, VkglTestCase_012431_1, VkglTestCase_012431_2);

#define VkglTestCase_012432_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012432_2 "le_and_trigonometry.atanh.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012432, VkglTestCase_012432_1, VkglTestCase_012432_2);

#define VkglTestCase_012433_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012433_2 "e_and_trigonometry.atanh.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012433, VkglTestCase_012433_1, VkglTestCase_012433_2);

#define VkglTestCase_012434_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012434_2 "e_and_trigonometry.atanh.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012434, VkglTestCase_012434_1, VkglTestCase_012434_2);

#define VkglTestCase_012435_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012435_2 "_and_trigonometry.atanh.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012435, VkglTestCase_012435_1, VkglTestCase_012435_2);

#define VkglTestCase_012436_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012436_2 "le_and_trigonometry.atanh.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012436, VkglTestCase_012436_1, VkglTestCase_012436_2);

#define VkglTestCase_012437_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012437_2 "e_and_trigonometry.atanh.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012437, VkglTestCase_012437_1, VkglTestCase_012437_2);
