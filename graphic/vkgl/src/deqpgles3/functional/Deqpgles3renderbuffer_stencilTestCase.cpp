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

#define VkglTestCase_030938_1 "dEQP-GLES3.functional.fbo.completeness.renderable."
#define VkglTestCase_030938_2 "renderbuffer.stencil.depth_component_unsigned_short"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030938, VkglTestCase_030938_1, VkglTestCase_030938_2);

#define VkglTestCase_030939_1 "dEQP-GLES3.functional.fbo.completeness.renderable"
#define VkglTestCase_030939_2 ".renderbuffer.stencil.depth_component_unsigned_int"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030939, VkglTestCase_030939_1, VkglTestCase_030939_2);

#define VkglTestCase_030940_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030940_2 "rable.renderbuffer.stencil.red_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030940, VkglTestCase_030940_1, VkglTestCase_030940_2);

#define VkglTestCase_030941_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_030941_2 "enderable.renderbuffer.stencil.red_float"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030941, VkglTestCase_030941_1, VkglTestCase_030941_2);

#define VkglTestCase_030942_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030942_2 "rable.renderbuffer.stencil.red_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030942, VkglTestCase_030942_1, VkglTestCase_030942_2);

#define VkglTestCase_030943_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030943_2 "rable.renderbuffer.stencil.rgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030943, VkglTestCase_030943_1, VkglTestCase_030943_2);

#define VkglTestCase_030944_1 "dEQP-GLES3.functional.fbo.completeness.renderab"
#define VkglTestCase_030944_2 "le.renderbuffer.stencil.rgb_unsigned_short_5_6_5"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030944, VkglTestCase_030944_1, VkglTestCase_030944_2);

#define VkglTestCase_030945_1 "dEQP-GLES3.functional.fbo.completeness.renderable.r"
#define VkglTestCase_030945_2 "enderbuffer.stencil.rgb_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030945, VkglTestCase_030945_1, VkglTestCase_030945_2);

#define VkglTestCase_030946_1 "dEQP-GLES3.functional.fbo.completeness.renderable.r"
#define VkglTestCase_030946_2 "enderbuffer.stencil.rgb_unsigned_int_10f_11f_11f_rev"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030946, VkglTestCase_030946_1, VkglTestCase_030946_2);

#define VkglTestCase_030947_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030947_2 "rable.renderbuffer.stencil.rgba_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030947, VkglTestCase_030947_1, VkglTestCase_030947_2);

#define VkglTestCase_030948_1 "dEQP-GLES3.functional.fbo.completeness.renderable"
#define VkglTestCase_030948_2 ".renderbuffer.stencil.rgba_unsigned_short_4_4_4_4"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030948, VkglTestCase_030948_1, VkglTestCase_030948_2);

#define VkglTestCase_030949_1 "dEQP-GLES3.functional.fbo.completeness.renderable"
#define VkglTestCase_030949_2 ".renderbuffer.stencil.rgba_unsigned_short_5_5_5_1"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030949, VkglTestCase_030949_1, VkglTestCase_030949_2);

#define VkglTestCase_030950_1 "dEQP-GLES3.functional.fbo.completeness.renderable.r"
#define VkglTestCase_030950_2 "enderbuffer.stencil.rgba_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030950, VkglTestCase_030950_1, VkglTestCase_030950_2);

#define VkglTestCase_030951_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030951_2 "s.renderable.renderbuffer.stencil.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030951, VkglTestCase_030951_1, VkglTestCase_030951_2);

#define VkglTestCase_030952_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030952_2 ".renderable.renderbuffer.stencil.rgb10"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030952, VkglTestCase_030952_1, VkglTestCase_030952_2);

#define VkglTestCase_030953_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030953_2 ".renderable.renderbuffer.stencil.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030953, VkglTestCase_030953_1, VkglTestCase_030953_2);

#define VkglTestCase_030954_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030954_2 "renderable.renderbuffer.stencil.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030954, VkglTestCase_030954_1, VkglTestCase_030954_2);

#define VkglTestCase_030955_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030955_2 ".renderable.renderbuffer.stencil.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030955, VkglTestCase_030955_1, VkglTestCase_030955_2);

#define VkglTestCase_030956_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030956_2 "renderable.renderbuffer.stencil.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030956, VkglTestCase_030956_1, VkglTestCase_030956_2);

#define VkglTestCase_030957_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030957_2 "rable.renderbuffer.stencil.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030957, VkglTestCase_030957_1, VkglTestCase_030957_2);

#define VkglTestCase_030958_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030958_2 "rable.renderbuffer.stencil.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030958, VkglTestCase_030958_1, VkglTestCase_030958_2);

#define VkglTestCase_030959_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030959_2 "rable.renderbuffer.stencil.depth_component32"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030959, VkglTestCase_030959_1, VkglTestCase_030959_2);

#define VkglTestCase_030960_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_030960_2 "erable.renderbuffer.stencil.rg_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030960, VkglTestCase_030960_1, VkglTestCase_030960_2);

#define VkglTestCase_030961_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030961_2 "renderable.renderbuffer.stencil.rg_float"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030961, VkglTestCase_030961_1, VkglTestCase_030961_2);

