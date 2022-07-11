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
#include "../ActsDeqpgles310035TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034859_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034859_2 "xed.rgba32f_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034859, VkglTestCase_034859_1, VkglTestCase_034859_2);

#define VkglTestCase_034860_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034860_2 "xed.rgba32f_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034860, VkglTestCase_034860_1, VkglTestCase_034860_2);

#define VkglTestCase_034861_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034861_2 "ixed.rgba32f_srgb8_alpha8_astc_10x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034861, VkglTestCase_034861_1, VkglTestCase_034861_2);

#define VkglTestCase_034862_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034862_2 ".rgba32f_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034862, VkglTestCase_034862_1, VkglTestCase_034862_2);

#define VkglTestCase_034863_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034863_2 "xed.rgba32f_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034863, VkglTestCase_034863_1, VkglTestCase_034863_2);

#define VkglTestCase_034864_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034864_2 "xed.rgba32f_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034864, VkglTestCase_034864_1, VkglTestCase_034864_2);

#define VkglTestCase_034865_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034865_2 "ixed.rgba32f_srgb8_alpha8_astc_10x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034865, VkglTestCase_034865_1, VkglTestCase_034865_2);

#define VkglTestCase_034866_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034866_2 ".rgba32f_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034866, VkglTestCase_034866_1, VkglTestCase_034866_2);

#define VkglTestCase_034867_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034867_2 "ixed.rgba32f_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034867, VkglTestCase_034867_1, VkglTestCase_034867_2);

#define VkglTestCase_034868_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034868_2 "ixed.rgba32f_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034868, VkglTestCase_034868_1, VkglTestCase_034868_2);

#define VkglTestCase_034869_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034869_2 "mixed.rgba32f_srgb8_alpha8_astc_10x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034869, VkglTestCase_034869_1, VkglTestCase_034869_2);

#define VkglTestCase_034870_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034870_2 "d.rgba32f_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034870, VkglTestCase_034870_1, VkglTestCase_034870_2);

#define VkglTestCase_034871_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034871_2 ".rgba32f_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034871, VkglTestCase_034871_1, VkglTestCase_034871_2);

#define VkglTestCase_034872_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034872_2 ".rgba32f_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034872, VkglTestCase_034872_1, VkglTestCase_034872_2);

#define VkglTestCase_034873_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034873_2 "d.rgba32f_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034873, VkglTestCase_034873_1, VkglTestCase_034873_2);

#define VkglTestCase_034874_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_034874_2 "ba32f_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034874, VkglTestCase_034874_1, VkglTestCase_034874_2);
