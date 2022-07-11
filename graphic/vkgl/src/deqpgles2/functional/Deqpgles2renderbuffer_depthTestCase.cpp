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
#include "../ActsDeqpgles20013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012752_1 "dEQP-GLES2.functional.fbo.completeness.renderable"
#define VkglTestCase_012752_2 ".renderbuffer.depth.depth_component_unsigned_short"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012752, VkglTestCase_012752_1, VkglTestCase_012752_2);

#define VkglTestCase_012753_1 "dEQP-GLES2.functional.fbo.completeness.renderabl"
#define VkglTestCase_012753_2 "e.renderbuffer.depth.depth_component_unsigned_int"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012753, VkglTestCase_012753_1, VkglTestCase_012753_2);

#define VkglTestCase_012754_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012754_2 "erable.renderbuffer.depth.red_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012754, VkglTestCase_012754_1, VkglTestCase_012754_2);

#define VkglTestCase_012755_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012755_2 "renderable.renderbuffer.depth.red_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012755, VkglTestCase_012755_1, VkglTestCase_012755_2);

#define VkglTestCase_012756_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012756_2 "erable.renderbuffer.depth.red_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012756, VkglTestCase_012756_1, VkglTestCase_012756_2);

#define VkglTestCase_012757_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012757_2 "erable.renderbuffer.depth.rgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012757, VkglTestCase_012757_1, VkglTestCase_012757_2);

#define VkglTestCase_012758_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012758_2 "renderable.renderbuffer.depth.rgb_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012758, VkglTestCase_012758_1, VkglTestCase_012758_2);

#define VkglTestCase_012759_1 "dEQP-GLES2.functional.fbo.completeness.rendera"
#define VkglTestCase_012759_2 "ble.renderbuffer.depth.rgb_unsigned_short_5_6_5"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012759, VkglTestCase_012759_1, VkglTestCase_012759_2);

#define VkglTestCase_012760_1 "dEQP-GLES2.functional.fbo.completeness.renderable."
#define VkglTestCase_012760_2 "renderbuffer.depth.rgb_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012760, VkglTestCase_012760_1, VkglTestCase_012760_2);

#define VkglTestCase_012761_1 "dEQP-GLES2.functional.fbo.completeness.renderable."
#define VkglTestCase_012761_2 "renderbuffer.depth.rgb_unsigned_int_10f_11f_11f_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012761, VkglTestCase_012761_1, VkglTestCase_012761_2);

#define VkglTestCase_012762_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012762_2 "erable.renderbuffer.depth.rgb_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012762, VkglTestCase_012762_1, VkglTestCase_012762_2);

#define VkglTestCase_012763_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012763_2 "erable.renderbuffer.depth.rgba_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012763, VkglTestCase_012763_1, VkglTestCase_012763_2);

#define VkglTestCase_012764_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012764_2 "renderable.renderbuffer.depth.rgba_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012764, VkglTestCase_012764_1, VkglTestCase_012764_2);

#define VkglTestCase_012765_1 "dEQP-GLES2.functional.fbo.completeness.renderabl"
#define VkglTestCase_012765_2 "e.renderbuffer.depth.rgba_unsigned_short_4_4_4_4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012765, VkglTestCase_012765_1, VkglTestCase_012765_2);

#define VkglTestCase_012766_1 "dEQP-GLES2.functional.fbo.completeness.renderabl"
#define VkglTestCase_012766_2 "e.renderbuffer.depth.rgba_unsigned_short_5_5_5_1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012766, VkglTestCase_012766_1, VkglTestCase_012766_2);

#define VkglTestCase_012767_1 "dEQP-GLES2.functional.fbo.completeness.renderable."
#define VkglTestCase_012767_2 "renderbuffer.depth.rgba_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012767, VkglTestCase_012767_1, VkglTestCase_012767_2);

#define VkglTestCase_012768_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012768_2 "rable.renderbuffer.depth.rgba_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012768, VkglTestCase_012768_1, VkglTestCase_012768_2);

#define VkglTestCase_012769_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012769_2 "ss.renderable.renderbuffer.depth.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012769, VkglTestCase_012769_1, VkglTestCase_012769_2);

#define VkglTestCase_012770_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012770_2 "s.renderable.renderbuffer.depth.rgb10"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012770, VkglTestCase_012770_1, VkglTestCase_012770_2);

#define VkglTestCase_012771_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012771_2 "s.renderable.renderbuffer.depth.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012771, VkglTestCase_012771_1, VkglTestCase_012771_2);

#define VkglTestCase_012772_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012772_2 ".renderable.renderbuffer.depth.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012772, VkglTestCase_012772_1, VkglTestCase_012772_2);

