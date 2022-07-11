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
#include "../ActsDeqpgles310035TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034795_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034795_2 "ixed.rgba32f_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034795, VkglTestCase_034795_1, VkglTestCase_034795_2);

#define VkglTestCase_034796_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034796_2 "ixed.rgba32f_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034796, VkglTestCase_034796_1, VkglTestCase_034796_2);

#define VkglTestCase_034797_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034797_2 "mixed.rgba32f_srgb8_alpha8_astc_8x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034797, VkglTestCase_034797_1, VkglTestCase_034797_2);

#define VkglTestCase_034798_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034798_2 "d.rgba32f_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034798, VkglTestCase_034798_1, VkglTestCase_034798_2);

#define VkglTestCase_034799_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034799_2 "ixed.rgba32f_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034799, VkglTestCase_034799_1, VkglTestCase_034799_2);

#define VkglTestCase_034800_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034800_2 "ixed.rgba32f_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034800, VkglTestCase_034800_1, VkglTestCase_034800_2);

#define VkglTestCase_034801_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034801_2 "mixed.rgba32f_srgb8_alpha8_astc_8x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034801, VkglTestCase_034801_1, VkglTestCase_034801_2);

#define VkglTestCase_034802_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034802_2 "d.rgba32f_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034802, VkglTestCase_034802_1, VkglTestCase_034802_2);

#define VkglTestCase_034803_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034803_2 "mixed.rgba32f_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034803, VkglTestCase_034803_1, VkglTestCase_034803_2);

#define VkglTestCase_034804_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034804_2 "mixed.rgba32f_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034804, VkglTestCase_034804_1, VkglTestCase_034804_2);

#define VkglTestCase_034805_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034805_2 "_mixed.rgba32f_srgb8_alpha8_astc_8x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034805, VkglTestCase_034805_1, VkglTestCase_034805_2);

#define VkglTestCase_034806_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034806_2 "ed.rgba32f_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034806, VkglTestCase_034806_1, VkglTestCase_034806_2);

#define VkglTestCase_034807_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034807_2 "d.rgba32f_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034807, VkglTestCase_034807_1, VkglTestCase_034807_2);

#define VkglTestCase_034808_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034808_2 "d.rgba32f_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034808, VkglTestCase_034808_1, VkglTestCase_034808_2);

#define VkglTestCase_034809_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034809_2 "ed.rgba32f_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034809, VkglTestCase_034809_1, VkglTestCase_034809_2);

#define VkglTestCase_034810_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_034810_2 "gba32f_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034810, VkglTestCase_034810_1, VkglTestCase_034810_2);
