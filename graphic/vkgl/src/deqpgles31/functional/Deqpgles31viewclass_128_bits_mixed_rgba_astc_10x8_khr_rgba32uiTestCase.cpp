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

#define VkglTestCase_035519_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035519_2 "s_mixed.rgba_astc_10x8_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035519, VkglTestCase_035519_1, VkglTestCase_035519_2);

#define VkglTestCase_035520_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035520_2 "s_mixed.rgba_astc_10x8_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035520, VkglTestCase_035520_1, VkglTestCase_035520_2);

#define VkglTestCase_035521_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035521_2 "ts_mixed.rgba_astc_10x8_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035521, VkglTestCase_035521_1, VkglTestCase_035521_2);

#define VkglTestCase_035522_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035522_2 "ixed.rgba_astc_10x8_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035522, VkglTestCase_035522_1, VkglTestCase_035522_2);

#define VkglTestCase_035523_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035523_2 "mixed.rgba_astc_10x8_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035523, VkglTestCase_035523_1, VkglTestCase_035523_2);

#define VkglTestCase_035524_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035524_2 "s_mixed.rgba_astc_10x8_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035524, VkglTestCase_035524_1, VkglTestCase_035524_2);

#define VkglTestCase_035525_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035525_2 "s_mixed.rgba_astc_10x8_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035525, VkglTestCase_035525_1, VkglTestCase_035525_2);

#define VkglTestCase_035526_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035526_2 "ts_mixed.rgba_astc_10x8_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035526, VkglTestCase_035526_1, VkglTestCase_035526_2);

#define VkglTestCase_035527_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035527_2 "ixed.rgba_astc_10x8_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035527, VkglTestCase_035527_1, VkglTestCase_035527_2);

#define VkglTestCase_035528_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035528_2 "mixed.rgba_astc_10x8_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035528, VkglTestCase_035528_1, VkglTestCase_035528_2);

#define VkglTestCase_035529_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035529_2 "ts_mixed.rgba_astc_10x8_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035529, VkglTestCase_035529_1, VkglTestCase_035529_2);

#define VkglTestCase_035530_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035530_2 "ts_mixed.rgba_astc_10x8_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035530, VkglTestCase_035530_1, VkglTestCase_035530_2);

#define VkglTestCase_035531_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035531_2 "its_mixed.rgba_astc_10x8_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035531, VkglTestCase_035531_1, VkglTestCase_035531_2);

#define VkglTestCase_035532_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035532_2 "mixed.rgba_astc_10x8_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035532, VkglTestCase_035532_1, VkglTestCase_035532_2);

#define VkglTestCase_035533_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035533_2 "_mixed.rgba_astc_10x8_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035533, VkglTestCase_035533_1, VkglTestCase_035533_2);

#define VkglTestCase_035534_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035534_2 "ixed.rgba_astc_10x8_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035534, VkglTestCase_035534_1, VkglTestCase_035534_2);

#define VkglTestCase_035535_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035535_2 "ixed.rgba_astc_10x8_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035535, VkglTestCase_035535_1, VkglTestCase_035535_2);

#define VkglTestCase_035536_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035536_2 "mixed.rgba_astc_10x8_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035536, VkglTestCase_035536_1, VkglTestCase_035536_2);

#define VkglTestCase_035537_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035537_2 "d.rgba_astc_10x8_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035537, VkglTestCase_035537_1, VkglTestCase_035537_2);

#define VkglTestCase_035538_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035538_2 "ed.rgba_astc_10x8_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035538, VkglTestCase_035538_1, VkglTestCase_035538_2);
