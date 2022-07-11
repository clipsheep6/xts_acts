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

#define VkglTestCase_031245_1 "dEQP-GLES3.functional.fbo.completeness.renderab"
#define VkglTestCase_031245_2 "le.texture.depth.depth_component_unsigned_short"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031245, VkglTestCase_031245_1, VkglTestCase_031245_2);

#define VkglTestCase_031246_1 "dEQP-GLES3.functional.fbo.completeness.rendera"
#define VkglTestCase_031246_2 "ble.texture.depth.depth_component_unsigned_int"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031246, VkglTestCase_031246_1, VkglTestCase_031246_2);

#define VkglTestCase_031247_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031247_2 "enderable.texture.depth.red_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031247, VkglTestCase_031247_1, VkglTestCase_031247_2);

#define VkglTestCase_031248_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031248_2 "ss.renderable.texture.depth.red_float"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031248, VkglTestCase_031248_1, VkglTestCase_031248_2);

#define VkglTestCase_031249_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031249_2 "nderable.texture.depth.red_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031249, VkglTestCase_031249_1, VkglTestCase_031249_2);

#define VkglTestCase_031250_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031250_2 "enderable.texture.depth.rgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031250, VkglTestCase_031250_1, VkglTestCase_031250_2);

#define VkglTestCase_031251_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_031251_2 "rable.texture.depth.rgb_unsigned_short_5_6_5"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031251, VkglTestCase_031251_1, VkglTestCase_031251_2);

#define VkglTestCase_031252_1 "dEQP-GLES3.functional.fbo.completeness.renderab"
#define VkglTestCase_031252_2 "le.texture.depth.rgb_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031252, VkglTestCase_031252_1, VkglTestCase_031252_2);

#define VkglTestCase_031253_1 "dEQP-GLES3.functional.fbo.completeness.renderabl"
#define VkglTestCase_031253_2 "e.texture.depth.rgb_unsigned_int_10f_11f_11f_rev"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031253, VkglTestCase_031253_1, VkglTestCase_031253_2);

#define VkglTestCase_031254_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031254_2 "nderable.texture.depth.rgba_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031254, VkglTestCase_031254_1, VkglTestCase_031254_2);

#define VkglTestCase_031255_1 "dEQP-GLES3.functional.fbo.completeness.render"
#define VkglTestCase_031255_2 "able.texture.depth.rgba_unsigned_short_4_4_4_4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031255, VkglTestCase_031255_1, VkglTestCase_031255_2);

#define VkglTestCase_031256_1 "dEQP-GLES3.functional.fbo.completeness.render"
#define VkglTestCase_031256_2 "able.texture.depth.rgba_unsigned_short_5_5_5_1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031256, VkglTestCase_031256_1, VkglTestCase_031256_2);

#define VkglTestCase_031257_1 "dEQP-GLES3.functional.fbo.completeness.renderabl"
#define VkglTestCase_031257_2 "e.texture.depth.rgba_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031257, VkglTestCase_031257_1, VkglTestCase_031257_2);

#define VkglTestCase_031258_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031258_2 "ness.renderable.texture.depth.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031258, VkglTestCase_031258_1, VkglTestCase_031258_2);

#define VkglTestCase_031259_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031259_2 "ness.renderable.texture.depth.rgb10"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031259, VkglTestCase_031259_1, VkglTestCase_031259_2);

#define VkglTestCase_031260_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031260_2 "ness.renderable.texture.depth.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031260, VkglTestCase_031260_1, VkglTestCase_031260_2);

#define VkglTestCase_031261_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031261_2 "ess.renderable.texture.depth.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031261, VkglTestCase_031261_1, VkglTestCase_031261_2);

#define VkglTestCase_031262_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031262_2 "ness.renderable.texture.depth.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031262, VkglTestCase_031262_1, VkglTestCase_031262_2);

#define VkglTestCase_031263_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031263_2 "ss.renderable.texture.depth.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031263, VkglTestCase_031263_1, VkglTestCase_031263_2);

#define VkglTestCase_031264_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031264_2 "enderable.texture.depth.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031264, VkglTestCase_031264_1, VkglTestCase_031264_2);

#define VkglTestCase_031265_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031265_2 "enderable.texture.depth.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031265, VkglTestCase_031265_1, VkglTestCase_031265_2);

#define VkglTestCase_031266_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031266_2 "enderable.texture.depth.depth_component32"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031266, VkglTestCase_031266_1, VkglTestCase_031266_2);

#define VkglTestCase_031267_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031267_2 "enderable.texture.depth.rg_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031267, VkglTestCase_031267_1, VkglTestCase_031267_2);