#define VkglTestCase_030962_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030962_2 "rable.renderbuffer.stencil.rg_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030962, VkglTestCase_030962_1, VkglTestCase_030962_2);

#define VkglTestCase_030963_1 "dEQP-GLES3.functional.fbo.completene"
#define VkglTestCase_030963_2 "ss.renderable.renderbuffer.stencil.r8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030963, VkglTestCase_030963_1, VkglTestCase_030963_2);

#define VkglTestCase_030964_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030964_2 "s.renderable.renderbuffer.stencil.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030964, VkglTestCase_030964_1, VkglTestCase_030964_2);

#define VkglTestCase_030965_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030965_2 "s.renderable.renderbuffer.stencil.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030965, VkglTestCase_030965_1, VkglTestCase_030965_2);

#define VkglTestCase_030966_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030966_2 "s.renderable.renderbuffer.stencil.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030966, VkglTestCase_030966_1, VkglTestCase_030966_2);

#define VkglTestCase_030967_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030967_2 ".renderable.renderbuffer.stencil.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030967, VkglTestCase_030967_1, VkglTestCase_030967_2);

#define VkglTestCase_030968_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030968_2 ".renderable.renderbuffer.stencil.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030968, VkglTestCase_030968_1, VkglTestCase_030968_2);

#define VkglTestCase_030969_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030969_2 "s.renderable.renderbuffer.stencil.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030969, VkglTestCase_030969_1, VkglTestCase_030969_2);

#define VkglTestCase_030970_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030970_2 "s.renderable.renderbuffer.stencil.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030970, VkglTestCase_030970_1, VkglTestCase_030970_2);

#define VkglTestCase_030971_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030971_2 "s.renderable.renderbuffer.stencil.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030971, VkglTestCase_030971_1, VkglTestCase_030971_2);

#define VkglTestCase_030972_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030972_2 ".renderable.renderbuffer.stencil.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030972, VkglTestCase_030972_1, VkglTestCase_030972_2);

#define VkglTestCase_030973_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030973_2 "s.renderable.renderbuffer.stencil.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030973, VkglTestCase_030973_1, VkglTestCase_030973_2);

#define VkglTestCase_030974_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030974_2 ".renderable.renderbuffer.stencil.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030974, VkglTestCase_030974_1, VkglTestCase_030974_2);

#define VkglTestCase_030975_1 "dEQP-GLES3.functional.fbo.completenes"
#define VkglTestCase_030975_2 "s.renderable.renderbuffer.stencil.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030975, VkglTestCase_030975_1, VkglTestCase_030975_2);

#define VkglTestCase_030976_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030976_2 ".renderable.renderbuffer.stencil.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030976, VkglTestCase_030976_1, VkglTestCase_030976_2);

#define VkglTestCase_030977_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030977_2 ".renderable.renderbuffer.stencil.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030977, VkglTestCase_030977_1, VkglTestCase_030977_2);

#define VkglTestCase_030978_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030978_2 ".renderable.renderbuffer.stencil.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030978, VkglTestCase_030978_1, VkglTestCase_030978_2);

#define VkglTestCase_030979_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030979_2 ".renderable.renderbuffer.stencil.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030979, VkglTestCase_030979_1, VkglTestCase_030979_2);

#define VkglTestCase_030980_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030980_2 ".renderable.renderbuffer.stencil.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030980, VkglTestCase_030980_1, VkglTestCase_030980_2);

#define VkglTestCase_030981_1 "dEQP-GLES3.functional.fbo.completeness.renderable.r"
#define VkglTestCase_030981_2 "enderbuffer.stencil.depth_stencil_unsigned_int_24_8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030981, VkglTestCase_030981_1, VkglTestCase_030981_2);

#define VkglTestCase_030982_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030982_2 "renderable.renderbuffer.stencil.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030982, VkglTestCase_030982_1, VkglTestCase_030982_2);

#define VkglTestCase_030983_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030983_2 "renderable.renderbuffer.stencil.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030983, VkglTestCase_030983_1, VkglTestCase_030983_2);

#define VkglTestCase_030984_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030984_2 ".renderable.renderbuffer.stencil.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030984, VkglTestCase_030984_1, VkglTestCase_030984_2);

#define VkglTestCase_030985_1 "dEQP-GLES3.functional.fbo.completeness.rend"
#define VkglTestCase_030985_2 "erable.renderbuffer.stencil.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030985, VkglTestCase_030985_1, VkglTestCase_030985_2);

#define VkglTestCase_030986_1 "dEQP-GLES3.functional.fbo.completeness.ren"
#define VkglTestCase_030986_2 "derable.renderbuffer.stencil.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030986, VkglTestCase_030986_1, VkglTestCase_030986_2);

#define VkglTestCase_030987_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030987_2 "renderable.renderbuffer.stencil.rgb9_e5"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030987, VkglTestCase_030987_1, VkglTestCase_030987_2);

#define VkglTestCase_030988_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030988_2 "rable.renderbuffer.stencil.srgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030988, VkglTestCase_030988_1, VkglTestCase_030988_2);

