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

#define VkglTestCase_036119_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036119_2 "ed.srgb8_alpha8_astc_10x10_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036119, VkglTestCase_036119_1, VkglTestCase_036119_2);

#define VkglTestCase_036120_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036120_2 "ed.srgb8_alpha8_astc_10x10_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036120, VkglTestCase_036120_1, VkglTestCase_036120_2);

#define VkglTestCase_036121_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036121_2 "xed.srgb8_alpha8_astc_10x10_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036121, VkglTestCase_036121_1, VkglTestCase_036121_2);

#define VkglTestCase_036122_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036122_2 "srgb8_alpha8_astc_10x10_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036122, VkglTestCase_036122_1, VkglTestCase_036122_2);

#define VkglTestCase_036123_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036123_2 "d.srgb8_alpha8_astc_10x10_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036123, VkglTestCase_036123_1, VkglTestCase_036123_2);

#define VkglTestCase_036124_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036124_2 "ed.srgb8_alpha8_astc_10x10_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036124, VkglTestCase_036124_1, VkglTestCase_036124_2);

#define VkglTestCase_036125_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036125_2 "ed.srgb8_alpha8_astc_10x10_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036125, VkglTestCase_036125_1, VkglTestCase_036125_2);

#define VkglTestCase_036126_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036126_2 "xed.srgb8_alpha8_astc_10x10_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036126, VkglTestCase_036126_1, VkglTestCase_036126_2);

#define VkglTestCase_036127_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036127_2 "srgb8_alpha8_astc_10x10_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036127, VkglTestCase_036127_1, VkglTestCase_036127_2);

#define VkglTestCase_036128_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036128_2 "d.srgb8_alpha8_astc_10x10_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036128, VkglTestCase_036128_1, VkglTestCase_036128_2);

#define VkglTestCase_036129_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036129_2 "xed.srgb8_alpha8_astc_10x10_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036129, VkglTestCase_036129_1, VkglTestCase_036129_2);

#define VkglTestCase_036130_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036130_2 "xed.srgb8_alpha8_astc_10x10_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036130, VkglTestCase_036130_1, VkglTestCase_036130_2);

#define VkglTestCase_036131_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036131_2 "ixed.srgb8_alpha8_astc_10x10_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036131, VkglTestCase_036131_1, VkglTestCase_036131_2);

#define VkglTestCase_036132_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036132_2 ".srgb8_alpha8_astc_10x10_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036132, VkglTestCase_036132_1, VkglTestCase_036132_2);

#define VkglTestCase_036133_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036133_2 "ed.srgb8_alpha8_astc_10x10_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036133, VkglTestCase_036133_1, VkglTestCase_036133_2);

#define VkglTestCase_036134_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036134_2 "srgb8_alpha8_astc_10x10_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036134, VkglTestCase_036134_1, VkglTestCase_036134_2);

#define VkglTestCase_036135_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036135_2 "srgb8_alpha8_astc_10x10_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036135, VkglTestCase_036135_1, VkglTestCase_036135_2);

#define VkglTestCase_036136_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036136_2 ".srgb8_alpha8_astc_10x10_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036136, VkglTestCase_036136_1, VkglTestCase_036136_2);

#define VkglTestCase_036137_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.srg"
#define VkglTestCase_036137_2 "b8_alpha8_astc_10x10_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036137, VkglTestCase_036137_1, VkglTestCase_036137_2);

#define VkglTestCase_036138_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_036138_2 "rgb8_alpha8_astc_10x10_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036138, VkglTestCase_036138_1, VkglTestCase_036138_2);
