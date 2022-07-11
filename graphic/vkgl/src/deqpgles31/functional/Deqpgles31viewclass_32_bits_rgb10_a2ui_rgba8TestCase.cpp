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

#define VkglTestCase_029770_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029770_2 "class_32_bits.rgb10_a2ui_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029770, VkglTestCase_029770_1, VkglTestCase_029770_2);

#define VkglTestCase_029771_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029771_2 "class_32_bits.rgb10_a2ui_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029771, VkglTestCase_029771_1, VkglTestCase_029771_2);

#define VkglTestCase_029772_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029772_2 "wclass_32_bits.rgb10_a2ui_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029772, VkglTestCase_029772_1, VkglTestCase_029772_2);

#define VkglTestCase_029773_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029773_2 "ss_32_bits.rgb10_a2ui_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029773, VkglTestCase_029773_1, VkglTestCase_029773_2);

#define VkglTestCase_029774_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029774_2 "lass_32_bits.rgb10_a2ui_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029774, VkglTestCase_029774_1, VkglTestCase_029774_2);

#define VkglTestCase_029775_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029775_2 "class_32_bits.rgb10_a2ui_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029775, VkglTestCase_029775_1, VkglTestCase_029775_2);

#define VkglTestCase_029776_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029776_2 "class_32_bits.rgb10_a2ui_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029776, VkglTestCase_029776_1, VkglTestCase_029776_2);

#define VkglTestCase_029777_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029777_2 "wclass_32_bits.rgb10_a2ui_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029777, VkglTestCase_029777_1, VkglTestCase_029777_2);

#define VkglTestCase_029778_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029778_2 "ss_32_bits.rgb10_a2ui_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029778, VkglTestCase_029778_1, VkglTestCase_029778_2);

#define VkglTestCase_029779_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029779_2 "lass_32_bits.rgb10_a2ui_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029779, VkglTestCase_029779_1, VkglTestCase_029779_2);

#define VkglTestCase_029780_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029780_2 "wclass_32_bits.rgb10_a2ui_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029780, VkglTestCase_029780_1, VkglTestCase_029780_2);

#define VkglTestCase_029781_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029781_2 "wclass_32_bits.rgb10_a2ui_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029781, VkglTestCase_029781_1, VkglTestCase_029781_2);

#define VkglTestCase_029782_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029782_2 "ewclass_32_bits.rgb10_a2ui_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029782, VkglTestCase_029782_1, VkglTestCase_029782_2);

#define VkglTestCase_029783_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029783_2 "ass_32_bits.rgb10_a2ui_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029783, VkglTestCase_029783_1, VkglTestCase_029783_2);

#define VkglTestCase_029784_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029784_2 "class_32_bits.rgb10_a2ui_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029784, VkglTestCase_029784_1, VkglTestCase_029784_2);

#define VkglTestCase_029785_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029785_2 "ss_32_bits.rgb10_a2ui_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029785, VkglTestCase_029785_1, VkglTestCase_029785_2);

#define VkglTestCase_029786_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029786_2 "ss_32_bits.rgb10_a2ui_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029786, VkglTestCase_029786_1, VkglTestCase_029786_2);

#define VkglTestCase_029787_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029787_2 "ass_32_bits.rgb10_a2ui_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029787, VkglTestCase_029787_1, VkglTestCase_029787_2);

#define VkglTestCase_029788_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029788_2 "32_bits.rgb10_a2ui_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029788, VkglTestCase_029788_1, VkglTestCase_029788_2);

#define VkglTestCase_029789_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029789_2 "s_32_bits.rgb10_a2ui_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029789, VkglTestCase_029789_1, VkglTestCase_029789_2);

#define VkglTestCase_029790_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029790_2 "lass_32_bits.rgb10_a2ui_rgba8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029790, VkglTestCase_029790_1, VkglTestCase_029790_2);

#define VkglTestCase_029791_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029791_2 "lass_32_bits.rgb10_a2ui_rgba8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029791, VkglTestCase_029791_1, VkglTestCase_029791_2);

#define VkglTestCase_029792_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029792_2 "class_32_bits.rgb10_a2ui_rgba8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029792, VkglTestCase_029792_1, VkglTestCase_029792_2);

#define VkglTestCase_029793_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029793_2 "s_32_bits.rgb10_a2ui_rgba8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029793, VkglTestCase_029793_1, VkglTestCase_029793_2);

#define VkglTestCase_029794_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029794_2 "ss_32_bits.rgb10_a2ui_rgba8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029794, VkglTestCase_029794_1, VkglTestCase_029794_2);
