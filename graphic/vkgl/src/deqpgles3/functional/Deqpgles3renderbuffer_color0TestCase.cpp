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
#include "../ActsDeqpgles30031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030862_1 "dEQP-GLES3.functional.fbo.completeness.renderable."
#define VkglTestCase_030862_2 "renderbuffer.color0.depth_component_unsigned_short"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030862, VkglTestCase_030862_1, VkglTestCase_030862_2);

#define VkglTestCase_030863_1 "dEQP-GLES3.functional.fbo.completeness.renderable"
#define VkglTestCase_030863_2 ".renderbuffer.color0.depth_component_unsigned_int"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030863, VkglTestCase_030863_1, VkglTestCase_030863_2);

#define VkglTestCase_030864_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_030864_2 "erable.renderbuffer.color0.red_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030864, VkglTestCase_030864_1, VkglTestCase_030864_2);

#define VkglTestCase_030865_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030865_2 "renderable.renderbuffer.color0.red_float"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030865, VkglTestCase_030865_1, VkglTestCase_030865_2);

#define VkglTestCase_030866_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030866_2 "rable.renderbuffer.color0.red_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030866, VkglTestCase_030866_1, VkglTestCase_030866_2);

#define VkglTestCase_030867_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_030867_2 "erable.renderbuffer.color0.rgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030867, VkglTestCase_030867_1, VkglTestCase_030867_2);

#define VkglTestCase_030868_1 "dEQP-GLES3.functional.fbo.completeness.renderab"
#define VkglTestCase_030868_2 "le.renderbuffer.color0.rgb_unsigned_short_5_6_5"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030868, VkglTestCase_030868_1, VkglTestCase_030868_2);

#define VkglTestCase_030869_1 "dEQP-GLES3.functional.fbo.completeness.renderable."
#define VkglTestCase_030869_2 "renderbuffer.color0.rgb_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030869, VkglTestCase_030869_1, VkglTestCase_030869_2);

#define VkglTestCase_030870_1 "dEQP-GLES3.functional.fbo.completeness.renderable.r"
#define VkglTestCase_030870_2 "enderbuffer.color0.rgb_unsigned_int_10f_11f_11f_rev"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030870, VkglTestCase_030870_1, VkglTestCase_030870_2);

#define VkglTestCase_030871_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030871_2 "rable.renderbuffer.color0.rgba_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030871, VkglTestCase_030871_1, VkglTestCase_030871_2);

#define VkglTestCase_030872_1 "dEQP-GLES3.functional.fbo.completeness.renderabl"
#define VkglTestCase_030872_2 "e.renderbuffer.color0.rgba_unsigned_short_4_4_4_4"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030872, VkglTestCase_030872_1, VkglTestCase_030872_2);

#define VkglTestCase_030873_1 "dEQP-GLES3.functional.fbo.completeness.renderabl"
#define VkglTestCase_030873_2 "e.renderbuffer.color0.rgba_unsigned_short_5_5_5_1"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030873, VkglTestCase_030873_1, VkglTestCase_030873_2);

#define VkglTestCase_030874_1 "dEQP-GLES3.functional.fbo.completeness.renderable.r"
#define VkglTestCase_030874_2 "enderbuffer.color0.rgba_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030874, VkglTestCase_030874_1, VkglTestCase_030874_2);

#define VkglTestCase_030875_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030875_2 "s.renderable.renderbuffer.color0.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030875, VkglTestCase_030875_1, VkglTestCase_030875_2);

#define VkglTestCase_030876_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030876_2 "s.renderable.renderbuffer.color0.rgb10"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030876, VkglTestCase_030876_1, VkglTestCase_030876_2);

#define VkglTestCase_030877_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030877_2 "s.renderable.renderbuffer.color0.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030877, VkglTestCase_030877_1, VkglTestCase_030877_2);

#define VkglTestCase_030878_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030878_2 ".renderable.renderbuffer.color0.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030878, VkglTestCase_030878_1, VkglTestCase_030878_2);

#define VkglTestCase_030879_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030879_2 "s.renderable.renderbuffer.color0.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030879, VkglTestCase_030879_1, VkglTestCase_030879_2);

#define VkglTestCase_030880_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030880_2 "renderable.renderbuffer.color0.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030880, VkglTestCase_030880_1, VkglTestCase_030880_2);

#define VkglTestCase_030881_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_030881_2 "erable.renderbuffer.color0.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030881, VkglTestCase_030881_1, VkglTestCase_030881_2);

#define VkglTestCase_030882_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_030882_2 "erable.renderbuffer.color0.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030882, VkglTestCase_030882_1, VkglTestCase_030882_2);

#define VkglTestCase_030883_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_030883_2 "erable.renderbuffer.color0.depth_component32"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030883, VkglTestCase_030883_1, VkglTestCase_030883_2);

