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

#define VkglTestCase_005732_1 "dEQP-GLES2.functional.shaders.operator.angle_"
#define VkglTestCase_005732_2 "and_trigonometry.radians.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005732, VkglTestCase_005732_1, VkglTestCase_005732_2);

#define VkglTestCase_005733_1 "dEQP-GLES2.functional.shaders.operator.angle_a"
#define VkglTestCase_005733_2 "nd_trigonometry.radians.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005733, VkglTestCase_005733_1, VkglTestCase_005733_2);

#define VkglTestCase_005734_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005734_2 "_and_trigonometry.radians.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005734, VkglTestCase_005734_1, VkglTestCase_005734_2);

#define VkglTestCase_005735_1 "dEQP-GLES2.functional.shaders.operator.angle_"
#define VkglTestCase_005735_2 "and_trigonometry.radians.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005735, VkglTestCase_005735_1, VkglTestCase_005735_2);

#define VkglTestCase_005736_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005736_2 "_and_trigonometry.radians.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005736, VkglTestCase_005736_1, VkglTestCase_005736_2);

#define VkglTestCase_005737_1 "dEQP-GLES2.functional.shaders.operator.angle_"
#define VkglTestCase_005737_2 "and_trigonometry.radians.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005737, VkglTestCase_005737_1, VkglTestCase_005737_2);

#define VkglTestCase_005738_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005738_2 "e_and_trigonometry.radians.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005738, VkglTestCase_005738_1, VkglTestCase_005738_2);

#define VkglTestCase_005739_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005739_2 "_and_trigonometry.radians.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005739, VkglTestCase_005739_1, VkglTestCase_005739_2);

#define VkglTestCase_005740_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005740_2 "_and_trigonometry.radians.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005740, VkglTestCase_005740_1, VkglTestCase_005740_2);

#define VkglTestCase_005741_1 "dEQP-GLES2.functional.shaders.operator.angle_"
#define VkglTestCase_005741_2 "and_trigonometry.radians.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005741, VkglTestCase_005741_1, VkglTestCase_005741_2);

#define VkglTestCase_005742_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005742_2 "e_and_trigonometry.radians.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005742, VkglTestCase_005742_1, VkglTestCase_005742_2);

#define VkglTestCase_005743_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005743_2 "_and_trigonometry.radians.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005743, VkglTestCase_005743_1, VkglTestCase_005743_2);

#define VkglTestCase_005744_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005744_2 "_and_trigonometry.radians.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005744, VkglTestCase_005744_1, VkglTestCase_005744_2);

#define VkglTestCase_005745_1 "dEQP-GLES2.functional.shaders.operator.angle_"
#define VkglTestCase_005745_2 "and_trigonometry.radians.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005745, VkglTestCase_005745_1, VkglTestCase_005745_2);

#define VkglTestCase_005746_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005746_2 "e_and_trigonometry.radians.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005746, VkglTestCase_005746_1, VkglTestCase_005746_2);

#define VkglTestCase_005747_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005747_2 "_and_trigonometry.radians.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005747, VkglTestCase_005747_1, VkglTestCase_005747_2);
