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

#define VkglTestCase_031168_1 "dEQP-GLES3.functional.fbo.completeness.renderabl"
#define VkglTestCase_031168_2 "e.texture.stencil.depth_component_unsigned_short"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031168, VkglTestCase_031168_1, VkglTestCase_031168_2);

#define VkglTestCase_031169_1 "dEQP-GLES3.functional.fbo.completeness.renderab"
#define VkglTestCase_031169_2 "le.texture.stencil.depth_component_unsigned_int"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031169, VkglTestCase_031169_1, VkglTestCase_031169_2);

#define VkglTestCase_031170_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031170_2 "nderable.texture.stencil.red_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031170, VkglTestCase_031170_1, VkglTestCase_031170_2);

#define VkglTestCase_031171_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031171_2 "s.renderable.texture.stencil.red_float"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031171, VkglTestCase_031171_1, VkglTestCase_031171_2);

#define VkglTestCase_031172_1 "dEQP-GLES3.functional.fbo.completeness.ren"
#define VkglTestCase_031172_2 "derable.texture.stencil.red_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031172, VkglTestCase_031172_1, VkglTestCase_031172_2);

#define VkglTestCase_031173_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031173_2 "nderable.texture.stencil.rgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031173, VkglTestCase_031173_1, VkglTestCase_031173_2);

#define VkglTestCase_031174_1 "dEQP-GLES3.functional.fbo.completeness.render"
#define VkglTestCase_031174_2 "able.texture.stencil.rgb_unsigned_short_5_6_5"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031174, VkglTestCase_031174_1, VkglTestCase_031174_2);

#define VkglTestCase_031175_1 "dEQP-GLES3.functional.fbo.completeness.renderabl"
#define VkglTestCase_031175_2 "e.texture.stencil.rgb_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031175, VkglTestCase_031175_1, VkglTestCase_031175_2);

#define VkglTestCase_031176_1 "dEQP-GLES3.functional.fbo.completeness.renderable"
#define VkglTestCase_031176_2 ".texture.stencil.rgb_unsigned_int_10f_11f_11f_rev"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031176, VkglTestCase_031176_1, VkglTestCase_031176_2);

#define VkglTestCase_031177_1 "dEQP-GLES3.functional.fbo.completeness.ren"
#define VkglTestCase_031177_2 "derable.texture.stencil.rgba_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031177, VkglTestCase_031177_1, VkglTestCase_031177_2);

#define VkglTestCase_031178_1 "dEQP-GLES3.functional.fbo.completeness.rendera"
#define VkglTestCase_031178_2 "ble.texture.stencil.rgba_unsigned_short_4_4_4_4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031178, VkglTestCase_031178_1, VkglTestCase_031178_2);

#define VkglTestCase_031179_1 "dEQP-GLES3.functional.fbo.completeness.rendera"
#define VkglTestCase_031179_2 "ble.texture.stencil.rgba_unsigned_short_5_5_5_1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031179, VkglTestCase_031179_1, VkglTestCase_031179_2);

#define VkglTestCase_031180_1 "dEQP-GLES3.functional.fbo.completeness.renderable"
#define VkglTestCase_031180_2 ".texture.stencil.rgba_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031180, VkglTestCase_031180_1, VkglTestCase_031180_2);

#define VkglTestCase_031181_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031181_2 "ess.renderable.texture.stencil.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031181, VkglTestCase_031181_1, VkglTestCase_031181_2);

#define VkglTestCase_031182_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031182_2 "ess.renderable.texture.stencil.rgb10"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031182, VkglTestCase_031182_1, VkglTestCase_031182_2);

#define VkglTestCase_031183_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031183_2 "ess.renderable.texture.stencil.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031183, VkglTestCase_031183_1, VkglTestCase_031183_2);

#define VkglTestCase_031184_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031184_2 "ss.renderable.texture.stencil.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031184, VkglTestCase_031184_1, VkglTestCase_031184_2);

#define VkglTestCase_031185_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031185_2 "ess.renderable.texture.stencil.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031185, VkglTestCase_031185_1, VkglTestCase_031185_2);

#define VkglTestCase_031186_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031186_2 "s.renderable.texture.stencil.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031186, VkglTestCase_031186_1, VkglTestCase_031186_2);

#define VkglTestCase_031187_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031187_2 "nderable.texture.stencil.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031187, VkglTestCase_031187_1, VkglTestCase_031187_2);

#define VkglTestCase_031188_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031188_2 "nderable.texture.stencil.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031188, VkglTestCase_031188_1, VkglTestCase_031188_2);

#define VkglTestCase_031189_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031189_2 "nderable.texture.stencil.depth_component32"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031189, VkglTestCase_031189_1, VkglTestCase_031189_2);

