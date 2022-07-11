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

#define VkglTestCase_037199_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037199_2 "xed.srgb8_alpha8_astc_10x5_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037199, VkglTestCase_037199_1, VkglTestCase_037199_2);

#define VkglTestCase_037200_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037200_2 "xed.srgb8_alpha8_astc_10x5_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037200, VkglTestCase_037200_1, VkglTestCase_037200_2);

#define VkglTestCase_037201_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037201_2 "ixed.srgb8_alpha8_astc_10x5_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037201, VkglTestCase_037201_1, VkglTestCase_037201_2);

#define VkglTestCase_037202_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037202_2 ".srgb8_alpha8_astc_10x5_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037202, VkglTestCase_037202_1, VkglTestCase_037202_2);

#define VkglTestCase_037203_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037203_2 "ed.srgb8_alpha8_astc_10x5_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037203, VkglTestCase_037203_1, VkglTestCase_037203_2);

#define VkglTestCase_037204_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037204_2 "xed.srgb8_alpha8_astc_10x5_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037204, VkglTestCase_037204_1, VkglTestCase_037204_2);

#define VkglTestCase_037205_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037205_2 "xed.srgb8_alpha8_astc_10x5_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037205, VkglTestCase_037205_1, VkglTestCase_037205_2);

#define VkglTestCase_037206_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037206_2 "ixed.srgb8_alpha8_astc_10x5_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037206, VkglTestCase_037206_1, VkglTestCase_037206_2);

#define VkglTestCase_037207_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037207_2 ".srgb8_alpha8_astc_10x5_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037207, VkglTestCase_037207_1, VkglTestCase_037207_2);

#define VkglTestCase_037208_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037208_2 "ed.srgb8_alpha8_astc_10x5_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037208, VkglTestCase_037208_1, VkglTestCase_037208_2);

#define VkglTestCase_037209_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037209_2 "ixed.srgb8_alpha8_astc_10x5_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037209, VkglTestCase_037209_1, VkglTestCase_037209_2);

#define VkglTestCase_037210_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037210_2 "ixed.srgb8_alpha8_astc_10x5_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037210, VkglTestCase_037210_1, VkglTestCase_037210_2);

#define VkglTestCase_037211_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037211_2 "mixed.srgb8_alpha8_astc_10x5_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037211, VkglTestCase_037211_1, VkglTestCase_037211_2);

#define VkglTestCase_037212_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037212_2 "d.srgb8_alpha8_astc_10x5_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037212, VkglTestCase_037212_1, VkglTestCase_037212_2);

#define VkglTestCase_037213_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037213_2 "xed.srgb8_alpha8_astc_10x5_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037213, VkglTestCase_037213_1, VkglTestCase_037213_2);

#define VkglTestCase_037214_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037214_2 ".srgb8_alpha8_astc_10x5_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037214, VkglTestCase_037214_1, VkglTestCase_037214_2);

#define VkglTestCase_037215_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037215_2 ".srgb8_alpha8_astc_10x5_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037215, VkglTestCase_037215_1, VkglTestCase_037215_2);

#define VkglTestCase_037216_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037216_2 "d.srgb8_alpha8_astc_10x5_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037216, VkglTestCase_037216_1, VkglTestCase_037216_2);

#define VkglTestCase_037217_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_037217_2 "gb8_alpha8_astc_10x5_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037217, VkglTestCase_037217_1, VkglTestCase_037217_2);

#define VkglTestCase_037218_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037218_2 "srgb8_alpha8_astc_10x5_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037218, VkglTestCase_037218_1, VkglTestCase_037218_2);
