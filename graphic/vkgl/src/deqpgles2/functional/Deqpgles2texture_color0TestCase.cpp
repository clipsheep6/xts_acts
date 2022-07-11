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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012798_1 "dEQP-GLES2.functional.fbo.completeness.renderab"
#define VkglTestCase_012798_2 "le.texture.color0.depth_component_unsigned_short"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012798, VkglTestCase_012798_1, VkglTestCase_012798_2);

#define VkglTestCase_012799_1 "dEQP-GLES2.functional.fbo.completeness.rendera"
#define VkglTestCase_012799_2 "ble.texture.color0.depth_component_unsigned_int"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012799, VkglTestCase_012799_1, VkglTestCase_012799_2);

#define VkglTestCase_012800_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012800_2 "nderable.texture.color0.red_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012800, VkglTestCase_012800_1, VkglTestCase_012800_2);

#define VkglTestCase_012801_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012801_2 "s.renderable.texture.color0.red_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012801, VkglTestCase_012801_1, VkglTestCase_012801_2);

#define VkglTestCase_012802_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012802_2 "nderable.texture.color0.red_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012802, VkglTestCase_012802_1, VkglTestCase_012802_2);

#define VkglTestCase_012803_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012803_2 "nderable.texture.color0.rgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012803, VkglTestCase_012803_1, VkglTestCase_012803_2);

#define VkglTestCase_012804_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012804_2 "s.renderable.texture.color0.rgb_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012804, VkglTestCase_012804_1, VkglTestCase_012804_2);

#define VkglTestCase_012805_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012805_2 "rable.texture.color0.rgb_unsigned_short_5_6_5"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012805, VkglTestCase_012805_1, VkglTestCase_012805_2);

#define VkglTestCase_012806_1 "dEQP-GLES2.functional.fbo.completeness.renderabl"
#define VkglTestCase_012806_2 "e.texture.color0.rgb_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012806, VkglTestCase_012806_1, VkglTestCase_012806_2);

#define VkglTestCase_012807_1 "dEQP-GLES2.functional.fbo.completeness.renderabl"
#define VkglTestCase_012807_2 "e.texture.color0.rgb_unsigned_int_10f_11f_11f_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012807, VkglTestCase_012807_1, VkglTestCase_012807_2);

#define VkglTestCase_012808_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012808_2 "nderable.texture.color0.rgb_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012808, VkglTestCase_012808_1, VkglTestCase_012808_2);

#define VkglTestCase_012809_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012809_2 "nderable.texture.color0.rgba_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012809, VkglTestCase_012809_1, VkglTestCase_012809_2);

#define VkglTestCase_012810_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012810_2 "s.renderable.texture.color0.rgba_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012810, VkglTestCase_012810_1, VkglTestCase_012810_2);

#define VkglTestCase_012811_1 "dEQP-GLES2.functional.fbo.completeness.rendera"
#define VkglTestCase_012811_2 "ble.texture.color0.rgba_unsigned_short_4_4_4_4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012811, VkglTestCase_012811_1, VkglTestCase_012811_2);

#define VkglTestCase_012812_1 "dEQP-GLES2.functional.fbo.completeness.rendera"
#define VkglTestCase_012812_2 "ble.texture.color0.rgba_unsigned_short_5_5_5_1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012812, VkglTestCase_012812_1, VkglTestCase_012812_2);

#define VkglTestCase_012813_1 "dEQP-GLES2.functional.fbo.completeness.renderabl"
#define VkglTestCase_012813_2 "e.texture.color0.rgba_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012813, VkglTestCase_012813_1, VkglTestCase_012813_2);

#define VkglTestCase_012814_1 "dEQP-GLES2.functional.fbo.completeness.ren"
#define VkglTestCase_012814_2 "derable.texture.color0.rgba_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012814, VkglTestCase_012814_1, VkglTestCase_012814_2);

#define VkglTestCase_012815_1 "dEQP-GLES2.functional.fbo.complete"
#define VkglTestCase_012815_2 "ness.renderable.texture.color0.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012815, VkglTestCase_012815_1, VkglTestCase_012815_2);

#define VkglTestCase_012816_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012816_2 "ess.renderable.texture.color0.rgb10"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012816, VkglTestCase_012816_1, VkglTestCase_012816_2);

#define VkglTestCase_012817_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012817_2 "ess.renderable.texture.color0.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012817, VkglTestCase_012817_1, VkglTestCase_012817_2);

