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

#define VkglTestCase_005868_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005868_2 "e_and_trigonometry.atan.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005868, VkglTestCase_005868_1, VkglTestCase_005868_2);

#define VkglTestCase_005869_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005869_2 "_and_trigonometry.atan.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005869, VkglTestCase_005869_1, VkglTestCase_005869_2);

#define VkglTestCase_005870_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005870_2 "le_and_trigonometry.atan.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005870, VkglTestCase_005870_1, VkglTestCase_005870_2);

#define VkglTestCase_005871_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005871_2 "e_and_trigonometry.atan.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005871, VkglTestCase_005871_1, VkglTestCase_005871_2);

#define VkglTestCase_005872_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005872_2 "e_and_trigonometry.atan.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005872, VkglTestCase_005872_1, VkglTestCase_005872_2);

#define VkglTestCase_005873_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005873_2 "_and_trigonometry.atan.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005873, VkglTestCase_005873_1, VkglTestCase_005873_2);

#define VkglTestCase_005874_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005874_2 "le_and_trigonometry.atan.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005874, VkglTestCase_005874_1, VkglTestCase_005874_2);

#define VkglTestCase_005875_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005875_2 "e_and_trigonometry.atan.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005875, VkglTestCase_005875_1, VkglTestCase_005875_2);

#define VkglTestCase_005876_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005876_2 "e_and_trigonometry.atan.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005876, VkglTestCase_005876_1, VkglTestCase_005876_2);

#define VkglTestCase_005877_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005877_2 "_and_trigonometry.atan.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005877, VkglTestCase_005877_1, VkglTestCase_005877_2);

#define VkglTestCase_005878_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005878_2 "le_and_trigonometry.atan.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005878, VkglTestCase_005878_1, VkglTestCase_005878_2);

#define VkglTestCase_005879_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005879_2 "e_and_trigonometry.atan.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005879, VkglTestCase_005879_1, VkglTestCase_005879_2);

#define VkglTestCase_005880_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005880_2 "e_and_trigonometry.atan.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005880, VkglTestCase_005880_1, VkglTestCase_005880_2);

#define VkglTestCase_005881_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005881_2 "_and_trigonometry.atan.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005881, VkglTestCase_005881_1, VkglTestCase_005881_2);

#define VkglTestCase_005882_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005882_2 "le_and_trigonometry.atan.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005882, VkglTestCase_005882_1, VkglTestCase_005882_2);

#define VkglTestCase_005883_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005883_2 "e_and_trigonometry.atan.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005883, VkglTestCase_005883_1, VkglTestCase_005883_2);
