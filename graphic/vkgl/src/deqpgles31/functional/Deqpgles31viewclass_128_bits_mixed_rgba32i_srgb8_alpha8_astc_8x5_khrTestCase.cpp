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

#define VkglTestCase_037059_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037059_2 "ixed.rgba32i_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037059, VkglTestCase_037059_1, VkglTestCase_037059_2);

#define VkglTestCase_037060_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037060_2 "ixed.rgba32i_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037060, VkglTestCase_037060_1, VkglTestCase_037060_2);

#define VkglTestCase_037061_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037061_2 "mixed.rgba32i_srgb8_alpha8_astc_8x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037061, VkglTestCase_037061_1, VkglTestCase_037061_2);

#define VkglTestCase_037062_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037062_2 "d.rgba32i_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037062, VkglTestCase_037062_1, VkglTestCase_037062_2);

#define VkglTestCase_037063_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037063_2 "ixed.rgba32i_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037063, VkglTestCase_037063_1, VkglTestCase_037063_2);

#define VkglTestCase_037064_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037064_2 "ixed.rgba32i_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037064, VkglTestCase_037064_1, VkglTestCase_037064_2);

#define VkglTestCase_037065_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037065_2 "mixed.rgba32i_srgb8_alpha8_astc_8x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037065, VkglTestCase_037065_1, VkglTestCase_037065_2);

#define VkglTestCase_037066_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037066_2 "d.rgba32i_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037066, VkglTestCase_037066_1, VkglTestCase_037066_2);

#define VkglTestCase_037067_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037067_2 "mixed.rgba32i_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037067, VkglTestCase_037067_1, VkglTestCase_037067_2);

#define VkglTestCase_037068_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037068_2 "mixed.rgba32i_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037068, VkglTestCase_037068_1, VkglTestCase_037068_2);

#define VkglTestCase_037069_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_037069_2 "_mixed.rgba32i_srgb8_alpha8_astc_8x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037069, VkglTestCase_037069_1, VkglTestCase_037069_2);

#define VkglTestCase_037070_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037070_2 "ed.rgba32i_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037070, VkglTestCase_037070_1, VkglTestCase_037070_2);

#define VkglTestCase_037071_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037071_2 "d.rgba32i_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037071, VkglTestCase_037071_1, VkglTestCase_037071_2);

#define VkglTestCase_037072_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037072_2 "d.rgba32i_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037072, VkglTestCase_037072_1, VkglTestCase_037072_2);

#define VkglTestCase_037073_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037073_2 "ed.rgba32i_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037073, VkglTestCase_037073_1, VkglTestCase_037073_2);

#define VkglTestCase_037074_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_037074_2 "gba32i_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037074, VkglTestCase_037074_1, VkglTestCase_037074_2);

#define VkglTestCase_037075_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037075_2 "ed.rgba32i_srgb8_alpha8_astc_8x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037075, VkglTestCase_037075_1, VkglTestCase_037075_2);

#define VkglTestCase_037076_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037076_2 "ed.rgba32i_srgb8_alpha8_astc_8x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037076, VkglTestCase_037076_1, VkglTestCase_037076_2);

#define VkglTestCase_037077_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037077_2 "xed.rgba32i_srgb8_alpha8_astc_8x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037077, VkglTestCase_037077_1, VkglTestCase_037077_2);

#define VkglTestCase_037078_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037078_2 "rgba32i_srgb8_alpha8_astc_8x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037078, VkglTestCase_037078_1, VkglTestCase_037078_2);
