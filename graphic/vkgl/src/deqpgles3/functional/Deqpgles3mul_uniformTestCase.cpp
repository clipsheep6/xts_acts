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
#include "../ActsDeqpgles30015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014736_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014736_2 "x.mul.uniform.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014736, VkglTestCase_014736_1, VkglTestCase_014736_2);

#define VkglTestCase_014737_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014737_2 ".mul.uniform.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014737, VkglTestCase_014737_1, VkglTestCase_014737_2);

#define VkglTestCase_014738_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014738_2 "x.mul.uniform.lowp_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014738, VkglTestCase_014738_1, VkglTestCase_014738_2);

#define VkglTestCase_014739_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014739_2 ".mul.uniform.lowp_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014739, VkglTestCase_014739_1, VkglTestCase_014739_2);

#define VkglTestCase_014740_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014740_2 "x.mul.uniform.lowp_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014740, VkglTestCase_014740_1, VkglTestCase_014740_2);

#define VkglTestCase_014741_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014741_2 ".mul.uniform.lowp_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014741, VkglTestCase_014741_1, VkglTestCase_014741_2);

#define VkglTestCase_014742_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014742_2 "x.mul.uniform.lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014742, VkglTestCase_014742_1, VkglTestCase_014742_2);

#define VkglTestCase_014743_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014743_2 ".mul.uniform.lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014743, VkglTestCase_014743_1, VkglTestCase_014743_2);

#define VkglTestCase_014744_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014744_2 ".mul.uniform.lowp_mat2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014744, VkglTestCase_014744_1, VkglTestCase_014744_2);

#define VkglTestCase_014745_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014745_2 "mul.uniform.lowp_mat2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014745, VkglTestCase_014745_1, VkglTestCase_014745_2);

#define VkglTestCase_014746_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014746_2 ".mul.uniform.lowp_mat2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014746, VkglTestCase_014746_1, VkglTestCase_014746_2);

#define VkglTestCase_014747_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014747_2 "mul.uniform.lowp_mat2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014747, VkglTestCase_014747_1, VkglTestCase_014747_2);

#define VkglTestCase_014748_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014748_2 "mul.uniform.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014748, VkglTestCase_014748_1, VkglTestCase_014748_2);

#define VkglTestCase_014749_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014749_2 "ul.uniform.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014749, VkglTestCase_014749_1, VkglTestCase_014749_2);

#define VkglTestCase_014750_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014750_2 ".mul.uniform.mediump_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014750, VkglTestCase_014750_1, VkglTestCase_014750_2);

#define VkglTestCase_014751_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014751_2 "mul.uniform.mediump_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014751, VkglTestCase_014751_1, VkglTestCase_014751_2);

#define VkglTestCase_014752_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014752_2 ".mul.uniform.mediump_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014752, VkglTestCase_014752_1, VkglTestCase_014752_2);

#define VkglTestCase_014753_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014753_2 "mul.uniform.mediump_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014753, VkglTestCase_014753_1, VkglTestCase_014753_2);

#define VkglTestCase_014754_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014754_2 ".mul.uniform.mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014754, VkglTestCase_014754_1, VkglTestCase_014754_2);

#define VkglTestCase_014755_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014755_2 "mul.uniform.mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014755, VkglTestCase_014755_1, VkglTestCase_014755_2);

#define VkglTestCase_014756_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014756_2 "mul.uniform.mediump_mat2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014756, VkglTestCase_014756_1, VkglTestCase_014756_2);

#define VkglTestCase_014757_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014757_2 "ul.uniform.mediump_mat2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014757, VkglTestCase_014757_1, VkglTestCase_014757_2);

#define VkglTestCase_014758_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014758_2 "mul.uniform.mediump_mat2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014758, VkglTestCase_014758_1, VkglTestCase_014758_2);

#define VkglTestCase_014759_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014759_2 "ul.uniform.mediump_mat2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014759, VkglTestCase_014759_1, VkglTestCase_014759_2);

#define VkglTestCase_014760_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014760_2 ".mul.uniform.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014760, VkglTestCase_014760_1, VkglTestCase_014760_2);

#define VkglTestCase_014761_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014761_2 "mul.uniform.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014761, VkglTestCase_014761_1, VkglTestCase_014761_2);

#define VkglTestCase_014762_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014762_2 "x.mul.uniform.highp_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014762, VkglTestCase_014762_1, VkglTestCase_014762_2);

#define VkglTestCase_014763_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014763_2 ".mul.uniform.highp_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014763, VkglTestCase_014763_1, VkglTestCase_014763_2);

#define VkglTestCase_014764_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014764_2 "x.mul.uniform.highp_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014764, VkglTestCase_014764_1, VkglTestCase_014764_2);

#define VkglTestCase_014765_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014765_2 ".mul.uniform.highp_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014765, VkglTestCase_014765_1, VkglTestCase_014765_2);

#define VkglTestCase_014766_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014766_2 "x.mul.uniform.highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014766, VkglTestCase_014766_1, VkglTestCase_014766_2);

#define VkglTestCase_014767_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014767_2 ".mul.uniform.highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014767, VkglTestCase_014767_1, VkglTestCase_014767_2);

#define VkglTestCase_014768_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014768_2 ".mul.uniform.highp_mat2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014768, VkglTestCase_014768_1, VkglTestCase_014768_2);

#define VkglTestCase_014769_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014769_2 "mul.uniform.highp_mat2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014769, VkglTestCase_014769_1, VkglTestCase_014769_2);

#define VkglTestCase_014770_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014770_2 ".mul.uniform.highp_mat2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014770, VkglTestCase_014770_1, VkglTestCase_014770_2);

#define VkglTestCase_014771_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014771_2 "mul.uniform.highp_mat2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014771, VkglTestCase_014771_1, VkglTestCase_014771_2);

#define VkglTestCase_014772_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014772_2 ".mul.uniform.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014772, VkglTestCase_014772_1, VkglTestCase_014772_2);

#define VkglTestCase_014773_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014773_2 "mul.uniform.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014773, VkglTestCase_014773_1, VkglTestCase_014773_2);

#define VkglTestCase_014774_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014774_2 ".mul.uniform.lowp_mat2x3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014774, VkglTestCase_014774_1, VkglTestCase_014774_2);

#define VkglTestCase_014775_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014775_2 "mul.uniform.lowp_mat2x3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014775, VkglTestCase_014775_1, VkglTestCase_014775_2);

#define VkglTestCase_014776_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014776_2 ".mul.uniform.lowp_vec3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014776, VkglTestCase_014776_1, VkglTestCase_014776_2);