#define VkglTestCase_012818_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012818_2 "ss.renderable.texture.color0.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012818, VkglTestCase_012818_1, VkglTestCase_012818_2);

#define VkglTestCase_012819_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012819_2 "ess.renderable.texture.color0.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012819, VkglTestCase_012819_1, VkglTestCase_012819_2);

#define VkglTestCase_012820_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012820_2 "ss.renderable.texture.color0.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012820, VkglTestCase_012820_1, VkglTestCase_012820_2);

#define VkglTestCase_012821_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012821_2 "nderable.texture.color0.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012821, VkglTestCase_012821_1, VkglTestCase_012821_2);

#define VkglTestCase_012822_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012822_2 "nderable.texture.color0.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012822, VkglTestCase_012822_1, VkglTestCase_012822_2);

#define VkglTestCase_012823_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012823_2 "nderable.texture.color0.depth_component32"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012823, VkglTestCase_012823_1, VkglTestCase_012823_2);

#define VkglTestCase_012824_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012824_2 "enderable.texture.color0.rg_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012824, VkglTestCase_012824_1, VkglTestCase_012824_2);

#define VkglTestCase_012825_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012825_2 "ss.renderable.texture.color0.rg_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012825, VkglTestCase_012825_1, VkglTestCase_012825_2);

#define VkglTestCase_012826_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012826_2 "nderable.texture.color0.rg_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012826, VkglTestCase_012826_1, VkglTestCase_012826_2);

#define VkglTestCase_012827_1 "dEQP-GLES2.functional.fbo.complet"
#define VkglTestCase_012827_2 "eness.renderable.texture.color0.r8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012827, VkglTestCase_012827_1, VkglTestCase_012827_2);

#define VkglTestCase_012828_1 "dEQP-GLES2.functional.fbo.complete"
#define VkglTestCase_012828_2 "ness.renderable.texture.color0.rg8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012828, VkglTestCase_012828_1, VkglTestCase_012828_2);

#define VkglTestCase_012829_1 "dEQP-GLES2.functional.fbo.complete"
#define VkglTestCase_012829_2 "ness.renderable.texture.color0.r16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012829, VkglTestCase_012829_1, VkglTestCase_012829_2);

#define VkglTestCase_012830_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012830_2 "ess.renderable.texture.color0.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012830, VkglTestCase_012830_1, VkglTestCase_012830_2);

#define VkglTestCase_012831_1 "dEQP-GLES2.functional.fbo.completeness.renderabl"
#define VkglTestCase_012831_2 "e.texture.color0.depth_stencil_unsigned_int_24_8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012831, VkglTestCase_012831_1, VkglTestCase_012831_2);

#define VkglTestCase_012832_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012832_2 "ss.renderable.texture.color0.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012832, VkglTestCase_012832_1, VkglTestCase_012832_2);

#define VkglTestCase_012833_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012833_2 "enderable.texture.color0.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012833, VkglTestCase_012833_1, VkglTestCase_012833_2);

#define VkglTestCase_012834_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012834_2 "renderable.texture.color0.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012834, VkglTestCase_012834_1, VkglTestCase_012834_2);

#define VkglTestCase_012835_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012835_2 "nderable.texture.color0.srgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012835, VkglTestCase_012835_1, VkglTestCase_012835_2);

#define VkglTestCase_012836_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012836_2 "ess.renderable.texture.color0.srgb8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012836, VkglTestCase_012836_1, VkglTestCase_012836_2);

#define VkglTestCase_012837_1 "dEQP-GLES2.functional.fbo.completeness.rende"
#define VkglTestCase_012837_2 "rable.texture.color0.srgb_alpha_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012837, VkglTestCase_012837_1, VkglTestCase_012837_2);

#define VkglTestCase_012838_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012838_2 ".renderable.texture.color0.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012838, VkglTestCase_012838_1, VkglTestCase_012838_2);

#define VkglTestCase_012839_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012839_2 "renderable.texture.color0.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012839, VkglTestCase_012839_1, VkglTestCase_012839_2);

#define VkglTestCase_012840_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012840_2 "ess.renderable.texture.color0.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012840, VkglTestCase_012840_1, VkglTestCase_012840_2);

#define VkglTestCase_012841_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012841_2 "ss.renderable.texture.color0.sr8_ext"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012841, VkglTestCase_012841_1, VkglTestCase_012841_2);

#define VkglTestCase_012842_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012842_2 "ss.renderable.texture.color0.srg8_ext"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012842, VkglTestCase_012842_1, VkglTestCase_012842_2);
