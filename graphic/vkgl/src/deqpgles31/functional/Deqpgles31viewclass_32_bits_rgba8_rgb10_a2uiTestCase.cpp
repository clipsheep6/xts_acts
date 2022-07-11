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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028583_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028583_2 "class_32_bits.rgba8_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028583, VkglTestCase_028583_1, VkglTestCase_028583_2);

#define VkglTestCase_028584_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028584_2 "class_32_bits.rgba8_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028584, VkglTestCase_028584_1, VkglTestCase_028584_2);

#define VkglTestCase_028585_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028585_2 "wclass_32_bits.rgba8_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028585, VkglTestCase_028585_1, VkglTestCase_028585_2);

#define VkglTestCase_028586_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028586_2 "ss_32_bits.rgba8_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028586, VkglTestCase_028586_1, VkglTestCase_028586_2);

#define VkglTestCase_028587_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028587_2 "lass_32_bits.rgba8_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028587, VkglTestCase_028587_1, VkglTestCase_028587_2);

#define VkglTestCase_028588_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028588_2 "class_32_bits.rgba8_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028588, VkglTestCase_028588_1, VkglTestCase_028588_2);

#define VkglTestCase_028589_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028589_2 "class_32_bits.rgba8_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028589, VkglTestCase_028589_1, VkglTestCase_028589_2);

#define VkglTestCase_028590_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028590_2 "wclass_32_bits.rgba8_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028590, VkglTestCase_028590_1, VkglTestCase_028590_2);

#define VkglTestCase_028591_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028591_2 "ss_32_bits.rgba8_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028591, VkglTestCase_028591_1, VkglTestCase_028591_2);

#define VkglTestCase_028592_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028592_2 "lass_32_bits.rgba8_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028592, VkglTestCase_028592_1, VkglTestCase_028592_2);

#define VkglTestCase_028593_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028593_2 "wclass_32_bits.rgba8_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028593, VkglTestCase_028593_1, VkglTestCase_028593_2);

#define VkglTestCase_028594_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028594_2 "wclass_32_bits.rgba8_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028594, VkglTestCase_028594_1, VkglTestCase_028594_2);

#define VkglTestCase_028595_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028595_2 "ewclass_32_bits.rgba8_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028595, VkglTestCase_028595_1, VkglTestCase_028595_2);

#define VkglTestCase_028596_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028596_2 "ass_32_bits.rgba8_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028596, VkglTestCase_028596_1, VkglTestCase_028596_2);

#define VkglTestCase_028597_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028597_2 "class_32_bits.rgba8_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028597, VkglTestCase_028597_1, VkglTestCase_028597_2);

#define VkglTestCase_028598_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028598_2 "ss_32_bits.rgba8_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028598, VkglTestCase_028598_1, VkglTestCase_028598_2);

#define VkglTestCase_028599_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028599_2 "ss_32_bits.rgba8_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028599, VkglTestCase_028599_1, VkglTestCase_028599_2);

#define VkglTestCase_028600_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028600_2 "ass_32_bits.rgba8_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028600, VkglTestCase_028600_1, VkglTestCase_028600_2);

#define VkglTestCase_028601_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_028601_2 "32_bits.rgba8_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028601, VkglTestCase_028601_1, VkglTestCase_028601_2);

#define VkglTestCase_028602_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028602_2 "s_32_bits.rgba8_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028602, VkglTestCase_028602_1, VkglTestCase_028602_2);

#define VkglTestCase_028603_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028603_2 "lass_32_bits.rgba8_rgb10_a2ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028603, VkglTestCase_028603_1, VkglTestCase_028603_2);

#define VkglTestCase_028604_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028604_2 "lass_32_bits.rgba8_rgb10_a2ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028604, VkglTestCase_028604_1, VkglTestCase_028604_2);

#define VkglTestCase_028605_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028605_2 "class_32_bits.rgba8_rgb10_a2ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028605, VkglTestCase_028605_1, VkglTestCase_028605_2);

#define VkglTestCase_028606_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028606_2 "s_32_bits.rgba8_rgb10_a2ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028606, VkglTestCase_028606_1, VkglTestCase_028606_2);

#define VkglTestCase_028607_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028607_2 "ss_32_bits.rgba8_rgb10_a2ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028607, VkglTestCase_028607_1, VkglTestCase_028607_2);
