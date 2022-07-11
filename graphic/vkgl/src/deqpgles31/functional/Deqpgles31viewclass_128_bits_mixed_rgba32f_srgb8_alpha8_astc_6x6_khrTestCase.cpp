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

#define VkglTestCase_034699_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034699_2 "ixed.rgba32f_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034699, VkglTestCase_034699_1, VkglTestCase_034699_2);

#define VkglTestCase_034700_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034700_2 "ixed.rgba32f_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034700, VkglTestCase_034700_1, VkglTestCase_034700_2);

#define VkglTestCase_034701_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034701_2 "mixed.rgba32f_srgb8_alpha8_astc_6x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034701, VkglTestCase_034701_1, VkglTestCase_034701_2);

#define VkglTestCase_034702_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034702_2 "d.rgba32f_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034702, VkglTestCase_034702_1, VkglTestCase_034702_2);

#define VkglTestCase_034703_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034703_2 "ixed.rgba32f_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034703, VkglTestCase_034703_1, VkglTestCase_034703_2);

#define VkglTestCase_034704_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034704_2 "ixed.rgba32f_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034704, VkglTestCase_034704_1, VkglTestCase_034704_2);

#define VkglTestCase_034705_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034705_2 "mixed.rgba32f_srgb8_alpha8_astc_6x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034705, VkglTestCase_034705_1, VkglTestCase_034705_2);

#define VkglTestCase_034706_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034706_2 "d.rgba32f_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034706, VkglTestCase_034706_1, VkglTestCase_034706_2);

#define VkglTestCase_034707_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034707_2 "mixed.rgba32f_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034707, VkglTestCase_034707_1, VkglTestCase_034707_2);

#define VkglTestCase_034708_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034708_2 "mixed.rgba32f_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034708, VkglTestCase_034708_1, VkglTestCase_034708_2);

#define VkglTestCase_034709_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034709_2 "_mixed.rgba32f_srgb8_alpha8_astc_6x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034709, VkglTestCase_034709_1, VkglTestCase_034709_2);

#define VkglTestCase_034710_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034710_2 "ed.rgba32f_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034710, VkglTestCase_034710_1, VkglTestCase_034710_2);

#define VkglTestCase_034711_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034711_2 "d.rgba32f_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034711, VkglTestCase_034711_1, VkglTestCase_034711_2);

#define VkglTestCase_034712_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034712_2 "d.rgba32f_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034712, VkglTestCase_034712_1, VkglTestCase_034712_2);

#define VkglTestCase_034713_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034713_2 "ed.rgba32f_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034713, VkglTestCase_034713_1, VkglTestCase_034713_2);

#define VkglTestCase_034714_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_034714_2 "gba32f_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034714, VkglTestCase_034714_1, VkglTestCase_034714_2);
