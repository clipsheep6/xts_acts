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

#define VkglTestCase_012270_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012270_2 "e_and_trigonometry.acos.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012270, VkglTestCase_012270_1, VkglTestCase_012270_2);

#define VkglTestCase_012271_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012271_2 "_and_trigonometry.acos.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012271, VkglTestCase_012271_1, VkglTestCase_012271_2);

#define VkglTestCase_012272_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012272_2 "le_and_trigonometry.acos.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012272, VkglTestCase_012272_1, VkglTestCase_012272_2);

#define VkglTestCase_012273_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012273_2 "e_and_trigonometry.acos.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012273, VkglTestCase_012273_1, VkglTestCase_012273_2);

#define VkglTestCase_012274_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012274_2 "e_and_trigonometry.acos.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012274, VkglTestCase_012274_1, VkglTestCase_012274_2);

#define VkglTestCase_012275_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012275_2 "_and_trigonometry.acos.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012275, VkglTestCase_012275_1, VkglTestCase_012275_2);

#define VkglTestCase_012276_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012276_2 "le_and_trigonometry.acos.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012276, VkglTestCase_012276_1, VkglTestCase_012276_2);

#define VkglTestCase_012277_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012277_2 "e_and_trigonometry.acos.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012277, VkglTestCase_012277_1, VkglTestCase_012277_2);

#define VkglTestCase_012278_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012278_2 "e_and_trigonometry.acos.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012278, VkglTestCase_012278_1, VkglTestCase_012278_2);

#define VkglTestCase_012279_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012279_2 "_and_trigonometry.acos.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012279, VkglTestCase_012279_1, VkglTestCase_012279_2);

#define VkglTestCase_012280_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012280_2 "le_and_trigonometry.acos.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012280, VkglTestCase_012280_1, VkglTestCase_012280_2);

#define VkglTestCase_012281_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012281_2 "e_and_trigonometry.acos.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012281, VkglTestCase_012281_1, VkglTestCase_012281_2);

#define VkglTestCase_012282_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012282_2 "e_and_trigonometry.acos.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012282, VkglTestCase_012282_1, VkglTestCase_012282_2);

#define VkglTestCase_012283_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012283_2 "_and_trigonometry.acos.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012283, VkglTestCase_012283_1, VkglTestCase_012283_2);

#define VkglTestCase_012284_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012284_2 "le_and_trigonometry.acos.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012284, VkglTestCase_012284_1, VkglTestCase_012284_2);

#define VkglTestCase_012285_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012285_2 "e_and_trigonometry.acos.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012285, VkglTestCase_012285_1, VkglTestCase_012285_2);
