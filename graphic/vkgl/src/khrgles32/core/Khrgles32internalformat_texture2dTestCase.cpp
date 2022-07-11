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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001030_1 "KHR-GLES32.core.internalformat.t"
#define VkglTestCase_001030_2 "exture2d.rgba_unsigned_byte_rgba"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001030, VkglTestCase_001030_1, VkglTestCase_001030_2);

#define VkglTestCase_001031_1 "KHR-GLES32.core.internalformat."
#define VkglTestCase_001031_2 "texture2d.rgb_unsigned_byte_rgb"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001031, VkglTestCase_001031_1, VkglTestCase_001031_2);

#define VkglTestCase_001032_1 "KHR-GLES32.core.internalformat.textu"
#define VkglTestCase_001032_2 "re2d.rgba_unsigned_short_4_4_4_4_rgba"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001032, VkglTestCase_001032_1, VkglTestCase_001032_2);

#define VkglTestCase_001033_1 "KHR-GLES32.core.internalformat.texture2d.lu"
#define VkglTestCase_001033_2 "minance_alpha_unsigned_byte_luminance_alpha"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001033, VkglTestCase_001033_1, VkglTestCase_001033_2);

#define VkglTestCase_001034_1 "KHR-GLES32.core.internalformat.textur"
#define VkglTestCase_001034_2 "e2d.luminance_unsigned_byte_luminance"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001034, VkglTestCase_001034_1, VkglTestCase_001034_2);

#define VkglTestCase_001035_1 "KHR-GLES32.core.internalformat.te"
#define VkglTestCase_001035_2 "xture2d.alpha_unsigned_byte_alpha"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001035, VkglTestCase_001035_1, VkglTestCase_001035_2);

#define VkglTestCase_001036_1 "KHR-GLES32.core.internalformat.texture2"
#define VkglTestCase_001036_2 "d.rgba_unsigned_int_2_10_10_10_rev_rgba"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001036, VkglTestCase_001036_1, VkglTestCase_001036_2);

#define VkglTestCase_001037_1 "KHR-GLES32.core.internalformat.texture2d."
#define VkglTestCase_001037_2 "rgba_unsigned_int_2_10_10_10_rev_rgb10_a2"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001037, VkglTestCase_001037_1, VkglTestCase_001037_2);

#define VkglTestCase_001038_1 "KHR-GLES32.core.internalformat.texture2d"
#define VkglTestCase_001038_2 ".rgba_unsigned_int_2_10_10_10_rev_rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001038, VkglTestCase_001038_1, VkglTestCase_001038_2);

#define VkglTestCase_001039_1 "KHR-GLES32.core.internalformat.texture"
#define VkglTestCase_001039_2 "2d.rgb_unsigned_int_2_10_10_10_rev_rgb"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001039, VkglTestCase_001039_1, VkglTestCase_001039_2);

#define VkglTestCase_001040_1 "KHR-GLES32.core.internalformat.texture2d.de"
#define VkglTestCase_001040_2 "pth_component_unsigned_short_depth_component"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001040, VkglTestCase_001040_1, VkglTestCase_001040_2);

#define VkglTestCase_001041_1 "KHR-GLES32.core.internalformat.texture2d.d"
#define VkglTestCase_001041_2 "epth_component_unsigned_int_depth_component"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001041, VkglTestCase_001041_1, VkglTestCase_001041_2);

#define VkglTestCase_001042_1 "KHR-GLES32.core.internalformat.texture2d.de"
#define VkglTestCase_001042_2 "pth_stencil_unsigned_int_24_8_depth_stencil"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001042, VkglTestCase_001042_1, VkglTestCase_001042_2);

#define VkglTestCase_001043_1 "KHR-GLES32.core.internalformat."
#define VkglTestCase_001043_2 "texture2d.rgb_half_float_oes_rgb"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001043, VkglTestCase_001043_1, VkglTestCase_001043_2);

#define VkglTestCase_001044_1 "KHR-GLES32.core.internalformat.t"
#define VkglTestCase_001044_2 "exture2d.rgba_half_float_oes_rgba"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001044, VkglTestCase_001044_1, VkglTestCase_001044_2);

#define VkglTestCase_001045_1 "KHR-GLES32.core.internalformat.text"
#define VkglTestCase_001045_2 "ure2d.rgb_half_float_oes_rgb_linear"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001045, VkglTestCase_001045_1, VkglTestCase_001045_2);

