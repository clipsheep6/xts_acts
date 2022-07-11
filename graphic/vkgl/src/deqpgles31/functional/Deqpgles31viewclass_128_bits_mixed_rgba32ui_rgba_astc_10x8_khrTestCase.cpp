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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035499_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035499_2 "s_mixed.rgba32ui_rgba_astc_10x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035499, VkglTestCase_035499_1, VkglTestCase_035499_2);

#define VkglTestCase_035500_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035500_2 "s_mixed.rgba32ui_rgba_astc_10x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035500, VkglTestCase_035500_1, VkglTestCase_035500_2);

#define VkglTestCase_035501_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035501_2 "ts_mixed.rgba32ui_rgba_astc_10x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035501, VkglTestCase_035501_1, VkglTestCase_035501_2);

#define VkglTestCase_035502_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035502_2 "ixed.rgba32ui_rgba_astc_10x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035502, VkglTestCase_035502_1, VkglTestCase_035502_2);

#define VkglTestCase_035503_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035503_2 "s_mixed.rgba32ui_rgba_astc_10x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035503, VkglTestCase_035503_1, VkglTestCase_035503_2);

#define VkglTestCase_035504_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035504_2 "s_mixed.rgba32ui_rgba_astc_10x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035504, VkglTestCase_035504_1, VkglTestCase_035504_2);

#define VkglTestCase_035505_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035505_2 "ts_mixed.rgba32ui_rgba_astc_10x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035505, VkglTestCase_035505_1, VkglTestCase_035505_2);

#define VkglTestCase_035506_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035506_2 "ixed.rgba32ui_rgba_astc_10x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035506, VkglTestCase_035506_1, VkglTestCase_035506_2);

#define VkglTestCase_035507_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035507_2 "ts_mixed.rgba32ui_rgba_astc_10x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035507, VkglTestCase_035507_1, VkglTestCase_035507_2);

#define VkglTestCase_035508_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035508_2 "ts_mixed.rgba32ui_rgba_astc_10x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035508, VkglTestCase_035508_1, VkglTestCase_035508_2);

#define VkglTestCase_035509_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035509_2 "its_mixed.rgba32ui_rgba_astc_10x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035509, VkglTestCase_035509_1, VkglTestCase_035509_2);

#define VkglTestCase_035510_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035510_2 "mixed.rgba32ui_rgba_astc_10x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035510, VkglTestCase_035510_1, VkglTestCase_035510_2);

#define VkglTestCase_035511_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035511_2 "ixed.rgba32ui_rgba_astc_10x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035511, VkglTestCase_035511_1, VkglTestCase_035511_2);

#define VkglTestCase_035512_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035512_2 "ixed.rgba32ui_rgba_astc_10x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035512, VkglTestCase_035512_1, VkglTestCase_035512_2);

#define VkglTestCase_035513_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035513_2 "mixed.rgba32ui_rgba_astc_10x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035513, VkglTestCase_035513_1, VkglTestCase_035513_2);

#define VkglTestCase_035514_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035514_2 "d.rgba32ui_rgba_astc_10x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035514, VkglTestCase_035514_1, VkglTestCase_035514_2);

#define VkglTestCase_035515_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035515_2 "mixed.rgba32ui_rgba_astc_10x8_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035515, VkglTestCase_035515_1, VkglTestCase_035515_2);

#define VkglTestCase_035516_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035516_2 "mixed.rgba32ui_rgba_astc_10x8_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035516, VkglTestCase_035516_1, VkglTestCase_035516_2);

#define VkglTestCase_035517_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035517_2 "_mixed.rgba32ui_rgba_astc_10x8_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035517, VkglTestCase_035517_1, VkglTestCase_035517_2);

#define VkglTestCase_035518_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035518_2 "ed.rgba32ui_rgba_astc_10x8_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035518, VkglTestCase_035518_1, VkglTestCase_035518_2);
