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

#define VkglTestCase_031651_1 "dEQP-GLES3.functional.fbo.render.recreate_color."
#define VkglTestCase_031651_2 "tex2d_rgba32f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031651, VkglTestCase_031651_1, VkglTestCase_031651_2);

#define VkglTestCase_031652_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031652_2 ".rbo_rgba32f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031652, VkglTestCase_031652_1, VkglTestCase_031652_2);

#define VkglTestCase_031653_1 "dEQP-GLES3.functional.fbo.render.recreate_color."
#define VkglTestCase_031653_2 "tex2d_rgba32i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031653, VkglTestCase_031653_1, VkglTestCase_031653_2);

#define VkglTestCase_031654_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031654_2 ".rbo_rgba32i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031654, VkglTestCase_031654_1, VkglTestCase_031654_2);

#define VkglTestCase_031655_1 "dEQP-GLES3.functional.fbo.render.recreate_color."
#define VkglTestCase_031655_2 "tex2d_rgba32ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031655, VkglTestCase_031655_1, VkglTestCase_031655_2);

#define VkglTestCase_031656_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031656_2 ".rbo_rgba32ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031656, VkglTestCase_031656_1, VkglTestCase_031656_2);

#define VkglTestCase_031657_1 "dEQP-GLES3.functional.fbo.render.recreate_color."
#define VkglTestCase_031657_2 "tex2d_rgba16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031657, VkglTestCase_031657_1, VkglTestCase_031657_2);

#define VkglTestCase_031658_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031658_2 ".rbo_rgba16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031658, VkglTestCase_031658_1, VkglTestCase_031658_2);

#define VkglTestCase_031659_1 "dEQP-GLES3.functional.fbo.render.recreate_color."
#define VkglTestCase_031659_2 "tex2d_rgba16i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031659, VkglTestCase_031659_1, VkglTestCase_031659_2);

#define VkglTestCase_031660_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031660_2 ".rbo_rgba16i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031660, VkglTestCase_031660_1, VkglTestCase_031660_2);

#define VkglTestCase_031661_1 "dEQP-GLES3.functional.fbo.render.recreate_color."
#define VkglTestCase_031661_2 "tex2d_rgba16ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031661, VkglTestCase_031661_1, VkglTestCase_031661_2);

#define VkglTestCase_031662_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031662_2 ".rbo_rgba16ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031662, VkglTestCase_031662_1, VkglTestCase_031662_2);

#define VkglTestCase_031663_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031663_2 ".tex2d_rgb16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031663, VkglTestCase_031663_1, VkglTestCase_031663_2);

#define VkglTestCase_031664_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031664_2 "r.rbo_rgb16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031664, VkglTestCase_031664_1, VkglTestCase_031664_2);

#define VkglTestCase_031665_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031665_2 ".tex2d_rgba8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031665, VkglTestCase_031665_1, VkglTestCase_031665_2);

#define VkglTestCase_031666_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031666_2 "r.rbo_rgba8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031666, VkglTestCase_031666_1, VkglTestCase_031666_2);

#define VkglTestCase_031667_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031667_2 ".tex2d_rgba8i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031667, VkglTestCase_031667_1, VkglTestCase_031667_2);

#define VkglTestCase_031668_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031668_2 "r.rbo_rgba8i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031668, VkglTestCase_031668_1, VkglTestCase_031668_2);

#define VkglTestCase_031669_1 "dEQP-GLES3.functional.fbo.render.recreate_color."
#define VkglTestCase_031669_2 "tex2d_rgba8ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031669, VkglTestCase_031669_1, VkglTestCase_031669_2);

#define VkglTestCase_031670_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031670_2 ".rbo_rgba8ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031670, VkglTestCase_031670_1, VkglTestCase_031670_2);

#define VkglTestCase_031671_1 "dEQP-GLES3.functional.fbo.render.recreate_color.te"
#define VkglTestCase_031671_2 "x2d_srgb8_alpha8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031671, VkglTestCase_031671_1, VkglTestCase_031671_2);

#define VkglTestCase_031672_1 "dEQP-GLES3.functional.fbo.render.recreate_color.r"
#define VkglTestCase_031672_2 "bo_srgb8_alpha8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031672, VkglTestCase_031672_1, VkglTestCase_031672_2);

#define VkglTestCase_031673_1 "dEQP-GLES3.functional.fbo.render.recreate_color."
#define VkglTestCase_031673_2 "tex2d_rgb10_a2_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031673, VkglTestCase_031673_1, VkglTestCase_031673_2);

#define VkglTestCase_031674_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031674_2 ".rbo_rgb10_a2_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031674, VkglTestCase_031674_1, VkglTestCase_031674_2);