#define VkglTestCase_031268_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031268_2 "ss.renderable.texture.depth.rg_float"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031268, VkglTestCase_031268_1, VkglTestCase_031268_2);

#define VkglTestCase_031269_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031269_2 "enderable.texture.depth.rg_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031269, VkglTestCase_031269_1, VkglTestCase_031269_2);

#define VkglTestCase_031270_1 "dEQP-GLES3.functional.fbo.complet"
#define VkglTestCase_031270_2 "eness.renderable.texture.depth.r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031270, VkglTestCase_031270_1, VkglTestCase_031270_2);

#define VkglTestCase_031271_1 "dEQP-GLES3.functional.fbo.complet"
#define VkglTestCase_031271_2 "eness.renderable.texture.depth.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031271, VkglTestCase_031271_1, VkglTestCase_031271_2);

#define VkglTestCase_031272_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031272_2 "ness.renderable.texture.depth.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031272, VkglTestCase_031272_1, VkglTestCase_031272_2);

#define VkglTestCase_031273_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031273_2 "ness.renderable.texture.depth.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031273, VkglTestCase_031273_1, VkglTestCase_031273_2);

#define VkglTestCase_031274_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031274_2 "ness.renderable.texture.depth.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031274, VkglTestCase_031274_1, VkglTestCase_031274_2);

#define VkglTestCase_031275_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031275_2 "ness.renderable.texture.depth.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031275, VkglTestCase_031275_1, VkglTestCase_031275_2);

#define VkglTestCase_031276_1 "dEQP-GLES3.functional.fbo.complet"
#define VkglTestCase_031276_2 "eness.renderable.texture.depth.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031276, VkglTestCase_031276_1, VkglTestCase_031276_2);

#define VkglTestCase_031277_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031277_2 "ness.renderable.texture.depth.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031277, VkglTestCase_031277_1, VkglTestCase_031277_2);

#define VkglTestCase_031278_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031278_2 "ness.renderable.texture.depth.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031278, VkglTestCase_031278_1, VkglTestCase_031278_2);

#define VkglTestCase_031279_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031279_2 "ness.renderable.texture.depth.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031279, VkglTestCase_031279_1, VkglTestCase_031279_2);

#define VkglTestCase_031280_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031280_2 "ness.renderable.texture.depth.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031280, VkglTestCase_031280_1, VkglTestCase_031280_2);

#define VkglTestCase_031281_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031281_2 "ness.renderable.texture.depth.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031281, VkglTestCase_031281_1, VkglTestCase_031281_2);

#define VkglTestCase_031282_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031282_2 "ness.renderable.texture.depth.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031282, VkglTestCase_031282_1, VkglTestCase_031282_2);

#define VkglTestCase_031283_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031283_2 "ness.renderable.texture.depth.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031283, VkglTestCase_031283_1, VkglTestCase_031283_2);

#define VkglTestCase_031284_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031284_2 "ness.renderable.texture.depth.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031284, VkglTestCase_031284_1, VkglTestCase_031284_2);

#define VkglTestCase_031285_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031285_2 "ess.renderable.texture.depth.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031285, VkglTestCase_031285_1, VkglTestCase_031285_2);

#define VkglTestCase_031286_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031286_2 "ness.renderable.texture.depth.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031286, VkglTestCase_031286_1, VkglTestCase_031286_2);

#define VkglTestCase_031287_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031287_2 "ess.renderable.texture.depth.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031287, VkglTestCase_031287_1, VkglTestCase_031287_2);

#define VkglTestCase_031288_1 "dEQP-GLES3.functional.fbo.completeness.renderab"
#define VkglTestCase_031288_2 "le.texture.depth.depth_stencil_unsigned_int_24_8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031288, VkglTestCase_031288_1, VkglTestCase_031288_2);

#define VkglTestCase_031289_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031289_2 "ess.renderable.texture.depth.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031289, VkglTestCase_031289_1, VkglTestCase_031289_2);

#define VkglTestCase_031290_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031290_2 "ess.renderable.texture.depth.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031290, VkglTestCase_031290_1, VkglTestCase_031290_2);

#define VkglTestCase_031291_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031291_2 "ess.renderable.texture.depth.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031291, VkglTestCase_031291_1, VkglTestCase_031291_2);

#define VkglTestCase_031292_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031292_2 "enderable.texture.depth.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031292, VkglTestCase_031292_1, VkglTestCase_031292_2);

#define VkglTestCase_031293_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031293_2 "renderable.texture.depth.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031293, VkglTestCase_031293_1, VkglTestCase_031293_2);

