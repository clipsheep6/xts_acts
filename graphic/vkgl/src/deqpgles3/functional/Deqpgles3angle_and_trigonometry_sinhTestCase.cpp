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

#define VkglTestCase_012318_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012318_2 "e_and_trigonometry.sinh.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012318, VkglTestCase_012318_1, VkglTestCase_012318_2);

#define VkglTestCase_012319_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012319_2 "_and_trigonometry.sinh.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012319, VkglTestCase_012319_1, VkglTestCase_012319_2);

#define VkglTestCase_012320_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012320_2 "le_and_trigonometry.sinh.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012320, VkglTestCase_012320_1, VkglTestCase_012320_2);

#define VkglTestCase_012321_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012321_2 "e_and_trigonometry.sinh.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012321, VkglTestCase_012321_1, VkglTestCase_012321_2);

#define VkglTestCase_012322_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012322_2 "e_and_trigonometry.sinh.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012322, VkglTestCase_012322_1, VkglTestCase_012322_2);

#define VkglTestCase_012323_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012323_2 "_and_trigonometry.sinh.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012323, VkglTestCase_012323_1, VkglTestCase_012323_2);

#define VkglTestCase_012324_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012324_2 "le_and_trigonometry.sinh.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012324, VkglTestCase_012324_1, VkglTestCase_012324_2);

#define VkglTestCase_012325_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012325_2 "e_and_trigonometry.sinh.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012325, VkglTestCase_012325_1, VkglTestCase_012325_2);

#define VkglTestCase_012326_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012326_2 "e_and_trigonometry.sinh.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012326, VkglTestCase_012326_1, VkglTestCase_012326_2);

#define VkglTestCase_012327_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012327_2 "_and_trigonometry.sinh.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012327, VkglTestCase_012327_1, VkglTestCase_012327_2);

#define VkglTestCase_012328_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012328_2 "le_and_trigonometry.sinh.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012328, VkglTestCase_012328_1, VkglTestCase_012328_2);

#define VkglTestCase_012329_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012329_2 "e_and_trigonometry.sinh.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012329, VkglTestCase_012329_1, VkglTestCase_012329_2);

#define VkglTestCase_012330_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012330_2 "e_and_trigonometry.sinh.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012330, VkglTestCase_012330_1, VkglTestCase_012330_2);

#define VkglTestCase_012331_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012331_2 "_and_trigonometry.sinh.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012331, VkglTestCase_012331_1, VkglTestCase_012331_2);

#define VkglTestCase_012332_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012332_2 "le_and_trigonometry.sinh.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012332, VkglTestCase_012332_1, VkglTestCase_012332_2);

#define VkglTestCase_012333_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012333_2 "e_and_trigonometry.sinh.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012333, VkglTestCase_012333_1, VkglTestCase_012333_2);

#define VkglTestCase_012334_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012334_2 "le_and_trigonometry.sinh.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012334, VkglTestCase_012334_1, VkglTestCase_012334_2);

#define VkglTestCase_012335_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012335_2 "e_and_trigonometry.sinh.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012335, VkglTestCase_012335_1, VkglTestCase_012335_2);

#define VkglTestCase_012336_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012336_2 "gle_and_trigonometry.sinh.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012336, VkglTestCase_012336_1, VkglTestCase_012336_2);

#define VkglTestCase_012337_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012337_2 "le_and_trigonometry.sinh.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012337, VkglTestCase_012337_1, VkglTestCase_012337_2);

#define VkglTestCase_012338_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012338_2 "gle_and_trigonometry.sinh.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012338, VkglTestCase_012338_1, VkglTestCase_012338_2);

#define VkglTestCase_012339_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012339_2 "le_and_trigonometry.sinh.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012339, VkglTestCase_012339_1, VkglTestCase_012339_2);

#define VkglTestCase_012340_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012340_2 "gle_and_trigonometry.sinh.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012340, VkglTestCase_012340_1, VkglTestCase_012340_2);

#define VkglTestCase_012341_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012341_2 "le_and_trigonometry.sinh.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012341, VkglTestCase_012341_1, VkglTestCase_012341_2);
