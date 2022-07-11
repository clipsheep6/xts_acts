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

#define VkglTestCase_036919_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036919_2 "ixed.srgb8_alpha8_astc_5x4_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036919, VkglTestCase_036919_1, VkglTestCase_036919_2);

#define VkglTestCase_036920_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036920_2 "ixed.srgb8_alpha8_astc_5x4_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036920, VkglTestCase_036920_1, VkglTestCase_036920_2);

#define VkglTestCase_036921_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036921_2 "mixed.srgb8_alpha8_astc_5x4_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036921, VkglTestCase_036921_1, VkglTestCase_036921_2);

#define VkglTestCase_036922_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036922_2 "d.srgb8_alpha8_astc_5x4_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036922, VkglTestCase_036922_1, VkglTestCase_036922_2);

#define VkglTestCase_036923_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036923_2 "ed.srgb8_alpha8_astc_5x4_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036923, VkglTestCase_036923_1, VkglTestCase_036923_2);

#define VkglTestCase_036924_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036924_2 "ixed.srgb8_alpha8_astc_5x4_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036924, VkglTestCase_036924_1, VkglTestCase_036924_2);

#define VkglTestCase_036925_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036925_2 "ixed.srgb8_alpha8_astc_5x4_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036925, VkglTestCase_036925_1, VkglTestCase_036925_2);

#define VkglTestCase_036926_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036926_2 "mixed.srgb8_alpha8_astc_5x4_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036926, VkglTestCase_036926_1, VkglTestCase_036926_2);

#define VkglTestCase_036927_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036927_2 "d.srgb8_alpha8_astc_5x4_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036927, VkglTestCase_036927_1, VkglTestCase_036927_2);

#define VkglTestCase_036928_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036928_2 "ed.srgb8_alpha8_astc_5x4_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036928, VkglTestCase_036928_1, VkglTestCase_036928_2);

#define VkglTestCase_036929_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036929_2 "mixed.srgb8_alpha8_astc_5x4_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036929, VkglTestCase_036929_1, VkglTestCase_036929_2);

#define VkglTestCase_036930_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036930_2 "mixed.srgb8_alpha8_astc_5x4_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036930, VkglTestCase_036930_1, VkglTestCase_036930_2);

#define VkglTestCase_036931_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036931_2 "_mixed.srgb8_alpha8_astc_5x4_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036931, VkglTestCase_036931_1, VkglTestCase_036931_2);

#define VkglTestCase_036932_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036932_2 "ed.srgb8_alpha8_astc_5x4_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036932, VkglTestCase_036932_1, VkglTestCase_036932_2);

#define VkglTestCase_036933_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036933_2 "xed.srgb8_alpha8_astc_5x4_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036933, VkglTestCase_036933_1, VkglTestCase_036933_2);

#define VkglTestCase_036934_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036934_2 "d.srgb8_alpha8_astc_5x4_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036934, VkglTestCase_036934_1, VkglTestCase_036934_2);

#define VkglTestCase_036935_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036935_2 "d.srgb8_alpha8_astc_5x4_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036935, VkglTestCase_036935_1, VkglTestCase_036935_2);

#define VkglTestCase_036936_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036936_2 "ed.srgb8_alpha8_astc_5x4_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036936, VkglTestCase_036936_1, VkglTestCase_036936_2);

#define VkglTestCase_036937_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_036937_2 "rgb8_alpha8_astc_5x4_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036937, VkglTestCase_036937_1, VkglTestCase_036937_2);

#define VkglTestCase_036938_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036938_2 "srgb8_alpha8_astc_5x4_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036938, VkglTestCase_036938_1, VkglTestCase_036938_2);
