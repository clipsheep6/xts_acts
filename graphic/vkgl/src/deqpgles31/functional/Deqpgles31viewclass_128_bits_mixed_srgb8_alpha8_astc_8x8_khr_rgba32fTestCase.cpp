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

#define VkglTestCase_034811_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034811_2 "ixed.srgb8_alpha8_astc_8x8_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034811, VkglTestCase_034811_1, VkglTestCase_034811_2);

#define VkglTestCase_034812_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034812_2 "ixed.srgb8_alpha8_astc_8x8_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034812, VkglTestCase_034812_1, VkglTestCase_034812_2);

#define VkglTestCase_034813_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034813_2 "mixed.srgb8_alpha8_astc_8x8_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034813, VkglTestCase_034813_1, VkglTestCase_034813_2);

#define VkglTestCase_034814_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034814_2 "d.srgb8_alpha8_astc_8x8_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034814, VkglTestCase_034814_1, VkglTestCase_034814_2);

#define VkglTestCase_034815_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034815_2 "ixed.srgb8_alpha8_astc_8x8_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034815, VkglTestCase_034815_1, VkglTestCase_034815_2);

#define VkglTestCase_034816_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034816_2 "ixed.srgb8_alpha8_astc_8x8_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034816, VkglTestCase_034816_1, VkglTestCase_034816_2);

#define VkglTestCase_034817_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034817_2 "mixed.srgb8_alpha8_astc_8x8_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034817, VkglTestCase_034817_1, VkglTestCase_034817_2);

#define VkglTestCase_034818_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034818_2 "d.srgb8_alpha8_astc_8x8_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034818, VkglTestCase_034818_1, VkglTestCase_034818_2);

#define VkglTestCase_034819_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034819_2 "mixed.srgb8_alpha8_astc_8x8_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034819, VkglTestCase_034819_1, VkglTestCase_034819_2);

#define VkglTestCase_034820_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034820_2 "mixed.srgb8_alpha8_astc_8x8_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034820, VkglTestCase_034820_1, VkglTestCase_034820_2);

#define VkglTestCase_034821_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034821_2 "_mixed.srgb8_alpha8_astc_8x8_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034821, VkglTestCase_034821_1, VkglTestCase_034821_2);

#define VkglTestCase_034822_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034822_2 "ed.srgb8_alpha8_astc_8x8_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034822, VkglTestCase_034822_1, VkglTestCase_034822_2);

#define VkglTestCase_034823_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034823_2 "d.srgb8_alpha8_astc_8x8_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034823, VkglTestCase_034823_1, VkglTestCase_034823_2);

#define VkglTestCase_034824_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034824_2 "d.srgb8_alpha8_astc_8x8_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034824, VkglTestCase_034824_1, VkglTestCase_034824_2);

#define VkglTestCase_034825_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034825_2 "ed.srgb8_alpha8_astc_8x8_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034825, VkglTestCase_034825_1, VkglTestCase_034825_2);

#define VkglTestCase_034826_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_034826_2 "rgb8_alpha8_astc_8x8_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034826, VkglTestCase_034826_1, VkglTestCase_034826_2);
