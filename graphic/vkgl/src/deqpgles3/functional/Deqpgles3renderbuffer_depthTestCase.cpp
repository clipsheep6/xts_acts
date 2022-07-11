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

#define VkglTestCase_031015_1 "dEQP-GLES3.functional.fbo.completeness.renderable"
#define VkglTestCase_031015_2 ".renderbuffer.depth.depth_component_unsigned_short"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031015, VkglTestCase_031015_1, VkglTestCase_031015_2);

#define VkglTestCase_031016_1 "dEQP-GLES3.functional.fbo.completeness.renderabl"
#define VkglTestCase_031016_2 "e.renderbuffer.depth.depth_component_unsigned_int"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031016, VkglTestCase_031016_1, VkglTestCase_031016_2);

#define VkglTestCase_031017_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_031017_2 "erable.renderbuffer.depth.red_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031017, VkglTestCase_031017_1, VkglTestCase_031017_2);

#define VkglTestCase_031018_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031018_2 "renderable.renderbuffer.depth.red_float"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031018, VkglTestCase_031018_1, VkglTestCase_031018_2);

#define VkglTestCase_031019_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_031019_2 "erable.renderbuffer.depth.red_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031019, VkglTestCase_031019_1, VkglTestCase_031019_2);

#define VkglTestCase_031020_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_031020_2 "erable.renderbuffer.depth.rgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031020, VkglTestCase_031020_1, VkglTestCase_031020_2);

#define VkglTestCase_031021_1 "dEQP-GLES3.functional.fbo.completeness.rendera"
#define VkglTestCase_031021_2 "ble.renderbuffer.depth.rgb_unsigned_short_5_6_5"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031021, VkglTestCase_031021_1, VkglTestCase_031021_2);

#define VkglTestCase_031022_1 "dEQP-GLES3.functional.fbo.completeness.renderable."
#define VkglTestCase_031022_2 "renderbuffer.depth.rgb_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031022, VkglTestCase_031022_1, VkglTestCase_031022_2);

#define VkglTestCase_031023_1 "dEQP-GLES3.functional.fbo.completeness.renderable."
#define VkglTestCase_031023_2 "renderbuffer.depth.rgb_unsigned_int_10f_11f_11f_rev"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031023, VkglTestCase_031023_1, VkglTestCase_031023_2);

#define VkglTestCase_031024_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_031024_2 "erable.renderbuffer.depth.rgba_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031024, VkglTestCase_031024_1, VkglTestCase_031024_2);

#define VkglTestCase_031025_1 "dEQP-GLES3.functional.fbo.completeness.renderabl"
#define VkglTestCase_031025_2 "e.renderbuffer.depth.rgba_unsigned_short_4_4_4_4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031025, VkglTestCase_031025_1, VkglTestCase_031025_2);

#define VkglTestCase_031026_1 "dEQP-GLES3.functional.fbo.completeness.renderabl"
#define VkglTestCase_031026_2 "e.renderbuffer.depth.rgba_unsigned_short_5_5_5_1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031026, VkglTestCase_031026_1, VkglTestCase_031026_2);

#define VkglTestCase_031027_1 "dEQP-GLES3.functional.fbo.completeness.renderable."
#define VkglTestCase_031027_2 "renderbuffer.depth.rgba_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031027, VkglTestCase_031027_1, VkglTestCase_031027_2);

#define VkglTestCase_031028_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031028_2 "ss.renderable.renderbuffer.depth.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031028, VkglTestCase_031028_1, VkglTestCase_031028_2);

#define VkglTestCase_031029_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031029_2 "s.renderable.renderbuffer.depth.rgb10"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031029, VkglTestCase_031029_1, VkglTestCase_031029_2);

#define VkglTestCase_031030_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031030_2 "s.renderable.renderbuffer.depth.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031030, VkglTestCase_031030_1, VkglTestCase_031030_2);

#define VkglTestCase_031031_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031031_2 ".renderable.renderbuffer.depth.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031031, VkglTestCase_031031_1, VkglTestCase_031031_2);

#define VkglTestCase_031032_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031032_2 "s.renderable.renderbuffer.depth.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031032, VkglTestCase_031032_1, VkglTestCase_031032_2);

#define VkglTestCase_031033_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031033_2 ".renderable.renderbuffer.depth.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031033, VkglTestCase_031033_1, VkglTestCase_031033_2);

#define VkglTestCase_031034_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_031034_2 "erable.renderbuffer.depth.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031034, VkglTestCase_031034_1, VkglTestCase_031034_2);

#define VkglTestCase_031035_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_031035_2 "erable.renderbuffer.depth.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031035, VkglTestCase_031035_1, VkglTestCase_031035_2);

#define VkglTestCase_031036_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_031036_2 "erable.renderbuffer.depth.depth_component32"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031036, VkglTestCase_031036_1, VkglTestCase_031036_2);

