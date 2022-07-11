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

#define VkglTestCase_006830_1 "dEQP-GLES2.functional.shaders.operator.s"
#define VkglTestCase_006830_2 "equence.no_side_effects.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006830, VkglTestCase_006830_1, VkglTestCase_006830_2);

#define VkglTestCase_006831_1 "dEQP-GLES2.functional.shaders.operator.se"
#define VkglTestCase_006831_2 "quence.no_side_effects.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006831, VkglTestCase_006831_1, VkglTestCase_006831_2);

#define VkglTestCase_006832_1 "dEQP-GLES2.functional.shaders.operator.se"
#define VkglTestCase_006832_2 "quence.no_side_effects.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006832, VkglTestCase_006832_1, VkglTestCase_006832_2);

#define VkglTestCase_006833_1 "dEQP-GLES2.functional.shaders.operator.seq"
#define VkglTestCase_006833_2 "uence.no_side_effects.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006833, VkglTestCase_006833_1, VkglTestCase_006833_2);

#define VkglTestCase_006834_1 "dEQP-GLES2.functional.shaders.operator.s"
#define VkglTestCase_006834_2 "equence.no_side_effects.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006834, VkglTestCase_006834_1, VkglTestCase_006834_2);

#define VkglTestCase_006835_1 "dEQP-GLES2.functional.shaders.operator.se"
#define VkglTestCase_006835_2 "quence.no_side_effects.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006835, VkglTestCase_006835_1, VkglTestCase_006835_2);

#define VkglTestCase_006836_1 "dEQP-GLES2.functional.shaders.operator.seq"
#define VkglTestCase_006836_2 "uence.no_side_effects.lowp_float_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006836, VkglTestCase_006836_1, VkglTestCase_006836_2);

#define VkglTestCase_006837_1 "dEQP-GLES2.functional.shaders.operator.sequ"
#define VkglTestCase_006837_2 "ence.no_side_effects.lowp_float_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006837, VkglTestCase_006837_1, VkglTestCase_006837_2);

#define VkglTestCase_006838_1 "dEQP-GLES2.functional.shaders.operator.seque"
#define VkglTestCase_006838_2 "nce.no_side_effects.mediump_float_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006838, VkglTestCase_006838_1, VkglTestCase_006838_2);

#define VkglTestCase_006839_1 "dEQP-GLES2.functional.shaders.operator.sequen"
#define VkglTestCase_006839_2 "ce.no_side_effects.mediump_float_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006839, VkglTestCase_006839_1, VkglTestCase_006839_2);

#define VkglTestCase_006840_1 "dEQP-GLES2.functional.shaders.operator.sequ"
#define VkglTestCase_006840_2 "ence.no_side_effects.highp_float_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006840, VkglTestCase_006840_1, VkglTestCase_006840_2);

#define VkglTestCase_006841_1 "dEQP-GLES2.functional.shaders.operator.seque"
#define VkglTestCase_006841_2 "nce.no_side_effects.highp_float_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006841, VkglTestCase_006841_1, VkglTestCase_006841_2);

#define VkglTestCase_006842_1 "dEQP-GLES2.functional.shaders.operator.seq"
#define VkglTestCase_006842_2 "uence.no_side_effects.lowp_bool_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006842, VkglTestCase_006842_1, VkglTestCase_006842_2);

#define VkglTestCase_006843_1 "dEQP-GLES2.functional.shaders.operator.sequ"
#define VkglTestCase_006843_2 "ence.no_side_effects.lowp_bool_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006843, VkglTestCase_006843_1, VkglTestCase_006843_2);

#define VkglTestCase_006844_1 "dEQP-GLES2.functional.shaders.operator.seque"
#define VkglTestCase_006844_2 "nce.no_side_effects.mediump_bool_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006844, VkglTestCase_006844_1, VkglTestCase_006844_2);

#define VkglTestCase_006845_1 "dEQP-GLES2.functional.shaders.operator.sequen"
#define VkglTestCase_006845_2 "ce.no_side_effects.mediump_bool_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006845, VkglTestCase_006845_1, VkglTestCase_006845_2);

#define VkglTestCase_006846_1 "dEQP-GLES2.functional.shaders.operator.sequ"
#define VkglTestCase_006846_2 "ence.no_side_effects.highp_bool_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006846, VkglTestCase_006846_1, VkglTestCase_006846_2);

#define VkglTestCase_006847_1 "dEQP-GLES2.functional.shaders.operator.seque"
#define VkglTestCase_006847_2 "nce.no_side_effects.highp_bool_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006847, VkglTestCase_006847_1, VkglTestCase_006847_2);

#define VkglTestCase_006848_1 "dEQP-GLES2.functional.shaders.operator.sequenc"
#define VkglTestCase_006848_2 "e.no_side_effects.lowp_vec4_ivec4_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006848, VkglTestCase_006848_1, VkglTestCase_006848_2);

#define VkglTestCase_006849_1 "dEQP-GLES2.functional.shaders.operator.sequence"
#define VkglTestCase_006849_2 ".no_side_effects.lowp_vec4_ivec4_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006849, VkglTestCase_006849_1, VkglTestCase_006849_2);

#define VkglTestCase_006850_1 "dEQP-GLES2.functional.shaders.operator.sequence"
#define VkglTestCase_006850_2 ".no_side_effects.mediump_vec4_ivec4_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006850, VkglTestCase_006850_1, VkglTestCase_006850_2);

#define VkglTestCase_006851_1 "dEQP-GLES2.functional.shaders.operator.sequence."
#define VkglTestCase_006851_2 "no_side_effects.mediump_vec4_ivec4_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006851, VkglTestCase_006851_1, VkglTestCase_006851_2);

#define VkglTestCase_006852_1 "dEQP-GLES2.functional.shaders.operator.sequenc"
#define VkglTestCase_006852_2 "e.no_side_effects.highp_vec4_ivec4_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006852, VkglTestCase_006852_1, VkglTestCase_006852_2);

#define VkglTestCase_006853_1 "dEQP-GLES2.functional.shaders.operator.sequence"
#define VkglTestCase_006853_2 ".no_side_effects.highp_vec4_ivec4_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006853, VkglTestCase_006853_1, VkglTestCase_006853_2);