#define VkglTestCase_030884_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_030884_2 "erable.renderbuffer.color0.rg_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030884, VkglTestCase_030884_1, VkglTestCase_030884_2);

#define VkglTestCase_030885_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030885_2 "renderable.renderbuffer.color0.rg_float"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030885, VkglTestCase_030885_1, VkglTestCase_030885_2);

#define VkglTestCase_030886_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_030886_2 "erable.renderbuffer.color0.rg_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030886, VkglTestCase_030886_1, VkglTestCase_030886_2);

#define VkglTestCase_030887_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_030887_2 "ss.renderable.renderbuffer.color0.r8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030887, VkglTestCase_030887_1, VkglTestCase_030887_2);

#define VkglTestCase_030888_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_030888_2 "ss.renderable.renderbuffer.color0.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030888, VkglTestCase_030888_1, VkglTestCase_030888_2);

#define VkglTestCase_030889_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030889_2 "s.renderable.renderbuffer.color0.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030889, VkglTestCase_030889_1, VkglTestCase_030889_2);

#define VkglTestCase_030890_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030890_2 "s.renderable.renderbuffer.color0.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030890, VkglTestCase_030890_1, VkglTestCase_030890_2);

#define VkglTestCase_030891_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030891_2 "s.renderable.renderbuffer.color0.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030891, VkglTestCase_030891_1, VkglTestCase_030891_2);

#define VkglTestCase_030892_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030892_2 "s.renderable.renderbuffer.color0.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030892, VkglTestCase_030892_1, VkglTestCase_030892_2);

#define VkglTestCase_030893_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_030893_2 "ss.renderable.renderbuffer.color0.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030893, VkglTestCase_030893_1, VkglTestCase_030893_2);

#define VkglTestCase_030894_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030894_2 "s.renderable.renderbuffer.color0.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030894, VkglTestCase_030894_1, VkglTestCase_030894_2);

#define VkglTestCase_030895_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030895_2 "s.renderable.renderbuffer.color0.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030895, VkglTestCase_030895_1, VkglTestCase_030895_2);

#define VkglTestCase_030896_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030896_2 "s.renderable.renderbuffer.color0.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030896, VkglTestCase_030896_1, VkglTestCase_030896_2);

#define VkglTestCase_030897_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030897_2 "s.renderable.renderbuffer.color0.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030897, VkglTestCase_030897_1, VkglTestCase_030897_2);

#define VkglTestCase_030898_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030898_2 "s.renderable.renderbuffer.color0.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030898, VkglTestCase_030898_1, VkglTestCase_030898_2);

#define VkglTestCase_030899_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030899_2 "s.renderable.renderbuffer.color0.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030899, VkglTestCase_030899_1, VkglTestCase_030899_2);

#define VkglTestCase_030900_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030900_2 "s.renderable.renderbuffer.color0.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030900, VkglTestCase_030900_1, VkglTestCase_030900_2);

#define VkglTestCase_030901_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030901_2 "s.renderable.renderbuffer.color0.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030901, VkglTestCase_030901_1, VkglTestCase_030901_2);

#define VkglTestCase_030902_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030902_2 ".renderable.renderbuffer.color0.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030902, VkglTestCase_030902_1, VkglTestCase_030902_2);

#define VkglTestCase_030903_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030903_2 "s.renderable.renderbuffer.color0.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030903, VkglTestCase_030903_1, VkglTestCase_030903_2);

#define VkglTestCase_030904_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030904_2 ".renderable.renderbuffer.color0.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030904, VkglTestCase_030904_1, VkglTestCase_030904_2);

#define VkglTestCase_030905_1 "dEQP-GLES3.functional.fbo.completeness.renderable."
#define VkglTestCase_030905_2 "renderbuffer.color0.depth_stencil_unsigned_int_24_8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030905, VkglTestCase_030905_1, VkglTestCase_030905_2);

#define VkglTestCase_030906_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030906_2 ".renderable.renderbuffer.color0.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030906, VkglTestCase_030906_1, VkglTestCase_030906_2);

#define VkglTestCase_030907_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030907_2 ".renderable.renderbuffer.color0.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030907, VkglTestCase_030907_1, VkglTestCase_030907_2);

#define VkglTestCase_030908_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_030908_2 "erable.renderbuffer.color0.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030908, VkglTestCase_030908_1, VkglTestCase_030908_2);

#define VkglTestCase_030909_1 "dEQP-GLES3.functional.fbo.completeness.ren"
#define VkglTestCase_030909_2 "derable.renderbuffer.color0.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030909, VkglTestCase_030909_1, VkglTestCase_030909_2);

#define VkglTestCase_030910_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030910_2 ".renderable.renderbuffer.color0.rgb9_e5"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030910, VkglTestCase_030910_1, VkglTestCase_030910_2);

