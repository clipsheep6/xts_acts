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
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026806_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026806_2 "iewclass_32_bits.r32i_rg16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026806, VkglTestCase_026806_1, VkglTestCase_026806_2);

#define VkglTestCase_026807_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026807_2 "iewclass_32_bits.r32i_rg16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026807, VkglTestCase_026807_1, VkglTestCase_026807_2);

#define VkglTestCase_026808_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026808_2 "viewclass_32_bits.r32i_rg16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026808, VkglTestCase_026808_1, VkglTestCase_026808_2);

#define VkglTestCase_026809_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026809_2 "class_32_bits.r32i_rg16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026809, VkglTestCase_026809_1, VkglTestCase_026809_2);

#define VkglTestCase_026810_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026810_2 "ewclass_32_bits.r32i_rg16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026810, VkglTestCase_026810_1, VkglTestCase_026810_2);

#define VkglTestCase_026811_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026811_2 "iewclass_32_bits.r32i_rg16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026811, VkglTestCase_026811_1, VkglTestCase_026811_2);

#define VkglTestCase_026812_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026812_2 "iewclass_32_bits.r32i_rg16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026812, VkglTestCase_026812_1, VkglTestCase_026812_2);

#define VkglTestCase_026813_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026813_2 "viewclass_32_bits.r32i_rg16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026813, VkglTestCase_026813_1, VkglTestCase_026813_2);

#define VkglTestCase_026814_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026814_2 "class_32_bits.r32i_rg16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026814, VkglTestCase_026814_1, VkglTestCase_026814_2);

#define VkglTestCase_026815_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026815_2 "ewclass_32_bits.r32i_rg16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026815, VkglTestCase_026815_1, VkglTestCase_026815_2);

#define VkglTestCase_026816_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026816_2 "viewclass_32_bits.r32i_rg16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026816, VkglTestCase_026816_1, VkglTestCase_026816_2);

#define VkglTestCase_026817_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026817_2 "viewclass_32_bits.r32i_rg16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026817, VkglTestCase_026817_1, VkglTestCase_026817_2);

#define VkglTestCase_026818_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026818_2 ".viewclass_32_bits.r32i_rg16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026818, VkglTestCase_026818_1, VkglTestCase_026818_2);

#define VkglTestCase_026819_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026819_2 "wclass_32_bits.r32i_rg16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026819, VkglTestCase_026819_1, VkglTestCase_026819_2);

#define VkglTestCase_026820_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026820_2 "iewclass_32_bits.r32i_rg16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026820, VkglTestCase_026820_1, VkglTestCase_026820_2);

#define VkglTestCase_026821_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026821_2 "class_32_bits.r32i_rg16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026821, VkglTestCase_026821_1, VkglTestCase_026821_2);

#define VkglTestCase_026822_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026822_2 "class_32_bits.r32i_rg16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026822, VkglTestCase_026822_1, VkglTestCase_026822_2);

#define VkglTestCase_026823_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026823_2 "wclass_32_bits.r32i_rg16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026823, VkglTestCase_026823_1, VkglTestCase_026823_2);

#define VkglTestCase_026824_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026824_2 "ss_32_bits.r32i_rg16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026824, VkglTestCase_026824_1, VkglTestCase_026824_2);

#define VkglTestCase_026825_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026825_2 "lass_32_bits.r32i_rg16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026825, VkglTestCase_026825_1, VkglTestCase_026825_2);

#define VkglTestCase_026826_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026826_2 "ewclass_32_bits.r32i_rg16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026826, VkglTestCase_026826_1, VkglTestCase_026826_2);

#define VkglTestCase_026827_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026827_2 "ewclass_32_bits.r32i_rg16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026827, VkglTestCase_026827_1, VkglTestCase_026827_2);

#define VkglTestCase_026828_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026828_2 "iewclass_32_bits.r32i_rg16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026828, VkglTestCase_026828_1, VkglTestCase_026828_2);

#define VkglTestCase_026829_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026829_2 "lass_32_bits.r32i_rg16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026829, VkglTestCase_026829_1, VkglTestCase_026829_2);

#define VkglTestCase_026830_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026830_2 "class_32_bits.r32i_rg16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026830, VkglTestCase_026830_1, VkglTestCase_026830_2);
