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
#include "../ActsDeqpgles30008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007520_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007520_2 "perator.pre_decrement_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007520, VkglTestCase_007520_1, VkglTestCase_007520_2);

#define VkglTestCase_007521_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007521_2 "erator.pre_decrement_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007521, VkglTestCase_007521_1, VkglTestCase_007521_2);

#define VkglTestCase_007522_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007522_2 "erator.pre_decrement_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007522, VkglTestCase_007522_1, VkglTestCase_007522_2);

#define VkglTestCase_007523_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007523_2 "rator.pre_decrement_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007523, VkglTestCase_007523_1, VkglTestCase_007523_2);

#define VkglTestCase_007524_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007524_2 "perator.pre_decrement_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007524, VkglTestCase_007524_1, VkglTestCase_007524_2);

#define VkglTestCase_007525_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007525_2 "erator.pre_decrement_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007525, VkglTestCase_007525_1, VkglTestCase_007525_2);

#define VkglTestCase_007526_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007526_2 "operator.pre_decrement_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007526, VkglTestCase_007526_1, VkglTestCase_007526_2);

#define VkglTestCase_007527_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007527_2 "perator.pre_decrement_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007527, VkglTestCase_007527_1, VkglTestCase_007527_2);

#define VkglTestCase_007528_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007528_2 "erator.pre_decrement_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007528, VkglTestCase_007528_1, VkglTestCase_007528_2);

#define VkglTestCase_007529_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007529_2 "rator.pre_decrement_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007529, VkglTestCase_007529_1, VkglTestCase_007529_2);

#define VkglTestCase_007530_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007530_2 "perator.pre_decrement_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007530, VkglTestCase_007530_1, VkglTestCase_007530_2);

#define VkglTestCase_007531_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007531_2 "erator.pre_decrement_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007531, VkglTestCase_007531_1, VkglTestCase_007531_2);

#define VkglTestCase_007532_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007532_2 "operator.pre_decrement_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007532, VkglTestCase_007532_1, VkglTestCase_007532_2);

#define VkglTestCase_007533_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007533_2 "perator.pre_decrement_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007533, VkglTestCase_007533_1, VkglTestCase_007533_2);

#define VkglTestCase_007534_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007534_2 "erator.pre_decrement_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007534, VkglTestCase_007534_1, VkglTestCase_007534_2);

#define VkglTestCase_007535_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007535_2 "rator.pre_decrement_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007535, VkglTestCase_007535_1, VkglTestCase_007535_2);

#define VkglTestCase_007536_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007536_2 "perator.pre_decrement_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007536, VkglTestCase_007536_1, VkglTestCase_007536_2);

#define VkglTestCase_007537_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007537_2 "erator.pre_decrement_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007537, VkglTestCase_007537_1, VkglTestCase_007537_2);

#define VkglTestCase_007538_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007538_2 "operator.pre_decrement_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007538, VkglTestCase_007538_1, VkglTestCase_007538_2);

#define VkglTestCase_007539_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007539_2 "perator.pre_decrement_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007539, VkglTestCase_007539_1, VkglTestCase_007539_2);

#define VkglTestCase_007540_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007540_2 "erator.pre_decrement_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007540, VkglTestCase_007540_1, VkglTestCase_007540_2);

#define VkglTestCase_007541_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007541_2 "rator.pre_decrement_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007541, VkglTestCase_007541_1, VkglTestCase_007541_2);

#define VkglTestCase_007542_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007542_2 "perator.pre_decrement_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007542, VkglTestCase_007542_1, VkglTestCase_007542_2);

#define VkglTestCase_007543_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007543_2 "erator.pre_decrement_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007543, VkglTestCase_007543_1, VkglTestCase_007543_2);

#define VkglTestCase_007544_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007544_2 "operator.pre_decrement_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007544, VkglTestCase_007544_1, VkglTestCase_007544_2);

#define VkglTestCase_007545_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007545_2 "perator.pre_decrement_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007545, VkglTestCase_007545_1, VkglTestCase_007545_2);

#define VkglTestCase_007546_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007546_2 "perator.pre_decrement_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007546, VkglTestCase_007546_1, VkglTestCase_007546_2);

#define VkglTestCase_007547_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007547_2 "erator.pre_decrement_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007547, VkglTestCase_007547_1, VkglTestCase_007547_2);

#define VkglTestCase_007548_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007548_2 "operator.pre_decrement_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007548, VkglTestCase_007548_1, VkglTestCase_007548_2);

#define VkglTestCase_007549_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007549_2 "perator.pre_decrement_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007549, VkglTestCase_007549_1, VkglTestCase_007549_2);

#define VkglTestCase_007550_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007550_2 "perator.pre_decrement_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007550, VkglTestCase_007550_1, VkglTestCase_007550_2);

#define VkglTestCase_007551_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007551_2 "erator.pre_decrement_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007551, VkglTestCase_007551_1, VkglTestCase_007551_2);

#define VkglTestCase_007552_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007552_2 "erator.pre_decrement_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007552, VkglTestCase_007552_1, VkglTestCase_007552_2);

#define VkglTestCase_007553_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007553_2 "rator.pre_decrement_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007553, VkglTestCase_007553_1, VkglTestCase_007553_2);

#define VkglTestCase_007554_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007554_2 "perator.pre_decrement_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007554, VkglTestCase_007554_1, VkglTestCase_007554_2);

#define VkglTestCase_007555_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007555_2 "erator.pre_decrement_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007555, VkglTestCase_007555_1, VkglTestCase_007555_2);

#define VkglTestCase_007556_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007556_2 "perator.pre_decrement_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007556, VkglTestCase_007556_1, VkglTestCase_007556_2);

