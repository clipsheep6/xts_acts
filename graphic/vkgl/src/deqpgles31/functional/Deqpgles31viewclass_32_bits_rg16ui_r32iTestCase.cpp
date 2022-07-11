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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028018_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028018_2 "iewclass_32_bits.rg16ui_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028018, VkglTestCase_028018_1, VkglTestCase_028018_2);

#define VkglTestCase_028019_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028019_2 "iewclass_32_bits.rg16ui_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028019, VkglTestCase_028019_1, VkglTestCase_028019_2);

#define VkglTestCase_028020_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028020_2 "viewclass_32_bits.rg16ui_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028020, VkglTestCase_028020_1, VkglTestCase_028020_2);

#define VkglTestCase_028021_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028021_2 "class_32_bits.rg16ui_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028021, VkglTestCase_028021_1, VkglTestCase_028021_2);

#define VkglTestCase_028022_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028022_2 "wclass_32_bits.rg16ui_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028022, VkglTestCase_028022_1, VkglTestCase_028022_2);

#define VkglTestCase_028023_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028023_2 "iewclass_32_bits.rg16ui_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028023, VkglTestCase_028023_1, VkglTestCase_028023_2);

#define VkglTestCase_028024_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028024_2 "iewclass_32_bits.rg16ui_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028024, VkglTestCase_028024_1, VkglTestCase_028024_2);

#define VkglTestCase_028025_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028025_2 "viewclass_32_bits.rg16ui_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028025, VkglTestCase_028025_1, VkglTestCase_028025_2);

#define VkglTestCase_028026_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028026_2 "class_32_bits.rg16ui_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028026, VkglTestCase_028026_1, VkglTestCase_028026_2);

#define VkglTestCase_028027_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028027_2 "wclass_32_bits.rg16ui_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028027, VkglTestCase_028027_1, VkglTestCase_028027_2);

#define VkglTestCase_028028_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028028_2 "viewclass_32_bits.rg16ui_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028028, VkglTestCase_028028_1, VkglTestCase_028028_2);

#define VkglTestCase_028029_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028029_2 "viewclass_32_bits.rg16ui_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028029, VkglTestCase_028029_1, VkglTestCase_028029_2);

#define VkglTestCase_028030_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_028030_2 ".viewclass_32_bits.rg16ui_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028030, VkglTestCase_028030_1, VkglTestCase_028030_2);

#define VkglTestCase_028031_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028031_2 "wclass_32_bits.rg16ui_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028031, VkglTestCase_028031_1, VkglTestCase_028031_2);

#define VkglTestCase_028032_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028032_2 "ewclass_32_bits.rg16ui_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028032, VkglTestCase_028032_1, VkglTestCase_028032_2);

#define VkglTestCase_028033_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028033_2 "class_32_bits.rg16ui_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028033, VkglTestCase_028033_1, VkglTestCase_028033_2);

#define VkglTestCase_028034_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028034_2 "class_32_bits.rg16ui_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028034, VkglTestCase_028034_1, VkglTestCase_028034_2);

#define VkglTestCase_028035_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028035_2 "wclass_32_bits.rg16ui_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028035, VkglTestCase_028035_1, VkglTestCase_028035_2);

#define VkglTestCase_028036_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028036_2 "ss_32_bits.rg16ui_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028036, VkglTestCase_028036_1, VkglTestCase_028036_2);

#define VkglTestCase_028037_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028037_2 "ass_32_bits.rg16ui_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028037, VkglTestCase_028037_1, VkglTestCase_028037_2);

#define VkglTestCase_028038_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028038_2 "wclass_32_bits.rg16ui_r32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028038, VkglTestCase_028038_1, VkglTestCase_028038_2);

#define VkglTestCase_028039_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028039_2 "wclass_32_bits.rg16ui_r32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028039, VkglTestCase_028039_1, VkglTestCase_028039_2);

#define VkglTestCase_028040_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028040_2 "ewclass_32_bits.rg16ui_r32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028040, VkglTestCase_028040_1, VkglTestCase_028040_2);

#define VkglTestCase_028041_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028041_2 "ass_32_bits.rg16ui_r32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028041, VkglTestCase_028041_1, VkglTestCase_028041_2);

#define VkglTestCase_028042_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028042_2 "class_32_bits.rg16ui_r32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028042, VkglTestCase_028042_1, VkglTestCase_028042_2);
