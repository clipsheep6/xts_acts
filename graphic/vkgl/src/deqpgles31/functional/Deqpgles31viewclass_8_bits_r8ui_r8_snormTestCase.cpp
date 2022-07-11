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

#define VkglTestCase_032987_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032987_2 "ewclass_8_bits.r8ui_r8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032987, VkglTestCase_032987_1, VkglTestCase_032987_2);

#define VkglTestCase_032988_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032988_2 "ewclass_8_bits.r8ui_r8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032988, VkglTestCase_032988_1, VkglTestCase_032988_2);

#define VkglTestCase_032989_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032989_2 "iewclass_8_bits.r8ui_r8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032989, VkglTestCase_032989_1, VkglTestCase_032989_2);

#define VkglTestCase_032990_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032990_2 "lass_8_bits.r8ui_r8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032990, VkglTestCase_032990_1, VkglTestCase_032990_2);

#define VkglTestCase_032991_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032991_2 "ewclass_8_bits.r8ui_r8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032991, VkglTestCase_032991_1, VkglTestCase_032991_2);

#define VkglTestCase_032992_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032992_2 "ewclass_8_bits.r8ui_r8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032992, VkglTestCase_032992_1, VkglTestCase_032992_2);

#define VkglTestCase_032993_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032993_2 "iewclass_8_bits.r8ui_r8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032993, VkglTestCase_032993_1, VkglTestCase_032993_2);

#define VkglTestCase_032994_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032994_2 "lass_8_bits.r8ui_r8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032994, VkglTestCase_032994_1, VkglTestCase_032994_2);

#define VkglTestCase_032995_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032995_2 "iewclass_8_bits.r8ui_r8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032995, VkglTestCase_032995_1, VkglTestCase_032995_2);

#define VkglTestCase_032996_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032996_2 "iewclass_8_bits.r8ui_r8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032996, VkglTestCase_032996_1, VkglTestCase_032996_2);

#define VkglTestCase_032997_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032997_2 "viewclass_8_bits.r8ui_r8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032997, VkglTestCase_032997_1, VkglTestCase_032997_2);

#define VkglTestCase_032998_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032998_2 "class_8_bits.r8ui_r8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032998, VkglTestCase_032998_1, VkglTestCase_032998_2);

#define VkglTestCase_032999_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032999_2 "lass_8_bits.r8ui_r8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032999, VkglTestCase_032999_1, VkglTestCase_032999_2);

#define VkglTestCase_033000_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_033000_2 "lass_8_bits.r8ui_r8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_033000, VkglTestCase_033000_1, VkglTestCase_033000_2);

#define VkglTestCase_033001_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033001_2 "class_8_bits.r8ui_r8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_033001, VkglTestCase_033001_1, VkglTestCase_033001_2);

#define VkglTestCase_033002_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_033002_2 "s_8_bits.r8ui_r8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_033002, VkglTestCase_033002_1, VkglTestCase_033002_2);

#define VkglTestCase_033003_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_033003_2 "wclass_8_bits.r8ui_r8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_033003, VkglTestCase_033003_1, VkglTestCase_033003_2);

#define VkglTestCase_033004_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_033004_2 "wclass_8_bits.r8ui_r8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_033004, VkglTestCase_033004_1, VkglTestCase_033004_2);

#define VkglTestCase_033005_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_033005_2 "ewclass_8_bits.r8ui_r8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_033005, VkglTestCase_033005_1, VkglTestCase_033005_2);

#define VkglTestCase_033006_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_033006_2 "ass_8_bits.r8ui_r8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_033006, VkglTestCase_033006_1, VkglTestCase_033006_2);