#define VkglTestCase_007557_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007557_2 "erator.pre_decrement_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007557, VkglTestCase_007557_1, VkglTestCase_007557_2);

#define VkglTestCase_007558_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007558_2 "erator.pre_decrement_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007558, VkglTestCase_007558_1, VkglTestCase_007558_2);

#define VkglTestCase_007559_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007559_2 "rator.pre_decrement_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007559, VkglTestCase_007559_1, VkglTestCase_007559_2);

#define VkglTestCase_007560_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007560_2 "perator.pre_decrement_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007560, VkglTestCase_007560_1, VkglTestCase_007560_2);

#define VkglTestCase_007561_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007561_2 "erator.pre_decrement_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007561, VkglTestCase_007561_1, VkglTestCase_007561_2);

#define VkglTestCase_007562_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007562_2 "perator.pre_decrement_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007562, VkglTestCase_007562_1, VkglTestCase_007562_2);

#define VkglTestCase_007563_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007563_2 "erator.pre_decrement_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007563, VkglTestCase_007563_1, VkglTestCase_007563_2);

#define VkglTestCase_007564_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007564_2 "erator.pre_decrement_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007564, VkglTestCase_007564_1, VkglTestCase_007564_2);

#define VkglTestCase_007565_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007565_2 "rator.pre_decrement_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007565, VkglTestCase_007565_1, VkglTestCase_007565_2);

#define VkglTestCase_007566_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007566_2 "perator.pre_decrement_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007566, VkglTestCase_007566_1, VkglTestCase_007566_2);

#define VkglTestCase_007567_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007567_2 "erator.pre_decrement_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007567, VkglTestCase_007567_1, VkglTestCase_007567_2);

#define VkglTestCase_007568_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007568_2 "operator.pre_decrement_effect.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007568, VkglTestCase_007568_1, VkglTestCase_007568_2);

#define VkglTestCase_007569_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007569_2 "perator.pre_decrement_effect.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007569, VkglTestCase_007569_1, VkglTestCase_007569_2);

#define VkglTestCase_007570_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007570_2 "erator.pre_decrement_effect.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007570, VkglTestCase_007570_1, VkglTestCase_007570_2);

#define VkglTestCase_007571_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007571_2 "rator.pre_decrement_effect.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007571, VkglTestCase_007571_1, VkglTestCase_007571_2);

#define VkglTestCase_007572_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007572_2 "perator.pre_decrement_effect.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007572, VkglTestCase_007572_1, VkglTestCase_007572_2);

#define VkglTestCase_007573_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007573_2 "erator.pre_decrement_effect.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007573, VkglTestCase_007573_1, VkglTestCase_007573_2);

#define VkglTestCase_007574_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007574_2 "perator.pre_decrement_effect.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007574, VkglTestCase_007574_1, VkglTestCase_007574_2);

#define VkglTestCase_007575_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007575_2 "erator.pre_decrement_effect.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007575, VkglTestCase_007575_1, VkglTestCase_007575_2);

#define VkglTestCase_007576_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007576_2 "erator.pre_decrement_effect.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007576, VkglTestCase_007576_1, VkglTestCase_007576_2);

#define VkglTestCase_007577_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007577_2 "rator.pre_decrement_effect.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007577, VkglTestCase_007577_1, VkglTestCase_007577_2);

#define VkglTestCase_007578_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007578_2 "perator.pre_decrement_effect.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007578, VkglTestCase_007578_1, VkglTestCase_007578_2);

#define VkglTestCase_007579_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007579_2 "erator.pre_decrement_effect.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007579, VkglTestCase_007579_1, VkglTestCase_007579_2);

#define VkglTestCase_007580_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007580_2 "perator.pre_decrement_effect.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007580, VkglTestCase_007580_1, VkglTestCase_007580_2);

#define VkglTestCase_007581_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007581_2 "erator.pre_decrement_effect.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007581, VkglTestCase_007581_1, VkglTestCase_007581_2);

#define VkglTestCase_007582_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007582_2 "erator.pre_decrement_effect.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007582, VkglTestCase_007582_1, VkglTestCase_007582_2);

#define VkglTestCase_007583_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007583_2 "rator.pre_decrement_effect.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007583, VkglTestCase_007583_1, VkglTestCase_007583_2);

#define VkglTestCase_007584_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007584_2 "perator.pre_decrement_effect.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007584, VkglTestCase_007584_1, VkglTestCase_007584_2);

#define VkglTestCase_007585_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007585_2 "erator.pre_decrement_effect.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007585, VkglTestCase_007585_1, VkglTestCase_007585_2);

#define VkglTestCase_007586_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007586_2 "perator.pre_decrement_effect.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007586, VkglTestCase_007586_1, VkglTestCase_007586_2);

#define VkglTestCase_007587_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007587_2 "erator.pre_decrement_effect.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007587, VkglTestCase_007587_1, VkglTestCase_007587_2);

#define VkglTestCase_007588_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007588_2 "erator.pre_decrement_effect.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007588, VkglTestCase_007588_1, VkglTestCase_007588_2);

#define VkglTestCase_007589_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007589_2 "rator.pre_decrement_effect.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007589, VkglTestCase_007589_1, VkglTestCase_007589_2);

#define VkglTestCase_007590_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007590_2 "perator.pre_decrement_effect.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007590, VkglTestCase_007590_1, VkglTestCase_007590_2);

#define VkglTestCase_007591_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007591_2 "erator.pre_decrement_effect.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007591, VkglTestCase_007591_1, VkglTestCase_007591_2);
