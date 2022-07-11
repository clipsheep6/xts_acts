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

#define VkglTestCase_027572_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027572_2 "class_32_bits.rg16f_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027572, VkglTestCase_027572_1, VkglTestCase_027572_2);

#define VkglTestCase_027573_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027573_2 "class_32_bits.rg16f_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027573, VkglTestCase_027573_1, VkglTestCase_027573_2);

#define VkglTestCase_027574_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027574_2 "wclass_32_bits.rg16f_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027574, VkglTestCase_027574_1, VkglTestCase_027574_2);

#define VkglTestCase_027575_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027575_2 "ss_32_bits.rg16f_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027575, VkglTestCase_027575_1, VkglTestCase_027575_2);

#define VkglTestCase_027576_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027576_2 "lass_32_bits.rg16f_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027576, VkglTestCase_027576_1, VkglTestCase_027576_2);

#define VkglTestCase_027577_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027577_2 "class_32_bits.rg16f_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027577, VkglTestCase_027577_1, VkglTestCase_027577_2);

#define VkglTestCase_027578_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027578_2 "class_32_bits.rg16f_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027578, VkglTestCase_027578_1, VkglTestCase_027578_2);

#define VkglTestCase_027579_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027579_2 "wclass_32_bits.rg16f_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027579, VkglTestCase_027579_1, VkglTestCase_027579_2);

#define VkglTestCase_027580_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027580_2 "ss_32_bits.rg16f_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027580, VkglTestCase_027580_1, VkglTestCase_027580_2);

#define VkglTestCase_027581_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027581_2 "lass_32_bits.rg16f_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027581, VkglTestCase_027581_1, VkglTestCase_027581_2);

#define VkglTestCase_027582_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027582_2 "wclass_32_bits.rg16f_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027582, VkglTestCase_027582_1, VkglTestCase_027582_2);

#define VkglTestCase_027583_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027583_2 "wclass_32_bits.rg16f_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027583, VkglTestCase_027583_1, VkglTestCase_027583_2);

#define VkglTestCase_027584_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027584_2 "ewclass_32_bits.rg16f_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027584, VkglTestCase_027584_1, VkglTestCase_027584_2);

#define VkglTestCase_027585_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027585_2 "ass_32_bits.rg16f_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027585, VkglTestCase_027585_1, VkglTestCase_027585_2);

#define VkglTestCase_027586_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027586_2 "class_32_bits.rg16f_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027586, VkglTestCase_027586_1, VkglTestCase_027586_2);

#define VkglTestCase_027587_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027587_2 "ss_32_bits.rg16f_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027587, VkglTestCase_027587_1, VkglTestCase_027587_2);

#define VkglTestCase_027588_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027588_2 "ss_32_bits.rg16f_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027588, VkglTestCase_027588_1, VkglTestCase_027588_2);

#define VkglTestCase_027589_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027589_2 "ass_32_bits.rg16f_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027589, VkglTestCase_027589_1, VkglTestCase_027589_2);

#define VkglTestCase_027590_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_027590_2 "32_bits.rg16f_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027590, VkglTestCase_027590_1, VkglTestCase_027590_2);

#define VkglTestCase_027591_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027591_2 "s_32_bits.rg16f_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027591, VkglTestCase_027591_1, VkglTestCase_027591_2);