#define VkglTestCase_030911_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030911_2 "rable.renderbuffer.color0.srgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030911, VkglTestCase_030911_1, VkglTestCase_030911_2);

#define VkglTestCase_030912_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030912_2 "s.renderable.renderbuffer.color0.srgb8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030912, VkglTestCase_030912_1, VkglTestCase_030912_2);

#define VkglTestCase_030913_1 "dEQP-GLES3.functional.fbo.completeness.renderab"
#define VkglTestCase_030913_2 "le.renderbuffer.color0.srgb_alpha_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030913, VkglTestCase_030913_1, VkglTestCase_030913_2);

#define VkglTestCase_030914_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_030914_2 "nderable.renderbuffer.color0.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030914, VkglTestCase_030914_1, VkglTestCase_030914_2);

#define VkglTestCase_030915_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030915_2 "rable.renderbuffer.color0.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030915, VkglTestCase_030915_1, VkglTestCase_030915_2);

#define VkglTestCase_030916_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_030916_2 "erable.renderbuffer.color0.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030916, VkglTestCase_030916_1, VkglTestCase_030916_2);

#define VkglTestCase_030917_1 "dEQP-GLES3.functional.fbo.completeness.ren"
#define VkglTestCase_030917_2 "derable.renderbuffer.color0.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030917, VkglTestCase_030917_1, VkglTestCase_030917_2);

#define VkglTestCase_030918_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030918_2 ".renderable.renderbuffer.color0.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030918, VkglTestCase_030918_1, VkglTestCase_030918_2);

#define VkglTestCase_030919_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030919_2 "renderable.renderbuffer.color0.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030919, VkglTestCase_030919_1, VkglTestCase_030919_2);

#define VkglTestCase_030920_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030920_2 ".renderable.renderbuffer.color0.rgb32ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030920, VkglTestCase_030920_1, VkglTestCase_030920_2);

#define VkglTestCase_030921_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030921_2 "renderable.renderbuffer.color0.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030921, VkglTestCase_030921_1, VkglTestCase_030921_2);

#define VkglTestCase_030922_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030922_2 ".renderable.renderbuffer.color0.rgb16ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030922, VkglTestCase_030922_1, VkglTestCase_030922_2);

#define VkglTestCase_030923_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030923_2 ".renderable.renderbuffer.color0.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030923, VkglTestCase_030923_1, VkglTestCase_030923_2);

#define VkglTestCase_030924_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030924_2 ".renderable.renderbuffer.color0.rgb8ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030924, VkglTestCase_030924_1, VkglTestCase_030924_2);

#define VkglTestCase_030925_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030925_2 ".renderable.renderbuffer.color0.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030925, VkglTestCase_030925_1, VkglTestCase_030925_2);

#define VkglTestCase_030926_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030926_2 ".renderable.renderbuffer.color0.rgb32i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030926, VkglTestCase_030926_1, VkglTestCase_030926_2);

#define VkglTestCase_030927_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030927_2 ".renderable.renderbuffer.color0.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030927, VkglTestCase_030927_1, VkglTestCase_030927_2);

#define VkglTestCase_030928_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030928_2 ".renderable.renderbuffer.color0.rgb16i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030928, VkglTestCase_030928_1, VkglTestCase_030928_2);

#define VkglTestCase_030929_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030929_2 ".renderable.renderbuffer.color0.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030929, VkglTestCase_030929_1, VkglTestCase_030929_2);

#define VkglTestCase_030930_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030930_2 "s.renderable.renderbuffer.color0.rgb8i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030930, VkglTestCase_030930_1, VkglTestCase_030930_2);

#define VkglTestCase_030931_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030931_2 "renderable.renderbuffer.color0.r8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030931, VkglTestCase_030931_1, VkglTestCase_030931_2);

#define VkglTestCase_030932_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030932_2 "renderable.renderbuffer.color0.rg8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030932, VkglTestCase_030932_1, VkglTestCase_030932_2);

#define VkglTestCase_030933_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_030933_2 "enderable.renderbuffer.color0.rgb8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030933, VkglTestCase_030933_1, VkglTestCase_030933_2);

#define VkglTestCase_030934_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_030934_2 "enderable.renderbuffer.color0.rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030934, VkglTestCase_030934_1, VkglTestCase_030934_2);

#define VkglTestCase_030935_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030935_2 ".renderable.renderbuffer.color0.sr8_ext"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030935, VkglTestCase_030935_1, VkglTestCase_030935_2);

#define VkglTestCase_030936_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030936_2 "renderable.renderbuffer.color0.srg8_ext"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030936, VkglTestCase_030936_1, VkglTestCase_030936_2);

#define VkglTestCase_030937_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_030937_2 "enderable.renderbuffer.color0.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030937, VkglTestCase_030937_1, VkglTestCase_030937_2);
