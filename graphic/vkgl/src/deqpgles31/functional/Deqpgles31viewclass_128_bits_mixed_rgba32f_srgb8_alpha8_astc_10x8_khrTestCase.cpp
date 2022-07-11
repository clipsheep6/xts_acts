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

#define VkglTestCase_034891_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034891_2 "xed.rgba32f_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034891, VkglTestCase_034891_1, VkglTestCase_034891_2);

#define VkglTestCase_034892_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034892_2 "xed.rgba32f_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034892, VkglTestCase_034892_1, VkglTestCase_034892_2);

#define VkglTestCase_034893_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034893_2 "ixed.rgba32f_srgb8_alpha8_astc_10x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034893, VkglTestCase_034893_1, VkglTestCase_034893_2);

#define VkglTestCase_034894_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034894_2 ".rgba32f_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034894, VkglTestCase_034894_1, VkglTestCase_034894_2);

#define VkglTestCase_034895_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034895_2 "xed.rgba32f_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034895, VkglTestCase_034895_1, VkglTestCase_034895_2);

#define VkglTestCase_034896_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034896_2 "xed.rgba32f_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034896, VkglTestCase_034896_1, VkglTestCase_034896_2);

#define VkglTestCase_034897_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034897_2 "ixed.rgba32f_srgb8_alpha8_astc_10x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034897, VkglTestCase_034897_1, VkglTestCase_034897_2);

#define VkglTestCase_034898_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034898_2 ".rgba32f_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034898, VkglTestCase_034898_1, VkglTestCase_034898_2);

#define VkglTestCase_034899_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034899_2 "ixed.rgba32f_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034899, VkglTestCase_034899_1, VkglTestCase_034899_2);

#define VkglTestCase_034900_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034900_2 "ixed.rgba32f_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034900, VkglTestCase_034900_1, VkglTestCase_034900_2);

#define VkglTestCase_034901_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034901_2 "mixed.rgba32f_srgb8_alpha8_astc_10x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034901, VkglTestCase_034901_1, VkglTestCase_034901_2);

#define VkglTestCase_034902_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034902_2 "d.rgba32f_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034902, VkglTestCase_034902_1, VkglTestCase_034902_2);

#define VkglTestCase_034903_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034903_2 ".rgba32f_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034903, VkglTestCase_034903_1, VkglTestCase_034903_2);

#define VkglTestCase_034904_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034904_2 ".rgba32f_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034904, VkglTestCase_034904_1, VkglTestCase_034904_2);

#define VkglTestCase_034905_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034905_2 "d.rgba32f_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034905, VkglTestCase_034905_1, VkglTestCase_034905_2);

#define VkglTestCase_034906_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_034906_2 "ba32f_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034906, VkglTestCase_034906_1, VkglTestCase_034906_2);