#define VkglTestCase_014777_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014777_2 "mul.uniform.lowp_vec3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014777, VkglTestCase_014777_1, VkglTestCase_014777_2);

#define VkglTestCase_014778_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014778_2 ".mul.uniform.lowp_mat2x3_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014778, VkglTestCase_014778_1, VkglTestCase_014778_2);

#define VkglTestCase_014779_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014779_2 "mul.uniform.lowp_mat2x3_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014779, VkglTestCase_014779_1, VkglTestCase_014779_2);

#define VkglTestCase_014780_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014780_2 "mul.uniform.lowp_mat2x3_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014780, VkglTestCase_014780_1, VkglTestCase_014780_2);

#define VkglTestCase_014781_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014781_2 "ul.uniform.lowp_mat2x3_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014781, VkglTestCase_014781_1, VkglTestCase_014781_2);

#define VkglTestCase_014782_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014782_2 "mul.uniform.lowp_mat2x3_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014782, VkglTestCase_014782_1, VkglTestCase_014782_2);

#define VkglTestCase_014783_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014783_2 "ul.uniform.lowp_mat2x3_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014783, VkglTestCase_014783_1, VkglTestCase_014783_2);

#define VkglTestCase_014784_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014784_2 "ul.uniform.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014784, VkglTestCase_014784_1, VkglTestCase_014784_2);

#define VkglTestCase_014785_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014785_2 "l.uniform.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014785, VkglTestCase_014785_1, VkglTestCase_014785_2);

#define VkglTestCase_014786_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014786_2 "mul.uniform.mediump_mat2x3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014786, VkglTestCase_014786_1, VkglTestCase_014786_2);

#define VkglTestCase_014787_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014787_2 "ul.uniform.mediump_mat2x3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014787, VkglTestCase_014787_1, VkglTestCase_014787_2);

#define VkglTestCase_014788_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014788_2 "mul.uniform.mediump_vec3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014788, VkglTestCase_014788_1, VkglTestCase_014788_2);

#define VkglTestCase_014789_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014789_2 "ul.uniform.mediump_vec3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014789, VkglTestCase_014789_1, VkglTestCase_014789_2);

#define VkglTestCase_014790_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014790_2 "mul.uniform.mediump_mat2x3_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014790, VkglTestCase_014790_1, VkglTestCase_014790_2);

#define VkglTestCase_014791_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014791_2 "ul.uniform.mediump_mat2x3_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014791, VkglTestCase_014791_1, VkglTestCase_014791_2);

#define VkglTestCase_014792_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014792_2 "ul.uniform.mediump_mat2x3_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014792, VkglTestCase_014792_1, VkglTestCase_014792_2);

#define VkglTestCase_014793_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014793_2 "l.uniform.mediump_mat2x3_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014793, VkglTestCase_014793_1, VkglTestCase_014793_2);

#define VkglTestCase_014794_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014794_2 "ul.uniform.mediump_mat2x3_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014794, VkglTestCase_014794_1, VkglTestCase_014794_2);

#define VkglTestCase_014795_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014795_2 "l.uniform.mediump_mat2x3_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014795, VkglTestCase_014795_1, VkglTestCase_014795_2);

#define VkglTestCase_014796_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014796_2 "mul.uniform.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014796, VkglTestCase_014796_1, VkglTestCase_014796_2);

#define VkglTestCase_014797_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014797_2 "ul.uniform.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014797, VkglTestCase_014797_1, VkglTestCase_014797_2);

#define VkglTestCase_014798_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014798_2 ".mul.uniform.highp_mat2x3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014798, VkglTestCase_014798_1, VkglTestCase_014798_2);

#define VkglTestCase_014799_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014799_2 "mul.uniform.highp_mat2x3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014799, VkglTestCase_014799_1, VkglTestCase_014799_2);

#define VkglTestCase_014800_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014800_2 ".mul.uniform.highp_vec3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014800, VkglTestCase_014800_1, VkglTestCase_014800_2);

#define VkglTestCase_014801_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014801_2 "mul.uniform.highp_vec3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014801, VkglTestCase_014801_1, VkglTestCase_014801_2);

#define VkglTestCase_014802_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014802_2 ".mul.uniform.highp_mat2x3_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014802, VkglTestCase_014802_1, VkglTestCase_014802_2);

#define VkglTestCase_014803_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014803_2 "mul.uniform.highp_mat2x3_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014803, VkglTestCase_014803_1, VkglTestCase_014803_2);

#define VkglTestCase_014804_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014804_2 "mul.uniform.highp_mat2x3_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014804, VkglTestCase_014804_1, VkglTestCase_014804_2);

#define VkglTestCase_014805_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014805_2 "ul.uniform.highp_mat2x3_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014805, VkglTestCase_014805_1, VkglTestCase_014805_2);

#define VkglTestCase_014806_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014806_2 "mul.uniform.highp_mat2x3_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014806, VkglTestCase_014806_1, VkglTestCase_014806_2);

#define VkglTestCase_014807_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014807_2 "ul.uniform.highp_mat2x3_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014807, VkglTestCase_014807_1, VkglTestCase_014807_2);

#define VkglTestCase_014808_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014808_2 ".mul.uniform.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014808, VkglTestCase_014808_1, VkglTestCase_014808_2);

#define VkglTestCase_014809_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014809_2 "mul.uniform.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014809, VkglTestCase_014809_1, VkglTestCase_014809_2);

#define VkglTestCase_014810_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014810_2 ".mul.uniform.lowp_mat2x4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014810, VkglTestCase_014810_1, VkglTestCase_014810_2);

#define VkglTestCase_014811_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014811_2 "mul.uniform.lowp_mat2x4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014811, VkglTestCase_014811_1, VkglTestCase_014811_2);

#define VkglTestCase_014812_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014812_2 ".mul.uniform.lowp_vec4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014812, VkglTestCase_014812_1, VkglTestCase_014812_2);

#define VkglTestCase_014813_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014813_2 "mul.uniform.lowp_vec4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014813, VkglTestCase_014813_1, VkglTestCase_014813_2);

#define VkglTestCase_014814_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014814_2 ".mul.uniform.lowp_mat2x4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014814, VkglTestCase_014814_1, VkglTestCase_014814_2);

#define VkglTestCase_014815_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014815_2 "mul.uniform.lowp_mat2x4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014815, VkglTestCase_014815_1, VkglTestCase_014815_2);

#define VkglTestCase_014816_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014816_2 "mul.uniform.lowp_mat2x4_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014816, VkglTestCase_014816_1, VkglTestCase_014816_2);

