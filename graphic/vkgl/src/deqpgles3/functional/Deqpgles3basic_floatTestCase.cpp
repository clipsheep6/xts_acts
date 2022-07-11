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
#include "../ActsDeqpgles30039TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_038720_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038720_2 "ut.basic.float.rgba32f_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038720, VkglTestCase_038720_1, VkglTestCase_038720_2);

#define VkglTestCase_038721_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038721_2 "ut.basic.float.rgba32f_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038721, VkglTestCase_038721_1, VkglTestCase_038721_2);

#define VkglTestCase_038722_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038722_2 "ut.basic.float.rgba32f_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038722, VkglTestCase_038722_1, VkglTestCase_038722_2);

#define VkglTestCase_038723_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038723_2 "ut.basic.float.rgba32f_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038723, VkglTestCase_038723_1, VkglTestCase_038723_2);

#define VkglTestCase_038724_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_038724_2 ".basic.float.rgba32f_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038724, VkglTestCase_038724_1, VkglTestCase_038724_2);

#define VkglTestCase_038725_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038725_2 "t.basic.float.rgba32f_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038725, VkglTestCase_038725_1, VkglTestCase_038725_2);

#define VkglTestCase_038726_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038726_2 "t.basic.float.rgba32f_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038726, VkglTestCase_038726_1, VkglTestCase_038726_2);

#define VkglTestCase_038727_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038727_2 "t.basic.float.rgba32f_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038727, VkglTestCase_038727_1, VkglTestCase_038727_2);

#define VkglTestCase_038728_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038728_2 "t.basic.float.rgba32f_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038728, VkglTestCase_038728_1, VkglTestCase_038728_2);

#define VkglTestCase_038729_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038729_2 "ut.basic.float.rgba32f_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038729, VkglTestCase_038729_1, VkglTestCase_038729_2);

#define VkglTestCase_038730_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038730_2 "ut.basic.float.rgba32f_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038730, VkglTestCase_038730_1, VkglTestCase_038730_2);

#define VkglTestCase_038731_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038731_2 "ut.basic.float.rgba32f_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038731, VkglTestCase_038731_1, VkglTestCase_038731_2);

#define VkglTestCase_038732_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038732_2 "ut.basic.float.rgba16f_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038732, VkglTestCase_038732_1, VkglTestCase_038732_2);

#define VkglTestCase_038733_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038733_2 "ut.basic.float.rgba16f_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038733, VkglTestCase_038733_1, VkglTestCase_038733_2);

#define VkglTestCase_038734_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038734_2 "ut.basic.float.rgba16f_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038734, VkglTestCase_038734_1, VkglTestCase_038734_2);

#define VkglTestCase_038735_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038735_2 "ut.basic.float.rgba16f_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038735, VkglTestCase_038735_1, VkglTestCase_038735_2);

#define VkglTestCase_038736_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_038736_2 ".basic.float.rgba16f_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038736, VkglTestCase_038736_1, VkglTestCase_038736_2);

#define VkglTestCase_038737_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038737_2 "t.basic.float.rgba16f_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038737, VkglTestCase_038737_1, VkglTestCase_038737_2);

#define VkglTestCase_038738_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038738_2 "t.basic.float.rgba16f_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038738, VkglTestCase_038738_1, VkglTestCase_038738_2);

#define VkglTestCase_038739_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038739_2 "t.basic.float.rgba16f_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038739, VkglTestCase_038739_1, VkglTestCase_038739_2);

#define VkglTestCase_038740_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038740_2 "t.basic.float.rgba16f_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038740, VkglTestCase_038740_1, VkglTestCase_038740_2);

#define VkglTestCase_038741_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038741_2 "ut.basic.float.rgba16f_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038741, VkglTestCase_038741_1, VkglTestCase_038741_2);

#define VkglTestCase_038742_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038742_2 "ut.basic.float.rgba16f_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038742, VkglTestCase_038742_1, VkglTestCase_038742_2);

#define VkglTestCase_038743_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038743_2 "ut.basic.float.rgba16f_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038743, VkglTestCase_038743_1, VkglTestCase_038743_2);

#define VkglTestCase_038744_1 "dEQP-GLES3.functional.fragment_out.b"
#define VkglTestCase_038744_2 "asic.float.r11f_g11f_b10f_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038744, VkglTestCase_038744_1, VkglTestCase_038744_2);

#define VkglTestCase_038745_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_038745_2 "basic.float.r11f_g11f_b10f_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038745, VkglTestCase_038745_1, VkglTestCase_038745_2);

#define VkglTestCase_038746_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_038746_2 "basic.float.r11f_g11f_b10f_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038746, VkglTestCase_038746_1, VkglTestCase_038746_2);

#define VkglTestCase_038747_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_038747_2 "basic.float.r11f_g11f_b10f_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038747, VkglTestCase_038747_1, VkglTestCase_038747_2);

