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

#define VkglTestCase_005884_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005884_2 "_and_trigonometry.atan2.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005884, VkglTestCase_005884_1, VkglTestCase_005884_2);

#define VkglTestCase_005885_1 "dEQP-GLES2.functional.shaders.operator.angle_"
#define VkglTestCase_005885_2 "and_trigonometry.atan2.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005885, VkglTestCase_005885_1, VkglTestCase_005885_2);

#define VkglTestCase_005886_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005886_2 "e_and_trigonometry.atan2.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005886, VkglTestCase_005886_1, VkglTestCase_005886_2);

#define VkglTestCase_005887_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005887_2 "_and_trigonometry.atan2.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005887, VkglTestCase_005887_1, VkglTestCase_005887_2);

#define VkglTestCase_005888_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005888_2 "e_and_trigonometry.atan2.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005888, VkglTestCase_005888_1, VkglTestCase_005888_2);

#define VkglTestCase_005889_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005889_2 "_and_trigonometry.atan2.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005889, VkglTestCase_005889_1, VkglTestCase_005889_2);

#define VkglTestCase_005890_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005890_2 "le_and_trigonometry.atan2.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005890, VkglTestCase_005890_1, VkglTestCase_005890_2);

#define VkglTestCase_005891_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005891_2 "e_and_trigonometry.atan2.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005891, VkglTestCase_005891_1, VkglTestCase_005891_2);

#define VkglTestCase_005892_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005892_2 "e_and_trigonometry.atan2.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005892, VkglTestCase_005892_1, VkglTestCase_005892_2);

#define VkglTestCase_005893_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005893_2 "_and_trigonometry.atan2.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005893, VkglTestCase_005893_1, VkglTestCase_005893_2);

#define VkglTestCase_005894_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005894_2 "le_and_trigonometry.atan2.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005894, VkglTestCase_005894_1, VkglTestCase_005894_2);

#define VkglTestCase_005895_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005895_2 "e_and_trigonometry.atan2.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005895, VkglTestCase_005895_1, VkglTestCase_005895_2);

#define VkglTestCase_005896_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005896_2 "e_and_trigonometry.atan2.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005896, VkglTestCase_005896_1, VkglTestCase_005896_2);

#define VkglTestCase_005897_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005897_2 "_and_trigonometry.atan2.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005897, VkglTestCase_005897_1, VkglTestCase_005897_2);

#define VkglTestCase_005898_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005898_2 "le_and_trigonometry.atan2.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005898, VkglTestCase_005898_1, VkglTestCase_005898_2);

#define VkglTestCase_005899_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005899_2 "e_and_trigonometry.atan2.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005899, VkglTestCase_005899_1, VkglTestCase_005899_2);
