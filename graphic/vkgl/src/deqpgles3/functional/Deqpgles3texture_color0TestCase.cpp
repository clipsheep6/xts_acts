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

#define VkglTestCase_031092_1 "dEQP-GLES3.functional.fbo.completeness.renderab"
#define VkglTestCase_031092_2 "le.texture.color0.depth_component_unsigned_short"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031092, VkglTestCase_031092_1, VkglTestCase_031092_2);

#define VkglTestCase_031093_1 "dEQP-GLES3.functional.fbo.completeness.rendera"
#define VkglTestCase_031093_2 "ble.texture.color0.depth_component_unsigned_int"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031093, VkglTestCase_031093_1, VkglTestCase_031093_2);

#define VkglTestCase_031094_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031094_2 "nderable.texture.color0.red_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031094, VkglTestCase_031094_1, VkglTestCase_031094_2);

#define VkglTestCase_031095_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031095_2 "s.renderable.texture.color0.red_float"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031095, VkglTestCase_031095_1, VkglTestCase_031095_2);

#define VkglTestCase_031096_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031096_2 "nderable.texture.color0.red_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031096, VkglTestCase_031096_1, VkglTestCase_031096_2);

#define VkglTestCase_031097_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031097_2 "nderable.texture.color0.rgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031097, VkglTestCase_031097_1, VkglTestCase_031097_2);

#define VkglTestCase_031098_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_031098_2 "rable.texture.color0.rgb_unsigned_short_5_6_5"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031098, VkglTestCase_031098_1, VkglTestCase_031098_2);

#define VkglTestCase_031099_1 "dEQP-GLES3.functional.fbo.completeness.renderabl"
#define VkglTestCase_031099_2 "e.texture.color0.rgb_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031099, VkglTestCase_031099_1, VkglTestCase_031099_2);

#define VkglTestCase_031100_1 "dEQP-GLES3.functional.fbo.completeness.renderabl"
#define VkglTestCase_031100_2 "e.texture.color0.rgb_unsigned_int_10f_11f_11f_rev"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031100, VkglTestCase_031100_1, VkglTestCase_031100_2);

#define VkglTestCase_031101_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031101_2 "nderable.texture.color0.rgba_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031101, VkglTestCase_031101_1, VkglTestCase_031101_2);

#define VkglTestCase_031102_1 "dEQP-GLES3.functional.fbo.completeness.rendera"
#define VkglTestCase_031102_2 "ble.texture.color0.rgba_unsigned_short_4_4_4_4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031102, VkglTestCase_031102_1, VkglTestCase_031102_2);

#define VkglTestCase_031103_1 "dEQP-GLES3.functional.fbo.completeness.rendera"
#define VkglTestCase_031103_2 "ble.texture.color0.rgba_unsigned_short_5_5_5_1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031103, VkglTestCase_031103_1, VkglTestCase_031103_2);

#define VkglTestCase_031104_1 "dEQP-GLES3.functional.fbo.completeness.renderabl"
#define VkglTestCase_031104_2 "e.texture.color0.rgba_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031104, VkglTestCase_031104_1, VkglTestCase_031104_2);

#define VkglTestCase_031105_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031105_2 "ness.renderable.texture.color0.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031105, VkglTestCase_031105_1, VkglTestCase_031105_2);

#define VkglTestCase_031106_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031106_2 "ess.renderable.texture.color0.rgb10"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031106, VkglTestCase_031106_1, VkglTestCase_031106_2);

#define VkglTestCase_031107_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031107_2 "ess.renderable.texture.color0.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031107, VkglTestCase_031107_1, VkglTestCase_031107_2);

#define VkglTestCase_031108_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031108_2 "ss.renderable.texture.color0.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031108, VkglTestCase_031108_1, VkglTestCase_031108_2);

#define VkglTestCase_031109_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031109_2 "ess.renderable.texture.color0.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031109, VkglTestCase_031109_1, VkglTestCase_031109_2);

#define VkglTestCase_031110_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031110_2 "ss.renderable.texture.color0.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031110, VkglTestCase_031110_1, VkglTestCase_031110_2);

#define VkglTestCase_031111_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031111_2 "nderable.texture.color0.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031111, VkglTestCase_031111_1, VkglTestCase_031111_2);

#define VkglTestCase_031112_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031112_2 "nderable.texture.color0.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031112, VkglTestCase_031112_1, VkglTestCase_031112_2);

#define VkglTestCase_031113_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031113_2 "nderable.texture.color0.depth_component32"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031113, VkglTestCase_031113_1, VkglTestCase_031113_2);

