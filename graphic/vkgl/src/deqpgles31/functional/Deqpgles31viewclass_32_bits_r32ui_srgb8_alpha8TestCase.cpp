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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027371_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027371_2 "lass_32_bits.r32ui_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027371, VkglTestCase_027371_1, VkglTestCase_027371_2);

#define VkglTestCase_027372_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027372_2 "lass_32_bits.r32ui_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027372, VkglTestCase_027372_1, VkglTestCase_027372_2);

#define VkglTestCase_027373_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027373_2 "class_32_bits.r32ui_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027373, VkglTestCase_027373_1, VkglTestCase_027373_2);

#define VkglTestCase_027374_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027374_2 "s_32_bits.r32ui_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027374, VkglTestCase_027374_1, VkglTestCase_027374_2);

#define VkglTestCase_027375_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027375_2 "ass_32_bits.r32ui_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027375, VkglTestCase_027375_1, VkglTestCase_027375_2);

#define VkglTestCase_027376_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027376_2 "lass_32_bits.r32ui_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027376, VkglTestCase_027376_1, VkglTestCase_027376_2);

#define VkglTestCase_027377_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027377_2 "lass_32_bits.r32ui_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027377, VkglTestCase_027377_1, VkglTestCase_027377_2);

#define VkglTestCase_027378_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027378_2 "class_32_bits.r32ui_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027378, VkglTestCase_027378_1, VkglTestCase_027378_2);

#define VkglTestCase_027379_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027379_2 "s_32_bits.r32ui_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027379, VkglTestCase_027379_1, VkglTestCase_027379_2);

#define VkglTestCase_027380_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027380_2 "ass_32_bits.r32ui_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027380, VkglTestCase_027380_1, VkglTestCase_027380_2);

#define VkglTestCase_027381_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027381_2 "class_32_bits.r32ui_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027381, VkglTestCase_027381_1, VkglTestCase_027381_2);

#define VkglTestCase_027382_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027382_2 "class_32_bits.r32ui_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027382, VkglTestCase_027382_1, VkglTestCase_027382_2);

#define VkglTestCase_027383_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027383_2 "wclass_32_bits.r32ui_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027383, VkglTestCase_027383_1, VkglTestCase_027383_2);

#define VkglTestCase_027384_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027384_2 "ss_32_bits.r32ui_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027384, VkglTestCase_027384_1, VkglTestCase_027384_2);

#define VkglTestCase_027385_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027385_2 "lass_32_bits.r32ui_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027385, VkglTestCase_027385_1, VkglTestCase_027385_2);

#define VkglTestCase_027386_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027386_2 "s_32_bits.r32ui_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027386, VkglTestCase_027386_1, VkglTestCase_027386_2);

#define VkglTestCase_027387_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027387_2 "s_32_bits.r32ui_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027387, VkglTestCase_027387_1, VkglTestCase_027387_2);

#define VkglTestCase_027388_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027388_2 "ss_32_bits.r32ui_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027388, VkglTestCase_027388_1, VkglTestCase_027388_2);

#define VkglTestCase_027389_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_027389_2 "2_bits.r32ui_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027389, VkglTestCase_027389_1, VkglTestCase_027389_2);

#define VkglTestCase_027390_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027390_2 "_32_bits.r32ui_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027390, VkglTestCase_027390_1, VkglTestCase_027390_2);

#define VkglTestCase_027391_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027391_2 "ass_32_bits.r32ui_srgb8_alpha8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027391, VkglTestCase_027391_1, VkglTestCase_027391_2);

#define VkglTestCase_027392_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027392_2 "ass_32_bits.r32ui_srgb8_alpha8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027392, VkglTestCase_027392_1, VkglTestCase_027392_2);

#define VkglTestCase_027393_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027393_2 "lass_32_bits.r32ui_srgb8_alpha8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027393, VkglTestCase_027393_1, VkglTestCase_027393_2);

#define VkglTestCase_027394_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027394_2 "_32_bits.r32ui_srgb8_alpha8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027394, VkglTestCase_027394_1, VkglTestCase_027394_2);

#define VkglTestCase_027395_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027395_2 "s_32_bits.r32ui_srgb8_alpha8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027395, VkglTestCase_027395_1, VkglTestCase_027395_2);
