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

#define VkglTestCase_031463_1 "dEQP-GLES3.functional.fbo.render"
#define VkglTestCase_031463_2 ".shared_colorbuffer.tex2d_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031463, VkglTestCase_031463_1, VkglTestCase_031463_2);

#define VkglTestCase_031464_1 "dEQP-GLES3.functional.fbo.render.shared_colorb"
#define VkglTestCase_031464_2 "uffer.tex2d_rgba16f_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031464, VkglTestCase_031464_1, VkglTestCase_031464_2);

#define VkglTestCase_031465_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuffe"
#define VkglTestCase_031465_2 "r.tex2d_rgba16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031465, VkglTestCase_031465_1, VkglTestCase_031465_2);

#define VkglTestCase_031466_1 "dEQP-GLES3.functional.fbo.rende"
#define VkglTestCase_031466_2 "r.shared_colorbuffer.rbo_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031466, VkglTestCase_031466_1, VkglTestCase_031466_2);

#define VkglTestCase_031467_1 "dEQP-GLES3.functional.fbo.render.shared_color"
#define VkglTestCase_031467_2 "buffer.rbo_rgba16f_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031467, VkglTestCase_031467_1, VkglTestCase_031467_2);

#define VkglTestCase_031468_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuff"
#define VkglTestCase_031468_2 "er.rbo_rgba16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031468, VkglTestCase_031468_1, VkglTestCase_031468_2);

#define VkglTestCase_031469_1 "dEQP-GLES3.functional.fbo.render"
#define VkglTestCase_031469_2 ".shared_colorbuffer.tex2d_rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031469, VkglTestCase_031469_1, VkglTestCase_031469_2);

#define VkglTestCase_031470_1 "dEQP-GLES3.functional.fbo.render.shared_color"
#define VkglTestCase_031470_2 "buffer.tex2d_rgb16f_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031470, VkglTestCase_031470_1, VkglTestCase_031470_2);

#define VkglTestCase_031471_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuff"
#define VkglTestCase_031471_2 "er.tex2d_rgb16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031471, VkglTestCase_031471_1, VkglTestCase_031471_2);

#define VkglTestCase_031472_1 "dEQP-GLES3.functional.fbo.rende"
#define VkglTestCase_031472_2 "r.shared_colorbuffer.rbo_rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031472, VkglTestCase_031472_1, VkglTestCase_031472_2);

#define VkglTestCase_031473_1 "dEQP-GLES3.functional.fbo.render.shared_colo"
#define VkglTestCase_031473_2 "rbuffer.rbo_rgb16f_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031473, VkglTestCase_031473_1, VkglTestCase_031473_2);

#define VkglTestCase_031474_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuf"
#define VkglTestCase_031474_2 "fer.rbo_rgb16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031474, VkglTestCase_031474_1, VkglTestCase_031474_2);

#define VkglTestCase_031475_1 "dEQP-GLES3.functional.fbo.rende"
#define VkglTestCase_031475_2 "r.shared_colorbuffer.tex2d_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031475, VkglTestCase_031475_1, VkglTestCase_031475_2);

#define VkglTestCase_031476_1 "dEQP-GLES3.functional.fbo.render.shared_color"
#define VkglTestCase_031476_2 "buffer.tex2d_rgba8_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031476, VkglTestCase_031476_1, VkglTestCase_031476_2);

#define VkglTestCase_031477_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuff"
#define VkglTestCase_031477_2 "er.tex2d_rgba8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031477, VkglTestCase_031477_1, VkglTestCase_031477_2);

#define VkglTestCase_031478_1 "dEQP-GLES3.functional.fbo.rend"
#define VkglTestCase_031478_2 "er.shared_colorbuffer.rbo_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031478, VkglTestCase_031478_1, VkglTestCase_031478_2);

#define VkglTestCase_031479_1 "dEQP-GLES3.functional.fbo.render.shared_colo"
#define VkglTestCase_031479_2 "rbuffer.rbo_rgba8_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031479, VkglTestCase_031479_1, VkglTestCase_031479_2);

