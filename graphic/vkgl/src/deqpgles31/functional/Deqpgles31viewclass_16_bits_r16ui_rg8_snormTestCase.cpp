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

#define VkglTestCase_032075_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032075_2 "wclass_16_bits.r16ui_rg8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032075, VkglTestCase_032075_1, VkglTestCase_032075_2);

#define VkglTestCase_032076_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032076_2 "wclass_16_bits.r16ui_rg8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032076, VkglTestCase_032076_1, VkglTestCase_032076_2);

#define VkglTestCase_032077_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032077_2 "ewclass_16_bits.r16ui_rg8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032077, VkglTestCase_032077_1, VkglTestCase_032077_2);

#define VkglTestCase_032078_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032078_2 "ass_16_bits.r16ui_rg8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032078, VkglTestCase_032078_1, VkglTestCase_032078_2);

#define VkglTestCase_032079_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032079_2 "wclass_16_bits.r16ui_rg8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032079, VkglTestCase_032079_1, VkglTestCase_032079_2);

#define VkglTestCase_032080_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032080_2 "wclass_16_bits.r16ui_rg8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032080, VkglTestCase_032080_1, VkglTestCase_032080_2);

#define VkglTestCase_032081_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032081_2 "ewclass_16_bits.r16ui_rg8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032081, VkglTestCase_032081_1, VkglTestCase_032081_2);

#define VkglTestCase_032082_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032082_2 "ass_16_bits.r16ui_rg8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032082, VkglTestCase_032082_1, VkglTestCase_032082_2);

#define VkglTestCase_032083_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032083_2 "ewclass_16_bits.r16ui_rg8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032083, VkglTestCase_032083_1, VkglTestCase_032083_2);

#define VkglTestCase_032084_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032084_2 "ewclass_16_bits.r16ui_rg8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032084, VkglTestCase_032084_1, VkglTestCase_032084_2);

#define VkglTestCase_032085_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032085_2 "iewclass_16_bits.r16ui_rg8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032085, VkglTestCase_032085_1, VkglTestCase_032085_2);

#define VkglTestCase_032086_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032086_2 "lass_16_bits.r16ui_rg8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032086, VkglTestCase_032086_1, VkglTestCase_032086_2);

#define VkglTestCase_032087_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032087_2 "ass_16_bits.r16ui_rg8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032087, VkglTestCase_032087_1, VkglTestCase_032087_2);

#define VkglTestCase_032088_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032088_2 "ass_16_bits.r16ui_rg8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032088, VkglTestCase_032088_1, VkglTestCase_032088_2);

#define VkglTestCase_032089_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032089_2 "lass_16_bits.r16ui_rg8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032089, VkglTestCase_032089_1, VkglTestCase_032089_2);

#define VkglTestCase_032090_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_032090_2 "_16_bits.r16ui_rg8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032090, VkglTestCase_032090_1, VkglTestCase_032090_2);

#define VkglTestCase_032091_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032091_2 "lass_16_bits.r16ui_rg8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032091, VkglTestCase_032091_1, VkglTestCase_032091_2);

#define VkglTestCase_032092_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032092_2 "lass_16_bits.r16ui_rg8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032092, VkglTestCase_032092_1, VkglTestCase_032092_2);

#define VkglTestCase_032093_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032093_2 "class_16_bits.r16ui_rg8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032093, VkglTestCase_032093_1, VkglTestCase_032093_2);

#define VkglTestCase_032094_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_032094_2 "s_16_bits.r16ui_rg8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032094, VkglTestCase_032094_1, VkglTestCase_032094_2);
