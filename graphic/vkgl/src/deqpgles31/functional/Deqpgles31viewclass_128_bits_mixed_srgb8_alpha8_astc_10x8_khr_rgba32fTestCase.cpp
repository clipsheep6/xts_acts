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

#define VkglTestCase_034907_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034907_2 "xed.srgb8_alpha8_astc_10x8_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034907, VkglTestCase_034907_1, VkglTestCase_034907_2);

#define VkglTestCase_034908_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034908_2 "xed.srgb8_alpha8_astc_10x8_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034908, VkglTestCase_034908_1, VkglTestCase_034908_2);

#define VkglTestCase_034909_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034909_2 "ixed.srgb8_alpha8_astc_10x8_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034909, VkglTestCase_034909_1, VkglTestCase_034909_2);

#define VkglTestCase_034910_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034910_2 ".srgb8_alpha8_astc_10x8_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034910, VkglTestCase_034910_1, VkglTestCase_034910_2);

#define VkglTestCase_034911_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034911_2 "xed.srgb8_alpha8_astc_10x8_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034911, VkglTestCase_034911_1, VkglTestCase_034911_2);

#define VkglTestCase_034912_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034912_2 "xed.srgb8_alpha8_astc_10x8_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034912, VkglTestCase_034912_1, VkglTestCase_034912_2);

#define VkglTestCase_034913_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034913_2 "ixed.srgb8_alpha8_astc_10x8_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034913, VkglTestCase_034913_1, VkglTestCase_034913_2);

#define VkglTestCase_034914_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034914_2 ".srgb8_alpha8_astc_10x8_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034914, VkglTestCase_034914_1, VkglTestCase_034914_2);

#define VkglTestCase_034915_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034915_2 "ixed.srgb8_alpha8_astc_10x8_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034915, VkglTestCase_034915_1, VkglTestCase_034915_2);

#define VkglTestCase_034916_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034916_2 "ixed.srgb8_alpha8_astc_10x8_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034916, VkglTestCase_034916_1, VkglTestCase_034916_2);

#define VkglTestCase_034917_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034917_2 "mixed.srgb8_alpha8_astc_10x8_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034917, VkglTestCase_034917_1, VkglTestCase_034917_2);

#define VkglTestCase_034918_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034918_2 "d.srgb8_alpha8_astc_10x8_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034918, VkglTestCase_034918_1, VkglTestCase_034918_2);

#define VkglTestCase_034919_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034919_2 ".srgb8_alpha8_astc_10x8_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034919, VkglTestCase_034919_1, VkglTestCase_034919_2);

#define VkglTestCase_034920_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034920_2 ".srgb8_alpha8_astc_10x8_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034920, VkglTestCase_034920_1, VkglTestCase_034920_2);

#define VkglTestCase_034921_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034921_2 "d.srgb8_alpha8_astc_10x8_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034921, VkglTestCase_034921_1, VkglTestCase_034921_2);

#define VkglTestCase_034922_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_034922_2 "gb8_alpha8_astc_10x8_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034922, VkglTestCase_034922_1, VkglTestCase_034922_2);
