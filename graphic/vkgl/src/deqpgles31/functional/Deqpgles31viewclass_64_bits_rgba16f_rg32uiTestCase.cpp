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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025984_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025984_2 "wclass_64_bits.rgba16f_rg32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025984, VkglTestCase_025984_1, VkglTestCase_025984_2);

#define VkglTestCase_025985_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025985_2 "wclass_64_bits.rgba16f_rg32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025985, VkglTestCase_025985_1, VkglTestCase_025985_2);

#define VkglTestCase_025986_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025986_2 "ewclass_64_bits.rgba16f_rg32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025986, VkglTestCase_025986_1, VkglTestCase_025986_2);

#define VkglTestCase_025987_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025987_2 "ass_64_bits.rgba16f_rg32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025987, VkglTestCase_025987_1, VkglTestCase_025987_2);

#define VkglTestCase_025988_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025988_2 "class_64_bits.rgba16f_rg32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025988, VkglTestCase_025988_1, VkglTestCase_025988_2);

#define VkglTestCase_025989_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025989_2 "wclass_64_bits.rgba16f_rg32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025989, VkglTestCase_025989_1, VkglTestCase_025989_2);

#define VkglTestCase_025990_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025990_2 "wclass_64_bits.rgba16f_rg32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025990, VkglTestCase_025990_1, VkglTestCase_025990_2);

#define VkglTestCase_025991_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025991_2 "ewclass_64_bits.rgba16f_rg32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025991, VkglTestCase_025991_1, VkglTestCase_025991_2);

#define VkglTestCase_025992_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025992_2 "ass_64_bits.rgba16f_rg32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025992, VkglTestCase_025992_1, VkglTestCase_025992_2);

#define VkglTestCase_025993_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025993_2 "class_64_bits.rgba16f_rg32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025993, VkglTestCase_025993_1, VkglTestCase_025993_2);

#define VkglTestCase_025994_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025994_2 "ewclass_64_bits.rgba16f_rg32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025994, VkglTestCase_025994_1, VkglTestCase_025994_2);

#define VkglTestCase_025995_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025995_2 "ewclass_64_bits.rgba16f_rg32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025995, VkglTestCase_025995_1, VkglTestCase_025995_2);

#define VkglTestCase_025996_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025996_2 "iewclass_64_bits.rgba16f_rg32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025996, VkglTestCase_025996_1, VkglTestCase_025996_2);

#define VkglTestCase_025997_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025997_2 "lass_64_bits.rgba16f_rg32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025997, VkglTestCase_025997_1, VkglTestCase_025997_2);

#define VkglTestCase_025998_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025998_2 "wclass_64_bits.rgba16f_rg32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025998, VkglTestCase_025998_1, VkglTestCase_025998_2);

#define VkglTestCase_025999_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025999_2 "ass_64_bits.rgba16f_rg32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025999, VkglTestCase_025999_1, VkglTestCase_025999_2);

#define VkglTestCase_026000_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026000_2 "ass_64_bits.rgba16f_rg32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_026000, VkglTestCase_026000_1, VkglTestCase_026000_2);

#define VkglTestCase_026001_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026001_2 "lass_64_bits.rgba16f_rg32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_026001, VkglTestCase_026001_1, VkglTestCase_026001_2);

#define VkglTestCase_026002_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026002_2 "_64_bits.rgba16f_rg32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_026002, VkglTestCase_026002_1, VkglTestCase_026002_2);

#define VkglTestCase_026003_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026003_2 "ss_64_bits.rgba16f_rg32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_026003, VkglTestCase_026003_1, VkglTestCase_026003_2);
