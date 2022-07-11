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
#include "../ActsDeqpgles30032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031557_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031557_2 "render.resize.tex2d_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031557, VkglTestCase_031557_1, VkglTestCase_031557_2);

#define VkglTestCase_031558_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031558_2 ".render.resize.rbo_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031558, VkglTestCase_031558_1, VkglTestCase_031558_2);

#define VkglTestCase_031559_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031559_2 "render.resize.tex2d_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031559, VkglTestCase_031559_1, VkglTestCase_031559_2);

#define VkglTestCase_031560_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031560_2 ".render.resize.rbo_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031560, VkglTestCase_031560_1, VkglTestCase_031560_2);

#define VkglTestCase_031561_1 "dEQP-GLES3.functional.fbo.r"
#define VkglTestCase_031561_2 "ender.resize.tex2d_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031561, VkglTestCase_031561_1, VkglTestCase_031561_2);

#define VkglTestCase_031562_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031562_2 "render.resize.rbo_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031562, VkglTestCase_031562_1, VkglTestCase_031562_2);

#define VkglTestCase_031563_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031563_2 "render.resize.tex2d_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031563, VkglTestCase_031563_1, VkglTestCase_031563_2);

#define VkglTestCase_031564_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031564_2 ".render.resize.rbo_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031564, VkglTestCase_031564_1, VkglTestCase_031564_2);

#define VkglTestCase_031565_1 "dEQP-GLES3.functional.fbo.render.resize.te"
#define VkglTestCase_031565_2 "x2d_rgba16f_depth_tex2d_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031565, VkglTestCase_031565_1, VkglTestCase_031565_2);

#define VkglTestCase_031566_1 "dEQP-GLES3.functional.fbo.render.resize.t"
#define VkglTestCase_031566_2 "ex2d_rgba16f_depth_rbo_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031566, VkglTestCase_031566_1, VkglTestCase_031566_2);

#define VkglTestCase_031567_1 "dEQP-GLES3.functional.fbo.render.resize.t"
#define VkglTestCase_031567_2 "ex2d_rgba16f_depth_tex2d_depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031567, VkglTestCase_031567_1, VkglTestCase_031567_2);

#define VkglTestCase_031568_1 "dEQP-GLES3.functional.fbo.render.resize."
#define VkglTestCase_031568_2 "tex2d_rgba16f_depth_rbo_depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031568, VkglTestCase_031568_1, VkglTestCase_031568_2);

#define VkglTestCase_031569_1 "dEQP-GLES3.functional.fbo.render.resize.t"
#define VkglTestCase_031569_2 "ex2d_rgba16f_depth_tex2d_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031569, VkglTestCase_031569_1, VkglTestCase_031569_2);

#define VkglTestCase_031570_1 "dEQP-GLES3.functional.fbo.render.resize."
#define VkglTestCase_031570_2 "tex2d_rgba16f_depth_rbo_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031570, VkglTestCase_031570_1, VkglTestCase_031570_2);

#define VkglTestCase_031571_1 "dEQP-GLES3.functional.fbo.render.resize.tex2d"
#define VkglTestCase_031571_2 "_rgba16f_depth_stencil_tex2d_depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031571, VkglTestCase_031571_1, VkglTestCase_031571_2);

#define VkglTestCase_031572_1 "dEQP-GLES3.functional.fbo.render.resize.tex2"
#define VkglTestCase_031572_2 "d_rgba16f_depth_stencil_rbo_depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031572, VkglTestCase_031572_1, VkglTestCase_031572_2);

#define VkglTestCase_031573_1 "dEQP-GLES3.functional.fbo.render.resize.tex2d"
#define VkglTestCase_031573_2 "_rgba16f_depth_stencil_tex2d_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031573, VkglTestCase_031573_1, VkglTestCase_031573_2);

#define VkglTestCase_031574_1 "dEQP-GLES3.functional.fbo.render.resize.tex2"
#define VkglTestCase_031574_2 "d_rgba16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031574, VkglTestCase_031574_1, VkglTestCase_031574_2);

#define VkglTestCase_031575_1 "dEQP-GLES3.functional.fbo.render.resize."
#define VkglTestCase_031575_2 "tex2d_rgba16f_stencil_rbo_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031575, VkglTestCase_031575_1, VkglTestCase_031575_2);

#define VkglTestCase_031576_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031576_2 "render.resize.tex2d_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031576, VkglTestCase_031576_1, VkglTestCase_031576_2);

