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
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031810_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031810_2 "iewclass_16_bits.r16i_r16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031810, VkglTestCase_031810_1, VkglTestCase_031810_2);

#define VkglTestCase_031811_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031811_2 "iewclass_16_bits.r16i_r16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031811, VkglTestCase_031811_1, VkglTestCase_031811_2);

#define VkglTestCase_031812_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031812_2 "viewclass_16_bits.r16i_r16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031812, VkglTestCase_031812_1, VkglTestCase_031812_2);

#define VkglTestCase_031813_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031813_2 "class_16_bits.r16i_r16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031813, VkglTestCase_031813_1, VkglTestCase_031813_2);

#define VkglTestCase_031814_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031814_2 "ewclass_16_bits.r16i_r16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031814, VkglTestCase_031814_1, VkglTestCase_031814_2);

#define VkglTestCase_031815_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031815_2 "iewclass_16_bits.r16i_r16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031815, VkglTestCase_031815_1, VkglTestCase_031815_2);

#define VkglTestCase_031816_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031816_2 "iewclass_16_bits.r16i_r16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031816, VkglTestCase_031816_1, VkglTestCase_031816_2);

#define VkglTestCase_031817_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031817_2 "viewclass_16_bits.r16i_r16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031817, VkglTestCase_031817_1, VkglTestCase_031817_2);

#define VkglTestCase_031818_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031818_2 "class_16_bits.r16i_r16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031818, VkglTestCase_031818_1, VkglTestCase_031818_2);

#define VkglTestCase_031819_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031819_2 "ewclass_16_bits.r16i_r16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031819, VkglTestCase_031819_1, VkglTestCase_031819_2);

#define VkglTestCase_031820_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031820_2 "viewclass_16_bits.r16i_r16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031820, VkglTestCase_031820_1, VkglTestCase_031820_2);

#define VkglTestCase_031821_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031821_2 "viewclass_16_bits.r16i_r16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031821, VkglTestCase_031821_1, VkglTestCase_031821_2);

#define VkglTestCase_031822_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031822_2 ".viewclass_16_bits.r16i_r16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031822, VkglTestCase_031822_1, VkglTestCase_031822_2);

#define VkglTestCase_031823_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031823_2 "wclass_16_bits.r16i_r16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031823, VkglTestCase_031823_1, VkglTestCase_031823_2);

#define VkglTestCase_031824_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031824_2 "iewclass_16_bits.r16i_r16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031824, VkglTestCase_031824_1, VkglTestCase_031824_2);

#define VkglTestCase_031825_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031825_2 "class_16_bits.r16i_r16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031825, VkglTestCase_031825_1, VkglTestCase_031825_2);

#define VkglTestCase_031826_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031826_2 "class_16_bits.r16i_r16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031826, VkglTestCase_031826_1, VkglTestCase_031826_2);

#define VkglTestCase_031827_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031827_2 "wclass_16_bits.r16i_r16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031827, VkglTestCase_031827_1, VkglTestCase_031827_2);

#define VkglTestCase_031828_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031828_2 "ss_16_bits.r16i_r16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031828, VkglTestCase_031828_1, VkglTestCase_031828_2);

#define VkglTestCase_031829_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031829_2 "lass_16_bits.r16i_r16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031829, VkglTestCase_031829_1, VkglTestCase_031829_2);

#define VkglTestCase_031830_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031830_2 "ewclass_16_bits.r16i_r16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031830, VkglTestCase_031830_1, VkglTestCase_031830_2);

#define VkglTestCase_031831_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031831_2 "ewclass_16_bits.r16i_r16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031831, VkglTestCase_031831_1, VkglTestCase_031831_2);

#define VkglTestCase_031832_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031832_2 "iewclass_16_bits.r16i_r16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031832, VkglTestCase_031832_1, VkglTestCase_031832_2);

#define VkglTestCase_031833_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031833_2 "lass_16_bits.r16i_r16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031833, VkglTestCase_031833_1, VkglTestCase_031833_2);

#define VkglTestCase_031834_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031834_2 "class_16_bits.r16i_r16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031834, VkglTestCase_031834_1, VkglTestCase_031834_2);
