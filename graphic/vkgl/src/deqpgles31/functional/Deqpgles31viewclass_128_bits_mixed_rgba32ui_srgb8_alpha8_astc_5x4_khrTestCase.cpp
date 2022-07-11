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

#define VkglTestCase_035699_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035699_2 "xed.rgba32ui_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035699, VkglTestCase_035699_1, VkglTestCase_035699_2);

#define VkglTestCase_035700_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035700_2 "xed.rgba32ui_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035700, VkglTestCase_035700_1, VkglTestCase_035700_2);

#define VkglTestCase_035701_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035701_2 "ixed.rgba32ui_srgb8_alpha8_astc_5x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035701, VkglTestCase_035701_1, VkglTestCase_035701_2);

#define VkglTestCase_035702_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035702_2 ".rgba32ui_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035702, VkglTestCase_035702_1, VkglTestCase_035702_2);

#define VkglTestCase_035703_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035703_2 "xed.rgba32ui_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035703, VkglTestCase_035703_1, VkglTestCase_035703_2);

#define VkglTestCase_035704_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035704_2 "xed.rgba32ui_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035704, VkglTestCase_035704_1, VkglTestCase_035704_2);

#define VkglTestCase_035705_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035705_2 "ixed.rgba32ui_srgb8_alpha8_astc_5x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035705, VkglTestCase_035705_1, VkglTestCase_035705_2);

#define VkglTestCase_035706_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035706_2 ".rgba32ui_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035706, VkglTestCase_035706_1, VkglTestCase_035706_2);

#define VkglTestCase_035707_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035707_2 "ixed.rgba32ui_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035707, VkglTestCase_035707_1, VkglTestCase_035707_2);

#define VkglTestCase_035708_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035708_2 "ixed.rgba32ui_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035708, VkglTestCase_035708_1, VkglTestCase_035708_2);

#define VkglTestCase_035709_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035709_2 "mixed.rgba32ui_srgb8_alpha8_astc_5x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035709, VkglTestCase_035709_1, VkglTestCase_035709_2);

#define VkglTestCase_035710_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035710_2 "d.rgba32ui_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035710, VkglTestCase_035710_1, VkglTestCase_035710_2);

#define VkglTestCase_035711_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035711_2 ".rgba32ui_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035711, VkglTestCase_035711_1, VkglTestCase_035711_2);

#define VkglTestCase_035712_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035712_2 ".rgba32ui_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035712, VkglTestCase_035712_1, VkglTestCase_035712_2);

#define VkglTestCase_035713_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035713_2 "d.rgba32ui_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035713, VkglTestCase_035713_1, VkglTestCase_035713_2);

#define VkglTestCase_035714_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_035714_2 "ba32ui_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035714, VkglTestCase_035714_1, VkglTestCase_035714_2);

#define VkglTestCase_035715_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035715_2 "ed.rgba32ui_srgb8_alpha8_astc_5x4_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035715, VkglTestCase_035715_1, VkglTestCase_035715_2);

#define VkglTestCase_035716_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035716_2 "ed.rgba32ui_srgb8_alpha8_astc_5x4_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035716, VkglTestCase_035716_1, VkglTestCase_035716_2);

#define VkglTestCase_035717_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035717_2 "xed.rgba32ui_srgb8_alpha8_astc_5x4_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035717, VkglTestCase_035717_1, VkglTestCase_035717_2);

#define VkglTestCase_035718_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035718_2 "rgba32ui_srgb8_alpha8_astc_5x4_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035718, VkglTestCase_035718_1, VkglTestCase_035718_2);