#define VkglTestCase_001046_1 "KHR-GLES32.core.internalformat.textu"
#define VkglTestCase_001046_2 "re2d.rgba_half_float_oes_rgba_linear"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001046, VkglTestCase_001046_1, VkglTestCase_001046_2);

#define VkglTestCase_001047_1 "KHR-GLES32.core.internalform"
#define VkglTestCase_001047_2 "at.texture2d.rgb_float_rgb32f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001047, VkglTestCase_001047_1, VkglTestCase_001047_2);

#define VkglTestCase_001048_1 "KHR-GLES32.core.internalforma"
#define VkglTestCase_001048_2 "t.texture2d.rgba_float_rgba32f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001048, VkglTestCase_001048_1, VkglTestCase_001048_2);

#define VkglTestCase_001049_1 "KHR-GLES32.core.internalformat.t"
#define VkglTestCase_001049_2 "exture2d.rgb_float_rgb32f_linear"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001049, VkglTestCase_001049_1, VkglTestCase_001049_2);

#define VkglTestCase_001050_1 "KHR-GLES32.core.internalformat.te"
#define VkglTestCase_001050_2 "xture2d.rgba_float_rgba32f_linear"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001050, VkglTestCase_001050_1, VkglTestCase_001050_2);

#define VkglTestCase_001051_1 "KHR-GLES32.core.internalformat.t"
#define VkglTestCase_001051_2 "exture2d.rgba_unsigned_byte_rgba8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001051, VkglTestCase_001051_1, VkglTestCase_001051_2);

#define VkglTestCase_001052_1 "KHR-GLES32.core.internalformat.te"
#define VkglTestCase_001052_2 "xture2d.rgba_unsigned_byte_rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001052, VkglTestCase_001052_1, VkglTestCase_001052_2);

#define VkglTestCase_001053_1 "KHR-GLES32.core.internalformat.t"
#define VkglTestCase_001053_2 "exture2d.rgba_unsigned_byte_rgba4"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001053, VkglTestCase_001053_1, VkglTestCase_001053_2);

#define VkglTestCase_001054_1 "KHR-GLES32.core.internalformat.textu"
#define VkglTestCase_001054_2 "re2d.rgba_unsigned_byte_srgb8_alpha8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001054, VkglTestCase_001054_1, VkglTestCase_001054_2);

#define VkglTestCase_001055_1 "KHR-GLES32.core.internalformat."
#define VkglTestCase_001055_2 "texture2d.rgba_byte_rgba8_snorm"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001055, VkglTestCase_001055_1, VkglTestCase_001055_2);

#define VkglTestCase_001056_1 "KHR-GLES32.core.internalformat.textur"
#define VkglTestCase_001056_2 "e2d.rgba_unsigned_short_4_4_4_4_rgba4"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001056, VkglTestCase_001056_1, VkglTestCase_001056_2);

#define VkglTestCase_001057_1 "KHR-GLES32.core.internalformat.texture"
#define VkglTestCase_001057_2 "2d.rgba_unsigned_short_5_5_5_1_rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001057, VkglTestCase_001057_1, VkglTestCase_001057_2);

#define VkglTestCase_001058_1 "KHR-GLES32.core.internalformat.t"
#define VkglTestCase_001058_2 "exture2d.rgba_half_float_rgba16f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001058, VkglTestCase_001058_1, VkglTestCase_001058_2);

#define VkglTestCase_001059_1 "KHR-GLES32.core.internalforma"
#define VkglTestCase_001059_2 "t.texture2d.rgba_float_rgba16f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001059, VkglTestCase_001059_1, VkglTestCase_001059_2);

#define VkglTestCase_001060_1 "KHR-GLES32.core.internalformat.textur"
#define VkglTestCase_001060_2 "e2d.rgba_integer_unsigned_byte_rgba8ui"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001060, VkglTestCase_001060_1, VkglTestCase_001060_2);

#define VkglTestCase_001061_1 "KHR-GLES32.core.internalformat.t"
#define VkglTestCase_001061_2 "exture2d.rgba_integer_byte_rgba8i"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001061, VkglTestCase_001061_1, VkglTestCase_001061_2);

#define VkglTestCase_001062_1 "KHR-GLES32.core.internalformat.texture"
#define VkglTestCase_001062_2 "2d.rgba_integer_unsigned_short_rgba16ui"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001062, VkglTestCase_001062_1, VkglTestCase_001062_2);

