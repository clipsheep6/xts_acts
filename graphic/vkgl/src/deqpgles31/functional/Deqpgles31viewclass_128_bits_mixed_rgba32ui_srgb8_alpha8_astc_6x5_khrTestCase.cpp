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

#define VkglTestCase_035779_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035779_2 "xed.rgba32ui_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035779, VkglTestCase_035779_1, VkglTestCase_035779_2);

#define VkglTestCase_035780_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035780_2 "xed.rgba32ui_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035780, VkglTestCase_035780_1, VkglTestCase_035780_2);

#define VkglTestCase_035781_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035781_2 "ixed.rgba32ui_srgb8_alpha8_astc_6x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035781, VkglTestCase_035781_1, VkglTestCase_035781_2);

#define VkglTestCase_035782_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035782_2 ".rgba32ui_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035782, VkglTestCase_035782_1, VkglTestCase_035782_2);

#define VkglTestCase_035783_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035783_2 "xed.rgba32ui_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035783, VkglTestCase_035783_1, VkglTestCase_035783_2);

#define VkglTestCase_035784_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035784_2 "xed.rgba32ui_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035784, VkglTestCase_035784_1, VkglTestCase_035784_2);

#define VkglTestCase_035785_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035785_2 "ixed.rgba32ui_srgb8_alpha8_astc_6x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035785, VkglTestCase_035785_1, VkglTestCase_035785_2);

#define VkglTestCase_035786_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035786_2 ".rgba32ui_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035786, VkglTestCase_035786_1, VkglTestCase_035786_2);

#define VkglTestCase_035787_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035787_2 "ixed.rgba32ui_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035787, VkglTestCase_035787_1, VkglTestCase_035787_2);

#define VkglTestCase_035788_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035788_2 "ixed.rgba32ui_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035788, VkglTestCase_035788_1, VkglTestCase_035788_2);

#define VkglTestCase_035789_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035789_2 "mixed.rgba32ui_srgb8_alpha8_astc_6x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035789, VkglTestCase_035789_1, VkglTestCase_035789_2);

#define VkglTestCase_035790_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035790_2 "d.rgba32ui_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035790, VkglTestCase_035790_1, VkglTestCase_035790_2);

#define VkglTestCase_035791_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035791_2 ".rgba32ui_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035791, VkglTestCase_035791_1, VkglTestCase_035791_2);

#define VkglTestCase_035792_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035792_2 ".rgba32ui_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035792, VkglTestCase_035792_1, VkglTestCase_035792_2);

#define VkglTestCase_035793_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035793_2 "d.rgba32ui_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035793, VkglTestCase_035793_1, VkglTestCase_035793_2);

#define VkglTestCase_035794_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_035794_2 "ba32ui_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035794, VkglTestCase_035794_1, VkglTestCase_035794_2);

#define VkglTestCase_035795_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035795_2 "ed.rgba32ui_srgb8_alpha8_astc_6x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035795, VkglTestCase_035795_1, VkglTestCase_035795_2);

#define VkglTestCase_035796_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035796_2 "ed.rgba32ui_srgb8_alpha8_astc_6x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035796, VkglTestCase_035796_1, VkglTestCase_035796_2);

#define VkglTestCase_035797_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035797_2 "xed.rgba32ui_srgb8_alpha8_astc_6x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035797, VkglTestCase_035797_1, VkglTestCase_035797_2);

#define VkglTestCase_035798_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035798_2 "rgba32ui_srgb8_alpha8_astc_6x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035798, VkglTestCase_035798_1, VkglTestCase_035798_2);