#define VkglTestCase_031675_1 "dEQP-GLES3.functional.fbo.render.recreate_color.t"
#define VkglTestCase_031675_2 "ex2d_rgb10_a2ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031675, VkglTestCase_031675_1, VkglTestCase_031675_2);

#define VkglTestCase_031676_1 "dEQP-GLES3.functional.fbo.render.recreate_color."
#define VkglTestCase_031676_2 "rbo_rgb10_a2ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031676, VkglTestCase_031676_1, VkglTestCase_031676_2);

#define VkglTestCase_031677_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031677_2 ".tex2d_rgba4_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031677, VkglTestCase_031677_1, VkglTestCase_031677_2);

#define VkglTestCase_031678_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031678_2 "r.rbo_rgba4_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031678, VkglTestCase_031678_1, VkglTestCase_031678_2);

#define VkglTestCase_031679_1 "dEQP-GLES3.functional.fbo.render.recreate_color."
#define VkglTestCase_031679_2 "tex2d_rgb5_a1_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031679, VkglTestCase_031679_1, VkglTestCase_031679_2);

#define VkglTestCase_031680_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031680_2 ".rbo_rgb5_a1_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031680, VkglTestCase_031680_1, VkglTestCase_031680_2);

#define VkglTestCase_031681_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031681_2 "r.tex2d_rgb8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031681, VkglTestCase_031681_1, VkglTestCase_031681_2);

#define VkglTestCase_031682_1 "dEQP-GLES3.functional.fbo.render.recreate_col"
#define VkglTestCase_031682_2 "or.rbo_rgb8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031682, VkglTestCase_031682_1, VkglTestCase_031682_2);

#define VkglTestCase_031683_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031683_2 ".tex2d_rgb565_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031683, VkglTestCase_031683_1, VkglTestCase_031683_2);

#define VkglTestCase_031684_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031684_2 "r.rbo_rgb565_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031684, VkglTestCase_031684_1, VkglTestCase_031684_2);

#define VkglTestCase_031685_1 "dEQP-GLES3.functional.fbo.render.recreate_color.tex"
#define VkglTestCase_031685_2 "2d_r11f_g11f_b10f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031685, VkglTestCase_031685_1, VkglTestCase_031685_2);

#define VkglTestCase_031686_1 "dEQP-GLES3.functional.fbo.render.recreate_color.rb"
#define VkglTestCase_031686_2 "o_r11f_g11f_b10f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031686, VkglTestCase_031686_1, VkglTestCase_031686_2);

#define VkglTestCase_031687_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031687_2 ".tex2d_rg32f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031687, VkglTestCase_031687_1, VkglTestCase_031687_2);

#define VkglTestCase_031688_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031688_2 "r.rbo_rg32f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031688, VkglTestCase_031688_1, VkglTestCase_031688_2);

#define VkglTestCase_031689_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031689_2 ".tex2d_rg32i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031689, VkglTestCase_031689_1, VkglTestCase_031689_2);

#define VkglTestCase_031690_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031690_2 "r.rbo_rg32i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031690, VkglTestCase_031690_1, VkglTestCase_031690_2);

#define VkglTestCase_031691_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031691_2 ".tex2d_rg32ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031691, VkglTestCase_031691_1, VkglTestCase_031691_2);

#define VkglTestCase_031692_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031692_2 "r.rbo_rg32ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031692, VkglTestCase_031692_1, VkglTestCase_031692_2);

#define VkglTestCase_031693_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031693_2 ".tex2d_rg16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031693, VkglTestCase_031693_1, VkglTestCase_031693_2);

#define VkglTestCase_031694_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031694_2 "r.rbo_rg16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031694, VkglTestCase_031694_1, VkglTestCase_031694_2);

#define VkglTestCase_031695_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031695_2 ".tex2d_rg16i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031695, VkglTestCase_031695_1, VkglTestCase_031695_2);

#define VkglTestCase_031696_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031696_2 "r.rbo_rg16i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031696, VkglTestCase_031696_1, VkglTestCase_031696_2);

#define VkglTestCase_031697_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031697_2 ".tex2d_rg16ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031697, VkglTestCase_031697_1, VkglTestCase_031697_2);

#define VkglTestCase_031698_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031698_2 "r.rbo_rg16ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031698, VkglTestCase_031698_1, VkglTestCase_031698_2);

#define VkglTestCase_031699_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031699_2 "r.tex2d_rg8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031699, VkglTestCase_031699_1, VkglTestCase_031699_2);