#define VkglTestCase_014817_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014817_2 "ul.uniform.lowp_mat2x4_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014817, VkglTestCase_014817_1, VkglTestCase_014817_2);

#define VkglTestCase_014818_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014818_2 "mul.uniform.lowp_mat2x4_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014818, VkglTestCase_014818_1, VkglTestCase_014818_2);

#define VkglTestCase_014819_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014819_2 "ul.uniform.lowp_mat2x4_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014819, VkglTestCase_014819_1, VkglTestCase_014819_2);

#define VkglTestCase_014820_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014820_2 "ul.uniform.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014820, VkglTestCase_014820_1, VkglTestCase_014820_2);

#define VkglTestCase_014821_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014821_2 "l.uniform.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014821, VkglTestCase_014821_1, VkglTestCase_014821_2);

#define VkglTestCase_014822_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014822_2 "mul.uniform.mediump_mat2x4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014822, VkglTestCase_014822_1, VkglTestCase_014822_2);

#define VkglTestCase_014823_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014823_2 "ul.uniform.mediump_mat2x4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014823, VkglTestCase_014823_1, VkglTestCase_014823_2);

#define VkglTestCase_014824_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014824_2 "mul.uniform.mediump_vec4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014824, VkglTestCase_014824_1, VkglTestCase_014824_2);

#define VkglTestCase_014825_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014825_2 "ul.uniform.mediump_vec4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014825, VkglTestCase_014825_1, VkglTestCase_014825_2);

#define VkglTestCase_014826_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014826_2 "mul.uniform.mediump_mat2x4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014826, VkglTestCase_014826_1, VkglTestCase_014826_2);

#define VkglTestCase_014827_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014827_2 "ul.uniform.mediump_mat2x4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014827, VkglTestCase_014827_1, VkglTestCase_014827_2);

#define VkglTestCase_014828_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014828_2 "ul.uniform.mediump_mat2x4_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014828, VkglTestCase_014828_1, VkglTestCase_014828_2);

#define VkglTestCase_014829_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014829_2 "l.uniform.mediump_mat2x4_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014829, VkglTestCase_014829_1, VkglTestCase_014829_2);

#define VkglTestCase_014830_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014830_2 "ul.uniform.mediump_mat2x4_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014830, VkglTestCase_014830_1, VkglTestCase_014830_2);

#define VkglTestCase_014831_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014831_2 "l.uniform.mediump_mat2x4_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014831, VkglTestCase_014831_1, VkglTestCase_014831_2);

#define VkglTestCase_014832_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014832_2 "mul.uniform.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014832, VkglTestCase_014832_1, VkglTestCase_014832_2);

#define VkglTestCase_014833_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014833_2 "ul.uniform.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014833, VkglTestCase_014833_1, VkglTestCase_014833_2);

#define VkglTestCase_014834_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014834_2 ".mul.uniform.highp_mat2x4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014834, VkglTestCase_014834_1, VkglTestCase_014834_2);

#define VkglTestCase_014835_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014835_2 "mul.uniform.highp_mat2x4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014835, VkglTestCase_014835_1, VkglTestCase_014835_2);

#define VkglTestCase_014836_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014836_2 ".mul.uniform.highp_vec4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014836, VkglTestCase_014836_1, VkglTestCase_014836_2);

#define VkglTestCase_014837_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014837_2 "mul.uniform.highp_vec4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014837, VkglTestCase_014837_1, VkglTestCase_014837_2);

#define VkglTestCase_014838_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014838_2 ".mul.uniform.highp_mat2x4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014838, VkglTestCase_014838_1, VkglTestCase_014838_2);

#define VkglTestCase_014839_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014839_2 "mul.uniform.highp_mat2x4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014839, VkglTestCase_014839_1, VkglTestCase_014839_2);

#define VkglTestCase_014840_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014840_2 "mul.uniform.highp_mat2x4_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014840, VkglTestCase_014840_1, VkglTestCase_014840_2);

#define VkglTestCase_014841_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014841_2 "ul.uniform.highp_mat2x4_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014841, VkglTestCase_014841_1, VkglTestCase_014841_2);

#define VkglTestCase_014842_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014842_2 "mul.uniform.highp_mat2x4_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014842, VkglTestCase_014842_1, VkglTestCase_014842_2);

#define VkglTestCase_014843_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014843_2 "ul.uniform.highp_mat2x4_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014843, VkglTestCase_014843_1, VkglTestCase_014843_2);

#define VkglTestCase_014844_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014844_2 ".mul.uniform.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014844, VkglTestCase_014844_1, VkglTestCase_014844_2);

#define VkglTestCase_014845_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014845_2 "mul.uniform.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014845, VkglTestCase_014845_1, VkglTestCase_014845_2);

#define VkglTestCase_014846_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014846_2 ".mul.uniform.lowp_mat3x2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014846, VkglTestCase_014846_1, VkglTestCase_014846_2);

#define VkglTestCase_014847_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014847_2 "mul.uniform.lowp_mat3x2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014847, VkglTestCase_014847_1, VkglTestCase_014847_2);

#define VkglTestCase_014848_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014848_2 ".mul.uniform.lowp_vec2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014848, VkglTestCase_014848_1, VkglTestCase_014848_2);

#define VkglTestCase_014849_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014849_2 "mul.uniform.lowp_vec2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014849, VkglTestCase_014849_1, VkglTestCase_014849_2);

#define VkglTestCase_014850_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014850_2 "mul.uniform.lowp_mat3x2_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014850, VkglTestCase_014850_1, VkglTestCase_014850_2);

#define VkglTestCase_014851_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014851_2 "ul.uniform.lowp_mat3x2_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014851, VkglTestCase_014851_1, VkglTestCase_014851_2);

#define VkglTestCase_014852_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014852_2 ".mul.uniform.lowp_mat3x2_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014852, VkglTestCase_014852_1, VkglTestCase_014852_2);

#define VkglTestCase_014853_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014853_2 "mul.uniform.lowp_mat3x2_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014853, VkglTestCase_014853_1, VkglTestCase_014853_2);

#define VkglTestCase_014854_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014854_2 "mul.uniform.lowp_mat3x2_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014854, VkglTestCase_014854_1, VkglTestCase_014854_2);

#define VkglTestCase_014855_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014855_2 "ul.uniform.lowp_mat3x2_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014855, VkglTestCase_014855_1, VkglTestCase_014855_2);

#define VkglTestCase_014856_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014856_2 "ul.uniform.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014856, VkglTestCase_014856_1, VkglTestCase_014856_2);

