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

#define VkglTestCase_032797_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032797_2 "iewclass_8_bits.r8_r8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032797, VkglTestCase_032797_1, VkglTestCase_032797_2);

#define VkglTestCase_032798_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032798_2 "iewclass_8_bits.r8_r8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032798, VkglTestCase_032798_1, VkglTestCase_032798_2);

#define VkglTestCase_032799_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032799_2 "viewclass_8_bits.r8_r8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032799, VkglTestCase_032799_1, VkglTestCase_032799_2);

#define VkglTestCase_032800_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032800_2 "class_8_bits.r8_r8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032800, VkglTestCase_032800_1, VkglTestCase_032800_2);

#define VkglTestCase_032801_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032801_2 "iewclass_8_bits.r8_r8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032801, VkglTestCase_032801_1, VkglTestCase_032801_2);

#define VkglTestCase_032802_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032802_2 "iewclass_8_bits.r8_r8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032802, VkglTestCase_032802_1, VkglTestCase_032802_2);

#define VkglTestCase_032803_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032803_2 "viewclass_8_bits.r8_r8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032803, VkglTestCase_032803_1, VkglTestCase_032803_2);

#define VkglTestCase_032804_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032804_2 "class_8_bits.r8_r8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032804, VkglTestCase_032804_1, VkglTestCase_032804_2);

#define VkglTestCase_032805_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032805_2 "viewclass_8_bits.r8_r8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032805, VkglTestCase_032805_1, VkglTestCase_032805_2);

#define VkglTestCase_032806_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032806_2 "viewclass_8_bits.r8_r8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032806, VkglTestCase_032806_1, VkglTestCase_032806_2);

#define VkglTestCase_032807_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032807_2 ".viewclass_8_bits.r8_r8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032807, VkglTestCase_032807_1, VkglTestCase_032807_2);

#define VkglTestCase_032808_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032808_2 "wclass_8_bits.r8_r8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032808, VkglTestCase_032808_1, VkglTestCase_032808_2);

#define VkglTestCase_032809_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032809_2 "class_8_bits.r8_r8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032809, VkglTestCase_032809_1, VkglTestCase_032809_2);

#define VkglTestCase_032810_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032810_2 "class_8_bits.r8_r8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032810, VkglTestCase_032810_1, VkglTestCase_032810_2);

#define VkglTestCase_032811_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032811_2 "wclass_8_bits.r8_r8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032811, VkglTestCase_032811_1, VkglTestCase_032811_2);

#define VkglTestCase_032812_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032812_2 "ss_8_bits.r8_r8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032812, VkglTestCase_032812_1, VkglTestCase_032812_2);

#define VkglTestCase_032813_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032813_2 "ewclass_8_bits.r8_r8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032813, VkglTestCase_032813_1, VkglTestCase_032813_2);

#define VkglTestCase_032814_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032814_2 "ewclass_8_bits.r8_r8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032814, VkglTestCase_032814_1, VkglTestCase_032814_2);

#define VkglTestCase_032815_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032815_2 "iewclass_8_bits.r8_r8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032815, VkglTestCase_032815_1, VkglTestCase_032815_2);

#define VkglTestCase_032816_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032816_2 "lass_8_bits.r8_r8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032816, VkglTestCase_032816_1, VkglTestCase_032816_2);
