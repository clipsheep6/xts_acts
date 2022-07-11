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

#define VkglTestCase_012889_1 "dEQP-GLES2.functional.fbo.completeness.renderab"
#define VkglTestCase_012889_2 "le.texture.depth.depth_component_unsigned_short"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012889, VkglTestCase_012889_1, VkglTestCase_012889_2);

#define VkglTestCase_012890_1 "dEQP-GLES2.functional.fbo.completeness.rendera"
#define VkglTestCase_012890_2 "ble.texture.depth.depth_component_unsigned_int"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012890, VkglTestCase_012890_1, VkglTestCase_012890_2);

#define VkglTestCase_012891_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012891_2 "enderable.texture.depth.red_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012891, VkglTestCase_012891_1, VkglTestCase_012891_2);

#define VkglTestCase_012892_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012892_2 "ss.renderable.texture.depth.red_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012892, VkglTestCase_012892_1, VkglTestCase_012892_2);

#define VkglTestCase_012893_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012893_2 "nderable.texture.depth.red_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012893, VkglTestCase_012893_1, VkglTestCase_012893_2);

#define VkglTestCase_012894_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012894_2 "enderable.texture.depth.rgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012894, VkglTestCase_012894_1, VkglTestCase_012894_2);

#define VkglTestCase_012895_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012895_2 "ss.renderable.texture.depth.rgb_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012895, VkglTestCase_012895_1, VkglTestCase_012895_2);

#define VkglTestCase_012896_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012896_2 "rable.texture.depth.rgb_unsigned_short_5_6_5"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012896, VkglTestCase_012896_1, VkglTestCase_012896_2);

#define VkglTestCase_012897_1 "dEQP-GLES2.functional.fbo.completeness.renderab"
#define VkglTestCase_012897_2 "le.texture.depth.rgb_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012897, VkglTestCase_012897_1, VkglTestCase_012897_2);

#define VkglTestCase_012898_1 "dEQP-GLES2.functional.fbo.completeness.renderabl"
#define VkglTestCase_012898_2 "e.texture.depth.rgb_unsigned_int_10f_11f_11f_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012898, VkglTestCase_012898_1, VkglTestCase_012898_2);

#define VkglTestCase_012899_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012899_2 "nderable.texture.depth.rgb_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012899, VkglTestCase_012899_1, VkglTestCase_012899_2);

#define VkglTestCase_012900_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012900_2 "nderable.texture.depth.rgba_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012900, VkglTestCase_012900_1, VkglTestCase_012900_2);

#define VkglTestCase_012901_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012901_2 "s.renderable.texture.depth.rgba_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012901, VkglTestCase_012901_1, VkglTestCase_012901_2);

#define VkglTestCase_012902_1 "dEQP-GLES2.functional.fbo.completeness.render"
#define VkglTestCase_012902_2 "able.texture.depth.rgba_unsigned_short_4_4_4_4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012902, VkglTestCase_012902_1, VkglTestCase_012902_2);

#define VkglTestCase_012903_1 "dEQP-GLES2.functional.fbo.completeness.render"
#define VkglTestCase_012903_2 "able.texture.depth.rgba_unsigned_short_5_5_5_1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012903, VkglTestCase_012903_1, VkglTestCase_012903_2);

#define VkglTestCase_012904_1 "dEQP-GLES2.functional.fbo.completeness.renderabl"
#define VkglTestCase_012904_2 "e.texture.depth.rgba_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012904, VkglTestCase_012904_1, VkglTestCase_012904_2);

#define VkglTestCase_012905_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012905_2 "nderable.texture.depth.rgba_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012905, VkglTestCase_012905_1, VkglTestCase_012905_2);

#define VkglTestCase_012906_1 "dEQP-GLES2.functional.fbo.complete"
#define VkglTestCase_012906_2 "ness.renderable.texture.depth.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012906, VkglTestCase_012906_1, VkglTestCase_012906_2);

#define VkglTestCase_012907_1 "dEQP-GLES2.functional.fbo.complete"
#define VkglTestCase_012907_2 "ness.renderable.texture.depth.rgb10"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012907, VkglTestCase_012907_1, VkglTestCase_012907_2);

#define VkglTestCase_012908_1 "dEQP-GLES2.functional.fbo.complete"
#define VkglTestCase_012908_2 "ness.renderable.texture.depth.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012908, VkglTestCase_012908_1, VkglTestCase_012908_2);

#define VkglTestCase_012909_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012909_2 "ess.renderable.texture.depth.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012909, VkglTestCase_012909_1, VkglTestCase_012909_2);