#define VkglTestCase_001063_1 "KHR-GLES32.core.internalformat.te"
#define VkglTestCase_001063_2 "xture2d.rgba_integer_short_rgba16i"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001063, VkglTestCase_001063_1, VkglTestCase_001063_2);

#define VkglTestCase_001064_1 "KHR-GLES32.core.internalformat.textur"
#define VkglTestCase_001064_2 "e2d.rgba_integer_unsigned_int_rgba32ui"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001064, VkglTestCase_001064_1, VkglTestCase_001064_2);

#define VkglTestCase_001065_1 "KHR-GLES32.core.internalformat.t"
#define VkglTestCase_001065_2 "exture2d.rgba_integer_int_rgba32i"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001065, VkglTestCase_001065_1, VkglTestCase_001065_2);

#define VkglTestCase_001066_1 "KHR-GLES32.core.internalformat.texture2d.rgba_"
#define VkglTestCase_001066_2 "integer_unsigned_int_2_10_10_10_rev_rgb10_a2ui"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001066, VkglTestCase_001066_1, VkglTestCase_001066_2);

#define VkglTestCase_001067_1 "KHR-GLES32.core.internalformat."
#define VkglTestCase_001067_2 "texture2d.rgb_unsigned_byte_rgb8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001067, VkglTestCase_001067_1, VkglTestCase_001067_2);

#define VkglTestCase_001068_1 "KHR-GLES32.core.internalformat.t"
#define VkglTestCase_001068_2 "exture2d.rgb_unsigned_byte_rgb565"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001068, VkglTestCase_001068_1, VkglTestCase_001068_2);

#define VkglTestCase_001069_1 "KHR-GLES32.core.internalformat.t"
#define VkglTestCase_001069_2 "exture2d.rgb_unsigned_byte_srgb8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001069, VkglTestCase_001069_1, VkglTestCase_001069_2);

#define VkglTestCase_001070_1 "KHR-GLES32.core.internalformat.textu"
#define VkglTestCase_001070_2 "re2d.rgb_unsigned_short_5_6_5_rgb565"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001070, VkglTestCase_001070_1, VkglTestCase_001070_2);

#define VkglTestCase_001071_1 "KHR-GLES32.core.internalformat.texture2d.rgb"
#define VkglTestCase_001071_2 "_unsigned_int_10f_11f_11f_rev_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001071, VkglTestCase_001071_1, VkglTestCase_001071_2);

#define VkglTestCase_001072_1 "KHR-GLES32.core.internalformat.texture"
#define VkglTestCase_001072_2 "2d.rgb_unsigned_int_5_9_9_9_rev_rgb9_e5"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001072, VkglTestCase_001072_1, VkglTestCase_001072_2);

#define VkglTestCase_001073_1 "KHR-GLES32.core.internalformat."
#define VkglTestCase_001073_2 "texture2d.rgb_half_float_rgb16f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001073, VkglTestCase_001073_1, VkglTestCase_001073_2);

#define VkglTestCase_001074_1 "KHR-GLES32.core.internalformat.text"
#define VkglTestCase_001074_2 "ure2d.rgb_half_float_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001074, VkglTestCase_001074_1, VkglTestCase_001074_2);

#define VkglTestCase_001075_1 "KHR-GLES32.core.internalformat."
#define VkglTestCase_001075_2 "texture2d.rgb_half_float_rgb9_e5"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001075, VkglTestCase_001075_1, VkglTestCase_001075_2);

#define VkglTestCase_001076_1 "KHR-GLES32.core.internalform"
#define VkglTestCase_001076_2 "at.texture2d.rgb_float_rgb16f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001076, VkglTestCase_001076_1, VkglTestCase_001076_2);

#define VkglTestCase_001077_1 "KHR-GLES32.core.internalformat.t"
#define VkglTestCase_001077_2 "exture2d.rgb_float_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001077, VkglTestCase_001077_1, VkglTestCase_001077_2);

#define VkglTestCase_001078_1 "KHR-GLES32.core.internalforma"
#define VkglTestCase_001078_2 "t.texture2d.rgb_float_rgb9_e5"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001078, VkglTestCase_001078_1, VkglTestCase_001078_2);