#define VkglTestCase_031114_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031114_2 "enderable.texture.color0.rg_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031114, VkglTestCase_031114_1, VkglTestCase_031114_2);

#define VkglTestCase_031115_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031115_2 "ss.renderable.texture.color0.rg_float"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031115, VkglTestCase_031115_1, VkglTestCase_031115_2);

#define VkglTestCase_031116_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031116_2 "nderable.texture.color0.rg_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031116, VkglTestCase_031116_1, VkglTestCase_031116_2);

#define VkglTestCase_031117_1 "dEQP-GLES3.functional.fbo.complet"
#define VkglTestCase_031117_2 "eness.renderable.texture.color0.r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031117, VkglTestCase_031117_1, VkglTestCase_031117_2);

#define VkglTestCase_031118_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031118_2 "ness.renderable.texture.color0.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031118, VkglTestCase_031118_1, VkglTestCase_031118_2);

#define VkglTestCase_031119_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031119_2 "ness.renderable.texture.color0.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031119, VkglTestCase_031119_1, VkglTestCase_031119_2);

#define VkglTestCase_031120_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031120_2 "ness.renderable.texture.color0.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031120, VkglTestCase_031120_1, VkglTestCase_031120_2);

#define VkglTestCase_031121_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031121_2 "ess.renderable.texture.color0.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031121, VkglTestCase_031121_1, VkglTestCase_031121_2);

#define VkglTestCase_031122_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031122_2 "ess.renderable.texture.color0.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031122, VkglTestCase_031122_1, VkglTestCase_031122_2);

#define VkglTestCase_031123_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031123_2 "ness.renderable.texture.color0.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031123, VkglTestCase_031123_1, VkglTestCase_031123_2);

#define VkglTestCase_031124_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031124_2 "ness.renderable.texture.color0.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031124, VkglTestCase_031124_1, VkglTestCase_031124_2);

#define VkglTestCase_031125_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031125_2 "ness.renderable.texture.color0.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031125, VkglTestCase_031125_1, VkglTestCase_031125_2);

#define VkglTestCase_031126_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031126_2 "ess.renderable.texture.color0.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031126, VkglTestCase_031126_1, VkglTestCase_031126_2);

#define VkglTestCase_031127_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031127_2 "ness.renderable.texture.color0.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031127, VkglTestCase_031127_1, VkglTestCase_031127_2);

#define VkglTestCase_031128_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031128_2 "ess.renderable.texture.color0.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031128, VkglTestCase_031128_1, VkglTestCase_031128_2);

#define VkglTestCase_031129_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031129_2 "ness.renderable.texture.color0.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031129, VkglTestCase_031129_1, VkglTestCase_031129_2);

#define VkglTestCase_031130_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031130_2 "ess.renderable.texture.color0.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031130, VkglTestCase_031130_1, VkglTestCase_031130_2);

#define VkglTestCase_031131_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031131_2 "ess.renderable.texture.color0.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031131, VkglTestCase_031131_1, VkglTestCase_031131_2);

#define VkglTestCase_031132_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031132_2 "ess.renderable.texture.color0.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031132, VkglTestCase_031132_1, VkglTestCase_031132_2);

#define VkglTestCase_031133_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031133_2 "ess.renderable.texture.color0.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031133, VkglTestCase_031133_1, VkglTestCase_031133_2);

#define VkglTestCase_031134_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031134_2 "ess.renderable.texture.color0.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031134, VkglTestCase_031134_1, VkglTestCase_031134_2);

#define VkglTestCase_031135_1 "dEQP-GLES3.functional.fbo.completeness.renderabl"
#define VkglTestCase_031135_2 "e.texture.color0.depth_stencil_unsigned_int_24_8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031135, VkglTestCase_031135_1, VkglTestCase_031135_2);

#define VkglTestCase_031136_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031136_2 "ss.renderable.texture.color0.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031136, VkglTestCase_031136_1, VkglTestCase_031136_2);

#define VkglTestCase_031137_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031137_2 "ss.renderable.texture.color0.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031137, VkglTestCase_031137_1, VkglTestCase_031137_2);

#define VkglTestCase_031138_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031138_2 "enderable.texture.color0.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031138, VkglTestCase_031138_1, VkglTestCase_031138_2);

#define VkglTestCase_031139_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031139_2 "renderable.texture.color0.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031139, VkglTestCase_031139_1, VkglTestCase_031139_2);

#define VkglTestCase_031140_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031140_2 "ss.renderable.texture.color0.rgb9_e5"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031140, VkglTestCase_031140_1, VkglTestCase_031140_2);

