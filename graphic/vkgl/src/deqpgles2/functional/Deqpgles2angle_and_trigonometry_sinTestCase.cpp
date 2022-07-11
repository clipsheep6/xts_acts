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

#define VkglTestCase_005764_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005764_2 "e_and_trigonometry.sin.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005764, VkglTestCase_005764_1, VkglTestCase_005764_2);

#define VkglTestCase_005765_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005765_2 "_and_trigonometry.sin.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005765, VkglTestCase_005765_1, VkglTestCase_005765_2);

#define VkglTestCase_005766_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005766_2 "le_and_trigonometry.sin.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005766, VkglTestCase_005766_1, VkglTestCase_005766_2);

#define VkglTestCase_005767_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005767_2 "e_and_trigonometry.sin.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005767, VkglTestCase_005767_1, VkglTestCase_005767_2);

#define VkglTestCase_005768_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005768_2 "le_and_trigonometry.sin.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005768, VkglTestCase_005768_1, VkglTestCase_005768_2);

#define VkglTestCase_005769_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005769_2 "e_and_trigonometry.sin.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005769, VkglTestCase_005769_1, VkglTestCase_005769_2);

#define VkglTestCase_005770_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005770_2 "gle_and_trigonometry.sin.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005770, VkglTestCase_005770_1, VkglTestCase_005770_2);

#define VkglTestCase_005771_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005771_2 "le_and_trigonometry.sin.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005771, VkglTestCase_005771_1, VkglTestCase_005771_2);

#define VkglTestCase_005772_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005772_2 "le_and_trigonometry.sin.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005772, VkglTestCase_005772_1, VkglTestCase_005772_2);

#define VkglTestCase_005773_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005773_2 "e_and_trigonometry.sin.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005773, VkglTestCase_005773_1, VkglTestCase_005773_2);

#define VkglTestCase_005774_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005774_2 "gle_and_trigonometry.sin.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005774, VkglTestCase_005774_1, VkglTestCase_005774_2);

#define VkglTestCase_005775_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005775_2 "le_and_trigonometry.sin.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005775, VkglTestCase_005775_1, VkglTestCase_005775_2);

#define VkglTestCase_005776_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005776_2 "le_and_trigonometry.sin.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005776, VkglTestCase_005776_1, VkglTestCase_005776_2);

#define VkglTestCase_005777_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005777_2 "e_and_trigonometry.sin.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005777, VkglTestCase_005777_1, VkglTestCase_005777_2);

#define VkglTestCase_005778_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005778_2 "gle_and_trigonometry.sin.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005778, VkglTestCase_005778_1, VkglTestCase_005778_2);

#define VkglTestCase_005779_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005779_2 "le_and_trigonometry.sin.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005779, VkglTestCase_005779_1, VkglTestCase_005779_2);

#define VkglTestCase_005780_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005780_2 "gle_and_trigonometry.sin.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005780, VkglTestCase_005780_1, VkglTestCase_005780_2);

#define VkglTestCase_005781_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005781_2 "le_and_trigonometry.sin.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005781, VkglTestCase_005781_1, VkglTestCase_005781_2);

#define VkglTestCase_005782_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005782_2 "gle_and_trigonometry.sin.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005782, VkglTestCase_005782_1, VkglTestCase_005782_2);

#define VkglTestCase_005783_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005783_2 "le_and_trigonometry.sin.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005783, VkglTestCase_005783_1, VkglTestCase_005783_2);

#define VkglTestCase_005784_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005784_2 "gle_and_trigonometry.sin.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005784, VkglTestCase_005784_1, VkglTestCase_005784_2);

#define VkglTestCase_005785_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005785_2 "le_and_trigonometry.sin.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005785, VkglTestCase_005785_1, VkglTestCase_005785_2);

#define VkglTestCase_005786_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005786_2 "gle_and_trigonometry.sin.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005786, VkglTestCase_005786_1, VkglTestCase_005786_2);

#define VkglTestCase_005787_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005787_2 "le_and_trigonometry.sin.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005787, VkglTestCase_005787_1, VkglTestCase_005787_2);
