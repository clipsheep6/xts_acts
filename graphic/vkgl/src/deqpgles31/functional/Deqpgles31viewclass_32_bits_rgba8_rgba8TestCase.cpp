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

#define VkglTestCase_028488_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028488_2 "iewclass_32_bits.rgba8_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028488, VkglTestCase_028488_1, VkglTestCase_028488_2);

#define VkglTestCase_028489_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028489_2 "iewclass_32_bits.rgba8_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028489, VkglTestCase_028489_1, VkglTestCase_028489_2);

#define VkglTestCase_028490_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028490_2 "viewclass_32_bits.rgba8_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028490, VkglTestCase_028490_1, VkglTestCase_028490_2);

#define VkglTestCase_028491_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028491_2 "class_32_bits.rgba8_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028491, VkglTestCase_028491_1, VkglTestCase_028491_2);

#define VkglTestCase_028492_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028492_2 "wclass_32_bits.rgba8_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028492, VkglTestCase_028492_1, VkglTestCase_028492_2);

#define VkglTestCase_028493_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028493_2 "iewclass_32_bits.rgba8_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028493, VkglTestCase_028493_1, VkglTestCase_028493_2);

#define VkglTestCase_028494_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028494_2 "iewclass_32_bits.rgba8_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028494, VkglTestCase_028494_1, VkglTestCase_028494_2);

#define VkglTestCase_028495_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028495_2 "viewclass_32_bits.rgba8_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028495, VkglTestCase_028495_1, VkglTestCase_028495_2);

#define VkglTestCase_028496_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028496_2 "class_32_bits.rgba8_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028496, VkglTestCase_028496_1, VkglTestCase_028496_2);

#define VkglTestCase_028497_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028497_2 "wclass_32_bits.rgba8_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028497, VkglTestCase_028497_1, VkglTestCase_028497_2);

#define VkglTestCase_028498_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028498_2 "viewclass_32_bits.rgba8_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028498, VkglTestCase_028498_1, VkglTestCase_028498_2);

#define VkglTestCase_028499_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028499_2 "viewclass_32_bits.rgba8_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028499, VkglTestCase_028499_1, VkglTestCase_028499_2);

#define VkglTestCase_028500_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_028500_2 ".viewclass_32_bits.rgba8_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028500, VkglTestCase_028500_1, VkglTestCase_028500_2);

#define VkglTestCase_028501_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028501_2 "wclass_32_bits.rgba8_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028501, VkglTestCase_028501_1, VkglTestCase_028501_2);

#define VkglTestCase_028502_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028502_2 "ewclass_32_bits.rgba8_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028502, VkglTestCase_028502_1, VkglTestCase_028502_2);

#define VkglTestCase_028503_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028503_2 "class_32_bits.rgba8_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028503, VkglTestCase_028503_1, VkglTestCase_028503_2);

#define VkglTestCase_028504_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028504_2 "class_32_bits.rgba8_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028504, VkglTestCase_028504_1, VkglTestCase_028504_2);

#define VkglTestCase_028505_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028505_2 "wclass_32_bits.rgba8_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028505, VkglTestCase_028505_1, VkglTestCase_028505_2);

#define VkglTestCase_028506_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028506_2 "ss_32_bits.rgba8_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028506, VkglTestCase_028506_1, VkglTestCase_028506_2);

#define VkglTestCase_028507_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028507_2 "ass_32_bits.rgba8_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028507, VkglTestCase_028507_1, VkglTestCase_028507_2);

#define VkglTestCase_028508_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028508_2 "wclass_32_bits.rgba8_rgba8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028508, VkglTestCase_028508_1, VkglTestCase_028508_2);

#define VkglTestCase_028509_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028509_2 "wclass_32_bits.rgba8_rgba8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028509, VkglTestCase_028509_1, VkglTestCase_028509_2);

#define VkglTestCase_028510_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028510_2 "ewclass_32_bits.rgba8_rgba8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028510, VkglTestCase_028510_1, VkglTestCase_028510_2);

#define VkglTestCase_028511_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028511_2 "ass_32_bits.rgba8_rgba8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028511, VkglTestCase_028511_1, VkglTestCase_028511_2);

#define VkglTestCase_028512_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028512_2 "class_32_bits.rgba8_rgba8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028512, VkglTestCase_028512_1, VkglTestCase_028512_2);