#define VkglTestCase_031141_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031141_2 "nderable.texture.color0.srgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031141, VkglTestCase_031141_1, VkglTestCase_031141_2);

#define VkglTestCase_031142_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031142_2 "ess.renderable.texture.color0.srgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031142, VkglTestCase_031142_1, VkglTestCase_031142_2);

#define VkglTestCase_031143_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_031143_2 "rable.texture.color0.srgb_alpha_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031143, VkglTestCase_031143_1, VkglTestCase_031143_2);

#define VkglTestCase_031144_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031144_2 ".renderable.texture.color0.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031144, VkglTestCase_031144_1, VkglTestCase_031144_2);

#define VkglTestCase_031145_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031145_2 "nderable.texture.color0.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031145, VkglTestCase_031145_1, VkglTestCase_031145_2);

#define VkglTestCase_031146_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031146_2 "nderable.texture.color0.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031146, VkglTestCase_031146_1, VkglTestCase_031146_2);

#define VkglTestCase_031147_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031147_2 "renderable.texture.color0.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031147, VkglTestCase_031147_1, VkglTestCase_031147_2);

#define VkglTestCase_031148_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031148_2 "ess.renderable.texture.color0.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031148, VkglTestCase_031148_1, VkglTestCase_031148_2);

#define VkglTestCase_031149_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031149_2 "ss.renderable.texture.color0.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031149, VkglTestCase_031149_1, VkglTestCase_031149_2);

#define VkglTestCase_031150_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031150_2 "ss.renderable.texture.color0.rgb32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031150, VkglTestCase_031150_1, VkglTestCase_031150_2);

#define VkglTestCase_031151_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031151_2 "ss.renderable.texture.color0.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031151, VkglTestCase_031151_1, VkglTestCase_031151_2);

#define VkglTestCase_031152_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031152_2 "ss.renderable.texture.color0.rgb16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031152, VkglTestCase_031152_1, VkglTestCase_031152_2);

#define VkglTestCase_031153_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031153_2 "ss.renderable.texture.color0.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031153, VkglTestCase_031153_1, VkglTestCase_031153_2);

#define VkglTestCase_031154_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031154_2 "ess.renderable.texture.color0.rgb8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031154, VkglTestCase_031154_1, VkglTestCase_031154_2);

#define VkglTestCase_031155_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031155_2 "ss.renderable.texture.color0.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031155, VkglTestCase_031155_1, VkglTestCase_031155_2);

#define VkglTestCase_031156_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031156_2 "ess.renderable.texture.color0.rgb32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031156, VkglTestCase_031156_1, VkglTestCase_031156_2);

#define VkglTestCase_031157_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031157_2 "ss.renderable.texture.color0.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031157, VkglTestCase_031157_1, VkglTestCase_031157_2);

#define VkglTestCase_031158_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031158_2 "ess.renderable.texture.color0.rgb16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031158, VkglTestCase_031158_1, VkglTestCase_031158_2);

#define VkglTestCase_031159_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031159_2 "ess.renderable.texture.color0.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031159, VkglTestCase_031159_1, VkglTestCase_031159_2);

#define VkglTestCase_031160_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031160_2 "ess.renderable.texture.color0.rgb8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031160, VkglTestCase_031160_1, VkglTestCase_031160_2);

#define VkglTestCase_031161_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031161_2 "ss.renderable.texture.color0.r8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031161, VkglTestCase_031161_1, VkglTestCase_031161_2);

#define VkglTestCase_031162_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031162_2 "s.renderable.texture.color0.rg8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031162, VkglTestCase_031162_1, VkglTestCase_031162_2);

#define VkglTestCase_031163_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031163_2 "s.renderable.texture.color0.rgb8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031163, VkglTestCase_031163_1, VkglTestCase_031163_2);

#define VkglTestCase_031164_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031164_2 ".renderable.texture.color0.rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031164, VkglTestCase_031164_1, VkglTestCase_031164_2);

#define VkglTestCase_031165_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031165_2 "ss.renderable.texture.color0.sr8_ext"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031165, VkglTestCase_031165_1, VkglTestCase_031165_2);

#define VkglTestCase_031166_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031166_2 "ss.renderable.texture.color0.srg8_ext"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031166, VkglTestCase_031166_1, VkglTestCase_031166_2);

#define VkglTestCase_031167_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031167_2 "s.renderable.texture.color0.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031167, VkglTestCase_031167_1, VkglTestCase_031167_2);
