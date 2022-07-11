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

#define VkglTestCase_029820_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029820_2 "lass_32_bits.rgb10_a2ui_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029820, VkglTestCase_029820_1, VkglTestCase_029820_2);

#define VkglTestCase_029821_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029821_2 "lass_32_bits.rgb10_a2ui_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029821, VkglTestCase_029821_1, VkglTestCase_029821_2);

#define VkglTestCase_029822_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029822_2 "class_32_bits.rgb10_a2ui_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029822, VkglTestCase_029822_1, VkglTestCase_029822_2);

#define VkglTestCase_029823_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029823_2 "s_32_bits.rgb10_a2ui_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029823, VkglTestCase_029823_1, VkglTestCase_029823_2);

#define VkglTestCase_029824_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029824_2 "ass_32_bits.rgb10_a2ui_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029824, VkglTestCase_029824_1, VkglTestCase_029824_2);

#define VkglTestCase_029825_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029825_2 "lass_32_bits.rgb10_a2ui_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029825, VkglTestCase_029825_1, VkglTestCase_029825_2);

#define VkglTestCase_029826_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029826_2 "lass_32_bits.rgb10_a2ui_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029826, VkglTestCase_029826_1, VkglTestCase_029826_2);

#define VkglTestCase_029827_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029827_2 "class_32_bits.rgb10_a2ui_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029827, VkglTestCase_029827_1, VkglTestCase_029827_2);

#define VkglTestCase_029828_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029828_2 "s_32_bits.rgb10_a2ui_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029828, VkglTestCase_029828_1, VkglTestCase_029828_2);

#define VkglTestCase_029829_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029829_2 "ass_32_bits.rgb10_a2ui_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029829, VkglTestCase_029829_1, VkglTestCase_029829_2);

#define VkglTestCase_029830_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029830_2 "class_32_bits.rgb10_a2ui_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029830, VkglTestCase_029830_1, VkglTestCase_029830_2);

#define VkglTestCase_029831_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029831_2 "class_32_bits.rgb10_a2ui_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029831, VkglTestCase_029831_1, VkglTestCase_029831_2);

#define VkglTestCase_029832_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029832_2 "wclass_32_bits.rgb10_a2ui_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029832, VkglTestCase_029832_1, VkglTestCase_029832_2);

#define VkglTestCase_029833_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029833_2 "ss_32_bits.rgb10_a2ui_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029833, VkglTestCase_029833_1, VkglTestCase_029833_2);

#define VkglTestCase_029834_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029834_2 "lass_32_bits.rgb10_a2ui_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029834, VkglTestCase_029834_1, VkglTestCase_029834_2);

#define VkglTestCase_029835_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029835_2 "s_32_bits.rgb10_a2ui_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029835, VkglTestCase_029835_1, VkglTestCase_029835_2);

#define VkglTestCase_029836_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029836_2 "s_32_bits.rgb10_a2ui_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029836, VkglTestCase_029836_1, VkglTestCase_029836_2);

#define VkglTestCase_029837_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029837_2 "ss_32_bits.rgb10_a2ui_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029837, VkglTestCase_029837_1, VkglTestCase_029837_2);

#define VkglTestCase_029838_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029838_2 "2_bits.rgb10_a2ui_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029838, VkglTestCase_029838_1, VkglTestCase_029838_2);

#define VkglTestCase_029839_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029839_2 "_32_bits.rgb10_a2ui_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029839, VkglTestCase_029839_1, VkglTestCase_029839_2);

#define VkglTestCase_029840_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029840_2 "ass_32_bits.rgb10_a2ui_rgba8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029840, VkglTestCase_029840_1, VkglTestCase_029840_2);

#define VkglTestCase_029841_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029841_2 "ass_32_bits.rgb10_a2ui_rgba8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029841, VkglTestCase_029841_1, VkglTestCase_029841_2);

#define VkglTestCase_029842_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029842_2 "lass_32_bits.rgb10_a2ui_rgba8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029842, VkglTestCase_029842_1, VkglTestCase_029842_2);

#define VkglTestCase_029843_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029843_2 "_32_bits.rgb10_a2ui_rgba8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029843, VkglTestCase_029843_1, VkglTestCase_029843_2);

#define VkglTestCase_029844_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029844_2 "s_32_bits.rgb10_a2ui_rgba8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029844, VkglTestCase_029844_1, VkglTestCase_029844_2);
