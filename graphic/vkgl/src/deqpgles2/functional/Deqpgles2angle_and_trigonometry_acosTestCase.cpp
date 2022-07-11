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

#define VkglTestCase_005852_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005852_2 "e_and_trigonometry.acos.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005852, VkglTestCase_005852_1, VkglTestCase_005852_2);

#define VkglTestCase_005853_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005853_2 "_and_trigonometry.acos.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005853, VkglTestCase_005853_1, VkglTestCase_005853_2);

#define VkglTestCase_005854_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005854_2 "le_and_trigonometry.acos.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005854, VkglTestCase_005854_1, VkglTestCase_005854_2);

#define VkglTestCase_005855_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005855_2 "e_and_trigonometry.acos.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005855, VkglTestCase_005855_1, VkglTestCase_005855_2);

#define VkglTestCase_005856_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005856_2 "e_and_trigonometry.acos.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005856, VkglTestCase_005856_1, VkglTestCase_005856_2);

#define VkglTestCase_005857_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005857_2 "_and_trigonometry.acos.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005857, VkglTestCase_005857_1, VkglTestCase_005857_2);

#define VkglTestCase_005858_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005858_2 "le_and_trigonometry.acos.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005858, VkglTestCase_005858_1, VkglTestCase_005858_2);

#define VkglTestCase_005859_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005859_2 "e_and_trigonometry.acos.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005859, VkglTestCase_005859_1, VkglTestCase_005859_2);

#define VkglTestCase_005860_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005860_2 "e_and_trigonometry.acos.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005860, VkglTestCase_005860_1, VkglTestCase_005860_2);

#define VkglTestCase_005861_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005861_2 "_and_trigonometry.acos.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005861, VkglTestCase_005861_1, VkglTestCase_005861_2);

#define VkglTestCase_005862_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005862_2 "le_and_trigonometry.acos.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005862, VkglTestCase_005862_1, VkglTestCase_005862_2);

#define VkglTestCase_005863_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005863_2 "e_and_trigonometry.acos.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005863, VkglTestCase_005863_1, VkglTestCase_005863_2);

#define VkglTestCase_005864_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005864_2 "e_and_trigonometry.acos.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005864, VkglTestCase_005864_1, VkglTestCase_005864_2);

#define VkglTestCase_005865_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005865_2 "_and_trigonometry.acos.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005865, VkglTestCase_005865_1, VkglTestCase_005865_2);

#define VkglTestCase_005866_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005866_2 "le_and_trigonometry.acos.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005866, VkglTestCase_005866_1, VkglTestCase_005866_2);

#define VkglTestCase_005867_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005867_2 "e_and_trigonometry.acos.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005867, VkglTestCase_005867_1, VkglTestCase_005867_2);
