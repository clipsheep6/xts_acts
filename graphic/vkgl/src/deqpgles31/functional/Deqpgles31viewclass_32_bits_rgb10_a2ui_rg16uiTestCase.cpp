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

#define VkglTestCase_029745_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029745_2 "class_32_bits.rgb10_a2ui_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029745, VkglTestCase_029745_1, VkglTestCase_029745_2);

#define VkglTestCase_029746_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029746_2 "class_32_bits.rgb10_a2ui_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029746, VkglTestCase_029746_1, VkglTestCase_029746_2);

#define VkglTestCase_029747_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029747_2 "wclass_32_bits.rgb10_a2ui_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029747, VkglTestCase_029747_1, VkglTestCase_029747_2);

#define VkglTestCase_029748_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029748_2 "ss_32_bits.rgb10_a2ui_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029748, VkglTestCase_029748_1, VkglTestCase_029748_2);

#define VkglTestCase_029749_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029749_2 "ass_32_bits.rgb10_a2ui_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029749, VkglTestCase_029749_1, VkglTestCase_029749_2);

#define VkglTestCase_029750_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029750_2 "class_32_bits.rgb10_a2ui_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029750, VkglTestCase_029750_1, VkglTestCase_029750_2);

#define VkglTestCase_029751_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029751_2 "class_32_bits.rgb10_a2ui_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029751, VkglTestCase_029751_1, VkglTestCase_029751_2);

#define VkglTestCase_029752_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029752_2 "wclass_32_bits.rgb10_a2ui_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029752, VkglTestCase_029752_1, VkglTestCase_029752_2);

#define VkglTestCase_029753_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029753_2 "ss_32_bits.rgb10_a2ui_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029753, VkglTestCase_029753_1, VkglTestCase_029753_2);

#define VkglTestCase_029754_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029754_2 "ass_32_bits.rgb10_a2ui_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029754, VkglTestCase_029754_1, VkglTestCase_029754_2);

#define VkglTestCase_029755_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029755_2 "wclass_32_bits.rgb10_a2ui_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029755, VkglTestCase_029755_1, VkglTestCase_029755_2);

#define VkglTestCase_029756_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029756_2 "wclass_32_bits.rgb10_a2ui_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029756, VkglTestCase_029756_1, VkglTestCase_029756_2);

#define VkglTestCase_029757_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029757_2 "ewclass_32_bits.rgb10_a2ui_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029757, VkglTestCase_029757_1, VkglTestCase_029757_2);

#define VkglTestCase_029758_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029758_2 "ass_32_bits.rgb10_a2ui_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029758, VkglTestCase_029758_1, VkglTestCase_029758_2);

#define VkglTestCase_029759_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029759_2 "lass_32_bits.rgb10_a2ui_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029759, VkglTestCase_029759_1, VkglTestCase_029759_2);

#define VkglTestCase_029760_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029760_2 "ss_32_bits.rgb10_a2ui_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029760, VkglTestCase_029760_1, VkglTestCase_029760_2);

#define VkglTestCase_029761_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029761_2 "ss_32_bits.rgb10_a2ui_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029761, VkglTestCase_029761_1, VkglTestCase_029761_2);

#define VkglTestCase_029762_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029762_2 "ass_32_bits.rgb10_a2ui_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029762, VkglTestCase_029762_1, VkglTestCase_029762_2);

#define VkglTestCase_029763_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029763_2 "32_bits.rgb10_a2ui_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029763, VkglTestCase_029763_1, VkglTestCase_029763_2);

#define VkglTestCase_029764_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029764_2 "_32_bits.rgb10_a2ui_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029764, VkglTestCase_029764_1, VkglTestCase_029764_2);

#define VkglTestCase_029765_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029765_2 "ass_32_bits.rgb10_a2ui_rg16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029765, VkglTestCase_029765_1, VkglTestCase_029765_2);

#define VkglTestCase_029766_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029766_2 "ass_32_bits.rgb10_a2ui_rg16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029766, VkglTestCase_029766_1, VkglTestCase_029766_2);

#define VkglTestCase_029767_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029767_2 "lass_32_bits.rgb10_a2ui_rg16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029767, VkglTestCase_029767_1, VkglTestCase_029767_2);

#define VkglTestCase_029768_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029768_2 "_32_bits.rgb10_a2ui_rg16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029768, VkglTestCase_029768_1, VkglTestCase_029768_2);

#define VkglTestCase_029769_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029769_2 "ss_32_bits.rgb10_a2ui_rg16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029769, VkglTestCase_029769_1, VkglTestCase_029769_2);
