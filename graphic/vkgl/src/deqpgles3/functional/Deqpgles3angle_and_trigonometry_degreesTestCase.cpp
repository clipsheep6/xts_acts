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

#define VkglTestCase_012166_1 "dEQP-GLES3.functional.shaders.operator.angle_"
#define VkglTestCase_012166_2 "and_trigonometry.degrees.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012166, VkglTestCase_012166_1, VkglTestCase_012166_2);

#define VkglTestCase_012167_1 "dEQP-GLES3.functional.shaders.operator.angle_a"
#define VkglTestCase_012167_2 "nd_trigonometry.degrees.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012167, VkglTestCase_012167_1, VkglTestCase_012167_2);

#define VkglTestCase_012168_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012168_2 "_and_trigonometry.degrees.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012168, VkglTestCase_012168_1, VkglTestCase_012168_2);

#define VkglTestCase_012169_1 "dEQP-GLES3.functional.shaders.operator.angle_"
#define VkglTestCase_012169_2 "and_trigonometry.degrees.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012169, VkglTestCase_012169_1, VkglTestCase_012169_2);

#define VkglTestCase_012170_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012170_2 "_and_trigonometry.degrees.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012170, VkglTestCase_012170_1, VkglTestCase_012170_2);

#define VkglTestCase_012171_1 "dEQP-GLES3.functional.shaders.operator.angle_"
#define VkglTestCase_012171_2 "and_trigonometry.degrees.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012171, VkglTestCase_012171_1, VkglTestCase_012171_2);

#define VkglTestCase_012172_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012172_2 "e_and_trigonometry.degrees.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012172, VkglTestCase_012172_1, VkglTestCase_012172_2);

#define VkglTestCase_012173_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012173_2 "_and_trigonometry.degrees.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012173, VkglTestCase_012173_1, VkglTestCase_012173_2);

#define VkglTestCase_012174_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012174_2 "_and_trigonometry.degrees.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012174, VkglTestCase_012174_1, VkglTestCase_012174_2);

#define VkglTestCase_012175_1 "dEQP-GLES3.functional.shaders.operator.angle_"
#define VkglTestCase_012175_2 "and_trigonometry.degrees.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012175, VkglTestCase_012175_1, VkglTestCase_012175_2);

#define VkglTestCase_012176_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012176_2 "e_and_trigonometry.degrees.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012176, VkglTestCase_012176_1, VkglTestCase_012176_2);

#define VkglTestCase_012177_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012177_2 "_and_trigonometry.degrees.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012177, VkglTestCase_012177_1, VkglTestCase_012177_2);

#define VkglTestCase_012178_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012178_2 "_and_trigonometry.degrees.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012178, VkglTestCase_012178_1, VkglTestCase_012178_2);

#define VkglTestCase_012179_1 "dEQP-GLES3.functional.shaders.operator.angle_"
#define VkglTestCase_012179_2 "and_trigonometry.degrees.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012179, VkglTestCase_012179_1, VkglTestCase_012179_2);

#define VkglTestCase_012180_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012180_2 "e_and_trigonometry.degrees.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012180, VkglTestCase_012180_1, VkglTestCase_012180_2);

#define VkglTestCase_012181_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012181_2 "_and_trigonometry.degrees.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012181, VkglTestCase_012181_1, VkglTestCase_012181_2);
