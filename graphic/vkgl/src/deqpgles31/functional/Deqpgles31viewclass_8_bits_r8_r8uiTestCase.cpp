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
#include "../ActsDeqpgles310033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032772_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032772_2 ".viewclass_8_bits.r8_r8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032772, VkglTestCase_032772_1, VkglTestCase_032772_2);

#define VkglTestCase_032773_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032773_2 ".viewclass_8_bits.r8_r8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032773, VkglTestCase_032773_1, VkglTestCase_032773_2);

#define VkglTestCase_032774_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032774_2 "d.viewclass_8_bits.r8_r8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032774, VkglTestCase_032774_1, VkglTestCase_032774_2);

#define VkglTestCase_032775_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032775_2 "ewclass_8_bits.r8_r8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032775, VkglTestCase_032775_1, VkglTestCase_032775_2);

#define VkglTestCase_032776_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032776_2 "viewclass_8_bits.r8_r8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032776, VkglTestCase_032776_1, VkglTestCase_032776_2);

#define VkglTestCase_032777_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032777_2 ".viewclass_8_bits.r8_r8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032777, VkglTestCase_032777_1, VkglTestCase_032777_2);

#define VkglTestCase_032778_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032778_2 ".viewclass_8_bits.r8_r8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032778, VkglTestCase_032778_1, VkglTestCase_032778_2);

#define VkglTestCase_032779_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032779_2 "d.viewclass_8_bits.r8_r8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032779, VkglTestCase_032779_1, VkglTestCase_032779_2);

#define VkglTestCase_032780_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032780_2 "ewclass_8_bits.r8_r8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032780, VkglTestCase_032780_1, VkglTestCase_032780_2);

#define VkglTestCase_032781_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032781_2 "viewclass_8_bits.r8_r8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032781, VkglTestCase_032781_1, VkglTestCase_032781_2);

#define VkglTestCase_032782_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032782_2 "d.viewclass_8_bits.r8_r8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032782, VkglTestCase_032782_1, VkglTestCase_032782_2);

#define VkglTestCase_032783_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032783_2 "d.viewclass_8_bits.r8_r8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032783, VkglTestCase_032783_1, VkglTestCase_032783_2);

#define VkglTestCase_032784_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032784_2 "ed.viewclass_8_bits.r8_r8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032784, VkglTestCase_032784_1, VkglTestCase_032784_2);

#define VkglTestCase_032785_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032785_2 "iewclass_8_bits.r8_r8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032785, VkglTestCase_032785_1, VkglTestCase_032785_2);

#define VkglTestCase_032786_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032786_2 ".viewclass_8_bits.r8_r8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032786, VkglTestCase_032786_1, VkglTestCase_032786_2);

#define VkglTestCase_032787_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032787_2 "ewclass_8_bits.r8_r8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032787, VkglTestCase_032787_1, VkglTestCase_032787_2);

#define VkglTestCase_032788_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032788_2 "ewclass_8_bits.r8_r8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032788, VkglTestCase_032788_1, VkglTestCase_032788_2);

#define VkglTestCase_032789_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032789_2 "iewclass_8_bits.r8_r8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032789, VkglTestCase_032789_1, VkglTestCase_032789_2);

#define VkglTestCase_032790_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032790_2 "lass_8_bits.r8_r8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032790, VkglTestCase_032790_1, VkglTestCase_032790_2);

#define VkglTestCase_032791_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032791_2 "wclass_8_bits.r8_r8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032791, VkglTestCase_032791_1, VkglTestCase_032791_2);

#define VkglTestCase_032792_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032792_2 "viewclass_8_bits.r8_r8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032792, VkglTestCase_032792_1, VkglTestCase_032792_2);

#define VkglTestCase_032793_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032793_2 "viewclass_8_bits.r8_r8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032793, VkglTestCase_032793_1, VkglTestCase_032793_2);

#define VkglTestCase_032794_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032794_2 ".viewclass_8_bits.r8_r8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032794, VkglTestCase_032794_1, VkglTestCase_032794_2);

#define VkglTestCase_032795_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032795_2 "wclass_8_bits.r8_r8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032795, VkglTestCase_032795_1, VkglTestCase_032795_2);

#define VkglTestCase_032796_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032796_2 "ewclass_8_bits.r8_r8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032796, VkglTestCase_032796_1, VkglTestCase_032796_2);
