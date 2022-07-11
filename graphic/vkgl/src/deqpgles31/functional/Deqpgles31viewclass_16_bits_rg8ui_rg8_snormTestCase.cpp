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

#define VkglTestCase_032570_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032570_2 "wclass_16_bits.rg8ui_rg8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032570, VkglTestCase_032570_1, VkglTestCase_032570_2);

#define VkglTestCase_032571_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032571_2 "wclass_16_bits.rg8ui_rg8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032571, VkglTestCase_032571_1, VkglTestCase_032571_2);

#define VkglTestCase_032572_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032572_2 "ewclass_16_bits.rg8ui_rg8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032572, VkglTestCase_032572_1, VkglTestCase_032572_2);

#define VkglTestCase_032573_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032573_2 "ass_16_bits.rg8ui_rg8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032573, VkglTestCase_032573_1, VkglTestCase_032573_2);

#define VkglTestCase_032574_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032574_2 "wclass_16_bits.rg8ui_rg8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032574, VkglTestCase_032574_1, VkglTestCase_032574_2);

#define VkglTestCase_032575_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032575_2 "wclass_16_bits.rg8ui_rg8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032575, VkglTestCase_032575_1, VkglTestCase_032575_2);

#define VkglTestCase_032576_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032576_2 "ewclass_16_bits.rg8ui_rg8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032576, VkglTestCase_032576_1, VkglTestCase_032576_2);

#define VkglTestCase_032577_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032577_2 "ass_16_bits.rg8ui_rg8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032577, VkglTestCase_032577_1, VkglTestCase_032577_2);

#define VkglTestCase_032578_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032578_2 "ewclass_16_bits.rg8ui_rg8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032578, VkglTestCase_032578_1, VkglTestCase_032578_2);

#define VkglTestCase_032579_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032579_2 "ewclass_16_bits.rg8ui_rg8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032579, VkglTestCase_032579_1, VkglTestCase_032579_2);

#define VkglTestCase_032580_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032580_2 "iewclass_16_bits.rg8ui_rg8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032580, VkglTestCase_032580_1, VkglTestCase_032580_2);

#define VkglTestCase_032581_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032581_2 "lass_16_bits.rg8ui_rg8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032581, VkglTestCase_032581_1, VkglTestCase_032581_2);

#define VkglTestCase_032582_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032582_2 "ass_16_bits.rg8ui_rg8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032582, VkglTestCase_032582_1, VkglTestCase_032582_2);

#define VkglTestCase_032583_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032583_2 "ass_16_bits.rg8ui_rg8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032583, VkglTestCase_032583_1, VkglTestCase_032583_2);

#define VkglTestCase_032584_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032584_2 "lass_16_bits.rg8ui_rg8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032584, VkglTestCase_032584_1, VkglTestCase_032584_2);

#define VkglTestCase_032585_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_032585_2 "_16_bits.rg8ui_rg8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032585, VkglTestCase_032585_1, VkglTestCase_032585_2);

#define VkglTestCase_032586_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032586_2 "lass_16_bits.rg8ui_rg8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032586, VkglTestCase_032586_1, VkglTestCase_032586_2);

#define VkglTestCase_032587_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032587_2 "lass_16_bits.rg8ui_rg8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032587, VkglTestCase_032587_1, VkglTestCase_032587_2);

#define VkglTestCase_032588_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032588_2 "class_16_bits.rg8ui_rg8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032588, VkglTestCase_032588_1, VkglTestCase_032588_2);

#define VkglTestCase_032589_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_032589_2 "s_16_bits.rg8ui_rg8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032589, VkglTestCase_032589_1, VkglTestCase_032589_2);
