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

#define VkglTestCase_012390_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012390_2 "_and_trigonometry.asinh.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012390, VkglTestCase_012390_1, VkglTestCase_012390_2);

#define VkglTestCase_012391_1 "dEQP-GLES3.functional.shaders.operator.angle_"
#define VkglTestCase_012391_2 "and_trigonometry.asinh.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012391, VkglTestCase_012391_1, VkglTestCase_012391_2);

#define VkglTestCase_012392_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012392_2 "e_and_trigonometry.asinh.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012392, VkglTestCase_012392_1, VkglTestCase_012392_2);

#define VkglTestCase_012393_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012393_2 "_and_trigonometry.asinh.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012393, VkglTestCase_012393_1, VkglTestCase_012393_2);

#define VkglTestCase_012394_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012394_2 "e_and_trigonometry.asinh.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012394, VkglTestCase_012394_1, VkglTestCase_012394_2);

#define VkglTestCase_012395_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012395_2 "_and_trigonometry.asinh.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012395, VkglTestCase_012395_1, VkglTestCase_012395_2);

#define VkglTestCase_012396_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012396_2 "le_and_trigonometry.asinh.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012396, VkglTestCase_012396_1, VkglTestCase_012396_2);

#define VkglTestCase_012397_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012397_2 "e_and_trigonometry.asinh.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012397, VkglTestCase_012397_1, VkglTestCase_012397_2);

#define VkglTestCase_012398_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012398_2 "e_and_trigonometry.asinh.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012398, VkglTestCase_012398_1, VkglTestCase_012398_2);

#define VkglTestCase_012399_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012399_2 "_and_trigonometry.asinh.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012399, VkglTestCase_012399_1, VkglTestCase_012399_2);

#define VkglTestCase_012400_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012400_2 "le_and_trigonometry.asinh.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012400, VkglTestCase_012400_1, VkglTestCase_012400_2);

#define VkglTestCase_012401_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012401_2 "e_and_trigonometry.asinh.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012401, VkglTestCase_012401_1, VkglTestCase_012401_2);

#define VkglTestCase_012402_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012402_2 "e_and_trigonometry.asinh.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012402, VkglTestCase_012402_1, VkglTestCase_012402_2);

#define VkglTestCase_012403_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012403_2 "_and_trigonometry.asinh.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012403, VkglTestCase_012403_1, VkglTestCase_012403_2);

#define VkglTestCase_012404_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012404_2 "le_and_trigonometry.asinh.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012404, VkglTestCase_012404_1, VkglTestCase_012404_2);

#define VkglTestCase_012405_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012405_2 "e_and_trigonometry.asinh.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012405, VkglTestCase_012405_1, VkglTestCase_012405_2);
