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
#include "../ActsDeqpgles310031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030750_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030750_2 "lass_32_bits.srgb8_alpha8_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030750, VkglTestCase_030750_1, VkglTestCase_030750_2);

#define VkglTestCase_030751_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030751_2 "lass_32_bits.srgb8_alpha8_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030751, VkglTestCase_030751_1, VkglTestCase_030751_2);

#define VkglTestCase_030752_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030752_2 "class_32_bits.srgb8_alpha8_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030752, VkglTestCase_030752_1, VkglTestCase_030752_2);

#define VkglTestCase_030753_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030753_2 "s_32_bits.srgb8_alpha8_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030753, VkglTestCase_030753_1, VkglTestCase_030753_2);

#define VkglTestCase_030754_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030754_2 "ass_32_bits.srgb8_alpha8_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030754, VkglTestCase_030754_1, VkglTestCase_030754_2);

#define VkglTestCase_030755_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030755_2 "lass_32_bits.srgb8_alpha8_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030755, VkglTestCase_030755_1, VkglTestCase_030755_2);

#define VkglTestCase_030756_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030756_2 "lass_32_bits.srgb8_alpha8_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030756, VkglTestCase_030756_1, VkglTestCase_030756_2);

#define VkglTestCase_030757_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030757_2 "class_32_bits.srgb8_alpha8_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030757, VkglTestCase_030757_1, VkglTestCase_030757_2);

#define VkglTestCase_030758_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030758_2 "s_32_bits.srgb8_alpha8_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030758, VkglTestCase_030758_1, VkglTestCase_030758_2);

#define VkglTestCase_030759_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030759_2 "ass_32_bits.srgb8_alpha8_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030759, VkglTestCase_030759_1, VkglTestCase_030759_2);

#define VkglTestCase_030760_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030760_2 "class_32_bits.srgb8_alpha8_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030760, VkglTestCase_030760_1, VkglTestCase_030760_2);

#define VkglTestCase_030761_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030761_2 "class_32_bits.srgb8_alpha8_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030761, VkglTestCase_030761_1, VkglTestCase_030761_2);

#define VkglTestCase_030762_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030762_2 "wclass_32_bits.srgb8_alpha8_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030762, VkglTestCase_030762_1, VkglTestCase_030762_2);

#define VkglTestCase_030763_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030763_2 "ss_32_bits.srgb8_alpha8_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030763, VkglTestCase_030763_1, VkglTestCase_030763_2);

#define VkglTestCase_030764_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030764_2 "lass_32_bits.srgb8_alpha8_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030764, VkglTestCase_030764_1, VkglTestCase_030764_2);

#define VkglTestCase_030765_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030765_2 "s_32_bits.srgb8_alpha8_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030765, VkglTestCase_030765_1, VkglTestCase_030765_2);

#define VkglTestCase_030766_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030766_2 "s_32_bits.srgb8_alpha8_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030766, VkglTestCase_030766_1, VkglTestCase_030766_2);

#define VkglTestCase_030767_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030767_2 "ss_32_bits.srgb8_alpha8_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030767, VkglTestCase_030767_1, VkglTestCase_030767_2);

#define VkglTestCase_030768_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030768_2 "2_bits.srgb8_alpha8_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030768, VkglTestCase_030768_1, VkglTestCase_030768_2);

#define VkglTestCase_030769_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030769_2 "_32_bits.srgb8_alpha8_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030769, VkglTestCase_030769_1, VkglTestCase_030769_2);

#define VkglTestCase_030770_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030770_2 "ass_32_bits.srgb8_alpha8_rgba8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030770, VkglTestCase_030770_1, VkglTestCase_030770_2);

#define VkglTestCase_030771_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030771_2 "ass_32_bits.srgb8_alpha8_rgba8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030771, VkglTestCase_030771_1, VkglTestCase_030771_2);

#define VkglTestCase_030772_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030772_2 "lass_32_bits.srgb8_alpha8_rgba8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030772, VkglTestCase_030772_1, VkglTestCase_030772_2);

#define VkglTestCase_030773_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030773_2 "_32_bits.srgb8_alpha8_rgba8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030773, VkglTestCase_030773_1, VkglTestCase_030773_2);

#define VkglTestCase_030774_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030774_2 "s_32_bits.srgb8_alpha8_rgba8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030774, VkglTestCase_030774_1, VkglTestCase_030774_2);
