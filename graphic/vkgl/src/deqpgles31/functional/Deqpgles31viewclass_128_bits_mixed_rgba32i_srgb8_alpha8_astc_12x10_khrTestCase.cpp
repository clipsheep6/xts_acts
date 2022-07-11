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

#define VkglTestCase_037339_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037339_2 "xed.rgba32i_srgb8_alpha8_astc_12x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037339, VkglTestCase_037339_1, VkglTestCase_037339_2);

#define VkglTestCase_037340_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037340_2 "xed.rgba32i_srgb8_alpha8_astc_12x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037340, VkglTestCase_037340_1, VkglTestCase_037340_2);

#define VkglTestCase_037341_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037341_2 "ixed.rgba32i_srgb8_alpha8_astc_12x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037341, VkglTestCase_037341_1, VkglTestCase_037341_2);

#define VkglTestCase_037342_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037342_2 ".rgba32i_srgb8_alpha8_astc_12x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037342, VkglTestCase_037342_1, VkglTestCase_037342_2);

#define VkglTestCase_037343_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037343_2 "xed.rgba32i_srgb8_alpha8_astc_12x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037343, VkglTestCase_037343_1, VkglTestCase_037343_2);

#define VkglTestCase_037344_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037344_2 "xed.rgba32i_srgb8_alpha8_astc_12x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037344, VkglTestCase_037344_1, VkglTestCase_037344_2);

#define VkglTestCase_037345_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037345_2 "ixed.rgba32i_srgb8_alpha8_astc_12x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037345, VkglTestCase_037345_1, VkglTestCase_037345_2);

#define VkglTestCase_037346_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037346_2 ".rgba32i_srgb8_alpha8_astc_12x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037346, VkglTestCase_037346_1, VkglTestCase_037346_2);

#define VkglTestCase_037347_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037347_2 "ixed.rgba32i_srgb8_alpha8_astc_12x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037347, VkglTestCase_037347_1, VkglTestCase_037347_2);

#define VkglTestCase_037348_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037348_2 "ixed.rgba32i_srgb8_alpha8_astc_12x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037348, VkglTestCase_037348_1, VkglTestCase_037348_2);

#define VkglTestCase_037349_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037349_2 "mixed.rgba32i_srgb8_alpha8_astc_12x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037349, VkglTestCase_037349_1, VkglTestCase_037349_2);

#define VkglTestCase_037350_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037350_2 "d.rgba32i_srgb8_alpha8_astc_12x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037350, VkglTestCase_037350_1, VkglTestCase_037350_2);

#define VkglTestCase_037351_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037351_2 ".rgba32i_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037351, VkglTestCase_037351_1, VkglTestCase_037351_2);

#define VkglTestCase_037352_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037352_2 ".rgba32i_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037352, VkglTestCase_037352_1, VkglTestCase_037352_2);

#define VkglTestCase_037353_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037353_2 "d.rgba32i_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037353, VkglTestCase_037353_1, VkglTestCase_037353_2);

#define VkglTestCase_037354_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_037354_2 "ba32i_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037354, VkglTestCase_037354_1, VkglTestCase_037354_2);

#define VkglTestCase_037355_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037355_2 "d.rgba32i_srgb8_alpha8_astc_12x10_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037355, VkglTestCase_037355_1, VkglTestCase_037355_2);

#define VkglTestCase_037356_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037356_2 "d.rgba32i_srgb8_alpha8_astc_12x10_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037356, VkglTestCase_037356_1, VkglTestCase_037356_2);

#define VkglTestCase_037357_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037357_2 "ed.rgba32i_srgb8_alpha8_astc_12x10_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037357, VkglTestCase_037357_1, VkglTestCase_037357_2);

#define VkglTestCase_037358_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_037358_2 "gba32i_srgb8_alpha8_astc_12x10_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037358, VkglTestCase_037358_1, VkglTestCase_037358_2);
