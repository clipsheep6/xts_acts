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

#define VkglTestCase_036139_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036139_2 "ed.rgba32ui_srgb8_alpha8_astc_12x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036139, VkglTestCase_036139_1, VkglTestCase_036139_2);

#define VkglTestCase_036140_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036140_2 "ed.rgba32ui_srgb8_alpha8_astc_12x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036140, VkglTestCase_036140_1, VkglTestCase_036140_2);

#define VkglTestCase_036141_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036141_2 "xed.rgba32ui_srgb8_alpha8_astc_12x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036141, VkglTestCase_036141_1, VkglTestCase_036141_2);

#define VkglTestCase_036142_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036142_2 "rgba32ui_srgb8_alpha8_astc_12x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036142, VkglTestCase_036142_1, VkglTestCase_036142_2);

#define VkglTestCase_036143_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036143_2 "ed.rgba32ui_srgb8_alpha8_astc_12x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036143, VkglTestCase_036143_1, VkglTestCase_036143_2);

#define VkglTestCase_036144_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036144_2 "ed.rgba32ui_srgb8_alpha8_astc_12x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036144, VkglTestCase_036144_1, VkglTestCase_036144_2);

#define VkglTestCase_036145_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036145_2 "xed.rgba32ui_srgb8_alpha8_astc_12x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036145, VkglTestCase_036145_1, VkglTestCase_036145_2);

#define VkglTestCase_036146_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036146_2 "rgba32ui_srgb8_alpha8_astc_12x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036146, VkglTestCase_036146_1, VkglTestCase_036146_2);

#define VkglTestCase_036147_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036147_2 "xed.rgba32ui_srgb8_alpha8_astc_12x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036147, VkglTestCase_036147_1, VkglTestCase_036147_2);

#define VkglTestCase_036148_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036148_2 "xed.rgba32ui_srgb8_alpha8_astc_12x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036148, VkglTestCase_036148_1, VkglTestCase_036148_2);

#define VkglTestCase_036149_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036149_2 "ixed.rgba32ui_srgb8_alpha8_astc_12x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036149, VkglTestCase_036149_1, VkglTestCase_036149_2);

#define VkglTestCase_036150_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036150_2 ".rgba32ui_srgb8_alpha8_astc_12x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036150, VkglTestCase_036150_1, VkglTestCase_036150_2);

#define VkglTestCase_036151_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036151_2 "rgba32ui_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036151, VkglTestCase_036151_1, VkglTestCase_036151_2);

#define VkglTestCase_036152_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036152_2 "rgba32ui_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036152, VkglTestCase_036152_1, VkglTestCase_036152_2);

#define VkglTestCase_036153_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036153_2 ".rgba32ui_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036153, VkglTestCase_036153_1, VkglTestCase_036153_2);

#define VkglTestCase_036154_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rgb"
#define VkglTestCase_036154_2 "a32ui_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036154, VkglTestCase_036154_1, VkglTestCase_036154_2);

#define VkglTestCase_036155_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036155_2 "d.rgba32ui_srgb8_alpha8_astc_12x10_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036155, VkglTestCase_036155_1, VkglTestCase_036155_2);

#define VkglTestCase_036156_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036156_2 "d.rgba32ui_srgb8_alpha8_astc_12x10_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036156, VkglTestCase_036156_1, VkglTestCase_036156_2);

#define VkglTestCase_036157_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036157_2 "ed.rgba32ui_srgb8_alpha8_astc_12x10_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036157, VkglTestCase_036157_1, VkglTestCase_036157_2);

#define VkglTestCase_036158_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_036158_2 "gba32ui_srgb8_alpha8_astc_12x10_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036158, VkglTestCase_036158_1, VkglTestCase_036158_2);
