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

#define VkglTestCase_012661_1 "dEQP-GLES2.functional.fbo.completeness.renderable."
#define VkglTestCase_012661_2 "renderbuffer.color0.depth_component_unsigned_short"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012661, VkglTestCase_012661_1, VkglTestCase_012661_2);

#define VkglTestCase_012662_1 "dEQP-GLES2.functional.fbo.completeness.renderable"
#define VkglTestCase_012662_2 ".renderbuffer.color0.depth_component_unsigned_int"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012662, VkglTestCase_012662_1, VkglTestCase_012662_2);

#define VkglTestCase_012663_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012663_2 "erable.renderbuffer.color0.red_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012663, VkglTestCase_012663_1, VkglTestCase_012663_2);

#define VkglTestCase_012664_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012664_2 "renderable.renderbuffer.color0.red_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012664, VkglTestCase_012664_1, VkglTestCase_012664_2);

#define VkglTestCase_012665_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012665_2 "rable.renderbuffer.color0.red_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012665, VkglTestCase_012665_1, VkglTestCase_012665_2);

#define VkglTestCase_012666_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012666_2 "erable.renderbuffer.color0.rgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012666, VkglTestCase_012666_1, VkglTestCase_012666_2);

#define VkglTestCase_012667_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012667_2 "renderable.renderbuffer.color0.rgb_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012667, VkglTestCase_012667_1, VkglTestCase_012667_2);

#define VkglTestCase_012668_1 "dEQP-GLES2.functional.fbo.completeness.renderab"
#define VkglTestCase_012668_2 "le.renderbuffer.color0.rgb_unsigned_short_5_6_5"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012668, VkglTestCase_012668_1, VkglTestCase_012668_2);

#define VkglTestCase_012669_1 "dEQP-GLES2.functional.fbo.completeness.renderable."
#define VkglTestCase_012669_2 "renderbuffer.color0.rgb_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012669, VkglTestCase_012669_1, VkglTestCase_012669_2);

#define VkglTestCase_012670_1 "dEQP-GLES2.functional.fbo.completeness.renderable.r"
#define VkglTestCase_012670_2 "enderbuffer.color0.rgb_unsigned_int_10f_11f_11f_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012670, VkglTestCase_012670_1, VkglTestCase_012670_2);

#define VkglTestCase_012671_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012671_2 "rable.renderbuffer.color0.rgb_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012671, VkglTestCase_012671_1, VkglTestCase_012671_2);

#define VkglTestCase_012672_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012672_2 "rable.renderbuffer.color0.rgba_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012672, VkglTestCase_012672_1, VkglTestCase_012672_2);

#define VkglTestCase_012673_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012673_2 "enderable.renderbuffer.color0.rgba_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012673, VkglTestCase_012673_1, VkglTestCase_012673_2);

#define VkglTestCase_012674_1 "dEQP-GLES2.functional.fbo.completeness.renderabl"
#define VkglTestCase_012674_2 "e.renderbuffer.color0.rgba_unsigned_short_4_4_4_4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012674, VkglTestCase_012674_1, VkglTestCase_012674_2);

#define VkglTestCase_012675_1 "dEQP-GLES2.functional.fbo.completeness.renderabl"
#define VkglTestCase_012675_2 "e.renderbuffer.color0.rgba_unsigned_short_5_5_5_1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012675, VkglTestCase_012675_1, VkglTestCase_012675_2);

#define VkglTestCase_012676_1 "dEQP-GLES2.functional.fbo.completeness.renderable.r"
#define VkglTestCase_012676_2 "enderbuffer.color0.rgba_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012676, VkglTestCase_012676_1, VkglTestCase_012676_2);

#define VkglTestCase_012677_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012677_2 "rable.renderbuffer.color0.rgba_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012677, VkglTestCase_012677_1, VkglTestCase_012677_2);

#define VkglTestCase_012678_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012678_2 "s.renderable.renderbuffer.color0.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012678, VkglTestCase_012678_1, VkglTestCase_012678_2);

#define VkglTestCase_012679_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012679_2 "s.renderable.renderbuffer.color0.rgb10"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012679, VkglTestCase_012679_1, VkglTestCase_012679_2);

#define VkglTestCase_012680_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012680_2 "s.renderable.renderbuffer.color0.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012680, VkglTestCase_012680_1, VkglTestCase_012680_2);

#define VkglTestCase_012681_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012681_2 ".renderable.renderbuffer.color0.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012681, VkglTestCase_012681_1, VkglTestCase_012681_2);

