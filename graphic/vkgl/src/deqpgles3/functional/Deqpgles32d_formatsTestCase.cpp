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
#include "../ActsDeqpgles30024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023887_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_023887_2 "tering.2d.formats.rgba16f_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023887, VkglTestCase_023887_1, VkglTestCase_023887_2);

#define VkglTestCase_023888_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_023888_2 "ltering.2d.formats.rgba16f_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023888, VkglTestCase_023888_1, VkglTestCase_023888_2);

#define VkglTestCase_023889_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023889_2 "2d.formats.rgba16f_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023889, VkglTestCase_023889_1, VkglTestCase_023889_2);

#define VkglTestCase_023890_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023890_2 "2d.formats.rgba16f_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023890, VkglTestCase_023890_1, VkglTestCase_023890_2);

#define VkglTestCase_023891_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023891_2 "2d.formats.rgba16f_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023891, VkglTestCase_023891_1, VkglTestCase_023891_2);

#define VkglTestCase_023892_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023892_2 ".2d.formats.rgba16f_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023892, VkglTestCase_023892_1, VkglTestCase_023892_2);

#define VkglTestCase_023893_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_023893_2 "ing.2d.formats.r11f_g11f_b10f_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023893, VkglTestCase_023893_1, VkglTestCase_023893_2);

#define VkglTestCase_023894_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_023894_2 "ing.2d.formats.r11f_g11f_b10f_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023894, VkglTestCase_023894_1, VkglTestCase_023894_2);

#define VkglTestCase_023895_1 "dEQP-GLES3.functional.texture.filtering.2d.f"
#define VkglTestCase_023895_2 "ormats.r11f_g11f_b10f_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023895, VkglTestCase_023895_1, VkglTestCase_023895_2);

#define VkglTestCase_023896_1 "dEQP-GLES3.functional.texture.filtering.2d."
#define VkglTestCase_023896_2 "formats.r11f_g11f_b10f_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023896, VkglTestCase_023896_1, VkglTestCase_023896_2);

#define VkglTestCase_023897_1 "dEQP-GLES3.functional.texture.filtering.2d."
#define VkglTestCase_023897_2 "formats.r11f_g11f_b10f_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023897, VkglTestCase_023897_1, VkglTestCase_023897_2);

#define VkglTestCase_023898_1 "dEQP-GLES3.functional.texture.filtering.2d."
#define VkglTestCase_023898_2 "formats.r11f_g11f_b10f_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023898, VkglTestCase_023898_1, VkglTestCase_023898_2);

#define VkglTestCase_023899_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_023899_2 "tering.2d.formats.rgb9_e5_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023899, VkglTestCase_023899_1, VkglTestCase_023899_2);

#define VkglTestCase_023900_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_023900_2 "ltering.2d.formats.rgb9_e5_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023900, VkglTestCase_023900_1, VkglTestCase_023900_2);

#define VkglTestCase_023901_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023901_2 "2d.formats.rgb9_e5_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023901, VkglTestCase_023901_1, VkglTestCase_023901_2);

#define VkglTestCase_023902_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023902_2 "2d.formats.rgb9_e5_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023902, VkglTestCase_023902_1, VkglTestCase_023902_2);

#define VkglTestCase_023903_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023903_2 "2d.formats.rgb9_e5_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023903, VkglTestCase_023903_1, VkglTestCase_023903_2);

#define VkglTestCase_023904_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023904_2 ".2d.formats.rgb9_e5_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023904, VkglTestCase_023904_1, VkglTestCase_023904_2);

#define VkglTestCase_023905_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_023905_2 "ltering.2d.formats.rgba8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023905, VkglTestCase_023905_1, VkglTestCase_023905_2);

#define VkglTestCase_023906_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_023906_2 "iltering.2d.formats.rgba8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023906, VkglTestCase_023906_1, VkglTestCase_023906_2);

#define VkglTestCase_023907_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023907_2 ".2d.formats.rgba8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023907, VkglTestCase_023907_1, VkglTestCase_023907_2);

#define VkglTestCase_023908_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023908_2 ".2d.formats.rgba8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023908, VkglTestCase_023908_1, VkglTestCase_023908_2);

#define VkglTestCase_023909_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023909_2 ".2d.formats.rgba8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023909, VkglTestCase_023909_1, VkglTestCase_023909_2);

#define VkglTestCase_023910_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_023910_2 "g.2d.formats.rgba8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023910, VkglTestCase_023910_1, VkglTestCase_023910_2);

