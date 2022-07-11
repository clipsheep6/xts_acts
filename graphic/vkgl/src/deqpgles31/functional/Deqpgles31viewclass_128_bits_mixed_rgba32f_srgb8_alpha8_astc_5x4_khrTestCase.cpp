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

#define VkglTestCase_034603_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034603_2 "ixed.rgba32f_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034603, VkglTestCase_034603_1, VkglTestCase_034603_2);

#define VkglTestCase_034604_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034604_2 "ixed.rgba32f_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034604, VkglTestCase_034604_1, VkglTestCase_034604_2);

#define VkglTestCase_034605_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034605_2 "mixed.rgba32f_srgb8_alpha8_astc_5x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034605, VkglTestCase_034605_1, VkglTestCase_034605_2);

#define VkglTestCase_034606_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034606_2 "d.rgba32f_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034606, VkglTestCase_034606_1, VkglTestCase_034606_2);

#define VkglTestCase_034607_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034607_2 "ixed.rgba32f_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034607, VkglTestCase_034607_1, VkglTestCase_034607_2);

#define VkglTestCase_034608_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034608_2 "ixed.rgba32f_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034608, VkglTestCase_034608_1, VkglTestCase_034608_2);

#define VkglTestCase_034609_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034609_2 "mixed.rgba32f_srgb8_alpha8_astc_5x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034609, VkglTestCase_034609_1, VkglTestCase_034609_2);

#define VkglTestCase_034610_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034610_2 "d.rgba32f_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034610, VkglTestCase_034610_1, VkglTestCase_034610_2);

#define VkglTestCase_034611_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034611_2 "mixed.rgba32f_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034611, VkglTestCase_034611_1, VkglTestCase_034611_2);

#define VkglTestCase_034612_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034612_2 "mixed.rgba32f_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034612, VkglTestCase_034612_1, VkglTestCase_034612_2);

#define VkglTestCase_034613_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034613_2 "_mixed.rgba32f_srgb8_alpha8_astc_5x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034613, VkglTestCase_034613_1, VkglTestCase_034613_2);

#define VkglTestCase_034614_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034614_2 "ed.rgba32f_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034614, VkglTestCase_034614_1, VkglTestCase_034614_2);

#define VkglTestCase_034615_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034615_2 "d.rgba32f_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034615, VkglTestCase_034615_1, VkglTestCase_034615_2);

#define VkglTestCase_034616_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034616_2 "d.rgba32f_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034616, VkglTestCase_034616_1, VkglTestCase_034616_2);

#define VkglTestCase_034617_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034617_2 "ed.rgba32f_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034617, VkglTestCase_034617_1, VkglTestCase_034617_2);

#define VkglTestCase_034618_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_034618_2 "gba32f_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034618, VkglTestCase_034618_1, VkglTestCase_034618_2);
