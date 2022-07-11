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

#define VkglTestCase_012706_1 "dEQP-GLES2.functional.fbo.completeness.renderable."
#define VkglTestCase_012706_2 "renderbuffer.stencil.depth_component_unsigned_short"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012706, VkglTestCase_012706_1, VkglTestCase_012706_2);

#define VkglTestCase_012707_1 "dEQP-GLES2.functional.fbo.completeness.renderable"
#define VkglTestCase_012707_2 ".renderbuffer.stencil.depth_component_unsigned_int"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012707, VkglTestCase_012707_1, VkglTestCase_012707_2);

#define VkglTestCase_012708_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012708_2 "rable.renderbuffer.stencil.red_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012708, VkglTestCase_012708_1, VkglTestCase_012708_2);

#define VkglTestCase_012709_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012709_2 "enderable.renderbuffer.stencil.red_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012709, VkglTestCase_012709_1, VkglTestCase_012709_2);

#define VkglTestCase_012710_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012710_2 "rable.renderbuffer.stencil.red_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012710, VkglTestCase_012710_1, VkglTestCase_012710_2);

#define VkglTestCase_012711_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012711_2 "rable.renderbuffer.stencil.rgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012711, VkglTestCase_012711_1, VkglTestCase_012711_2);

#define VkglTestCase_012712_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012712_2 "enderable.renderbuffer.stencil.rgb_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012712, VkglTestCase_012712_1, VkglTestCase_012712_2);

#define VkglTestCase_012713_1 "dEQP-GLES2.functional.fbo.completeness.renderab"
#define VkglTestCase_012713_2 "le.renderbuffer.stencil.rgb_unsigned_short_5_6_5"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012713, VkglTestCase_012713_1, VkglTestCase_012713_2);

#define VkglTestCase_012714_1 "dEQP-GLES2.functional.fbo.completeness.renderable.r"
#define VkglTestCase_012714_2 "enderbuffer.stencil.rgb_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012714, VkglTestCase_012714_1, VkglTestCase_012714_2);

#define VkglTestCase_012715_1 "dEQP-GLES2.functional.fbo.completeness.renderable.r"
#define VkglTestCase_012715_2 "enderbuffer.stencil.rgb_unsigned_int_10f_11f_11f_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012715, VkglTestCase_012715_1, VkglTestCase_012715_2);

#define VkglTestCase_012716_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012716_2 "rable.renderbuffer.stencil.rgb_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012716, VkglTestCase_012716_1, VkglTestCase_012716_2);

#define VkglTestCase_012717_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012717_2 "rable.renderbuffer.stencil.rgba_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012717, VkglTestCase_012717_1, VkglTestCase_012717_2);

#define VkglTestCase_012718_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012718_2 "enderable.renderbuffer.stencil.rgba_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012718, VkglTestCase_012718_1, VkglTestCase_012718_2);

#define VkglTestCase_012719_1 "dEQP-GLES2.functional.fbo.completeness.renderable"
#define VkglTestCase_012719_2 ".renderbuffer.stencil.rgba_unsigned_short_4_4_4_4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012719, VkglTestCase_012719_1, VkglTestCase_012719_2);

#define VkglTestCase_012720_1 "dEQP-GLES2.functional.fbo.completeness.renderable"
#define VkglTestCase_012720_2 ".renderbuffer.stencil.rgba_unsigned_short_5_5_5_1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012720, VkglTestCase_012720_1, VkglTestCase_012720_2);

#define VkglTestCase_012721_1 "dEQP-GLES2.functional.fbo.completeness.renderable.r"
#define VkglTestCase_012721_2 "enderbuffer.stencil.rgba_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012721, VkglTestCase_012721_1, VkglTestCase_012721_2);

#define VkglTestCase_012722_1 "dEQP-GLES2.functional.fbo.completeness.render"
#define VkglTestCase_012722_2 "able.renderbuffer.stencil.rgba_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012722, VkglTestCase_012722_1, VkglTestCase_012722_2);

#define VkglTestCase_012723_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012723_2 "s.renderable.renderbuffer.stencil.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012723, VkglTestCase_012723_1, VkglTestCase_012723_2);

#define VkglTestCase_012724_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012724_2 ".renderable.renderbuffer.stencil.rgb10"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012724, VkglTestCase_012724_1, VkglTestCase_012724_2);

#define VkglTestCase_012725_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012725_2 ".renderable.renderbuffer.stencil.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012725, VkglTestCase_012725_1, VkglTestCase_012725_2);

#define VkglTestCase_012726_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012726_2 "renderable.renderbuffer.stencil.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012726, VkglTestCase_012726_1, VkglTestCase_012726_2);