#define VkglTestCase_031700_1 "dEQP-GLES3.functional.fbo.render.recreate_col"
#define VkglTestCase_031700_2 "or.rbo_rg8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031700, VkglTestCase_031700_1, VkglTestCase_031700_2);

#define VkglTestCase_031701_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031701_2 "r.tex2d_rg8i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031701, VkglTestCase_031701_1, VkglTestCase_031701_2);

#define VkglTestCase_031702_1 "dEQP-GLES3.functional.fbo.render.recreate_col"
#define VkglTestCase_031702_2 "or.rbo_rg8i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031702, VkglTestCase_031702_1, VkglTestCase_031702_2);

#define VkglTestCase_031703_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031703_2 ".tex2d_rg8ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031703, VkglTestCase_031703_1, VkglTestCase_031703_2);

#define VkglTestCase_031704_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031704_2 "r.rbo_rg8ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031704, VkglTestCase_031704_1, VkglTestCase_031704_2);

#define VkglTestCase_031705_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031705_2 "r.tex2d_r32f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031705, VkglTestCase_031705_1, VkglTestCase_031705_2);

#define VkglTestCase_031706_1 "dEQP-GLES3.functional.fbo.render.recreate_col"
#define VkglTestCase_031706_2 "or.rbo_r32f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031706, VkglTestCase_031706_1, VkglTestCase_031706_2);

#define VkglTestCase_031707_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031707_2 "r.tex2d_r32i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031707, VkglTestCase_031707_1, VkglTestCase_031707_2);

#define VkglTestCase_031708_1 "dEQP-GLES3.functional.fbo.render.recreate_col"
#define VkglTestCase_031708_2 "or.rbo_r32i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031708, VkglTestCase_031708_1, VkglTestCase_031708_2);

#define VkglTestCase_031709_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031709_2 ".tex2d_r32ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031709, VkglTestCase_031709_1, VkglTestCase_031709_2);

#define VkglTestCase_031710_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031710_2 "r.rbo_r32ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031710, VkglTestCase_031710_1, VkglTestCase_031710_2);

#define VkglTestCase_031711_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031711_2 "r.tex2d_r16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031711, VkglTestCase_031711_1, VkglTestCase_031711_2);

#define VkglTestCase_031712_1 "dEQP-GLES3.functional.fbo.render.recreate_col"
#define VkglTestCase_031712_2 "or.rbo_r16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031712, VkglTestCase_031712_1, VkglTestCase_031712_2);

#define VkglTestCase_031713_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031713_2 "r.tex2d_r16i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031713, VkglTestCase_031713_1, VkglTestCase_031713_2);

#define VkglTestCase_031714_1 "dEQP-GLES3.functional.fbo.render.recreate_col"
#define VkglTestCase_031714_2 "or.rbo_r16i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031714, VkglTestCase_031714_1, VkglTestCase_031714_2);

#define VkglTestCase_031715_1 "dEQP-GLES3.functional.fbo.render.recreate_color"
#define VkglTestCase_031715_2 ".tex2d_r16ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031715, VkglTestCase_031715_1, VkglTestCase_031715_2);

#define VkglTestCase_031716_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031716_2 "r.rbo_r16ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031716, VkglTestCase_031716_1, VkglTestCase_031716_2);

#define VkglTestCase_031717_1 "dEQP-GLES3.functional.fbo.render.recreate_col"
#define VkglTestCase_031717_2 "or.tex2d_r8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031717, VkglTestCase_031717_1, VkglTestCase_031717_2);

#define VkglTestCase_031718_1 "dEQP-GLES3.functional.fbo.render.recreate_co"
#define VkglTestCase_031718_2 "lor.rbo_r8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031718, VkglTestCase_031718_1, VkglTestCase_031718_2);

#define VkglTestCase_031719_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031719_2 "r.tex2d_r8i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031719, VkglTestCase_031719_1, VkglTestCase_031719_2);

#define VkglTestCase_031720_1 "dEQP-GLES3.functional.fbo.render.recreate_col"
#define VkglTestCase_031720_2 "or.rbo_r8i_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031720, VkglTestCase_031720_1, VkglTestCase_031720_2);

#define VkglTestCase_031721_1 "dEQP-GLES3.functional.fbo.render.recreate_colo"
#define VkglTestCase_031721_2 "r.tex2d_r8ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031721, VkglTestCase_031721_1, VkglTestCase_031721_2);

#define VkglTestCase_031722_1 "dEQP-GLES3.functional.fbo.render.recreate_col"
#define VkglTestCase_031722_2 "or.rbo_r8ui_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031722, VkglTestCase_031722_1, VkglTestCase_031722_2);
