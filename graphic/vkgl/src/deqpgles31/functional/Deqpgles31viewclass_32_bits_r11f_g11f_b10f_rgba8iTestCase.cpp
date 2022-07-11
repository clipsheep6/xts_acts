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

#define VkglTestCase_029498_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029498_2 "ass_32_bits.r11f_g11f_b10f_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029498, VkglTestCase_029498_1, VkglTestCase_029498_2);

#define VkglTestCase_029499_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029499_2 "ass_32_bits.r11f_g11f_b10f_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029499, VkglTestCase_029499_1, VkglTestCase_029499_2);

#define VkglTestCase_029500_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029500_2 "lass_32_bits.r11f_g11f_b10f_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029500, VkglTestCase_029500_1, VkglTestCase_029500_2);

#define VkglTestCase_029501_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029501_2 "_32_bits.r11f_g11f_b10f_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029501, VkglTestCase_029501_1, VkglTestCase_029501_2);

#define VkglTestCase_029502_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029502_2 "s_32_bits.r11f_g11f_b10f_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029502, VkglTestCase_029502_1, VkglTestCase_029502_2);

#define VkglTestCase_029503_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029503_2 "ass_32_bits.r11f_g11f_b10f_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029503, VkglTestCase_029503_1, VkglTestCase_029503_2);

#define VkglTestCase_029504_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029504_2 "ass_32_bits.r11f_g11f_b10f_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029504, VkglTestCase_029504_1, VkglTestCase_029504_2);

#define VkglTestCase_029505_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029505_2 "lass_32_bits.r11f_g11f_b10f_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029505, VkglTestCase_029505_1, VkglTestCase_029505_2);

#define VkglTestCase_029506_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029506_2 "_32_bits.r11f_g11f_b10f_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029506, VkglTestCase_029506_1, VkglTestCase_029506_2);

#define VkglTestCase_029507_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029507_2 "s_32_bits.r11f_g11f_b10f_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029507, VkglTestCase_029507_1, VkglTestCase_029507_2);

#define VkglTestCase_029508_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029508_2 "lass_32_bits.r11f_g11f_b10f_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029508, VkglTestCase_029508_1, VkglTestCase_029508_2);

#define VkglTestCase_029509_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029509_2 "lass_32_bits.r11f_g11f_b10f_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029509, VkglTestCase_029509_1, VkglTestCase_029509_2);

#define VkglTestCase_029510_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029510_2 "class_32_bits.r11f_g11f_b10f_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029510, VkglTestCase_029510_1, VkglTestCase_029510_2);

#define VkglTestCase_029511_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029511_2 "s_32_bits.r11f_g11f_b10f_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029511, VkglTestCase_029511_1, VkglTestCase_029511_2);

#define VkglTestCase_029512_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029512_2 "ss_32_bits.r11f_g11f_b10f_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029512, VkglTestCase_029512_1, VkglTestCase_029512_2);

#define VkglTestCase_029513_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029513_2 "_32_bits.r11f_g11f_b10f_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029513, VkglTestCase_029513_1, VkglTestCase_029513_2);

#define VkglTestCase_029514_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029514_2 "_32_bits.r11f_g11f_b10f_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029514, VkglTestCase_029514_1, VkglTestCase_029514_2);

#define VkglTestCase_029515_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029515_2 "s_32_bits.r11f_g11f_b10f_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029515, VkglTestCase_029515_1, VkglTestCase_029515_2);

#define VkglTestCase_029516_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029516_2 "_bits.r11f_g11f_b10f_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029516, VkglTestCase_029516_1, VkglTestCase_029516_2);

#define VkglTestCase_029517_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029517_2 "2_bits.r11f_g11f_b10f_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029517, VkglTestCase_029517_1, VkglTestCase_029517_2);
