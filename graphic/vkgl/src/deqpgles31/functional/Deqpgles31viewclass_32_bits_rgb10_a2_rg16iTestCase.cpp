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

#define VkglTestCase_030070_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030070_2 "wclass_32_bits.rgb10_a2_rg16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030070, VkglTestCase_030070_1, VkglTestCase_030070_2);

#define VkglTestCase_030071_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030071_2 "wclass_32_bits.rgb10_a2_rg16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030071, VkglTestCase_030071_1, VkglTestCase_030071_2);

#define VkglTestCase_030072_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030072_2 "ewclass_32_bits.rgb10_a2_rg16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030072, VkglTestCase_030072_1, VkglTestCase_030072_2);

#define VkglTestCase_030073_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030073_2 "ass_32_bits.rgb10_a2_rg16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030073, VkglTestCase_030073_1, VkglTestCase_030073_2);

#define VkglTestCase_030074_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030074_2 "class_32_bits.rgb10_a2_rg16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030074, VkglTestCase_030074_1, VkglTestCase_030074_2);

#define VkglTestCase_030075_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030075_2 "wclass_32_bits.rgb10_a2_rg16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030075, VkglTestCase_030075_1, VkglTestCase_030075_2);

#define VkglTestCase_030076_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030076_2 "wclass_32_bits.rgb10_a2_rg16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030076, VkglTestCase_030076_1, VkglTestCase_030076_2);

#define VkglTestCase_030077_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030077_2 "ewclass_32_bits.rgb10_a2_rg16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030077, VkglTestCase_030077_1, VkglTestCase_030077_2);

#define VkglTestCase_030078_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030078_2 "ass_32_bits.rgb10_a2_rg16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030078, VkglTestCase_030078_1, VkglTestCase_030078_2);

#define VkglTestCase_030079_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030079_2 "class_32_bits.rgb10_a2_rg16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030079, VkglTestCase_030079_1, VkglTestCase_030079_2);

#define VkglTestCase_030080_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030080_2 "ewclass_32_bits.rgb10_a2_rg16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030080, VkglTestCase_030080_1, VkglTestCase_030080_2);

#define VkglTestCase_030081_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030081_2 "ewclass_32_bits.rgb10_a2_rg16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030081, VkglTestCase_030081_1, VkglTestCase_030081_2);

#define VkglTestCase_030082_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030082_2 "iewclass_32_bits.rgb10_a2_rg16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030082, VkglTestCase_030082_1, VkglTestCase_030082_2);

#define VkglTestCase_030083_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030083_2 "lass_32_bits.rgb10_a2_rg16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030083, VkglTestCase_030083_1, VkglTestCase_030083_2);

#define VkglTestCase_030084_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030084_2 "wclass_32_bits.rgb10_a2_rg16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030084, VkglTestCase_030084_1, VkglTestCase_030084_2);

#define VkglTestCase_030085_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030085_2 "ass_32_bits.rgb10_a2_rg16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030085, VkglTestCase_030085_1, VkglTestCase_030085_2);

#define VkglTestCase_030086_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030086_2 "ass_32_bits.rgb10_a2_rg16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030086, VkglTestCase_030086_1, VkglTestCase_030086_2);

#define VkglTestCase_030087_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030087_2 "lass_32_bits.rgb10_a2_rg16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030087, VkglTestCase_030087_1, VkglTestCase_030087_2);

#define VkglTestCase_030088_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030088_2 "_32_bits.rgb10_a2_rg16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030088, VkglTestCase_030088_1, VkglTestCase_030088_2);

#define VkglTestCase_030089_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030089_2 "ss_32_bits.rgb10_a2_rg16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030089, VkglTestCase_030089_1, VkglTestCase_030089_2);

#define VkglTestCase_030090_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030090_2 "class_32_bits.rgb10_a2_rg16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030090, VkglTestCase_030090_1, VkglTestCase_030090_2);

#define VkglTestCase_030091_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030091_2 "class_32_bits.rgb10_a2_rg16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030091, VkglTestCase_030091_1, VkglTestCase_030091_2);

#define VkglTestCase_030092_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030092_2 "wclass_32_bits.rgb10_a2_rg16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030092, VkglTestCase_030092_1, VkglTestCase_030092_2);

#define VkglTestCase_030093_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030093_2 "ss_32_bits.rgb10_a2_rg16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030093, VkglTestCase_030093_1, VkglTestCase_030093_2);

#define VkglTestCase_030094_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030094_2 "ass_32_bits.rgb10_a2_rg16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030094, VkglTestCase_030094_1, VkglTestCase_030094_2);
