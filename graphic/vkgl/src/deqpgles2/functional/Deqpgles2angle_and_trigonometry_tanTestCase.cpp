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

#define VkglTestCase_005812_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005812_2 "e_and_trigonometry.tan.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005812, VkglTestCase_005812_1, VkglTestCase_005812_2);

#define VkglTestCase_005813_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005813_2 "_and_trigonometry.tan.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005813, VkglTestCase_005813_1, VkglTestCase_005813_2);

#define VkglTestCase_005814_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005814_2 "le_and_trigonometry.tan.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005814, VkglTestCase_005814_1, VkglTestCase_005814_2);

#define VkglTestCase_005815_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005815_2 "e_and_trigonometry.tan.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005815, VkglTestCase_005815_1, VkglTestCase_005815_2);

#define VkglTestCase_005816_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005816_2 "le_and_trigonometry.tan.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005816, VkglTestCase_005816_1, VkglTestCase_005816_2);

#define VkglTestCase_005817_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005817_2 "e_and_trigonometry.tan.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005817, VkglTestCase_005817_1, VkglTestCase_005817_2);

#define VkglTestCase_005818_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005818_2 "gle_and_trigonometry.tan.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005818, VkglTestCase_005818_1, VkglTestCase_005818_2);

#define VkglTestCase_005819_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005819_2 "le_and_trigonometry.tan.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005819, VkglTestCase_005819_1, VkglTestCase_005819_2);

#define VkglTestCase_005820_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005820_2 "le_and_trigonometry.tan.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005820, VkglTestCase_005820_1, VkglTestCase_005820_2);

#define VkglTestCase_005821_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005821_2 "e_and_trigonometry.tan.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005821, VkglTestCase_005821_1, VkglTestCase_005821_2);

#define VkglTestCase_005822_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005822_2 "gle_and_trigonometry.tan.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005822, VkglTestCase_005822_1, VkglTestCase_005822_2);

#define VkglTestCase_005823_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005823_2 "le_and_trigonometry.tan.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005823, VkglTestCase_005823_1, VkglTestCase_005823_2);

#define VkglTestCase_005824_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005824_2 "le_and_trigonometry.tan.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005824, VkglTestCase_005824_1, VkglTestCase_005824_2);

#define VkglTestCase_005825_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005825_2 "e_and_trigonometry.tan.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005825, VkglTestCase_005825_1, VkglTestCase_005825_2);

#define VkglTestCase_005826_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005826_2 "gle_and_trigonometry.tan.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005826, VkglTestCase_005826_1, VkglTestCase_005826_2);

#define VkglTestCase_005827_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005827_2 "le_and_trigonometry.tan.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005827, VkglTestCase_005827_1, VkglTestCase_005827_2);

#define VkglTestCase_005828_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005828_2 "gle_and_trigonometry.tan.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005828, VkglTestCase_005828_1, VkglTestCase_005828_2);

#define VkglTestCase_005829_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005829_2 "le_and_trigonometry.tan.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005829, VkglTestCase_005829_1, VkglTestCase_005829_2);

#define VkglTestCase_005830_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005830_2 "gle_and_trigonometry.tan.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005830, VkglTestCase_005830_1, VkglTestCase_005830_2);

#define VkglTestCase_005831_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005831_2 "le_and_trigonometry.tan.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005831, VkglTestCase_005831_1, VkglTestCase_005831_2);

#define VkglTestCase_005832_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005832_2 "gle_and_trigonometry.tan.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005832, VkglTestCase_005832_1, VkglTestCase_005832_2);

#define VkglTestCase_005833_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005833_2 "le_and_trigonometry.tan.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005833, VkglTestCase_005833_1, VkglTestCase_005833_2);

#define VkglTestCase_005834_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005834_2 "gle_and_trigonometry.tan.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005834, VkglTestCase_005834_1, VkglTestCase_005834_2);

#define VkglTestCase_005835_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005835_2 "le_and_trigonometry.tan.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005835, VkglTestCase_005835_1, VkglTestCase_005835_2);
