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
#include "../ActsDeqpgles310034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033007_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_033007_2 "iewclass_8_bits.r8_snorm_r8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033007, VkglTestCase_033007_1, VkglTestCase_033007_2);

#define VkglTestCase_033008_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_033008_2 "iewclass_8_bits.r8_snorm_r8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033008, VkglTestCase_033008_1, VkglTestCase_033008_2);

#define VkglTestCase_033009_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_033009_2 "viewclass_8_bits.r8_snorm_r8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033009, VkglTestCase_033009_1, VkglTestCase_033009_2);

#define VkglTestCase_033010_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033010_2 "class_8_bits.r8_snorm_r8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033010, VkglTestCase_033010_1, VkglTestCase_033010_2);

#define VkglTestCase_033011_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_033011_2 "ewclass_8_bits.r8_snorm_r8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033011, VkglTestCase_033011_1, VkglTestCase_033011_2);

#define VkglTestCase_033012_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_033012_2 "iewclass_8_bits.r8_snorm_r8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033012, VkglTestCase_033012_1, VkglTestCase_033012_2);

#define VkglTestCase_033013_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_033013_2 "iewclass_8_bits.r8_snorm_r8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033013, VkglTestCase_033013_1, VkglTestCase_033013_2);

#define VkglTestCase_033014_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_033014_2 "viewclass_8_bits.r8_snorm_r8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033014, VkglTestCase_033014_1, VkglTestCase_033014_2);

#define VkglTestCase_033015_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033015_2 "class_8_bits.r8_snorm_r8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033015, VkglTestCase_033015_1, VkglTestCase_033015_2);

#define VkglTestCase_033016_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_033016_2 "ewclass_8_bits.r8_snorm_r8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033016, VkglTestCase_033016_1, VkglTestCase_033016_2);

#define VkglTestCase_033017_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_033017_2 "viewclass_8_bits.r8_snorm_r8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033017, VkglTestCase_033017_1, VkglTestCase_033017_2);

#define VkglTestCase_033018_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_033018_2 "viewclass_8_bits.r8_snorm_r8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033018, VkglTestCase_033018_1, VkglTestCase_033018_2);

#define VkglTestCase_033019_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_033019_2 ".viewclass_8_bits.r8_snorm_r8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033019, VkglTestCase_033019_1, VkglTestCase_033019_2);

#define VkglTestCase_033020_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_033020_2 "wclass_8_bits.r8_snorm_r8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033020, VkglTestCase_033020_1, VkglTestCase_033020_2);

#define VkglTestCase_033021_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_033021_2 "iewclass_8_bits.r8_snorm_r8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033021, VkglTestCase_033021_1, VkglTestCase_033021_2);

#define VkglTestCase_033022_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033022_2 "class_8_bits.r8_snorm_r8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033022, VkglTestCase_033022_1, VkglTestCase_033022_2);

#define VkglTestCase_033023_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033023_2 "class_8_bits.r8_snorm_r8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033023, VkglTestCase_033023_1, VkglTestCase_033023_2);

#define VkglTestCase_033024_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_033024_2 "wclass_8_bits.r8_snorm_r8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033024, VkglTestCase_033024_1, VkglTestCase_033024_2);

#define VkglTestCase_033025_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_033025_2 "ss_8_bits.r8_snorm_r8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033025, VkglTestCase_033025_1, VkglTestCase_033025_2);

#define VkglTestCase_033026_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_033026_2 "lass_8_bits.r8_snorm_r8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033026, VkglTestCase_033026_1, VkglTestCase_033026_2);