#define VkglTestCase_023911_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_023911_2 "ring.2d.formats.rgba8_snorm_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023911, VkglTestCase_023911_1, VkglTestCase_023911_2);

#define VkglTestCase_023912_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_023912_2 "ering.2d.formats.rgba8_snorm_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023912, VkglTestCase_023912_1, VkglTestCase_023912_2);

#define VkglTestCase_023913_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_023913_2 ".formats.rgba8_snorm_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023913, VkglTestCase_023913_1, VkglTestCase_023913_2);

#define VkglTestCase_023914_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_023914_2 ".formats.rgba8_snorm_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023914, VkglTestCase_023914_1, VkglTestCase_023914_2);

#define VkglTestCase_023915_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_023915_2 ".formats.rgba8_snorm_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023915, VkglTestCase_023915_1, VkglTestCase_023915_2);

#define VkglTestCase_023916_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_023916_2 "d.formats.rgba8_snorm_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023916, VkglTestCase_023916_1, VkglTestCase_023916_2);

#define VkglTestCase_023917_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_023917_2 "ltering.2d.formats.rgb565_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023917, VkglTestCase_023917_1, VkglTestCase_023917_2);

#define VkglTestCase_023918_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_023918_2 "ltering.2d.formats.rgb565_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023918, VkglTestCase_023918_1, VkglTestCase_023918_2);

#define VkglTestCase_023919_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023919_2 "2d.formats.rgb565_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023919, VkglTestCase_023919_1, VkglTestCase_023919_2);

#define VkglTestCase_023920_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023920_2 ".2d.formats.rgb565_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023920, VkglTestCase_023920_1, VkglTestCase_023920_2);

#define VkglTestCase_023921_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023921_2 ".2d.formats.rgb565_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023921, VkglTestCase_023921_1, VkglTestCase_023921_2);

#define VkglTestCase_023922_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023922_2 ".2d.formats.rgb565_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023922, VkglTestCase_023922_1, VkglTestCase_023922_2);

#define VkglTestCase_023923_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_023923_2 "ltering.2d.formats.rgba4_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023923, VkglTestCase_023923_1, VkglTestCase_023923_2);

#define VkglTestCase_023924_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_023924_2 "iltering.2d.formats.rgba4_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023924, VkglTestCase_023924_1, VkglTestCase_023924_2);

#define VkglTestCase_023925_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023925_2 ".2d.formats.rgba4_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023925, VkglTestCase_023925_1, VkglTestCase_023925_2);

#define VkglTestCase_023926_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023926_2 ".2d.formats.rgba4_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023926, VkglTestCase_023926_1, VkglTestCase_023926_2);

#define VkglTestCase_023927_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023927_2 ".2d.formats.rgba4_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023927, VkglTestCase_023927_1, VkglTestCase_023927_2);

#define VkglTestCase_023928_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_023928_2 "g.2d.formats.rgba4_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023928, VkglTestCase_023928_1, VkglTestCase_023928_2);

#define VkglTestCase_023929_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_023929_2 "tering.2d.formats.rgb5_a1_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023929, VkglTestCase_023929_1, VkglTestCase_023929_2);

#define VkglTestCase_023930_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_023930_2 "ltering.2d.formats.rgb5_a1_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023930, VkglTestCase_023930_1, VkglTestCase_023930_2);

#define VkglTestCase_023931_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023931_2 "2d.formats.rgb5_a1_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023931, VkglTestCase_023931_1, VkglTestCase_023931_2);

#define VkglTestCase_023932_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023932_2 "2d.formats.rgb5_a1_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023932, VkglTestCase_023932_1, VkglTestCase_023932_2);

#define VkglTestCase_023933_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023933_2 "2d.formats.rgb5_a1_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023933, VkglTestCase_023933_1, VkglTestCase_023933_2);

#define VkglTestCase_023934_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023934_2 ".2d.formats.rgb5_a1_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023934, VkglTestCase_023934_1, VkglTestCase_023934_2);

#define VkglTestCase_023935_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_023935_2 "ring.2d.formats.srgb8_alpha8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023935, VkglTestCase_023935_1, VkglTestCase_023935_2);

#define VkglTestCase_023936_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_023936_2 "ring.2d.formats.srgb8_alpha8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023936, VkglTestCase_023936_1, VkglTestCase_023936_2);

#define VkglTestCase_023937_1 "dEQP-GLES3.functional.texture.filtering.2d."
#define VkglTestCase_023937_2 "formats.srgb8_alpha8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023937, VkglTestCase_023937_1, VkglTestCase_023937_2);

