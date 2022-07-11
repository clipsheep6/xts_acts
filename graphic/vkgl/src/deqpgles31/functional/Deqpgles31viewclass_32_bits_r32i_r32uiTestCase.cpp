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

#define VkglTestCase_026761_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026761_2 "iewclass_32_bits.r32i_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026761, VkglTestCase_026761_1, VkglTestCase_026761_2);

#define VkglTestCase_026762_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026762_2 "iewclass_32_bits.r32i_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026762, VkglTestCase_026762_1, VkglTestCase_026762_2);

#define VkglTestCase_026763_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026763_2 "viewclass_32_bits.r32i_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026763, VkglTestCase_026763_1, VkglTestCase_026763_2);

#define VkglTestCase_026764_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026764_2 "class_32_bits.r32i_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026764, VkglTestCase_026764_1, VkglTestCase_026764_2);

#define VkglTestCase_026765_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026765_2 "ewclass_32_bits.r32i_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026765, VkglTestCase_026765_1, VkglTestCase_026765_2);

#define VkglTestCase_026766_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026766_2 "iewclass_32_bits.r32i_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026766, VkglTestCase_026766_1, VkglTestCase_026766_2);

#define VkglTestCase_026767_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026767_2 "iewclass_32_bits.r32i_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026767, VkglTestCase_026767_1, VkglTestCase_026767_2);

#define VkglTestCase_026768_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026768_2 "viewclass_32_bits.r32i_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026768, VkglTestCase_026768_1, VkglTestCase_026768_2);

#define VkglTestCase_026769_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026769_2 "class_32_bits.r32i_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026769, VkglTestCase_026769_1, VkglTestCase_026769_2);

#define VkglTestCase_026770_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026770_2 "ewclass_32_bits.r32i_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026770, VkglTestCase_026770_1, VkglTestCase_026770_2);

#define VkglTestCase_026771_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026771_2 "viewclass_32_bits.r32i_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026771, VkglTestCase_026771_1, VkglTestCase_026771_2);

#define VkglTestCase_026772_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026772_2 "viewclass_32_bits.r32i_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026772, VkglTestCase_026772_1, VkglTestCase_026772_2);

#define VkglTestCase_026773_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026773_2 ".viewclass_32_bits.r32i_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026773, VkglTestCase_026773_1, VkglTestCase_026773_2);

#define VkglTestCase_026774_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026774_2 "wclass_32_bits.r32i_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026774, VkglTestCase_026774_1, VkglTestCase_026774_2);

#define VkglTestCase_026775_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026775_2 "iewclass_32_bits.r32i_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026775, VkglTestCase_026775_1, VkglTestCase_026775_2);

#define VkglTestCase_026776_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026776_2 "class_32_bits.r32i_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026776, VkglTestCase_026776_1, VkglTestCase_026776_2);

#define VkglTestCase_026777_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026777_2 "class_32_bits.r32i_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026777, VkglTestCase_026777_1, VkglTestCase_026777_2);

#define VkglTestCase_026778_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026778_2 "wclass_32_bits.r32i_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026778, VkglTestCase_026778_1, VkglTestCase_026778_2);

#define VkglTestCase_026779_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026779_2 "ss_32_bits.r32i_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026779, VkglTestCase_026779_1, VkglTestCase_026779_2);

#define VkglTestCase_026780_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026780_2 "lass_32_bits.r32i_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026780, VkglTestCase_026780_1, VkglTestCase_026780_2);

#define VkglTestCase_026781_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026781_2 "ewclass_32_bits.r32i_r32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026781, VkglTestCase_026781_1, VkglTestCase_026781_2);

#define VkglTestCase_026782_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026782_2 "ewclass_32_bits.r32i_r32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026782, VkglTestCase_026782_1, VkglTestCase_026782_2);

#define VkglTestCase_026783_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026783_2 "iewclass_32_bits.r32i_r32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026783, VkglTestCase_026783_1, VkglTestCase_026783_2);

#define VkglTestCase_026784_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026784_2 "lass_32_bits.r32i_r32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026784, VkglTestCase_026784_1, VkglTestCase_026784_2);

#define VkglTestCase_026785_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026785_2 "class_32_bits.r32i_r32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026785, VkglTestCase_026785_1, VkglTestCase_026785_2);
