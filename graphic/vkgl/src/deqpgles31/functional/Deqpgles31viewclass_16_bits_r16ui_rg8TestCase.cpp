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

#define VkglTestCase_032000_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032000_2 "viewclass_16_bits.r16ui_rg8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032000, VkglTestCase_032000_1, VkglTestCase_032000_2);

#define VkglTestCase_032001_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032001_2 "viewclass_16_bits.r16ui_rg8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032001, VkglTestCase_032001_1, VkglTestCase_032001_2);

#define VkglTestCase_032002_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032002_2 ".viewclass_16_bits.r16ui_rg8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032002, VkglTestCase_032002_1, VkglTestCase_032002_2);

#define VkglTestCase_032003_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032003_2 "wclass_16_bits.r16ui_rg8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032003, VkglTestCase_032003_1, VkglTestCase_032003_2);

#define VkglTestCase_032004_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032004_2 "ewclass_16_bits.r16ui_rg8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032004, VkglTestCase_032004_1, VkglTestCase_032004_2);

#define VkglTestCase_032005_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032005_2 "viewclass_16_bits.r16ui_rg8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032005, VkglTestCase_032005_1, VkglTestCase_032005_2);

#define VkglTestCase_032006_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032006_2 "viewclass_16_bits.r16ui_rg8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032006, VkglTestCase_032006_1, VkglTestCase_032006_2);

#define VkglTestCase_032007_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032007_2 ".viewclass_16_bits.r16ui_rg8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032007, VkglTestCase_032007_1, VkglTestCase_032007_2);

#define VkglTestCase_032008_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032008_2 "wclass_16_bits.r16ui_rg8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032008, VkglTestCase_032008_1, VkglTestCase_032008_2);

#define VkglTestCase_032009_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032009_2 "ewclass_16_bits.r16ui_rg8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032009, VkglTestCase_032009_1, VkglTestCase_032009_2);

#define VkglTestCase_032010_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032010_2 ".viewclass_16_bits.r16ui_rg8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032010, VkglTestCase_032010_1, VkglTestCase_032010_2);

#define VkglTestCase_032011_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032011_2 ".viewclass_16_bits.r16ui_rg8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032011, VkglTestCase_032011_1, VkglTestCase_032011_2);

#define VkglTestCase_032012_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032012_2 "d.viewclass_16_bits.r16ui_rg8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032012, VkglTestCase_032012_1, VkglTestCase_032012_2);

#define VkglTestCase_032013_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032013_2 "ewclass_16_bits.r16ui_rg8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032013, VkglTestCase_032013_1, VkglTestCase_032013_2);

#define VkglTestCase_032014_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032014_2 "iewclass_16_bits.r16ui_rg8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032014, VkglTestCase_032014_1, VkglTestCase_032014_2);

#define VkglTestCase_032015_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032015_2 "wclass_16_bits.r16ui_rg8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032015, VkglTestCase_032015_1, VkglTestCase_032015_2);

#define VkglTestCase_032016_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032016_2 "wclass_16_bits.r16ui_rg8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032016, VkglTestCase_032016_1, VkglTestCase_032016_2);

#define VkglTestCase_032017_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032017_2 "ewclass_16_bits.r16ui_rg8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032017, VkglTestCase_032017_1, VkglTestCase_032017_2);

#define VkglTestCase_032018_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032018_2 "ass_16_bits.r16ui_rg8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032018, VkglTestCase_032018_1, VkglTestCase_032018_2);

#define VkglTestCase_032019_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032019_2 "lass_16_bits.r16ui_rg8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032019, VkglTestCase_032019_1, VkglTestCase_032019_2);

#define VkglTestCase_032020_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032020_2 "ewclass_16_bits.r16ui_rg8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032020, VkglTestCase_032020_1, VkglTestCase_032020_2);

#define VkglTestCase_032021_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032021_2 "ewclass_16_bits.r16ui_rg8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032021, VkglTestCase_032021_1, VkglTestCase_032021_2);

#define VkglTestCase_032022_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032022_2 "iewclass_16_bits.r16ui_rg8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032022, VkglTestCase_032022_1, VkglTestCase_032022_2);

#define VkglTestCase_032023_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032023_2 "lass_16_bits.r16ui_rg8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032023, VkglTestCase_032023_1, VkglTestCase_032023_2);

#define VkglTestCase_032024_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032024_2 "wclass_16_bits.r16ui_rg8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032024, VkglTestCase_032024_1, VkglTestCase_032024_2);