#define VkglTestCase_001079_1 "KHR-GLES32.core.internalformat.textu"
#define VkglTestCase_001079_2 "re2d.rgb_integer_unsigned_byte_rgb8ui"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001079, VkglTestCase_001079_1, VkglTestCase_001079_2);

#define VkglTestCase_001080_1 "KHR-GLES32.core.internalformat."
#define VkglTestCase_001080_2 "texture2d.rgb_integer_byte_rgb8i"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001080, VkglTestCase_001080_1, VkglTestCase_001080_2);

#define VkglTestCase_001081_1 "KHR-GLES32.core.internalformat.textur"
#define VkglTestCase_001081_2 "e2d.rgb_integer_unsigned_short_rgb16ui"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001081, VkglTestCase_001081_1, VkglTestCase_001081_2);

#define VkglTestCase_001082_1 "KHR-GLES32.core.internalformat.t"
#define VkglTestCase_001082_2 "exture2d.rgb_integer_short_rgb16i"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001082, VkglTestCase_001082_1, VkglTestCase_001082_2);

#define VkglTestCase_001083_1 "KHR-GLES32.core.internalformat.textu"
#define VkglTestCase_001083_2 "re2d.rgb_integer_unsigned_int_rgb32ui"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001083, VkglTestCase_001083_1, VkglTestCase_001083_2);

#define VkglTestCase_001084_1 "KHR-GLES32.core.internalformat."
#define VkglTestCase_001084_2 "texture2d.rgb_integer_int_rgb32i"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001084, VkglTestCase_001084_1, VkglTestCase_001084_2);

#define VkglTestCase_001085_1 "KHR-GLES32.core.internalformat"
#define VkglTestCase_001085_2 ".texture2d.rg_unsigned_byte_rg8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001085, VkglTestCase_001085_1, VkglTestCase_001085_2);

#define VkglTestCase_001086_1 "KHR-GLES32.core.internalformat"
#define VkglTestCase_001086_2 ".texture2d.rg_half_float_rg16f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001086, VkglTestCase_001086_1, VkglTestCase_001086_2);

#define VkglTestCase_001087_1 "KHR-GLES32.core.internalfor"
#define VkglTestCase_001087_2 "mat.texture2d.rg_float_rg32f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001087, VkglTestCase_001087_1, VkglTestCase_001087_2);

#define VkglTestCase_001088_1 "KHR-GLES32.core.internalfor"
#define VkglTestCase_001088_2 "mat.texture2d.rg_float_rg16f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001088, VkglTestCase_001088_1, VkglTestCase_001088_2);

#define VkglTestCase_001089_1 "KHR-GLES32.core.internalformat.text"
#define VkglTestCase_001089_2 "ure2d.rg_integer_unsigned_byte_rg8ui"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001089, VkglTestCase_001089_1, VkglTestCase_001089_2);

#define VkglTestCase_001090_1 "KHR-GLES32.core.internalformat"
#define VkglTestCase_001090_2 ".texture2d.rg_integer_byte_rg8i"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001090, VkglTestCase_001090_1, VkglTestCase_001090_2);

#define VkglTestCase_001091_1 "KHR-GLES32.core.internalformat.textu"
#define VkglTestCase_001091_2 "re2d.rg_integer_unsigned_short_rg16ui"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001091, VkglTestCase_001091_1, VkglTestCase_001091_2);

#define VkglTestCase_001092_1 "KHR-GLES32.core.internalformat."
#define VkglTestCase_001092_2 "texture2d.rg_integer_short_rg16i"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001092, VkglTestCase_001092_1, VkglTestCase_001092_2);

#define VkglTestCase_001093_1 "KHR-GLES32.core.internalformat.text"
#define VkglTestCase_001093_2 "ure2d.rg_integer_unsigned_int_rg32ui"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001093, VkglTestCase_001093_1, VkglTestCase_001093_2);

#define VkglTestCase_001094_1 "KHR-GLES32.core.internalformat"
#define VkglTestCase_001094_2 ".texture2d.rg_integer_int_rg32i"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001094, VkglTestCase_001094_1, VkglTestCase_001094_2);

#define VkglTestCase_001095_1 "KHR-GLES32.core.internalformat"
#define VkglTestCase_001095_2 ".texture2d.red_unsigned_byte_r8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001095, VkglTestCase_001095_1, VkglTestCase_001095_2);

