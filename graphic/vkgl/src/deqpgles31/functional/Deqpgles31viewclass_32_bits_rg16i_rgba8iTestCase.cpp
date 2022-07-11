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

#define VkglTestCase_027813_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027813_2 "ewclass_32_bits.rg16i_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027813, VkglTestCase_027813_1, VkglTestCase_027813_2);

#define VkglTestCase_027814_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027814_2 "ewclass_32_bits.rg16i_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027814, VkglTestCase_027814_1, VkglTestCase_027814_2);

#define VkglTestCase_027815_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027815_2 "iewclass_32_bits.rg16i_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027815, VkglTestCase_027815_1, VkglTestCase_027815_2);

#define VkglTestCase_027816_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027816_2 "lass_32_bits.rg16i_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027816, VkglTestCase_027816_1, VkglTestCase_027816_2);

#define VkglTestCase_027817_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027817_2 "wclass_32_bits.rg16i_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027817, VkglTestCase_027817_1, VkglTestCase_027817_2);

#define VkglTestCase_027818_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027818_2 "ewclass_32_bits.rg16i_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027818, VkglTestCase_027818_1, VkglTestCase_027818_2);

#define VkglTestCase_027819_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027819_2 "ewclass_32_bits.rg16i_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027819, VkglTestCase_027819_1, VkglTestCase_027819_2);

#define VkglTestCase_027820_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027820_2 "iewclass_32_bits.rg16i_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027820, VkglTestCase_027820_1, VkglTestCase_027820_2);

#define VkglTestCase_027821_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027821_2 "lass_32_bits.rg16i_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027821, VkglTestCase_027821_1, VkglTestCase_027821_2);

#define VkglTestCase_027822_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027822_2 "wclass_32_bits.rg16i_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027822, VkglTestCase_027822_1, VkglTestCase_027822_2);

#define VkglTestCase_027823_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027823_2 "iewclass_32_bits.rg16i_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027823, VkglTestCase_027823_1, VkglTestCase_027823_2);

#define VkglTestCase_027824_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027824_2 "iewclass_32_bits.rg16i_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027824, VkglTestCase_027824_1, VkglTestCase_027824_2);

#define VkglTestCase_027825_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027825_2 "viewclass_32_bits.rg16i_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027825, VkglTestCase_027825_1, VkglTestCase_027825_2);

#define VkglTestCase_027826_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027826_2 "class_32_bits.rg16i_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027826, VkglTestCase_027826_1, VkglTestCase_027826_2);

#define VkglTestCase_027827_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027827_2 "ewclass_32_bits.rg16i_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027827, VkglTestCase_027827_1, VkglTestCase_027827_2);

#define VkglTestCase_027828_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027828_2 "lass_32_bits.rg16i_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027828, VkglTestCase_027828_1, VkglTestCase_027828_2);

#define VkglTestCase_027829_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027829_2 "lass_32_bits.rg16i_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027829, VkglTestCase_027829_1, VkglTestCase_027829_2);

#define VkglTestCase_027830_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027830_2 "class_32_bits.rg16i_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027830, VkglTestCase_027830_1, VkglTestCase_027830_2);

#define VkglTestCase_027831_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027831_2 "s_32_bits.rg16i_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027831, VkglTestCase_027831_1, VkglTestCase_027831_2);

#define VkglTestCase_027832_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027832_2 "ass_32_bits.rg16i_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027832, VkglTestCase_027832_1, VkglTestCase_027832_2);

#define VkglTestCase_027833_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027833_2 "wclass_32_bits.rg16i_rgba8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027833, VkglTestCase_027833_1, VkglTestCase_027833_2);

#define VkglTestCase_027834_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027834_2 "wclass_32_bits.rg16i_rgba8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027834, VkglTestCase_027834_1, VkglTestCase_027834_2);

#define VkglTestCase_027835_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027835_2 "ewclass_32_bits.rg16i_rgba8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027835, VkglTestCase_027835_1, VkglTestCase_027835_2);

#define VkglTestCase_027836_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027836_2 "ass_32_bits.rg16i_rgba8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027836, VkglTestCase_027836_1, VkglTestCase_027836_2);

#define VkglTestCase_027837_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027837_2 "lass_32_bits.rg16i_rgba8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027837, VkglTestCase_027837_1, VkglTestCase_027837_2);
