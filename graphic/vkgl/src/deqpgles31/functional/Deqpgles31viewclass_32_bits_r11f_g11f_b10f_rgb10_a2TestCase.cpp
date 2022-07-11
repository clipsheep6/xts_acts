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

#define VkglTestCase_029574_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029574_2 "ss_32_bits.r11f_g11f_b10f_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029574, VkglTestCase_029574_1, VkglTestCase_029574_2);

#define VkglTestCase_029575_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029575_2 "ss_32_bits.r11f_g11f_b10f_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029575, VkglTestCase_029575_1, VkglTestCase_029575_2);

#define VkglTestCase_029576_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029576_2 "ass_32_bits.r11f_g11f_b10f_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029576, VkglTestCase_029576_1, VkglTestCase_029576_2);

#define VkglTestCase_029577_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029577_2 "32_bits.r11f_g11f_b10f_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029577, VkglTestCase_029577_1, VkglTestCase_029577_2);

#define VkglTestCase_029578_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029578_2 "_32_bits.r11f_g11f_b10f_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029578, VkglTestCase_029578_1, VkglTestCase_029578_2);

#define VkglTestCase_029579_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029579_2 "ss_32_bits.r11f_g11f_b10f_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029579, VkglTestCase_029579_1, VkglTestCase_029579_2);

#define VkglTestCase_029580_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029580_2 "ss_32_bits.r11f_g11f_b10f_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029580, VkglTestCase_029580_1, VkglTestCase_029580_2);

#define VkglTestCase_029581_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029581_2 "ass_32_bits.r11f_g11f_b10f_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029581, VkglTestCase_029581_1, VkglTestCase_029581_2);

#define VkglTestCase_029582_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029582_2 "32_bits.r11f_g11f_b10f_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029582, VkglTestCase_029582_1, VkglTestCase_029582_2);

#define VkglTestCase_029583_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029583_2 "_32_bits.r11f_g11f_b10f_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029583, VkglTestCase_029583_1, VkglTestCase_029583_2);

#define VkglTestCase_029584_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029584_2 "ass_32_bits.r11f_g11f_b10f_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029584, VkglTestCase_029584_1, VkglTestCase_029584_2);

#define VkglTestCase_029585_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029585_2 "ass_32_bits.r11f_g11f_b10f_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029585, VkglTestCase_029585_1, VkglTestCase_029585_2);

#define VkglTestCase_029586_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029586_2 "lass_32_bits.r11f_g11f_b10f_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029586, VkglTestCase_029586_1, VkglTestCase_029586_2);

#define VkglTestCase_029587_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029587_2 "_32_bits.r11f_g11f_b10f_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029587, VkglTestCase_029587_1, VkglTestCase_029587_2);

#define VkglTestCase_029588_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029588_2 "s_32_bits.r11f_g11f_b10f_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029588, VkglTestCase_029588_1, VkglTestCase_029588_2);

#define VkglTestCase_029589_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029589_2 "32_bits.r11f_g11f_b10f_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029589, VkglTestCase_029589_1, VkglTestCase_029589_2);

#define VkglTestCase_029590_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029590_2 "32_bits.r11f_g11f_b10f_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029590, VkglTestCase_029590_1, VkglTestCase_029590_2);

#define VkglTestCase_029591_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029591_2 "_32_bits.r11f_g11f_b10f_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029591, VkglTestCase_029591_1, VkglTestCase_029591_2);

#define VkglTestCase_029592_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_029592_2 "bits.r11f_g11f_b10f_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029592, VkglTestCase_029592_1, VkglTestCase_029592_2);

#define VkglTestCase_029593_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029593_2 "_bits.r11f_g11f_b10f_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029593, VkglTestCase_029593_1, VkglTestCase_029593_2);
