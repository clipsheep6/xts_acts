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

#define VkglTestCase_036859_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036859_2 "ixed.rgba32i_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036859, VkglTestCase_036859_1, VkglTestCase_036859_2);

#define VkglTestCase_036860_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036860_2 "ixed.rgba32i_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036860, VkglTestCase_036860_1, VkglTestCase_036860_2);

#define VkglTestCase_036861_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036861_2 "mixed.rgba32i_srgb8_alpha8_astc_4x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036861, VkglTestCase_036861_1, VkglTestCase_036861_2);

#define VkglTestCase_036862_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036862_2 "d.rgba32i_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036862, VkglTestCase_036862_1, VkglTestCase_036862_2);

#define VkglTestCase_036863_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036863_2 "ixed.rgba32i_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036863, VkglTestCase_036863_1, VkglTestCase_036863_2);

#define VkglTestCase_036864_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036864_2 "ixed.rgba32i_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036864, VkglTestCase_036864_1, VkglTestCase_036864_2);

#define VkglTestCase_036865_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036865_2 "mixed.rgba32i_srgb8_alpha8_astc_4x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036865, VkglTestCase_036865_1, VkglTestCase_036865_2);

#define VkglTestCase_036866_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036866_2 "d.rgba32i_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036866, VkglTestCase_036866_1, VkglTestCase_036866_2);

#define VkglTestCase_036867_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036867_2 "mixed.rgba32i_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036867, VkglTestCase_036867_1, VkglTestCase_036867_2);

#define VkglTestCase_036868_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036868_2 "mixed.rgba32i_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036868, VkglTestCase_036868_1, VkglTestCase_036868_2);

#define VkglTestCase_036869_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036869_2 "_mixed.rgba32i_srgb8_alpha8_astc_4x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036869, VkglTestCase_036869_1, VkglTestCase_036869_2);

#define VkglTestCase_036870_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036870_2 "ed.rgba32i_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036870, VkglTestCase_036870_1, VkglTestCase_036870_2);

#define VkglTestCase_036871_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036871_2 "d.rgba32i_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036871, VkglTestCase_036871_1, VkglTestCase_036871_2);

#define VkglTestCase_036872_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036872_2 "d.rgba32i_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036872, VkglTestCase_036872_1, VkglTestCase_036872_2);

#define VkglTestCase_036873_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036873_2 "ed.rgba32i_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036873, VkglTestCase_036873_1, VkglTestCase_036873_2);

#define VkglTestCase_036874_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_036874_2 "gba32i_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036874, VkglTestCase_036874_1, VkglTestCase_036874_2);

#define VkglTestCase_036875_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036875_2 "ed.rgba32i_srgb8_alpha8_astc_4x4_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036875, VkglTestCase_036875_1, VkglTestCase_036875_2);

#define VkglTestCase_036876_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036876_2 "ed.rgba32i_srgb8_alpha8_astc_4x4_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036876, VkglTestCase_036876_1, VkglTestCase_036876_2);

#define VkglTestCase_036877_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036877_2 "xed.rgba32i_srgb8_alpha8_astc_4x4_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036877, VkglTestCase_036877_1, VkglTestCase_036877_2);

#define VkglTestCase_036878_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036878_2 "rgba32i_srgb8_alpha8_astc_4x4_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036878, VkglTestCase_036878_1, VkglTestCase_036878_2);
