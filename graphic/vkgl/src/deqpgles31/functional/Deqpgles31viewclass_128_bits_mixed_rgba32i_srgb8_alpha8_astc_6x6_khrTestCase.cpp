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

#define VkglTestCase_037019_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037019_2 "ixed.rgba32i_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037019, VkglTestCase_037019_1, VkglTestCase_037019_2);

#define VkglTestCase_037020_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037020_2 "ixed.rgba32i_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037020, VkglTestCase_037020_1, VkglTestCase_037020_2);

#define VkglTestCase_037021_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037021_2 "mixed.rgba32i_srgb8_alpha8_astc_6x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037021, VkglTestCase_037021_1, VkglTestCase_037021_2);

#define VkglTestCase_037022_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037022_2 "d.rgba32i_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037022, VkglTestCase_037022_1, VkglTestCase_037022_2);

#define VkglTestCase_037023_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037023_2 "ixed.rgba32i_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037023, VkglTestCase_037023_1, VkglTestCase_037023_2);

#define VkglTestCase_037024_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037024_2 "ixed.rgba32i_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037024, VkglTestCase_037024_1, VkglTestCase_037024_2);

#define VkglTestCase_037025_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037025_2 "mixed.rgba32i_srgb8_alpha8_astc_6x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037025, VkglTestCase_037025_1, VkglTestCase_037025_2);

#define VkglTestCase_037026_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037026_2 "d.rgba32i_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037026, VkglTestCase_037026_1, VkglTestCase_037026_2);

#define VkglTestCase_037027_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037027_2 "mixed.rgba32i_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037027, VkglTestCase_037027_1, VkglTestCase_037027_2);

#define VkglTestCase_037028_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037028_2 "mixed.rgba32i_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037028, VkglTestCase_037028_1, VkglTestCase_037028_2);

#define VkglTestCase_037029_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_037029_2 "_mixed.rgba32i_srgb8_alpha8_astc_6x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037029, VkglTestCase_037029_1, VkglTestCase_037029_2);

#define VkglTestCase_037030_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037030_2 "ed.rgba32i_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037030, VkglTestCase_037030_1, VkglTestCase_037030_2);

#define VkglTestCase_037031_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037031_2 "d.rgba32i_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037031, VkglTestCase_037031_1, VkglTestCase_037031_2);

#define VkglTestCase_037032_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037032_2 "d.rgba32i_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037032, VkglTestCase_037032_1, VkglTestCase_037032_2);

#define VkglTestCase_037033_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037033_2 "ed.rgba32i_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037033, VkglTestCase_037033_1, VkglTestCase_037033_2);

#define VkglTestCase_037034_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_037034_2 "gba32i_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037034, VkglTestCase_037034_1, VkglTestCase_037034_2);

#define VkglTestCase_037035_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037035_2 "ed.rgba32i_srgb8_alpha8_astc_6x6_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037035, VkglTestCase_037035_1, VkglTestCase_037035_2);

#define VkglTestCase_037036_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037036_2 "ed.rgba32i_srgb8_alpha8_astc_6x6_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037036, VkglTestCase_037036_1, VkglTestCase_037036_2);

#define VkglTestCase_037037_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037037_2 "xed.rgba32i_srgb8_alpha8_astc_6x6_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037037, VkglTestCase_037037_1, VkglTestCase_037037_2);

#define VkglTestCase_037038_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037038_2 "rgba32i_srgb8_alpha8_astc_6x6_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037038, VkglTestCase_037038_1, VkglTestCase_037038_2);
