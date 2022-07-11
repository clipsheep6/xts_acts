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

#define VkglTestCase_026020_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026020_2 "wclass_64_bits.rgba16f_rgba16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026020, VkglTestCase_026020_1, VkglTestCase_026020_2);

#define VkglTestCase_026021_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026021_2 "wclass_64_bits.rgba16f_rgba16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026021, VkglTestCase_026021_1, VkglTestCase_026021_2);

#define VkglTestCase_026022_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026022_2 "ewclass_64_bits.rgba16f_rgba16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026022, VkglTestCase_026022_1, VkglTestCase_026022_2);

#define VkglTestCase_026023_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026023_2 "ass_64_bits.rgba16f_rgba16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026023, VkglTestCase_026023_1, VkglTestCase_026023_2);

#define VkglTestCase_026024_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026024_2 "lass_64_bits.rgba16f_rgba16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026024, VkglTestCase_026024_1, VkglTestCase_026024_2);

#define VkglTestCase_026025_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026025_2 "wclass_64_bits.rgba16f_rgba16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026025, VkglTestCase_026025_1, VkglTestCase_026025_2);

#define VkglTestCase_026026_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026026_2 "wclass_64_bits.rgba16f_rgba16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026026, VkglTestCase_026026_1, VkglTestCase_026026_2);

#define VkglTestCase_026027_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026027_2 "ewclass_64_bits.rgba16f_rgba16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026027, VkglTestCase_026027_1, VkglTestCase_026027_2);

#define VkglTestCase_026028_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026028_2 "ass_64_bits.rgba16f_rgba16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026028, VkglTestCase_026028_1, VkglTestCase_026028_2);

#define VkglTestCase_026029_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026029_2 "lass_64_bits.rgba16f_rgba16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026029, VkglTestCase_026029_1, VkglTestCase_026029_2);

#define VkglTestCase_026030_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026030_2 "ewclass_64_bits.rgba16f_rgba16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026030, VkglTestCase_026030_1, VkglTestCase_026030_2);

#define VkglTestCase_026031_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026031_2 "ewclass_64_bits.rgba16f_rgba16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026031, VkglTestCase_026031_1, VkglTestCase_026031_2);

#define VkglTestCase_026032_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026032_2 "iewclass_64_bits.rgba16f_rgba16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026032, VkglTestCase_026032_1, VkglTestCase_026032_2);

#define VkglTestCase_026033_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026033_2 "lass_64_bits.rgba16f_rgba16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026033, VkglTestCase_026033_1, VkglTestCase_026033_2);

#define VkglTestCase_026034_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026034_2 "class_64_bits.rgba16f_rgba16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026034, VkglTestCase_026034_1, VkglTestCase_026034_2);

#define VkglTestCase_026035_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026035_2 "ass_64_bits.rgba16f_rgba16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026035, VkglTestCase_026035_1, VkglTestCase_026035_2);

#define VkglTestCase_026036_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026036_2 "ass_64_bits.rgba16f_rgba16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026036, VkglTestCase_026036_1, VkglTestCase_026036_2);

#define VkglTestCase_026037_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026037_2 "lass_64_bits.rgba16f_rgba16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026037, VkglTestCase_026037_1, VkglTestCase_026037_2);

#define VkglTestCase_026038_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026038_2 "_64_bits.rgba16f_rgba16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026038, VkglTestCase_026038_1, VkglTestCase_026038_2);

#define VkglTestCase_026039_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026039_2 "s_64_bits.rgba16f_rgba16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026039, VkglTestCase_026039_1, VkglTestCase_026039_2);
