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

#define VkglTestCase_036899_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036899_2 "ixed.rgba32i_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036899, VkglTestCase_036899_1, VkglTestCase_036899_2);

#define VkglTestCase_036900_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036900_2 "ixed.rgba32i_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036900, VkglTestCase_036900_1, VkglTestCase_036900_2);

#define VkglTestCase_036901_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036901_2 "mixed.rgba32i_srgb8_alpha8_astc_5x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036901, VkglTestCase_036901_1, VkglTestCase_036901_2);

#define VkglTestCase_036902_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036902_2 "d.rgba32i_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036902, VkglTestCase_036902_1, VkglTestCase_036902_2);

#define VkglTestCase_036903_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036903_2 "ixed.rgba32i_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036903, VkglTestCase_036903_1, VkglTestCase_036903_2);

#define VkglTestCase_036904_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036904_2 "ixed.rgba32i_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036904, VkglTestCase_036904_1, VkglTestCase_036904_2);

#define VkglTestCase_036905_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036905_2 "mixed.rgba32i_srgb8_alpha8_astc_5x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036905, VkglTestCase_036905_1, VkglTestCase_036905_2);

#define VkglTestCase_036906_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036906_2 "d.rgba32i_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036906, VkglTestCase_036906_1, VkglTestCase_036906_2);

#define VkglTestCase_036907_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036907_2 "mixed.rgba32i_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036907, VkglTestCase_036907_1, VkglTestCase_036907_2);

#define VkglTestCase_036908_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036908_2 "mixed.rgba32i_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036908, VkglTestCase_036908_1, VkglTestCase_036908_2);

#define VkglTestCase_036909_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036909_2 "_mixed.rgba32i_srgb8_alpha8_astc_5x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036909, VkglTestCase_036909_1, VkglTestCase_036909_2);

#define VkglTestCase_036910_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036910_2 "ed.rgba32i_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036910, VkglTestCase_036910_1, VkglTestCase_036910_2);

#define VkglTestCase_036911_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036911_2 "d.rgba32i_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036911, VkglTestCase_036911_1, VkglTestCase_036911_2);

#define VkglTestCase_036912_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036912_2 "d.rgba32i_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036912, VkglTestCase_036912_1, VkglTestCase_036912_2);

#define VkglTestCase_036913_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036913_2 "ed.rgba32i_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036913, VkglTestCase_036913_1, VkglTestCase_036913_2);

#define VkglTestCase_036914_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_036914_2 "gba32i_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036914, VkglTestCase_036914_1, VkglTestCase_036914_2);

#define VkglTestCase_036915_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036915_2 "ed.rgba32i_srgb8_alpha8_astc_5x4_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036915, VkglTestCase_036915_1, VkglTestCase_036915_2);

#define VkglTestCase_036916_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036916_2 "ed.rgba32i_srgb8_alpha8_astc_5x4_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036916, VkglTestCase_036916_1, VkglTestCase_036916_2);

#define VkglTestCase_036917_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036917_2 "xed.rgba32i_srgb8_alpha8_astc_5x4_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036917, VkglTestCase_036917_1, VkglTestCase_036917_2);

#define VkglTestCase_036918_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036918_2 "rgba32i_srgb8_alpha8_astc_5x4_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036918, VkglTestCase_036918_1, VkglTestCase_036918_2);
