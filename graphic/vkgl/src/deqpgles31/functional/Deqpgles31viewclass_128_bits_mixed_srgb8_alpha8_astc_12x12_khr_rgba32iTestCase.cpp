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

#define VkglTestCase_037399_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037399_2 "xed.srgb8_alpha8_astc_12x12_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037399, VkglTestCase_037399_1, VkglTestCase_037399_2);

#define VkglTestCase_037400_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037400_2 "xed.srgb8_alpha8_astc_12x12_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037400, VkglTestCase_037400_1, VkglTestCase_037400_2);

#define VkglTestCase_037401_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037401_2 "ixed.srgb8_alpha8_astc_12x12_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037401, VkglTestCase_037401_1, VkglTestCase_037401_2);

#define VkglTestCase_037402_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037402_2 ".srgb8_alpha8_astc_12x12_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037402, VkglTestCase_037402_1, VkglTestCase_037402_2);

#define VkglTestCase_037403_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037403_2 "d.srgb8_alpha8_astc_12x12_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037403, VkglTestCase_037403_1, VkglTestCase_037403_2);

#define VkglTestCase_037404_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037404_2 "xed.srgb8_alpha8_astc_12x12_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037404, VkglTestCase_037404_1, VkglTestCase_037404_2);

#define VkglTestCase_037405_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037405_2 "xed.srgb8_alpha8_astc_12x12_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037405, VkglTestCase_037405_1, VkglTestCase_037405_2);

#define VkglTestCase_037406_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037406_2 "ixed.srgb8_alpha8_astc_12x12_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037406, VkglTestCase_037406_1, VkglTestCase_037406_2);

#define VkglTestCase_037407_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037407_2 ".srgb8_alpha8_astc_12x12_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037407, VkglTestCase_037407_1, VkglTestCase_037407_2);

#define VkglTestCase_037408_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037408_2 "d.srgb8_alpha8_astc_12x12_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037408, VkglTestCase_037408_1, VkglTestCase_037408_2);

#define VkglTestCase_037409_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037409_2 "ixed.srgb8_alpha8_astc_12x12_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037409, VkglTestCase_037409_1, VkglTestCase_037409_2);

#define VkglTestCase_037410_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037410_2 "ixed.srgb8_alpha8_astc_12x12_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037410, VkglTestCase_037410_1, VkglTestCase_037410_2);

#define VkglTestCase_037411_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037411_2 "mixed.srgb8_alpha8_astc_12x12_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037411, VkglTestCase_037411_1, VkglTestCase_037411_2);

#define VkglTestCase_037412_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037412_2 "d.srgb8_alpha8_astc_12x12_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037412, VkglTestCase_037412_1, VkglTestCase_037412_2);

#define VkglTestCase_037413_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037413_2 "ed.srgb8_alpha8_astc_12x12_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037413, VkglTestCase_037413_1, VkglTestCase_037413_2);

#define VkglTestCase_037414_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037414_2 ".srgb8_alpha8_astc_12x12_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037414, VkglTestCase_037414_1, VkglTestCase_037414_2);

#define VkglTestCase_037415_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037415_2 ".srgb8_alpha8_astc_12x12_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037415, VkglTestCase_037415_1, VkglTestCase_037415_2);

#define VkglTestCase_037416_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037416_2 "d.srgb8_alpha8_astc_12x12_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037416, VkglTestCase_037416_1, VkglTestCase_037416_2);

#define VkglTestCase_037417_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_037417_2 "gb8_alpha8_astc_12x12_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037417, VkglTestCase_037417_1, VkglTestCase_037417_2);

#define VkglTestCase_037418_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_037418_2 "rgb8_alpha8_astc_12x12_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037418, VkglTestCase_037418_1, VkglTestCase_037418_2);
