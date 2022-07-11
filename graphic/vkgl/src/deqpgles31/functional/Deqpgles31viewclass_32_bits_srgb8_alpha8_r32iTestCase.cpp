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

#define VkglTestCase_030630_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030630_2 "class_32_bits.srgb8_alpha8_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030630, VkglTestCase_030630_1, VkglTestCase_030630_2);

#define VkglTestCase_030631_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030631_2 "class_32_bits.srgb8_alpha8_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030631, VkglTestCase_030631_1, VkglTestCase_030631_2);

#define VkglTestCase_030632_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030632_2 "wclass_32_bits.srgb8_alpha8_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030632, VkglTestCase_030632_1, VkglTestCase_030632_2);

#define VkglTestCase_030633_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030633_2 "ss_32_bits.srgb8_alpha8_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030633, VkglTestCase_030633_1, VkglTestCase_030633_2);

#define VkglTestCase_030634_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030634_2 "ass_32_bits.srgb8_alpha8_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030634, VkglTestCase_030634_1, VkglTestCase_030634_2);

#define VkglTestCase_030635_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030635_2 "class_32_bits.srgb8_alpha8_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030635, VkglTestCase_030635_1, VkglTestCase_030635_2);

#define VkglTestCase_030636_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030636_2 "class_32_bits.srgb8_alpha8_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030636, VkglTestCase_030636_1, VkglTestCase_030636_2);

#define VkglTestCase_030637_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030637_2 "wclass_32_bits.srgb8_alpha8_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030637, VkglTestCase_030637_1, VkglTestCase_030637_2);

#define VkglTestCase_030638_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030638_2 "ss_32_bits.srgb8_alpha8_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030638, VkglTestCase_030638_1, VkglTestCase_030638_2);

#define VkglTestCase_030639_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030639_2 "ass_32_bits.srgb8_alpha8_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030639, VkglTestCase_030639_1, VkglTestCase_030639_2);

#define VkglTestCase_030640_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030640_2 "wclass_32_bits.srgb8_alpha8_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030640, VkglTestCase_030640_1, VkglTestCase_030640_2);

#define VkglTestCase_030641_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030641_2 "wclass_32_bits.srgb8_alpha8_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030641, VkglTestCase_030641_1, VkglTestCase_030641_2);

#define VkglTestCase_030642_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030642_2 "ewclass_32_bits.srgb8_alpha8_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030642, VkglTestCase_030642_1, VkglTestCase_030642_2);

#define VkglTestCase_030643_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030643_2 "ass_32_bits.srgb8_alpha8_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030643, VkglTestCase_030643_1, VkglTestCase_030643_2);

#define VkglTestCase_030644_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030644_2 "lass_32_bits.srgb8_alpha8_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030644, VkglTestCase_030644_1, VkglTestCase_030644_2);

#define VkglTestCase_030645_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030645_2 "ss_32_bits.srgb8_alpha8_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030645, VkglTestCase_030645_1, VkglTestCase_030645_2);

#define VkglTestCase_030646_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030646_2 "ss_32_bits.srgb8_alpha8_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030646, VkglTestCase_030646_1, VkglTestCase_030646_2);

#define VkglTestCase_030647_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030647_2 "ass_32_bits.srgb8_alpha8_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030647, VkglTestCase_030647_1, VkglTestCase_030647_2);

#define VkglTestCase_030648_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030648_2 "32_bits.srgb8_alpha8_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030648, VkglTestCase_030648_1, VkglTestCase_030648_2);

#define VkglTestCase_030649_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030649_2 "_32_bits.srgb8_alpha8_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030649, VkglTestCase_030649_1, VkglTestCase_030649_2);

#define VkglTestCase_030650_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030650_2 "ass_32_bits.srgb8_alpha8_r32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030650, VkglTestCase_030650_1, VkglTestCase_030650_2);

#define VkglTestCase_030651_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030651_2 "ass_32_bits.srgb8_alpha8_r32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030651, VkglTestCase_030651_1, VkglTestCase_030651_2);

#define VkglTestCase_030652_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030652_2 "lass_32_bits.srgb8_alpha8_r32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030652, VkglTestCase_030652_1, VkglTestCase_030652_2);

#define VkglTestCase_030653_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030653_2 "_32_bits.srgb8_alpha8_r32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030653, VkglTestCase_030653_1, VkglTestCase_030653_2);

#define VkglTestCase_030654_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030654_2 "ss_32_bits.srgb8_alpha8_r32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030654, VkglTestCase_030654_1, VkglTestCase_030654_2);