#define VkglTestCase_012682_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012682_2 "s.renderable.renderbuffer.color0.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012682, VkglTestCase_012682_1, VkglTestCase_012682_2);

#define VkglTestCase_012683_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012683_2 "renderable.renderbuffer.color0.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012683, VkglTestCase_012683_1, VkglTestCase_012683_2);

#define VkglTestCase_012684_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012684_2 "erable.renderbuffer.color0.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012684, VkglTestCase_012684_1, VkglTestCase_012684_2);

#define VkglTestCase_012685_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012685_2 "erable.renderbuffer.color0.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012685, VkglTestCase_012685_1, VkglTestCase_012685_2);

#define VkglTestCase_012686_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012686_2 "erable.renderbuffer.color0.depth_component32"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012686, VkglTestCase_012686_1, VkglTestCase_012686_2);

#define VkglTestCase_012687_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012687_2 "erable.renderbuffer.color0.rg_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012687, VkglTestCase_012687_1, VkglTestCase_012687_2);

#define VkglTestCase_012688_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012688_2 "renderable.renderbuffer.color0.rg_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012688, VkglTestCase_012688_1, VkglTestCase_012688_2);

#define VkglTestCase_012689_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012689_2 "erable.renderbuffer.color0.rg_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012689, VkglTestCase_012689_1, VkglTestCase_012689_2);

#define VkglTestCase_012690_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012690_2 "ss.renderable.renderbuffer.color0.r8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012690, VkglTestCase_012690_1, VkglTestCase_012690_2);

#define VkglTestCase_012691_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012691_2 "ss.renderable.renderbuffer.color0.rg8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012691, VkglTestCase_012691_1, VkglTestCase_012691_2);

#define VkglTestCase_012692_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012692_2 "s.renderable.renderbuffer.color0.r16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012692, VkglTestCase_012692_1, VkglTestCase_012692_2);

#define VkglTestCase_012693_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012693_2 "s.renderable.renderbuffer.color0.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012693, VkglTestCase_012693_1, VkglTestCase_012693_2);

#define VkglTestCase_012694_1 "dEQP-GLES2.functional.fbo.completeness.renderable."
#define VkglTestCase_012694_2 "renderbuffer.color0.depth_stencil_unsigned_int_24_8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012694, VkglTestCase_012694_1, VkglTestCase_012694_2);

#define VkglTestCase_012695_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012695_2 ".renderable.renderbuffer.color0.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012695, VkglTestCase_012695_1, VkglTestCase_012695_2);

#define VkglTestCase_012696_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012696_2 "erable.renderbuffer.color0.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012696, VkglTestCase_012696_1, VkglTestCase_012696_2);

#define VkglTestCase_012697_1 "dEQP-GLES2.functional.fbo.completeness.ren"
#define VkglTestCase_012697_2 "derable.renderbuffer.color0.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012697, VkglTestCase_012697_1, VkglTestCase_012697_2);

#define VkglTestCase_012698_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012698_2 "rable.renderbuffer.color0.srgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012698, VkglTestCase_012698_1, VkglTestCase_012698_2);

#define VkglTestCase_012699_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012699_2 "s.renderable.renderbuffer.color0.srgb8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012699, VkglTestCase_012699_1, VkglTestCase_012699_2);

#define VkglTestCase_012700_1 "dEQP-GLES2.functional.fbo.completeness.renderab"
#define VkglTestCase_012700_2 "le.renderbuffer.color0.srgb_alpha_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012700, VkglTestCase_012700_1, VkglTestCase_012700_2);

#define VkglTestCase_012701_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012701_2 "nderable.renderbuffer.color0.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012701, VkglTestCase_012701_1, VkglTestCase_012701_2);

#define VkglTestCase_012702_1 "dEQP-GLES2.functional.fbo.completeness.ren"
#define VkglTestCase_012702_2 "derable.renderbuffer.color0.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012702, VkglTestCase_012702_1, VkglTestCase_012702_2);

#define VkglTestCase_012703_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012703_2 ".renderable.renderbuffer.color0.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012703, VkglTestCase_012703_1, VkglTestCase_012703_2);

#define VkglTestCase_012704_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012704_2 ".renderable.renderbuffer.color0.sr8_ext"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012704, VkglTestCase_012704_1, VkglTestCase_012704_2);

#define VkglTestCase_012705_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012705_2 "renderable.renderbuffer.color0.srg8_ext"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012705, VkglTestCase_012705_1, VkglTestCase_012705_2);
