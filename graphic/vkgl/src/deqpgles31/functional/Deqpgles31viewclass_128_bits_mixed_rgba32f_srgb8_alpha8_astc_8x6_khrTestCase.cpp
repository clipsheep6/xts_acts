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

#define VkglTestCase_034763_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034763_2 "ixed.rgba32f_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034763, VkglTestCase_034763_1, VkglTestCase_034763_2);

#define VkglTestCase_034764_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034764_2 "ixed.rgba32f_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034764, VkglTestCase_034764_1, VkglTestCase_034764_2);

#define VkglTestCase_034765_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034765_2 "mixed.rgba32f_srgb8_alpha8_astc_8x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034765, VkglTestCase_034765_1, VkglTestCase_034765_2);

#define VkglTestCase_034766_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034766_2 "d.rgba32f_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034766, VkglTestCase_034766_1, VkglTestCase_034766_2);

#define VkglTestCase_034767_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034767_2 "ixed.rgba32f_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034767, VkglTestCase_034767_1, VkglTestCase_034767_2);

#define VkglTestCase_034768_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034768_2 "ixed.rgba32f_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034768, VkglTestCase_034768_1, VkglTestCase_034768_2);

#define VkglTestCase_034769_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034769_2 "mixed.rgba32f_srgb8_alpha8_astc_8x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034769, VkglTestCase_034769_1, VkglTestCase_034769_2);

#define VkglTestCase_034770_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034770_2 "d.rgba32f_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034770, VkglTestCase_034770_1, VkglTestCase_034770_2);

#define VkglTestCase_034771_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034771_2 "mixed.rgba32f_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034771, VkglTestCase_034771_1, VkglTestCase_034771_2);

#define VkglTestCase_034772_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034772_2 "mixed.rgba32f_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034772, VkglTestCase_034772_1, VkglTestCase_034772_2);

#define VkglTestCase_034773_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034773_2 "_mixed.rgba32f_srgb8_alpha8_astc_8x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034773, VkglTestCase_034773_1, VkglTestCase_034773_2);

#define VkglTestCase_034774_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034774_2 "ed.rgba32f_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034774, VkglTestCase_034774_1, VkglTestCase_034774_2);

#define VkglTestCase_034775_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034775_2 "d.rgba32f_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034775, VkglTestCase_034775_1, VkglTestCase_034775_2);

#define VkglTestCase_034776_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034776_2 "d.rgba32f_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034776, VkglTestCase_034776_1, VkglTestCase_034776_2);

#define VkglTestCase_034777_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034777_2 "ed.rgba32f_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034777, VkglTestCase_034777_1, VkglTestCase_034777_2);

#define VkglTestCase_034778_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_034778_2 "gba32f_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034778, VkglTestCase_034778_1, VkglTestCase_034778_2);