#define VkglTestCase_031190_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031190_2 "nderable.texture.stencil.rg_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031190, VkglTestCase_031190_1, VkglTestCase_031190_2);

#define VkglTestCase_031191_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031191_2 "s.renderable.texture.stencil.rg_float"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031191, VkglTestCase_031191_1, VkglTestCase_031191_2);

#define VkglTestCase_031192_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031192_2 "nderable.texture.stencil.rg_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031192, VkglTestCase_031192_1, VkglTestCase_031192_2);

#define VkglTestCase_031193_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031193_2 "ness.renderable.texture.stencil.r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031193, VkglTestCase_031193_1, VkglTestCase_031193_2);

#define VkglTestCase_031194_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031194_2 "ness.renderable.texture.stencil.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031194, VkglTestCase_031194_1, VkglTestCase_031194_2);

#define VkglTestCase_031195_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031195_2 "ess.renderable.texture.stencil.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031195, VkglTestCase_031195_1, VkglTestCase_031195_2);

#define VkglTestCase_031196_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031196_2 "ess.renderable.texture.stencil.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031196, VkglTestCase_031196_1, VkglTestCase_031196_2);

#define VkglTestCase_031197_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031197_2 "ess.renderable.texture.stencil.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031197, VkglTestCase_031197_1, VkglTestCase_031197_2);

#define VkglTestCase_031198_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031198_2 "ess.renderable.texture.stencil.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031198, VkglTestCase_031198_1, VkglTestCase_031198_2);

#define VkglTestCase_031199_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031199_2 "ness.renderable.texture.stencil.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031199, VkglTestCase_031199_1, VkglTestCase_031199_2);

#define VkglTestCase_031200_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031200_2 "ess.renderable.texture.stencil.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031200, VkglTestCase_031200_1, VkglTestCase_031200_2);

#define VkglTestCase_031201_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031201_2 "ess.renderable.texture.stencil.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031201, VkglTestCase_031201_1, VkglTestCase_031201_2);

#define VkglTestCase_031202_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031202_2 "ess.renderable.texture.stencil.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031202, VkglTestCase_031202_1, VkglTestCase_031202_2);

#define VkglTestCase_031203_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031203_2 "ess.renderable.texture.stencil.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031203, VkglTestCase_031203_1, VkglTestCase_031203_2);

#define VkglTestCase_031204_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031204_2 "ess.renderable.texture.stencil.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031204, VkglTestCase_031204_1, VkglTestCase_031204_2);

#define VkglTestCase_031205_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031205_2 "ess.renderable.texture.stencil.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031205, VkglTestCase_031205_1, VkglTestCase_031205_2);

#define VkglTestCase_031206_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031206_2 "ess.renderable.texture.stencil.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031206, VkglTestCase_031206_1, VkglTestCase_031206_2);

#define VkglTestCase_031207_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031207_2 "ess.renderable.texture.stencil.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031207, VkglTestCase_031207_1, VkglTestCase_031207_2);

#define VkglTestCase_031208_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031208_2 "ss.renderable.texture.stencil.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031208, VkglTestCase_031208_1, VkglTestCase_031208_2);

#define VkglTestCase_031209_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031209_2 "ess.renderable.texture.stencil.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031209, VkglTestCase_031209_1, VkglTestCase_031209_2);

#define VkglTestCase_031210_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031210_2 "ss.renderable.texture.stencil.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031210, VkglTestCase_031210_1, VkglTestCase_031210_2);

#define VkglTestCase_031211_1 "dEQP-GLES3.functional.fbo.completeness.renderabl"
#define VkglTestCase_031211_2 "e.texture.stencil.depth_stencil_unsigned_int_24_8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031211, VkglTestCase_031211_1, VkglTestCase_031211_2);

#define VkglTestCase_031212_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031212_2 "ss.renderable.texture.stencil.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031212, VkglTestCase_031212_1, VkglTestCase_031212_2);

#define VkglTestCase_031213_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031213_2 "ss.renderable.texture.stencil.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031213, VkglTestCase_031213_1, VkglTestCase_031213_2);

#define VkglTestCase_031214_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031214_2 "ss.renderable.texture.stencil.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031214, VkglTestCase_031214_1, VkglTestCase_031214_2);

#define VkglTestCase_031215_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031215_2 "nderable.texture.stencil.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031215, VkglTestCase_031215_1, VkglTestCase_031215_2);

#define VkglTestCase_031216_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031216_2 "enderable.texture.stencil.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031216, VkglTestCase_031216_1, VkglTestCase_031216_2);

#define VkglTestCase_031217_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031217_2 "ss.renderable.texture.stencil.rgb9_e5"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031217, VkglTestCase_031217_1, VkglTestCase_031217_2);