#define VkglTestCase_031577_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031577_2 ".render.resize.rbo_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031577, VkglTestCase_031577_1, VkglTestCase_031577_2);

#define VkglTestCase_031578_1 "dEQP-GLES3.functional.fbo.r"
#define VkglTestCase_031578_2 "ender.resize.tex2d_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031578, VkglTestCase_031578_1, VkglTestCase_031578_2);

#define VkglTestCase_031579_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031579_2 "render.resize.rbo_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031579, VkglTestCase_031579_1, VkglTestCase_031579_2);

#define VkglTestCase_031580_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031580_2 "render.resize.tex2d_rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031580, VkglTestCase_031580_1, VkglTestCase_031580_2);

#define VkglTestCase_031581_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031581_2 ".render.resize.rbo_rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031581, VkglTestCase_031581_1, VkglTestCase_031581_2);

#define VkglTestCase_031582_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031582_2 ".render.resize.tex2d_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031582, VkglTestCase_031582_1, VkglTestCase_031582_2);

#define VkglTestCase_031583_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031583_2 "o.render.resize.rbo_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031583, VkglTestCase_031583_1, VkglTestCase_031583_2);

#define VkglTestCase_031584_1 "dEQP-GLES3.functional.fbo.render.resize.t"
#define VkglTestCase_031584_2 "ex2d_rgba8_depth_tex2d_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031584, VkglTestCase_031584_1, VkglTestCase_031584_2);

#define VkglTestCase_031585_1 "dEQP-GLES3.functional.fbo.render.resize."
#define VkglTestCase_031585_2 "tex2d_rgba8_depth_rbo_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031585, VkglTestCase_031585_1, VkglTestCase_031585_2);

#define VkglTestCase_031586_1 "dEQP-GLES3.functional.fbo.render.resize."
#define VkglTestCase_031586_2 "tex2d_rgba8_depth_tex2d_depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031586, VkglTestCase_031586_1, VkglTestCase_031586_2);

#define VkglTestCase_031587_1 "dEQP-GLES3.functional.fbo.render.resize"
#define VkglTestCase_031587_2 ".tex2d_rgba8_depth_rbo_depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031587, VkglTestCase_031587_1, VkglTestCase_031587_2);

#define VkglTestCase_031588_1 "dEQP-GLES3.functional.fbo.render.resize."
#define VkglTestCase_031588_2 "tex2d_rgba8_depth_tex2d_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031588, VkglTestCase_031588_1, VkglTestCase_031588_2);

#define VkglTestCase_031589_1 "dEQP-GLES3.functional.fbo.render.resize"
#define VkglTestCase_031589_2 ".tex2d_rgba8_depth_rbo_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031589, VkglTestCase_031589_1, VkglTestCase_031589_2);

#define VkglTestCase_031590_1 "dEQP-GLES3.functional.fbo.render.resize.tex2"
#define VkglTestCase_031590_2 "d_rgba8_depth_stencil_tex2d_depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031590, VkglTestCase_031590_1, VkglTestCase_031590_2);

#define VkglTestCase_031591_1 "dEQP-GLES3.functional.fbo.render.resize.tex"
#define VkglTestCase_031591_2 "2d_rgba8_depth_stencil_rbo_depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031591, VkglTestCase_031591_1, VkglTestCase_031591_2);

#define VkglTestCase_031592_1 "dEQP-GLES3.functional.fbo.render.resize.tex2"
#define VkglTestCase_031592_2 "d_rgba8_depth_stencil_tex2d_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031592, VkglTestCase_031592_1, VkglTestCase_031592_2);

#define VkglTestCase_031593_1 "dEQP-GLES3.functional.fbo.render.resize.tex"
#define VkglTestCase_031593_2 "2d_rgba8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031593, VkglTestCase_031593_1, VkglTestCase_031593_2);

#define VkglTestCase_031594_1 "dEQP-GLES3.functional.fbo.render.resize"
#define VkglTestCase_031594_2 ".tex2d_rgba8_stencil_rbo_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031594, VkglTestCase_031594_1, VkglTestCase_031594_2);

#define VkglTestCase_031595_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031595_2 "render.resize.tex2d_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031595, VkglTestCase_031595_1, VkglTestCase_031595_2);

#define VkglTestCase_031596_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031596_2 ".render.resize.rbo_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031596, VkglTestCase_031596_1, VkglTestCase_031596_2);

#define VkglTestCase_031597_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031597_2 "render.resize.tex2d_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031597, VkglTestCase_031597_1, VkglTestCase_031597_2);

