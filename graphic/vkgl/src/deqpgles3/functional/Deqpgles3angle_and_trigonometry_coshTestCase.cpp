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

#define VkglTestCase_012342_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012342_2 "e_and_trigonometry.cosh.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012342, VkglTestCase_012342_1, VkglTestCase_012342_2);

#define VkglTestCase_012343_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012343_2 "_and_trigonometry.cosh.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012343, VkglTestCase_012343_1, VkglTestCase_012343_2);

#define VkglTestCase_012344_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012344_2 "le_and_trigonometry.cosh.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012344, VkglTestCase_012344_1, VkglTestCase_012344_2);

#define VkglTestCase_012345_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012345_2 "e_and_trigonometry.cosh.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012345, VkglTestCase_012345_1, VkglTestCase_012345_2);

#define VkglTestCase_012346_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012346_2 "e_and_trigonometry.cosh.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012346, VkglTestCase_012346_1, VkglTestCase_012346_2);

#define VkglTestCase_012347_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012347_2 "_and_trigonometry.cosh.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012347, VkglTestCase_012347_1, VkglTestCase_012347_2);

#define VkglTestCase_012348_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012348_2 "le_and_trigonometry.cosh.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012348, VkglTestCase_012348_1, VkglTestCase_012348_2);

#define VkglTestCase_012349_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012349_2 "e_and_trigonometry.cosh.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012349, VkglTestCase_012349_1, VkglTestCase_012349_2);

#define VkglTestCase_012350_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012350_2 "e_and_trigonometry.cosh.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012350, VkglTestCase_012350_1, VkglTestCase_012350_2);

#define VkglTestCase_012351_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012351_2 "_and_trigonometry.cosh.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012351, VkglTestCase_012351_1, VkglTestCase_012351_2);

#define VkglTestCase_012352_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012352_2 "le_and_trigonometry.cosh.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012352, VkglTestCase_012352_1, VkglTestCase_012352_2);

#define VkglTestCase_012353_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012353_2 "e_and_trigonometry.cosh.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012353, VkglTestCase_012353_1, VkglTestCase_012353_2);

#define VkglTestCase_012354_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012354_2 "e_and_trigonometry.cosh.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012354, VkglTestCase_012354_1, VkglTestCase_012354_2);

#define VkglTestCase_012355_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012355_2 "_and_trigonometry.cosh.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012355, VkglTestCase_012355_1, VkglTestCase_012355_2);

#define VkglTestCase_012356_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012356_2 "le_and_trigonometry.cosh.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012356, VkglTestCase_012356_1, VkglTestCase_012356_2);

#define VkglTestCase_012357_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012357_2 "e_and_trigonometry.cosh.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012357, VkglTestCase_012357_1, VkglTestCase_012357_2);

#define VkglTestCase_012358_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012358_2 "le_and_trigonometry.cosh.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012358, VkglTestCase_012358_1, VkglTestCase_012358_2);

#define VkglTestCase_012359_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012359_2 "e_and_trigonometry.cosh.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012359, VkglTestCase_012359_1, VkglTestCase_012359_2);

#define VkglTestCase_012360_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012360_2 "gle_and_trigonometry.cosh.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012360, VkglTestCase_012360_1, VkglTestCase_012360_2);

#define VkglTestCase_012361_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012361_2 "le_and_trigonometry.cosh.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012361, VkglTestCase_012361_1, VkglTestCase_012361_2);

#define VkglTestCase_012362_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012362_2 "gle_and_trigonometry.cosh.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012362, VkglTestCase_012362_1, VkglTestCase_012362_2);

#define VkglTestCase_012363_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012363_2 "le_and_trigonometry.cosh.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012363, VkglTestCase_012363_1, VkglTestCase_012363_2);

#define VkglTestCase_012364_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012364_2 "gle_and_trigonometry.cosh.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012364, VkglTestCase_012364_1, VkglTestCase_012364_2);

#define VkglTestCase_012365_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012365_2 "le_and_trigonometry.cosh.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012365, VkglTestCase_012365_1, VkglTestCase_012365_2);
