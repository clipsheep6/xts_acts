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

#define VkglTestCase_037159_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037159_2 "ixed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037159, VkglTestCase_037159_1, VkglTestCase_037159_2);

#define VkglTestCase_037160_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037160_2 "ixed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037160, VkglTestCase_037160_1, VkglTestCase_037160_2);

#define VkglTestCase_037161_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037161_2 "mixed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037161, VkglTestCase_037161_1, VkglTestCase_037161_2);

#define VkglTestCase_037162_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037162_2 "d.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037162, VkglTestCase_037162_1, VkglTestCase_037162_2);

#define VkglTestCase_037163_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037163_2 "ed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037163, VkglTestCase_037163_1, VkglTestCase_037163_2);

#define VkglTestCase_037164_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037164_2 "ixed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037164, VkglTestCase_037164_1, VkglTestCase_037164_2);

#define VkglTestCase_037165_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037165_2 "ixed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037165, VkglTestCase_037165_1, VkglTestCase_037165_2);

#define VkglTestCase_037166_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037166_2 "mixed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037166, VkglTestCase_037166_1, VkglTestCase_037166_2);

#define VkglTestCase_037167_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037167_2 "d.srgb8_alpha8_astc_8x8_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037167, VkglTestCase_037167_1, VkglTestCase_037167_2);

#define VkglTestCase_037168_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037168_2 "ed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037168, VkglTestCase_037168_1, VkglTestCase_037168_2);

#define VkglTestCase_037169_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037169_2 "mixed.srgb8_alpha8_astc_8x8_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037169, VkglTestCase_037169_1, VkglTestCase_037169_2);

#define VkglTestCase_037170_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037170_2 "mixed.srgb8_alpha8_astc_8x8_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037170, VkglTestCase_037170_1, VkglTestCase_037170_2);

#define VkglTestCase_037171_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_037171_2 "_mixed.srgb8_alpha8_astc_8x8_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037171, VkglTestCase_037171_1, VkglTestCase_037171_2);

#define VkglTestCase_037172_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037172_2 "ed.srgb8_alpha8_astc_8x8_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037172, VkglTestCase_037172_1, VkglTestCase_037172_2);

#define VkglTestCase_037173_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037173_2 "xed.srgb8_alpha8_astc_8x8_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037173, VkglTestCase_037173_1, VkglTestCase_037173_2);

#define VkglTestCase_037174_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037174_2 "d.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037174, VkglTestCase_037174_1, VkglTestCase_037174_2);

#define VkglTestCase_037175_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037175_2 "d.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037175, VkglTestCase_037175_1, VkglTestCase_037175_2);

#define VkglTestCase_037176_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037176_2 "ed.srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037176, VkglTestCase_037176_1, VkglTestCase_037176_2);

#define VkglTestCase_037177_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_037177_2 "rgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037177, VkglTestCase_037177_1, VkglTestCase_037177_2);

#define VkglTestCase_037178_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037178_2 "srgb8_alpha8_astc_8x8_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037178, VkglTestCase_037178_1, VkglTestCase_037178_2);
