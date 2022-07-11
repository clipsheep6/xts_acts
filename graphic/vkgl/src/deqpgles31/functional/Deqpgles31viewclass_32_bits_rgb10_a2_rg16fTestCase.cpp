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

#define VkglTestCase_030050_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030050_2 "wclass_32_bits.rgb10_a2_rg16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030050, VkglTestCase_030050_1, VkglTestCase_030050_2);

#define VkglTestCase_030051_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030051_2 "wclass_32_bits.rgb10_a2_rg16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030051, VkglTestCase_030051_1, VkglTestCase_030051_2);

#define VkglTestCase_030052_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030052_2 "ewclass_32_bits.rgb10_a2_rg16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030052, VkglTestCase_030052_1, VkglTestCase_030052_2);

#define VkglTestCase_030053_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030053_2 "ass_32_bits.rgb10_a2_rg16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030053, VkglTestCase_030053_1, VkglTestCase_030053_2);

#define VkglTestCase_030054_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030054_2 "wclass_32_bits.rgb10_a2_rg16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030054, VkglTestCase_030054_1, VkglTestCase_030054_2);

#define VkglTestCase_030055_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030055_2 "wclass_32_bits.rgb10_a2_rg16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030055, VkglTestCase_030055_1, VkglTestCase_030055_2);

#define VkglTestCase_030056_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030056_2 "ewclass_32_bits.rgb10_a2_rg16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030056, VkglTestCase_030056_1, VkglTestCase_030056_2);

#define VkglTestCase_030057_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030057_2 "ass_32_bits.rgb10_a2_rg16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030057, VkglTestCase_030057_1, VkglTestCase_030057_2);

#define VkglTestCase_030058_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030058_2 "ewclass_32_bits.rgb10_a2_rg16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030058, VkglTestCase_030058_1, VkglTestCase_030058_2);

#define VkglTestCase_030059_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030059_2 "ewclass_32_bits.rgb10_a2_rg16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030059, VkglTestCase_030059_1, VkglTestCase_030059_2);

#define VkglTestCase_030060_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030060_2 "iewclass_32_bits.rgb10_a2_rg16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030060, VkglTestCase_030060_1, VkglTestCase_030060_2);

#define VkglTestCase_030061_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030061_2 "lass_32_bits.rgb10_a2_rg16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030061, VkglTestCase_030061_1, VkglTestCase_030061_2);

#define VkglTestCase_030062_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030062_2 "ass_32_bits.rgb10_a2_rg16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030062, VkglTestCase_030062_1, VkglTestCase_030062_2);

#define VkglTestCase_030063_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030063_2 "ass_32_bits.rgb10_a2_rg16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030063, VkglTestCase_030063_1, VkglTestCase_030063_2);

#define VkglTestCase_030064_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030064_2 "lass_32_bits.rgb10_a2_rg16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030064, VkglTestCase_030064_1, VkglTestCase_030064_2);

#define VkglTestCase_030065_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030065_2 "_32_bits.rgb10_a2_rg16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030065, VkglTestCase_030065_1, VkglTestCase_030065_2);

#define VkglTestCase_030066_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030066_2 "class_32_bits.rgb10_a2_rg16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030066, VkglTestCase_030066_1, VkglTestCase_030066_2);

#define VkglTestCase_030067_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030067_2 "class_32_bits.rgb10_a2_rg16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030067, VkglTestCase_030067_1, VkglTestCase_030067_2);

#define VkglTestCase_030068_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030068_2 "wclass_32_bits.rgb10_a2_rg16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030068, VkglTestCase_030068_1, VkglTestCase_030068_2);

#define VkglTestCase_030069_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030069_2 "ss_32_bits.rgb10_a2_rg16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030069, VkglTestCase_030069_1, VkglTestCase_030069_2);
