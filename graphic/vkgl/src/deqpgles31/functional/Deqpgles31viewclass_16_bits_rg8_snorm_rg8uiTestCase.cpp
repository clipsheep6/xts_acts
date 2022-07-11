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

#define VkglTestCase_032686_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032686_2 "wclass_16_bits.rg8_snorm_rg8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032686, VkglTestCase_032686_1, VkglTestCase_032686_2);

#define VkglTestCase_032687_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032687_2 "wclass_16_bits.rg8_snorm_rg8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032687, VkglTestCase_032687_1, VkglTestCase_032687_2);

#define VkglTestCase_032688_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032688_2 "ewclass_16_bits.rg8_snorm_rg8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032688, VkglTestCase_032688_1, VkglTestCase_032688_2);

#define VkglTestCase_032689_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032689_2 "ass_16_bits.rg8_snorm_rg8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032689, VkglTestCase_032689_1, VkglTestCase_032689_2);

#define VkglTestCase_032690_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032690_2 "lass_16_bits.rg8_snorm_rg8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032690, VkglTestCase_032690_1, VkglTestCase_032690_2);

#define VkglTestCase_032691_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032691_2 "wclass_16_bits.rg8_snorm_rg8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032691, VkglTestCase_032691_1, VkglTestCase_032691_2);

#define VkglTestCase_032692_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032692_2 "wclass_16_bits.rg8_snorm_rg8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032692, VkglTestCase_032692_1, VkglTestCase_032692_2);

#define VkglTestCase_032693_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032693_2 "ewclass_16_bits.rg8_snorm_rg8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032693, VkglTestCase_032693_1, VkglTestCase_032693_2);

#define VkglTestCase_032694_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032694_2 "ass_16_bits.rg8_snorm_rg8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032694, VkglTestCase_032694_1, VkglTestCase_032694_2);

#define VkglTestCase_032695_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032695_2 "lass_16_bits.rg8_snorm_rg8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032695, VkglTestCase_032695_1, VkglTestCase_032695_2);

#define VkglTestCase_032696_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032696_2 "ewclass_16_bits.rg8_snorm_rg8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032696, VkglTestCase_032696_1, VkglTestCase_032696_2);

#define VkglTestCase_032697_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032697_2 "ewclass_16_bits.rg8_snorm_rg8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032697, VkglTestCase_032697_1, VkglTestCase_032697_2);

#define VkglTestCase_032698_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032698_2 "iewclass_16_bits.rg8_snorm_rg8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032698, VkglTestCase_032698_1, VkglTestCase_032698_2);

#define VkglTestCase_032699_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032699_2 "lass_16_bits.rg8_snorm_rg8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032699, VkglTestCase_032699_1, VkglTestCase_032699_2);

#define VkglTestCase_032700_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032700_2 "class_16_bits.rg8_snorm_rg8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032700, VkglTestCase_032700_1, VkglTestCase_032700_2);

#define VkglTestCase_032701_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032701_2 "ass_16_bits.rg8_snorm_rg8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032701, VkglTestCase_032701_1, VkglTestCase_032701_2);

#define VkglTestCase_032702_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032702_2 "ass_16_bits.rg8_snorm_rg8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032702, VkglTestCase_032702_1, VkglTestCase_032702_2);

#define VkglTestCase_032703_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032703_2 "lass_16_bits.rg8_snorm_rg8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032703, VkglTestCase_032703_1, VkglTestCase_032703_2);

#define VkglTestCase_032704_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_032704_2 "_16_bits.rg8_snorm_rg8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032704, VkglTestCase_032704_1, VkglTestCase_032704_2);

#define VkglTestCase_032705_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_032705_2 "s_16_bits.rg8_snorm_rg8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032705, VkglTestCase_032705_1, VkglTestCase_032705_2);