#define VkglTestCase_031218_1 "dEQP-GLES3.functional.fbo.completeness.ren"
#define VkglTestCase_031218_2 "derable.texture.stencil.srgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031218, VkglTestCase_031218_1, VkglTestCase_031218_2);

#define VkglTestCase_031219_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031219_2 "ess.renderable.texture.stencil.srgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031219, VkglTestCase_031219_1, VkglTestCase_031219_2);

#define VkglTestCase_031220_1 "dEQP-GLES3.functional.fbo.completeness.render"
#define VkglTestCase_031220_2 "able.texture.stencil.srgb_alpha_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031220, VkglTestCase_031220_1, VkglTestCase_031220_2);

#define VkglTestCase_031221_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031221_2 "renderable.texture.stencil.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031221, VkglTestCase_031221_1, VkglTestCase_031221_2);

#define VkglTestCase_031222_1 "dEQP-GLES3.functional.fbo.completeness.ren"
#define VkglTestCase_031222_2 "derable.texture.stencil.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031222, VkglTestCase_031222_1, VkglTestCase_031222_2);

#define VkglTestCase_031223_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031223_2 "nderable.texture.stencil.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031223, VkglTestCase_031223_1, VkglTestCase_031223_2);

#define VkglTestCase_031224_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031224_2 "enderable.texture.stencil.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031224, VkglTestCase_031224_1, VkglTestCase_031224_2);

#define VkglTestCase_031225_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031225_2 "ss.renderable.texture.stencil.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031225, VkglTestCase_031225_1, VkglTestCase_031225_2);

#define VkglTestCase_031226_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031226_2 "s.renderable.texture.stencil.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031226, VkglTestCase_031226_1, VkglTestCase_031226_2);

#define VkglTestCase_031227_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031227_2 "ss.renderable.texture.stencil.rgb32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031227, VkglTestCase_031227_1, VkglTestCase_031227_2);

#define VkglTestCase_031228_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031228_2 "s.renderable.texture.stencil.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031228, VkglTestCase_031228_1, VkglTestCase_031228_2);

#define VkglTestCase_031229_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031229_2 "ss.renderable.texture.stencil.rgb16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031229, VkglTestCase_031229_1, VkglTestCase_031229_2);

#define VkglTestCase_031230_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031230_2 "ss.renderable.texture.stencil.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031230, VkglTestCase_031230_1, VkglTestCase_031230_2);

#define VkglTestCase_031231_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031231_2 "ss.renderable.texture.stencil.rgb8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031231, VkglTestCase_031231_1, VkglTestCase_031231_2);

#define VkglTestCase_031232_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031232_2 "ss.renderable.texture.stencil.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031232, VkglTestCase_031232_1, VkglTestCase_031232_2);

#define VkglTestCase_031233_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031233_2 "ss.renderable.texture.stencil.rgb32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031233, VkglTestCase_031233_1, VkglTestCase_031233_2);

#define VkglTestCase_031234_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031234_2 "ss.renderable.texture.stencil.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031234, VkglTestCase_031234_1, VkglTestCase_031234_2);

#define VkglTestCase_031235_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031235_2 "ss.renderable.texture.stencil.rgb16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031235, VkglTestCase_031235_1, VkglTestCase_031235_2);

#define VkglTestCase_031236_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031236_2 "ss.renderable.texture.stencil.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031236, VkglTestCase_031236_1, VkglTestCase_031236_2);

#define VkglTestCase_031237_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031237_2 "ess.renderable.texture.stencil.rgb8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031237, VkglTestCase_031237_1, VkglTestCase_031237_2);

#define VkglTestCase_031238_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031238_2 "s.renderable.texture.stencil.r8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031238, VkglTestCase_031238_1, VkglTestCase_031238_2);

#define VkglTestCase_031239_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031239_2 "s.renderable.texture.stencil.rg8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031239, VkglTestCase_031239_1, VkglTestCase_031239_2);

#define VkglTestCase_031240_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031240_2 ".renderable.texture.stencil.rgb8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031240, VkglTestCase_031240_1, VkglTestCase_031240_2);

#define VkglTestCase_031241_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031241_2 ".renderable.texture.stencil.rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031241, VkglTestCase_031241_1, VkglTestCase_031241_2);

#define VkglTestCase_031242_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031242_2 "ss.renderable.texture.stencil.sr8_ext"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031242, VkglTestCase_031242_1, VkglTestCase_031242_2);

#define VkglTestCase_031243_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031243_2 "s.renderable.texture.stencil.srg8_ext"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031243, VkglTestCase_031243_1, VkglTestCase_031243_2);

#define VkglTestCase_031244_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031244_2 ".renderable.texture.stencil.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031244, VkglTestCase_031244_1, VkglTestCase_031244_2);
