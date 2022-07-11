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

#define VkglTestCase_034779_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034779_2 "ixed.srgb8_alpha8_astc_8x6_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034779, VkglTestCase_034779_1, VkglTestCase_034779_2);

#define VkglTestCase_034780_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034780_2 "ixed.srgb8_alpha8_astc_8x6_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034780, VkglTestCase_034780_1, VkglTestCase_034780_2);

#define VkglTestCase_034781_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034781_2 "mixed.srgb8_alpha8_astc_8x6_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034781, VkglTestCase_034781_1, VkglTestCase_034781_2);

#define VkglTestCase_034782_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034782_2 "d.srgb8_alpha8_astc_8x6_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034782, VkglTestCase_034782_1, VkglTestCase_034782_2);

#define VkglTestCase_034783_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034783_2 "ixed.srgb8_alpha8_astc_8x6_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034783, VkglTestCase_034783_1, VkglTestCase_034783_2);

#define VkglTestCase_034784_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034784_2 "ixed.srgb8_alpha8_astc_8x6_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034784, VkglTestCase_034784_1, VkglTestCase_034784_2);

#define VkglTestCase_034785_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034785_2 "mixed.srgb8_alpha8_astc_8x6_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034785, VkglTestCase_034785_1, VkglTestCase_034785_2);

#define VkglTestCase_034786_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034786_2 "d.srgb8_alpha8_astc_8x6_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034786, VkglTestCase_034786_1, VkglTestCase_034786_2);

#define VkglTestCase_034787_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034787_2 "mixed.srgb8_alpha8_astc_8x6_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034787, VkglTestCase_034787_1, VkglTestCase_034787_2);

#define VkglTestCase_034788_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034788_2 "mixed.srgb8_alpha8_astc_8x6_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034788, VkglTestCase_034788_1, VkglTestCase_034788_2);

#define VkglTestCase_034789_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034789_2 "_mixed.srgb8_alpha8_astc_8x6_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034789, VkglTestCase_034789_1, VkglTestCase_034789_2);

#define VkglTestCase_034790_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034790_2 "ed.srgb8_alpha8_astc_8x6_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034790, VkglTestCase_034790_1, VkglTestCase_034790_2);

#define VkglTestCase_034791_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034791_2 "d.srgb8_alpha8_astc_8x6_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034791, VkglTestCase_034791_1, VkglTestCase_034791_2);

#define VkglTestCase_034792_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034792_2 "d.srgb8_alpha8_astc_8x6_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034792, VkglTestCase_034792_1, VkglTestCase_034792_2);

#define VkglTestCase_034793_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034793_2 "ed.srgb8_alpha8_astc_8x6_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034793, VkglTestCase_034793_1, VkglTestCase_034793_2);

#define VkglTestCase_034794_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_034794_2 "rgb8_alpha8_astc_8x6_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034794, VkglTestCase_034794_1, VkglTestCase_034794_2);
