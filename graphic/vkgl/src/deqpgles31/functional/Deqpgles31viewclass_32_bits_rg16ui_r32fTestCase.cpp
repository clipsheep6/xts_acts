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

#define VkglTestCase_027998_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027998_2 "iewclass_32_bits.rg16ui_r32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027998, VkglTestCase_027998_1, VkglTestCase_027998_2);

#define VkglTestCase_027999_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027999_2 "iewclass_32_bits.rg16ui_r32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027999, VkglTestCase_027999_1, VkglTestCase_027999_2);

#define VkglTestCase_028000_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028000_2 "viewclass_32_bits.rg16ui_r32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028000, VkglTestCase_028000_1, VkglTestCase_028000_2);

#define VkglTestCase_028001_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028001_2 "class_32_bits.rg16ui_r32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028001, VkglTestCase_028001_1, VkglTestCase_028001_2);

#define VkglTestCase_028002_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028002_2 "iewclass_32_bits.rg16ui_r32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028002, VkglTestCase_028002_1, VkglTestCase_028002_2);

#define VkglTestCase_028003_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028003_2 "iewclass_32_bits.rg16ui_r32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028003, VkglTestCase_028003_1, VkglTestCase_028003_2);

#define VkglTestCase_028004_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028004_2 "viewclass_32_bits.rg16ui_r32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028004, VkglTestCase_028004_1, VkglTestCase_028004_2);

#define VkglTestCase_028005_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028005_2 "class_32_bits.rg16ui_r32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028005, VkglTestCase_028005_1, VkglTestCase_028005_2);

#define VkglTestCase_028006_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028006_2 "viewclass_32_bits.rg16ui_r32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028006, VkglTestCase_028006_1, VkglTestCase_028006_2);

#define VkglTestCase_028007_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028007_2 "viewclass_32_bits.rg16ui_r32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028007, VkglTestCase_028007_1, VkglTestCase_028007_2);

#define VkglTestCase_028008_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_028008_2 ".viewclass_32_bits.rg16ui_r32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028008, VkglTestCase_028008_1, VkglTestCase_028008_2);

#define VkglTestCase_028009_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028009_2 "wclass_32_bits.rg16ui_r32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028009, VkglTestCase_028009_1, VkglTestCase_028009_2);

#define VkglTestCase_028010_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028010_2 "class_32_bits.rg16ui_r32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028010, VkglTestCase_028010_1, VkglTestCase_028010_2);

#define VkglTestCase_028011_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028011_2 "class_32_bits.rg16ui_r32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028011, VkglTestCase_028011_1, VkglTestCase_028011_2);

#define VkglTestCase_028012_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028012_2 "wclass_32_bits.rg16ui_r32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028012, VkglTestCase_028012_1, VkglTestCase_028012_2);

#define VkglTestCase_028013_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028013_2 "ss_32_bits.rg16ui_r32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028013, VkglTestCase_028013_1, VkglTestCase_028013_2);

#define VkglTestCase_028014_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028014_2 "wclass_32_bits.rg16ui_r32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028014, VkglTestCase_028014_1, VkglTestCase_028014_2);

#define VkglTestCase_028015_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028015_2 "wclass_32_bits.rg16ui_r32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028015, VkglTestCase_028015_1, VkglTestCase_028015_2);

#define VkglTestCase_028016_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028016_2 "ewclass_32_bits.rg16ui_r32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028016, VkglTestCase_028016_1, VkglTestCase_028016_2);

#define VkglTestCase_028017_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028017_2 "ass_32_bits.rg16ui_r32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_028017, VkglTestCase_028017_1, VkglTestCase_028017_2);
