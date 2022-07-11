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

#define VkglTestCase_035759_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035759_2 "xed.srgb8_alpha8_astc_5x5_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035759, VkglTestCase_035759_1, VkglTestCase_035759_2);

#define VkglTestCase_035760_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035760_2 "xed.srgb8_alpha8_astc_5x5_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035760, VkglTestCase_035760_1, VkglTestCase_035760_2);

#define VkglTestCase_035761_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035761_2 "ixed.srgb8_alpha8_astc_5x5_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035761, VkglTestCase_035761_1, VkglTestCase_035761_2);

#define VkglTestCase_035762_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035762_2 ".srgb8_alpha8_astc_5x5_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035762, VkglTestCase_035762_1, VkglTestCase_035762_2);

#define VkglTestCase_035763_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035763_2 "ed.srgb8_alpha8_astc_5x5_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035763, VkglTestCase_035763_1, VkglTestCase_035763_2);

#define VkglTestCase_035764_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035764_2 "xed.srgb8_alpha8_astc_5x5_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035764, VkglTestCase_035764_1, VkglTestCase_035764_2);

#define VkglTestCase_035765_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035765_2 "xed.srgb8_alpha8_astc_5x5_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035765, VkglTestCase_035765_1, VkglTestCase_035765_2);

#define VkglTestCase_035766_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035766_2 "ixed.srgb8_alpha8_astc_5x5_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035766, VkglTestCase_035766_1, VkglTestCase_035766_2);

#define VkglTestCase_035767_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035767_2 ".srgb8_alpha8_astc_5x5_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035767, VkglTestCase_035767_1, VkglTestCase_035767_2);

#define VkglTestCase_035768_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035768_2 "ed.srgb8_alpha8_astc_5x5_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035768, VkglTestCase_035768_1, VkglTestCase_035768_2);

#define VkglTestCase_035769_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035769_2 "ixed.srgb8_alpha8_astc_5x5_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035769, VkglTestCase_035769_1, VkglTestCase_035769_2);

#define VkglTestCase_035770_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035770_2 "ixed.srgb8_alpha8_astc_5x5_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035770, VkglTestCase_035770_1, VkglTestCase_035770_2);

#define VkglTestCase_035771_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035771_2 "mixed.srgb8_alpha8_astc_5x5_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035771, VkglTestCase_035771_1, VkglTestCase_035771_2);

#define VkglTestCase_035772_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035772_2 "d.srgb8_alpha8_astc_5x5_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035772, VkglTestCase_035772_1, VkglTestCase_035772_2);

#define VkglTestCase_035773_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035773_2 "xed.srgb8_alpha8_astc_5x5_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035773, VkglTestCase_035773_1, VkglTestCase_035773_2);

#define VkglTestCase_035774_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035774_2 ".srgb8_alpha8_astc_5x5_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035774, VkglTestCase_035774_1, VkglTestCase_035774_2);

#define VkglTestCase_035775_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035775_2 ".srgb8_alpha8_astc_5x5_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035775, VkglTestCase_035775_1, VkglTestCase_035775_2);

#define VkglTestCase_035776_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035776_2 "d.srgb8_alpha8_astc_5x5_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035776, VkglTestCase_035776_1, VkglTestCase_035776_2);

#define VkglTestCase_035777_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_035777_2 "gb8_alpha8_astc_5x5_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035777, VkglTestCase_035777_1, VkglTestCase_035777_2);

#define VkglTestCase_035778_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035778_2 "srgb8_alpha8_astc_5x5_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035778, VkglTestCase_035778_1, VkglTestCase_035778_2);
