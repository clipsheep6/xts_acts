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

#define VkglTestCase_027693_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027693_2 "iewclass_32_bits.rg16i_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027693, VkglTestCase_027693_1, VkglTestCase_027693_2);

#define VkglTestCase_027694_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027694_2 "iewclass_32_bits.rg16i_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027694, VkglTestCase_027694_1, VkglTestCase_027694_2);

#define VkglTestCase_027695_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027695_2 "viewclass_32_bits.rg16i_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027695, VkglTestCase_027695_1, VkglTestCase_027695_2);

#define VkglTestCase_027696_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027696_2 "class_32_bits.rg16i_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027696, VkglTestCase_027696_1, VkglTestCase_027696_2);

#define VkglTestCase_027697_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027697_2 "wclass_32_bits.rg16i_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027697, VkglTestCase_027697_1, VkglTestCase_027697_2);

#define VkglTestCase_027698_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027698_2 "iewclass_32_bits.rg16i_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027698, VkglTestCase_027698_1, VkglTestCase_027698_2);

#define VkglTestCase_027699_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027699_2 "iewclass_32_bits.rg16i_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027699, VkglTestCase_027699_1, VkglTestCase_027699_2);

#define VkglTestCase_027700_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027700_2 "viewclass_32_bits.rg16i_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027700, VkglTestCase_027700_1, VkglTestCase_027700_2);

#define VkglTestCase_027701_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027701_2 "class_32_bits.rg16i_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027701, VkglTestCase_027701_1, VkglTestCase_027701_2);

#define VkglTestCase_027702_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027702_2 "wclass_32_bits.rg16i_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027702, VkglTestCase_027702_1, VkglTestCase_027702_2);

#define VkglTestCase_027703_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027703_2 "viewclass_32_bits.rg16i_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027703, VkglTestCase_027703_1, VkglTestCase_027703_2);

#define VkglTestCase_027704_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027704_2 "viewclass_32_bits.rg16i_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027704, VkglTestCase_027704_1, VkglTestCase_027704_2);

#define VkglTestCase_027705_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027705_2 ".viewclass_32_bits.rg16i_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027705, VkglTestCase_027705_1, VkglTestCase_027705_2);

#define VkglTestCase_027706_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027706_2 "wclass_32_bits.rg16i_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027706, VkglTestCase_027706_1, VkglTestCase_027706_2);

#define VkglTestCase_027707_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027707_2 "ewclass_32_bits.rg16i_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027707, VkglTestCase_027707_1, VkglTestCase_027707_2);

#define VkglTestCase_027708_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027708_2 "class_32_bits.rg16i_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027708, VkglTestCase_027708_1, VkglTestCase_027708_2);

#define VkglTestCase_027709_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027709_2 "class_32_bits.rg16i_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027709, VkglTestCase_027709_1, VkglTestCase_027709_2);

#define VkglTestCase_027710_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027710_2 "wclass_32_bits.rg16i_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027710, VkglTestCase_027710_1, VkglTestCase_027710_2);

#define VkglTestCase_027711_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027711_2 "ss_32_bits.rg16i_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027711, VkglTestCase_027711_1, VkglTestCase_027711_2);

#define VkglTestCase_027712_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027712_2 "ass_32_bits.rg16i_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027712, VkglTestCase_027712_1, VkglTestCase_027712_2);

#define VkglTestCase_027713_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027713_2 "wclass_32_bits.rg16i_r32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027713, VkglTestCase_027713_1, VkglTestCase_027713_2);

#define VkglTestCase_027714_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027714_2 "wclass_32_bits.rg16i_r32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027714, VkglTestCase_027714_1, VkglTestCase_027714_2);

#define VkglTestCase_027715_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027715_2 "ewclass_32_bits.rg16i_r32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027715, VkglTestCase_027715_1, VkglTestCase_027715_2);

#define VkglTestCase_027716_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027716_2 "ass_32_bits.rg16i_r32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027716, VkglTestCase_027716_1, VkglTestCase_027716_2);

#define VkglTestCase_027717_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027717_2 "class_32_bits.rg16i_r32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027717, VkglTestCase_027717_1, VkglTestCase_027717_2);
