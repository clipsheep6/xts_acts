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

#define VkglTestCase_026696_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026696_2 "class_32_bits.r32f_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026696, VkglTestCase_026696_1, VkglTestCase_026696_2);

#define VkglTestCase_026697_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026697_2 "class_32_bits.r32f_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026697, VkglTestCase_026697_1, VkglTestCase_026697_2);

#define VkglTestCase_026698_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026698_2 "wclass_32_bits.r32f_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026698, VkglTestCase_026698_1, VkglTestCase_026698_2);

#define VkglTestCase_026699_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026699_2 "ss_32_bits.r32f_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026699, VkglTestCase_026699_1, VkglTestCase_026699_2);

#define VkglTestCase_026700_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026700_2 "ass_32_bits.r32f_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026700, VkglTestCase_026700_1, VkglTestCase_026700_2);

#define VkglTestCase_026701_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026701_2 "class_32_bits.r32f_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026701, VkglTestCase_026701_1, VkglTestCase_026701_2);

#define VkglTestCase_026702_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026702_2 "class_32_bits.r32f_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026702, VkglTestCase_026702_1, VkglTestCase_026702_2);

#define VkglTestCase_026703_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026703_2 "wclass_32_bits.r32f_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026703, VkglTestCase_026703_1, VkglTestCase_026703_2);

#define VkglTestCase_026704_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026704_2 "ss_32_bits.r32f_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026704, VkglTestCase_026704_1, VkglTestCase_026704_2);

#define VkglTestCase_026705_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026705_2 "ass_32_bits.r32f_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026705, VkglTestCase_026705_1, VkglTestCase_026705_2);

#define VkglTestCase_026706_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026706_2 "wclass_32_bits.r32f_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026706, VkglTestCase_026706_1, VkglTestCase_026706_2);

#define VkglTestCase_026707_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026707_2 "wclass_32_bits.r32f_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026707, VkglTestCase_026707_1, VkglTestCase_026707_2);

#define VkglTestCase_026708_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026708_2 "ewclass_32_bits.r32f_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026708, VkglTestCase_026708_1, VkglTestCase_026708_2);

#define VkglTestCase_026709_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026709_2 "ass_32_bits.r32f_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026709, VkglTestCase_026709_1, VkglTestCase_026709_2);

#define VkglTestCase_026710_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026710_2 "lass_32_bits.r32f_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026710, VkglTestCase_026710_1, VkglTestCase_026710_2);

#define VkglTestCase_026711_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026711_2 "ss_32_bits.r32f_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026711, VkglTestCase_026711_1, VkglTestCase_026711_2);

#define VkglTestCase_026712_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026712_2 "ss_32_bits.r32f_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026712, VkglTestCase_026712_1, VkglTestCase_026712_2);

#define VkglTestCase_026713_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026713_2 "ass_32_bits.r32f_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026713, VkglTestCase_026713_1, VkglTestCase_026713_2);

#define VkglTestCase_026714_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_026714_2 "32_bits.r32f_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026714, VkglTestCase_026714_1, VkglTestCase_026714_2);

#define VkglTestCase_026715_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026715_2 "_32_bits.r32f_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026715, VkglTestCase_026715_1, VkglTestCase_026715_2);
