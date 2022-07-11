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
#include "../ActsDeqpgles310038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037379_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037379_2 "xed.rgba32i_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037379, VkglTestCase_037379_1, VkglTestCase_037379_2);

#define VkglTestCase_037380_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037380_2 "xed.rgba32i_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037380, VkglTestCase_037380_1, VkglTestCase_037380_2);

#define VkglTestCase_037381_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037381_2 "ixed.rgba32i_srgb8_alpha8_astc_12x12_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037381, VkglTestCase_037381_1, VkglTestCase_037381_2);

#define VkglTestCase_037382_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037382_2 ".rgba32i_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037382, VkglTestCase_037382_1, VkglTestCase_037382_2);

#define VkglTestCase_037383_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037383_2 "xed.rgba32i_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037383, VkglTestCase_037383_1, VkglTestCase_037383_2);

#define VkglTestCase_037384_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037384_2 "xed.rgba32i_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037384, VkglTestCase_037384_1, VkglTestCase_037384_2);

#define VkglTestCase_037385_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037385_2 "ixed.rgba32i_srgb8_alpha8_astc_12x12_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037385, VkglTestCase_037385_1, VkglTestCase_037385_2);

#define VkglTestCase_037386_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037386_2 ".rgba32i_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037386, VkglTestCase_037386_1, VkglTestCase_037386_2);

#define VkglTestCase_037387_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037387_2 "ixed.rgba32i_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037387, VkglTestCase_037387_1, VkglTestCase_037387_2);

#define VkglTestCase_037388_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037388_2 "ixed.rgba32i_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037388, VkglTestCase_037388_1, VkglTestCase_037388_2);

#define VkglTestCase_037389_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037389_2 "mixed.rgba32i_srgb8_alpha8_astc_12x12_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037389, VkglTestCase_037389_1, VkglTestCase_037389_2);

#define VkglTestCase_037390_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037390_2 "d.rgba32i_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037390, VkglTestCase_037390_1, VkglTestCase_037390_2);

#define VkglTestCase_037391_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037391_2 ".rgba32i_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037391, VkglTestCase_037391_1, VkglTestCase_037391_2);

#define VkglTestCase_037392_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037392_2 ".rgba32i_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037392, VkglTestCase_037392_1, VkglTestCase_037392_2);

#define VkglTestCase_037393_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037393_2 "d.rgba32i_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037393, VkglTestCase_037393_1, VkglTestCase_037393_2);

#define VkglTestCase_037394_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_037394_2 "ba32i_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037394, VkglTestCase_037394_1, VkglTestCase_037394_2);

#define VkglTestCase_037395_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037395_2 "d.rgba32i_srgb8_alpha8_astc_12x12_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037395, VkglTestCase_037395_1, VkglTestCase_037395_2);

#define VkglTestCase_037396_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037396_2 "d.rgba32i_srgb8_alpha8_astc_12x12_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037396, VkglTestCase_037396_1, VkglTestCase_037396_2);

#define VkglTestCase_037397_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037397_2 "ed.rgba32i_srgb8_alpha8_astc_12x12_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037397, VkglTestCase_037397_1, VkglTestCase_037397_2);

#define VkglTestCase_037398_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_037398_2 "gba32i_srgb8_alpha8_astc_12x12_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037398, VkglTestCase_037398_1, VkglTestCase_037398_2);
