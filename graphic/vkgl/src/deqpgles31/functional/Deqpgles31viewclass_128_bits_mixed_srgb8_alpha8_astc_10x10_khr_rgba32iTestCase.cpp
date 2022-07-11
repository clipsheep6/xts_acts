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

#define VkglTestCase_037319_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037319_2 "xed.srgb8_alpha8_astc_10x10_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037319, VkglTestCase_037319_1, VkglTestCase_037319_2);

#define VkglTestCase_037320_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037320_2 "xed.srgb8_alpha8_astc_10x10_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037320, VkglTestCase_037320_1, VkglTestCase_037320_2);

#define VkglTestCase_037321_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037321_2 "ixed.srgb8_alpha8_astc_10x10_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037321, VkglTestCase_037321_1, VkglTestCase_037321_2);

#define VkglTestCase_037322_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037322_2 ".srgb8_alpha8_astc_10x10_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037322, VkglTestCase_037322_1, VkglTestCase_037322_2);

#define VkglTestCase_037323_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037323_2 "d.srgb8_alpha8_astc_10x10_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037323, VkglTestCase_037323_1, VkglTestCase_037323_2);

#define VkglTestCase_037324_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037324_2 "xed.srgb8_alpha8_astc_10x10_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037324, VkglTestCase_037324_1, VkglTestCase_037324_2);

#define VkglTestCase_037325_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037325_2 "xed.srgb8_alpha8_astc_10x10_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037325, VkglTestCase_037325_1, VkglTestCase_037325_2);

#define VkglTestCase_037326_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037326_2 "ixed.srgb8_alpha8_astc_10x10_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037326, VkglTestCase_037326_1, VkglTestCase_037326_2);

#define VkglTestCase_037327_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037327_2 ".srgb8_alpha8_astc_10x10_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037327, VkglTestCase_037327_1, VkglTestCase_037327_2);

#define VkglTestCase_037328_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037328_2 "d.srgb8_alpha8_astc_10x10_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037328, VkglTestCase_037328_1, VkglTestCase_037328_2);

#define VkglTestCase_037329_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037329_2 "ixed.srgb8_alpha8_astc_10x10_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037329, VkglTestCase_037329_1, VkglTestCase_037329_2);

#define VkglTestCase_037330_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037330_2 "ixed.srgb8_alpha8_astc_10x10_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037330, VkglTestCase_037330_1, VkglTestCase_037330_2);

#define VkglTestCase_037331_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037331_2 "mixed.srgb8_alpha8_astc_10x10_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037331, VkglTestCase_037331_1, VkglTestCase_037331_2);

#define VkglTestCase_037332_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037332_2 "d.srgb8_alpha8_astc_10x10_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037332, VkglTestCase_037332_1, VkglTestCase_037332_2);

#define VkglTestCase_037333_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037333_2 "ed.srgb8_alpha8_astc_10x10_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037333, VkglTestCase_037333_1, VkglTestCase_037333_2);

#define VkglTestCase_037334_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037334_2 ".srgb8_alpha8_astc_10x10_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037334, VkglTestCase_037334_1, VkglTestCase_037334_2);

#define VkglTestCase_037335_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037335_2 ".srgb8_alpha8_astc_10x10_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037335, VkglTestCase_037335_1, VkglTestCase_037335_2);

#define VkglTestCase_037336_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037336_2 "d.srgb8_alpha8_astc_10x10_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037336, VkglTestCase_037336_1, VkglTestCase_037336_2);

#define VkglTestCase_037337_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_037337_2 "gb8_alpha8_astc_10x10_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037337, VkglTestCase_037337_1, VkglTestCase_037337_2);

#define VkglTestCase_037338_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_037338_2 "rgb8_alpha8_astc_10x10_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037338, VkglTestCase_037338_1, VkglTestCase_037338_2);
