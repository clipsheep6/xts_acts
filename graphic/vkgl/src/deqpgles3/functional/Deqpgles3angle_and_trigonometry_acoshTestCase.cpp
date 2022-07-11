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

#define VkglTestCase_012406_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012406_2 "_and_trigonometry.acosh.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012406, VkglTestCase_012406_1, VkglTestCase_012406_2);

#define VkglTestCase_012407_1 "dEQP-GLES3.functional.shaders.operator.angle_"
#define VkglTestCase_012407_2 "and_trigonometry.acosh.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012407, VkglTestCase_012407_1, VkglTestCase_012407_2);

#define VkglTestCase_012408_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012408_2 "e_and_trigonometry.acosh.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012408, VkglTestCase_012408_1, VkglTestCase_012408_2);

#define VkglTestCase_012409_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012409_2 "_and_trigonometry.acosh.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012409, VkglTestCase_012409_1, VkglTestCase_012409_2);

#define VkglTestCase_012410_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012410_2 "e_and_trigonometry.acosh.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012410, VkglTestCase_012410_1, VkglTestCase_012410_2);

#define VkglTestCase_012411_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012411_2 "_and_trigonometry.acosh.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012411, VkglTestCase_012411_1, VkglTestCase_012411_2);

#define VkglTestCase_012412_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012412_2 "le_and_trigonometry.acosh.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012412, VkglTestCase_012412_1, VkglTestCase_012412_2);

#define VkglTestCase_012413_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012413_2 "e_and_trigonometry.acosh.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012413, VkglTestCase_012413_1, VkglTestCase_012413_2);

#define VkglTestCase_012414_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012414_2 "e_and_trigonometry.acosh.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012414, VkglTestCase_012414_1, VkglTestCase_012414_2);

#define VkglTestCase_012415_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012415_2 "_and_trigonometry.acosh.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012415, VkglTestCase_012415_1, VkglTestCase_012415_2);

#define VkglTestCase_012416_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012416_2 "le_and_trigonometry.acosh.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012416, VkglTestCase_012416_1, VkglTestCase_012416_2);

#define VkglTestCase_012417_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012417_2 "e_and_trigonometry.acosh.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012417, VkglTestCase_012417_1, VkglTestCase_012417_2);

#define VkglTestCase_012418_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012418_2 "e_and_trigonometry.acosh.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012418, VkglTestCase_012418_1, VkglTestCase_012418_2);

#define VkglTestCase_012419_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012419_2 "_and_trigonometry.acosh.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012419, VkglTestCase_012419_1, VkglTestCase_012419_2);

#define VkglTestCase_012420_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012420_2 "le_and_trigonometry.acosh.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012420, VkglTestCase_012420_1, VkglTestCase_012420_2);

#define VkglTestCase_012421_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012421_2 "e_and_trigonometry.acosh.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012421, VkglTestCase_012421_1, VkglTestCase_012421_2);
