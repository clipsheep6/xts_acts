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
#include "../ActsDeqpgles310037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036479_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036479_2 "ts_mixed.rgba_astc_6x6_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036479, VkglTestCase_036479_1, VkglTestCase_036479_2);

#define VkglTestCase_036480_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036480_2 "ts_mixed.rgba_astc_6x6_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036480, VkglTestCase_036480_1, VkglTestCase_036480_2);

#define VkglTestCase_036481_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036481_2 "its_mixed.rgba_astc_6x6_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036481, VkglTestCase_036481_1, VkglTestCase_036481_2);

#define VkglTestCase_036482_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036482_2 "mixed.rgba_astc_6x6_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036482, VkglTestCase_036482_1, VkglTestCase_036482_2);

#define VkglTestCase_036483_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036483_2 "_mixed.rgba_astc_6x6_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036483, VkglTestCase_036483_1, VkglTestCase_036483_2);

#define VkglTestCase_036484_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036484_2 "ts_mixed.rgba_astc_6x6_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036484, VkglTestCase_036484_1, VkglTestCase_036484_2);

#define VkglTestCase_036485_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036485_2 "ts_mixed.rgba_astc_6x6_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036485, VkglTestCase_036485_1, VkglTestCase_036485_2);

#define VkglTestCase_036486_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036486_2 "its_mixed.rgba_astc_6x6_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036486, VkglTestCase_036486_1, VkglTestCase_036486_2);

#define VkglTestCase_036487_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036487_2 "mixed.rgba_astc_6x6_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036487, VkglTestCase_036487_1, VkglTestCase_036487_2);

#define VkglTestCase_036488_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036488_2 "_mixed.rgba_astc_6x6_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036488, VkglTestCase_036488_1, VkglTestCase_036488_2);

#define VkglTestCase_036489_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036489_2 "its_mixed.rgba_astc_6x6_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036489, VkglTestCase_036489_1, VkglTestCase_036489_2);

#define VkglTestCase_036490_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036490_2 "its_mixed.rgba_astc_6x6_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036490, VkglTestCase_036490_1, VkglTestCase_036490_2);

#define VkglTestCase_036491_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036491_2 "bits_mixed.rgba_astc_6x6_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036491, VkglTestCase_036491_1, VkglTestCase_036491_2);

#define VkglTestCase_036492_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036492_2 "_mixed.rgba_astc_6x6_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036492, VkglTestCase_036492_1, VkglTestCase_036492_2);

#define VkglTestCase_036493_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036493_2 "s_mixed.rgba_astc_6x6_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036493, VkglTestCase_036493_1, VkglTestCase_036493_2);

#define VkglTestCase_036494_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036494_2 "mixed.rgba_astc_6x6_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036494, VkglTestCase_036494_1, VkglTestCase_036494_2);

#define VkglTestCase_036495_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036495_2 "mixed.rgba_astc_6x6_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036495, VkglTestCase_036495_1, VkglTestCase_036495_2);

#define VkglTestCase_036496_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036496_2 "_mixed.rgba_astc_6x6_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036496, VkglTestCase_036496_1, VkglTestCase_036496_2);

#define VkglTestCase_036497_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036497_2 "ed.rgba_astc_6x6_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036497, VkglTestCase_036497_1, VkglTestCase_036497_2);

#define VkglTestCase_036498_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036498_2 "xed.rgba_astc_6x6_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036498, VkglTestCase_036498_1, VkglTestCase_036498_2);
