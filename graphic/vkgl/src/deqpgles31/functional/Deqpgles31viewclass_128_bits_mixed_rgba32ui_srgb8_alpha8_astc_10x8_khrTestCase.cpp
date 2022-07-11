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

#define VkglTestCase_036059_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036059_2 "xed.rgba32ui_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036059, VkglTestCase_036059_1, VkglTestCase_036059_2);

#define VkglTestCase_036060_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036060_2 "xed.rgba32ui_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036060, VkglTestCase_036060_1, VkglTestCase_036060_2);

#define VkglTestCase_036061_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036061_2 "ixed.rgba32ui_srgb8_alpha8_astc_10x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036061, VkglTestCase_036061_1, VkglTestCase_036061_2);

#define VkglTestCase_036062_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036062_2 ".rgba32ui_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036062, VkglTestCase_036062_1, VkglTestCase_036062_2);

#define VkglTestCase_036063_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036063_2 "xed.rgba32ui_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036063, VkglTestCase_036063_1, VkglTestCase_036063_2);

#define VkglTestCase_036064_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036064_2 "xed.rgba32ui_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036064, VkglTestCase_036064_1, VkglTestCase_036064_2);

#define VkglTestCase_036065_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036065_2 "ixed.rgba32ui_srgb8_alpha8_astc_10x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036065, VkglTestCase_036065_1, VkglTestCase_036065_2);

#define VkglTestCase_036066_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036066_2 ".rgba32ui_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036066, VkglTestCase_036066_1, VkglTestCase_036066_2);

#define VkglTestCase_036067_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036067_2 "ixed.rgba32ui_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036067, VkglTestCase_036067_1, VkglTestCase_036067_2);

#define VkglTestCase_036068_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036068_2 "ixed.rgba32ui_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036068, VkglTestCase_036068_1, VkglTestCase_036068_2);

#define VkglTestCase_036069_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036069_2 "mixed.rgba32ui_srgb8_alpha8_astc_10x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036069, VkglTestCase_036069_1, VkglTestCase_036069_2);

#define VkglTestCase_036070_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036070_2 "d.rgba32ui_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036070, VkglTestCase_036070_1, VkglTestCase_036070_2);

#define VkglTestCase_036071_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036071_2 ".rgba32ui_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036071, VkglTestCase_036071_1, VkglTestCase_036071_2);

#define VkglTestCase_036072_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036072_2 ".rgba32ui_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036072, VkglTestCase_036072_1, VkglTestCase_036072_2);

#define VkglTestCase_036073_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036073_2 "d.rgba32ui_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036073, VkglTestCase_036073_1, VkglTestCase_036073_2);

#define VkglTestCase_036074_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_036074_2 "ba32ui_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036074, VkglTestCase_036074_1, VkglTestCase_036074_2);

#define VkglTestCase_036075_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036075_2 "d.rgba32ui_srgb8_alpha8_astc_10x8_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036075, VkglTestCase_036075_1, VkglTestCase_036075_2);

#define VkglTestCase_036076_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036076_2 "d.rgba32ui_srgb8_alpha8_astc_10x8_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036076, VkglTestCase_036076_1, VkglTestCase_036076_2);

#define VkglTestCase_036077_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036077_2 "ed.rgba32ui_srgb8_alpha8_astc_10x8_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036077, VkglTestCase_036077_1, VkglTestCase_036077_2);

#define VkglTestCase_036078_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_036078_2 "gba32ui_srgb8_alpha8_astc_10x8_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036078, VkglTestCase_036078_1, VkglTestCase_036078_2);