#define VkglTestCase_012910_1 "dEQP-GLES2.functional.fbo.complete"
#define VkglTestCase_012910_2 "ness.renderable.texture.depth.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012910, VkglTestCase_012910_1, VkglTestCase_012910_2);

#define VkglTestCase_012911_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012911_2 "ss.renderable.texture.depth.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012911, VkglTestCase_012911_1, VkglTestCase_012911_2);

#define VkglTestCase_012912_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012912_2 "enderable.texture.depth.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012912, VkglTestCase_012912_1, VkglTestCase_012912_2);

#define VkglTestCase_012913_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012913_2 "enderable.texture.depth.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012913, VkglTestCase_012913_1, VkglTestCase_012913_2);

#define VkglTestCase_012914_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012914_2 "enderable.texture.depth.depth_component32"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012914, VkglTestCase_012914_1, VkglTestCase_012914_2);

#define VkglTestCase_012915_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012915_2 "enderable.texture.depth.rg_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012915, VkglTestCase_012915_1, VkglTestCase_012915_2);

#define VkglTestCase_012916_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012916_2 "ss.renderable.texture.depth.rg_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012916, VkglTestCase_012916_1, VkglTestCase_012916_2);

#define VkglTestCase_012917_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012917_2 "enderable.texture.depth.rg_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012917, VkglTestCase_012917_1, VkglTestCase_012917_2);

#define VkglTestCase_012918_1 "dEQP-GLES2.functional.fbo.complet"
#define VkglTestCase_012918_2 "eness.renderable.texture.depth.r8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012918, VkglTestCase_012918_1, VkglTestCase_012918_2);

#define VkglTestCase_012919_1 "dEQP-GLES2.functional.fbo.complet"
#define VkglTestCase_012919_2 "eness.renderable.texture.depth.rg8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012919, VkglTestCase_012919_1, VkglTestCase_012919_2);

#define VkglTestCase_012920_1 "dEQP-GLES2.functional.fbo.complete"
#define VkglTestCase_012920_2 "ness.renderable.texture.depth.r16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012920, VkglTestCase_012920_1, VkglTestCase_012920_2);

#define VkglTestCase_012921_1 "dEQP-GLES2.functional.fbo.complete"
#define VkglTestCase_012921_2 "ness.renderable.texture.depth.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012921, VkglTestCase_012921_1, VkglTestCase_012921_2);

#define VkglTestCase_012922_1 "dEQP-GLES2.functional.fbo.completeness.renderab"
#define VkglTestCase_012922_2 "le.texture.depth.depth_stencil_unsigned_int_24_8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012922, VkglTestCase_012922_1, VkglTestCase_012922_2);

#define VkglTestCase_012923_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012923_2 "ess.renderable.texture.depth.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012923, VkglTestCase_012923_1, VkglTestCase_012923_2);

#define VkglTestCase_012924_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012924_2 "ess.renderable.texture.depth.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012924, VkglTestCase_012924_1, VkglTestCase_012924_2);

#define VkglTestCase_012925_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012925_2 "enderable.texture.depth.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012925, VkglTestCase_012925_1, VkglTestCase_012925_2);

#define VkglTestCase_012926_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012926_2 "renderable.texture.depth.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012926, VkglTestCase_012926_1, VkglTestCase_012926_2);

#define VkglTestCase_012927_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012927_2 "nderable.texture.depth.srgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012927, VkglTestCase_012927_1, VkglTestCase_012927_2);

#define VkglTestCase_012928_1 "dEQP-GLES2.functional.fbo.complete"
#define VkglTestCase_012928_2 "ness.renderable.texture.depth.srgb8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012928, VkglTestCase_012928_1, VkglTestCase_012928_2);

#define VkglTestCase_012929_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012929_2 "rable.texture.depth.srgb_alpha_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012929, VkglTestCase_012929_1, VkglTestCase_012929_2);

#define VkglTestCase_012930_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012930_2 ".renderable.texture.depth.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012930, VkglTestCase_012930_1, VkglTestCase_012930_2);

#define VkglTestCase_012931_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012931_2 "renderable.texture.depth.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012931, VkglTestCase_012931_1, VkglTestCase_012931_2);

#define VkglTestCase_012932_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012932_2 "ess.renderable.texture.depth.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012932, VkglTestCase_012932_1, VkglTestCase_012932_2);

#define VkglTestCase_012933_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012933_2 "ess.renderable.texture.depth.sr8_ext"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012933, VkglTestCase_012933_1, VkglTestCase_012933_2);

#define VkglTestCase_012934_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012934_2 "ss.renderable.texture.depth.srg8_ext"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012934, VkglTestCase_012934_1, VkglTestCase_012934_2);
