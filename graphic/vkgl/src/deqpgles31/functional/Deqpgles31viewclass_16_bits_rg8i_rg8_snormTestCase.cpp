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

#define VkglTestCase_032405_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032405_2 "wclass_16_bits.rg8i_rg8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032405, VkglTestCase_032405_1, VkglTestCase_032405_2);

#define VkglTestCase_032406_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032406_2 "wclass_16_bits.rg8i_rg8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032406, VkglTestCase_032406_1, VkglTestCase_032406_2);

#define VkglTestCase_032407_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032407_2 "ewclass_16_bits.rg8i_rg8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032407, VkglTestCase_032407_1, VkglTestCase_032407_2);

#define VkglTestCase_032408_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032408_2 "ass_16_bits.rg8i_rg8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032408, VkglTestCase_032408_1, VkglTestCase_032408_2);

#define VkglTestCase_032409_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032409_2 "wclass_16_bits.rg8i_rg8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032409, VkglTestCase_032409_1, VkglTestCase_032409_2);

#define VkglTestCase_032410_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032410_2 "wclass_16_bits.rg8i_rg8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032410, VkglTestCase_032410_1, VkglTestCase_032410_2);

#define VkglTestCase_032411_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032411_2 "ewclass_16_bits.rg8i_rg8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032411, VkglTestCase_032411_1, VkglTestCase_032411_2);

#define VkglTestCase_032412_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032412_2 "ass_16_bits.rg8i_rg8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032412, VkglTestCase_032412_1, VkglTestCase_032412_2);

#define VkglTestCase_032413_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032413_2 "ewclass_16_bits.rg8i_rg8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032413, VkglTestCase_032413_1, VkglTestCase_032413_2);

#define VkglTestCase_032414_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032414_2 "ewclass_16_bits.rg8i_rg8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032414, VkglTestCase_032414_1, VkglTestCase_032414_2);

#define VkglTestCase_032415_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032415_2 "iewclass_16_bits.rg8i_rg8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032415, VkglTestCase_032415_1, VkglTestCase_032415_2);

#define VkglTestCase_032416_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032416_2 "lass_16_bits.rg8i_rg8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032416, VkglTestCase_032416_1, VkglTestCase_032416_2);

#define VkglTestCase_032417_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032417_2 "ass_16_bits.rg8i_rg8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032417, VkglTestCase_032417_1, VkglTestCase_032417_2);

#define VkglTestCase_032418_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032418_2 "ass_16_bits.rg8i_rg8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032418, VkglTestCase_032418_1, VkglTestCase_032418_2);

#define VkglTestCase_032419_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032419_2 "lass_16_bits.rg8i_rg8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032419, VkglTestCase_032419_1, VkglTestCase_032419_2);

#define VkglTestCase_032420_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_032420_2 "_16_bits.rg8i_rg8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032420, VkglTestCase_032420_1, VkglTestCase_032420_2);

#define VkglTestCase_032421_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032421_2 "class_16_bits.rg8i_rg8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032421, VkglTestCase_032421_1, VkglTestCase_032421_2);

#define VkglTestCase_032422_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032422_2 "class_16_bits.rg8i_rg8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032422, VkglTestCase_032422_1, VkglTestCase_032422_2);

#define VkglTestCase_032423_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032423_2 "wclass_16_bits.rg8i_rg8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032423, VkglTestCase_032423_1, VkglTestCase_032423_2);

#define VkglTestCase_032424_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032424_2 "ss_16_bits.rg8i_rg8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032424, VkglTestCase_032424_1, VkglTestCase_032424_2);
