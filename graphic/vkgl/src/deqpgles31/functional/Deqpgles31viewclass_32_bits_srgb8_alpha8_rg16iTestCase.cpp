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

#define VkglTestCase_030700_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030700_2 "lass_32_bits.srgb8_alpha8_rg16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030700, VkglTestCase_030700_1, VkglTestCase_030700_2);

#define VkglTestCase_030701_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030701_2 "lass_32_bits.srgb8_alpha8_rg16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030701, VkglTestCase_030701_1, VkglTestCase_030701_2);

#define VkglTestCase_030702_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030702_2 "class_32_bits.srgb8_alpha8_rg16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030702, VkglTestCase_030702_1, VkglTestCase_030702_2);

#define VkglTestCase_030703_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030703_2 "s_32_bits.srgb8_alpha8_rg16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030703, VkglTestCase_030703_1, VkglTestCase_030703_2);

#define VkglTestCase_030704_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030704_2 "ass_32_bits.srgb8_alpha8_rg16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030704, VkglTestCase_030704_1, VkglTestCase_030704_2);

#define VkglTestCase_030705_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030705_2 "lass_32_bits.srgb8_alpha8_rg16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030705, VkglTestCase_030705_1, VkglTestCase_030705_2);

#define VkglTestCase_030706_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030706_2 "lass_32_bits.srgb8_alpha8_rg16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030706, VkglTestCase_030706_1, VkglTestCase_030706_2);

#define VkglTestCase_030707_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030707_2 "class_32_bits.srgb8_alpha8_rg16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030707, VkglTestCase_030707_1, VkglTestCase_030707_2);

#define VkglTestCase_030708_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030708_2 "s_32_bits.srgb8_alpha8_rg16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030708, VkglTestCase_030708_1, VkglTestCase_030708_2);

#define VkglTestCase_030709_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030709_2 "ass_32_bits.srgb8_alpha8_rg16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030709, VkglTestCase_030709_1, VkglTestCase_030709_2);

#define VkglTestCase_030710_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030710_2 "class_32_bits.srgb8_alpha8_rg16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030710, VkglTestCase_030710_1, VkglTestCase_030710_2);

#define VkglTestCase_030711_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030711_2 "class_32_bits.srgb8_alpha8_rg16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030711, VkglTestCase_030711_1, VkglTestCase_030711_2);

#define VkglTestCase_030712_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030712_2 "wclass_32_bits.srgb8_alpha8_rg16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030712, VkglTestCase_030712_1, VkglTestCase_030712_2);

#define VkglTestCase_030713_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030713_2 "ss_32_bits.srgb8_alpha8_rg16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030713, VkglTestCase_030713_1, VkglTestCase_030713_2);

#define VkglTestCase_030714_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030714_2 "lass_32_bits.srgb8_alpha8_rg16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030714, VkglTestCase_030714_1, VkglTestCase_030714_2);

#define VkglTestCase_030715_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030715_2 "s_32_bits.srgb8_alpha8_rg16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030715, VkglTestCase_030715_1, VkglTestCase_030715_2);

#define VkglTestCase_030716_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030716_2 "s_32_bits.srgb8_alpha8_rg16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030716, VkglTestCase_030716_1, VkglTestCase_030716_2);

#define VkglTestCase_030717_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030717_2 "ss_32_bits.srgb8_alpha8_rg16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030717, VkglTestCase_030717_1, VkglTestCase_030717_2);

#define VkglTestCase_030718_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030718_2 "2_bits.srgb8_alpha8_rg16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030718, VkglTestCase_030718_1, VkglTestCase_030718_2);

#define VkglTestCase_030719_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030719_2 "_32_bits.srgb8_alpha8_rg16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030719, VkglTestCase_030719_1, VkglTestCase_030719_2);

#define VkglTestCase_030720_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030720_2 "ass_32_bits.srgb8_alpha8_rg16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030720, VkglTestCase_030720_1, VkglTestCase_030720_2);

#define VkglTestCase_030721_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030721_2 "ass_32_bits.srgb8_alpha8_rg16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030721, VkglTestCase_030721_1, VkglTestCase_030721_2);

#define VkglTestCase_030722_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030722_2 "lass_32_bits.srgb8_alpha8_rg16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030722, VkglTestCase_030722_1, VkglTestCase_030722_2);

#define VkglTestCase_030723_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030723_2 "_32_bits.srgb8_alpha8_rg16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030723, VkglTestCase_030723_1, VkglTestCase_030723_2);

#define VkglTestCase_030724_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030724_2 "s_32_bits.srgb8_alpha8_rg16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030724, VkglTestCase_030724_1, VkglTestCase_030724_2);
