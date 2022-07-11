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

#define VkglTestCase_036199_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036199_2 "ed.srgb8_alpha8_astc_12x12_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036199, VkglTestCase_036199_1, VkglTestCase_036199_2);

#define VkglTestCase_036200_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036200_2 "ed.srgb8_alpha8_astc_12x12_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036200, VkglTestCase_036200_1, VkglTestCase_036200_2);

#define VkglTestCase_036201_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036201_2 "xed.srgb8_alpha8_astc_12x12_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036201, VkglTestCase_036201_1, VkglTestCase_036201_2);

#define VkglTestCase_036202_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036202_2 "srgb8_alpha8_astc_12x12_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036202, VkglTestCase_036202_1, VkglTestCase_036202_2);

#define VkglTestCase_036203_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036203_2 "d.srgb8_alpha8_astc_12x12_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036203, VkglTestCase_036203_1, VkglTestCase_036203_2);

#define VkglTestCase_036204_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036204_2 "ed.srgb8_alpha8_astc_12x12_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036204, VkglTestCase_036204_1, VkglTestCase_036204_2);

#define VkglTestCase_036205_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036205_2 "ed.srgb8_alpha8_astc_12x12_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036205, VkglTestCase_036205_1, VkglTestCase_036205_2);

#define VkglTestCase_036206_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036206_2 "xed.srgb8_alpha8_astc_12x12_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036206, VkglTestCase_036206_1, VkglTestCase_036206_2);

#define VkglTestCase_036207_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036207_2 "srgb8_alpha8_astc_12x12_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036207, VkglTestCase_036207_1, VkglTestCase_036207_2);

#define VkglTestCase_036208_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036208_2 "d.srgb8_alpha8_astc_12x12_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036208, VkglTestCase_036208_1, VkglTestCase_036208_2);

#define VkglTestCase_036209_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036209_2 "xed.srgb8_alpha8_astc_12x12_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036209, VkglTestCase_036209_1, VkglTestCase_036209_2);

#define VkglTestCase_036210_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036210_2 "xed.srgb8_alpha8_astc_12x12_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036210, VkglTestCase_036210_1, VkglTestCase_036210_2);

#define VkglTestCase_036211_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036211_2 "ixed.srgb8_alpha8_astc_12x12_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036211, VkglTestCase_036211_1, VkglTestCase_036211_2);

#define VkglTestCase_036212_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036212_2 ".srgb8_alpha8_astc_12x12_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036212, VkglTestCase_036212_1, VkglTestCase_036212_2);

#define VkglTestCase_036213_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036213_2 "ed.srgb8_alpha8_astc_12x12_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036213, VkglTestCase_036213_1, VkglTestCase_036213_2);

#define VkglTestCase_036214_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036214_2 "srgb8_alpha8_astc_12x12_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036214, VkglTestCase_036214_1, VkglTestCase_036214_2);

#define VkglTestCase_036215_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036215_2 "srgb8_alpha8_astc_12x12_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036215, VkglTestCase_036215_1, VkglTestCase_036215_2);

#define VkglTestCase_036216_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036216_2 ".srgb8_alpha8_astc_12x12_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036216, VkglTestCase_036216_1, VkglTestCase_036216_2);

#define VkglTestCase_036217_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.srg"
#define VkglTestCase_036217_2 "b8_alpha8_astc_12x12_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036217, VkglTestCase_036217_1, VkglTestCase_036217_2);

#define VkglTestCase_036218_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_036218_2 "rgb8_alpha8_astc_12x12_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036218, VkglTestCase_036218_1, VkglTestCase_036218_2);
