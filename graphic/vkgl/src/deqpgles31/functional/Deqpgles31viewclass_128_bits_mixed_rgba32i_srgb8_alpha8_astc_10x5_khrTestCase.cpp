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

#define VkglTestCase_037179_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037179_2 "xed.rgba32i_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037179, VkglTestCase_037179_1, VkglTestCase_037179_2);

#define VkglTestCase_037180_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037180_2 "xed.rgba32i_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037180, VkglTestCase_037180_1, VkglTestCase_037180_2);

#define VkglTestCase_037181_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037181_2 "ixed.rgba32i_srgb8_alpha8_astc_10x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037181, VkglTestCase_037181_1, VkglTestCase_037181_2);

#define VkglTestCase_037182_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037182_2 ".rgba32i_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037182, VkglTestCase_037182_1, VkglTestCase_037182_2);

#define VkglTestCase_037183_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037183_2 "xed.rgba32i_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037183, VkglTestCase_037183_1, VkglTestCase_037183_2);

#define VkglTestCase_037184_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037184_2 "xed.rgba32i_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037184, VkglTestCase_037184_1, VkglTestCase_037184_2);

#define VkglTestCase_037185_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037185_2 "ixed.rgba32i_srgb8_alpha8_astc_10x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037185, VkglTestCase_037185_1, VkglTestCase_037185_2);

#define VkglTestCase_037186_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037186_2 ".rgba32i_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037186, VkglTestCase_037186_1, VkglTestCase_037186_2);

#define VkglTestCase_037187_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037187_2 "ixed.rgba32i_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037187, VkglTestCase_037187_1, VkglTestCase_037187_2);

#define VkglTestCase_037188_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037188_2 "ixed.rgba32i_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037188, VkglTestCase_037188_1, VkglTestCase_037188_2);

#define VkglTestCase_037189_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037189_2 "mixed.rgba32i_srgb8_alpha8_astc_10x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037189, VkglTestCase_037189_1, VkglTestCase_037189_2);

#define VkglTestCase_037190_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037190_2 "d.rgba32i_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037190, VkglTestCase_037190_1, VkglTestCase_037190_2);

#define VkglTestCase_037191_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037191_2 ".rgba32i_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037191, VkglTestCase_037191_1, VkglTestCase_037191_2);

#define VkglTestCase_037192_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037192_2 ".rgba32i_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037192, VkglTestCase_037192_1, VkglTestCase_037192_2);

#define VkglTestCase_037193_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037193_2 "d.rgba32i_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037193, VkglTestCase_037193_1, VkglTestCase_037193_2);

#define VkglTestCase_037194_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_037194_2 "ba32i_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037194, VkglTestCase_037194_1, VkglTestCase_037194_2);

#define VkglTestCase_037195_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037195_2 "ed.rgba32i_srgb8_alpha8_astc_10x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037195, VkglTestCase_037195_1, VkglTestCase_037195_2);

#define VkglTestCase_037196_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037196_2 "ed.rgba32i_srgb8_alpha8_astc_10x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037196, VkglTestCase_037196_1, VkglTestCase_037196_2);

#define VkglTestCase_037197_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037197_2 "xed.rgba32i_srgb8_alpha8_astc_10x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037197, VkglTestCase_037197_1, VkglTestCase_037197_2);

#define VkglTestCase_037198_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037198_2 "rgba32i_srgb8_alpha8_astc_10x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037198, VkglTestCase_037198_1, VkglTestCase_037198_2);