#define VkglTestCase_031480_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuf"
#define VkglTestCase_031480_2 "fer.rbo_rgba8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031480, VkglTestCase_031480_1, VkglTestCase_031480_2);

#define VkglTestCase_031481_1 "dEQP-GLES3.functional.fbo.render.sh"
#define VkglTestCase_031481_2 "ared_colorbuffer.tex2d_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031481, VkglTestCase_031481_1, VkglTestCase_031481_2);

#define VkglTestCase_031482_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuf"
#define VkglTestCase_031482_2 "fer.tex2d_srgb8_alpha8_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031482, VkglTestCase_031482_1, VkglTestCase_031482_2);

#define VkglTestCase_031483_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuffer."
#define VkglTestCase_031483_2 "tex2d_srgb8_alpha8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031483, VkglTestCase_031483_1, VkglTestCase_031483_2);

#define VkglTestCase_031484_1 "dEQP-GLES3.functional.fbo.render.s"
#define VkglTestCase_031484_2 "hared_colorbuffer.rbo_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031484, VkglTestCase_031484_1, VkglTestCase_031484_2);

#define VkglTestCase_031485_1 "dEQP-GLES3.functional.fbo.render.shared_colorbu"
#define VkglTestCase_031485_2 "ffer.rbo_srgb8_alpha8_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031485, VkglTestCase_031485_1, VkglTestCase_031485_2);

#define VkglTestCase_031486_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuffer"
#define VkglTestCase_031486_2 ".rbo_srgb8_alpha8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031486, VkglTestCase_031486_1, VkglTestCase_031486_2);

#define VkglTestCase_031487_1 "dEQP-GLES3.functional.fbo.render."
#define VkglTestCase_031487_2 "shared_colorbuffer.tex2d_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031487, VkglTestCase_031487_1, VkglTestCase_031487_2);

#define VkglTestCase_031488_1 "dEQP-GLES3.functional.fbo.render.shared_colorb"
#define VkglTestCase_031488_2 "uffer.tex2d_rgb10_a2_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031488, VkglTestCase_031488_1, VkglTestCase_031488_2);

#define VkglTestCase_031489_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuffe"
#define VkglTestCase_031489_2 "r.tex2d_rgb10_a2_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031489, VkglTestCase_031489_1, VkglTestCase_031489_2);

#define VkglTestCase_031490_1 "dEQP-GLES3.functional.fbo.render"
#define VkglTestCase_031490_2 ".shared_colorbuffer.rbo_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031490, VkglTestCase_031490_1, VkglTestCase_031490_2);

#define VkglTestCase_031491_1 "dEQP-GLES3.functional.fbo.render.shared_color"
#define VkglTestCase_031491_2 "buffer.rbo_rgb10_a2_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031491, VkglTestCase_031491_1, VkglTestCase_031491_2);

#define VkglTestCase_031492_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuff"
#define VkglTestCase_031492_2 "er.rbo_rgb10_a2_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031492, VkglTestCase_031492_1, VkglTestCase_031492_2);

#define VkglTestCase_031493_1 "dEQP-GLES3.functional.fbo.rende"
#define VkglTestCase_031493_2 "r.shared_colorbuffer.tex2d_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031493, VkglTestCase_031493_1, VkglTestCase_031493_2);

#define VkglTestCase_031494_1 "dEQP-GLES3.functional.fbo.render.shared_color"
#define VkglTestCase_031494_2 "buffer.tex2d_rgba4_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031494, VkglTestCase_031494_1, VkglTestCase_031494_2);

#define VkglTestCase_031495_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuff"
#define VkglTestCase_031495_2 "er.tex2d_rgba4_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031495, VkglTestCase_031495_1, VkglTestCase_031495_2);

#define VkglTestCase_031496_1 "dEQP-GLES3.functional.fbo.rend"
#define VkglTestCase_031496_2 "er.shared_colorbuffer.rbo_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031496, VkglTestCase_031496_1, VkglTestCase_031496_2);

