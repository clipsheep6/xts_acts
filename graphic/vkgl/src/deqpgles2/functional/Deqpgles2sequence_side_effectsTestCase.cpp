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
#include "../ActsDeqpgles20007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006854_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006854_2 ".sequence.side_effects.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006854, VkglTestCase_006854_1, VkglTestCase_006854_2);

#define VkglTestCase_006855_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006855_2 "sequence.side_effects.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006855, VkglTestCase_006855_1, VkglTestCase_006855_2);

#define VkglTestCase_006856_1 "dEQP-GLES2.functional.shaders.operator.s"
#define VkglTestCase_006856_2 "equence.side_effects.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006856, VkglTestCase_006856_1, VkglTestCase_006856_2);

#define VkglTestCase_006857_1 "dEQP-GLES2.functional.shaders.operator.se"
#define VkglTestCase_006857_2 "quence.side_effects.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006857, VkglTestCase_006857_1, VkglTestCase_006857_2);

#define VkglTestCase_006858_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006858_2 "sequence.side_effects.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006858, VkglTestCase_006858_1, VkglTestCase_006858_2);

#define VkglTestCase_006859_1 "dEQP-GLES2.functional.shaders.operator.s"
#define VkglTestCase_006859_2 "equence.side_effects.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006859, VkglTestCase_006859_1, VkglTestCase_006859_2);

#define VkglTestCase_006860_1 "dEQP-GLES2.functional.shaders.operator.se"
#define VkglTestCase_006860_2 "quence.side_effects.lowp_float_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006860, VkglTestCase_006860_1, VkglTestCase_006860_2);

#define VkglTestCase_006861_1 "dEQP-GLES2.functional.shaders.operator.seq"
#define VkglTestCase_006861_2 "uence.side_effects.lowp_float_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006861, VkglTestCase_006861_1, VkglTestCase_006861_2);

#define VkglTestCase_006862_1 "dEQP-GLES2.functional.shaders.operator.seq"
#define VkglTestCase_006862_2 "uence.side_effects.mediump_float_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006862, VkglTestCase_006862_1, VkglTestCase_006862_2);

#define VkglTestCase_006863_1 "dEQP-GLES2.functional.shaders.operator.sequ"
#define VkglTestCase_006863_2 "ence.side_effects.mediump_float_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006863, VkglTestCase_006863_1, VkglTestCase_006863_2);

#define VkglTestCase_006864_1 "dEQP-GLES2.functional.shaders.operator.se"
#define VkglTestCase_006864_2 "quence.side_effects.highp_float_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006864, VkglTestCase_006864_1, VkglTestCase_006864_2);

#define VkglTestCase_006865_1 "dEQP-GLES2.functional.shaders.operator.seq"
#define VkglTestCase_006865_2 "uence.side_effects.highp_float_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006865, VkglTestCase_006865_1, VkglTestCase_006865_2);

#define VkglTestCase_006866_1 "dEQP-GLES2.functional.shaders.operator.se"
#define VkglTestCase_006866_2 "quence.side_effects.lowp_bool_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006866, VkglTestCase_006866_1, VkglTestCase_006866_2);

#define VkglTestCase_006867_1 "dEQP-GLES2.functional.shaders.operator.seq"
#define VkglTestCase_006867_2 "uence.side_effects.lowp_bool_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006867, VkglTestCase_006867_1, VkglTestCase_006867_2);

#define VkglTestCase_006868_1 "dEQP-GLES2.functional.shaders.operator.seq"
#define VkglTestCase_006868_2 "uence.side_effects.mediump_bool_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006868, VkglTestCase_006868_1, VkglTestCase_006868_2);

#define VkglTestCase_006869_1 "dEQP-GLES2.functional.shaders.operator.sequ"
#define VkglTestCase_006869_2 "ence.side_effects.mediump_bool_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006869, VkglTestCase_006869_1, VkglTestCase_006869_2);

#define VkglTestCase_006870_1 "dEQP-GLES2.functional.shaders.operator.se"
#define VkglTestCase_006870_2 "quence.side_effects.highp_bool_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006870, VkglTestCase_006870_1, VkglTestCase_006870_2);

#define VkglTestCase_006871_1 "dEQP-GLES2.functional.shaders.operator.seq"
#define VkglTestCase_006871_2 "uence.side_effects.highp_bool_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006871, VkglTestCase_006871_1, VkglTestCase_006871_2);

#define VkglTestCase_006872_1 "dEQP-GLES2.functional.shaders.operator.seque"
#define VkglTestCase_006872_2 "nce.side_effects.lowp_vec4_ivec4_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006872, VkglTestCase_006872_1, VkglTestCase_006872_2);

#define VkglTestCase_006873_1 "dEQP-GLES2.functional.shaders.operator.sequen"
#define VkglTestCase_006873_2 "ce.side_effects.lowp_vec4_ivec4_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006873, VkglTestCase_006873_1, VkglTestCase_006873_2);

#define VkglTestCase_006874_1 "dEQP-GLES2.functional.shaders.operator.sequenc"
#define VkglTestCase_006874_2 "e.side_effects.mediump_vec4_ivec4_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006874, VkglTestCase_006874_1, VkglTestCase_006874_2);

#define VkglTestCase_006875_1 "dEQP-GLES2.functional.shaders.operator.sequence"
#define VkglTestCase_006875_2 ".side_effects.mediump_vec4_ivec4_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006875, VkglTestCase_006875_1, VkglTestCase_006875_2);

#define VkglTestCase_006876_1 "dEQP-GLES2.functional.shaders.operator.sequen"
#define VkglTestCase_006876_2 "ce.side_effects.highp_vec4_ivec4_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006876, VkglTestCase_006876_1, VkglTestCase_006876_2);

#define VkglTestCase_006877_1 "dEQP-GLES2.functional.shaders.operator.sequenc"
#define VkglTestCase_006877_2 "e.side_effects.highp_vec4_ivec4_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006877, VkglTestCase_006877_1, VkglTestCase_006877_2);

#define VkglTestCase_006878_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006878_2 "r.sequence.side_effects.affect_ternary"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006878, VkglTestCase_006878_1, VkglTestCase_006878_2);

#define VkglTestCase_006879_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006879_2 "tor.sequence.side_effects.affect_and"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006879, VkglTestCase_006879_1, VkglTestCase_006879_2);

#define VkglTestCase_006880_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006880_2 "tor.sequence.side_effects.affect_or"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006880, VkglTestCase_006880_1, VkglTestCase_006880_2);