#define VkglTestCase_038748_1 "dEQP-GLES3.functional.fragment_out.ba"
#define VkglTestCase_038748_2 "sic.float.r11f_g11f_b10f_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038748, VkglTestCase_038748_1, VkglTestCase_038748_2);

#define VkglTestCase_038749_1 "dEQP-GLES3.functional.fragment_out.ba"
#define VkglTestCase_038749_2 "sic.float.r11f_g11f_b10f_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038749, VkglTestCase_038749_1, VkglTestCase_038749_2);

#define VkglTestCase_038750_1 "dEQP-GLES3.functional.fragment_out.ba"
#define VkglTestCase_038750_2 "sic.float.r11f_g11f_b10f_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038750, VkglTestCase_038750_1, VkglTestCase_038750_2);

#define VkglTestCase_038751_1 "dEQP-GLES3.functional.fragment_out.ba"
#define VkglTestCase_038751_2 "sic.float.r11f_g11f_b10f_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038751, VkglTestCase_038751_1, VkglTestCase_038751_2);

#define VkglTestCase_038752_1 "dEQP-GLES3.functional.fragment_out.b"
#define VkglTestCase_038752_2 "asic.float.r11f_g11f_b10f_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038752, VkglTestCase_038752_1, VkglTestCase_038752_2);

#define VkglTestCase_038753_1 "dEQP-GLES3.functional.fragment_out.b"
#define VkglTestCase_038753_2 "asic.float.r11f_g11f_b10f_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038753, VkglTestCase_038753_1, VkglTestCase_038753_2);

#define VkglTestCase_038754_1 "dEQP-GLES3.functional.fragment_out.b"
#define VkglTestCase_038754_2 "asic.float.r11f_g11f_b10f_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038754, VkglTestCase_038754_1, VkglTestCase_038754_2);

#define VkglTestCase_038755_1 "dEQP-GLES3.functional.fragment_out.b"
#define VkglTestCase_038755_2 "asic.float.r11f_g11f_b10f_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038755, VkglTestCase_038755_1, VkglTestCase_038755_2);

#define VkglTestCase_038756_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038756_2 "out.basic.float.rg32f_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038756, VkglTestCase_038756_1, VkglTestCase_038756_2);

#define VkglTestCase_038757_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038757_2 "out.basic.float.rg32f_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038757, VkglTestCase_038757_1, VkglTestCase_038757_2);

#define VkglTestCase_038758_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038758_2 "out.basic.float.rg32f_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038758, VkglTestCase_038758_1, VkglTestCase_038758_2);

#define VkglTestCase_038759_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038759_2 "out.basic.float.rg32f_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038759, VkglTestCase_038759_1, VkglTestCase_038759_2);

#define VkglTestCase_038760_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038760_2 "t.basic.float.rg32f_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038760, VkglTestCase_038760_1, VkglTestCase_038760_2);

#define VkglTestCase_038761_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038761_2 "ut.basic.float.rg32f_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038761, VkglTestCase_038761_1, VkglTestCase_038761_2);

#define VkglTestCase_038762_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038762_2 "ut.basic.float.rg32f_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038762, VkglTestCase_038762_1, VkglTestCase_038762_2);

#define VkglTestCase_038763_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038763_2 "ut.basic.float.rg32f_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038763, VkglTestCase_038763_1, VkglTestCase_038763_2);

#define VkglTestCase_038764_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038764_2 "ut.basic.float.rg32f_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038764, VkglTestCase_038764_1, VkglTestCase_038764_2);

#define VkglTestCase_038765_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038765_2 "out.basic.float.rg32f_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038765, VkglTestCase_038765_1, VkglTestCase_038765_2);

#define VkglTestCase_038766_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038766_2 "out.basic.float.rg32f_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038766, VkglTestCase_038766_1, VkglTestCase_038766_2);

#define VkglTestCase_038767_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038767_2 "out.basic.float.rg32f_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038767, VkglTestCase_038767_1, VkglTestCase_038767_2);

#define VkglTestCase_038768_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038768_2 "out.basic.float.rg16f_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038768, VkglTestCase_038768_1, VkglTestCase_038768_2);

#define VkglTestCase_038769_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038769_2 "out.basic.float.rg16f_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038769, VkglTestCase_038769_1, VkglTestCase_038769_2);

#define VkglTestCase_038770_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038770_2 "out.basic.float.rg16f_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038770, VkglTestCase_038770_1, VkglTestCase_038770_2);

#define VkglTestCase_038771_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038771_2 "out.basic.float.rg16f_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038771, VkglTestCase_038771_1, VkglTestCase_038771_2);

#define VkglTestCase_038772_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038772_2 "t.basic.float.rg16f_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038772, VkglTestCase_038772_1, VkglTestCase_038772_2);

