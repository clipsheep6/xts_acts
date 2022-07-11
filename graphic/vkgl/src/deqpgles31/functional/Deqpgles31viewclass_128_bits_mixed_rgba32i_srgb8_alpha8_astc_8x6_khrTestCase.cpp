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

#define VkglTestCase_037099_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037099_2 "ixed.rgba32i_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037099, VkglTestCase_037099_1, VkglTestCase_037099_2);

#define VkglTestCase_037100_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037100_2 "ixed.rgba32i_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037100, VkglTestCase_037100_1, VkglTestCase_037100_2);

#define VkglTestCase_037101_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037101_2 "mixed.rgba32i_srgb8_alpha8_astc_8x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037101, VkglTestCase_037101_1, VkglTestCase_037101_2);

#define VkglTestCase_037102_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037102_2 "d.rgba32i_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037102, VkglTestCase_037102_1, VkglTestCase_037102_2);

#define VkglTestCase_037103_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037103_2 "ixed.rgba32i_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037103, VkglTestCase_037103_1, VkglTestCase_037103_2);

#define VkglTestCase_037104_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037104_2 "ixed.rgba32i_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037104, VkglTestCase_037104_1, VkglTestCase_037104_2);

#define VkglTestCase_037105_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037105_2 "mixed.rgba32i_srgb8_alpha8_astc_8x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037105, VkglTestCase_037105_1, VkglTestCase_037105_2);

#define VkglTestCase_037106_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037106_2 "d.rgba32i_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037106, VkglTestCase_037106_1, VkglTestCase_037106_2);

#define VkglTestCase_037107_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037107_2 "mixed.rgba32i_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037107, VkglTestCase_037107_1, VkglTestCase_037107_2);

#define VkglTestCase_037108_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037108_2 "mixed.rgba32i_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037108, VkglTestCase_037108_1, VkglTestCase_037108_2);

#define VkglTestCase_037109_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_037109_2 "_mixed.rgba32i_srgb8_alpha8_astc_8x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037109, VkglTestCase_037109_1, VkglTestCase_037109_2);

#define VkglTestCase_037110_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037110_2 "ed.rgba32i_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037110, VkglTestCase_037110_1, VkglTestCase_037110_2);

#define VkglTestCase_037111_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037111_2 "d.rgba32i_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037111, VkglTestCase_037111_1, VkglTestCase_037111_2);

#define VkglTestCase_037112_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037112_2 "d.rgba32i_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037112, VkglTestCase_037112_1, VkglTestCase_037112_2);

#define VkglTestCase_037113_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037113_2 "ed.rgba32i_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037113, VkglTestCase_037113_1, VkglTestCase_037113_2);

#define VkglTestCase_037114_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_037114_2 "gba32i_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037114, VkglTestCase_037114_1, VkglTestCase_037114_2);

#define VkglTestCase_037115_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037115_2 "ed.rgba32i_srgb8_alpha8_astc_8x6_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037115, VkglTestCase_037115_1, VkglTestCase_037115_2);

#define VkglTestCase_037116_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037116_2 "ed.rgba32i_srgb8_alpha8_astc_8x6_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037116, VkglTestCase_037116_1, VkglTestCase_037116_2);

#define VkglTestCase_037117_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037117_2 "xed.rgba32i_srgb8_alpha8_astc_8x6_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037117, VkglTestCase_037117_1, VkglTestCase_037117_2);

#define VkglTestCase_037118_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037118_2 "rgba32i_srgb8_alpha8_astc_8x6_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037118, VkglTestCase_037118_1, VkglTestCase_037118_2);