#define VkglTestCase_001096_1 "KHR-GLES32.core.internalformat"
#define VkglTestCase_001096_2 ".texture2d.red_half_float_r16f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001096, VkglTestCase_001096_1, VkglTestCase_001096_2);

#define VkglTestCase_001097_1 "KHR-GLES32.core.internalfor"
#define VkglTestCase_001097_2 "mat.texture2d.red_float_r32f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001097, VkglTestCase_001097_1, VkglTestCase_001097_2);

#define VkglTestCase_001098_1 "KHR-GLES32.core.internalfor"
#define VkglTestCase_001098_2 "mat.texture2d.red_float_r16f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001098, VkglTestCase_001098_1, VkglTestCase_001098_2);

#define VkglTestCase_001099_1 "KHR-GLES32.core.internalformat.text"
#define VkglTestCase_001099_2 "ure2d.red_integer_unsigned_byte_r8ui"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001099, VkglTestCase_001099_1, VkglTestCase_001099_2);

#define VkglTestCase_001100_1 "KHR-GLES32.core.internalformat"
#define VkglTestCase_001100_2 ".texture2d.red_integer_byte_r8i"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001100, VkglTestCase_001100_1, VkglTestCase_001100_2);

#define VkglTestCase_001101_1 "KHR-GLES32.core.internalformat.textu"
#define VkglTestCase_001101_2 "re2d.red_integer_unsigned_short_r16ui"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001101, VkglTestCase_001101_1, VkglTestCase_001101_2);

#define VkglTestCase_001102_1 "KHR-GLES32.core.internalformat."
#define VkglTestCase_001102_2 "texture2d.red_integer_short_r16i"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001102, VkglTestCase_001102_1, VkglTestCase_001102_2);

#define VkglTestCase_001103_1 "KHR-GLES32.core.internalformat.text"
#define VkglTestCase_001103_2 "ure2d.red_integer_unsigned_int_r32ui"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001103, VkglTestCase_001103_1, VkglTestCase_001103_2);

#define VkglTestCase_001104_1 "KHR-GLES32.core.internalformat"
#define VkglTestCase_001104_2 ".texture2d.red_integer_int_r32i"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001104, VkglTestCase_001104_1, VkglTestCase_001104_2);

#define VkglTestCase_001105_1 "KHR-GLES32.core.internalformat.texture2d.dep"
#define VkglTestCase_001105_2 "th_component_unsigned_short_depth_component16"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001105, VkglTestCase_001105_1, VkglTestCase_001105_2);

#define VkglTestCase_001106_1 "KHR-GLES32.core.internalformat.texture2d.de"
#define VkglTestCase_001106_2 "pth_component_unsigned_int_depth_component24"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001106, VkglTestCase_001106_1, VkglTestCase_001106_2);

#define VkglTestCase_001107_1 "KHR-GLES32.core.internalformat.texture2d.de"
#define VkglTestCase_001107_2 "pth_component_unsigned_int_depth_component16"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001107, VkglTestCase_001107_1, VkglTestCase_001107_2);

#define VkglTestCase_001108_1 "KHR-GLES32.core.internalformat.texture2d"
#define VkglTestCase_001108_2 ".depth_component_float_depth_component32f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001108, VkglTestCase_001108_1, VkglTestCase_001108_2);

#define VkglTestCase_001109_1 "KHR-GLES32.core.internalformat.texture2d.dep"
#define VkglTestCase_001109_2 "th_stencil_unsigned_int_24_8_depth24_stencil8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001109, VkglTestCase_001109_1, VkglTestCase_001109_2);

#define VkglTestCase_001110_1 "KHR-GLES32.core.internalformat.texture2d.depth_sten"
#define VkglTestCase_001110_2 "cil_float_32_unsigned_int_24_8_rev_depth32f_stencil8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001110, VkglTestCase_001110_1, VkglTestCase_001110_2);

#define VkglTestCase_001111_1 "KHR-GLES32.core.internalformat.textu"
#define VkglTestCase_001111_2 "re2d.rgba_unsigned_short_5_5_5_1_rgba"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001111, VkglTestCase_001111_1, VkglTestCase_001111_2);

#define VkglTestCase_001112_1 "KHR-GLES32.core.internalformat.tex"
#define VkglTestCase_001112_2 "ture2d.rgb_unsigned_short_5_6_5_rgb"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001112, VkglTestCase_001112_1, VkglTestCase_001112_2);
