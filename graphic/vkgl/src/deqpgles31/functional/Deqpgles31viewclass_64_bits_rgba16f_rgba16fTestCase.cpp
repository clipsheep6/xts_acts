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

#define VkglTestCase_026004_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026004_2 "wclass_64_bits.rgba16f_rgba16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026004, VkglTestCase_026004_1, VkglTestCase_026004_2);

#define VkglTestCase_026005_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026005_2 "wclass_64_bits.rgba16f_rgba16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026005, VkglTestCase_026005_1, VkglTestCase_026005_2);

#define VkglTestCase_026006_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026006_2 "ewclass_64_bits.rgba16f_rgba16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026006, VkglTestCase_026006_1, VkglTestCase_026006_2);

#define VkglTestCase_026007_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026007_2 "ass_64_bits.rgba16f_rgba16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026007, VkglTestCase_026007_1, VkglTestCase_026007_2);

#define VkglTestCase_026008_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026008_2 "wclass_64_bits.rgba16f_rgba16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026008, VkglTestCase_026008_1, VkglTestCase_026008_2);

#define VkglTestCase_026009_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026009_2 "wclass_64_bits.rgba16f_rgba16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026009, VkglTestCase_026009_1, VkglTestCase_026009_2);

#define VkglTestCase_026010_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026010_2 "ewclass_64_bits.rgba16f_rgba16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026010, VkglTestCase_026010_1, VkglTestCase_026010_2);

#define VkglTestCase_026011_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026011_2 "ass_64_bits.rgba16f_rgba16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026011, VkglTestCase_026011_1, VkglTestCase_026011_2);

#define VkglTestCase_026012_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026012_2 "ewclass_64_bits.rgba16f_rgba16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026012, VkglTestCase_026012_1, VkglTestCase_026012_2);

#define VkglTestCase_026013_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026013_2 "ewclass_64_bits.rgba16f_rgba16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026013, VkglTestCase_026013_1, VkglTestCase_026013_2);

#define VkglTestCase_026014_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026014_2 "iewclass_64_bits.rgba16f_rgba16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026014, VkglTestCase_026014_1, VkglTestCase_026014_2);

#define VkglTestCase_026015_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026015_2 "lass_64_bits.rgba16f_rgba16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026015, VkglTestCase_026015_1, VkglTestCase_026015_2);

#define VkglTestCase_026016_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026016_2 "ass_64_bits.rgba16f_rgba16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026016, VkglTestCase_026016_1, VkglTestCase_026016_2);

#define VkglTestCase_026017_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026017_2 "ass_64_bits.rgba16f_rgba16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026017, VkglTestCase_026017_1, VkglTestCase_026017_2);

#define VkglTestCase_026018_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026018_2 "lass_64_bits.rgba16f_rgba16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026018, VkglTestCase_026018_1, VkglTestCase_026018_2);

#define VkglTestCase_026019_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026019_2 "_64_bits.rgba16f_rgba16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026019, VkglTestCase_026019_1, VkglTestCase_026019_2);
