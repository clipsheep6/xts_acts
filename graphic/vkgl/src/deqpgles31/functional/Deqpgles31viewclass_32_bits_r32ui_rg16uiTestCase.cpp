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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027181_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027181_2 "ewclass_32_bits.r32ui_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027181, VkglTestCase_027181_1, VkglTestCase_027181_2);

#define VkglTestCase_027182_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027182_2 "ewclass_32_bits.r32ui_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027182, VkglTestCase_027182_1, VkglTestCase_027182_2);

#define VkglTestCase_027183_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027183_2 "iewclass_32_bits.r32ui_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027183, VkglTestCase_027183_1, VkglTestCase_027183_2);

#define VkglTestCase_027184_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027184_2 "lass_32_bits.r32ui_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027184, VkglTestCase_027184_1, VkglTestCase_027184_2);

#define VkglTestCase_027185_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027185_2 "wclass_32_bits.r32ui_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027185, VkglTestCase_027185_1, VkglTestCase_027185_2);

#define VkglTestCase_027186_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027186_2 "ewclass_32_bits.r32ui_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027186, VkglTestCase_027186_1, VkglTestCase_027186_2);

#define VkglTestCase_027187_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027187_2 "ewclass_32_bits.r32ui_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027187, VkglTestCase_027187_1, VkglTestCase_027187_2);

#define VkglTestCase_027188_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027188_2 "iewclass_32_bits.r32ui_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027188, VkglTestCase_027188_1, VkglTestCase_027188_2);

#define VkglTestCase_027189_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027189_2 "lass_32_bits.r32ui_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027189, VkglTestCase_027189_1, VkglTestCase_027189_2);

#define VkglTestCase_027190_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027190_2 "wclass_32_bits.r32ui_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027190, VkglTestCase_027190_1, VkglTestCase_027190_2);

#define VkglTestCase_027191_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027191_2 "iewclass_32_bits.r32ui_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027191, VkglTestCase_027191_1, VkglTestCase_027191_2);

#define VkglTestCase_027192_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027192_2 "iewclass_32_bits.r32ui_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027192, VkglTestCase_027192_1, VkglTestCase_027192_2);

#define VkglTestCase_027193_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027193_2 "viewclass_32_bits.r32ui_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027193, VkglTestCase_027193_1, VkglTestCase_027193_2);

#define VkglTestCase_027194_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027194_2 "class_32_bits.r32ui_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027194, VkglTestCase_027194_1, VkglTestCase_027194_2);

#define VkglTestCase_027195_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027195_2 "ewclass_32_bits.r32ui_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027195, VkglTestCase_027195_1, VkglTestCase_027195_2);

#define VkglTestCase_027196_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027196_2 "lass_32_bits.r32ui_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027196, VkglTestCase_027196_1, VkglTestCase_027196_2);

#define VkglTestCase_027197_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027197_2 "lass_32_bits.r32ui_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027197, VkglTestCase_027197_1, VkglTestCase_027197_2);

#define VkglTestCase_027198_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027198_2 "class_32_bits.r32ui_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027198, VkglTestCase_027198_1, VkglTestCase_027198_2);

#define VkglTestCase_027199_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027199_2 "s_32_bits.r32ui_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027199, VkglTestCase_027199_1, VkglTestCase_027199_2);

#define VkglTestCase_027200_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027200_2 "ass_32_bits.r32ui_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027200, VkglTestCase_027200_1, VkglTestCase_027200_2);

#define VkglTestCase_027201_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027201_2 "wclass_32_bits.r32ui_rg16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027201, VkglTestCase_027201_1, VkglTestCase_027201_2);

#define VkglTestCase_027202_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027202_2 "wclass_32_bits.r32ui_rg16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027202, VkglTestCase_027202_1, VkglTestCase_027202_2);

#define VkglTestCase_027203_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027203_2 "ewclass_32_bits.r32ui_rg16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027203, VkglTestCase_027203_1, VkglTestCase_027203_2);

#define VkglTestCase_027204_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027204_2 "ass_32_bits.r32ui_rg16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027204, VkglTestCase_027204_1, VkglTestCase_027204_2);

#define VkglTestCase_027205_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027205_2 "lass_32_bits.r32ui_rg16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027205, VkglTestCase_027205_1, VkglTestCase_027205_2);
