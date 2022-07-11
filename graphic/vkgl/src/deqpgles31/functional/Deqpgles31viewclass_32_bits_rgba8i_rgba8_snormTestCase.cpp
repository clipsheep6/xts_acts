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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028983_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028983_2 "lass_32_bits.rgba8i_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028983, VkglTestCase_028983_1, VkglTestCase_028983_2);

#define VkglTestCase_028984_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028984_2 "lass_32_bits.rgba8i_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028984, VkglTestCase_028984_1, VkglTestCase_028984_2);

#define VkglTestCase_028985_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028985_2 "class_32_bits.rgba8i_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028985, VkglTestCase_028985_1, VkglTestCase_028985_2);

#define VkglTestCase_028986_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028986_2 "s_32_bits.rgba8i_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028986, VkglTestCase_028986_1, VkglTestCase_028986_2);

#define VkglTestCase_028987_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028987_2 "lass_32_bits.rgba8i_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028987, VkglTestCase_028987_1, VkglTestCase_028987_2);

#define VkglTestCase_028988_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028988_2 "lass_32_bits.rgba8i_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028988, VkglTestCase_028988_1, VkglTestCase_028988_2);

#define VkglTestCase_028989_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028989_2 "class_32_bits.rgba8i_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028989, VkglTestCase_028989_1, VkglTestCase_028989_2);

#define VkglTestCase_028990_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028990_2 "s_32_bits.rgba8i_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028990, VkglTestCase_028990_1, VkglTestCase_028990_2);

#define VkglTestCase_028991_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028991_2 "class_32_bits.rgba8i_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028991, VkglTestCase_028991_1, VkglTestCase_028991_2);

#define VkglTestCase_028992_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028992_2 "class_32_bits.rgba8i_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028992, VkglTestCase_028992_1, VkglTestCase_028992_2);

#define VkglTestCase_028993_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028993_2 "wclass_32_bits.rgba8i_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028993, VkglTestCase_028993_1, VkglTestCase_028993_2);

#define VkglTestCase_028994_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028994_2 "ss_32_bits.rgba8i_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028994, VkglTestCase_028994_1, VkglTestCase_028994_2);

#define VkglTestCase_028995_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028995_2 "s_32_bits.rgba8i_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028995, VkglTestCase_028995_1, VkglTestCase_028995_2);

#define VkglTestCase_028996_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028996_2 "s_32_bits.rgba8i_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028996, VkglTestCase_028996_1, VkglTestCase_028996_2);

#define VkglTestCase_028997_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028997_2 "ss_32_bits.rgba8i_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028997, VkglTestCase_028997_1, VkglTestCase_028997_2);

#define VkglTestCase_028998_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_028998_2 "2_bits.rgba8i_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028998, VkglTestCase_028998_1, VkglTestCase_028998_2);

#define VkglTestCase_028999_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028999_2 "ass_32_bits.rgba8i_rgba8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028999, VkglTestCase_028999_1, VkglTestCase_028999_2);

#define VkglTestCase_029000_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029000_2 "ass_32_bits.rgba8i_rgba8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_029000, VkglTestCase_029000_1, VkglTestCase_029000_2);

#define VkglTestCase_029001_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029001_2 "lass_32_bits.rgba8i_rgba8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_029001, VkglTestCase_029001_1, VkglTestCase_029001_2);

#define VkglTestCase_029002_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029002_2 "_32_bits.rgba8i_rgba8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_029002, VkglTestCase_029002_1, VkglTestCase_029002_2);
