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

#define VkglTestCase_037079_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037079_2 "ixed.srgb8_alpha8_astc_8x5_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037079, VkglTestCase_037079_1, VkglTestCase_037079_2);

#define VkglTestCase_037080_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037080_2 "ixed.srgb8_alpha8_astc_8x5_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037080, VkglTestCase_037080_1, VkglTestCase_037080_2);

#define VkglTestCase_037081_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037081_2 "mixed.srgb8_alpha8_astc_8x5_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037081, VkglTestCase_037081_1, VkglTestCase_037081_2);

#define VkglTestCase_037082_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037082_2 "d.srgb8_alpha8_astc_8x5_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037082, VkglTestCase_037082_1, VkglTestCase_037082_2);

#define VkglTestCase_037083_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037083_2 "ed.srgb8_alpha8_astc_8x5_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037083, VkglTestCase_037083_1, VkglTestCase_037083_2);

#define VkglTestCase_037084_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037084_2 "ixed.srgb8_alpha8_astc_8x5_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037084, VkglTestCase_037084_1, VkglTestCase_037084_2);

#define VkglTestCase_037085_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037085_2 "ixed.srgb8_alpha8_astc_8x5_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037085, VkglTestCase_037085_1, VkglTestCase_037085_2);

#define VkglTestCase_037086_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037086_2 "mixed.srgb8_alpha8_astc_8x5_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037086, VkglTestCase_037086_1, VkglTestCase_037086_2);

#define VkglTestCase_037087_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037087_2 "d.srgb8_alpha8_astc_8x5_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037087, VkglTestCase_037087_1, VkglTestCase_037087_2);

#define VkglTestCase_037088_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037088_2 "ed.srgb8_alpha8_astc_8x5_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037088, VkglTestCase_037088_1, VkglTestCase_037088_2);

#define VkglTestCase_037089_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037089_2 "mixed.srgb8_alpha8_astc_8x5_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037089, VkglTestCase_037089_1, VkglTestCase_037089_2);

#define VkglTestCase_037090_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037090_2 "mixed.srgb8_alpha8_astc_8x5_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037090, VkglTestCase_037090_1, VkglTestCase_037090_2);

#define VkglTestCase_037091_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_037091_2 "_mixed.srgb8_alpha8_astc_8x5_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037091, VkglTestCase_037091_1, VkglTestCase_037091_2);

#define VkglTestCase_037092_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037092_2 "ed.srgb8_alpha8_astc_8x5_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037092, VkglTestCase_037092_1, VkglTestCase_037092_2);

#define VkglTestCase_037093_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037093_2 "xed.srgb8_alpha8_astc_8x5_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037093, VkglTestCase_037093_1, VkglTestCase_037093_2);

#define VkglTestCase_037094_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037094_2 "d.srgb8_alpha8_astc_8x5_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037094, VkglTestCase_037094_1, VkglTestCase_037094_2);

#define VkglTestCase_037095_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037095_2 "d.srgb8_alpha8_astc_8x5_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037095, VkglTestCase_037095_1, VkglTestCase_037095_2);

#define VkglTestCase_037096_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037096_2 "ed.srgb8_alpha8_astc_8x5_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037096, VkglTestCase_037096_1, VkglTestCase_037096_2);

#define VkglTestCase_037097_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_037097_2 "rgb8_alpha8_astc_8x5_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037097, VkglTestCase_037097_1, VkglTestCase_037097_2);

#define VkglTestCase_037098_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037098_2 "srgb8_alpha8_astc_8x5_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037098, VkglTestCase_037098_1, VkglTestCase_037098_2);