#define VkglTestCase_031497_1 "dEQP-GLES3.functional.fbo.render.shared_colo"
#define VkglTestCase_031497_2 "rbuffer.rbo_rgba4_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031497, VkglTestCase_031497_1, VkglTestCase_031497_2);

#define VkglTestCase_031498_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuf"
#define VkglTestCase_031498_2 "fer.rbo_rgba4_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031498, VkglTestCase_031498_1, VkglTestCase_031498_2);

#define VkglTestCase_031499_1 "dEQP-GLES3.functional.fbo.render"
#define VkglTestCase_031499_2 ".shared_colorbuffer.tex2d_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031499, VkglTestCase_031499_1, VkglTestCase_031499_2);

#define VkglTestCase_031500_1 "dEQP-GLES3.functional.fbo.render.shared_colorb"
#define VkglTestCase_031500_2 "uffer.tex2d_rgb5_a1_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031500, VkglTestCase_031500_1, VkglTestCase_031500_2);

#define VkglTestCase_031501_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuffe"
#define VkglTestCase_031501_2 "r.tex2d_rgb5_a1_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031501, VkglTestCase_031501_1, VkglTestCase_031501_2);

#define VkglTestCase_031502_1 "dEQP-GLES3.functional.fbo.rende"
#define VkglTestCase_031502_2 "r.shared_colorbuffer.rbo_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031502, VkglTestCase_031502_1, VkglTestCase_031502_2);

#define VkglTestCase_031503_1 "dEQP-GLES3.functional.fbo.render.shared_color"
#define VkglTestCase_031503_2 "buffer.rbo_rgb5_a1_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031503, VkglTestCase_031503_1, VkglTestCase_031503_2);

#define VkglTestCase_031504_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuff"
#define VkglTestCase_031504_2 "er.rbo_rgb5_a1_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031504, VkglTestCase_031504_1, VkglTestCase_031504_2);

#define VkglTestCase_031505_1 "dEQP-GLES3.functional.fbo.rende"
#define VkglTestCase_031505_2 "r.shared_colorbuffer.tex2d_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031505, VkglTestCase_031505_1, VkglTestCase_031505_2);

#define VkglTestCase_031506_1 "dEQP-GLES3.functional.fbo.render.shared_colo"
#define VkglTestCase_031506_2 "rbuffer.tex2d_rgb8_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031506, VkglTestCase_031506_1, VkglTestCase_031506_2);

#define VkglTestCase_031507_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuf"
#define VkglTestCase_031507_2 "fer.tex2d_rgb8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031507, VkglTestCase_031507_1, VkglTestCase_031507_2);

#define VkglTestCase_031508_1 "dEQP-GLES3.functional.fbo.rend"
#define VkglTestCase_031508_2 "er.shared_colorbuffer.rbo_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031508, VkglTestCase_031508_1, VkglTestCase_031508_2);

#define VkglTestCase_031509_1 "dEQP-GLES3.functional.fbo.render.shared_col"
#define VkglTestCase_031509_2 "orbuffer.rbo_rgb8_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031509, VkglTestCase_031509_1, VkglTestCase_031509_2);

#define VkglTestCase_031510_1 "dEQP-GLES3.functional.fbo.render.shared_colorbu"
#define VkglTestCase_031510_2 "ffer.rbo_rgb8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031510, VkglTestCase_031510_1, VkglTestCase_031510_2);

#define VkglTestCase_031511_1 "dEQP-GLES3.functional.fbo.render"
#define VkglTestCase_031511_2 ".shared_colorbuffer.tex2d_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031511, VkglTestCase_031511_1, VkglTestCase_031511_2);

#define VkglTestCase_031512_1 "dEQP-GLES3.functional.fbo.render.shared_color"
#define VkglTestCase_031512_2 "buffer.tex2d_rgb565_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031512, VkglTestCase_031512_1, VkglTestCase_031512_2);

#define VkglTestCase_031513_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuff"
#define VkglTestCase_031513_2 "er.tex2d_rgb565_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031513, VkglTestCase_031513_1, VkglTestCase_031513_2);

