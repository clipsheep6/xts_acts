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

#define VkglTestCase_037119_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037119_2 "ixed.srgb8_alpha8_astc_8x6_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037119, VkglTestCase_037119_1, VkglTestCase_037119_2);

#define VkglTestCase_037120_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037120_2 "ixed.srgb8_alpha8_astc_8x6_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037120, VkglTestCase_037120_1, VkglTestCase_037120_2);

#define VkglTestCase_037121_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037121_2 "mixed.srgb8_alpha8_astc_8x6_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037121, VkglTestCase_037121_1, VkglTestCase_037121_2);

#define VkglTestCase_037122_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037122_2 "d.srgb8_alpha8_astc_8x6_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037122, VkglTestCase_037122_1, VkglTestCase_037122_2);

#define VkglTestCase_037123_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037123_2 "ed.srgb8_alpha8_astc_8x6_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037123, VkglTestCase_037123_1, VkglTestCase_037123_2);

#define VkglTestCase_037124_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037124_2 "ixed.srgb8_alpha8_astc_8x6_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037124, VkglTestCase_037124_1, VkglTestCase_037124_2);

#define VkglTestCase_037125_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037125_2 "ixed.srgb8_alpha8_astc_8x6_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037125, VkglTestCase_037125_1, VkglTestCase_037125_2);

#define VkglTestCase_037126_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037126_2 "mixed.srgb8_alpha8_astc_8x6_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037126, VkglTestCase_037126_1, VkglTestCase_037126_2);

#define VkglTestCase_037127_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037127_2 "d.srgb8_alpha8_astc_8x6_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037127, VkglTestCase_037127_1, VkglTestCase_037127_2);

#define VkglTestCase_037128_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037128_2 "ed.srgb8_alpha8_astc_8x6_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037128, VkglTestCase_037128_1, VkglTestCase_037128_2);

#define VkglTestCase_037129_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037129_2 "mixed.srgb8_alpha8_astc_8x6_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037129, VkglTestCase_037129_1, VkglTestCase_037129_2);

#define VkglTestCase_037130_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037130_2 "mixed.srgb8_alpha8_astc_8x6_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037130, VkglTestCase_037130_1, VkglTestCase_037130_2);

#define VkglTestCase_037131_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_037131_2 "_mixed.srgb8_alpha8_astc_8x6_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037131, VkglTestCase_037131_1, VkglTestCase_037131_2);

#define VkglTestCase_037132_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037132_2 "ed.srgb8_alpha8_astc_8x6_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037132, VkglTestCase_037132_1, VkglTestCase_037132_2);

#define VkglTestCase_037133_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037133_2 "xed.srgb8_alpha8_astc_8x6_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037133, VkglTestCase_037133_1, VkglTestCase_037133_2);

#define VkglTestCase_037134_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037134_2 "d.srgb8_alpha8_astc_8x6_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037134, VkglTestCase_037134_1, VkglTestCase_037134_2);

#define VkglTestCase_037135_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037135_2 "d.srgb8_alpha8_astc_8x6_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037135, VkglTestCase_037135_1, VkglTestCase_037135_2);

#define VkglTestCase_037136_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037136_2 "ed.srgb8_alpha8_astc_8x6_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037136, VkglTestCase_037136_1, VkglTestCase_037136_2);

#define VkglTestCase_037137_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_037137_2 "rgb8_alpha8_astc_8x6_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037137, VkglTestCase_037137_1, VkglTestCase_037137_2);

#define VkglTestCase_037138_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037138_2 "srgb8_alpha8_astc_8x6_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037138, VkglTestCase_037138_1, VkglTestCase_037138_2);
