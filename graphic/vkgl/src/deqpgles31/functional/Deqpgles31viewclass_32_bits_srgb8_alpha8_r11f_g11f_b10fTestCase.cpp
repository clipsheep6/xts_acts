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

#define VkglTestCase_030825_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030825_2 "_32_bits.srgb8_alpha8_r11f_g11f_b10f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030825, VkglTestCase_030825_1, VkglTestCase_030825_2);

#define VkglTestCase_030826_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030826_2 "_32_bits.srgb8_alpha8_r11f_g11f_b10f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030826, VkglTestCase_030826_1, VkglTestCase_030826_2);

#define VkglTestCase_030827_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030827_2 "s_32_bits.srgb8_alpha8_r11f_g11f_b10f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030827, VkglTestCase_030827_1, VkglTestCase_030827_2);

#define VkglTestCase_030828_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030828_2 "_bits.srgb8_alpha8_r11f_g11f_b10f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030828, VkglTestCase_030828_1, VkglTestCase_030828_2);

#define VkglTestCase_030829_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030829_2 "_32_bits.srgb8_alpha8_r11f_g11f_b10f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030829, VkglTestCase_030829_1, VkglTestCase_030829_2);

#define VkglTestCase_030830_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030830_2 "_32_bits.srgb8_alpha8_r11f_g11f_b10f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030830, VkglTestCase_030830_1, VkglTestCase_030830_2);

#define VkglTestCase_030831_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030831_2 "s_32_bits.srgb8_alpha8_r11f_g11f_b10f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030831, VkglTestCase_030831_1, VkglTestCase_030831_2);

#define VkglTestCase_030832_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030832_2 "_bits.srgb8_alpha8_r11f_g11f_b10f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030832, VkglTestCase_030832_1, VkglTestCase_030832_2);

#define VkglTestCase_030833_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030833_2 "s_32_bits.srgb8_alpha8_r11f_g11f_b10f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030833, VkglTestCase_030833_1, VkglTestCase_030833_2);

#define VkglTestCase_030834_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030834_2 "s_32_bits.srgb8_alpha8_r11f_g11f_b10f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030834, VkglTestCase_030834_1, VkglTestCase_030834_2);

#define VkglTestCase_030835_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030835_2 "ss_32_bits.srgb8_alpha8_r11f_g11f_b10f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030835, VkglTestCase_030835_1, VkglTestCase_030835_2);

#define VkglTestCase_030836_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030836_2 "2_bits.srgb8_alpha8_r11f_g11f_b10f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030836, VkglTestCase_030836_1, VkglTestCase_030836_2);

#define VkglTestCase_030837_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030837_2 "_bits.srgb8_alpha8_r11f_g11f_b10f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030837, VkglTestCase_030837_1, VkglTestCase_030837_2);

#define VkglTestCase_030838_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030838_2 "_bits.srgb8_alpha8_r11f_g11f_b10f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030838, VkglTestCase_030838_1, VkglTestCase_030838_2);

#define VkglTestCase_030839_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030839_2 "2_bits.srgb8_alpha8_r11f_g11f_b10f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030839, VkglTestCase_030839_1, VkglTestCase_030839_2);

#define VkglTestCase_030840_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_bi"
#define VkglTestCase_030840_2 "ts.srgb8_alpha8_r11f_g11f_b10f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030840, VkglTestCase_030840_1, VkglTestCase_030840_2);

#define VkglTestCase_030841_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030841_2 "2_bits.srgb8_alpha8_r11f_g11f_b10f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030841, VkglTestCase_030841_1, VkglTestCase_030841_2);

#define VkglTestCase_030842_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030842_2 "2_bits.srgb8_alpha8_r11f_g11f_b10f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030842, VkglTestCase_030842_1, VkglTestCase_030842_2);

#define VkglTestCase_030843_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030843_2 "32_bits.srgb8_alpha8_r11f_g11f_b10f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030843, VkglTestCase_030843_1, VkglTestCase_030843_2);

#define VkglTestCase_030844_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_b"
#define VkglTestCase_030844_2 "its.srgb8_alpha8_r11f_g11f_b10f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030844, VkglTestCase_030844_1, VkglTestCase_030844_2);
