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

#define VkglTestCase_029458_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029458_2 "ass_32_bits.r11f_g11f_b10f_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029458, VkglTestCase_029458_1, VkglTestCase_029458_2);

#define VkglTestCase_029459_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029459_2 "ass_32_bits.r11f_g11f_b10f_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029459, VkglTestCase_029459_1, VkglTestCase_029459_2);

#define VkglTestCase_029460_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029460_2 "lass_32_bits.r11f_g11f_b10f_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029460, VkglTestCase_029460_1, VkglTestCase_029460_2);

#define VkglTestCase_029461_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029461_2 "_32_bits.r11f_g11f_b10f_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029461, VkglTestCase_029461_1, VkglTestCase_029461_2);

#define VkglTestCase_029462_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029462_2 "s_32_bits.r11f_g11f_b10f_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029462, VkglTestCase_029462_1, VkglTestCase_029462_2);

#define VkglTestCase_029463_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029463_2 "ass_32_bits.r11f_g11f_b10f_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029463, VkglTestCase_029463_1, VkglTestCase_029463_2);

#define VkglTestCase_029464_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029464_2 "ass_32_bits.r11f_g11f_b10f_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029464, VkglTestCase_029464_1, VkglTestCase_029464_2);

#define VkglTestCase_029465_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029465_2 "lass_32_bits.r11f_g11f_b10f_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029465, VkglTestCase_029465_1, VkglTestCase_029465_2);

#define VkglTestCase_029466_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029466_2 "_32_bits.r11f_g11f_b10f_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029466, VkglTestCase_029466_1, VkglTestCase_029466_2);

#define VkglTestCase_029467_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029467_2 "s_32_bits.r11f_g11f_b10f_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029467, VkglTestCase_029467_1, VkglTestCase_029467_2);

#define VkglTestCase_029468_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029468_2 "lass_32_bits.r11f_g11f_b10f_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029468, VkglTestCase_029468_1, VkglTestCase_029468_2);

#define VkglTestCase_029469_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029469_2 "lass_32_bits.r11f_g11f_b10f_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029469, VkglTestCase_029469_1, VkglTestCase_029469_2);

#define VkglTestCase_029470_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029470_2 "class_32_bits.r11f_g11f_b10f_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029470, VkglTestCase_029470_1, VkglTestCase_029470_2);

#define VkglTestCase_029471_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029471_2 "s_32_bits.r11f_g11f_b10f_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029471, VkglTestCase_029471_1, VkglTestCase_029471_2);

#define VkglTestCase_029472_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029472_2 "ss_32_bits.r11f_g11f_b10f_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029472, VkglTestCase_029472_1, VkglTestCase_029472_2);

#define VkglTestCase_029473_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029473_2 "_32_bits.r11f_g11f_b10f_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029473, VkglTestCase_029473_1, VkglTestCase_029473_2);

#define VkglTestCase_029474_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029474_2 "_32_bits.r11f_g11f_b10f_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029474, VkglTestCase_029474_1, VkglTestCase_029474_2);

#define VkglTestCase_029475_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029475_2 "s_32_bits.r11f_g11f_b10f_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029475, VkglTestCase_029475_1, VkglTestCase_029475_2);

#define VkglTestCase_029476_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029476_2 "_bits.r11f_g11f_b10f_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029476, VkglTestCase_029476_1, VkglTestCase_029476_2);

#define VkglTestCase_029477_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029477_2 "2_bits.r11f_g11f_b10f_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029477, VkglTestCase_029477_1, VkglTestCase_029477_2);