#define VkglTestCase_031598_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031598_2 ".render.resize.rbo_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031598, VkglTestCase_031598_1, VkglTestCase_031598_2);

#define VkglTestCase_031599_1 "dEQP-GLES3.functional.fbo.ren"
#define VkglTestCase_031599_2 "der.resize.tex2d_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031599, VkglTestCase_031599_1, VkglTestCase_031599_2);

#define VkglTestCase_031600_1 "dEQP-GLES3.functional.fbo.re"
#define VkglTestCase_031600_2 "nder.resize.rbo_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031600, VkglTestCase_031600_1, VkglTestCase_031600_2);

#define VkglTestCase_031601_1 "dEQP-GLES3.functional.fbo.r"
#define VkglTestCase_031601_2 "ender.resize.tex2d_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031601, VkglTestCase_031601_1, VkglTestCase_031601_2);

#define VkglTestCase_031602_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031602_2 "render.resize.rbo_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031602, VkglTestCase_031602_1, VkglTestCase_031602_2);

#define VkglTestCase_031603_1 "dEQP-GLES3.functional.fbo.re"
#define VkglTestCase_031603_2 "nder.resize.tex2d_rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031603, VkglTestCase_031603_1, VkglTestCase_031603_2);

#define VkglTestCase_031604_1 "dEQP-GLES3.functional.fbo.r"
#define VkglTestCase_031604_2 "ender.resize.rbo_rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031604, VkglTestCase_031604_1, VkglTestCase_031604_2);

#define VkglTestCase_031605_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031605_2 ".render.resize.tex2d_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031605, VkglTestCase_031605_1, VkglTestCase_031605_2);

#define VkglTestCase_031606_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031606_2 "o.render.resize.rbo_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031606, VkglTestCase_031606_1, VkglTestCase_031606_2);

#define VkglTestCase_031607_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031607_2 "render.resize.tex2d_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031607, VkglTestCase_031607_1, VkglTestCase_031607_2);

#define VkglTestCase_031608_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031608_2 ".render.resize.rbo_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031608, VkglTestCase_031608_1, VkglTestCase_031608_2);

#define VkglTestCase_031609_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031609_2 ".render.resize.tex2d_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031609, VkglTestCase_031609_1, VkglTestCase_031609_2);

#define VkglTestCase_031610_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031610_2 "o.render.resize.rbo_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031610, VkglTestCase_031610_1, VkglTestCase_031610_2);

#define VkglTestCase_031611_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031611_2 "render.resize.tex2d_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031611, VkglTestCase_031611_1, VkglTestCase_031611_2);

#define VkglTestCase_031612_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031612_2 ".render.resize.rbo_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031612, VkglTestCase_031612_1, VkglTestCase_031612_2);

#define VkglTestCase_031613_1 "dEQP-GLES3.functional.fbo.rend"
#define VkglTestCase_031613_2 "er.resize.tex2d_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031613, VkglTestCase_031613_1, VkglTestCase_031613_2);

#define VkglTestCase_031614_1 "dEQP-GLES3.functional.fbo.ren"
#define VkglTestCase_031614_2 "der.resize.rbo_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031614, VkglTestCase_031614_1, VkglTestCase_031614_2);

#define VkglTestCase_031615_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031615_2 ".render.resize.tex2d_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031615, VkglTestCase_031615_1, VkglTestCase_031615_2);

#define VkglTestCase_031616_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031616_2 "o.render.resize.rbo_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031616, VkglTestCase_031616_1, VkglTestCase_031616_2);

#define VkglTestCase_031617_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031617_2 ".render.resize.tex2d_rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031617, VkglTestCase_031617_1, VkglTestCase_031617_2);

#define VkglTestCase_031618_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031618_2 "o.render.resize.rbo_rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031618, VkglTestCase_031618_1, VkglTestCase_031618_2);

#define VkglTestCase_031619_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031619_2 "render.resize.tex2d_rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031619, VkglTestCase_031619_1, VkglTestCase_031619_2);

#define VkglTestCase_031620_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031620_2 ".render.resize.rbo_rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031620, VkglTestCase_031620_1, VkglTestCase_031620_2);

#define VkglTestCase_031621_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031621_2 ".render.resize.tex2d_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031621, VkglTestCase_031621_1, VkglTestCase_031621_2);

#define VkglTestCase_031622_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031622_2 "o.render.resize.rbo_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031622, VkglTestCase_031622_1, VkglTestCase_031622_2);

