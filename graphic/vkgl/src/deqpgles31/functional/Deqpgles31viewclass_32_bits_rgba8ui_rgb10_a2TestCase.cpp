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

#define VkglTestCase_029308_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029308_2 "class_32_bits.rgba8ui_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029308, VkglTestCase_029308_1, VkglTestCase_029308_2);

#define VkglTestCase_029309_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029309_2 "class_32_bits.rgba8ui_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029309, VkglTestCase_029309_1, VkglTestCase_029309_2);

#define VkglTestCase_029310_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029310_2 "wclass_32_bits.rgba8ui_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029310, VkglTestCase_029310_1, VkglTestCase_029310_2);

#define VkglTestCase_029311_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029311_2 "ss_32_bits.rgba8ui_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029311, VkglTestCase_029311_1, VkglTestCase_029311_2);

#define VkglTestCase_029312_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029312_2 "lass_32_bits.rgba8ui_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029312, VkglTestCase_029312_1, VkglTestCase_029312_2);

#define VkglTestCase_029313_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029313_2 "class_32_bits.rgba8ui_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029313, VkglTestCase_029313_1, VkglTestCase_029313_2);

#define VkglTestCase_029314_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029314_2 "class_32_bits.rgba8ui_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029314, VkglTestCase_029314_1, VkglTestCase_029314_2);

#define VkglTestCase_029315_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029315_2 "wclass_32_bits.rgba8ui_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029315, VkglTestCase_029315_1, VkglTestCase_029315_2);

#define VkglTestCase_029316_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029316_2 "ss_32_bits.rgba8ui_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029316, VkglTestCase_029316_1, VkglTestCase_029316_2);

#define VkglTestCase_029317_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029317_2 "lass_32_bits.rgba8ui_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029317, VkglTestCase_029317_1, VkglTestCase_029317_2);

#define VkglTestCase_029318_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029318_2 "wclass_32_bits.rgba8ui_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029318, VkglTestCase_029318_1, VkglTestCase_029318_2);

#define VkglTestCase_029319_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029319_2 "wclass_32_bits.rgba8ui_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029319, VkglTestCase_029319_1, VkglTestCase_029319_2);

#define VkglTestCase_029320_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029320_2 "ewclass_32_bits.rgba8ui_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029320, VkglTestCase_029320_1, VkglTestCase_029320_2);

#define VkglTestCase_029321_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029321_2 "ass_32_bits.rgba8ui_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029321, VkglTestCase_029321_1, VkglTestCase_029321_2);

#define VkglTestCase_029322_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029322_2 "class_32_bits.rgba8ui_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029322, VkglTestCase_029322_1, VkglTestCase_029322_2);

#define VkglTestCase_029323_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029323_2 "ss_32_bits.rgba8ui_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029323, VkglTestCase_029323_1, VkglTestCase_029323_2);

#define VkglTestCase_029324_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029324_2 "ss_32_bits.rgba8ui_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029324, VkglTestCase_029324_1, VkglTestCase_029324_2);

#define VkglTestCase_029325_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029325_2 "ass_32_bits.rgba8ui_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029325, VkglTestCase_029325_1, VkglTestCase_029325_2);

#define VkglTestCase_029326_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029326_2 "32_bits.rgba8ui_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029326, VkglTestCase_029326_1, VkglTestCase_029326_2);

#define VkglTestCase_029327_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029327_2 "s_32_bits.rgba8ui_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029327, VkglTestCase_029327_1, VkglTestCase_029327_2);

#define VkglTestCase_029328_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029328_2 "lass_32_bits.rgba8ui_rgb10_a2.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029328, VkglTestCase_029328_1, VkglTestCase_029328_2);

#define VkglTestCase_029329_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029329_2 "lass_32_bits.rgba8ui_rgb10_a2.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029329, VkglTestCase_029329_1, VkglTestCase_029329_2);

#define VkglTestCase_029330_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029330_2 "class_32_bits.rgba8ui_rgb10_a2.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029330, VkglTestCase_029330_1, VkglTestCase_029330_2);

#define VkglTestCase_029331_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029331_2 "s_32_bits.rgba8ui_rgb10_a2.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029331, VkglTestCase_029331_1, VkglTestCase_029331_2);

#define VkglTestCase_029332_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029332_2 "ss_32_bits.rgba8ui_rgb10_a2.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029332, VkglTestCase_029332_1, VkglTestCase_029332_2);