#define VkglTestCase_014857_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014857_2 "l.uniform.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014857, VkglTestCase_014857_1, VkglTestCase_014857_2);

#define VkglTestCase_014858_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014858_2 "mul.uniform.mediump_mat3x2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014858, VkglTestCase_014858_1, VkglTestCase_014858_2);

#define VkglTestCase_014859_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014859_2 "ul.uniform.mediump_mat3x2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014859, VkglTestCase_014859_1, VkglTestCase_014859_2);

#define VkglTestCase_014860_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014860_2 "mul.uniform.mediump_vec2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014860, VkglTestCase_014860_1, VkglTestCase_014860_2);

#define VkglTestCase_014861_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014861_2 "ul.uniform.mediump_vec2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014861, VkglTestCase_014861_1, VkglTestCase_014861_2);

#define VkglTestCase_014862_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014862_2 "ul.uniform.mediump_mat3x2_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014862, VkglTestCase_014862_1, VkglTestCase_014862_2);

#define VkglTestCase_014863_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014863_2 "l.uniform.mediump_mat3x2_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014863, VkglTestCase_014863_1, VkglTestCase_014863_2);

#define VkglTestCase_014864_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014864_2 "mul.uniform.mediump_mat3x2_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014864, VkglTestCase_014864_1, VkglTestCase_014864_2);

#define VkglTestCase_014865_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014865_2 "ul.uniform.mediump_mat3x2_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014865, VkglTestCase_014865_1, VkglTestCase_014865_2);

#define VkglTestCase_014866_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014866_2 "ul.uniform.mediump_mat3x2_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014866, VkglTestCase_014866_1, VkglTestCase_014866_2);

#define VkglTestCase_014867_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014867_2 "l.uniform.mediump_mat3x2_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014867, VkglTestCase_014867_1, VkglTestCase_014867_2);

#define VkglTestCase_014868_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014868_2 "mul.uniform.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014868, VkglTestCase_014868_1, VkglTestCase_014868_2);

#define VkglTestCase_014869_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014869_2 "ul.uniform.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014869, VkglTestCase_014869_1, VkglTestCase_014869_2);

#define VkglTestCase_014870_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014870_2 ".mul.uniform.highp_mat3x2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014870, VkglTestCase_014870_1, VkglTestCase_014870_2);

#define VkglTestCase_014871_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014871_2 "mul.uniform.highp_mat3x2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014871, VkglTestCase_014871_1, VkglTestCase_014871_2);

#define VkglTestCase_014872_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014872_2 ".mul.uniform.highp_vec2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014872, VkglTestCase_014872_1, VkglTestCase_014872_2);

#define VkglTestCase_014873_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014873_2 "mul.uniform.highp_vec2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014873, VkglTestCase_014873_1, VkglTestCase_014873_2);

#define VkglTestCase_014874_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014874_2 "mul.uniform.highp_mat3x2_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014874, VkglTestCase_014874_1, VkglTestCase_014874_2);

#define VkglTestCase_014875_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014875_2 "ul.uniform.highp_mat3x2_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014875, VkglTestCase_014875_1, VkglTestCase_014875_2);

#define VkglTestCase_014876_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014876_2 ".mul.uniform.highp_mat3x2_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014876, VkglTestCase_014876_1, VkglTestCase_014876_2);

#define VkglTestCase_014877_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014877_2 "mul.uniform.highp_mat3x2_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014877, VkglTestCase_014877_1, VkglTestCase_014877_2);

#define VkglTestCase_014878_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014878_2 "mul.uniform.highp_mat3x2_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014878, VkglTestCase_014878_1, VkglTestCase_014878_2);

#define VkglTestCase_014879_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014879_2 "ul.uniform.highp_mat3x2_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014879, VkglTestCase_014879_1, VkglTestCase_014879_2);

#define VkglTestCase_014880_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014880_2 "x.mul.uniform.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014880, VkglTestCase_014880_1, VkglTestCase_014880_2);

#define VkglTestCase_014881_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014881_2 ".mul.uniform.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014881, VkglTestCase_014881_1, VkglTestCase_014881_2);

#define VkglTestCase_014882_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014882_2 "x.mul.uniform.lowp_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014882, VkglTestCase_014882_1, VkglTestCase_014882_2);

#define VkglTestCase_014883_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014883_2 ".mul.uniform.lowp_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014883, VkglTestCase_014883_1, VkglTestCase_014883_2);

#define VkglTestCase_014884_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014884_2 "x.mul.uniform.lowp_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014884, VkglTestCase_014884_1, VkglTestCase_014884_2);

#define VkglTestCase_014885_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014885_2 ".mul.uniform.lowp_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014885, VkglTestCase_014885_1, VkglTestCase_014885_2);

#define VkglTestCase_014886_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014886_2 ".mul.uniform.lowp_mat3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014886, VkglTestCase_014886_1, VkglTestCase_014886_2);

#define VkglTestCase_014887_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014887_2 "mul.uniform.lowp_mat3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014887, VkglTestCase_014887_1, VkglTestCase_014887_2);

#define VkglTestCase_014888_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014888_2 "x.mul.uniform.lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014888, VkglTestCase_014888_1, VkglTestCase_014888_2);

#define VkglTestCase_014889_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014889_2 ".mul.uniform.lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014889, VkglTestCase_014889_1, VkglTestCase_014889_2);

#define VkglTestCase_014890_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014890_2 ".mul.uniform.lowp_mat3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014890, VkglTestCase_014890_1, VkglTestCase_014890_2);

#define VkglTestCase_014891_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014891_2 "mul.uniform.lowp_mat3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014891, VkglTestCase_014891_1, VkglTestCase_014891_2);

#define VkglTestCase_014892_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014892_2 "mul.uniform.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014892, VkglTestCase_014892_1, VkglTestCase_014892_2);

#define VkglTestCase_014893_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014893_2 "ul.uniform.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014893, VkglTestCase_014893_1, VkglTestCase_014893_2);

#define VkglTestCase_014894_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014894_2 ".mul.uniform.mediump_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014894, VkglTestCase_014894_1, VkglTestCase_014894_2);

#define VkglTestCase_014895_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014895_2 "mul.uniform.mediump_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014895, VkglTestCase_014895_1, VkglTestCase_014895_2);

#define VkglTestCase_014896_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014896_2 ".mul.uniform.mediump_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014896, VkglTestCase_014896_1, VkglTestCase_014896_2);

#define VkglTestCase_014897_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014897_2 "mul.uniform.mediump_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014897, VkglTestCase_014897_1, VkglTestCase_014897_2);

