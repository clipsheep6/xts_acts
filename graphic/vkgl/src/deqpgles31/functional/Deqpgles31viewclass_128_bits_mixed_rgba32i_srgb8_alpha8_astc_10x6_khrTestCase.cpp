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

#define VkglTestCase_037219_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037219_2 "xed.rgba32i_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037219, VkglTestCase_037219_1, VkglTestCase_037219_2);

#define VkglTestCase_037220_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037220_2 "xed.rgba32i_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037220, VkglTestCase_037220_1, VkglTestCase_037220_2);

#define VkglTestCase_037221_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037221_2 "ixed.rgba32i_srgb8_alpha8_astc_10x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037221, VkglTestCase_037221_1, VkglTestCase_037221_2);

#define VkglTestCase_037222_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037222_2 ".rgba32i_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037222, VkglTestCase_037222_1, VkglTestCase_037222_2);

#define VkglTestCase_037223_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037223_2 "xed.rgba32i_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037223, VkglTestCase_037223_1, VkglTestCase_037223_2);

#define VkglTestCase_037224_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037224_2 "xed.rgba32i_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037224, VkglTestCase_037224_1, VkglTestCase_037224_2);

#define VkglTestCase_037225_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037225_2 "ixed.rgba32i_srgb8_alpha8_astc_10x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037225, VkglTestCase_037225_1, VkglTestCase_037225_2);

#define VkglTestCase_037226_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037226_2 ".rgba32i_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037226, VkglTestCase_037226_1, VkglTestCase_037226_2);

#define VkglTestCase_037227_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037227_2 "ixed.rgba32i_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037227, VkglTestCase_037227_1, VkglTestCase_037227_2);

#define VkglTestCase_037228_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037228_2 "ixed.rgba32i_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037228, VkglTestCase_037228_1, VkglTestCase_037228_2);

#define VkglTestCase_037229_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037229_2 "mixed.rgba32i_srgb8_alpha8_astc_10x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037229, VkglTestCase_037229_1, VkglTestCase_037229_2);

#define VkglTestCase_037230_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037230_2 "d.rgba32i_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037230, VkglTestCase_037230_1, VkglTestCase_037230_2);

#define VkglTestCase_037231_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037231_2 ".rgba32i_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037231, VkglTestCase_037231_1, VkglTestCase_037231_2);

#define VkglTestCase_037232_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037232_2 ".rgba32i_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037232, VkglTestCase_037232_1, VkglTestCase_037232_2);

#define VkglTestCase_037233_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037233_2 "d.rgba32i_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037233, VkglTestCase_037233_1, VkglTestCase_037233_2);

#define VkglTestCase_037234_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_037234_2 "ba32i_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037234, VkglTestCase_037234_1, VkglTestCase_037234_2);

#define VkglTestCase_037235_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037235_2 "ed.rgba32i_srgb8_alpha8_astc_10x6_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037235, VkglTestCase_037235_1, VkglTestCase_037235_2);

#define VkglTestCase_037236_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037236_2 "ed.rgba32i_srgb8_alpha8_astc_10x6_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037236, VkglTestCase_037236_1, VkglTestCase_037236_2);

#define VkglTestCase_037237_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037237_2 "xed.rgba32i_srgb8_alpha8_astc_10x6_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037237, VkglTestCase_037237_1, VkglTestCase_037237_2);

#define VkglTestCase_037238_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037238_2 "rgba32i_srgb8_alpha8_astc_10x6_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037238, VkglTestCase_037238_1, VkglTestCase_037238_2);
