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

#define VkglTestCase_029048_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029048_2 "ewclass_32_bits.rgba8ui_r32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029048, VkglTestCase_029048_1, VkglTestCase_029048_2);

#define VkglTestCase_029049_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029049_2 "ewclass_32_bits.rgba8ui_r32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029049, VkglTestCase_029049_1, VkglTestCase_029049_2);

#define VkglTestCase_029050_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029050_2 "iewclass_32_bits.rgba8ui_r32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029050, VkglTestCase_029050_1, VkglTestCase_029050_2);

#define VkglTestCase_029051_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029051_2 "lass_32_bits.rgba8ui_r32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029051, VkglTestCase_029051_1, VkglTestCase_029051_2);

#define VkglTestCase_029052_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029052_2 "ewclass_32_bits.rgba8ui_r32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029052, VkglTestCase_029052_1, VkglTestCase_029052_2);

#define VkglTestCase_029053_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029053_2 "ewclass_32_bits.rgba8ui_r32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029053, VkglTestCase_029053_1, VkglTestCase_029053_2);

#define VkglTestCase_029054_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029054_2 "iewclass_32_bits.rgba8ui_r32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029054, VkglTestCase_029054_1, VkglTestCase_029054_2);

#define VkglTestCase_029055_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029055_2 "lass_32_bits.rgba8ui_r32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029055, VkglTestCase_029055_1, VkglTestCase_029055_2);

#define VkglTestCase_029056_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029056_2 "iewclass_32_bits.rgba8ui_r32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029056, VkglTestCase_029056_1, VkglTestCase_029056_2);

#define VkglTestCase_029057_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029057_2 "iewclass_32_bits.rgba8ui_r32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029057, VkglTestCase_029057_1, VkglTestCase_029057_2);

#define VkglTestCase_029058_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_029058_2 "viewclass_32_bits.rgba8ui_r32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029058, VkglTestCase_029058_1, VkglTestCase_029058_2);

#define VkglTestCase_029059_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029059_2 "class_32_bits.rgba8ui_r32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029059, VkglTestCase_029059_1, VkglTestCase_029059_2);

#define VkglTestCase_029060_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029060_2 "lass_32_bits.rgba8ui_r32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029060, VkglTestCase_029060_1, VkglTestCase_029060_2);

#define VkglTestCase_029061_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029061_2 "lass_32_bits.rgba8ui_r32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029061, VkglTestCase_029061_1, VkglTestCase_029061_2);

#define VkglTestCase_029062_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029062_2 "class_32_bits.rgba8ui_r32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029062, VkglTestCase_029062_1, VkglTestCase_029062_2);

#define VkglTestCase_029063_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029063_2 "s_32_bits.rgba8ui_r32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029063, VkglTestCase_029063_1, VkglTestCase_029063_2);

#define VkglTestCase_029064_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029064_2 "wclass_32_bits.rgba8ui_r32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029064, VkglTestCase_029064_1, VkglTestCase_029064_2);

#define VkglTestCase_029065_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029065_2 "wclass_32_bits.rgba8ui_r32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029065, VkglTestCase_029065_1, VkglTestCase_029065_2);

#define VkglTestCase_029066_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029066_2 "ewclass_32_bits.rgba8ui_r32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029066, VkglTestCase_029066_1, VkglTestCase_029066_2);

#define VkglTestCase_029067_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029067_2 "ass_32_bits.rgba8ui_r32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029067, VkglTestCase_029067_1, VkglTestCase_029067_2);
