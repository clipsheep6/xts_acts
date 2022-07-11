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

#define VkglTestCase_027301_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027301_2 "class_32_bits.r32ui_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027301, VkglTestCase_027301_1, VkglTestCase_027301_2);

#define VkglTestCase_027302_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027302_2 "class_32_bits.r32ui_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027302, VkglTestCase_027302_1, VkglTestCase_027302_2);

#define VkglTestCase_027303_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027303_2 "wclass_32_bits.r32ui_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027303, VkglTestCase_027303_1, VkglTestCase_027303_2);

#define VkglTestCase_027304_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027304_2 "ss_32_bits.r32ui_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027304, VkglTestCase_027304_1, VkglTestCase_027304_2);

#define VkglTestCase_027305_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027305_2 "lass_32_bits.r32ui_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027305, VkglTestCase_027305_1, VkglTestCase_027305_2);

#define VkglTestCase_027306_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027306_2 "class_32_bits.r32ui_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027306, VkglTestCase_027306_1, VkglTestCase_027306_2);

#define VkglTestCase_027307_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027307_2 "class_32_bits.r32ui_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027307, VkglTestCase_027307_1, VkglTestCase_027307_2);

#define VkglTestCase_027308_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027308_2 "wclass_32_bits.r32ui_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027308, VkglTestCase_027308_1, VkglTestCase_027308_2);

#define VkglTestCase_027309_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027309_2 "ss_32_bits.r32ui_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027309, VkglTestCase_027309_1, VkglTestCase_027309_2);

#define VkglTestCase_027310_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027310_2 "lass_32_bits.r32ui_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027310, VkglTestCase_027310_1, VkglTestCase_027310_2);

#define VkglTestCase_027311_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027311_2 "wclass_32_bits.r32ui_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027311, VkglTestCase_027311_1, VkglTestCase_027311_2);

#define VkglTestCase_027312_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027312_2 "wclass_32_bits.r32ui_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027312, VkglTestCase_027312_1, VkglTestCase_027312_2);

#define VkglTestCase_027313_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027313_2 "ewclass_32_bits.r32ui_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027313, VkglTestCase_027313_1, VkglTestCase_027313_2);

#define VkglTestCase_027314_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027314_2 "ass_32_bits.r32ui_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027314, VkglTestCase_027314_1, VkglTestCase_027314_2);

#define VkglTestCase_027315_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027315_2 "class_32_bits.r32ui_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027315, VkglTestCase_027315_1, VkglTestCase_027315_2);

#define VkglTestCase_027316_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027316_2 "ss_32_bits.r32ui_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027316, VkglTestCase_027316_1, VkglTestCase_027316_2);

#define VkglTestCase_027317_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027317_2 "ss_32_bits.r32ui_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027317, VkglTestCase_027317_1, VkglTestCase_027317_2);

#define VkglTestCase_027318_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027318_2 "ass_32_bits.r32ui_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027318, VkglTestCase_027318_1, VkglTestCase_027318_2);

#define VkglTestCase_027319_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_027319_2 "32_bits.r32ui_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027319, VkglTestCase_027319_1, VkglTestCase_027319_2);

#define VkglTestCase_027320_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027320_2 "s_32_bits.r32ui_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027320, VkglTestCase_027320_1, VkglTestCase_027320_2);

#define VkglTestCase_027321_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027321_2 "lass_32_bits.r32ui_rgb10_a2ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027321, VkglTestCase_027321_1, VkglTestCase_027321_2);

#define VkglTestCase_027322_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027322_2 "lass_32_bits.r32ui_rgb10_a2ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027322, VkglTestCase_027322_1, VkglTestCase_027322_2);

#define VkglTestCase_027323_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027323_2 "class_32_bits.r32ui_rgb10_a2ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027323, VkglTestCase_027323_1, VkglTestCase_027323_2);

#define VkglTestCase_027324_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027324_2 "s_32_bits.r32ui_rgb10_a2ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027324, VkglTestCase_027324_1, VkglTestCase_027324_2);

#define VkglTestCase_027325_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027325_2 "ss_32_bits.r32ui_rgb10_a2ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027325, VkglTestCase_027325_1, VkglTestCase_027325_2);
