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

#define VkglTestCase_034731_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034731_2 "ixed.rgba32f_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034731, VkglTestCase_034731_1, VkglTestCase_034731_2);

#define VkglTestCase_034732_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034732_2 "ixed.rgba32f_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034732, VkglTestCase_034732_1, VkglTestCase_034732_2);

#define VkglTestCase_034733_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034733_2 "mixed.rgba32f_srgb8_alpha8_astc_8x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034733, VkglTestCase_034733_1, VkglTestCase_034733_2);

#define VkglTestCase_034734_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034734_2 "d.rgba32f_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034734, VkglTestCase_034734_1, VkglTestCase_034734_2);

#define VkglTestCase_034735_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034735_2 "ixed.rgba32f_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034735, VkglTestCase_034735_1, VkglTestCase_034735_2);

#define VkglTestCase_034736_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034736_2 "ixed.rgba32f_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034736, VkglTestCase_034736_1, VkglTestCase_034736_2);

#define VkglTestCase_034737_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034737_2 "mixed.rgba32f_srgb8_alpha8_astc_8x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034737, VkglTestCase_034737_1, VkglTestCase_034737_2);

#define VkglTestCase_034738_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034738_2 "d.rgba32f_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034738, VkglTestCase_034738_1, VkglTestCase_034738_2);

#define VkglTestCase_034739_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034739_2 "mixed.rgba32f_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034739, VkglTestCase_034739_1, VkglTestCase_034739_2);

#define VkglTestCase_034740_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034740_2 "mixed.rgba32f_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034740, VkglTestCase_034740_1, VkglTestCase_034740_2);

#define VkglTestCase_034741_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034741_2 "_mixed.rgba32f_srgb8_alpha8_astc_8x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034741, VkglTestCase_034741_1, VkglTestCase_034741_2);

#define VkglTestCase_034742_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034742_2 "ed.rgba32f_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034742, VkglTestCase_034742_1, VkglTestCase_034742_2);

#define VkglTestCase_034743_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034743_2 "d.rgba32f_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034743, VkglTestCase_034743_1, VkglTestCase_034743_2);

#define VkglTestCase_034744_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034744_2 "d.rgba32f_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034744, VkglTestCase_034744_1, VkglTestCase_034744_2);

#define VkglTestCase_034745_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034745_2 "ed.rgba32f_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034745, VkglTestCase_034745_1, VkglTestCase_034745_2);

#define VkglTestCase_034746_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_034746_2 "gba32f_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034746, VkglTestCase_034746_1, VkglTestCase_034746_2);
