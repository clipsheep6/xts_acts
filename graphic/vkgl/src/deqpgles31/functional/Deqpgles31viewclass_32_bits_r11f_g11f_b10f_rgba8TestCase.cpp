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

#define VkglTestCase_029478_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029478_2 "ass_32_bits.r11f_g11f_b10f_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029478, VkglTestCase_029478_1, VkglTestCase_029478_2);

#define VkglTestCase_029479_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029479_2 "ass_32_bits.r11f_g11f_b10f_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029479, VkglTestCase_029479_1, VkglTestCase_029479_2);

#define VkglTestCase_029480_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029480_2 "lass_32_bits.r11f_g11f_b10f_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029480, VkglTestCase_029480_1, VkglTestCase_029480_2);

#define VkglTestCase_029481_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029481_2 "_32_bits.r11f_g11f_b10f_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029481, VkglTestCase_029481_1, VkglTestCase_029481_2);

#define VkglTestCase_029482_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029482_2 "ss_32_bits.r11f_g11f_b10f_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029482, VkglTestCase_029482_1, VkglTestCase_029482_2);

#define VkglTestCase_029483_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029483_2 "ass_32_bits.r11f_g11f_b10f_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029483, VkglTestCase_029483_1, VkglTestCase_029483_2);

#define VkglTestCase_029484_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029484_2 "ass_32_bits.r11f_g11f_b10f_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029484, VkglTestCase_029484_1, VkglTestCase_029484_2);

#define VkglTestCase_029485_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029485_2 "lass_32_bits.r11f_g11f_b10f_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029485, VkglTestCase_029485_1, VkglTestCase_029485_2);

#define VkglTestCase_029486_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029486_2 "_32_bits.r11f_g11f_b10f_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029486, VkglTestCase_029486_1, VkglTestCase_029486_2);

#define VkglTestCase_029487_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029487_2 "ss_32_bits.r11f_g11f_b10f_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029487, VkglTestCase_029487_1, VkglTestCase_029487_2);

#define VkglTestCase_029488_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029488_2 "lass_32_bits.r11f_g11f_b10f_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029488, VkglTestCase_029488_1, VkglTestCase_029488_2);

#define VkglTestCase_029489_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029489_2 "lass_32_bits.r11f_g11f_b10f_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029489, VkglTestCase_029489_1, VkglTestCase_029489_2);

#define VkglTestCase_029490_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029490_2 "class_32_bits.r11f_g11f_b10f_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029490, VkglTestCase_029490_1, VkglTestCase_029490_2);

#define VkglTestCase_029491_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029491_2 "s_32_bits.r11f_g11f_b10f_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029491, VkglTestCase_029491_1, VkglTestCase_029491_2);

#define VkglTestCase_029492_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029492_2 "ass_32_bits.r11f_g11f_b10f_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029492, VkglTestCase_029492_1, VkglTestCase_029492_2);

#define VkglTestCase_029493_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029493_2 "_32_bits.r11f_g11f_b10f_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029493, VkglTestCase_029493_1, VkglTestCase_029493_2);

#define VkglTestCase_029494_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029494_2 "_32_bits.r11f_g11f_b10f_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029494, VkglTestCase_029494_1, VkglTestCase_029494_2);

#define VkglTestCase_029495_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029495_2 "s_32_bits.r11f_g11f_b10f_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029495, VkglTestCase_029495_1, VkglTestCase_029495_2);

#define VkglTestCase_029496_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029496_2 "_bits.r11f_g11f_b10f_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029496, VkglTestCase_029496_1, VkglTestCase_029496_2);

#define VkglTestCase_029497_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029497_2 "32_bits.r11f_g11f_b10f_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029497, VkglTestCase_029497_1, VkglTestCase_029497_2);
