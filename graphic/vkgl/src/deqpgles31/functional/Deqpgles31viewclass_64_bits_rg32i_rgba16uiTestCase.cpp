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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025799_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025799_2 "wclass_64_bits.rg32i_rgba16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025799, VkglTestCase_025799_1, VkglTestCase_025799_2);

#define VkglTestCase_025800_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025800_2 "wclass_64_bits.rg32i_rgba16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025800, VkglTestCase_025800_1, VkglTestCase_025800_2);

#define VkglTestCase_025801_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025801_2 "ewclass_64_bits.rg32i_rgba16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025801, VkglTestCase_025801_1, VkglTestCase_025801_2);

#define VkglTestCase_025802_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025802_2 "ass_64_bits.rg32i_rgba16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025802, VkglTestCase_025802_1, VkglTestCase_025802_2);

#define VkglTestCase_025803_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025803_2 "class_64_bits.rg32i_rgba16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025803, VkglTestCase_025803_1, VkglTestCase_025803_2);

#define VkglTestCase_025804_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025804_2 "wclass_64_bits.rg32i_rgba16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025804, VkglTestCase_025804_1, VkglTestCase_025804_2);

#define VkglTestCase_025805_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025805_2 "wclass_64_bits.rg32i_rgba16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025805, VkglTestCase_025805_1, VkglTestCase_025805_2);

#define VkglTestCase_025806_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025806_2 "ewclass_64_bits.rg32i_rgba16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025806, VkglTestCase_025806_1, VkglTestCase_025806_2);

#define VkglTestCase_025807_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025807_2 "ass_64_bits.rg32i_rgba16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025807, VkglTestCase_025807_1, VkglTestCase_025807_2);

#define VkglTestCase_025808_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025808_2 "class_64_bits.rg32i_rgba16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025808, VkglTestCase_025808_1, VkglTestCase_025808_2);

#define VkglTestCase_025809_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025809_2 "ewclass_64_bits.rg32i_rgba16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025809, VkglTestCase_025809_1, VkglTestCase_025809_2);

#define VkglTestCase_025810_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025810_2 "ewclass_64_bits.rg32i_rgba16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025810, VkglTestCase_025810_1, VkglTestCase_025810_2);

#define VkglTestCase_025811_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025811_2 "iewclass_64_bits.rg32i_rgba16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025811, VkglTestCase_025811_1, VkglTestCase_025811_2);

#define VkglTestCase_025812_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025812_2 "lass_64_bits.rg32i_rgba16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025812, VkglTestCase_025812_1, VkglTestCase_025812_2);

#define VkglTestCase_025813_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025813_2 "wclass_64_bits.rg32i_rgba16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025813, VkglTestCase_025813_1, VkglTestCase_025813_2);

#define VkglTestCase_025814_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025814_2 "ass_64_bits.rg32i_rgba16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025814, VkglTestCase_025814_1, VkglTestCase_025814_2);

#define VkglTestCase_025815_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025815_2 "ass_64_bits.rg32i_rgba16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025815, VkglTestCase_025815_1, VkglTestCase_025815_2);

#define VkglTestCase_025816_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025816_2 "lass_64_bits.rg32i_rgba16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025816, VkglTestCase_025816_1, VkglTestCase_025816_2);

#define VkglTestCase_025817_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025817_2 "_64_bits.rg32i_rgba16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025817, VkglTestCase_025817_1, VkglTestCase_025817_2);

#define VkglTestCase_025818_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025818_2 "ss_64_bits.rg32i_rgba16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025818, VkglTestCase_025818_1, VkglTestCase_025818_2);

#define VkglTestCase_025819_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025819_2 "class_64_bits.rg32i_rgba16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025819, VkglTestCase_025819_1, VkglTestCase_025819_2);

#define VkglTestCase_025820_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025820_2 "class_64_bits.rg32i_rgba16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025820, VkglTestCase_025820_1, VkglTestCase_025820_2);

#define VkglTestCase_025821_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025821_2 "wclass_64_bits.rg32i_rgba16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025821, VkglTestCase_025821_1, VkglTestCase_025821_2);

#define VkglTestCase_025822_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025822_2 "ss_64_bits.rg32i_rgba16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025822, VkglTestCase_025822_1, VkglTestCase_025822_2);

#define VkglTestCase_025823_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025823_2 "ass_64_bits.rg32i_rgba16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025823, VkglTestCase_025823_1, VkglTestCase_025823_2);
