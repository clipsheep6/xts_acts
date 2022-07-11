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

#define VkglTestCase_036079_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036079_2 "xed.srgb8_alpha8_astc_10x8_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036079, VkglTestCase_036079_1, VkglTestCase_036079_2);

#define VkglTestCase_036080_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036080_2 "xed.srgb8_alpha8_astc_10x8_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036080, VkglTestCase_036080_1, VkglTestCase_036080_2);

#define VkglTestCase_036081_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036081_2 "ixed.srgb8_alpha8_astc_10x8_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036081, VkglTestCase_036081_1, VkglTestCase_036081_2);

#define VkglTestCase_036082_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036082_2 ".srgb8_alpha8_astc_10x8_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036082, VkglTestCase_036082_1, VkglTestCase_036082_2);

#define VkglTestCase_036083_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036083_2 "d.srgb8_alpha8_astc_10x8_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036083, VkglTestCase_036083_1, VkglTestCase_036083_2);

#define VkglTestCase_036084_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036084_2 "xed.srgb8_alpha8_astc_10x8_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036084, VkglTestCase_036084_1, VkglTestCase_036084_2);

#define VkglTestCase_036085_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036085_2 "xed.srgb8_alpha8_astc_10x8_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036085, VkglTestCase_036085_1, VkglTestCase_036085_2);

#define VkglTestCase_036086_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036086_2 "ixed.srgb8_alpha8_astc_10x8_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036086, VkglTestCase_036086_1, VkglTestCase_036086_2);

#define VkglTestCase_036087_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036087_2 ".srgb8_alpha8_astc_10x8_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036087, VkglTestCase_036087_1, VkglTestCase_036087_2);

#define VkglTestCase_036088_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036088_2 "d.srgb8_alpha8_astc_10x8_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036088, VkglTestCase_036088_1, VkglTestCase_036088_2);

#define VkglTestCase_036089_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036089_2 "ixed.srgb8_alpha8_astc_10x8_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036089, VkglTestCase_036089_1, VkglTestCase_036089_2);

#define VkglTestCase_036090_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036090_2 "ixed.srgb8_alpha8_astc_10x8_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036090, VkglTestCase_036090_1, VkglTestCase_036090_2);

#define VkglTestCase_036091_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036091_2 "mixed.srgb8_alpha8_astc_10x8_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036091, VkglTestCase_036091_1, VkglTestCase_036091_2);

#define VkglTestCase_036092_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036092_2 "d.srgb8_alpha8_astc_10x8_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036092, VkglTestCase_036092_1, VkglTestCase_036092_2);

#define VkglTestCase_036093_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036093_2 "ed.srgb8_alpha8_astc_10x8_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036093, VkglTestCase_036093_1, VkglTestCase_036093_2);

#define VkglTestCase_036094_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036094_2 ".srgb8_alpha8_astc_10x8_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036094, VkglTestCase_036094_1, VkglTestCase_036094_2);

#define VkglTestCase_036095_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036095_2 ".srgb8_alpha8_astc_10x8_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036095, VkglTestCase_036095_1, VkglTestCase_036095_2);

#define VkglTestCase_036096_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036096_2 "d.srgb8_alpha8_astc_10x8_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036096, VkglTestCase_036096_1, VkglTestCase_036096_2);

#define VkglTestCase_036097_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_036097_2 "gb8_alpha8_astc_10x8_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036097, VkglTestCase_036097_1, VkglTestCase_036097_2);

#define VkglTestCase_036098_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_036098_2 "rgb8_alpha8_astc_10x8_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036098, VkglTestCase_036098_1, VkglTestCase_036098_2);
