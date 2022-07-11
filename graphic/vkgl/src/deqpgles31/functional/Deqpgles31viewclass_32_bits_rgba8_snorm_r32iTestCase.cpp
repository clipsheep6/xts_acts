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

#define VkglTestCase_030346_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030346_2 "class_32_bits.rgba8_snorm_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030346, VkglTestCase_030346_1, VkglTestCase_030346_2);

#define VkglTestCase_030347_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030347_2 "class_32_bits.rgba8_snorm_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030347, VkglTestCase_030347_1, VkglTestCase_030347_2);

#define VkglTestCase_030348_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030348_2 "wclass_32_bits.rgba8_snorm_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030348, VkglTestCase_030348_1, VkglTestCase_030348_2);

#define VkglTestCase_030349_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030349_2 "ss_32_bits.rgba8_snorm_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030349, VkglTestCase_030349_1, VkglTestCase_030349_2);

#define VkglTestCase_030350_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030350_2 "lass_32_bits.rgba8_snorm_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030350, VkglTestCase_030350_1, VkglTestCase_030350_2);

#define VkglTestCase_030351_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030351_2 "class_32_bits.rgba8_snorm_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030351, VkglTestCase_030351_1, VkglTestCase_030351_2);

#define VkglTestCase_030352_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030352_2 "class_32_bits.rgba8_snorm_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030352, VkglTestCase_030352_1, VkglTestCase_030352_2);

#define VkglTestCase_030353_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030353_2 "wclass_32_bits.rgba8_snorm_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030353, VkglTestCase_030353_1, VkglTestCase_030353_2);

#define VkglTestCase_030354_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030354_2 "ss_32_bits.rgba8_snorm_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030354, VkglTestCase_030354_1, VkglTestCase_030354_2);

#define VkglTestCase_030355_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030355_2 "lass_32_bits.rgba8_snorm_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030355, VkglTestCase_030355_1, VkglTestCase_030355_2);

#define VkglTestCase_030356_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030356_2 "wclass_32_bits.rgba8_snorm_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030356, VkglTestCase_030356_1, VkglTestCase_030356_2);

#define VkglTestCase_030357_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030357_2 "wclass_32_bits.rgba8_snorm_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030357, VkglTestCase_030357_1, VkglTestCase_030357_2);

#define VkglTestCase_030358_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030358_2 "ewclass_32_bits.rgba8_snorm_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030358, VkglTestCase_030358_1, VkglTestCase_030358_2);

#define VkglTestCase_030359_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030359_2 "ass_32_bits.rgba8_snorm_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030359, VkglTestCase_030359_1, VkglTestCase_030359_2);

#define VkglTestCase_030360_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030360_2 "class_32_bits.rgba8_snorm_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030360, VkglTestCase_030360_1, VkglTestCase_030360_2);

#define VkglTestCase_030361_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030361_2 "ss_32_bits.rgba8_snorm_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030361, VkglTestCase_030361_1, VkglTestCase_030361_2);

#define VkglTestCase_030362_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030362_2 "ss_32_bits.rgba8_snorm_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030362, VkglTestCase_030362_1, VkglTestCase_030362_2);

#define VkglTestCase_030363_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030363_2 "ass_32_bits.rgba8_snorm_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030363, VkglTestCase_030363_1, VkglTestCase_030363_2);

#define VkglTestCase_030364_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030364_2 "32_bits.rgba8_snorm_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030364, VkglTestCase_030364_1, VkglTestCase_030364_2);

#define VkglTestCase_030365_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030365_2 "s_32_bits.rgba8_snorm_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030365, VkglTestCase_030365_1, VkglTestCase_030365_2);