#define VkglTestCase_038773_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038773_2 "ut.basic.float.rg16f_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038773, VkglTestCase_038773_1, VkglTestCase_038773_2);

#define VkglTestCase_038774_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038774_2 "ut.basic.float.rg16f_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038774, VkglTestCase_038774_1, VkglTestCase_038774_2);

#define VkglTestCase_038775_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038775_2 "ut.basic.float.rg16f_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038775, VkglTestCase_038775_1, VkglTestCase_038775_2);

#define VkglTestCase_038776_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038776_2 "ut.basic.float.rg16f_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038776, VkglTestCase_038776_1, VkglTestCase_038776_2);

#define VkglTestCase_038777_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038777_2 "out.basic.float.rg16f_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038777, VkglTestCase_038777_1, VkglTestCase_038777_2);

#define VkglTestCase_038778_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038778_2 "out.basic.float.rg16f_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038778, VkglTestCase_038778_1, VkglTestCase_038778_2);

#define VkglTestCase_038779_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038779_2 "out.basic.float.rg16f_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038779, VkglTestCase_038779_1, VkglTestCase_038779_2);

#define VkglTestCase_038780_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038780_2 "out.basic.float.r32f_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038780, VkglTestCase_038780_1, VkglTestCase_038780_2);

#define VkglTestCase_038781_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038781_2 "_out.basic.float.r32f_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038781, VkglTestCase_038781_1, VkglTestCase_038781_2);

#define VkglTestCase_038782_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038782_2 "_out.basic.float.r32f_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038782, VkglTestCase_038782_1, VkglTestCase_038782_2);

#define VkglTestCase_038783_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038783_2 "_out.basic.float.r32f_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038783, VkglTestCase_038783_1, VkglTestCase_038783_2);

#define VkglTestCase_038784_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038784_2 "ut.basic.float.r32f_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038784, VkglTestCase_038784_1, VkglTestCase_038784_2);

#define VkglTestCase_038785_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038785_2 "ut.basic.float.r32f_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038785, VkglTestCase_038785_1, VkglTestCase_038785_2);

#define VkglTestCase_038786_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038786_2 "ut.basic.float.r32f_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038786, VkglTestCase_038786_1, VkglTestCase_038786_2);

#define VkglTestCase_038787_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038787_2 "ut.basic.float.r32f_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038787, VkglTestCase_038787_1, VkglTestCase_038787_2);

#define VkglTestCase_038788_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038788_2 "out.basic.float.r32f_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038788, VkglTestCase_038788_1, VkglTestCase_038788_2);

#define VkglTestCase_038789_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038789_2 "out.basic.float.r32f_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038789, VkglTestCase_038789_1, VkglTestCase_038789_2);

#define VkglTestCase_038790_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038790_2 "out.basic.float.r32f_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038790, VkglTestCase_038790_1, VkglTestCase_038790_2);

#define VkglTestCase_038791_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038791_2 "out.basic.float.r32f_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038791, VkglTestCase_038791_1, VkglTestCase_038791_2);

#define VkglTestCase_038792_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038792_2 "out.basic.float.r16f_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038792, VkglTestCase_038792_1, VkglTestCase_038792_2);

#define VkglTestCase_038793_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038793_2 "_out.basic.float.r16f_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038793, VkglTestCase_038793_1, VkglTestCase_038793_2);

#define VkglTestCase_038794_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038794_2 "_out.basic.float.r16f_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038794, VkglTestCase_038794_1, VkglTestCase_038794_2);

#define VkglTestCase_038795_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038795_2 "_out.basic.float.r16f_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038795, VkglTestCase_038795_1, VkglTestCase_038795_2);

#define VkglTestCase_038796_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038796_2 "ut.basic.float.r16f_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038796, VkglTestCase_038796_1, VkglTestCase_038796_2);

#define VkglTestCase_038797_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038797_2 "ut.basic.float.r16f_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038797, VkglTestCase_038797_1, VkglTestCase_038797_2);

#define VkglTestCase_038798_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038798_2 "ut.basic.float.r16f_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038798, VkglTestCase_038798_1, VkglTestCase_038798_2);

#define VkglTestCase_038799_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038799_2 "ut.basic.float.r16f_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038799, VkglTestCase_038799_1, VkglTestCase_038799_2);

#define VkglTestCase_038800_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038800_2 "out.basic.float.r16f_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038800, VkglTestCase_038800_1, VkglTestCase_038800_2);

#define VkglTestCase_038801_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038801_2 "out.basic.float.r16f_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038801, VkglTestCase_038801_1, VkglTestCase_038801_2);

#define VkglTestCase_038802_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038802_2 "out.basic.float.r16f_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038802, VkglTestCase_038802_1, VkglTestCase_038802_2);

#define VkglTestCase_038803_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038803_2 "out.basic.float.r16f_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038803, VkglTestCase_038803_1, VkglTestCase_038803_2);
