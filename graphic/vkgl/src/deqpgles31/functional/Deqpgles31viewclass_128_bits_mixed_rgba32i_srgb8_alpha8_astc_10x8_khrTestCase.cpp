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

#define VkglTestCase_037259_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037259_2 "xed.rgba32i_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037259, VkglTestCase_037259_1, VkglTestCase_037259_2);

#define VkglTestCase_037260_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037260_2 "xed.rgba32i_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037260, VkglTestCase_037260_1, VkglTestCase_037260_2);

#define VkglTestCase_037261_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037261_2 "ixed.rgba32i_srgb8_alpha8_astc_10x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037261, VkglTestCase_037261_1, VkglTestCase_037261_2);

#define VkglTestCase_037262_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037262_2 ".rgba32i_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037262, VkglTestCase_037262_1, VkglTestCase_037262_2);

#define VkglTestCase_037263_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037263_2 "xed.rgba32i_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037263, VkglTestCase_037263_1, VkglTestCase_037263_2);

#define VkglTestCase_037264_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037264_2 "xed.rgba32i_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037264, VkglTestCase_037264_1, VkglTestCase_037264_2);

#define VkglTestCase_037265_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037265_2 "ixed.rgba32i_srgb8_alpha8_astc_10x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037265, VkglTestCase_037265_1, VkglTestCase_037265_2);

#define VkglTestCase_037266_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037266_2 ".rgba32i_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037266, VkglTestCase_037266_1, VkglTestCase_037266_2);

#define VkglTestCase_037267_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037267_2 "ixed.rgba32i_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037267, VkglTestCase_037267_1, VkglTestCase_037267_2);

#define VkglTestCase_037268_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037268_2 "ixed.rgba32i_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037268, VkglTestCase_037268_1, VkglTestCase_037268_2);

#define VkglTestCase_037269_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037269_2 "mixed.rgba32i_srgb8_alpha8_astc_10x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037269, VkglTestCase_037269_1, VkglTestCase_037269_2);

#define VkglTestCase_037270_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037270_2 "d.rgba32i_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037270, VkglTestCase_037270_1, VkglTestCase_037270_2);

#define VkglTestCase_037271_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037271_2 ".rgba32i_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037271, VkglTestCase_037271_1, VkglTestCase_037271_2);

#define VkglTestCase_037272_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037272_2 ".rgba32i_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037272, VkglTestCase_037272_1, VkglTestCase_037272_2);

#define VkglTestCase_037273_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037273_2 "d.rgba32i_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037273, VkglTestCase_037273_1, VkglTestCase_037273_2);

#define VkglTestCase_037274_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_037274_2 "ba32i_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037274, VkglTestCase_037274_1, VkglTestCase_037274_2);

#define VkglTestCase_037275_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037275_2 "ed.rgba32i_srgb8_alpha8_astc_10x8_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037275, VkglTestCase_037275_1, VkglTestCase_037275_2);

#define VkglTestCase_037276_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037276_2 "ed.rgba32i_srgb8_alpha8_astc_10x8_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037276, VkglTestCase_037276_1, VkglTestCase_037276_2);

#define VkglTestCase_037277_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037277_2 "xed.rgba32i_srgb8_alpha8_astc_10x8_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037277, VkglTestCase_037277_1, VkglTestCase_037277_2);

#define VkglTestCase_037278_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037278_2 "rgba32i_srgb8_alpha8_astc_10x8_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037278, VkglTestCase_037278_1, VkglTestCase_037278_2);
