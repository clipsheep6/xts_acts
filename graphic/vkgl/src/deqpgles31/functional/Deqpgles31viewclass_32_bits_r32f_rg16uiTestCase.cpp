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
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026560_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026560_2 "iewclass_32_bits.r32f_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026560, VkglTestCase_026560_1, VkglTestCase_026560_2);

#define VkglTestCase_026561_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026561_2 "iewclass_32_bits.r32f_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026561, VkglTestCase_026561_1, VkglTestCase_026561_2);

#define VkglTestCase_026562_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026562_2 "viewclass_32_bits.r32f_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026562, VkglTestCase_026562_1, VkglTestCase_026562_2);

#define VkglTestCase_026563_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026563_2 "class_32_bits.r32f_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026563, VkglTestCase_026563_1, VkglTestCase_026563_2);

#define VkglTestCase_026564_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026564_2 "wclass_32_bits.r32f_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026564, VkglTestCase_026564_1, VkglTestCase_026564_2);

#define VkglTestCase_026565_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026565_2 "iewclass_32_bits.r32f_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026565, VkglTestCase_026565_1, VkglTestCase_026565_2);

#define VkglTestCase_026566_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026566_2 "iewclass_32_bits.r32f_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026566, VkglTestCase_026566_1, VkglTestCase_026566_2);

#define VkglTestCase_026567_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026567_2 "viewclass_32_bits.r32f_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026567, VkglTestCase_026567_1, VkglTestCase_026567_2);

#define VkglTestCase_026568_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026568_2 "class_32_bits.r32f_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026568, VkglTestCase_026568_1, VkglTestCase_026568_2);

#define VkglTestCase_026569_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026569_2 "wclass_32_bits.r32f_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026569, VkglTestCase_026569_1, VkglTestCase_026569_2);

#define VkglTestCase_026570_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026570_2 "viewclass_32_bits.r32f_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026570, VkglTestCase_026570_1, VkglTestCase_026570_2);

#define VkglTestCase_026571_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026571_2 "viewclass_32_bits.r32f_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026571, VkglTestCase_026571_1, VkglTestCase_026571_2);

#define VkglTestCase_026572_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026572_2 ".viewclass_32_bits.r32f_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026572, VkglTestCase_026572_1, VkglTestCase_026572_2);

#define VkglTestCase_026573_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026573_2 "wclass_32_bits.r32f_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026573, VkglTestCase_026573_1, VkglTestCase_026573_2);

#define VkglTestCase_026574_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026574_2 "ewclass_32_bits.r32f_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026574, VkglTestCase_026574_1, VkglTestCase_026574_2);

#define VkglTestCase_026575_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026575_2 "class_32_bits.r32f_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026575, VkglTestCase_026575_1, VkglTestCase_026575_2);

#define VkglTestCase_026576_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026576_2 "class_32_bits.r32f_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026576, VkglTestCase_026576_1, VkglTestCase_026576_2);

#define VkglTestCase_026577_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026577_2 "wclass_32_bits.r32f_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026577, VkglTestCase_026577_1, VkglTestCase_026577_2);

#define VkglTestCase_026578_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026578_2 "ss_32_bits.r32f_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026578, VkglTestCase_026578_1, VkglTestCase_026578_2);

#define VkglTestCase_026579_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026579_2 "ass_32_bits.r32f_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026579, VkglTestCase_026579_1, VkglTestCase_026579_2);
