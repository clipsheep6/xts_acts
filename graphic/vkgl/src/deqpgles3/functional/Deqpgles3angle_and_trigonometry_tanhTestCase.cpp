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

#define VkglTestCase_012366_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012366_2 "e_and_trigonometry.tanh.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012366, VkglTestCase_012366_1, VkglTestCase_012366_2);

#define VkglTestCase_012367_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012367_2 "_and_trigonometry.tanh.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012367, VkglTestCase_012367_1, VkglTestCase_012367_2);

#define VkglTestCase_012368_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012368_2 "le_and_trigonometry.tanh.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012368, VkglTestCase_012368_1, VkglTestCase_012368_2);

#define VkglTestCase_012369_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012369_2 "e_and_trigonometry.tanh.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012369, VkglTestCase_012369_1, VkglTestCase_012369_2);

#define VkglTestCase_012370_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012370_2 "e_and_trigonometry.tanh.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012370, VkglTestCase_012370_1, VkglTestCase_012370_2);

#define VkglTestCase_012371_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012371_2 "_and_trigonometry.tanh.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012371, VkglTestCase_012371_1, VkglTestCase_012371_2);

#define VkglTestCase_012372_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012372_2 "le_and_trigonometry.tanh.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012372, VkglTestCase_012372_1, VkglTestCase_012372_2);

#define VkglTestCase_012373_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012373_2 "e_and_trigonometry.tanh.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012373, VkglTestCase_012373_1, VkglTestCase_012373_2);

#define VkglTestCase_012374_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012374_2 "e_and_trigonometry.tanh.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012374, VkglTestCase_012374_1, VkglTestCase_012374_2);

#define VkglTestCase_012375_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012375_2 "_and_trigonometry.tanh.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012375, VkglTestCase_012375_1, VkglTestCase_012375_2);

#define VkglTestCase_012376_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012376_2 "le_and_trigonometry.tanh.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012376, VkglTestCase_012376_1, VkglTestCase_012376_2);

#define VkglTestCase_012377_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012377_2 "e_and_trigonometry.tanh.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012377, VkglTestCase_012377_1, VkglTestCase_012377_2);

#define VkglTestCase_012378_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012378_2 "e_and_trigonometry.tanh.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012378, VkglTestCase_012378_1, VkglTestCase_012378_2);

#define VkglTestCase_012379_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012379_2 "_and_trigonometry.tanh.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012379, VkglTestCase_012379_1, VkglTestCase_012379_2);

#define VkglTestCase_012380_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012380_2 "le_and_trigonometry.tanh.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012380, VkglTestCase_012380_1, VkglTestCase_012380_2);

#define VkglTestCase_012381_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012381_2 "e_and_trigonometry.tanh.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012381, VkglTestCase_012381_1, VkglTestCase_012381_2);

#define VkglTestCase_012382_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012382_2 "le_and_trigonometry.tanh.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012382, VkglTestCase_012382_1, VkglTestCase_012382_2);

#define VkglTestCase_012383_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012383_2 "e_and_trigonometry.tanh.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012383, VkglTestCase_012383_1, VkglTestCase_012383_2);

#define VkglTestCase_012384_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012384_2 "gle_and_trigonometry.tanh.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012384, VkglTestCase_012384_1, VkglTestCase_012384_2);

#define VkglTestCase_012385_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012385_2 "le_and_trigonometry.tanh.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012385, VkglTestCase_012385_1, VkglTestCase_012385_2);

#define VkglTestCase_012386_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012386_2 "gle_and_trigonometry.tanh.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012386, VkglTestCase_012386_1, VkglTestCase_012386_2);

#define VkglTestCase_012387_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012387_2 "le_and_trigonometry.tanh.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012387, VkglTestCase_012387_1, VkglTestCase_012387_2);

#define VkglTestCase_012388_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012388_2 "gle_and_trigonometry.tanh.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012388, VkglTestCase_012388_1, VkglTestCase_012388_2);

#define VkglTestCase_012389_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012389_2 "le_and_trigonometry.tanh.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012389, VkglTestCase_012389_1, VkglTestCase_012389_2);