#define VkglTestCase_014898_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014898_2 "mul.uniform.mediump_mat3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014898, VkglTestCase_014898_1, VkglTestCase_014898_2);

#define VkglTestCase_014899_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014899_2 "ul.uniform.mediump_mat3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014899, VkglTestCase_014899_1, VkglTestCase_014899_2);

#define VkglTestCase_014900_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014900_2 ".mul.uniform.mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014900, VkglTestCase_014900_1, VkglTestCase_014900_2);

#define VkglTestCase_014901_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014901_2 "mul.uniform.mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014901, VkglTestCase_014901_1, VkglTestCase_014901_2);

#define VkglTestCase_014902_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014902_2 "mul.uniform.mediump_mat3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014902, VkglTestCase_014902_1, VkglTestCase_014902_2);

#define VkglTestCase_014903_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014903_2 "ul.uniform.mediump_mat3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014903, VkglTestCase_014903_1, VkglTestCase_014903_2);

#define VkglTestCase_014904_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014904_2 ".mul.uniform.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014904, VkglTestCase_014904_1, VkglTestCase_014904_2);

#define VkglTestCase_014905_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014905_2 "mul.uniform.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014905, VkglTestCase_014905_1, VkglTestCase_014905_2);

#define VkglTestCase_014906_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014906_2 "x.mul.uniform.highp_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014906, VkglTestCase_014906_1, VkglTestCase_014906_2);

#define VkglTestCase_014907_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014907_2 ".mul.uniform.highp_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014907, VkglTestCase_014907_1, VkglTestCase_014907_2);

#define VkglTestCase_014908_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014908_2 "x.mul.uniform.highp_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014908, VkglTestCase_014908_1, VkglTestCase_014908_2);

#define VkglTestCase_014909_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014909_2 ".mul.uniform.highp_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014909, VkglTestCase_014909_1, VkglTestCase_014909_2);

#define VkglTestCase_014910_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014910_2 ".mul.uniform.highp_mat3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014910, VkglTestCase_014910_1, VkglTestCase_014910_2);

#define VkglTestCase_014911_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014911_2 "mul.uniform.highp_mat3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014911, VkglTestCase_014911_1, VkglTestCase_014911_2);

#define VkglTestCase_014912_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014912_2 "x.mul.uniform.highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014912, VkglTestCase_014912_1, VkglTestCase_014912_2);

#define VkglTestCase_014913_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014913_2 ".mul.uniform.highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014913, VkglTestCase_014913_1, VkglTestCase_014913_2);

#define VkglTestCase_014914_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014914_2 ".mul.uniform.highp_mat3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014914, VkglTestCase_014914_1, VkglTestCase_014914_2);

#define VkglTestCase_014915_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014915_2 "mul.uniform.highp_mat3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014915, VkglTestCase_014915_1, VkglTestCase_014915_2);

#define VkglTestCase_014916_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014916_2 ".mul.uniform.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014916, VkglTestCase_014916_1, VkglTestCase_014916_2);

#define VkglTestCase_014917_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014917_2 "mul.uniform.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014917, VkglTestCase_014917_1, VkglTestCase_014917_2);

#define VkglTestCase_014918_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014918_2 ".mul.uniform.lowp_mat3x4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014918, VkglTestCase_014918_1, VkglTestCase_014918_2);

#define VkglTestCase_014919_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014919_2 "mul.uniform.lowp_mat3x4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014919, VkglTestCase_014919_1, VkglTestCase_014919_2);

#define VkglTestCase_014920_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014920_2 ".mul.uniform.lowp_vec4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014920, VkglTestCase_014920_1, VkglTestCase_014920_2);

#define VkglTestCase_014921_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014921_2 "mul.uniform.lowp_vec4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014921, VkglTestCase_014921_1, VkglTestCase_014921_2);

#define VkglTestCase_014922_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014922_2 "mul.uniform.lowp_mat3x4_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014922, VkglTestCase_014922_1, VkglTestCase_014922_2);

#define VkglTestCase_014923_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014923_2 "ul.uniform.lowp_mat3x4_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014923, VkglTestCase_014923_1, VkglTestCase_014923_2);

#define VkglTestCase_014924_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014924_2 ".mul.uniform.lowp_mat3x4_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014924, VkglTestCase_014924_1, VkglTestCase_014924_2);

#define VkglTestCase_014925_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014925_2 "mul.uniform.lowp_mat3x4_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014925, VkglTestCase_014925_1, VkglTestCase_014925_2);

#define VkglTestCase_014926_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014926_2 "mul.uniform.lowp_mat3x4_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014926, VkglTestCase_014926_1, VkglTestCase_014926_2);

#define VkglTestCase_014927_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014927_2 "ul.uniform.lowp_mat3x4_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014927, VkglTestCase_014927_1, VkglTestCase_014927_2);

#define VkglTestCase_014928_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014928_2 "ul.uniform.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014928, VkglTestCase_014928_1, VkglTestCase_014928_2);

#define VkglTestCase_014929_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014929_2 "l.uniform.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014929, VkglTestCase_014929_1, VkglTestCase_014929_2);

#define VkglTestCase_014930_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014930_2 "mul.uniform.mediump_mat3x4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014930, VkglTestCase_014930_1, VkglTestCase_014930_2);

#define VkglTestCase_014931_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014931_2 "ul.uniform.mediump_mat3x4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014931, VkglTestCase_014931_1, VkglTestCase_014931_2);

#define VkglTestCase_014932_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014932_2 "mul.uniform.mediump_vec4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014932, VkglTestCase_014932_1, VkglTestCase_014932_2);

#define VkglTestCase_014933_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014933_2 "ul.uniform.mediump_vec4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014933, VkglTestCase_014933_1, VkglTestCase_014933_2);

#define VkglTestCase_014934_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014934_2 "ul.uniform.mediump_mat3x4_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014934, VkglTestCase_014934_1, VkglTestCase_014934_2);

#define VkglTestCase_014935_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014935_2 "l.uniform.mediump_mat3x4_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014935, VkglTestCase_014935_1, VkglTestCase_014935_2);

#define VkglTestCase_014936_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014936_2 "mul.uniform.mediump_mat3x4_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014936, VkglTestCase_014936_1, VkglTestCase_014936_2);

#define VkglTestCase_014937_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014937_2 "ul.uniform.mediump_mat3x4_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014937, VkglTestCase_014937_1, VkglTestCase_014937_2);

