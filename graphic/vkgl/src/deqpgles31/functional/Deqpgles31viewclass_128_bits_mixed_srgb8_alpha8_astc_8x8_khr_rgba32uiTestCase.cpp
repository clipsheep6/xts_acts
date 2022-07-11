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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035959_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035959_2 "xed.srgb8_alpha8_astc_8x8_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035959, VkglTestCase_035959_1, VkglTestCase_035959_2);

#define VkglTestCase_035960_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035960_2 "xed.srgb8_alpha8_astc_8x8_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035960, VkglTestCase_035960_1, VkglTestCase_035960_2);

#define VkglTestCase_035961_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035961_2 "ixed.srgb8_alpha8_astc_8x8_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035961, VkglTestCase_035961_1, VkglTestCase_035961_2);

#define VkglTestCase_035962_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035962_2 ".srgb8_alpha8_astc_8x8_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035962, VkglTestCase_035962_1, VkglTestCase_035962_2);

#define VkglTestCase_035963_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035963_2 "ed.srgb8_alpha8_astc_8x8_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035963, VkglTestCase_035963_1, VkglTestCase_035963_2);

#define VkglTestCase_035964_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035964_2 "xed.srgb8_alpha8_astc_8x8_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035964, VkglTestCase_035964_1, VkglTestCase_035964_2);

#define VkglTestCase_035965_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035965_2 "xed.srgb8_alpha8_astc_8x8_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035965, VkglTestCase_035965_1, VkglTestCase_035965_2);

#define VkglTestCase_035966_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035966_2 "ixed.srgb8_alpha8_astc_8x8_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035966, VkglTestCase_035966_1, VkglTestCase_035966_2);

#define VkglTestCase_035967_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035967_2 ".srgb8_alpha8_astc_8x8_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035967, VkglTestCase_035967_1, VkglTestCase_035967_2);

#define VkglTestCase_035968_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035968_2 "ed.srgb8_alpha8_astc_8x8_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035968, VkglTestCase_035968_1, VkglTestCase_035968_2);

#define VkglTestCase_035969_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035969_2 "ixed.srgb8_alpha8_astc_8x8_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035969, VkglTestCase_035969_1, VkglTestCase_035969_2);

#define VkglTestCase_035970_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035970_2 "ixed.srgb8_alpha8_astc_8x8_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035970, VkglTestCase_035970_1, VkglTestCase_035970_2);

#define VkglTestCase_035971_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035971_2 "mixed.srgb8_alpha8_astc_8x8_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035971, VkglTestCase_035971_1, VkglTestCase_035971_2);

#define VkglTestCase_035972_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035972_2 "d.srgb8_alpha8_astc_8x8_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035972, VkglTestCase_035972_1, VkglTestCase_035972_2);

#define VkglTestCase_035973_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035973_2 "xed.srgb8_alpha8_astc_8x8_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035973, VkglTestCase_035973_1, VkglTestCase_035973_2);

#define VkglTestCase_035974_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035974_2 ".srgb8_alpha8_astc_8x8_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035974, VkglTestCase_035974_1, VkglTestCase_035974_2);

#define VkglTestCase_035975_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035975_2 ".srgb8_alpha8_astc_8x8_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035975, VkglTestCase_035975_1, VkglTestCase_035975_2);

#define VkglTestCase_035976_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035976_2 "d.srgb8_alpha8_astc_8x8_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035976, VkglTestCase_035976_1, VkglTestCase_035976_2);

#define VkglTestCase_035977_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_035977_2 "gb8_alpha8_astc_8x8_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035977, VkglTestCase_035977_1, VkglTestCase_035977_2);

#define VkglTestCase_035978_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035978_2 "srgb8_alpha8_astc_8x8_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035978, VkglTestCase_035978_1, VkglTestCase_035978_2);
