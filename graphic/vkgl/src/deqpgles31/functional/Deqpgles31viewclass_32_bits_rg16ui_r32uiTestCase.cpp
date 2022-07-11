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

#define VkglTestCase_028043_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028043_2 "ewclass_32_bits.rg16ui_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028043, VkglTestCase_028043_1, VkglTestCase_028043_2);

#define VkglTestCase_028044_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028044_2 "ewclass_32_bits.rg16ui_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028044, VkglTestCase_028044_1, VkglTestCase_028044_2);

#define VkglTestCase_028045_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028045_2 "iewclass_32_bits.rg16ui_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028045, VkglTestCase_028045_1, VkglTestCase_028045_2);

#define VkglTestCase_028046_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028046_2 "lass_32_bits.rg16ui_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028046, VkglTestCase_028046_1, VkglTestCase_028046_2);

#define VkglTestCase_028047_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028047_2 "wclass_32_bits.rg16ui_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028047, VkglTestCase_028047_1, VkglTestCase_028047_2);

#define VkglTestCase_028048_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028048_2 "ewclass_32_bits.rg16ui_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028048, VkglTestCase_028048_1, VkglTestCase_028048_2);

#define VkglTestCase_028049_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028049_2 "ewclass_32_bits.rg16ui_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028049, VkglTestCase_028049_1, VkglTestCase_028049_2);

#define VkglTestCase_028050_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028050_2 "iewclass_32_bits.rg16ui_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028050, VkglTestCase_028050_1, VkglTestCase_028050_2);

#define VkglTestCase_028051_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028051_2 "lass_32_bits.rg16ui_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028051, VkglTestCase_028051_1, VkglTestCase_028051_2);

#define VkglTestCase_028052_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028052_2 "wclass_32_bits.rg16ui_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028052, VkglTestCase_028052_1, VkglTestCase_028052_2);

#define VkglTestCase_028053_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028053_2 "iewclass_32_bits.rg16ui_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028053, VkglTestCase_028053_1, VkglTestCase_028053_2);

#define VkglTestCase_028054_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028054_2 "iewclass_32_bits.rg16ui_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028054, VkglTestCase_028054_1, VkglTestCase_028054_2);

#define VkglTestCase_028055_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028055_2 "viewclass_32_bits.rg16ui_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028055, VkglTestCase_028055_1, VkglTestCase_028055_2);

#define VkglTestCase_028056_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028056_2 "class_32_bits.rg16ui_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028056, VkglTestCase_028056_1, VkglTestCase_028056_2);

#define VkglTestCase_028057_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028057_2 "ewclass_32_bits.rg16ui_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028057, VkglTestCase_028057_1, VkglTestCase_028057_2);

#define VkglTestCase_028058_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028058_2 "lass_32_bits.rg16ui_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028058, VkglTestCase_028058_1, VkglTestCase_028058_2);

#define VkglTestCase_028059_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028059_2 "lass_32_bits.rg16ui_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028059, VkglTestCase_028059_1, VkglTestCase_028059_2);

#define VkglTestCase_028060_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028060_2 "class_32_bits.rg16ui_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028060, VkglTestCase_028060_1, VkglTestCase_028060_2);

#define VkglTestCase_028061_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028061_2 "s_32_bits.rg16ui_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028061, VkglTestCase_028061_1, VkglTestCase_028061_2);

#define VkglTestCase_028062_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028062_2 "ass_32_bits.rg16ui_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028062, VkglTestCase_028062_1, VkglTestCase_028062_2);

#define VkglTestCase_028063_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028063_2 "wclass_32_bits.rg16ui_r32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028063, VkglTestCase_028063_1, VkglTestCase_028063_2);

#define VkglTestCase_028064_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028064_2 "wclass_32_bits.rg16ui_r32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028064, VkglTestCase_028064_1, VkglTestCase_028064_2);

#define VkglTestCase_028065_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028065_2 "ewclass_32_bits.rg16ui_r32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028065, VkglTestCase_028065_1, VkglTestCase_028065_2);

#define VkglTestCase_028066_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028066_2 "ass_32_bits.rg16ui_r32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028066, VkglTestCase_028066_1, VkglTestCase_028066_2);

#define VkglTestCase_028067_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028067_2 "lass_32_bits.rg16ui_r32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028067, VkglTestCase_028067_1, VkglTestCase_028067_2);