#define VkglTestCase_014938_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014938_2 "ul.uniform.mediump_mat3x4_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014938, VkglTestCase_014938_1, VkglTestCase_014938_2);

#define VkglTestCase_014939_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014939_2 "l.uniform.mediump_mat3x4_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014939, VkglTestCase_014939_1, VkglTestCase_014939_2);

#define VkglTestCase_014940_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014940_2 "mul.uniform.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014940, VkglTestCase_014940_1, VkglTestCase_014940_2);

#define VkglTestCase_014941_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014941_2 "ul.uniform.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014941, VkglTestCase_014941_1, VkglTestCase_014941_2);

#define VkglTestCase_014942_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014942_2 ".mul.uniform.highp_mat3x4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014942, VkglTestCase_014942_1, VkglTestCase_014942_2);

#define VkglTestCase_014943_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014943_2 "mul.uniform.highp_mat3x4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014943, VkglTestCase_014943_1, VkglTestCase_014943_2);

#define VkglTestCase_014944_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014944_2 ".mul.uniform.highp_vec4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014944, VkglTestCase_014944_1, VkglTestCase_014944_2);

#define VkglTestCase_014945_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014945_2 "mul.uniform.highp_vec4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014945, VkglTestCase_014945_1, VkglTestCase_014945_2);

#define VkglTestCase_014946_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014946_2 "mul.uniform.highp_mat3x4_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014946, VkglTestCase_014946_1, VkglTestCase_014946_2);

#define VkglTestCase_014947_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014947_2 "ul.uniform.highp_mat3x4_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014947, VkglTestCase_014947_1, VkglTestCase_014947_2);

#define VkglTestCase_014948_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014948_2 ".mul.uniform.highp_mat3x4_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014948, VkglTestCase_014948_1, VkglTestCase_014948_2);

#define VkglTestCase_014949_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014949_2 "mul.uniform.highp_mat3x4_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014949, VkglTestCase_014949_1, VkglTestCase_014949_2);

#define VkglTestCase_014950_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014950_2 "mul.uniform.highp_mat3x4_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014950, VkglTestCase_014950_1, VkglTestCase_014950_2);

#define VkglTestCase_014951_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014951_2 "ul.uniform.highp_mat3x4_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014951, VkglTestCase_014951_1, VkglTestCase_014951_2);

#define VkglTestCase_014952_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014952_2 ".mul.uniform.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014952, VkglTestCase_014952_1, VkglTestCase_014952_2);

#define VkglTestCase_014953_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014953_2 "mul.uniform.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014953, VkglTestCase_014953_1, VkglTestCase_014953_2);

#define VkglTestCase_014954_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014954_2 ".mul.uniform.lowp_mat4x2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014954, VkglTestCase_014954_1, VkglTestCase_014954_2);

#define VkglTestCase_014955_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014955_2 "mul.uniform.lowp_mat4x2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014955, VkglTestCase_014955_1, VkglTestCase_014955_2);

#define VkglTestCase_014956_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014956_2 ".mul.uniform.lowp_vec2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014956, VkglTestCase_014956_1, VkglTestCase_014956_2);

#define VkglTestCase_014957_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014957_2 "mul.uniform.lowp_vec2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014957, VkglTestCase_014957_1, VkglTestCase_014957_2);

#define VkglTestCase_014958_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014958_2 "mul.uniform.lowp_mat4x2_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014958, VkglTestCase_014958_1, VkglTestCase_014958_2);

#define VkglTestCase_014959_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014959_2 "ul.uniform.lowp_mat4x2_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014959, VkglTestCase_014959_1, VkglTestCase_014959_2);

#define VkglTestCase_014960_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014960_2 "mul.uniform.lowp_mat4x2_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014960, VkglTestCase_014960_1, VkglTestCase_014960_2);

#define VkglTestCase_014961_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014961_2 "ul.uniform.lowp_mat4x2_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014961, VkglTestCase_014961_1, VkglTestCase_014961_2);

#define VkglTestCase_014962_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014962_2 ".mul.uniform.lowp_mat4x2_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014962, VkglTestCase_014962_1, VkglTestCase_014962_2);

#define VkglTestCase_014963_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014963_2 "mul.uniform.lowp_mat4x2_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014963, VkglTestCase_014963_1, VkglTestCase_014963_2);

#define VkglTestCase_014964_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014964_2 "ul.uniform.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014964, VkglTestCase_014964_1, VkglTestCase_014964_2);

#define VkglTestCase_014965_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014965_2 "l.uniform.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014965, VkglTestCase_014965_1, VkglTestCase_014965_2);

#define VkglTestCase_014966_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014966_2 "mul.uniform.mediump_mat4x2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014966, VkglTestCase_014966_1, VkglTestCase_014966_2);

#define VkglTestCase_014967_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014967_2 "ul.uniform.mediump_mat4x2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014967, VkglTestCase_014967_1, VkglTestCase_014967_2);

#define VkglTestCase_014968_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014968_2 "mul.uniform.mediump_vec2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014968, VkglTestCase_014968_1, VkglTestCase_014968_2);

#define VkglTestCase_014969_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014969_2 "ul.uniform.mediump_vec2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014969, VkglTestCase_014969_1, VkglTestCase_014969_2);

#define VkglTestCase_014970_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014970_2 "ul.uniform.mediump_mat4x2_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014970, VkglTestCase_014970_1, VkglTestCase_014970_2);

#define VkglTestCase_014971_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014971_2 "l.uniform.mediump_mat4x2_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014971, VkglTestCase_014971_1, VkglTestCase_014971_2);

#define VkglTestCase_014972_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014972_2 "ul.uniform.mediump_mat4x2_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014972, VkglTestCase_014972_1, VkglTestCase_014972_2);

#define VkglTestCase_014973_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_014973_2 "l.uniform.mediump_mat4x2_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014973, VkglTestCase_014973_1, VkglTestCase_014973_2);

#define VkglTestCase_014974_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014974_2 "mul.uniform.mediump_mat4x2_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014974, VkglTestCase_014974_1, VkglTestCase_014974_2);

#define VkglTestCase_014975_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014975_2 "ul.uniform.mediump_mat4x2_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014975, VkglTestCase_014975_1, VkglTestCase_014975_2);

#define VkglTestCase_014976_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014976_2 "mul.uniform.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014976, VkglTestCase_014976_1, VkglTestCase_014976_2);

#define VkglTestCase_014977_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014977_2 "ul.uniform.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014977, VkglTestCase_014977_1, VkglTestCase_014977_2);

