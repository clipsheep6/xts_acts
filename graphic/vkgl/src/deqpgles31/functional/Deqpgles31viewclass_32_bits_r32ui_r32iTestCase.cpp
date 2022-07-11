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

#define VkglTestCase_027086_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027086_2 "iewclass_32_bits.r32ui_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027086, VkglTestCase_027086_1, VkglTestCase_027086_2);

#define VkglTestCase_027087_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027087_2 "iewclass_32_bits.r32ui_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027087, VkglTestCase_027087_1, VkglTestCase_027087_2);

#define VkglTestCase_027088_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027088_2 "viewclass_32_bits.r32ui_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027088, VkglTestCase_027088_1, VkglTestCase_027088_2);

#define VkglTestCase_027089_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027089_2 "class_32_bits.r32ui_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027089, VkglTestCase_027089_1, VkglTestCase_027089_2);

#define VkglTestCase_027090_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027090_2 "ewclass_32_bits.r32ui_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027090, VkglTestCase_027090_1, VkglTestCase_027090_2);

#define VkglTestCase_027091_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027091_2 "iewclass_32_bits.r32ui_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027091, VkglTestCase_027091_1, VkglTestCase_027091_2);

#define VkglTestCase_027092_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027092_2 "iewclass_32_bits.r32ui_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027092, VkglTestCase_027092_1, VkglTestCase_027092_2);

#define VkglTestCase_027093_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027093_2 "viewclass_32_bits.r32ui_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027093, VkglTestCase_027093_1, VkglTestCase_027093_2);

#define VkglTestCase_027094_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027094_2 "class_32_bits.r32ui_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027094, VkglTestCase_027094_1, VkglTestCase_027094_2);

#define VkglTestCase_027095_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027095_2 "ewclass_32_bits.r32ui_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027095, VkglTestCase_027095_1, VkglTestCase_027095_2);

#define VkglTestCase_027096_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027096_2 "viewclass_32_bits.r32ui_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027096, VkglTestCase_027096_1, VkglTestCase_027096_2);

#define VkglTestCase_027097_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027097_2 "viewclass_32_bits.r32ui_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027097, VkglTestCase_027097_1, VkglTestCase_027097_2);

#define VkglTestCase_027098_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027098_2 ".viewclass_32_bits.r32ui_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027098, VkglTestCase_027098_1, VkglTestCase_027098_2);

#define VkglTestCase_027099_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027099_2 "wclass_32_bits.r32ui_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027099, VkglTestCase_027099_1, VkglTestCase_027099_2);

#define VkglTestCase_027100_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027100_2 "iewclass_32_bits.r32ui_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027100, VkglTestCase_027100_1, VkglTestCase_027100_2);

#define VkglTestCase_027101_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027101_2 "class_32_bits.r32ui_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027101, VkglTestCase_027101_1, VkglTestCase_027101_2);

#define VkglTestCase_027102_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027102_2 "class_32_bits.r32ui_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027102, VkglTestCase_027102_1, VkglTestCase_027102_2);

#define VkglTestCase_027103_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027103_2 "wclass_32_bits.r32ui_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027103, VkglTestCase_027103_1, VkglTestCase_027103_2);

#define VkglTestCase_027104_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027104_2 "ss_32_bits.r32ui_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027104, VkglTestCase_027104_1, VkglTestCase_027104_2);

#define VkglTestCase_027105_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027105_2 "lass_32_bits.r32ui_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027105, VkglTestCase_027105_1, VkglTestCase_027105_2);

#define VkglTestCase_027106_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027106_2 "ewclass_32_bits.r32ui_r32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027106, VkglTestCase_027106_1, VkglTestCase_027106_2);

#define VkglTestCase_027107_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027107_2 "ewclass_32_bits.r32ui_r32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027107, VkglTestCase_027107_1, VkglTestCase_027107_2);

#define VkglTestCase_027108_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027108_2 "iewclass_32_bits.r32ui_r32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027108, VkglTestCase_027108_1, VkglTestCase_027108_2);

#define VkglTestCase_027109_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027109_2 "lass_32_bits.r32ui_r32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027109, VkglTestCase_027109_1, VkglTestCase_027109_2);

#define VkglTestCase_027110_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027110_2 "class_32_bits.r32ui_r32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027110, VkglTestCase_027110_1, VkglTestCase_027110_2);