#define VkglTestCase_012773_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012773_2 "s.renderable.renderbuffer.depth.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012773, VkglTestCase_012773_1, VkglTestCase_012773_2);

#define VkglTestCase_012774_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012774_2 ".renderable.renderbuffer.depth.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012774, VkglTestCase_012774_1, VkglTestCase_012774_2);

#define VkglTestCase_012775_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012775_2 "erable.renderbuffer.depth.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012775, VkglTestCase_012775_1, VkglTestCase_012775_2);

#define VkglTestCase_012776_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012776_2 "erable.renderbuffer.depth.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012776, VkglTestCase_012776_1, VkglTestCase_012776_2);

#define VkglTestCase_012777_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012777_2 "erable.renderbuffer.depth.depth_component32"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012777, VkglTestCase_012777_1, VkglTestCase_012777_2);

#define VkglTestCase_012778_1 "dEQP-GLES2.functional.fbo.completeness.ren"
#define VkglTestCase_012778_2 "derable.renderbuffer.depth.rg_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012778, VkglTestCase_012778_1, VkglTestCase_012778_2);

#define VkglTestCase_012779_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012779_2 ".renderable.renderbuffer.depth.rg_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012779, VkglTestCase_012779_1, VkglTestCase_012779_2);

#define VkglTestCase_012780_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012780_2 "erable.renderbuffer.depth.rg_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012780, VkglTestCase_012780_1, VkglTestCase_012780_2);

#define VkglTestCase_012781_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012781_2 "ess.renderable.renderbuffer.depth.r8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012781, VkglTestCase_012781_1, VkglTestCase_012781_2);

#define VkglTestCase_012782_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012782_2 "ss.renderable.renderbuffer.depth.rg8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012782, VkglTestCase_012782_1, VkglTestCase_012782_2);

#define VkglTestCase_012783_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012783_2 "ss.renderable.renderbuffer.depth.r16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012783, VkglTestCase_012783_1, VkglTestCase_012783_2);

#define VkglTestCase_012784_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012784_2 "s.renderable.renderbuffer.depth.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012784, VkglTestCase_012784_1, VkglTestCase_012784_2);

#define VkglTestCase_012785_1 "dEQP-GLES2.functional.fbo.completeness.renderable."
#define VkglTestCase_012785_2 "renderbuffer.depth.depth_stencil_unsigned_int_24_8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012785, VkglTestCase_012785_1, VkglTestCase_012785_2);

#define VkglTestCase_012786_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012786_2 ".renderable.renderbuffer.depth.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012786, VkglTestCase_012786_1, VkglTestCase_012786_2);

#define VkglTestCase_012787_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012787_2 "s.renderable.renderbuffer.depth.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012787, VkglTestCase_012787_1, VkglTestCase_012787_2);

#define VkglTestCase_012788_1 "dEQP-GLES2.functional.fbo.completeness.ren"
#define VkglTestCase_012788_2 "derable.renderbuffer.depth.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012788, VkglTestCase_012788_1, VkglTestCase_012788_2);

#define VkglTestCase_012789_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012789_2 "nderable.renderbuffer.depth.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012789, VkglTestCase_012789_1, VkglTestCase_012789_2);

#define VkglTestCase_012790_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012790_2 "erable.renderbuffer.depth.srgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012790, VkglTestCase_012790_1, VkglTestCase_012790_2);

#define VkglTestCase_012791_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012791_2 "s.renderable.renderbuffer.depth.srgb8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012791, VkglTestCase_012791_1, VkglTestCase_012791_2);

#define VkglTestCase_012792_1 "dEQP-GLES2.functional.fbo.completeness.rendera"
#define VkglTestCase_012792_2 "ble.renderbuffer.depth.srgb_alpha_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012792, VkglTestCase_012792_1, VkglTestCase_012792_2);

#define VkglTestCase_012793_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012793_2 "enderable.renderbuffer.depth.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012793, VkglTestCase_012793_1, VkglTestCase_012793_2);

#define VkglTestCase_012794_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012794_2 "nderable.renderbuffer.depth.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012794, VkglTestCase_012794_1, VkglTestCase_012794_2);

#define VkglTestCase_012795_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012795_2 "s.renderable.renderbuffer.depth.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012795, VkglTestCase_012795_1, VkglTestCase_012795_2);

#define VkglTestCase_012796_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012796_2 ".renderable.renderbuffer.depth.sr8_ext"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012796, VkglTestCase_012796_1, VkglTestCase_012796_2);

#define VkglTestCase_012797_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012797_2 ".renderable.renderbuffer.depth.srg8_ext"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012797, VkglTestCase_012797_1, VkglTestCase_012797_2);
