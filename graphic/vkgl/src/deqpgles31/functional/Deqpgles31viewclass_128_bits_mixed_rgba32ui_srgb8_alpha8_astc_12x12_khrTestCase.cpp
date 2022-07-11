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

#define VkglTestCase_036179_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036179_2 "ed.rgba32ui_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036179, VkglTestCase_036179_1, VkglTestCase_036179_2);

#define VkglTestCase_036180_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036180_2 "ed.rgba32ui_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036180, VkglTestCase_036180_1, VkglTestCase_036180_2);

#define VkglTestCase_036181_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036181_2 "xed.rgba32ui_srgb8_alpha8_astc_12x12_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036181, VkglTestCase_036181_1, VkglTestCase_036181_2);

#define VkglTestCase_036182_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036182_2 "rgba32ui_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036182, VkglTestCase_036182_1, VkglTestCase_036182_2);

#define VkglTestCase_036183_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036183_2 "ed.rgba32ui_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036183, VkglTestCase_036183_1, VkglTestCase_036183_2);

#define VkglTestCase_036184_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036184_2 "ed.rgba32ui_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036184, VkglTestCase_036184_1, VkglTestCase_036184_2);

#define VkglTestCase_036185_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036185_2 "xed.rgba32ui_srgb8_alpha8_astc_12x12_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036185, VkglTestCase_036185_1, VkglTestCase_036185_2);

#define VkglTestCase_036186_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036186_2 "rgba32ui_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036186, VkglTestCase_036186_1, VkglTestCase_036186_2);

#define VkglTestCase_036187_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036187_2 "xed.rgba32ui_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036187, VkglTestCase_036187_1, VkglTestCase_036187_2);

#define VkglTestCase_036188_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036188_2 "xed.rgba32ui_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036188, VkglTestCase_036188_1, VkglTestCase_036188_2);

#define VkglTestCase_036189_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036189_2 "ixed.rgba32ui_srgb8_alpha8_astc_12x12_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036189, VkglTestCase_036189_1, VkglTestCase_036189_2);

#define VkglTestCase_036190_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036190_2 ".rgba32ui_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036190, VkglTestCase_036190_1, VkglTestCase_036190_2);

#define VkglTestCase_036191_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036191_2 "rgba32ui_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036191, VkglTestCase_036191_1, VkglTestCase_036191_2);

#define VkglTestCase_036192_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036192_2 "rgba32ui_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036192, VkglTestCase_036192_1, VkglTestCase_036192_2);

#define VkglTestCase_036193_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036193_2 ".rgba32ui_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036193, VkglTestCase_036193_1, VkglTestCase_036193_2);

#define VkglTestCase_036194_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rgb"
#define VkglTestCase_036194_2 "a32ui_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036194, VkglTestCase_036194_1, VkglTestCase_036194_2);

#define VkglTestCase_036195_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036195_2 "d.rgba32ui_srgb8_alpha8_astc_12x12_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036195, VkglTestCase_036195_1, VkglTestCase_036195_2);

#define VkglTestCase_036196_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036196_2 "d.rgba32ui_srgb8_alpha8_astc_12x12_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036196, VkglTestCase_036196_1, VkglTestCase_036196_2);

#define VkglTestCase_036197_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036197_2 "ed.rgba32ui_srgb8_alpha8_astc_12x12_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036197, VkglTestCase_036197_1, VkglTestCase_036197_2);

#define VkglTestCase_036198_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_036198_2 "gba32ui_srgb8_alpha8_astc_12x12_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036198, VkglTestCase_036198_1, VkglTestCase_036198_2);
