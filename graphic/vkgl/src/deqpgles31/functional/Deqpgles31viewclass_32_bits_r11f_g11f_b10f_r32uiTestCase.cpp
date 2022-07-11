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

#define VkglTestCase_029418_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029418_2 "ass_32_bits.r11f_g11f_b10f_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029418, VkglTestCase_029418_1, VkglTestCase_029418_2);

#define VkglTestCase_029419_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029419_2 "ass_32_bits.r11f_g11f_b10f_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029419, VkglTestCase_029419_1, VkglTestCase_029419_2);

#define VkglTestCase_029420_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029420_2 "lass_32_bits.r11f_g11f_b10f_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029420, VkglTestCase_029420_1, VkglTestCase_029420_2);

#define VkglTestCase_029421_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029421_2 "_32_bits.r11f_g11f_b10f_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029421, VkglTestCase_029421_1, VkglTestCase_029421_2);

#define VkglTestCase_029422_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029422_2 "ss_32_bits.r11f_g11f_b10f_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029422, VkglTestCase_029422_1, VkglTestCase_029422_2);

#define VkglTestCase_029423_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029423_2 "ass_32_bits.r11f_g11f_b10f_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029423, VkglTestCase_029423_1, VkglTestCase_029423_2);

#define VkglTestCase_029424_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029424_2 "ass_32_bits.r11f_g11f_b10f_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029424, VkglTestCase_029424_1, VkglTestCase_029424_2);

#define VkglTestCase_029425_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029425_2 "lass_32_bits.r11f_g11f_b10f_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029425, VkglTestCase_029425_1, VkglTestCase_029425_2);

#define VkglTestCase_029426_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029426_2 "_32_bits.r11f_g11f_b10f_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029426, VkglTestCase_029426_1, VkglTestCase_029426_2);

#define VkglTestCase_029427_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029427_2 "ss_32_bits.r11f_g11f_b10f_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029427, VkglTestCase_029427_1, VkglTestCase_029427_2);

#define VkglTestCase_029428_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029428_2 "lass_32_bits.r11f_g11f_b10f_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029428, VkglTestCase_029428_1, VkglTestCase_029428_2);

#define VkglTestCase_029429_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029429_2 "lass_32_bits.r11f_g11f_b10f_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029429, VkglTestCase_029429_1, VkglTestCase_029429_2);

#define VkglTestCase_029430_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029430_2 "class_32_bits.r11f_g11f_b10f_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029430, VkglTestCase_029430_1, VkglTestCase_029430_2);

#define VkglTestCase_029431_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029431_2 "s_32_bits.r11f_g11f_b10f_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029431, VkglTestCase_029431_1, VkglTestCase_029431_2);

#define VkglTestCase_029432_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029432_2 "ass_32_bits.r11f_g11f_b10f_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029432, VkglTestCase_029432_1, VkglTestCase_029432_2);

#define VkglTestCase_029433_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029433_2 "_32_bits.r11f_g11f_b10f_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029433, VkglTestCase_029433_1, VkglTestCase_029433_2);

#define VkglTestCase_029434_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029434_2 "_32_bits.r11f_g11f_b10f_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029434, VkglTestCase_029434_1, VkglTestCase_029434_2);

#define VkglTestCase_029435_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029435_2 "s_32_bits.r11f_g11f_b10f_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029435, VkglTestCase_029435_1, VkglTestCase_029435_2);

#define VkglTestCase_029436_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029436_2 "_bits.r11f_g11f_b10f_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029436, VkglTestCase_029436_1, VkglTestCase_029436_2);

#define VkglTestCase_029437_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029437_2 "32_bits.r11f_g11f_b10f_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029437, VkglTestCase_029437_1, VkglTestCase_029437_2);
