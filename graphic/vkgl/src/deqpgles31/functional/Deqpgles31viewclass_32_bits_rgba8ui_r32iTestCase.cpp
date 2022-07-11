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
#include "../ActsDeqpgles310030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029068_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029068_2 "ewclass_32_bits.rgba8ui_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029068, VkglTestCase_029068_1, VkglTestCase_029068_2);

#define VkglTestCase_029069_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029069_2 "ewclass_32_bits.rgba8ui_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029069, VkglTestCase_029069_1, VkglTestCase_029069_2);

#define VkglTestCase_029070_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029070_2 "iewclass_32_bits.rgba8ui_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029070, VkglTestCase_029070_1, VkglTestCase_029070_2);

#define VkglTestCase_029071_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029071_2 "lass_32_bits.rgba8ui_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029071, VkglTestCase_029071_1, VkglTestCase_029071_2);

#define VkglTestCase_029072_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029072_2 "wclass_32_bits.rgba8ui_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029072, VkglTestCase_029072_1, VkglTestCase_029072_2);

#define VkglTestCase_029073_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029073_2 "ewclass_32_bits.rgba8ui_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029073, VkglTestCase_029073_1, VkglTestCase_029073_2);

#define VkglTestCase_029074_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029074_2 "ewclass_32_bits.rgba8ui_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029074, VkglTestCase_029074_1, VkglTestCase_029074_2);

#define VkglTestCase_029075_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029075_2 "iewclass_32_bits.rgba8ui_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029075, VkglTestCase_029075_1, VkglTestCase_029075_2);

#define VkglTestCase_029076_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029076_2 "lass_32_bits.rgba8ui_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029076, VkglTestCase_029076_1, VkglTestCase_029076_2);

#define VkglTestCase_029077_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029077_2 "wclass_32_bits.rgba8ui_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029077, VkglTestCase_029077_1, VkglTestCase_029077_2);

#define VkglTestCase_029078_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029078_2 "iewclass_32_bits.rgba8ui_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029078, VkglTestCase_029078_1, VkglTestCase_029078_2);

#define VkglTestCase_029079_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029079_2 "iewclass_32_bits.rgba8ui_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029079, VkglTestCase_029079_1, VkglTestCase_029079_2);

#define VkglTestCase_029080_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_029080_2 "viewclass_32_bits.rgba8ui_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029080, VkglTestCase_029080_1, VkglTestCase_029080_2);

#define VkglTestCase_029081_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029081_2 "class_32_bits.rgba8ui_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029081, VkglTestCase_029081_1, VkglTestCase_029081_2);

#define VkglTestCase_029082_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029082_2 "ewclass_32_bits.rgba8ui_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029082, VkglTestCase_029082_1, VkglTestCase_029082_2);

#define VkglTestCase_029083_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029083_2 "lass_32_bits.rgba8ui_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029083, VkglTestCase_029083_1, VkglTestCase_029083_2);

#define VkglTestCase_029084_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029084_2 "lass_32_bits.rgba8ui_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029084, VkglTestCase_029084_1, VkglTestCase_029084_2);

#define VkglTestCase_029085_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029085_2 "class_32_bits.rgba8ui_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029085, VkglTestCase_029085_1, VkglTestCase_029085_2);

#define VkglTestCase_029086_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029086_2 "s_32_bits.rgba8ui_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029086, VkglTestCase_029086_1, VkglTestCase_029086_2);

#define VkglTestCase_029087_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029087_2 "ass_32_bits.rgba8ui_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029087, VkglTestCase_029087_1, VkglTestCase_029087_2);

#define VkglTestCase_029088_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029088_2 "wclass_32_bits.rgba8ui_r32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029088, VkglTestCase_029088_1, VkglTestCase_029088_2);

#define VkglTestCase_029089_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029089_2 "wclass_32_bits.rgba8ui_r32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029089, VkglTestCase_029089_1, VkglTestCase_029089_2);

#define VkglTestCase_029090_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029090_2 "ewclass_32_bits.rgba8ui_r32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029090, VkglTestCase_029090_1, VkglTestCase_029090_2);

#define VkglTestCase_029091_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029091_2 "ass_32_bits.rgba8ui_r32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029091, VkglTestCase_029091_1, VkglTestCase_029091_2);

#define VkglTestCase_029092_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029092_2 "lass_32_bits.rgba8ui_r32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029092, VkglTestCase_029092_1, VkglTestCase_029092_2);
