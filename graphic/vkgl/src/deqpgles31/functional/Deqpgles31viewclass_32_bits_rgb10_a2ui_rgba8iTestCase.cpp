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
#include "../ActsDeqpgles310030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029795_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029795_2 "class_32_bits.rgb10_a2ui_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029795, VkglTestCase_029795_1, VkglTestCase_029795_2);

#define VkglTestCase_029796_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029796_2 "class_32_bits.rgb10_a2ui_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029796, VkglTestCase_029796_1, VkglTestCase_029796_2);

#define VkglTestCase_029797_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029797_2 "wclass_32_bits.rgb10_a2ui_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029797, VkglTestCase_029797_1, VkglTestCase_029797_2);

#define VkglTestCase_029798_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029798_2 "ss_32_bits.rgb10_a2ui_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029798, VkglTestCase_029798_1, VkglTestCase_029798_2);

#define VkglTestCase_029799_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029799_2 "ass_32_bits.rgb10_a2ui_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029799, VkglTestCase_029799_1, VkglTestCase_029799_2);

#define VkglTestCase_029800_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029800_2 "class_32_bits.rgb10_a2ui_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029800, VkglTestCase_029800_1, VkglTestCase_029800_2);

#define VkglTestCase_029801_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029801_2 "class_32_bits.rgb10_a2ui_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029801, VkglTestCase_029801_1, VkglTestCase_029801_2);

#define VkglTestCase_029802_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029802_2 "wclass_32_bits.rgb10_a2ui_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029802, VkglTestCase_029802_1, VkglTestCase_029802_2);

#define VkglTestCase_029803_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029803_2 "ss_32_bits.rgb10_a2ui_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029803, VkglTestCase_029803_1, VkglTestCase_029803_2);

#define VkglTestCase_029804_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029804_2 "ass_32_bits.rgb10_a2ui_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029804, VkglTestCase_029804_1, VkglTestCase_029804_2);

#define VkglTestCase_029805_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029805_2 "wclass_32_bits.rgb10_a2ui_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029805, VkglTestCase_029805_1, VkglTestCase_029805_2);

#define VkglTestCase_029806_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029806_2 "wclass_32_bits.rgb10_a2ui_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029806, VkglTestCase_029806_1, VkglTestCase_029806_2);

#define VkglTestCase_029807_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029807_2 "ewclass_32_bits.rgb10_a2ui_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029807, VkglTestCase_029807_1, VkglTestCase_029807_2);

#define VkglTestCase_029808_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029808_2 "ass_32_bits.rgb10_a2ui_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029808, VkglTestCase_029808_1, VkglTestCase_029808_2);

#define VkglTestCase_029809_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029809_2 "lass_32_bits.rgb10_a2ui_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029809, VkglTestCase_029809_1, VkglTestCase_029809_2);

#define VkglTestCase_029810_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029810_2 "ss_32_bits.rgb10_a2ui_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029810, VkglTestCase_029810_1, VkglTestCase_029810_2);

#define VkglTestCase_029811_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029811_2 "ss_32_bits.rgb10_a2ui_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029811, VkglTestCase_029811_1, VkglTestCase_029811_2);

#define VkglTestCase_029812_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029812_2 "ass_32_bits.rgb10_a2ui_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029812, VkglTestCase_029812_1, VkglTestCase_029812_2);

#define VkglTestCase_029813_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029813_2 "32_bits.rgb10_a2ui_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029813, VkglTestCase_029813_1, VkglTestCase_029813_2);

#define VkglTestCase_029814_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029814_2 "_32_bits.rgb10_a2ui_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029814, VkglTestCase_029814_1, VkglTestCase_029814_2);

#define VkglTestCase_029815_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029815_2 "ass_32_bits.rgb10_a2ui_rgba8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029815, VkglTestCase_029815_1, VkglTestCase_029815_2);

#define VkglTestCase_029816_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029816_2 "ass_32_bits.rgb10_a2ui_rgba8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029816, VkglTestCase_029816_1, VkglTestCase_029816_2);

#define VkglTestCase_029817_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029817_2 "lass_32_bits.rgb10_a2ui_rgba8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029817, VkglTestCase_029817_1, VkglTestCase_029817_2);

#define VkglTestCase_029818_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029818_2 "_32_bits.rgb10_a2ui_rgba8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029818, VkglTestCase_029818_1, VkglTestCase_029818_2);

#define VkglTestCase_029819_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029819_2 "ss_32_bits.rgb10_a2ui_rgba8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029819, VkglTestCase_029819_1, VkglTestCase_029819_2);
