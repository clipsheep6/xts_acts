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

#define VkglTestCase_035799_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035799_2 "xed.srgb8_alpha8_astc_6x5_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035799, VkglTestCase_035799_1, VkglTestCase_035799_2);

#define VkglTestCase_035800_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035800_2 "xed.srgb8_alpha8_astc_6x5_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035800, VkglTestCase_035800_1, VkglTestCase_035800_2);

#define VkglTestCase_035801_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035801_2 "ixed.srgb8_alpha8_astc_6x5_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035801, VkglTestCase_035801_1, VkglTestCase_035801_2);

#define VkglTestCase_035802_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035802_2 ".srgb8_alpha8_astc_6x5_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035802, VkglTestCase_035802_1, VkglTestCase_035802_2);

#define VkglTestCase_035803_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035803_2 "ed.srgb8_alpha8_astc_6x5_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035803, VkglTestCase_035803_1, VkglTestCase_035803_2);

#define VkglTestCase_035804_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035804_2 "xed.srgb8_alpha8_astc_6x5_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035804, VkglTestCase_035804_1, VkglTestCase_035804_2);

#define VkglTestCase_035805_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035805_2 "xed.srgb8_alpha8_astc_6x5_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035805, VkglTestCase_035805_1, VkglTestCase_035805_2);

#define VkglTestCase_035806_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035806_2 "ixed.srgb8_alpha8_astc_6x5_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035806, VkglTestCase_035806_1, VkglTestCase_035806_2);

#define VkglTestCase_035807_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035807_2 ".srgb8_alpha8_astc_6x5_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035807, VkglTestCase_035807_1, VkglTestCase_035807_2);

#define VkglTestCase_035808_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035808_2 "ed.srgb8_alpha8_astc_6x5_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035808, VkglTestCase_035808_1, VkglTestCase_035808_2);

#define VkglTestCase_035809_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035809_2 "ixed.srgb8_alpha8_astc_6x5_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035809, VkglTestCase_035809_1, VkglTestCase_035809_2);

#define VkglTestCase_035810_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035810_2 "ixed.srgb8_alpha8_astc_6x5_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035810, VkglTestCase_035810_1, VkglTestCase_035810_2);

#define VkglTestCase_035811_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035811_2 "mixed.srgb8_alpha8_astc_6x5_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035811, VkglTestCase_035811_1, VkglTestCase_035811_2);

#define VkglTestCase_035812_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035812_2 "d.srgb8_alpha8_astc_6x5_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035812, VkglTestCase_035812_1, VkglTestCase_035812_2);

#define VkglTestCase_035813_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035813_2 "xed.srgb8_alpha8_astc_6x5_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035813, VkglTestCase_035813_1, VkglTestCase_035813_2);

#define VkglTestCase_035814_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035814_2 ".srgb8_alpha8_astc_6x5_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035814, VkglTestCase_035814_1, VkglTestCase_035814_2);

#define VkglTestCase_035815_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035815_2 ".srgb8_alpha8_astc_6x5_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035815, VkglTestCase_035815_1, VkglTestCase_035815_2);

#define VkglTestCase_035816_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035816_2 "d.srgb8_alpha8_astc_6x5_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035816, VkglTestCase_035816_1, VkglTestCase_035816_2);

#define VkglTestCase_035817_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_035817_2 "gb8_alpha8_astc_6x5_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035817, VkglTestCase_035817_1, VkglTestCase_035817_2);

#define VkglTestCase_035818_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035818_2 "srgb8_alpha8_astc_6x5_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035818, VkglTestCase_035818_1, VkglTestCase_035818_2);
