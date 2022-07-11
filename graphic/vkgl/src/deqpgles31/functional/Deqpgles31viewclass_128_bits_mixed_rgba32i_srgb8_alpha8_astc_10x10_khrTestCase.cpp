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
#include "../ActsDeqpgles310038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037299_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037299_2 "xed.rgba32i_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037299, VkglTestCase_037299_1, VkglTestCase_037299_2);

#define VkglTestCase_037300_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037300_2 "xed.rgba32i_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037300, VkglTestCase_037300_1, VkglTestCase_037300_2);

#define VkglTestCase_037301_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037301_2 "ixed.rgba32i_srgb8_alpha8_astc_10x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037301, VkglTestCase_037301_1, VkglTestCase_037301_2);

#define VkglTestCase_037302_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037302_2 ".rgba32i_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037302, VkglTestCase_037302_1, VkglTestCase_037302_2);

#define VkglTestCase_037303_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037303_2 "xed.rgba32i_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037303, VkglTestCase_037303_1, VkglTestCase_037303_2);

#define VkglTestCase_037304_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037304_2 "xed.rgba32i_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037304, VkglTestCase_037304_1, VkglTestCase_037304_2);

#define VkglTestCase_037305_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037305_2 "ixed.rgba32i_srgb8_alpha8_astc_10x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037305, VkglTestCase_037305_1, VkglTestCase_037305_2);

#define VkglTestCase_037306_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037306_2 ".rgba32i_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037306, VkglTestCase_037306_1, VkglTestCase_037306_2);

#define VkglTestCase_037307_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037307_2 "ixed.rgba32i_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037307, VkglTestCase_037307_1, VkglTestCase_037307_2);

#define VkglTestCase_037308_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037308_2 "ixed.rgba32i_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037308, VkglTestCase_037308_1, VkglTestCase_037308_2);

#define VkglTestCase_037309_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037309_2 "mixed.rgba32i_srgb8_alpha8_astc_10x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037309, VkglTestCase_037309_1, VkglTestCase_037309_2);

#define VkglTestCase_037310_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037310_2 "d.rgba32i_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037310, VkglTestCase_037310_1, VkglTestCase_037310_2);

#define VkglTestCase_037311_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037311_2 ".rgba32i_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037311, VkglTestCase_037311_1, VkglTestCase_037311_2);

#define VkglTestCase_037312_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037312_2 ".rgba32i_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037312, VkglTestCase_037312_1, VkglTestCase_037312_2);

#define VkglTestCase_037313_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037313_2 "d.rgba32i_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037313, VkglTestCase_037313_1, VkglTestCase_037313_2);

#define VkglTestCase_037314_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_037314_2 "ba32i_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037314, VkglTestCase_037314_1, VkglTestCase_037314_2);

#define VkglTestCase_037315_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037315_2 "d.rgba32i_srgb8_alpha8_astc_10x10_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037315, VkglTestCase_037315_1, VkglTestCase_037315_2);

#define VkglTestCase_037316_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037316_2 "d.rgba32i_srgb8_alpha8_astc_10x10_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037316, VkglTestCase_037316_1, VkglTestCase_037316_2);

#define VkglTestCase_037317_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037317_2 "ed.rgba32i_srgb8_alpha8_astc_10x10_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037317, VkglTestCase_037317_1, VkglTestCase_037317_2);

#define VkglTestCase_037318_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_037318_2 "gba32i_srgb8_alpha8_astc_10x10_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037318, VkglTestCase_037318_1, VkglTestCase_037318_2);
