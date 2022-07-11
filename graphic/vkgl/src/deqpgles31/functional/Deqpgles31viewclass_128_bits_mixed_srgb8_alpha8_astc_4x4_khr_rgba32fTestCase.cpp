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

#define VkglTestCase_034587_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034587_2 "ixed.srgb8_alpha8_astc_4x4_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034587, VkglTestCase_034587_1, VkglTestCase_034587_2);

#define VkglTestCase_034588_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034588_2 "ixed.srgb8_alpha8_astc_4x4_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034588, VkglTestCase_034588_1, VkglTestCase_034588_2);

#define VkglTestCase_034589_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034589_2 "mixed.srgb8_alpha8_astc_4x4_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034589, VkglTestCase_034589_1, VkglTestCase_034589_2);

#define VkglTestCase_034590_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034590_2 "d.srgb8_alpha8_astc_4x4_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034590, VkglTestCase_034590_1, VkglTestCase_034590_2);

#define VkglTestCase_034591_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034591_2 "ixed.srgb8_alpha8_astc_4x4_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034591, VkglTestCase_034591_1, VkglTestCase_034591_2);

#define VkglTestCase_034592_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034592_2 "ixed.srgb8_alpha8_astc_4x4_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034592, VkglTestCase_034592_1, VkglTestCase_034592_2);

#define VkglTestCase_034593_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034593_2 "mixed.srgb8_alpha8_astc_4x4_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034593, VkglTestCase_034593_1, VkglTestCase_034593_2);

#define VkglTestCase_034594_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034594_2 "d.srgb8_alpha8_astc_4x4_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034594, VkglTestCase_034594_1, VkglTestCase_034594_2);

#define VkglTestCase_034595_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034595_2 "mixed.srgb8_alpha8_astc_4x4_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034595, VkglTestCase_034595_1, VkglTestCase_034595_2);

#define VkglTestCase_034596_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034596_2 "mixed.srgb8_alpha8_astc_4x4_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034596, VkglTestCase_034596_1, VkglTestCase_034596_2);

#define VkglTestCase_034597_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034597_2 "_mixed.srgb8_alpha8_astc_4x4_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034597, VkglTestCase_034597_1, VkglTestCase_034597_2);

#define VkglTestCase_034598_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034598_2 "ed.srgb8_alpha8_astc_4x4_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034598, VkglTestCase_034598_1, VkglTestCase_034598_2);

#define VkglTestCase_034599_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034599_2 "d.srgb8_alpha8_astc_4x4_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034599, VkglTestCase_034599_1, VkglTestCase_034599_2);

#define VkglTestCase_034600_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034600_2 "d.srgb8_alpha8_astc_4x4_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034600, VkglTestCase_034600_1, VkglTestCase_034600_2);

#define VkglTestCase_034601_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034601_2 "ed.srgb8_alpha8_astc_4x4_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034601, VkglTestCase_034601_1, VkglTestCase_034601_2);

#define VkglTestCase_034602_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_034602_2 "rgb8_alpha8_astc_4x4_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034602, VkglTestCase_034602_1, VkglTestCase_034602_2);
