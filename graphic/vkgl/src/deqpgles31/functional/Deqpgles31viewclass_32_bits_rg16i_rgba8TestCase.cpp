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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027788_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027788_2 "iewclass_32_bits.rg16i_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027788, VkglTestCase_027788_1, VkglTestCase_027788_2);

#define VkglTestCase_027789_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027789_2 "iewclass_32_bits.rg16i_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027789, VkglTestCase_027789_1, VkglTestCase_027789_2);

#define VkglTestCase_027790_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027790_2 "viewclass_32_bits.rg16i_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027790, VkglTestCase_027790_1, VkglTestCase_027790_2);

#define VkglTestCase_027791_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027791_2 "class_32_bits.rg16i_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027791, VkglTestCase_027791_1, VkglTestCase_027791_2);

#define VkglTestCase_027792_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027792_2 "wclass_32_bits.rg16i_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027792, VkglTestCase_027792_1, VkglTestCase_027792_2);

#define VkglTestCase_027793_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027793_2 "iewclass_32_bits.rg16i_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027793, VkglTestCase_027793_1, VkglTestCase_027793_2);

#define VkglTestCase_027794_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027794_2 "iewclass_32_bits.rg16i_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027794, VkglTestCase_027794_1, VkglTestCase_027794_2);

#define VkglTestCase_027795_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027795_2 "viewclass_32_bits.rg16i_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027795, VkglTestCase_027795_1, VkglTestCase_027795_2);

#define VkglTestCase_027796_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027796_2 "class_32_bits.rg16i_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027796, VkglTestCase_027796_1, VkglTestCase_027796_2);

#define VkglTestCase_027797_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027797_2 "wclass_32_bits.rg16i_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027797, VkglTestCase_027797_1, VkglTestCase_027797_2);

#define VkglTestCase_027798_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027798_2 "viewclass_32_bits.rg16i_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027798, VkglTestCase_027798_1, VkglTestCase_027798_2);

#define VkglTestCase_027799_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027799_2 "viewclass_32_bits.rg16i_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027799, VkglTestCase_027799_1, VkglTestCase_027799_2);

#define VkglTestCase_027800_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027800_2 ".viewclass_32_bits.rg16i_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027800, VkglTestCase_027800_1, VkglTestCase_027800_2);

#define VkglTestCase_027801_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027801_2 "wclass_32_bits.rg16i_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027801, VkglTestCase_027801_1, VkglTestCase_027801_2);

#define VkglTestCase_027802_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027802_2 "ewclass_32_bits.rg16i_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027802, VkglTestCase_027802_1, VkglTestCase_027802_2);

#define VkglTestCase_027803_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027803_2 "class_32_bits.rg16i_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027803, VkglTestCase_027803_1, VkglTestCase_027803_2);

#define VkglTestCase_027804_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027804_2 "class_32_bits.rg16i_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027804, VkglTestCase_027804_1, VkglTestCase_027804_2);

#define VkglTestCase_027805_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027805_2 "wclass_32_bits.rg16i_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027805, VkglTestCase_027805_1, VkglTestCase_027805_2);

#define VkglTestCase_027806_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027806_2 "ss_32_bits.rg16i_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027806, VkglTestCase_027806_1, VkglTestCase_027806_2);

#define VkglTestCase_027807_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027807_2 "ass_32_bits.rg16i_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027807, VkglTestCase_027807_1, VkglTestCase_027807_2);

#define VkglTestCase_027808_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027808_2 "wclass_32_bits.rg16i_rgba8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027808, VkglTestCase_027808_1, VkglTestCase_027808_2);

#define VkglTestCase_027809_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027809_2 "wclass_32_bits.rg16i_rgba8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027809, VkglTestCase_027809_1, VkglTestCase_027809_2);

#define VkglTestCase_027810_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027810_2 "ewclass_32_bits.rg16i_rgba8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027810, VkglTestCase_027810_1, VkglTestCase_027810_2);

#define VkglTestCase_027811_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027811_2 "ass_32_bits.rg16i_rgba8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027811, VkglTestCase_027811_1, VkglTestCase_027811_2);

#define VkglTestCase_027812_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027812_2 "class_32_bits.rg16i_rgba8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027812, VkglTestCase_027812_1, VkglTestCase_027812_2);
