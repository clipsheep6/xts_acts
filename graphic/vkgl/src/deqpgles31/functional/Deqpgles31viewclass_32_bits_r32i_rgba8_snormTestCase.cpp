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

#define VkglTestCase_027001_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027001_2 "class_32_bits.r32i_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027001, VkglTestCase_027001_1, VkglTestCase_027001_2);

#define VkglTestCase_027002_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027002_2 "class_32_bits.r32i_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027002, VkglTestCase_027002_1, VkglTestCase_027002_2);

#define VkglTestCase_027003_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027003_2 "wclass_32_bits.r32i_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027003, VkglTestCase_027003_1, VkglTestCase_027003_2);

#define VkglTestCase_027004_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027004_2 "ss_32_bits.r32i_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027004, VkglTestCase_027004_1, VkglTestCase_027004_2);

#define VkglTestCase_027005_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027005_2 "class_32_bits.r32i_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027005, VkglTestCase_027005_1, VkglTestCase_027005_2);

#define VkglTestCase_027006_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027006_2 "class_32_bits.r32i_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027006, VkglTestCase_027006_1, VkglTestCase_027006_2);

#define VkglTestCase_027007_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027007_2 "wclass_32_bits.r32i_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027007, VkglTestCase_027007_1, VkglTestCase_027007_2);

#define VkglTestCase_027008_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027008_2 "ss_32_bits.r32i_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027008, VkglTestCase_027008_1, VkglTestCase_027008_2);

#define VkglTestCase_027009_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027009_2 "wclass_32_bits.r32i_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027009, VkglTestCase_027009_1, VkglTestCase_027009_2);

#define VkglTestCase_027010_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027010_2 "wclass_32_bits.r32i_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027010, VkglTestCase_027010_1, VkglTestCase_027010_2);

#define VkglTestCase_027011_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027011_2 "ewclass_32_bits.r32i_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027011, VkglTestCase_027011_1, VkglTestCase_027011_2);

#define VkglTestCase_027012_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027012_2 "ass_32_bits.r32i_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027012, VkglTestCase_027012_1, VkglTestCase_027012_2);

#define VkglTestCase_027013_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027013_2 "ss_32_bits.r32i_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027013, VkglTestCase_027013_1, VkglTestCase_027013_2);

#define VkglTestCase_027014_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027014_2 "ss_32_bits.r32i_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027014, VkglTestCase_027014_1, VkglTestCase_027014_2);

#define VkglTestCase_027015_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027015_2 "ass_32_bits.r32i_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027015, VkglTestCase_027015_1, VkglTestCase_027015_2);

#define VkglTestCase_027016_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_027016_2 "32_bits.r32i_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027016, VkglTestCase_027016_1, VkglTestCase_027016_2);

#define VkglTestCase_027017_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027017_2 "lass_32_bits.r32i_rgba8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027017, VkglTestCase_027017_1, VkglTestCase_027017_2);

#define VkglTestCase_027018_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027018_2 "lass_32_bits.r32i_rgba8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027018, VkglTestCase_027018_1, VkglTestCase_027018_2);

#define VkglTestCase_027019_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027019_2 "class_32_bits.r32i_rgba8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027019, VkglTestCase_027019_1, VkglTestCase_027019_2);

#define VkglTestCase_027020_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027020_2 "s_32_bits.r32i_rgba8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027020, VkglTestCase_027020_1, VkglTestCase_027020_2);
