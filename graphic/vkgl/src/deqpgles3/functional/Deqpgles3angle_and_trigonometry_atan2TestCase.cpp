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

#define VkglTestCase_012302_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012302_2 "_and_trigonometry.atan2.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012302, VkglTestCase_012302_1, VkglTestCase_012302_2);

#define VkglTestCase_012303_1 "dEQP-GLES3.functional.shaders.operator.angle_"
#define VkglTestCase_012303_2 "and_trigonometry.atan2.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012303, VkglTestCase_012303_1, VkglTestCase_012303_2);

#define VkglTestCase_012304_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012304_2 "e_and_trigonometry.atan2.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012304, VkglTestCase_012304_1, VkglTestCase_012304_2);

#define VkglTestCase_012305_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012305_2 "_and_trigonometry.atan2.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012305, VkglTestCase_012305_1, VkglTestCase_012305_2);

#define VkglTestCase_012306_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012306_2 "e_and_trigonometry.atan2.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012306, VkglTestCase_012306_1, VkglTestCase_012306_2);

#define VkglTestCase_012307_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012307_2 "_and_trigonometry.atan2.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012307, VkglTestCase_012307_1, VkglTestCase_012307_2);

#define VkglTestCase_012308_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012308_2 "le_and_trigonometry.atan2.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012308, VkglTestCase_012308_1, VkglTestCase_012308_2);

#define VkglTestCase_012309_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012309_2 "e_and_trigonometry.atan2.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012309, VkglTestCase_012309_1, VkglTestCase_012309_2);

#define VkglTestCase_012310_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012310_2 "e_and_trigonometry.atan2.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012310, VkglTestCase_012310_1, VkglTestCase_012310_2);

#define VkglTestCase_012311_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012311_2 "_and_trigonometry.atan2.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012311, VkglTestCase_012311_1, VkglTestCase_012311_2);

#define VkglTestCase_012312_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012312_2 "le_and_trigonometry.atan2.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012312, VkglTestCase_012312_1, VkglTestCase_012312_2);

#define VkglTestCase_012313_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012313_2 "e_and_trigonometry.atan2.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012313, VkglTestCase_012313_1, VkglTestCase_012313_2);

#define VkglTestCase_012314_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012314_2 "e_and_trigonometry.atan2.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012314, VkglTestCase_012314_1, VkglTestCase_012314_2);

#define VkglTestCase_012315_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012315_2 "_and_trigonometry.atan2.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012315, VkglTestCase_012315_1, VkglTestCase_012315_2);

#define VkglTestCase_012316_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012316_2 "le_and_trigonometry.atan2.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012316, VkglTestCase_012316_1, VkglTestCase_012316_2);

#define VkglTestCase_012317_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012317_2 "e_and_trigonometry.atan2.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012317, VkglTestCase_012317_1, VkglTestCase_012317_2);
