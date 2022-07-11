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

#define VkglTestCase_030482_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030482_2 "lass_32_bits.rgba8_snorm_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030482, VkglTestCase_030482_1, VkglTestCase_030482_2);

#define VkglTestCase_030483_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030483_2 "lass_32_bits.rgba8_snorm_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030483, VkglTestCase_030483_1, VkglTestCase_030483_2);

#define VkglTestCase_030484_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030484_2 "class_32_bits.rgba8_snorm_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030484, VkglTestCase_030484_1, VkglTestCase_030484_2);

#define VkglTestCase_030485_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030485_2 "s_32_bits.rgba8_snorm_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030485, VkglTestCase_030485_1, VkglTestCase_030485_2);

#define VkglTestCase_030486_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030486_2 "ss_32_bits.rgba8_snorm_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030486, VkglTestCase_030486_1, VkglTestCase_030486_2);

#define VkglTestCase_030487_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030487_2 "lass_32_bits.rgba8_snorm_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030487, VkglTestCase_030487_1, VkglTestCase_030487_2);

#define VkglTestCase_030488_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030488_2 "lass_32_bits.rgba8_snorm_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030488, VkglTestCase_030488_1, VkglTestCase_030488_2);

#define VkglTestCase_030489_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030489_2 "class_32_bits.rgba8_snorm_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030489, VkglTestCase_030489_1, VkglTestCase_030489_2);

#define VkglTestCase_030490_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030490_2 "s_32_bits.rgba8_snorm_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030490, VkglTestCase_030490_1, VkglTestCase_030490_2);

#define VkglTestCase_030491_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030491_2 "ss_32_bits.rgba8_snorm_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030491, VkglTestCase_030491_1, VkglTestCase_030491_2);

#define VkglTestCase_030492_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030492_2 "class_32_bits.rgba8_snorm_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030492, VkglTestCase_030492_1, VkglTestCase_030492_2);

#define VkglTestCase_030493_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030493_2 "class_32_bits.rgba8_snorm_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030493, VkglTestCase_030493_1, VkglTestCase_030493_2);

#define VkglTestCase_030494_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030494_2 "wclass_32_bits.rgba8_snorm_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030494, VkglTestCase_030494_1, VkglTestCase_030494_2);

#define VkglTestCase_030495_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030495_2 "ss_32_bits.rgba8_snorm_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030495, VkglTestCase_030495_1, VkglTestCase_030495_2);

#define VkglTestCase_030496_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030496_2 "ass_32_bits.rgba8_snorm_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030496, VkglTestCase_030496_1, VkglTestCase_030496_2);

#define VkglTestCase_030497_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030497_2 "s_32_bits.rgba8_snorm_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030497, VkglTestCase_030497_1, VkglTestCase_030497_2);

#define VkglTestCase_030498_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030498_2 "s_32_bits.rgba8_snorm_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030498, VkglTestCase_030498_1, VkglTestCase_030498_2);

#define VkglTestCase_030499_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030499_2 "ss_32_bits.rgba8_snorm_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030499, VkglTestCase_030499_1, VkglTestCase_030499_2);

#define VkglTestCase_030500_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030500_2 "2_bits.rgba8_snorm_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030500, VkglTestCase_030500_1, VkglTestCase_030500_2);

#define VkglTestCase_030501_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030501_2 "32_bits.rgba8_snorm_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030501, VkglTestCase_030501_1, VkglTestCase_030501_2);
