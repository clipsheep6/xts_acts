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
#include "../ActsDeqpgles310031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030800_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030800_2 "ass_32_bits.srgb8_alpha8_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030800, VkglTestCase_030800_1, VkglTestCase_030800_2);

#define VkglTestCase_030801_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030801_2 "ass_32_bits.srgb8_alpha8_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030801, VkglTestCase_030801_1, VkglTestCase_030801_2);

#define VkglTestCase_030802_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030802_2 "lass_32_bits.srgb8_alpha8_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030802, VkglTestCase_030802_1, VkglTestCase_030802_2);

#define VkglTestCase_030803_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030803_2 "_32_bits.srgb8_alpha8_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030803, VkglTestCase_030803_1, VkglTestCase_030803_2);

#define VkglTestCase_030804_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030804_2 "ss_32_bits.srgb8_alpha8_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030804, VkglTestCase_030804_1, VkglTestCase_030804_2);

#define VkglTestCase_030805_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030805_2 "ass_32_bits.srgb8_alpha8_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030805, VkglTestCase_030805_1, VkglTestCase_030805_2);

#define VkglTestCase_030806_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030806_2 "ass_32_bits.srgb8_alpha8_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030806, VkglTestCase_030806_1, VkglTestCase_030806_2);

#define VkglTestCase_030807_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030807_2 "lass_32_bits.srgb8_alpha8_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030807, VkglTestCase_030807_1, VkglTestCase_030807_2);

#define VkglTestCase_030808_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030808_2 "_32_bits.srgb8_alpha8_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030808, VkglTestCase_030808_1, VkglTestCase_030808_2);

#define VkglTestCase_030809_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030809_2 "ss_32_bits.srgb8_alpha8_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030809, VkglTestCase_030809_1, VkglTestCase_030809_2);

#define VkglTestCase_030810_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030810_2 "lass_32_bits.srgb8_alpha8_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030810, VkglTestCase_030810_1, VkglTestCase_030810_2);

#define VkglTestCase_030811_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030811_2 "lass_32_bits.srgb8_alpha8_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030811, VkglTestCase_030811_1, VkglTestCase_030811_2);

#define VkglTestCase_030812_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030812_2 "class_32_bits.srgb8_alpha8_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030812, VkglTestCase_030812_1, VkglTestCase_030812_2);

#define VkglTestCase_030813_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030813_2 "s_32_bits.srgb8_alpha8_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030813, VkglTestCase_030813_1, VkglTestCase_030813_2);

#define VkglTestCase_030814_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030814_2 "ass_32_bits.srgb8_alpha8_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030814, VkglTestCase_030814_1, VkglTestCase_030814_2);

#define VkglTestCase_030815_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030815_2 "_32_bits.srgb8_alpha8_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030815, VkglTestCase_030815_1, VkglTestCase_030815_2);

#define VkglTestCase_030816_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030816_2 "_32_bits.srgb8_alpha8_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030816, VkglTestCase_030816_1, VkglTestCase_030816_2);

#define VkglTestCase_030817_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030817_2 "s_32_bits.srgb8_alpha8_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030817, VkglTestCase_030817_1, VkglTestCase_030817_2);

#define VkglTestCase_030818_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030818_2 "_bits.srgb8_alpha8_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030818, VkglTestCase_030818_1, VkglTestCase_030818_2);

#define VkglTestCase_030819_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030819_2 "32_bits.srgb8_alpha8_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030819, VkglTestCase_030819_1, VkglTestCase_030819_2);

#define VkglTestCase_030820_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030820_2 "ss_32_bits.srgb8_alpha8_rgba8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030820, VkglTestCase_030820_1, VkglTestCase_030820_2);

#define VkglTestCase_030821_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030821_2 "ss_32_bits.srgb8_alpha8_rgba8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030821, VkglTestCase_030821_1, VkglTestCase_030821_2);

#define VkglTestCase_030822_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030822_2 "ass_32_bits.srgb8_alpha8_rgba8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030822, VkglTestCase_030822_1, VkglTestCase_030822_2);

#define VkglTestCase_030823_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030823_2 "32_bits.srgb8_alpha8_rgba8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030823, VkglTestCase_030823_1, VkglTestCase_030823_2);

#define VkglTestCase_030824_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030824_2 "_32_bits.srgb8_alpha8_rgba8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030824, VkglTestCase_030824_1, VkglTestCase_030824_2);
