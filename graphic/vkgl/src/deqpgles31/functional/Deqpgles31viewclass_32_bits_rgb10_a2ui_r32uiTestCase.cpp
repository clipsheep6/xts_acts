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

#define VkglTestCase_029675_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029675_2 "class_32_bits.rgb10_a2ui_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029675, VkglTestCase_029675_1, VkglTestCase_029675_2);

#define VkglTestCase_029676_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029676_2 "class_32_bits.rgb10_a2ui_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029676, VkglTestCase_029676_1, VkglTestCase_029676_2);

#define VkglTestCase_029677_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029677_2 "wclass_32_bits.rgb10_a2ui_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029677, VkglTestCase_029677_1, VkglTestCase_029677_2);

#define VkglTestCase_029678_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029678_2 "ss_32_bits.rgb10_a2ui_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029678, VkglTestCase_029678_1, VkglTestCase_029678_2);

#define VkglTestCase_029679_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029679_2 "lass_32_bits.rgb10_a2ui_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029679, VkglTestCase_029679_1, VkglTestCase_029679_2);

#define VkglTestCase_029680_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029680_2 "class_32_bits.rgb10_a2ui_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029680, VkglTestCase_029680_1, VkglTestCase_029680_2);

#define VkglTestCase_029681_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029681_2 "class_32_bits.rgb10_a2ui_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029681, VkglTestCase_029681_1, VkglTestCase_029681_2);

#define VkglTestCase_029682_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029682_2 "wclass_32_bits.rgb10_a2ui_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029682, VkglTestCase_029682_1, VkglTestCase_029682_2);

#define VkglTestCase_029683_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029683_2 "ss_32_bits.rgb10_a2ui_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029683, VkglTestCase_029683_1, VkglTestCase_029683_2);

#define VkglTestCase_029684_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029684_2 "lass_32_bits.rgb10_a2ui_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029684, VkglTestCase_029684_1, VkglTestCase_029684_2);

#define VkglTestCase_029685_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029685_2 "wclass_32_bits.rgb10_a2ui_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029685, VkglTestCase_029685_1, VkglTestCase_029685_2);

#define VkglTestCase_029686_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029686_2 "wclass_32_bits.rgb10_a2ui_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029686, VkglTestCase_029686_1, VkglTestCase_029686_2);

#define VkglTestCase_029687_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029687_2 "ewclass_32_bits.rgb10_a2ui_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029687, VkglTestCase_029687_1, VkglTestCase_029687_2);

#define VkglTestCase_029688_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029688_2 "ass_32_bits.rgb10_a2ui_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029688, VkglTestCase_029688_1, VkglTestCase_029688_2);

#define VkglTestCase_029689_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029689_2 "class_32_bits.rgb10_a2ui_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029689, VkglTestCase_029689_1, VkglTestCase_029689_2);

#define VkglTestCase_029690_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029690_2 "ss_32_bits.rgb10_a2ui_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029690, VkglTestCase_029690_1, VkglTestCase_029690_2);

#define VkglTestCase_029691_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029691_2 "ss_32_bits.rgb10_a2ui_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029691, VkglTestCase_029691_1, VkglTestCase_029691_2);

#define VkglTestCase_029692_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029692_2 "ass_32_bits.rgb10_a2ui_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029692, VkglTestCase_029692_1, VkglTestCase_029692_2);

#define VkglTestCase_029693_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029693_2 "32_bits.rgb10_a2ui_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029693, VkglTestCase_029693_1, VkglTestCase_029693_2);

#define VkglTestCase_029694_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029694_2 "s_32_bits.rgb10_a2ui_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029694, VkglTestCase_029694_1, VkglTestCase_029694_2);

#define VkglTestCase_029695_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029695_2 "lass_32_bits.rgb10_a2ui_r32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029695, VkglTestCase_029695_1, VkglTestCase_029695_2);

#define VkglTestCase_029696_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029696_2 "lass_32_bits.rgb10_a2ui_r32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029696, VkglTestCase_029696_1, VkglTestCase_029696_2);

#define VkglTestCase_029697_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029697_2 "class_32_bits.rgb10_a2ui_r32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029697, VkglTestCase_029697_1, VkglTestCase_029697_2);

#define VkglTestCase_029698_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029698_2 "s_32_bits.rgb10_a2ui_r32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029698, VkglTestCase_029698_1, VkglTestCase_029698_2);

#define VkglTestCase_029699_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029699_2 "ss_32_bits.rgb10_a2ui_r32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029699, VkglTestCase_029699_1, VkglTestCase_029699_2);