#define VkglTestCase_030989_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030989_2 ".renderable.renderbuffer.stencil.srgb8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030989, VkglTestCase_030989_1, VkglTestCase_030989_2);

#define VkglTestCase_030990_1 "dEQP-GLES3.functional.fbo.completeness.renderab"
#define VkglTestCase_030990_2 "le.renderbuffer.stencil.srgb_alpha_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030990, VkglTestCase_030990_1, VkglTestCase_030990_2);

#define VkglTestCase_030991_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_030991_2 "nderable.renderbuffer.stencil.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030991, VkglTestCase_030991_1, VkglTestCase_030991_2);

#define VkglTestCase_030992_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030992_2 "rable.renderbuffer.stencil.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030992, VkglTestCase_030992_1, VkglTestCase_030992_2);

#define VkglTestCase_030993_1 "dEQP-GLES3.functional.fbo.completeness.rende"
#define VkglTestCase_030993_2 "rable.renderbuffer.stencil.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030993, VkglTestCase_030993_1, VkglTestCase_030993_2);

#define VkglTestCase_030994_1 "dEQP-GLES3.functional.fbo.completeness.ren"
#define VkglTestCase_030994_2 "derable.renderbuffer.stencil.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030994, VkglTestCase_030994_1, VkglTestCase_030994_2);

#define VkglTestCase_030995_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_030995_2 ".renderable.renderbuffer.stencil.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030995, VkglTestCase_030995_1, VkglTestCase_030995_2);

#define VkglTestCase_030996_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030996_2 "renderable.renderbuffer.stencil.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030996, VkglTestCase_030996_1, VkglTestCase_030996_2);

#define VkglTestCase_030997_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030997_2 "renderable.renderbuffer.stencil.rgb32ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030997, VkglTestCase_030997_1, VkglTestCase_030997_2);

#define VkglTestCase_030998_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030998_2 "renderable.renderbuffer.stencil.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030998, VkglTestCase_030998_1, VkglTestCase_030998_2);

#define VkglTestCase_030999_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_030999_2 "renderable.renderbuffer.stencil.rgb16ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030999, VkglTestCase_030999_1, VkglTestCase_030999_2);

#define VkglTestCase_031000_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031000_2 "renderable.renderbuffer.stencil.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031000, VkglTestCase_031000_1, VkglTestCase_031000_2);

#define VkglTestCase_031001_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031001_2 ".renderable.renderbuffer.stencil.rgb8ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031001, VkglTestCase_031001_1, VkglTestCase_031001_2);

#define VkglTestCase_031002_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031002_2 "renderable.renderbuffer.stencil.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031002, VkglTestCase_031002_1, VkglTestCase_031002_2);

#define VkglTestCase_031003_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031003_2 ".renderable.renderbuffer.stencil.rgb32i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031003, VkglTestCase_031003_1, VkglTestCase_031003_2);

#define VkglTestCase_031004_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031004_2 "renderable.renderbuffer.stencil.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031004, VkglTestCase_031004_1, VkglTestCase_031004_2);

#define VkglTestCase_031005_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031005_2 ".renderable.renderbuffer.stencil.rgb16i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031005, VkglTestCase_031005_1, VkglTestCase_031005_2);

#define VkglTestCase_031006_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031006_2 ".renderable.renderbuffer.stencil.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031006, VkglTestCase_031006_1, VkglTestCase_031006_2);

#define VkglTestCase_031007_1 "dEQP-GLES3.functional.fbo.completeness"
#define VkglTestCase_031007_2 ".renderable.renderbuffer.stencil.rgb8i"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031007, VkglTestCase_031007_1, VkglTestCase_031007_2);

#define VkglTestCase_031008_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031008_2 "renderable.renderbuffer.stencil.r8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031008, VkglTestCase_031008_1, VkglTestCase_031008_2);

#define VkglTestCase_031009_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031009_2 "enderable.renderbuffer.stencil.rg8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031009, VkglTestCase_031009_1, VkglTestCase_031009_2);

#define VkglTestCase_031010_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031010_2 "enderable.renderbuffer.stencil.rgb8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031010, VkglTestCase_031010_1, VkglTestCase_031010_2);

#define VkglTestCase_031011_1 "dEQP-GLES3.functional.fbo.completeness.re"
#define VkglTestCase_031011_2 "nderable.renderbuffer.stencil.rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031011, VkglTestCase_031011_1, VkglTestCase_031011_2);

#define VkglTestCase_031012_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031012_2 "renderable.renderbuffer.stencil.sr8_ext"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031012, VkglTestCase_031012_1, VkglTestCase_031012_2);

#define VkglTestCase_031013_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031013_2 "renderable.renderbuffer.stencil.srg8_ext"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031013, VkglTestCase_031013_1, VkglTestCase_031013_2);

#define VkglTestCase_031014_1 "dEQP-GLES3.functional.fbo.completeness.r"
#define VkglTestCase_031014_2 "enderable.renderbuffer.stencil.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_031014, VkglTestCase_031014_1, VkglTestCase_031014_2);