#define VkglTestCase_014978_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014978_2 ".mul.uniform.highp_mat4x2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014978, VkglTestCase_014978_1, VkglTestCase_014978_2);

#define VkglTestCase_014979_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014979_2 "mul.uniform.highp_mat4x2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014979, VkglTestCase_014979_1, VkglTestCase_014979_2);

#define VkglTestCase_014980_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014980_2 ".mul.uniform.highp_vec2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014980, VkglTestCase_014980_1, VkglTestCase_014980_2);

#define VkglTestCase_014981_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014981_2 "mul.uniform.highp_vec2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014981, VkglTestCase_014981_1, VkglTestCase_014981_2);

#define VkglTestCase_014982_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014982_2 "mul.uniform.highp_mat4x2_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014982, VkglTestCase_014982_1, VkglTestCase_014982_2);

#define VkglTestCase_014983_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014983_2 "ul.uniform.highp_mat4x2_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014983, VkglTestCase_014983_1, VkglTestCase_014983_2);

#define VkglTestCase_014984_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014984_2 "mul.uniform.highp_mat4x2_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014984, VkglTestCase_014984_1, VkglTestCase_014984_2);

#define VkglTestCase_014985_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014985_2 "ul.uniform.highp_mat4x2_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014985, VkglTestCase_014985_1, VkglTestCase_014985_2);

#define VkglTestCase_014986_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014986_2 ".mul.uniform.highp_mat4x2_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014986, VkglTestCase_014986_1, VkglTestCase_014986_2);

#define VkglTestCase_014987_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014987_2 "mul.uniform.highp_mat4x2_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014987, VkglTestCase_014987_1, VkglTestCase_014987_2);

#define VkglTestCase_014988_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014988_2 ".mul.uniform.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014988, VkglTestCase_014988_1, VkglTestCase_014988_2);

#define VkglTestCase_014989_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014989_2 "mul.uniform.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014989, VkglTestCase_014989_1, VkglTestCase_014989_2);

#define VkglTestCase_014990_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014990_2 ".mul.uniform.lowp_mat4x3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014990, VkglTestCase_014990_1, VkglTestCase_014990_2);

#define VkglTestCase_014991_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014991_2 "mul.uniform.lowp_mat4x3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014991, VkglTestCase_014991_1, VkglTestCase_014991_2);

#define VkglTestCase_014992_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014992_2 ".mul.uniform.lowp_vec3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014992, VkglTestCase_014992_1, VkglTestCase_014992_2);

#define VkglTestCase_014993_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014993_2 "mul.uniform.lowp_vec3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014993, VkglTestCase_014993_1, VkglTestCase_014993_2);

#define VkglTestCase_014994_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014994_2 "mul.uniform.lowp_mat4x3_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014994, VkglTestCase_014994_1, VkglTestCase_014994_2);

#define VkglTestCase_014995_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014995_2 "ul.uniform.lowp_mat4x3_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014995, VkglTestCase_014995_1, VkglTestCase_014995_2);

#define VkglTestCase_014996_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014996_2 "mul.uniform.lowp_mat4x3_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014996, VkglTestCase_014996_1, VkglTestCase_014996_2);

#define VkglTestCase_014997_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014997_2 "ul.uniform.lowp_mat4x3_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014997, VkglTestCase_014997_1, VkglTestCase_014997_2);

#define VkglTestCase_014998_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014998_2 ".mul.uniform.lowp_mat4x3_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014998, VkglTestCase_014998_1, VkglTestCase_014998_2);

#define VkglTestCase_014999_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014999_2 "mul.uniform.lowp_mat4x3_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014999, VkglTestCase_014999_1, VkglTestCase_014999_2);

#define VkglTestCase_015000_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015000_2 "ul.uniform.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015000, VkglTestCase_015000_1, VkglTestCase_015000_2);

#define VkglTestCase_015001_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015001_2 "l.uniform.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015001, VkglTestCase_015001_1, VkglTestCase_015001_2);

#define VkglTestCase_015002_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015002_2 "mul.uniform.mediump_mat4x3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015002, VkglTestCase_015002_1, VkglTestCase_015002_2);

#define VkglTestCase_015003_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015003_2 "ul.uniform.mediump_mat4x3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015003, VkglTestCase_015003_1, VkglTestCase_015003_2);

#define VkglTestCase_015004_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015004_2 "mul.uniform.mediump_vec3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015004, VkglTestCase_015004_1, VkglTestCase_015004_2);

#define VkglTestCase_015005_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015005_2 "ul.uniform.mediump_vec3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015005, VkglTestCase_015005_1, VkglTestCase_015005_2);

#define VkglTestCase_015006_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015006_2 "ul.uniform.mediump_mat4x3_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015006, VkglTestCase_015006_1, VkglTestCase_015006_2);

#define VkglTestCase_015007_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015007_2 "l.uniform.mediump_mat4x3_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015007, VkglTestCase_015007_1, VkglTestCase_015007_2);

#define VkglTestCase_015008_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015008_2 "ul.uniform.mediump_mat4x3_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015008, VkglTestCase_015008_1, VkglTestCase_015008_2);

#define VkglTestCase_015009_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015009_2 "l.uniform.mediump_mat4x3_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015009, VkglTestCase_015009_1, VkglTestCase_015009_2);

#define VkglTestCase_015010_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015010_2 "mul.uniform.mediump_mat4x3_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015010, VkglTestCase_015010_1, VkglTestCase_015010_2);

#define VkglTestCase_015011_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015011_2 "ul.uniform.mediump_mat4x3_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015011, VkglTestCase_015011_1, VkglTestCase_015011_2);

#define VkglTestCase_015012_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015012_2 "mul.uniform.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015012, VkglTestCase_015012_1, VkglTestCase_015012_2);

#define VkglTestCase_015013_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015013_2 "ul.uniform.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015013, VkglTestCase_015013_1, VkglTestCase_015013_2);

#define VkglTestCase_015014_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015014_2 ".mul.uniform.highp_mat4x3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015014, VkglTestCase_015014_1, VkglTestCase_015014_2);

#define VkglTestCase_015015_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015015_2 "mul.uniform.highp_mat4x3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015015, VkglTestCase_015015_1, VkglTestCase_015015_2);

#define VkglTestCase_015016_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015016_2 ".mul.uniform.highp_vec3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015016, VkglTestCase_015016_1, VkglTestCase_015016_2);

#define VkglTestCase_015017_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015017_2 "mul.uniform.highp_vec3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015017, VkglTestCase_015017_1, VkglTestCase_015017_2);

