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

#define VkglTestCase_030775_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030775_2 "lass_32_bits.srgb8_alpha8_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030775, VkglTestCase_030775_1, VkglTestCase_030775_2);

#define VkglTestCase_030776_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030776_2 "lass_32_bits.srgb8_alpha8_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030776, VkglTestCase_030776_1, VkglTestCase_030776_2);

#define VkglTestCase_030777_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030777_2 "class_32_bits.srgb8_alpha8_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030777, VkglTestCase_030777_1, VkglTestCase_030777_2);

#define VkglTestCase_030778_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030778_2 "s_32_bits.srgb8_alpha8_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030778, VkglTestCase_030778_1, VkglTestCase_030778_2);

#define VkglTestCase_030779_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030779_2 "ss_32_bits.srgb8_alpha8_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030779, VkglTestCase_030779_1, VkglTestCase_030779_2);

#define VkglTestCase_030780_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030780_2 "lass_32_bits.srgb8_alpha8_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030780, VkglTestCase_030780_1, VkglTestCase_030780_2);

#define VkglTestCase_030781_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030781_2 "lass_32_bits.srgb8_alpha8_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030781, VkglTestCase_030781_1, VkglTestCase_030781_2);

#define VkglTestCase_030782_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030782_2 "class_32_bits.srgb8_alpha8_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030782, VkglTestCase_030782_1, VkglTestCase_030782_2);

#define VkglTestCase_030783_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030783_2 "s_32_bits.srgb8_alpha8_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030783, VkglTestCase_030783_1, VkglTestCase_030783_2);

#define VkglTestCase_030784_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030784_2 "ss_32_bits.srgb8_alpha8_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030784, VkglTestCase_030784_1, VkglTestCase_030784_2);

#define VkglTestCase_030785_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030785_2 "class_32_bits.srgb8_alpha8_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030785, VkglTestCase_030785_1, VkglTestCase_030785_2);

#define VkglTestCase_030786_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030786_2 "class_32_bits.srgb8_alpha8_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030786, VkglTestCase_030786_1, VkglTestCase_030786_2);

#define VkglTestCase_030787_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030787_2 "wclass_32_bits.srgb8_alpha8_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030787, VkglTestCase_030787_1, VkglTestCase_030787_2);

#define VkglTestCase_030788_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030788_2 "ss_32_bits.srgb8_alpha8_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030788, VkglTestCase_030788_1, VkglTestCase_030788_2);

#define VkglTestCase_030789_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030789_2 "ass_32_bits.srgb8_alpha8_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030789, VkglTestCase_030789_1, VkglTestCase_030789_2);

#define VkglTestCase_030790_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030790_2 "s_32_bits.srgb8_alpha8_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030790, VkglTestCase_030790_1, VkglTestCase_030790_2);

#define VkglTestCase_030791_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030791_2 "s_32_bits.srgb8_alpha8_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030791, VkglTestCase_030791_1, VkglTestCase_030791_2);

#define VkglTestCase_030792_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030792_2 "ss_32_bits.srgb8_alpha8_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030792, VkglTestCase_030792_1, VkglTestCase_030792_2);

#define VkglTestCase_030793_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030793_2 "2_bits.srgb8_alpha8_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030793, VkglTestCase_030793_1, VkglTestCase_030793_2);

#define VkglTestCase_030794_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030794_2 "32_bits.srgb8_alpha8_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030794, VkglTestCase_030794_1, VkglTestCase_030794_2);

#define VkglTestCase_030795_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030795_2 "ss_32_bits.srgb8_alpha8_rgba8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030795, VkglTestCase_030795_1, VkglTestCase_030795_2);

#define VkglTestCase_030796_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030796_2 "ss_32_bits.srgb8_alpha8_rgba8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030796, VkglTestCase_030796_1, VkglTestCase_030796_2);

#define VkglTestCase_030797_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030797_2 "ass_32_bits.srgb8_alpha8_rgba8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030797, VkglTestCase_030797_1, VkglTestCase_030797_2);

#define VkglTestCase_030798_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030798_2 "32_bits.srgb8_alpha8_rgba8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030798, VkglTestCase_030798_1, VkglTestCase_030798_2);

#define VkglTestCase_030799_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030799_2 "s_32_bits.srgb8_alpha8_rgba8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030799, VkglTestCase_030799_1, VkglTestCase_030799_2);
