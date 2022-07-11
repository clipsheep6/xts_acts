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

#define VkglTestCase_035899_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035899_2 "xed.rgba32ui_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035899, VkglTestCase_035899_1, VkglTestCase_035899_2);

#define VkglTestCase_035900_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035900_2 "xed.rgba32ui_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035900, VkglTestCase_035900_1, VkglTestCase_035900_2);

#define VkglTestCase_035901_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035901_2 "ixed.rgba32ui_srgb8_alpha8_astc_8x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035901, VkglTestCase_035901_1, VkglTestCase_035901_2);

#define VkglTestCase_035902_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035902_2 ".rgba32ui_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035902, VkglTestCase_035902_1, VkglTestCase_035902_2);

#define VkglTestCase_035903_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035903_2 "xed.rgba32ui_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035903, VkglTestCase_035903_1, VkglTestCase_035903_2);

#define VkglTestCase_035904_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035904_2 "xed.rgba32ui_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035904, VkglTestCase_035904_1, VkglTestCase_035904_2);

#define VkglTestCase_035905_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035905_2 "ixed.rgba32ui_srgb8_alpha8_astc_8x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035905, VkglTestCase_035905_1, VkglTestCase_035905_2);

#define VkglTestCase_035906_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035906_2 ".rgba32ui_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035906, VkglTestCase_035906_1, VkglTestCase_035906_2);

#define VkglTestCase_035907_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035907_2 "ixed.rgba32ui_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035907, VkglTestCase_035907_1, VkglTestCase_035907_2);

#define VkglTestCase_035908_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035908_2 "ixed.rgba32ui_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035908, VkglTestCase_035908_1, VkglTestCase_035908_2);

#define VkglTestCase_035909_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035909_2 "mixed.rgba32ui_srgb8_alpha8_astc_8x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035909, VkglTestCase_035909_1, VkglTestCase_035909_2);

#define VkglTestCase_035910_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035910_2 "d.rgba32ui_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035910, VkglTestCase_035910_1, VkglTestCase_035910_2);

#define VkglTestCase_035911_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035911_2 ".rgba32ui_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035911, VkglTestCase_035911_1, VkglTestCase_035911_2);

#define VkglTestCase_035912_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035912_2 ".rgba32ui_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035912, VkglTestCase_035912_1, VkglTestCase_035912_2);

#define VkglTestCase_035913_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035913_2 "d.rgba32ui_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035913, VkglTestCase_035913_1, VkglTestCase_035913_2);

#define VkglTestCase_035914_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_035914_2 "ba32ui_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035914, VkglTestCase_035914_1, VkglTestCase_035914_2);

#define VkglTestCase_035915_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035915_2 "ed.rgba32ui_srgb8_alpha8_astc_8x6_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035915, VkglTestCase_035915_1, VkglTestCase_035915_2);

#define VkglTestCase_035916_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035916_2 "ed.rgba32ui_srgb8_alpha8_astc_8x6_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035916, VkglTestCase_035916_1, VkglTestCase_035916_2);

#define VkglTestCase_035917_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035917_2 "xed.rgba32ui_srgb8_alpha8_astc_8x6_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035917, VkglTestCase_035917_1, VkglTestCase_035917_2);

#define VkglTestCase_035918_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035918_2 "rgba32ui_srgb8_alpha8_astc_8x6_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035918, VkglTestCase_035918_1, VkglTestCase_035918_2);
