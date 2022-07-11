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

#define VkglTestCase_034635_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034635_2 "ixed.rgba32f_srgb8_alpha8_astc_5x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034635, VkglTestCase_034635_1, VkglTestCase_034635_2);

#define VkglTestCase_034636_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034636_2 "ixed.rgba32f_srgb8_alpha8_astc_5x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034636, VkglTestCase_034636_1, VkglTestCase_034636_2);

#define VkglTestCase_034637_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034637_2 "mixed.rgba32f_srgb8_alpha8_astc_5x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034637, VkglTestCase_034637_1, VkglTestCase_034637_2);

#define VkglTestCase_034638_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034638_2 "d.rgba32f_srgb8_alpha8_astc_5x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034638, VkglTestCase_034638_1, VkglTestCase_034638_2);

#define VkglTestCase_034639_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034639_2 "ixed.rgba32f_srgb8_alpha8_astc_5x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034639, VkglTestCase_034639_1, VkglTestCase_034639_2);

#define VkglTestCase_034640_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034640_2 "ixed.rgba32f_srgb8_alpha8_astc_5x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034640, VkglTestCase_034640_1, VkglTestCase_034640_2);

#define VkglTestCase_034641_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034641_2 "mixed.rgba32f_srgb8_alpha8_astc_5x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034641, VkglTestCase_034641_1, VkglTestCase_034641_2);

#define VkglTestCase_034642_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034642_2 "d.rgba32f_srgb8_alpha8_astc_5x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034642, VkglTestCase_034642_1, VkglTestCase_034642_2);

#define VkglTestCase_034643_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034643_2 "mixed.rgba32f_srgb8_alpha8_astc_5x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034643, VkglTestCase_034643_1, VkglTestCase_034643_2);

#define VkglTestCase_034644_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034644_2 "mixed.rgba32f_srgb8_alpha8_astc_5x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034644, VkglTestCase_034644_1, VkglTestCase_034644_2);

#define VkglTestCase_034645_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034645_2 "_mixed.rgba32f_srgb8_alpha8_astc_5x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034645, VkglTestCase_034645_1, VkglTestCase_034645_2);

#define VkglTestCase_034646_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034646_2 "ed.rgba32f_srgb8_alpha8_astc_5x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034646, VkglTestCase_034646_1, VkglTestCase_034646_2);

#define VkglTestCase_034647_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034647_2 "d.rgba32f_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034647, VkglTestCase_034647_1, VkglTestCase_034647_2);

#define VkglTestCase_034648_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034648_2 "d.rgba32f_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034648, VkglTestCase_034648_1, VkglTestCase_034648_2);

#define VkglTestCase_034649_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034649_2 "ed.rgba32f_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034649, VkglTestCase_034649_1, VkglTestCase_034649_2);

#define VkglTestCase_034650_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_034650_2 "gba32f_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034650, VkglTestCase_034650_1, VkglTestCase_034650_2);
