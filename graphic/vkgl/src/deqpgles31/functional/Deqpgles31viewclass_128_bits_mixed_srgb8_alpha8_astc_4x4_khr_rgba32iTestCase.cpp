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

#define VkglTestCase_036879_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036879_2 "ixed.srgb8_alpha8_astc_4x4_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036879, VkglTestCase_036879_1, VkglTestCase_036879_2);

#define VkglTestCase_036880_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036880_2 "ixed.srgb8_alpha8_astc_4x4_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036880, VkglTestCase_036880_1, VkglTestCase_036880_2);

#define VkglTestCase_036881_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036881_2 "mixed.srgb8_alpha8_astc_4x4_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036881, VkglTestCase_036881_1, VkglTestCase_036881_2);

#define VkglTestCase_036882_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036882_2 "d.srgb8_alpha8_astc_4x4_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036882, VkglTestCase_036882_1, VkglTestCase_036882_2);

#define VkglTestCase_036883_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036883_2 "ed.srgb8_alpha8_astc_4x4_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036883, VkglTestCase_036883_1, VkglTestCase_036883_2);

#define VkglTestCase_036884_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036884_2 "ixed.srgb8_alpha8_astc_4x4_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036884, VkglTestCase_036884_1, VkglTestCase_036884_2);

#define VkglTestCase_036885_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036885_2 "ixed.srgb8_alpha8_astc_4x4_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036885, VkglTestCase_036885_1, VkglTestCase_036885_2);

#define VkglTestCase_036886_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036886_2 "mixed.srgb8_alpha8_astc_4x4_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036886, VkglTestCase_036886_1, VkglTestCase_036886_2);

#define VkglTestCase_036887_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036887_2 "d.srgb8_alpha8_astc_4x4_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036887, VkglTestCase_036887_1, VkglTestCase_036887_2);

#define VkglTestCase_036888_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036888_2 "ed.srgb8_alpha8_astc_4x4_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036888, VkglTestCase_036888_1, VkglTestCase_036888_2);

#define VkglTestCase_036889_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036889_2 "mixed.srgb8_alpha8_astc_4x4_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036889, VkglTestCase_036889_1, VkglTestCase_036889_2);

#define VkglTestCase_036890_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036890_2 "mixed.srgb8_alpha8_astc_4x4_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036890, VkglTestCase_036890_1, VkglTestCase_036890_2);

#define VkglTestCase_036891_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036891_2 "_mixed.srgb8_alpha8_astc_4x4_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036891, VkglTestCase_036891_1, VkglTestCase_036891_2);

#define VkglTestCase_036892_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036892_2 "ed.srgb8_alpha8_astc_4x4_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036892, VkglTestCase_036892_1, VkglTestCase_036892_2);

#define VkglTestCase_036893_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036893_2 "xed.srgb8_alpha8_astc_4x4_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036893, VkglTestCase_036893_1, VkglTestCase_036893_2);

#define VkglTestCase_036894_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036894_2 "d.srgb8_alpha8_astc_4x4_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036894, VkglTestCase_036894_1, VkglTestCase_036894_2);

#define VkglTestCase_036895_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036895_2 "d.srgb8_alpha8_astc_4x4_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036895, VkglTestCase_036895_1, VkglTestCase_036895_2);

#define VkglTestCase_036896_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036896_2 "ed.srgb8_alpha8_astc_4x4_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036896, VkglTestCase_036896_1, VkglTestCase_036896_2);

#define VkglTestCase_036897_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_036897_2 "rgb8_alpha8_astc_4x4_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036897, VkglTestCase_036897_1, VkglTestCase_036897_2);

#define VkglTestCase_036898_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036898_2 "srgb8_alpha8_astc_4x4_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036898, VkglTestCase_036898_1, VkglTestCase_036898_2);