#define VkglTestCase_023938_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_023938_2 ".formats.srgb8_alpha8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023938, VkglTestCase_023938_1, VkglTestCase_023938_2);

#define VkglTestCase_023939_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_023939_2 ".formats.srgb8_alpha8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023939, VkglTestCase_023939_1, VkglTestCase_023939_2);

#define VkglTestCase_023940_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_023940_2 ".formats.srgb8_alpha8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023940, VkglTestCase_023940_1, VkglTestCase_023940_2);

#define VkglTestCase_023941_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_023941_2 "tering.2d.formats.srgb_r8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023941, VkglTestCase_023941_1, VkglTestCase_023941_2);

#define VkglTestCase_023942_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_023942_2 "ltering.2d.formats.srgb_r8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023942, VkglTestCase_023942_1, VkglTestCase_023942_2);

#define VkglTestCase_023943_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023943_2 "2d.formats.srgb_r8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023943, VkglTestCase_023943_1, VkglTestCase_023943_2);

#define VkglTestCase_023944_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023944_2 "2d.formats.srgb_r8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023944, VkglTestCase_023944_1, VkglTestCase_023944_2);

#define VkglTestCase_023945_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023945_2 "2d.formats.srgb_r8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023945, VkglTestCase_023945_1, VkglTestCase_023945_2);

#define VkglTestCase_023946_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023946_2 ".2d.formats.srgb_r8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023946, VkglTestCase_023946_1, VkglTestCase_023946_2);

#define VkglTestCase_023947_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_023947_2 "tering.2d.formats.srgb_rg8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023947, VkglTestCase_023947_1, VkglTestCase_023947_2);

#define VkglTestCase_023948_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_023948_2 "tering.2d.formats.srgb_rg8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023948, VkglTestCase_023948_1, VkglTestCase_023948_2);

#define VkglTestCase_023949_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_023949_2 "d.formats.srgb_rg8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023949, VkglTestCase_023949_1, VkglTestCase_023949_2);

#define VkglTestCase_023950_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023950_2 "2d.formats.srgb_rg8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023950, VkglTestCase_023950_1, VkglTestCase_023950_2);

#define VkglTestCase_023951_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023951_2 "2d.formats.srgb_rg8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023951, VkglTestCase_023951_1, VkglTestCase_023951_2);

#define VkglTestCase_023952_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023952_2 "2d.formats.srgb_rg8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023952, VkglTestCase_023952_1, VkglTestCase_023952_2);

#define VkglTestCase_023953_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_023953_2 "tering.2d.formats.rgb10_a2_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023953, VkglTestCase_023953_1, VkglTestCase_023953_2);

#define VkglTestCase_023954_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_023954_2 "tering.2d.formats.rgb10_a2_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023954, VkglTestCase_023954_1, VkglTestCase_023954_2);

#define VkglTestCase_023955_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_023955_2 "d.formats.rgb10_a2_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023955, VkglTestCase_023955_1, VkglTestCase_023955_2);

#define VkglTestCase_023956_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023956_2 "2d.formats.rgb10_a2_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023956, VkglTestCase_023956_1, VkglTestCase_023956_2);

#define VkglTestCase_023957_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023957_2 "2d.formats.rgb10_a2_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023957, VkglTestCase_023957_1, VkglTestCase_023957_2);

#define VkglTestCase_023958_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023958_2 "2d.formats.rgb10_a2_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023958, VkglTestCase_023958_1, VkglTestCase_023958_2);

#define VkglTestCase_023959_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_023959_2 "ering.2d.formats.etc1_rgb8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023959, VkglTestCase_023959_1, VkglTestCase_023959_2);

#define VkglTestCase_023960_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_023960_2 "tering.2d.formats.etc1_rgb8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023960, VkglTestCase_023960_1, VkglTestCase_023960_2);

#define VkglTestCase_023961_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_023961_2 "d.formats.etc1_rgb8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023961, VkglTestCase_023961_1, VkglTestCase_023961_2);

#define VkglTestCase_023962_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_023962_2 "d.formats.etc1_rgb8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023962, VkglTestCase_023962_1, VkglTestCase_023962_2);

#define VkglTestCase_023963_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_023963_2 "d.formats.etc1_rgb8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023963, VkglTestCase_023963_1, VkglTestCase_023963_2);

#define VkglTestCase_023964_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_023964_2 "2d.formats.etc1_rgb8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023964, VkglTestCase_023964_1, VkglTestCase_023964_2);