#define VkglTestCase_031037_1 "dEQP-GLES3.functional.fbo.completeness.ren"
#define VkglTestCase_031037_2 "derable.renderbuffer.depth.rg_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031037, VkglTestCase_031037_1, VkglTestCase_031037_2);

#define VkglTestCase_031038_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031038_2 ".renderable.renderbuffer.depth.rg_float"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031038, VkglTestCase_031038_1, VkglTestCase_031038_2);

#define VkglTestCase_031039_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_031039_2 "erable.renderbuffer.depth.rg_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031039, VkglTestCase_031039_1, VkglTestCase_031039_2);

#define VkglTestCase_031040_1 "dEQP-GLES3.functional.fbo.completen"
#define VkglTestCase_031040_2 "ess.renderable.renderbuffer.depth.r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031040, VkglTestCase_031040_1, VkglTestCase_031040_2);

#define VkglTestCase_031041_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031041_2 "ss.renderable.renderbuffer.depth.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031041, VkglTestCase_031041_1, VkglTestCase_031041_2);

#define VkglTestCase_031042_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031042_2 "ss.renderable.renderbuffer.depth.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031042, VkglTestCase_031042_1, VkglTestCase_031042_2);

#define VkglTestCase_031043_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031043_2 "ss.renderable.renderbuffer.depth.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031043, VkglTestCase_031043_1, VkglTestCase_031043_2);

#define VkglTestCase_031044_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031044_2 "s.renderable.renderbuffer.depth.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031044, VkglTestCase_031044_1, VkglTestCase_031044_2);

#define VkglTestCase_031045_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031045_2 "s.renderable.renderbuffer.depth.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031045, VkglTestCase_031045_1, VkglTestCase_031045_2);

#define VkglTestCase_031046_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031046_2 "ss.renderable.renderbuffer.depth.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031046, VkglTestCase_031046_1, VkglTestCase_031046_2);

#define VkglTestCase_031047_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031047_2 "ss.renderable.renderbuffer.depth.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031047, VkglTestCase_031047_1, VkglTestCase_031047_2);

#define VkglTestCase_031048_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031048_2 "ss.renderable.renderbuffer.depth.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031048, VkglTestCase_031048_1, VkglTestCase_031048_2);

#define VkglTestCase_031049_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031049_2 "s.renderable.renderbuffer.depth.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031049, VkglTestCase_031049_1, VkglTestCase_031049_2);

#define VkglTestCase_031050_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031050_2 "ss.renderable.renderbuffer.depth.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031050, VkglTestCase_031050_1, VkglTestCase_031050_2);

#define VkglTestCase_031051_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031051_2 "s.renderable.renderbuffer.depth.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031051, VkglTestCase_031051_1, VkglTestCase_031051_2);

#define VkglTestCase_031052_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_031052_2 "ss.renderable.renderbuffer.depth.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031052, VkglTestCase_031052_1, VkglTestCase_031052_2);

#define VkglTestCase_031053_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031053_2 "s.renderable.renderbuffer.depth.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031053, VkglTestCase_031053_1, VkglTestCase_031053_2);

#define VkglTestCase_031054_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031054_2 "s.renderable.renderbuffer.depth.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031054, VkglTestCase_031054_1, VkglTestCase_031054_2);

#define VkglTestCase_031055_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031055_2 "s.renderable.renderbuffer.depth.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031055, VkglTestCase_031055_1, VkglTestCase_031055_2);

#define VkglTestCase_031056_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031056_2 "s.renderable.renderbuffer.depth.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031056, VkglTestCase_031056_1, VkglTestCase_031056_2);

#define VkglTestCase_031057_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031057_2 "s.renderable.renderbuffer.depth.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031057, VkglTestCase_031057_1, VkglTestCase_031057_2);

#define VkglTestCase_031058_1 "dEQP-GLES3.functional.fbo.completeness.renderable."
#define VkglTestCase_031058_2 "renderbuffer.depth.depth_stencil_unsigned_int_24_8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031058, VkglTestCase_031058_1, VkglTestCase_031058_2);

#define VkglTestCase_031059_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031059_2 ".renderable.renderbuffer.depth.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031059, VkglTestCase_031059_1, VkglTestCase_031059_2);

#define VkglTestCase_031060_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031060_2 ".renderable.renderbuffer.depth.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031060, VkglTestCase_031060_1, VkglTestCase_031060_2);

#define VkglTestCase_031061_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031061_2 "s.renderable.renderbuffer.depth.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031061, VkglTestCase_031061_1, VkglTestCase_031061_2);

#define VkglTestCase_031062_1 "dEQP-GLES3.functional.fbo.completeness.ren"
#define VkglTestCase_031062_2 "derable.renderbuffer.depth.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031062, VkglTestCase_031062_1, VkglTestCase_031062_2);

#define VkglTestCase_031063_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031063_2 "nderable.renderbuffer.depth.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031063, VkglTestCase_031063_1, VkglTestCase_031063_2);