#define VkglTestCase_012727_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012727_2 ".renderable.renderbuffer.stencil.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012727, VkglTestCase_012727_1, VkglTestCase_012727_2);

#define VkglTestCase_012728_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012728_2 "renderable.renderbuffer.stencil.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012728, VkglTestCase_012728_1, VkglTestCase_012728_2);

#define VkglTestCase_012729_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012729_2 "rable.renderbuffer.stencil.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012729, VkglTestCase_012729_1, VkglTestCase_012729_2);

#define VkglTestCase_012730_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012730_2 "rable.renderbuffer.stencil.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012730, VkglTestCase_012730_1, VkglTestCase_012730_2);

#define VkglTestCase_012731_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012731_2 "rable.renderbuffer.stencil.depth_component32"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012731, VkglTestCase_012731_1, VkglTestCase_012731_2);

#define VkglTestCase_012732_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012732_2 "erable.renderbuffer.stencil.rg_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012732, VkglTestCase_012732_1, VkglTestCase_012732_2);

#define VkglTestCase_012733_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012733_2 "renderable.renderbuffer.stencil.rg_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012733, VkglTestCase_012733_1, VkglTestCase_012733_2);

#define VkglTestCase_012734_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012734_2 "rable.renderbuffer.stencil.rg_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012734, VkglTestCase_012734_1, VkglTestCase_012734_2);

#define VkglTestCase_012735_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012735_2 "ss.renderable.renderbuffer.stencil.r8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012735, VkglTestCase_012735_1, VkglTestCase_012735_2);

#define VkglTestCase_012736_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012736_2 "s.renderable.renderbuffer.stencil.rg8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012736, VkglTestCase_012736_1, VkglTestCase_012736_2);

#define VkglTestCase_012737_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012737_2 "s.renderable.renderbuffer.stencil.r16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012737, VkglTestCase_012737_1, VkglTestCase_012737_2);

#define VkglTestCase_012738_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012738_2 ".renderable.renderbuffer.stencil.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012738, VkglTestCase_012738_1, VkglTestCase_012738_2);

#define VkglTestCase_012739_1 "dEQP-GLES2.functional.fbo.completeness.renderable.r"
#define VkglTestCase_012739_2 "enderbuffer.stencil.depth_stencil_unsigned_int_24_8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012739, VkglTestCase_012739_1, VkglTestCase_012739_2);

#define VkglTestCase_012740_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012740_2 "renderable.renderbuffer.stencil.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012740, VkglTestCase_012740_1, VkglTestCase_012740_2);

#define VkglTestCase_012741_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012741_2 ".renderable.renderbuffer.stencil.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012741, VkglTestCase_012741_1, VkglTestCase_012741_2);

#define VkglTestCase_012742_1 "dEQP-GLES2.functional.fbo.completeness.rend"
#define VkglTestCase_012742_2 "erable.renderbuffer.stencil.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012742, VkglTestCase_012742_1, VkglTestCase_012742_2);

#define VkglTestCase_012743_1 "dEQP-GLES2.functional.fbo.completeness.ren"
#define VkglTestCase_012743_2 "derable.renderbuffer.stencil.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012743, VkglTestCase_012743_1, VkglTestCase_012743_2);

#define VkglTestCase_012744_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012744_2 "rable.renderbuffer.stencil.srgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012744, VkglTestCase_012744_1, VkglTestCase_012744_2);

#define VkglTestCase_012745_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012745_2 ".renderable.renderbuffer.stencil.srgb8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012745, VkglTestCase_012745_1, VkglTestCase_012745_2);

#define VkglTestCase_012746_1 "dEQP-GLES2.functional.fbo.completeness.renderab"
#define VkglTestCase_012746_2 "le.renderbuffer.stencil.srgb_alpha_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012746, VkglTestCase_012746_1, VkglTestCase_012746_2);

#define VkglTestCase_012747_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012747_2 "nderable.renderbuffer.stencil.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012747, VkglTestCase_012747_1, VkglTestCase_012747_2);

#define VkglTestCase_012748_1 "dEQP-GLES2.functional.fbo.completeness.ren"
#define VkglTestCase_012748_2 "derable.renderbuffer.stencil.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012748, VkglTestCase_012748_1, VkglTestCase_012748_2);

#define VkglTestCase_012749_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012749_2 ".renderable.renderbuffer.stencil.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012749, VkglTestCase_012749_1, VkglTestCase_012749_2);

#define VkglTestCase_012750_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012750_2 "renderable.renderbuffer.stencil.sr8_ext"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012750, VkglTestCase_012750_1, VkglTestCase_012750_2);

#define VkglTestCase_012751_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012751_2 "renderable.renderbuffer.stencil.srg8_ext"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012751, VkglTestCase_012751_1, VkglTestCase_012751_2);
