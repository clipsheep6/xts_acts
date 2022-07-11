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

#define VkglTestCase_013716_1 "dEQP-GLES3.functional.shaders.operator.s"
#define VkglTestCase_013716_2 "equence.no_side_effects.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013716, VkglTestCase_013716_1, VkglTestCase_013716_2);

#define VkglTestCase_013717_1 "dEQP-GLES3.functional.shaders.operator.se"
#define VkglTestCase_013717_2 "quence.no_side_effects.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013717, VkglTestCase_013717_1, VkglTestCase_013717_2);

#define VkglTestCase_013718_1 "dEQP-GLES3.functional.shaders.operator.se"
#define VkglTestCase_013718_2 "quence.no_side_effects.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013718, VkglTestCase_013718_1, VkglTestCase_013718_2);

#define VkglTestCase_013719_1 "dEQP-GLES3.functional.shaders.operator.seq"
#define VkglTestCase_013719_2 "uence.no_side_effects.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013719, VkglTestCase_013719_1, VkglTestCase_013719_2);

#define VkglTestCase_013720_1 "dEQP-GLES3.functional.shaders.operator.s"
#define VkglTestCase_013720_2 "equence.no_side_effects.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013720, VkglTestCase_013720_1, VkglTestCase_013720_2);

#define VkglTestCase_013721_1 "dEQP-GLES3.functional.shaders.operator.se"
#define VkglTestCase_013721_2 "quence.no_side_effects.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013721, VkglTestCase_013721_1, VkglTestCase_013721_2);

#define VkglTestCase_013722_1 "dEQP-GLES3.functional.shaders.operator.sequ"
#define VkglTestCase_013722_2 "ence.no_side_effects.lowp_float_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013722, VkglTestCase_013722_1, VkglTestCase_013722_2);

#define VkglTestCase_013723_1 "dEQP-GLES3.functional.shaders.operator.seque"
#define VkglTestCase_013723_2 "nce.no_side_effects.lowp_float_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013723, VkglTestCase_013723_1, VkglTestCase_013723_2);

#define VkglTestCase_013724_1 "dEQP-GLES3.functional.shaders.operator.seque"
#define VkglTestCase_013724_2 "nce.no_side_effects.mediump_float_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013724, VkglTestCase_013724_1, VkglTestCase_013724_2);

#define VkglTestCase_013725_1 "dEQP-GLES3.functional.shaders.operator.sequen"
#define VkglTestCase_013725_2 "ce.no_side_effects.mediump_float_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013725, VkglTestCase_013725_1, VkglTestCase_013725_2);

#define VkglTestCase_013726_1 "dEQP-GLES3.functional.shaders.operator.sequ"
#define VkglTestCase_013726_2 "ence.no_side_effects.highp_float_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013726, VkglTestCase_013726_1, VkglTestCase_013726_2);

#define VkglTestCase_013727_1 "dEQP-GLES3.functional.shaders.operator.seque"
#define VkglTestCase_013727_2 "nce.no_side_effects.highp_float_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013727, VkglTestCase_013727_1, VkglTestCase_013727_2);

#define VkglTestCase_013728_1 "dEQP-GLES3.functional.shaders.operator.seq"
#define VkglTestCase_013728_2 "uence.no_side_effects.lowp_bool_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013728, VkglTestCase_013728_1, VkglTestCase_013728_2);

#define VkglTestCase_013729_1 "dEQP-GLES3.functional.shaders.operator.sequ"
#define VkglTestCase_013729_2 "ence.no_side_effects.lowp_bool_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013729, VkglTestCase_013729_1, VkglTestCase_013729_2);

#define VkglTestCase_013730_1 "dEQP-GLES3.functional.shaders.operator.seque"
#define VkglTestCase_013730_2 "nce.no_side_effects.mediump_bool_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013730, VkglTestCase_013730_1, VkglTestCase_013730_2);

#define VkglTestCase_013731_1 "dEQP-GLES3.functional.shaders.operator.sequen"
#define VkglTestCase_013731_2 "ce.no_side_effects.mediump_bool_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013731, VkglTestCase_013731_1, VkglTestCase_013731_2);

#define VkglTestCase_013732_1 "dEQP-GLES3.functional.shaders.operator.sequ"
#define VkglTestCase_013732_2 "ence.no_side_effects.highp_bool_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013732, VkglTestCase_013732_1, VkglTestCase_013732_2);

#define VkglTestCase_013733_1 "dEQP-GLES3.functional.shaders.operator.seque"
#define VkglTestCase_013733_2 "nce.no_side_effects.highp_bool_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013733, VkglTestCase_013733_1, VkglTestCase_013733_2);

#define VkglTestCase_013734_1 "dEQP-GLES3.functional.shaders.operator.sequenc"
#define VkglTestCase_013734_2 "e.no_side_effects.lowp_vec4_ivec4_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013734, VkglTestCase_013734_1, VkglTestCase_013734_2);

#define VkglTestCase_013735_1 "dEQP-GLES3.functional.shaders.operator.sequence"
#define VkglTestCase_013735_2 ".no_side_effects.lowp_vec4_ivec4_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013735, VkglTestCase_013735_1, VkglTestCase_013735_2);

#define VkglTestCase_013736_1 "dEQP-GLES3.functional.shaders.operator.sequence"
#define VkglTestCase_013736_2 ".no_side_effects.mediump_vec4_ivec4_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013736, VkglTestCase_013736_1, VkglTestCase_013736_2);

#define VkglTestCase_013737_1 "dEQP-GLES3.functional.shaders.operator.sequence."
#define VkglTestCase_013737_2 "no_side_effects.mediump_vec4_ivec4_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013737, VkglTestCase_013737_1, VkglTestCase_013737_2);

#define VkglTestCase_013738_1 "dEQP-GLES3.functional.shaders.operator.sequenc"
#define VkglTestCase_013738_2 "e.no_side_effects.highp_vec4_ivec4_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013738, VkglTestCase_013738_1, VkglTestCase_013738_2);

#define VkglTestCase_013739_1 "dEQP-GLES3.functional.shaders.operator.sequence"
#define VkglTestCase_013739_2 ".no_side_effects.highp_vec4_ivec4_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013739, VkglTestCase_013739_1, VkglTestCase_013739_2);
