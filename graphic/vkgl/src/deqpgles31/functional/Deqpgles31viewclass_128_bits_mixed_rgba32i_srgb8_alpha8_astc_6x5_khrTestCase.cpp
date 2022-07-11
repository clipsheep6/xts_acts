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

#define VkglTestCase_036979_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036979_2 "ixed.rgba32i_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036979, VkglTestCase_036979_1, VkglTestCase_036979_2);

#define VkglTestCase_036980_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036980_2 "ixed.rgba32i_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036980, VkglTestCase_036980_1, VkglTestCase_036980_2);

#define VkglTestCase_036981_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036981_2 "mixed.rgba32i_srgb8_alpha8_astc_6x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036981, VkglTestCase_036981_1, VkglTestCase_036981_2);

#define VkglTestCase_036982_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036982_2 "d.rgba32i_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036982, VkglTestCase_036982_1, VkglTestCase_036982_2);

#define VkglTestCase_036983_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036983_2 "ixed.rgba32i_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036983, VkglTestCase_036983_1, VkglTestCase_036983_2);

#define VkglTestCase_036984_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036984_2 "ixed.rgba32i_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036984, VkglTestCase_036984_1, VkglTestCase_036984_2);

#define VkglTestCase_036985_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036985_2 "mixed.rgba32i_srgb8_alpha8_astc_6x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036985, VkglTestCase_036985_1, VkglTestCase_036985_2);

#define VkglTestCase_036986_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036986_2 "d.rgba32i_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036986, VkglTestCase_036986_1, VkglTestCase_036986_2);

#define VkglTestCase_036987_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036987_2 "mixed.rgba32i_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036987, VkglTestCase_036987_1, VkglTestCase_036987_2);

#define VkglTestCase_036988_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036988_2 "mixed.rgba32i_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036988, VkglTestCase_036988_1, VkglTestCase_036988_2);

#define VkglTestCase_036989_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036989_2 "_mixed.rgba32i_srgb8_alpha8_astc_6x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036989, VkglTestCase_036989_1, VkglTestCase_036989_2);

#define VkglTestCase_036990_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036990_2 "ed.rgba32i_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036990, VkglTestCase_036990_1, VkglTestCase_036990_2);

#define VkglTestCase_036991_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036991_2 "d.rgba32i_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036991, VkglTestCase_036991_1, VkglTestCase_036991_2);

#define VkglTestCase_036992_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036992_2 "d.rgba32i_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036992, VkglTestCase_036992_1, VkglTestCase_036992_2);

#define VkglTestCase_036993_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036993_2 "ed.rgba32i_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036993, VkglTestCase_036993_1, VkglTestCase_036993_2);

#define VkglTestCase_036994_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_036994_2 "gba32i_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036994, VkglTestCase_036994_1, VkglTestCase_036994_2);

#define VkglTestCase_036995_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036995_2 "ed.rgba32i_srgb8_alpha8_astc_6x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036995, VkglTestCase_036995_1, VkglTestCase_036995_2);

#define VkglTestCase_036996_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036996_2 "ed.rgba32i_srgb8_alpha8_astc_6x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036996, VkglTestCase_036996_1, VkglTestCase_036996_2);

#define VkglTestCase_036997_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036997_2 "xed.rgba32i_srgb8_alpha8_astc_6x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036997, VkglTestCase_036997_1, VkglTestCase_036997_2);

#define VkglTestCase_036998_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036998_2 "rgba32i_srgb8_alpha8_astc_6x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036998, VkglTestCase_036998_1, VkglTestCase_036998_2);