#define VkglTestCase_031623_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031623_2 ".render.resize.tex2d_rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031623, VkglTestCase_031623_1, VkglTestCase_031623_2);

#define VkglTestCase_031624_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031624_2 "o.render.resize.rbo_rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031624, VkglTestCase_031624_1, VkglTestCase_031624_2);

#define VkglTestCase_031625_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031625_2 "render.resize.tex2d_rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031625, VkglTestCase_031625_1, VkglTestCase_031625_2);

#define VkglTestCase_031626_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031626_2 ".render.resize.rbo_rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031626, VkglTestCase_031626_1, VkglTestCase_031626_2);

#define VkglTestCase_031627_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031627_2 "o.render.resize.tex2d_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031627, VkglTestCase_031627_1, VkglTestCase_031627_2);

#define VkglTestCase_031628_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031628_2 "bo.render.resize.rbo_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031628, VkglTestCase_031628_1, VkglTestCase_031628_2);

#define VkglTestCase_031629_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031629_2 ".render.resize.tex2d_rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031629, VkglTestCase_031629_1, VkglTestCase_031629_2);

#define VkglTestCase_031630_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031630_2 "o.render.resize.rbo_rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031630, VkglTestCase_031630_1, VkglTestCase_031630_2);

#define VkglTestCase_031631_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031631_2 ".render.resize.tex2d_rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031631, VkglTestCase_031631_1, VkglTestCase_031631_2);

#define VkglTestCase_031632_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031632_2 "o.render.resize.rbo_rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031632, VkglTestCase_031632_1, VkglTestCase_031632_2);

#define VkglTestCase_031633_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031633_2 ".render.resize.tex2d_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031633, VkglTestCase_031633_1, VkglTestCase_031633_2);

#define VkglTestCase_031634_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031634_2 "o.render.resize.rbo_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031634, VkglTestCase_031634_1, VkglTestCase_031634_2);

#define VkglTestCase_031635_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031635_2 ".render.resize.tex2d_r32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031635, VkglTestCase_031635_1, VkglTestCase_031635_2);

#define VkglTestCase_031636_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031636_2 "o.render.resize.rbo_r32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031636, VkglTestCase_031636_1, VkglTestCase_031636_2);

#define VkglTestCase_031637_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031637_2 ".render.resize.tex2d_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031637, VkglTestCase_031637_1, VkglTestCase_031637_2);

#define VkglTestCase_031638_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031638_2 "o.render.resize.rbo_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031638, VkglTestCase_031638_1, VkglTestCase_031638_2);

#define VkglTestCase_031639_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031639_2 ".render.resize.tex2d_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031639, VkglTestCase_031639_1, VkglTestCase_031639_2);

#define VkglTestCase_031640_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031640_2 "o.render.resize.rbo_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031640, VkglTestCase_031640_1, VkglTestCase_031640_2);

#define VkglTestCase_031641_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031641_2 ".render.resize.tex2d_r16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031641, VkglTestCase_031641_1, VkglTestCase_031641_2);

#define VkglTestCase_031642_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031642_2 "o.render.resize.rbo_r16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031642, VkglTestCase_031642_1, VkglTestCase_031642_2);

#define VkglTestCase_031643_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031643_2 ".render.resize.tex2d_r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031643, VkglTestCase_031643_1, VkglTestCase_031643_2);

#define VkglTestCase_031644_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031644_2 "o.render.resize.rbo_r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031644, VkglTestCase_031644_1, VkglTestCase_031644_2);

#define VkglTestCase_031645_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031645_2 "o.render.resize.tex2d_r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031645, VkglTestCase_031645_1, VkglTestCase_031645_2);

#define VkglTestCase_031646_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031646_2 "bo.render.resize.rbo_r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031646, VkglTestCase_031646_1, VkglTestCase_031646_2);

#define VkglTestCase_031647_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031647_2 "o.render.resize.tex2d_r8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031647, VkglTestCase_031647_1, VkglTestCase_031647_2);

#define VkglTestCase_031648_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031648_2 "bo.render.resize.rbo_r8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031648, VkglTestCase_031648_1, VkglTestCase_031648_2);

#define VkglTestCase_031649_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031649_2 ".render.resize.tex2d_r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031649, VkglTestCase_031649_1, VkglTestCase_031649_2);

#define VkglTestCase_031650_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031650_2 "o.render.resize.rbo_r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031650, VkglTestCase_031650_1, VkglTestCase_031650_2);
