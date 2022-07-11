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

#define VkglTestCase_030025_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030025_2 "wclass_32_bits.rgb10_a2_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030025, VkglTestCase_030025_1, VkglTestCase_030025_2);

#define VkglTestCase_030026_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030026_2 "wclass_32_bits.rgb10_a2_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030026, VkglTestCase_030026_1, VkglTestCase_030026_2);

#define VkglTestCase_030027_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030027_2 "ewclass_32_bits.rgb10_a2_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030027, VkglTestCase_030027_1, VkglTestCase_030027_2);

#define VkglTestCase_030028_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030028_2 "ass_32_bits.rgb10_a2_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030028, VkglTestCase_030028_1, VkglTestCase_030028_2);

#define VkglTestCase_030029_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030029_2 "class_32_bits.rgb10_a2_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030029, VkglTestCase_030029_1, VkglTestCase_030029_2);

#define VkglTestCase_030030_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030030_2 "wclass_32_bits.rgb10_a2_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030030, VkglTestCase_030030_1, VkglTestCase_030030_2);

#define VkglTestCase_030031_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030031_2 "wclass_32_bits.rgb10_a2_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030031, VkglTestCase_030031_1, VkglTestCase_030031_2);

#define VkglTestCase_030032_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030032_2 "ewclass_32_bits.rgb10_a2_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030032, VkglTestCase_030032_1, VkglTestCase_030032_2);

#define VkglTestCase_030033_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030033_2 "ass_32_bits.rgb10_a2_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030033, VkglTestCase_030033_1, VkglTestCase_030033_2);

#define VkglTestCase_030034_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030034_2 "class_32_bits.rgb10_a2_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030034, VkglTestCase_030034_1, VkglTestCase_030034_2);

#define VkglTestCase_030035_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030035_2 "ewclass_32_bits.rgb10_a2_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030035, VkglTestCase_030035_1, VkglTestCase_030035_2);

#define VkglTestCase_030036_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030036_2 "ewclass_32_bits.rgb10_a2_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030036, VkglTestCase_030036_1, VkglTestCase_030036_2);

#define VkglTestCase_030037_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030037_2 "iewclass_32_bits.rgb10_a2_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030037, VkglTestCase_030037_1, VkglTestCase_030037_2);

#define VkglTestCase_030038_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030038_2 "lass_32_bits.rgb10_a2_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030038, VkglTestCase_030038_1, VkglTestCase_030038_2);

#define VkglTestCase_030039_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030039_2 "wclass_32_bits.rgb10_a2_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030039, VkglTestCase_030039_1, VkglTestCase_030039_2);

#define VkglTestCase_030040_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030040_2 "ass_32_bits.rgb10_a2_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030040, VkglTestCase_030040_1, VkglTestCase_030040_2);

#define VkglTestCase_030041_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030041_2 "ass_32_bits.rgb10_a2_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030041, VkglTestCase_030041_1, VkglTestCase_030041_2);

#define VkglTestCase_030042_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030042_2 "lass_32_bits.rgb10_a2_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030042, VkglTestCase_030042_1, VkglTestCase_030042_2);

#define VkglTestCase_030043_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030043_2 "_32_bits.rgb10_a2_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030043, VkglTestCase_030043_1, VkglTestCase_030043_2);

#define VkglTestCase_030044_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030044_2 "ss_32_bits.rgb10_a2_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030044, VkglTestCase_030044_1, VkglTestCase_030044_2);

#define VkglTestCase_030045_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030045_2 "class_32_bits.rgb10_a2_r32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030045, VkglTestCase_030045_1, VkglTestCase_030045_2);

#define VkglTestCase_030046_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030046_2 "class_32_bits.rgb10_a2_r32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030046, VkglTestCase_030046_1, VkglTestCase_030046_2);

#define VkglTestCase_030047_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030047_2 "wclass_32_bits.rgb10_a2_r32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030047, VkglTestCase_030047_1, VkglTestCase_030047_2);

#define VkglTestCase_030048_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030048_2 "ss_32_bits.rgb10_a2_r32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030048, VkglTestCase_030048_1, VkglTestCase_030048_2);

#define VkglTestCase_030049_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030049_2 "ass_32_bits.rgb10_a2_r32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030049, VkglTestCase_030049_1, VkglTestCase_030049_2);
