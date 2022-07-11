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
#include "../ActsDeqpgles310033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032817_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032817_2 "d.viewclass_8_bits.r8i_r8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032817, VkglTestCase_032817_1, VkglTestCase_032817_2);

#define VkglTestCase_032818_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032818_2 "d.viewclass_8_bits.r8i_r8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032818, VkglTestCase_032818_1, VkglTestCase_032818_2);

#define VkglTestCase_032819_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032819_2 "ed.viewclass_8_bits.r8i_r8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032819, VkglTestCase_032819_1, VkglTestCase_032819_2);

#define VkglTestCase_032820_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032820_2 "iewclass_8_bits.r8i_r8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032820, VkglTestCase_032820_1, VkglTestCase_032820_2);

#define VkglTestCase_032821_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032821_2 "viewclass_8_bits.r8i_r8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032821, VkglTestCase_032821_1, VkglTestCase_032821_2);

#define VkglTestCase_032822_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032822_2 "d.viewclass_8_bits.r8i_r8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032822, VkglTestCase_032822_1, VkglTestCase_032822_2);

#define VkglTestCase_032823_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032823_2 "d.viewclass_8_bits.r8i_r8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032823, VkglTestCase_032823_1, VkglTestCase_032823_2);

#define VkglTestCase_032824_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032824_2 "ed.viewclass_8_bits.r8i_r8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032824, VkglTestCase_032824_1, VkglTestCase_032824_2);

#define VkglTestCase_032825_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032825_2 "iewclass_8_bits.r8i_r8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032825, VkglTestCase_032825_1, VkglTestCase_032825_2);

#define VkglTestCase_032826_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032826_2 "viewclass_8_bits.r8i_r8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032826, VkglTestCase_032826_1, VkglTestCase_032826_2);

#define VkglTestCase_032827_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032827_2 "ed.viewclass_8_bits.r8i_r8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032827, VkglTestCase_032827_1, VkglTestCase_032827_2);

#define VkglTestCase_032828_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032828_2 "ed.viewclass_8_bits.r8i_r8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032828, VkglTestCase_032828_1, VkglTestCase_032828_2);

#define VkglTestCase_032829_1 "dEQP-GLES31.functional.copy_image.non_compres"
#define VkglTestCase_032829_2 "sed.viewclass_8_bits.r8i_r8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032829, VkglTestCase_032829_1, VkglTestCase_032829_2);

#define VkglTestCase_032830_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032830_2 "viewclass_8_bits.r8i_r8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032830, VkglTestCase_032830_1, VkglTestCase_032830_2);

#define VkglTestCase_032831_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032831_2 ".viewclass_8_bits.r8i_r8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032831, VkglTestCase_032831_1, VkglTestCase_032831_2);

#define VkglTestCase_032832_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032832_2 "iewclass_8_bits.r8i_r8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032832, VkglTestCase_032832_1, VkglTestCase_032832_2);

#define VkglTestCase_032833_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032833_2 "iewclass_8_bits.r8i_r8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032833, VkglTestCase_032833_1, VkglTestCase_032833_2);

#define VkglTestCase_032834_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032834_2 "viewclass_8_bits.r8i_r8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032834, VkglTestCase_032834_1, VkglTestCase_032834_2);

#define VkglTestCase_032835_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032835_2 "class_8_bits.r8i_r8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032835, VkglTestCase_032835_1, VkglTestCase_032835_2);

#define VkglTestCase_032836_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032836_2 "wclass_8_bits.r8i_r8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032836, VkglTestCase_032836_1, VkglTestCase_032836_2);

#define VkglTestCase_032837_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032837_2 "viewclass_8_bits.r8i_r8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032837, VkglTestCase_032837_1, VkglTestCase_032837_2);

#define VkglTestCase_032838_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032838_2 "viewclass_8_bits.r8i_r8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032838, VkglTestCase_032838_1, VkglTestCase_032838_2);

#define VkglTestCase_032839_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032839_2 ".viewclass_8_bits.r8i_r8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032839, VkglTestCase_032839_1, VkglTestCase_032839_2);

#define VkglTestCase_032840_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032840_2 "wclass_8_bits.r8i_r8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032840, VkglTestCase_032840_1, VkglTestCase_032840_2);

#define VkglTestCase_032841_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032841_2 "iewclass_8_bits.r8i_r8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032841, VkglTestCase_032841_1, VkglTestCase_032841_2);
