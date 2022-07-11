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
#include "../ActsDeqpgles310031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030095_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030095_2 "wclass_32_bits.rgb10_a2_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030095, VkglTestCase_030095_1, VkglTestCase_030095_2);

#define VkglTestCase_030096_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030096_2 "wclass_32_bits.rgb10_a2_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030096, VkglTestCase_030096_1, VkglTestCase_030096_2);

#define VkglTestCase_030097_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030097_2 "ewclass_32_bits.rgb10_a2_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030097, VkglTestCase_030097_1, VkglTestCase_030097_2);

#define VkglTestCase_030098_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030098_2 "ass_32_bits.rgb10_a2_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030098, VkglTestCase_030098_1, VkglTestCase_030098_2);

#define VkglTestCase_030099_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030099_2 "lass_32_bits.rgb10_a2_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030099, VkglTestCase_030099_1, VkglTestCase_030099_2);

#define VkglTestCase_030100_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030100_2 "wclass_32_bits.rgb10_a2_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030100, VkglTestCase_030100_1, VkglTestCase_030100_2);

#define VkglTestCase_030101_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030101_2 "wclass_32_bits.rgb10_a2_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030101, VkglTestCase_030101_1, VkglTestCase_030101_2);

#define VkglTestCase_030102_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030102_2 "ewclass_32_bits.rgb10_a2_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030102, VkglTestCase_030102_1, VkglTestCase_030102_2);

#define VkglTestCase_030103_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030103_2 "ass_32_bits.rgb10_a2_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030103, VkglTestCase_030103_1, VkglTestCase_030103_2);

#define VkglTestCase_030104_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030104_2 "lass_32_bits.rgb10_a2_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030104, VkglTestCase_030104_1, VkglTestCase_030104_2);

#define VkglTestCase_030105_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030105_2 "ewclass_32_bits.rgb10_a2_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030105, VkglTestCase_030105_1, VkglTestCase_030105_2);

#define VkglTestCase_030106_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030106_2 "ewclass_32_bits.rgb10_a2_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030106, VkglTestCase_030106_1, VkglTestCase_030106_2);

#define VkglTestCase_030107_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030107_2 "iewclass_32_bits.rgb10_a2_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030107, VkglTestCase_030107_1, VkglTestCase_030107_2);

#define VkglTestCase_030108_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030108_2 "lass_32_bits.rgb10_a2_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030108, VkglTestCase_030108_1, VkglTestCase_030108_2);

#define VkglTestCase_030109_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030109_2 "class_32_bits.rgb10_a2_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030109, VkglTestCase_030109_1, VkglTestCase_030109_2);

#define VkglTestCase_030110_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030110_2 "ass_32_bits.rgb10_a2_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030110, VkglTestCase_030110_1, VkglTestCase_030110_2);

#define VkglTestCase_030111_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030111_2 "ass_32_bits.rgb10_a2_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030111, VkglTestCase_030111_1, VkglTestCase_030111_2);

#define VkglTestCase_030112_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030112_2 "lass_32_bits.rgb10_a2_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030112, VkglTestCase_030112_1, VkglTestCase_030112_2);

#define VkglTestCase_030113_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030113_2 "_32_bits.rgb10_a2_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030113, VkglTestCase_030113_1, VkglTestCase_030113_2);

#define VkglTestCase_030114_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030114_2 "s_32_bits.rgb10_a2_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030114, VkglTestCase_030114_1, VkglTestCase_030114_2);

#define VkglTestCase_030115_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030115_2 "lass_32_bits.rgb10_a2_rg16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030115, VkglTestCase_030115_1, VkglTestCase_030115_2);

#define VkglTestCase_030116_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030116_2 "lass_32_bits.rgb10_a2_rg16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030116, VkglTestCase_030116_1, VkglTestCase_030116_2);

#define VkglTestCase_030117_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030117_2 "class_32_bits.rgb10_a2_rg16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030117, VkglTestCase_030117_1, VkglTestCase_030117_2);

#define VkglTestCase_030118_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030118_2 "s_32_bits.rgb10_a2_rg16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030118, VkglTestCase_030118_1, VkglTestCase_030118_2);

#define VkglTestCase_030119_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030119_2 "ass_32_bits.rgb10_a2_rg16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030119, VkglTestCase_030119_1, VkglTestCase_030119_2);
