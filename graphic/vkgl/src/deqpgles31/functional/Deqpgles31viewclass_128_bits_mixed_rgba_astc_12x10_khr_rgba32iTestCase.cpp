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

#define VkglTestCase_036799_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036799_2 "s_mixed.rgba_astc_12x10_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036799, VkglTestCase_036799_1, VkglTestCase_036799_2);

#define VkglTestCase_036800_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036800_2 "s_mixed.rgba_astc_12x10_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036800, VkglTestCase_036800_1, VkglTestCase_036800_2);

#define VkglTestCase_036801_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036801_2 "ts_mixed.rgba_astc_12x10_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036801, VkglTestCase_036801_1, VkglTestCase_036801_2);

#define VkglTestCase_036802_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036802_2 "ixed.rgba_astc_12x10_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036802, VkglTestCase_036802_1, VkglTestCase_036802_2);

#define VkglTestCase_036803_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036803_2 "mixed.rgba_astc_12x10_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036803, VkglTestCase_036803_1, VkglTestCase_036803_2);

#define VkglTestCase_036804_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036804_2 "s_mixed.rgba_astc_12x10_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036804, VkglTestCase_036804_1, VkglTestCase_036804_2);

#define VkglTestCase_036805_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036805_2 "s_mixed.rgba_astc_12x10_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036805, VkglTestCase_036805_1, VkglTestCase_036805_2);

#define VkglTestCase_036806_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036806_2 "ts_mixed.rgba_astc_12x10_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036806, VkglTestCase_036806_1, VkglTestCase_036806_2);

#define VkglTestCase_036807_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036807_2 "ixed.rgba_astc_12x10_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036807, VkglTestCase_036807_1, VkglTestCase_036807_2);

#define VkglTestCase_036808_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036808_2 "mixed.rgba_astc_12x10_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036808, VkglTestCase_036808_1, VkglTestCase_036808_2);

#define VkglTestCase_036809_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036809_2 "ts_mixed.rgba_astc_12x10_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036809, VkglTestCase_036809_1, VkglTestCase_036809_2);

#define VkglTestCase_036810_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036810_2 "ts_mixed.rgba_astc_12x10_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036810, VkglTestCase_036810_1, VkglTestCase_036810_2);

#define VkglTestCase_036811_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036811_2 "its_mixed.rgba_astc_12x10_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036811, VkglTestCase_036811_1, VkglTestCase_036811_2);

#define VkglTestCase_036812_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036812_2 "mixed.rgba_astc_12x10_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036812, VkglTestCase_036812_1, VkglTestCase_036812_2);

#define VkglTestCase_036813_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036813_2 "_mixed.rgba_astc_12x10_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036813, VkglTestCase_036813_1, VkglTestCase_036813_2);

#define VkglTestCase_036814_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036814_2 "ixed.rgba_astc_12x10_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036814, VkglTestCase_036814_1, VkglTestCase_036814_2);

#define VkglTestCase_036815_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036815_2 "ixed.rgba_astc_12x10_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036815, VkglTestCase_036815_1, VkglTestCase_036815_2);

#define VkglTestCase_036816_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036816_2 "mixed.rgba_astc_12x10_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036816, VkglTestCase_036816_1, VkglTestCase_036816_2);

#define VkglTestCase_036817_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036817_2 "d.rgba_astc_12x10_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036817, VkglTestCase_036817_1, VkglTestCase_036817_2);

#define VkglTestCase_036818_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036818_2 "ed.rgba_astc_12x10_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036818, VkglTestCase_036818_1, VkglTestCase_036818_2);