#define VkglTestCase_031294_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031294_2 "ess.renderable.texture.depth.rgb9_e5"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031294, VkglTestCase_031294_1, VkglTestCase_031294_2);

#define VkglTestCase_031295_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031295_2 "nderable.texture.depth.srgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031295, VkglTestCase_031295_1, VkglTestCase_031295_2);

#define VkglTestCase_031296_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031296_2 "ness.renderable.texture.depth.srgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031296, VkglTestCase_031296_1, VkglTestCase_031296_2);

#define VkglTestCase_031297_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_031297_2 "rable.texture.depth.srgb_alpha_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031297, VkglTestCase_031297_1, VkglTestCase_031297_2);

#define VkglTestCase_031298_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031298_2 ".renderable.texture.depth.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031298, VkglTestCase_031298_1, VkglTestCase_031298_2);

#define VkglTestCase_031299_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031299_2 "nderable.texture.depth.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031299, VkglTestCase_031299_1, VkglTestCase_031299_2);

#define VkglTestCase_031300_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031300_2 "enderable.texture.depth.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031300, VkglTestCase_031300_1, VkglTestCase_031300_2);

#define VkglTestCase_031301_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031301_2 "renderable.texture.depth.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031301, VkglTestCase_031301_1, VkglTestCase_031301_2);

#define VkglTestCase_031302_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031302_2 "ess.renderable.texture.depth.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031302, VkglTestCase_031302_1, VkglTestCase_031302_2);

#define VkglTestCase_031303_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031303_2 "ss.renderable.texture.depth.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031303, VkglTestCase_031303_1, VkglTestCase_031303_2);

#define VkglTestCase_031304_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031304_2 "ess.renderable.texture.depth.rgb32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031304, VkglTestCase_031304_1, VkglTestCase_031304_2);

#define VkglTestCase_031305_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031305_2 "ss.renderable.texture.depth.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031305, VkglTestCase_031305_1, VkglTestCase_031305_2);

#define VkglTestCase_031306_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031306_2 "ess.renderable.texture.depth.rgb16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031306, VkglTestCase_031306_1, VkglTestCase_031306_2);

#define VkglTestCase_031307_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031307_2 "ess.renderable.texture.depth.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031307, VkglTestCase_031307_1, VkglTestCase_031307_2);

#define VkglTestCase_031308_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031308_2 "ess.renderable.texture.depth.rgb8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031308, VkglTestCase_031308_1, VkglTestCase_031308_2);

#define VkglTestCase_031309_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031309_2 "ess.renderable.texture.depth.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031309, VkglTestCase_031309_1, VkglTestCase_031309_2);

#define VkglTestCase_031310_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031310_2 "ess.renderable.texture.depth.rgb32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031310, VkglTestCase_031310_1, VkglTestCase_031310_2);

#define VkglTestCase_031311_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031311_2 "ess.renderable.texture.depth.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031311, VkglTestCase_031311_1, VkglTestCase_031311_2);

#define VkglTestCase_031312_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031312_2 "ess.renderable.texture.depth.rgb16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031312, VkglTestCase_031312_1, VkglTestCase_031312_2);

#define VkglTestCase_031313_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031313_2 "ess.renderable.texture.depth.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031313, VkglTestCase_031313_1, VkglTestCase_031313_2);

#define VkglTestCase_031314_1 "dEQP-GLES3.functional.fbo.complete"
#define VkglTestCase_031314_2 "ness.renderable.texture.depth.rgb8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031314, VkglTestCase_031314_1, VkglTestCase_031314_2);

#define VkglTestCase_031315_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031315_2 "ss.renderable.texture.depth.r8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031315, VkglTestCase_031315_1, VkglTestCase_031315_2);

#define VkglTestCase_031316_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031316_2 "ss.renderable.texture.depth.rg8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031316, VkglTestCase_031316_1, VkglTestCase_031316_2);

#define VkglTestCase_031317_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031317_2 "s.renderable.texture.depth.rgb8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031317, VkglTestCase_031317_1, VkglTestCase_031317_2);

#define VkglTestCase_031318_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031318_2 "s.renderable.texture.depth.rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031318, VkglTestCase_031318_1, VkglTestCase_031318_2);

#define VkglTestCase_031319_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031319_2 "ess.renderable.texture.depth.sr8_ext"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031319, VkglTestCase_031319_1, VkglTestCase_031319_2);

#define VkglTestCase_031320_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031320_2 "ss.renderable.texture.depth.srg8_ext"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031320, VkglTestCase_031320_1, VkglTestCase_031320_2);

#define VkglTestCase_031321_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031321_2 "s.renderable.texture.depth.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031321, VkglTestCase_031321_1, VkglTestCase_031321_2);