#define VkglTestCase_031064_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031064_2 ".renderable.renderbuffer.depth.rgb9_e5"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031064, VkglTestCase_031064_1, VkglTestCase_031064_2);

#define VkglTestCase_031065_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_031065_2 "erable.renderbuffer.depth.srgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031065, VkglTestCase_031065_1, VkglTestCase_031065_2);

#define VkglTestCase_031066_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031066_2 "s.renderable.renderbuffer.depth.srgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031066, VkglTestCase_031066_1, VkglTestCase_031066_2);

#define VkglTestCase_031067_1 "dEQP-GLES3.functional.fbo.completeness.rendera"
#define VkglTestCase_031067_2 "ble.renderbuffer.depth.srgb_alpha_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031067, VkglTestCase_031067_1, VkglTestCase_031067_2);

#define VkglTestCase_031068_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031068_2 "enderable.renderbuffer.depth.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031068, VkglTestCase_031068_1, VkglTestCase_031068_2);

#define VkglTestCase_031069_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_031069_2 "erable.renderbuffer.depth.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031069, VkglTestCase_031069_1, VkglTestCase_031069_2);

#define VkglTestCase_031070_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_031070_2 "erable.renderbuffer.depth.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031070, VkglTestCase_031070_1, VkglTestCase_031070_2);

#define VkglTestCase_031071_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031071_2 "nderable.renderbuffer.depth.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031071, VkglTestCase_031071_1, VkglTestCase_031071_2);

#define VkglTestCase_031072_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031072_2 "s.renderable.renderbuffer.depth.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031072, VkglTestCase_031072_1, VkglTestCase_031072_2);

#define VkglTestCase_031073_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031073_2 ".renderable.renderbuffer.depth.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031073, VkglTestCase_031073_1, VkglTestCase_031073_2);

#define VkglTestCase_031074_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031074_2 ".renderable.renderbuffer.depth.rgb32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031074, VkglTestCase_031074_1, VkglTestCase_031074_2);

#define VkglTestCase_031075_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031075_2 ".renderable.renderbuffer.depth.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031075, VkglTestCase_031075_1, VkglTestCase_031075_2);

#define VkglTestCase_031076_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031076_2 ".renderable.renderbuffer.depth.rgb16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031076, VkglTestCase_031076_1, VkglTestCase_031076_2);

#define VkglTestCase_031077_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031077_2 ".renderable.renderbuffer.depth.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031077, VkglTestCase_031077_1, VkglTestCase_031077_2);

#define VkglTestCase_031078_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031078_2 "s.renderable.renderbuffer.depth.rgb8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031078, VkglTestCase_031078_1, VkglTestCase_031078_2);

#define VkglTestCase_031079_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031079_2 ".renderable.renderbuffer.depth.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031079, VkglTestCase_031079_1, VkglTestCase_031079_2);

#define VkglTestCase_031080_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031080_2 "s.renderable.renderbuffer.depth.rgb32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031080, VkglTestCase_031080_1, VkglTestCase_031080_2);

#define VkglTestCase_031081_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031081_2 ".renderable.renderbuffer.depth.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031081, VkglTestCase_031081_1, VkglTestCase_031081_2);

#define VkglTestCase_031082_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031082_2 "s.renderable.renderbuffer.depth.rgb16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031082, VkglTestCase_031082_1, VkglTestCase_031082_2);

#define VkglTestCase_031083_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031083_2 "s.renderable.renderbuffer.depth.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031083, VkglTestCase_031083_1, VkglTestCase_031083_2);

#define VkglTestCase_031084_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_031084_2 "s.renderable.renderbuffer.depth.rgb8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031084, VkglTestCase_031084_1, VkglTestCase_031084_2);

#define VkglTestCase_031085_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031085_2 ".renderable.renderbuffer.depth.r8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031085, VkglTestCase_031085_1, VkglTestCase_031085_2);

#define VkglTestCase_031086_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031086_2 "renderable.renderbuffer.depth.rg8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031086, VkglTestCase_031086_1, VkglTestCase_031086_2);

#define VkglTestCase_031087_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031087_2 "renderable.renderbuffer.depth.rgb8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031087, VkglTestCase_031087_1, VkglTestCase_031087_2);

#define VkglTestCase_031088_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031088_2 "enderable.renderbuffer.depth.rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031088, VkglTestCase_031088_1, VkglTestCase_031088_2);

#define VkglTestCase_031089_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031089_2 ".renderable.renderbuffer.depth.sr8_ext"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031089, VkglTestCase_031089_1, VkglTestCase_031089_2);

#define VkglTestCase_031090_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031090_2 ".renderable.renderbuffer.depth.srg8_ext"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031090, VkglTestCase_031090_1, VkglTestCase_031090_2);

#define VkglTestCase_031091_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031091_2 "renderable.renderbuffer.depth.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031091, VkglTestCase_031091_1, VkglTestCase_031091_2);