#define VkglTestCase_015018_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015018_2 "mul.uniform.highp_mat4x3_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015018, VkglTestCase_015018_1, VkglTestCase_015018_2);

#define VkglTestCase_015019_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015019_2 "ul.uniform.highp_mat4x3_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015019, VkglTestCase_015019_1, VkglTestCase_015019_2);

#define VkglTestCase_015020_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015020_2 "mul.uniform.highp_mat4x3_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015020, VkglTestCase_015020_1, VkglTestCase_015020_2);

#define VkglTestCase_015021_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015021_2 "ul.uniform.highp_mat4x3_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015021, VkglTestCase_015021_1, VkglTestCase_015021_2);

#define VkglTestCase_015022_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015022_2 ".mul.uniform.highp_mat4x3_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015022, VkglTestCase_015022_1, VkglTestCase_015022_2);

#define VkglTestCase_015023_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015023_2 "mul.uniform.highp_mat4x3_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015023, VkglTestCase_015023_1, VkglTestCase_015023_2);

#define VkglTestCase_015024_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015024_2 "x.mul.uniform.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015024, VkglTestCase_015024_1, VkglTestCase_015024_2);

#define VkglTestCase_015025_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015025_2 ".mul.uniform.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015025, VkglTestCase_015025_1, VkglTestCase_015025_2);

#define VkglTestCase_015026_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015026_2 "x.mul.uniform.lowp_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015026, VkglTestCase_015026_1, VkglTestCase_015026_2);

#define VkglTestCase_015027_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015027_2 ".mul.uniform.lowp_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015027, VkglTestCase_015027_1, VkglTestCase_015027_2);

#define VkglTestCase_015028_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015028_2 "x.mul.uniform.lowp_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015028, VkglTestCase_015028_1, VkglTestCase_015028_2);

#define VkglTestCase_015029_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015029_2 ".mul.uniform.lowp_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015029, VkglTestCase_015029_1, VkglTestCase_015029_2);

#define VkglTestCase_015030_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015030_2 ".mul.uniform.lowp_mat4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015030, VkglTestCase_015030_1, VkglTestCase_015030_2);

#define VkglTestCase_015031_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015031_2 "mul.uniform.lowp_mat4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015031, VkglTestCase_015031_1, VkglTestCase_015031_2);

#define VkglTestCase_015032_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015032_2 ".mul.uniform.lowp_mat4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015032, VkglTestCase_015032_1, VkglTestCase_015032_2);

#define VkglTestCase_015033_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015033_2 "mul.uniform.lowp_mat4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015033, VkglTestCase_015033_1, VkglTestCase_015033_2);

#define VkglTestCase_015034_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015034_2 "x.mul.uniform.lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015034, VkglTestCase_015034_1, VkglTestCase_015034_2);

#define VkglTestCase_015035_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015035_2 ".mul.uniform.lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015035, VkglTestCase_015035_1, VkglTestCase_015035_2);

#define VkglTestCase_015036_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015036_2 "mul.uniform.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015036, VkglTestCase_015036_1, VkglTestCase_015036_2);

#define VkglTestCase_015037_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015037_2 "ul.uniform.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015037, VkglTestCase_015037_1, VkglTestCase_015037_2);

#define VkglTestCase_015038_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015038_2 ".mul.uniform.mediump_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015038, VkglTestCase_015038_1, VkglTestCase_015038_2);

#define VkglTestCase_015039_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015039_2 "mul.uniform.mediump_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015039, VkglTestCase_015039_1, VkglTestCase_015039_2);

#define VkglTestCase_015040_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015040_2 ".mul.uniform.mediump_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015040, VkglTestCase_015040_1, VkglTestCase_015040_2);

#define VkglTestCase_015041_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015041_2 "mul.uniform.mediump_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015041, VkglTestCase_015041_1, VkglTestCase_015041_2);

#define VkglTestCase_015042_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015042_2 "mul.uniform.mediump_mat4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015042, VkglTestCase_015042_1, VkglTestCase_015042_2);

#define VkglTestCase_015043_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015043_2 "ul.uniform.mediump_mat4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015043, VkglTestCase_015043_1, VkglTestCase_015043_2);

#define VkglTestCase_015044_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015044_2 "mul.uniform.mediump_mat4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015044, VkglTestCase_015044_1, VkglTestCase_015044_2);

#define VkglTestCase_015045_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015045_2 "ul.uniform.mediump_mat4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015045, VkglTestCase_015045_1, VkglTestCase_015045_2);

#define VkglTestCase_015046_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015046_2 ".mul.uniform.mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015046, VkglTestCase_015046_1, VkglTestCase_015046_2);

#define VkglTestCase_015047_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015047_2 "mul.uniform.mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015047, VkglTestCase_015047_1, VkglTestCase_015047_2);

#define VkglTestCase_015048_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015048_2 ".mul.uniform.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015048, VkglTestCase_015048_1, VkglTestCase_015048_2);

#define VkglTestCase_015049_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015049_2 "mul.uniform.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015049, VkglTestCase_015049_1, VkglTestCase_015049_2);

#define VkglTestCase_015050_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015050_2 "x.mul.uniform.highp_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015050, VkglTestCase_015050_1, VkglTestCase_015050_2);

#define VkglTestCase_015051_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015051_2 ".mul.uniform.highp_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015051, VkglTestCase_015051_1, VkglTestCase_015051_2);

#define VkglTestCase_015052_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015052_2 "x.mul.uniform.highp_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015052, VkglTestCase_015052_1, VkglTestCase_015052_2);

#define VkglTestCase_015053_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015053_2 ".mul.uniform.highp_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015053, VkglTestCase_015053_1, VkglTestCase_015053_2);

#define VkglTestCase_015054_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015054_2 ".mul.uniform.highp_mat4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015054, VkglTestCase_015054_1, VkglTestCase_015054_2);

#define VkglTestCase_015055_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015055_2 "mul.uniform.highp_mat4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015055, VkglTestCase_015055_1, VkglTestCase_015055_2);

#define VkglTestCase_015056_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015056_2 ".mul.uniform.highp_mat4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015056, VkglTestCase_015056_1, VkglTestCase_015056_2);

#define VkglTestCase_015057_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015057_2 "mul.uniform.highp_mat4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015057, VkglTestCase_015057_1, VkglTestCase_015057_2);

#define VkglTestCase_015058_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015058_2 "x.mul.uniform.highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015058, VkglTestCase_015058_1, VkglTestCase_015058_2);

#define VkglTestCase_015059_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015059_2 ".mul.uniform.highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_015059, VkglTestCase_015059_1, VkglTestCase_015059_2);
