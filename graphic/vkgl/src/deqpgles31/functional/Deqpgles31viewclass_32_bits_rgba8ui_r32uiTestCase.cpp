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

#define VkglTestCase_029093_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029093_2 "ewclass_32_bits.rgba8ui_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029093, VkglTestCase_029093_1, VkglTestCase_029093_2);

#define VkglTestCase_029094_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029094_2 "ewclass_32_bits.rgba8ui_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029094, VkglTestCase_029094_1, VkglTestCase_029094_2);

#define VkglTestCase_029095_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029095_2 "iewclass_32_bits.rgba8ui_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029095, VkglTestCase_029095_1, VkglTestCase_029095_2);

#define VkglTestCase_029096_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029096_2 "lass_32_bits.rgba8ui_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029096, VkglTestCase_029096_1, VkglTestCase_029096_2);

#define VkglTestCase_029097_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029097_2 "class_32_bits.rgba8ui_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029097, VkglTestCase_029097_1, VkglTestCase_029097_2);

#define VkglTestCase_029098_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029098_2 "ewclass_32_bits.rgba8ui_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029098, VkglTestCase_029098_1, VkglTestCase_029098_2);

#define VkglTestCase_029099_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029099_2 "ewclass_32_bits.rgba8ui_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029099, VkglTestCase_029099_1, VkglTestCase_029099_2);

#define VkglTestCase_029100_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029100_2 "iewclass_32_bits.rgba8ui_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029100, VkglTestCase_029100_1, VkglTestCase_029100_2);

#define VkglTestCase_029101_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029101_2 "lass_32_bits.rgba8ui_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029101, VkglTestCase_029101_1, VkglTestCase_029101_2);

#define VkglTestCase_029102_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029102_2 "class_32_bits.rgba8ui_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029102, VkglTestCase_029102_1, VkglTestCase_029102_2);

#define VkglTestCase_029103_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029103_2 "iewclass_32_bits.rgba8ui_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029103, VkglTestCase_029103_1, VkglTestCase_029103_2);

#define VkglTestCase_029104_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029104_2 "iewclass_32_bits.rgba8ui_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029104, VkglTestCase_029104_1, VkglTestCase_029104_2);

#define VkglTestCase_029105_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_029105_2 "viewclass_32_bits.rgba8ui_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029105, VkglTestCase_029105_1, VkglTestCase_029105_2);

#define VkglTestCase_029106_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029106_2 "class_32_bits.rgba8ui_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029106, VkglTestCase_029106_1, VkglTestCase_029106_2);

#define VkglTestCase_029107_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029107_2 "wclass_32_bits.rgba8ui_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029107, VkglTestCase_029107_1, VkglTestCase_029107_2);

#define VkglTestCase_029108_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029108_2 "lass_32_bits.rgba8ui_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029108, VkglTestCase_029108_1, VkglTestCase_029108_2);

#define VkglTestCase_029109_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029109_2 "lass_32_bits.rgba8ui_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029109, VkglTestCase_029109_1, VkglTestCase_029109_2);

#define VkglTestCase_029110_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029110_2 "class_32_bits.rgba8ui_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029110, VkglTestCase_029110_1, VkglTestCase_029110_2);

#define VkglTestCase_029111_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029111_2 "s_32_bits.rgba8ui_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029111, VkglTestCase_029111_1, VkglTestCase_029111_2);

#define VkglTestCase_029112_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029112_2 "ss_32_bits.rgba8ui_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029112, VkglTestCase_029112_1, VkglTestCase_029112_2);

#define VkglTestCase_029113_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029113_2 "class_32_bits.rgba8ui_r32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029113, VkglTestCase_029113_1, VkglTestCase_029113_2);

#define VkglTestCase_029114_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029114_2 "class_32_bits.rgba8ui_r32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029114, VkglTestCase_029114_1, VkglTestCase_029114_2);

#define VkglTestCase_029115_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029115_2 "wclass_32_bits.rgba8ui_r32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029115, VkglTestCase_029115_1, VkglTestCase_029115_2);

#define VkglTestCase_029116_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029116_2 "ss_32_bits.rgba8ui_r32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029116, VkglTestCase_029116_1, VkglTestCase_029116_2);

#define VkglTestCase_029117_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029117_2 "lass_32_bits.rgba8ui_r32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029117, VkglTestCase_029117_1, VkglTestCase_029117_2);
