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

#define VkglTestCase_027046_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027046_2 "ewclass_32_bits.r32i_rgb9_e5.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027046, VkglTestCase_027046_1, VkglTestCase_027046_2);

#define VkglTestCase_027047_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027047_2 "ewclass_32_bits.r32i_rgb9_e5.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027047, VkglTestCase_027047_1, VkglTestCase_027047_2);

#define VkglTestCase_027048_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027048_2 "iewclass_32_bits.r32i_rgb9_e5.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027048, VkglTestCase_027048_1, VkglTestCase_027048_2);

#define VkglTestCase_027049_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027049_2 "lass_32_bits.r32i_rgb9_e5.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027049, VkglTestCase_027049_1, VkglTestCase_027049_2);

#define VkglTestCase_027050_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027050_2 "ewclass_32_bits.r32i_rgb9_e5.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027050, VkglTestCase_027050_1, VkglTestCase_027050_2);

#define VkglTestCase_027051_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027051_2 "ewclass_32_bits.r32i_rgb9_e5.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027051, VkglTestCase_027051_1, VkglTestCase_027051_2);

#define VkglTestCase_027052_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027052_2 "iewclass_32_bits.r32i_rgb9_e5.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027052, VkglTestCase_027052_1, VkglTestCase_027052_2);

#define VkglTestCase_027053_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027053_2 "lass_32_bits.r32i_rgb9_e5.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027053, VkglTestCase_027053_1, VkglTestCase_027053_2);

#define VkglTestCase_027054_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027054_2 "iewclass_32_bits.r32i_rgb9_e5.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027054, VkglTestCase_027054_1, VkglTestCase_027054_2);

#define VkglTestCase_027055_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027055_2 "iewclass_32_bits.r32i_rgb9_e5.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027055, VkglTestCase_027055_1, VkglTestCase_027055_2);

#define VkglTestCase_027056_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027056_2 "viewclass_32_bits.r32i_rgb9_e5.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027056, VkglTestCase_027056_1, VkglTestCase_027056_2);

#define VkglTestCase_027057_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027057_2 "class_32_bits.r32i_rgb9_e5.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027057, VkglTestCase_027057_1, VkglTestCase_027057_2);

#define VkglTestCase_027058_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027058_2 "lass_32_bits.r32i_rgb9_e5.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027058, VkglTestCase_027058_1, VkglTestCase_027058_2);

#define VkglTestCase_027059_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027059_2 "lass_32_bits.r32i_rgb9_e5.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027059, VkglTestCase_027059_1, VkglTestCase_027059_2);

#define VkglTestCase_027060_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027060_2 "class_32_bits.r32i_rgb9_e5.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027060, VkglTestCase_027060_1, VkglTestCase_027060_2);

#define VkglTestCase_027061_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027061_2 "s_32_bits.r32i_rgb9_e5.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027061, VkglTestCase_027061_1, VkglTestCase_027061_2);

#define VkglTestCase_027062_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027062_2 "wclass_32_bits.r32i_rgb9_e5.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027062, VkglTestCase_027062_1, VkglTestCase_027062_2);

#define VkglTestCase_027063_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027063_2 "wclass_32_bits.r32i_rgb9_e5.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027063, VkglTestCase_027063_1, VkglTestCase_027063_2);

#define VkglTestCase_027064_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027064_2 "ewclass_32_bits.r32i_rgb9_e5.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027064, VkglTestCase_027064_1, VkglTestCase_027064_2);

#define VkglTestCase_027065_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027065_2 "ass_32_bits.r32i_rgb9_e5.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027065, VkglTestCase_027065_1, VkglTestCase_027065_2);
