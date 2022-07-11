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
#include "../ActsDeqpgles310030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029630_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029630_2 "wclass_32_bits.rgb10_a2ui_r32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029630, VkglTestCase_029630_1, VkglTestCase_029630_2);

#define VkglTestCase_029631_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029631_2 "wclass_32_bits.rgb10_a2ui_r32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029631, VkglTestCase_029631_1, VkglTestCase_029631_2);

#define VkglTestCase_029632_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029632_2 "ewclass_32_bits.rgb10_a2ui_r32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029632, VkglTestCase_029632_1, VkglTestCase_029632_2);

#define VkglTestCase_029633_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029633_2 "ass_32_bits.rgb10_a2ui_r32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029633, VkglTestCase_029633_1, VkglTestCase_029633_2);

#define VkglTestCase_029634_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029634_2 "wclass_32_bits.rgb10_a2ui_r32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029634, VkglTestCase_029634_1, VkglTestCase_029634_2);

#define VkglTestCase_029635_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029635_2 "wclass_32_bits.rgb10_a2ui_r32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029635, VkglTestCase_029635_1, VkglTestCase_029635_2);

#define VkglTestCase_029636_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029636_2 "ewclass_32_bits.rgb10_a2ui_r32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029636, VkglTestCase_029636_1, VkglTestCase_029636_2);

#define VkglTestCase_029637_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029637_2 "ass_32_bits.rgb10_a2ui_r32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029637, VkglTestCase_029637_1, VkglTestCase_029637_2);

#define VkglTestCase_029638_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029638_2 "ewclass_32_bits.rgb10_a2ui_r32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029638, VkglTestCase_029638_1, VkglTestCase_029638_2);

#define VkglTestCase_029639_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029639_2 "ewclass_32_bits.rgb10_a2ui_r32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029639, VkglTestCase_029639_1, VkglTestCase_029639_2);

#define VkglTestCase_029640_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029640_2 "iewclass_32_bits.rgb10_a2ui_r32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029640, VkglTestCase_029640_1, VkglTestCase_029640_2);

#define VkglTestCase_029641_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029641_2 "lass_32_bits.rgb10_a2ui_r32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029641, VkglTestCase_029641_1, VkglTestCase_029641_2);

#define VkglTestCase_029642_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029642_2 "ass_32_bits.rgb10_a2ui_r32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029642, VkglTestCase_029642_1, VkglTestCase_029642_2);

#define VkglTestCase_029643_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029643_2 "ass_32_bits.rgb10_a2ui_r32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029643, VkglTestCase_029643_1, VkglTestCase_029643_2);

#define VkglTestCase_029644_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029644_2 "lass_32_bits.rgb10_a2ui_r32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029644, VkglTestCase_029644_1, VkglTestCase_029644_2);

#define VkglTestCase_029645_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029645_2 "_32_bits.rgb10_a2ui_r32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029645, VkglTestCase_029645_1, VkglTestCase_029645_2);

#define VkglTestCase_029646_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029646_2 "lass_32_bits.rgb10_a2ui_r32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029646, VkglTestCase_029646_1, VkglTestCase_029646_2);

#define VkglTestCase_029647_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029647_2 "lass_32_bits.rgb10_a2ui_r32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029647, VkglTestCase_029647_1, VkglTestCase_029647_2);

#define VkglTestCase_029648_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029648_2 "class_32_bits.rgb10_a2ui_r32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029648, VkglTestCase_029648_1, VkglTestCase_029648_2);

#define VkglTestCase_029649_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029649_2 "s_32_bits.rgb10_a2ui_r32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029649, VkglTestCase_029649_1, VkglTestCase_029649_2);
