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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036959_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036959_2 "ixed.srgb8_alpha8_astc_5x5_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036959, VkglTestCase_036959_1, VkglTestCase_036959_2);

#define VkglTestCase_036960_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036960_2 "ixed.srgb8_alpha8_astc_5x5_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036960, VkglTestCase_036960_1, VkglTestCase_036960_2);

#define VkglTestCase_036961_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036961_2 "mixed.srgb8_alpha8_astc_5x5_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036961, VkglTestCase_036961_1, VkglTestCase_036961_2);

#define VkglTestCase_036962_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036962_2 "d.srgb8_alpha8_astc_5x5_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036962, VkglTestCase_036962_1, VkglTestCase_036962_2);

#define VkglTestCase_036963_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036963_2 "ed.srgb8_alpha8_astc_5x5_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036963, VkglTestCase_036963_1, VkglTestCase_036963_2);

#define VkglTestCase_036964_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036964_2 "ixed.srgb8_alpha8_astc_5x5_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036964, VkglTestCase_036964_1, VkglTestCase_036964_2);

#define VkglTestCase_036965_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036965_2 "ixed.srgb8_alpha8_astc_5x5_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036965, VkglTestCase_036965_1, VkglTestCase_036965_2);

#define VkglTestCase_036966_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036966_2 "mixed.srgb8_alpha8_astc_5x5_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036966, VkglTestCase_036966_1, VkglTestCase_036966_2);

#define VkglTestCase_036967_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036967_2 "d.srgb8_alpha8_astc_5x5_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036967, VkglTestCase_036967_1, VkglTestCase_036967_2);

#define VkglTestCase_036968_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036968_2 "ed.srgb8_alpha8_astc_5x5_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036968, VkglTestCase_036968_1, VkglTestCase_036968_2);

#define VkglTestCase_036969_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036969_2 "mixed.srgb8_alpha8_astc_5x5_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036969, VkglTestCase_036969_1, VkglTestCase_036969_2);

#define VkglTestCase_036970_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036970_2 "mixed.srgb8_alpha8_astc_5x5_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036970, VkglTestCase_036970_1, VkglTestCase_036970_2);

#define VkglTestCase_036971_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036971_2 "_mixed.srgb8_alpha8_astc_5x5_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036971, VkglTestCase_036971_1, VkglTestCase_036971_2);

#define VkglTestCase_036972_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036972_2 "ed.srgb8_alpha8_astc_5x5_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036972, VkglTestCase_036972_1, VkglTestCase_036972_2);

#define VkglTestCase_036973_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036973_2 "xed.srgb8_alpha8_astc_5x5_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036973, VkglTestCase_036973_1, VkglTestCase_036973_2);

#define VkglTestCase_036974_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036974_2 "d.srgb8_alpha8_astc_5x5_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036974, VkglTestCase_036974_1, VkglTestCase_036974_2);

#define VkglTestCase_036975_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036975_2 "d.srgb8_alpha8_astc_5x5_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036975, VkglTestCase_036975_1, VkglTestCase_036975_2);

#define VkglTestCase_036976_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036976_2 "ed.srgb8_alpha8_astc_5x5_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036976, VkglTestCase_036976_1, VkglTestCase_036976_2);

#define VkglTestCase_036977_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_036977_2 "rgb8_alpha8_astc_5x5_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036977, VkglTestCase_036977_1, VkglTestCase_036977_2);

#define VkglTestCase_036978_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036978_2 "srgb8_alpha8_astc_5x5_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036978, VkglTestCase_036978_1, VkglTestCase_036978_2);
