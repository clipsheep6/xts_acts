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

#define VkglTestCase_034651_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034651_2 "ixed.srgb8_alpha8_astc_5x5_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034651, VkglTestCase_034651_1, VkglTestCase_034651_2);

#define VkglTestCase_034652_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034652_2 "ixed.srgb8_alpha8_astc_5x5_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034652, VkglTestCase_034652_1, VkglTestCase_034652_2);

#define VkglTestCase_034653_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034653_2 "mixed.srgb8_alpha8_astc_5x5_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034653, VkglTestCase_034653_1, VkglTestCase_034653_2);

#define VkglTestCase_034654_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034654_2 "d.srgb8_alpha8_astc_5x5_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034654, VkglTestCase_034654_1, VkglTestCase_034654_2);

#define VkglTestCase_034655_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034655_2 "ixed.srgb8_alpha8_astc_5x5_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034655, VkglTestCase_034655_1, VkglTestCase_034655_2);

#define VkglTestCase_034656_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034656_2 "ixed.srgb8_alpha8_astc_5x5_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034656, VkglTestCase_034656_1, VkglTestCase_034656_2);

#define VkglTestCase_034657_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034657_2 "mixed.srgb8_alpha8_astc_5x5_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034657, VkglTestCase_034657_1, VkglTestCase_034657_2);

#define VkglTestCase_034658_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034658_2 "d.srgb8_alpha8_astc_5x5_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034658, VkglTestCase_034658_1, VkglTestCase_034658_2);

#define VkglTestCase_034659_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034659_2 "mixed.srgb8_alpha8_astc_5x5_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034659, VkglTestCase_034659_1, VkglTestCase_034659_2);

#define VkglTestCase_034660_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034660_2 "mixed.srgb8_alpha8_astc_5x5_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034660, VkglTestCase_034660_1, VkglTestCase_034660_2);

#define VkglTestCase_034661_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034661_2 "_mixed.srgb8_alpha8_astc_5x5_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034661, VkglTestCase_034661_1, VkglTestCase_034661_2);

#define VkglTestCase_034662_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034662_2 "ed.srgb8_alpha8_astc_5x5_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034662, VkglTestCase_034662_1, VkglTestCase_034662_2);

#define VkglTestCase_034663_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034663_2 "d.srgb8_alpha8_astc_5x5_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034663, VkglTestCase_034663_1, VkglTestCase_034663_2);

#define VkglTestCase_034664_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034664_2 "d.srgb8_alpha8_astc_5x5_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034664, VkglTestCase_034664_1, VkglTestCase_034664_2);

#define VkglTestCase_034665_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034665_2 "ed.srgb8_alpha8_astc_5x5_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034665, VkglTestCase_034665_1, VkglTestCase_034665_2);

#define VkglTestCase_034666_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_034666_2 "rgb8_alpha8_astc_5x5_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034666, VkglTestCase_034666_1, VkglTestCase_034666_2);
