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

#define VkglTestCase_030870_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030870_2 "ass_32_bits.srgb8_alpha8_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030870, VkglTestCase_030870_1, VkglTestCase_030870_2);

#define VkglTestCase_030871_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030871_2 "ass_32_bits.srgb8_alpha8_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030871, VkglTestCase_030871_1, VkglTestCase_030871_2);

#define VkglTestCase_030872_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030872_2 "lass_32_bits.srgb8_alpha8_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030872, VkglTestCase_030872_1, VkglTestCase_030872_2);

#define VkglTestCase_030873_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030873_2 "_32_bits.srgb8_alpha8_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030873, VkglTestCase_030873_1, VkglTestCase_030873_2);

#define VkglTestCase_030874_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030874_2 "s_32_bits.srgb8_alpha8_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030874, VkglTestCase_030874_1, VkglTestCase_030874_2);

#define VkglTestCase_030875_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030875_2 "ass_32_bits.srgb8_alpha8_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030875, VkglTestCase_030875_1, VkglTestCase_030875_2);

#define VkglTestCase_030876_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030876_2 "ass_32_bits.srgb8_alpha8_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030876, VkglTestCase_030876_1, VkglTestCase_030876_2);

#define VkglTestCase_030877_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030877_2 "lass_32_bits.srgb8_alpha8_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030877, VkglTestCase_030877_1, VkglTestCase_030877_2);

#define VkglTestCase_030878_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030878_2 "_32_bits.srgb8_alpha8_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030878, VkglTestCase_030878_1, VkglTestCase_030878_2);

#define VkglTestCase_030879_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030879_2 "s_32_bits.srgb8_alpha8_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030879, VkglTestCase_030879_1, VkglTestCase_030879_2);

#define VkglTestCase_030880_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030880_2 "lass_32_bits.srgb8_alpha8_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030880, VkglTestCase_030880_1, VkglTestCase_030880_2);

#define VkglTestCase_030881_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030881_2 "lass_32_bits.srgb8_alpha8_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030881, VkglTestCase_030881_1, VkglTestCase_030881_2);

#define VkglTestCase_030882_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030882_2 "class_32_bits.srgb8_alpha8_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030882, VkglTestCase_030882_1, VkglTestCase_030882_2);

#define VkglTestCase_030883_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030883_2 "s_32_bits.srgb8_alpha8_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030883, VkglTestCase_030883_1, VkglTestCase_030883_2);

#define VkglTestCase_030884_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030884_2 "ss_32_bits.srgb8_alpha8_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030884, VkglTestCase_030884_1, VkglTestCase_030884_2);

#define VkglTestCase_030885_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030885_2 "_32_bits.srgb8_alpha8_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030885, VkglTestCase_030885_1, VkglTestCase_030885_2);

#define VkglTestCase_030886_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030886_2 "_32_bits.srgb8_alpha8_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030886, VkglTestCase_030886_1, VkglTestCase_030886_2);

#define VkglTestCase_030887_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030887_2 "s_32_bits.srgb8_alpha8_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030887, VkglTestCase_030887_1, VkglTestCase_030887_2);

#define VkglTestCase_030888_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030888_2 "_bits.srgb8_alpha8_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030888, VkglTestCase_030888_1, VkglTestCase_030888_2);

#define VkglTestCase_030889_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030889_2 "2_bits.srgb8_alpha8_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030889, VkglTestCase_030889_1, VkglTestCase_030889_2);

#define VkglTestCase_030890_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030890_2 "s_32_bits.srgb8_alpha8_rgb10_a2.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030890, VkglTestCase_030890_1, VkglTestCase_030890_2);

#define VkglTestCase_030891_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030891_2 "s_32_bits.srgb8_alpha8_rgb10_a2.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030891, VkglTestCase_030891_1, VkglTestCase_030891_2);

#define VkglTestCase_030892_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030892_2 "ss_32_bits.srgb8_alpha8_rgb10_a2.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030892, VkglTestCase_030892_1, VkglTestCase_030892_2);

#define VkglTestCase_030893_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030893_2 "2_bits.srgb8_alpha8_rgb10_a2.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030893, VkglTestCase_030893_1, VkglTestCase_030893_2);

#define VkglTestCase_030894_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030894_2 "_32_bits.srgb8_alpha8_rgb10_a2.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030894, VkglTestCase_030894_1, VkglTestCase_030894_2);
