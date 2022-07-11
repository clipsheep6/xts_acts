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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013740_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013740_2 ".sequence.side_effects.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013740, VkglTestCase_013740_1, VkglTestCase_013740_2);

#define VkglTestCase_013741_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013741_2 "sequence.side_effects.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013741, VkglTestCase_013741_1, VkglTestCase_013741_2);

#define VkglTestCase_013742_1 "dEQP-GLES3.functional.shaders.operator.s"
#define VkglTestCase_013742_2 "equence.side_effects.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013742, VkglTestCase_013742_1, VkglTestCase_013742_2);

#define VkglTestCase_013743_1 "dEQP-GLES3.functional.shaders.operator.se"
#define VkglTestCase_013743_2 "quence.side_effects.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013743, VkglTestCase_013743_1, VkglTestCase_013743_2);

#define VkglTestCase_013744_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013744_2 "sequence.side_effects.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013744, VkglTestCase_013744_1, VkglTestCase_013744_2);

#define VkglTestCase_013745_1 "dEQP-GLES3.functional.shaders.operator.s"
#define VkglTestCase_013745_2 "equence.side_effects.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013745, VkglTestCase_013745_1, VkglTestCase_013745_2);

#define VkglTestCase_013746_1 "dEQP-GLES3.functional.shaders.operator.se"
#define VkglTestCase_013746_2 "quence.side_effects.lowp_float_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013746, VkglTestCase_013746_1, VkglTestCase_013746_2);

#define VkglTestCase_013747_1 "dEQP-GLES3.functional.shaders.operator.seq"
#define VkglTestCase_013747_2 "uence.side_effects.lowp_float_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013747, VkglTestCase_013747_1, VkglTestCase_013747_2);

#define VkglTestCase_013748_1 "dEQP-GLES3.functional.shaders.operator.sequ"
#define VkglTestCase_013748_2 "ence.side_effects.mediump_float_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013748, VkglTestCase_013748_1, VkglTestCase_013748_2);

#define VkglTestCase_013749_1 "dEQP-GLES3.functional.shaders.operator.seque"
#define VkglTestCase_013749_2 "nce.side_effects.mediump_float_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013749, VkglTestCase_013749_1, VkglTestCase_013749_2);

#define VkglTestCase_013750_1 "dEQP-GLES3.functional.shaders.operator.seq"
#define VkglTestCase_013750_2 "uence.side_effects.highp_float_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013750, VkglTestCase_013750_1, VkglTestCase_013750_2);

#define VkglTestCase_013751_1 "dEQP-GLES3.functional.shaders.operator.sequ"
#define VkglTestCase_013751_2 "ence.side_effects.highp_float_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013751, VkglTestCase_013751_1, VkglTestCase_013751_2);

#define VkglTestCase_013752_1 "dEQP-GLES3.functional.shaders.operator.se"
#define VkglTestCase_013752_2 "quence.side_effects.lowp_bool_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013752, VkglTestCase_013752_1, VkglTestCase_013752_2);

#define VkglTestCase_013753_1 "dEQP-GLES3.functional.shaders.operator.seq"
#define VkglTestCase_013753_2 "uence.side_effects.lowp_bool_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013753, VkglTestCase_013753_1, VkglTestCase_013753_2);

#define VkglTestCase_013754_1 "dEQP-GLES3.functional.shaders.operator.seq"
#define VkglTestCase_013754_2 "uence.side_effects.mediump_bool_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013754, VkglTestCase_013754_1, VkglTestCase_013754_2);

#define VkglTestCase_013755_1 "dEQP-GLES3.functional.shaders.operator.sequ"
#define VkglTestCase_013755_2 "ence.side_effects.mediump_bool_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013755, VkglTestCase_013755_1, VkglTestCase_013755_2);

#define VkglTestCase_013756_1 "dEQP-GLES3.functional.shaders.operator.se"
#define VkglTestCase_013756_2 "quence.side_effects.highp_bool_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013756, VkglTestCase_013756_1, VkglTestCase_013756_2);

#define VkglTestCase_013757_1 "dEQP-GLES3.functional.shaders.operator.seq"
#define VkglTestCase_013757_2 "uence.side_effects.highp_bool_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013757, VkglTestCase_013757_1, VkglTestCase_013757_2);

#define VkglTestCase_013758_1 "dEQP-GLES3.functional.shaders.operator.seque"
#define VkglTestCase_013758_2 "nce.side_effects.lowp_vec4_ivec4_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013758, VkglTestCase_013758_1, VkglTestCase_013758_2);

#define VkglTestCase_013759_1 "dEQP-GLES3.functional.shaders.operator.sequen"
#define VkglTestCase_013759_2 "ce.side_effects.lowp_vec4_ivec4_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013759, VkglTestCase_013759_1, VkglTestCase_013759_2);

#define VkglTestCase_013760_1 "dEQP-GLES3.functional.shaders.operator.sequenc"
#define VkglTestCase_013760_2 "e.side_effects.mediump_vec4_ivec4_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013760, VkglTestCase_013760_1, VkglTestCase_013760_2);

#define VkglTestCase_013761_1 "dEQP-GLES3.functional.shaders.operator.sequence"
#define VkglTestCase_013761_2 ".side_effects.mediump_vec4_ivec4_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013761, VkglTestCase_013761_1, VkglTestCase_013761_2);

#define VkglTestCase_013762_1 "dEQP-GLES3.functional.shaders.operator.sequen"
#define VkglTestCase_013762_2 "ce.side_effects.highp_vec4_ivec4_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013762, VkglTestCase_013762_1, VkglTestCase_013762_2);

#define VkglTestCase_013763_1 "dEQP-GLES3.functional.shaders.operator.sequenc"
#define VkglTestCase_013763_2 "e.side_effects.highp_vec4_ivec4_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013763, VkglTestCase_013763_1, VkglTestCase_013763_2);
