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

#define VkglTestCase_028743_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028743_2 "ewclass_32_bits.rgba8i_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028743, VkglTestCase_028743_1, VkglTestCase_028743_2);

#define VkglTestCase_028744_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028744_2 "ewclass_32_bits.rgba8i_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028744, VkglTestCase_028744_1, VkglTestCase_028744_2);

#define VkglTestCase_028745_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028745_2 "iewclass_32_bits.rgba8i_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028745, VkglTestCase_028745_1, VkglTestCase_028745_2);

#define VkglTestCase_028746_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028746_2 "lass_32_bits.rgba8i_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028746, VkglTestCase_028746_1, VkglTestCase_028746_2);

#define VkglTestCase_028747_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028747_2 "wclass_32_bits.rgba8i_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028747, VkglTestCase_028747_1, VkglTestCase_028747_2);

#define VkglTestCase_028748_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028748_2 "ewclass_32_bits.rgba8i_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028748, VkglTestCase_028748_1, VkglTestCase_028748_2);

#define VkglTestCase_028749_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028749_2 "ewclass_32_bits.rgba8i_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028749, VkglTestCase_028749_1, VkglTestCase_028749_2);

#define VkglTestCase_028750_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028750_2 "iewclass_32_bits.rgba8i_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028750, VkglTestCase_028750_1, VkglTestCase_028750_2);

#define VkglTestCase_028751_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028751_2 "lass_32_bits.rgba8i_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028751, VkglTestCase_028751_1, VkglTestCase_028751_2);

#define VkglTestCase_028752_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028752_2 "wclass_32_bits.rgba8i_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028752, VkglTestCase_028752_1, VkglTestCase_028752_2);

#define VkglTestCase_028753_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028753_2 "iewclass_32_bits.rgba8i_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028753, VkglTestCase_028753_1, VkglTestCase_028753_2);

#define VkglTestCase_028754_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028754_2 "iewclass_32_bits.rgba8i_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028754, VkglTestCase_028754_1, VkglTestCase_028754_2);

#define VkglTestCase_028755_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028755_2 "viewclass_32_bits.rgba8i_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028755, VkglTestCase_028755_1, VkglTestCase_028755_2);

#define VkglTestCase_028756_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028756_2 "class_32_bits.rgba8i_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028756, VkglTestCase_028756_1, VkglTestCase_028756_2);

#define VkglTestCase_028757_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028757_2 "ewclass_32_bits.rgba8i_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028757, VkglTestCase_028757_1, VkglTestCase_028757_2);

#define VkglTestCase_028758_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028758_2 "lass_32_bits.rgba8i_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028758, VkglTestCase_028758_1, VkglTestCase_028758_2);

#define VkglTestCase_028759_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028759_2 "lass_32_bits.rgba8i_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028759, VkglTestCase_028759_1, VkglTestCase_028759_2);

#define VkglTestCase_028760_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028760_2 "class_32_bits.rgba8i_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028760, VkglTestCase_028760_1, VkglTestCase_028760_2);

#define VkglTestCase_028761_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028761_2 "s_32_bits.rgba8i_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028761, VkglTestCase_028761_1, VkglTestCase_028761_2);

#define VkglTestCase_028762_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028762_2 "ass_32_bits.rgba8i_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028762, VkglTestCase_028762_1, VkglTestCase_028762_2);

#define VkglTestCase_028763_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028763_2 "wclass_32_bits.rgba8i_r32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028763, VkglTestCase_028763_1, VkglTestCase_028763_2);

#define VkglTestCase_028764_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028764_2 "wclass_32_bits.rgba8i_r32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028764, VkglTestCase_028764_1, VkglTestCase_028764_2);

#define VkglTestCase_028765_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028765_2 "ewclass_32_bits.rgba8i_r32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028765, VkglTestCase_028765_1, VkglTestCase_028765_2);

#define VkglTestCase_028766_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028766_2 "ass_32_bits.rgba8i_r32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028766, VkglTestCase_028766_1, VkglTestCase_028766_2);

#define VkglTestCase_028767_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028767_2 "lass_32_bits.rgba8i_r32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028767, VkglTestCase_028767_1, VkglTestCase_028767_2);
