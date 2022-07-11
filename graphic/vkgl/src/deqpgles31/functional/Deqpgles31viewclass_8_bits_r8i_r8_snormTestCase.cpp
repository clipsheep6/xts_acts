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

#define VkglTestCase_032892_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032892_2 "iewclass_8_bits.r8i_r8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032892, VkglTestCase_032892_1, VkglTestCase_032892_2);

#define VkglTestCase_032893_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032893_2 "iewclass_8_bits.r8i_r8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032893, VkglTestCase_032893_1, VkglTestCase_032893_2);

#define VkglTestCase_032894_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032894_2 "viewclass_8_bits.r8i_r8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032894, VkglTestCase_032894_1, VkglTestCase_032894_2);

#define VkglTestCase_032895_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032895_2 "class_8_bits.r8i_r8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032895, VkglTestCase_032895_1, VkglTestCase_032895_2);

#define VkglTestCase_032896_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032896_2 "iewclass_8_bits.r8i_r8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032896, VkglTestCase_032896_1, VkglTestCase_032896_2);

#define VkglTestCase_032897_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032897_2 "iewclass_8_bits.r8i_r8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032897, VkglTestCase_032897_1, VkglTestCase_032897_2);

#define VkglTestCase_032898_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032898_2 "viewclass_8_bits.r8i_r8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032898, VkglTestCase_032898_1, VkglTestCase_032898_2);

#define VkglTestCase_032899_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032899_2 "class_8_bits.r8i_r8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032899, VkglTestCase_032899_1, VkglTestCase_032899_2);

#define VkglTestCase_032900_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032900_2 "viewclass_8_bits.r8i_r8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032900, VkglTestCase_032900_1, VkglTestCase_032900_2);

#define VkglTestCase_032901_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032901_2 "viewclass_8_bits.r8i_r8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032901, VkglTestCase_032901_1, VkglTestCase_032901_2);

#define VkglTestCase_032902_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032902_2 ".viewclass_8_bits.r8i_r8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032902, VkglTestCase_032902_1, VkglTestCase_032902_2);

#define VkglTestCase_032903_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032903_2 "wclass_8_bits.r8i_r8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032903, VkglTestCase_032903_1, VkglTestCase_032903_2);

#define VkglTestCase_032904_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032904_2 "class_8_bits.r8i_r8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032904, VkglTestCase_032904_1, VkglTestCase_032904_2);

#define VkglTestCase_032905_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032905_2 "class_8_bits.r8i_r8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032905, VkglTestCase_032905_1, VkglTestCase_032905_2);

#define VkglTestCase_032906_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032906_2 "wclass_8_bits.r8i_r8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032906, VkglTestCase_032906_1, VkglTestCase_032906_2);

#define VkglTestCase_032907_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032907_2 "ss_8_bits.r8i_r8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032907, VkglTestCase_032907_1, VkglTestCase_032907_2);

#define VkglTestCase_032908_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032908_2 "wclass_8_bits.r8i_r8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032908, VkglTestCase_032908_1, VkglTestCase_032908_2);

#define VkglTestCase_032909_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032909_2 "wclass_8_bits.r8i_r8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032909, VkglTestCase_032909_1, VkglTestCase_032909_2);

#define VkglTestCase_032910_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032910_2 "ewclass_8_bits.r8i_r8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032910, VkglTestCase_032910_1, VkglTestCase_032910_2);

#define VkglTestCase_032911_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032911_2 "ass_8_bits.r8i_r8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032911, VkglTestCase_032911_1, VkglTestCase_032911_2);
