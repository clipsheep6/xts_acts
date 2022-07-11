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

#define VkglTestCase_035819_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035819_2 "xed.rgba32ui_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035819, VkglTestCase_035819_1, VkglTestCase_035819_2);

#define VkglTestCase_035820_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035820_2 "xed.rgba32ui_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035820, VkglTestCase_035820_1, VkglTestCase_035820_2);

#define VkglTestCase_035821_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035821_2 "ixed.rgba32ui_srgb8_alpha8_astc_6x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035821, VkglTestCase_035821_1, VkglTestCase_035821_2);

#define VkglTestCase_035822_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035822_2 ".rgba32ui_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035822, VkglTestCase_035822_1, VkglTestCase_035822_2);

#define VkglTestCase_035823_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035823_2 "xed.rgba32ui_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035823, VkglTestCase_035823_1, VkglTestCase_035823_2);

#define VkglTestCase_035824_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035824_2 "xed.rgba32ui_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035824, VkglTestCase_035824_1, VkglTestCase_035824_2);

#define VkglTestCase_035825_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035825_2 "ixed.rgba32ui_srgb8_alpha8_astc_6x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035825, VkglTestCase_035825_1, VkglTestCase_035825_2);

#define VkglTestCase_035826_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035826_2 ".rgba32ui_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035826, VkglTestCase_035826_1, VkglTestCase_035826_2);

#define VkglTestCase_035827_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035827_2 "ixed.rgba32ui_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035827, VkglTestCase_035827_1, VkglTestCase_035827_2);

#define VkglTestCase_035828_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035828_2 "ixed.rgba32ui_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035828, VkglTestCase_035828_1, VkglTestCase_035828_2);

#define VkglTestCase_035829_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035829_2 "mixed.rgba32ui_srgb8_alpha8_astc_6x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035829, VkglTestCase_035829_1, VkglTestCase_035829_2);

#define VkglTestCase_035830_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035830_2 "d.rgba32ui_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035830, VkglTestCase_035830_1, VkglTestCase_035830_2);

#define VkglTestCase_035831_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035831_2 ".rgba32ui_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035831, VkglTestCase_035831_1, VkglTestCase_035831_2);

#define VkglTestCase_035832_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035832_2 ".rgba32ui_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035832, VkglTestCase_035832_1, VkglTestCase_035832_2);

#define VkglTestCase_035833_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035833_2 "d.rgba32ui_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035833, VkglTestCase_035833_1, VkglTestCase_035833_2);

#define VkglTestCase_035834_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_035834_2 "ba32ui_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035834, VkglTestCase_035834_1, VkglTestCase_035834_2);

#define VkglTestCase_035835_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035835_2 "ed.rgba32ui_srgb8_alpha8_astc_6x6_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035835, VkglTestCase_035835_1, VkglTestCase_035835_2);

#define VkglTestCase_035836_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035836_2 "ed.rgba32ui_srgb8_alpha8_astc_6x6_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035836, VkglTestCase_035836_1, VkglTestCase_035836_2);

#define VkglTestCase_035837_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035837_2 "xed.rgba32ui_srgb8_alpha8_astc_6x6_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035837, VkglTestCase_035837_1, VkglTestCase_035837_2);

#define VkglTestCase_035838_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035838_2 "rgba32ui_srgb8_alpha8_astc_6x6_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035838, VkglTestCase_035838_1, VkglTestCase_035838_2);
