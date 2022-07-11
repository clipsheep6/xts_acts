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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028788_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028788_2 "ewclass_32_bits.rgba8i_rg16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028788, VkglTestCase_028788_1, VkglTestCase_028788_2);

#define VkglTestCase_028789_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028789_2 "ewclass_32_bits.rgba8i_rg16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028789, VkglTestCase_028789_1, VkglTestCase_028789_2);

#define VkglTestCase_028790_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028790_2 "iewclass_32_bits.rgba8i_rg16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028790, VkglTestCase_028790_1, VkglTestCase_028790_2);

#define VkglTestCase_028791_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028791_2 "lass_32_bits.rgba8i_rg16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028791, VkglTestCase_028791_1, VkglTestCase_028791_2);

#define VkglTestCase_028792_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028792_2 "wclass_32_bits.rgba8i_rg16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028792, VkglTestCase_028792_1, VkglTestCase_028792_2);

#define VkglTestCase_028793_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028793_2 "ewclass_32_bits.rgba8i_rg16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028793, VkglTestCase_028793_1, VkglTestCase_028793_2);

#define VkglTestCase_028794_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028794_2 "ewclass_32_bits.rgba8i_rg16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028794, VkglTestCase_028794_1, VkglTestCase_028794_2);

#define VkglTestCase_028795_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028795_2 "iewclass_32_bits.rgba8i_rg16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028795, VkglTestCase_028795_1, VkglTestCase_028795_2);

#define VkglTestCase_028796_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028796_2 "lass_32_bits.rgba8i_rg16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028796, VkglTestCase_028796_1, VkglTestCase_028796_2);

#define VkglTestCase_028797_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028797_2 "wclass_32_bits.rgba8i_rg16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028797, VkglTestCase_028797_1, VkglTestCase_028797_2);

#define VkglTestCase_028798_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028798_2 "iewclass_32_bits.rgba8i_rg16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028798, VkglTestCase_028798_1, VkglTestCase_028798_2);

#define VkglTestCase_028799_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028799_2 "iewclass_32_bits.rgba8i_rg16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028799, VkglTestCase_028799_1, VkglTestCase_028799_2);

#define VkglTestCase_028800_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028800_2 "viewclass_32_bits.rgba8i_rg16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028800, VkglTestCase_028800_1, VkglTestCase_028800_2);

#define VkglTestCase_028801_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028801_2 "class_32_bits.rgba8i_rg16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028801, VkglTestCase_028801_1, VkglTestCase_028801_2);

#define VkglTestCase_028802_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028802_2 "ewclass_32_bits.rgba8i_rg16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028802, VkglTestCase_028802_1, VkglTestCase_028802_2);

#define VkglTestCase_028803_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028803_2 "lass_32_bits.rgba8i_rg16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028803, VkglTestCase_028803_1, VkglTestCase_028803_2);

#define VkglTestCase_028804_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028804_2 "lass_32_bits.rgba8i_rg16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028804, VkglTestCase_028804_1, VkglTestCase_028804_2);

#define VkglTestCase_028805_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028805_2 "class_32_bits.rgba8i_rg16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028805, VkglTestCase_028805_1, VkglTestCase_028805_2);

#define VkglTestCase_028806_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028806_2 "s_32_bits.rgba8i_rg16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028806, VkglTestCase_028806_1, VkglTestCase_028806_2);

#define VkglTestCase_028807_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028807_2 "ass_32_bits.rgba8i_rg16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028807, VkglTestCase_028807_1, VkglTestCase_028807_2);

#define VkglTestCase_028808_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028808_2 "wclass_32_bits.rgba8i_rg16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028808, VkglTestCase_028808_1, VkglTestCase_028808_2);

#define VkglTestCase_028809_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028809_2 "wclass_32_bits.rgba8i_rg16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028809, VkglTestCase_028809_1, VkglTestCase_028809_2);

#define VkglTestCase_028810_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028810_2 "ewclass_32_bits.rgba8i_rg16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028810, VkglTestCase_028810_1, VkglTestCase_028810_2);

#define VkglTestCase_028811_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028811_2 "ass_32_bits.rgba8i_rg16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028811, VkglTestCase_028811_1, VkglTestCase_028811_2);

#define VkglTestCase_028812_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028812_2 "lass_32_bits.rgba8i_rg16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028812, VkglTestCase_028812_1, VkglTestCase_028812_2);