#define VkglTestCase_031514_1 "dEQP-GLES3.functional.fbo.rende"
#define VkglTestCase_031514_2 "r.shared_colorbuffer.rbo_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031514, VkglTestCase_031514_1, VkglTestCase_031514_2);

#define VkglTestCase_031515_1 "dEQP-GLES3.functional.fbo.render.shared_colo"
#define VkglTestCase_031515_2 "rbuffer.rbo_rgb565_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031515, VkglTestCase_031515_1, VkglTestCase_031515_2);

#define VkglTestCase_031516_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuf"
#define VkglTestCase_031516_2 "fer.rbo_rgb565_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031516, VkglTestCase_031516_1, VkglTestCase_031516_2);

#define VkglTestCase_031517_1 "dEQP-GLES3.functional.fbo.render.sha"
#define VkglTestCase_031517_2 "red_colorbuffer.tex2d_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031517, VkglTestCase_031517_1, VkglTestCase_031517_2);

#define VkglTestCase_031518_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuff"
#define VkglTestCase_031518_2 "er.tex2d_r11f_g11f_b10f_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031518, VkglTestCase_031518_1, VkglTestCase_031518_2);

#define VkglTestCase_031519_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuffer.t"
#define VkglTestCase_031519_2 "ex2d_r11f_g11f_b10f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031519, VkglTestCase_031519_1, VkglTestCase_031519_2);

#define VkglTestCase_031520_1 "dEQP-GLES3.functional.fbo.render.sh"
#define VkglTestCase_031520_2 "ared_colorbuffer.rbo_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031520, VkglTestCase_031520_1, VkglTestCase_031520_2);

#define VkglTestCase_031521_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuf"
#define VkglTestCase_031521_2 "fer.rbo_r11f_g11f_b10f_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031521, VkglTestCase_031521_1, VkglTestCase_031521_2);

#define VkglTestCase_031522_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuffer."
#define VkglTestCase_031522_2 "rbo_r11f_g11f_b10f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031522, VkglTestCase_031522_1, VkglTestCase_031522_2);

#define VkglTestCase_031523_1 "dEQP-GLES3.functional.fbo.rende"
#define VkglTestCase_031523_2 "r.shared_colorbuffer.tex2d_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031523, VkglTestCase_031523_1, VkglTestCase_031523_2);

#define VkglTestCase_031524_1 "dEQP-GLES3.functional.fbo.render.shared_color"
#define VkglTestCase_031524_2 "buffer.tex2d_rg16f_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031524, VkglTestCase_031524_1, VkglTestCase_031524_2);

#define VkglTestCase_031525_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuff"
#define VkglTestCase_031525_2 "er.tex2d_rg16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031525, VkglTestCase_031525_1, VkglTestCase_031525_2);

#define VkglTestCase_031526_1 "dEQP-GLES3.functional.fbo.rend"
#define VkglTestCase_031526_2 "er.shared_colorbuffer.rbo_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031526, VkglTestCase_031526_1, VkglTestCase_031526_2);

#define VkglTestCase_031527_1 "dEQP-GLES3.functional.fbo.render.shared_colo"
#define VkglTestCase_031527_2 "rbuffer.rbo_rg16f_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031527, VkglTestCase_031527_1, VkglTestCase_031527_2);

#define VkglTestCase_031528_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuf"
#define VkglTestCase_031528_2 "fer.rbo_rg16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031528, VkglTestCase_031528_1, VkglTestCase_031528_2);

#define VkglTestCase_031529_1 "dEQP-GLES3.functional.fbo.rend"
#define VkglTestCase_031529_2 "er.shared_colorbuffer.tex2d_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031529, VkglTestCase_031529_1, VkglTestCase_031529_2);

#define VkglTestCase_031530_1 "dEQP-GLES3.functional.fbo.render.shared_colo"
#define VkglTestCase_031530_2 "rbuffer.tex2d_rg8_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031530, VkglTestCase_031530_1, VkglTestCase_031530_2);

