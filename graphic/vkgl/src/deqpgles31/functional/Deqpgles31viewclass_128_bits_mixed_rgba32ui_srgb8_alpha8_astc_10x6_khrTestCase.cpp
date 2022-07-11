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

#define VkglTestCase_036019_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036019_2 "xed.rgba32ui_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036019, VkglTestCase_036019_1, VkglTestCase_036019_2);

#define VkglTestCase_036020_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036020_2 "xed.rgba32ui_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036020, VkglTestCase_036020_1, VkglTestCase_036020_2);

#define VkglTestCase_036021_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036021_2 "ixed.rgba32ui_srgb8_alpha8_astc_10x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036021, VkglTestCase_036021_1, VkglTestCase_036021_2);

#define VkglTestCase_036022_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036022_2 ".rgba32ui_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036022, VkglTestCase_036022_1, VkglTestCase_036022_2);

#define VkglTestCase_036023_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036023_2 "xed.rgba32ui_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036023, VkglTestCase_036023_1, VkglTestCase_036023_2);

#define VkglTestCase_036024_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036024_2 "xed.rgba32ui_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036024, VkglTestCase_036024_1, VkglTestCase_036024_2);

#define VkglTestCase_036025_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036025_2 "ixed.rgba32ui_srgb8_alpha8_astc_10x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036025, VkglTestCase_036025_1, VkglTestCase_036025_2);

#define VkglTestCase_036026_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036026_2 ".rgba32ui_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036026, VkglTestCase_036026_1, VkglTestCase_036026_2);

#define VkglTestCase_036027_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036027_2 "ixed.rgba32ui_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036027, VkglTestCase_036027_1, VkglTestCase_036027_2);

#define VkglTestCase_036028_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036028_2 "ixed.rgba32ui_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036028, VkglTestCase_036028_1, VkglTestCase_036028_2);

#define VkglTestCase_036029_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036029_2 "mixed.rgba32ui_srgb8_alpha8_astc_10x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036029, VkglTestCase_036029_1, VkglTestCase_036029_2);

#define VkglTestCase_036030_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036030_2 "d.rgba32ui_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036030, VkglTestCase_036030_1, VkglTestCase_036030_2);

#define VkglTestCase_036031_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036031_2 ".rgba32ui_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036031, VkglTestCase_036031_1, VkglTestCase_036031_2);

#define VkglTestCase_036032_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036032_2 ".rgba32ui_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036032, VkglTestCase_036032_1, VkglTestCase_036032_2);

#define VkglTestCase_036033_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036033_2 "d.rgba32ui_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036033, VkglTestCase_036033_1, VkglTestCase_036033_2);

#define VkglTestCase_036034_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_036034_2 "ba32ui_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036034, VkglTestCase_036034_1, VkglTestCase_036034_2);

#define VkglTestCase_036035_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036035_2 "d.rgba32ui_srgb8_alpha8_astc_10x6_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036035, VkglTestCase_036035_1, VkglTestCase_036035_2);

#define VkglTestCase_036036_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036036_2 "d.rgba32ui_srgb8_alpha8_astc_10x6_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036036, VkglTestCase_036036_1, VkglTestCase_036036_2);

#define VkglTestCase_036037_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036037_2 "ed.rgba32ui_srgb8_alpha8_astc_10x6_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036037, VkglTestCase_036037_1, VkglTestCase_036037_2);

#define VkglTestCase_036038_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_036038_2 "gba32ui_srgb8_alpha8_astc_10x6_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036038, VkglTestCase_036038_1, VkglTestCase_036038_2);
