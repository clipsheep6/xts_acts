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

#define VkglTestCase_034571_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034571_2 "ixed.rgba32f_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034571, VkglTestCase_034571_1, VkglTestCase_034571_2);

#define VkglTestCase_034572_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034572_2 "ixed.rgba32f_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034572, VkglTestCase_034572_1, VkglTestCase_034572_2);

#define VkglTestCase_034573_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034573_2 "mixed.rgba32f_srgb8_alpha8_astc_4x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034573, VkglTestCase_034573_1, VkglTestCase_034573_2);

#define VkglTestCase_034574_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034574_2 "d.rgba32f_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034574, VkglTestCase_034574_1, VkglTestCase_034574_2);

#define VkglTestCase_034575_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034575_2 "ixed.rgba32f_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034575, VkglTestCase_034575_1, VkglTestCase_034575_2);

#define VkglTestCase_034576_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034576_2 "ixed.rgba32f_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034576, VkglTestCase_034576_1, VkglTestCase_034576_2);

#define VkglTestCase_034577_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034577_2 "mixed.rgba32f_srgb8_alpha8_astc_4x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034577, VkglTestCase_034577_1, VkglTestCase_034577_2);

#define VkglTestCase_034578_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034578_2 "d.rgba32f_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034578, VkglTestCase_034578_1, VkglTestCase_034578_2);

#define VkglTestCase_034579_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034579_2 "mixed.rgba32f_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034579, VkglTestCase_034579_1, VkglTestCase_034579_2);

#define VkglTestCase_034580_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034580_2 "mixed.rgba32f_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034580, VkglTestCase_034580_1, VkglTestCase_034580_2);

#define VkglTestCase_034581_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034581_2 "_mixed.rgba32f_srgb8_alpha8_astc_4x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034581, VkglTestCase_034581_1, VkglTestCase_034581_2);

#define VkglTestCase_034582_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034582_2 "ed.rgba32f_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034582, VkglTestCase_034582_1, VkglTestCase_034582_2);

#define VkglTestCase_034583_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034583_2 "d.rgba32f_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034583, VkglTestCase_034583_1, VkglTestCase_034583_2);

#define VkglTestCase_034584_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034584_2 "d.rgba32f_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034584, VkglTestCase_034584_1, VkglTestCase_034584_2);

#define VkglTestCase_034585_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034585_2 "ed.rgba32f_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034585, VkglTestCase_034585_1, VkglTestCase_034585_2);

#define VkglTestCase_034586_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_034586_2 "gba32f_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034586, VkglTestCase_034586_1, VkglTestCase_034586_2);