#define VkglTestCase_031531_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuf"
#define VkglTestCase_031531_2 "fer.tex2d_rg8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031531, VkglTestCase_031531_1, VkglTestCase_031531_2);

#define VkglTestCase_031532_1 "dEQP-GLES3.functional.fbo.ren"
#define VkglTestCase_031532_2 "der.shared_colorbuffer.rbo_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031532, VkglTestCase_031532_1, VkglTestCase_031532_2);

#define VkglTestCase_031533_1 "dEQP-GLES3.functional.fbo.render.shared_col"
#define VkglTestCase_031533_2 "orbuffer.rbo_rg8_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031533, VkglTestCase_031533_1, VkglTestCase_031533_2);

#define VkglTestCase_031534_1 "dEQP-GLES3.functional.fbo.render.shared_colorbu"
#define VkglTestCase_031534_2 "ffer.rbo_rg8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031534, VkglTestCase_031534_1, VkglTestCase_031534_2);

#define VkglTestCase_031535_1 "dEQP-GLES3.functional.fbo.rende"
#define VkglTestCase_031535_2 "r.shared_colorbuffer.tex2d_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031535, VkglTestCase_031535_1, VkglTestCase_031535_2);

#define VkglTestCase_031536_1 "dEQP-GLES3.functional.fbo.render.shared_colo"
#define VkglTestCase_031536_2 "rbuffer.tex2d_r16f_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031536, VkglTestCase_031536_1, VkglTestCase_031536_2);

#define VkglTestCase_031537_1 "dEQP-GLES3.functional.fbo.render.shared_colorbuf"
#define VkglTestCase_031537_2 "fer.tex2d_r16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031537, VkglTestCase_031537_1, VkglTestCase_031537_2);

#define VkglTestCase_031538_1 "dEQP-GLES3.functional.fbo.rend"
#define VkglTestCase_031538_2 "er.shared_colorbuffer.rbo_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031538, VkglTestCase_031538_1, VkglTestCase_031538_2);

#define VkglTestCase_031539_1 "dEQP-GLES3.functional.fbo.render.shared_col"
#define VkglTestCase_031539_2 "orbuffer.rbo_r16f_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031539, VkglTestCase_031539_1, VkglTestCase_031539_2);

#define VkglTestCase_031540_1 "dEQP-GLES3.functional.fbo.render.shared_colorbu"
#define VkglTestCase_031540_2 "ffer.rbo_r16f_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031540, VkglTestCase_031540_1, VkglTestCase_031540_2);

#define VkglTestCase_031541_1 "dEQP-GLES3.functional.fbo.rend"
#define VkglTestCase_031541_2 "er.shared_colorbuffer.tex2d_r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031541, VkglTestCase_031541_1, VkglTestCase_031541_2);

#define VkglTestCase_031542_1 "dEQP-GLES3.functional.fbo.render.shared_col"
#define VkglTestCase_031542_2 "orbuffer.tex2d_r8_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031542, VkglTestCase_031542_1, VkglTestCase_031542_2);

#define VkglTestCase_031543_1 "dEQP-GLES3.functional.fbo.render.shared_colorbu"
#define VkglTestCase_031543_2 "ffer.tex2d_r8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031543, VkglTestCase_031543_1, VkglTestCase_031543_2);

#define VkglTestCase_031544_1 "dEQP-GLES3.functional.fbo.ren"
#define VkglTestCase_031544_2 "der.shared_colorbuffer.rbo_r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031544, VkglTestCase_031544_1, VkglTestCase_031544_2);

#define VkglTestCase_031545_1 "dEQP-GLES3.functional.fbo.render.shared_co"
#define VkglTestCase_031545_2 "lorbuffer.rbo_r8_depth_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031545, VkglTestCase_031545_1, VkglTestCase_031545_2);

#define VkglTestCase_031546_1 "dEQP-GLES3.functional.fbo.render.shared_colorb"
#define VkglTestCase_031546_2 "uffer.rbo_r8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031546, VkglTestCase_031546_1, VkglTestCase_031546_2);
