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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024537_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024537_2 "tering.3d.formats.rgba16f_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024537, VkglTestCase_024537_1, VkglTestCase_024537_2);

#define VkglTestCase_024538_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024538_2 "ltering.3d.formats.rgba16f_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024538, VkglTestCase_024538_1, VkglTestCase_024538_2);

#define VkglTestCase_024539_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024539_2 "3d.formats.rgba16f_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024539, VkglTestCase_024539_1, VkglTestCase_024539_2);

#define VkglTestCase_024540_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024540_2 "3d.formats.rgba16f_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024540, VkglTestCase_024540_1, VkglTestCase_024540_2);

#define VkglTestCase_024541_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024541_2 "3d.formats.rgba16f_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024541, VkglTestCase_024541_1, VkglTestCase_024541_2);

#define VkglTestCase_024542_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024542_2 ".3d.formats.rgba16f_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024542, VkglTestCase_024542_1, VkglTestCase_024542_2);

#define VkglTestCase_024543_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_024543_2 "ing.3d.formats.r11f_g11f_b10f_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024543, VkglTestCase_024543_1, VkglTestCase_024543_2);

#define VkglTestCase_024544_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_024544_2 "ing.3d.formats.r11f_g11f_b10f_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024544, VkglTestCase_024544_1, VkglTestCase_024544_2);

#define VkglTestCase_024545_1 "dEQP-GLES3.functional.texture.filtering.3d.f"
#define VkglTestCase_024545_2 "ormats.r11f_g11f_b10f_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024545, VkglTestCase_024545_1, VkglTestCase_024545_2);

#define VkglTestCase_024546_1 "dEQP-GLES3.functional.texture.filtering.3d."
#define VkglTestCase_024546_2 "formats.r11f_g11f_b10f_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024546, VkglTestCase_024546_1, VkglTestCase_024546_2);

#define VkglTestCase_024547_1 "dEQP-GLES3.functional.texture.filtering.3d."
#define VkglTestCase_024547_2 "formats.r11f_g11f_b10f_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024547, VkglTestCase_024547_1, VkglTestCase_024547_2);

#define VkglTestCase_024548_1 "dEQP-GLES3.functional.texture.filtering.3d."
#define VkglTestCase_024548_2 "formats.r11f_g11f_b10f_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024548, VkglTestCase_024548_1, VkglTestCase_024548_2);

#define VkglTestCase_024549_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024549_2 "tering.3d.formats.rgb9_e5_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024549, VkglTestCase_024549_1, VkglTestCase_024549_2);

#define VkglTestCase_024550_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024550_2 "ltering.3d.formats.rgb9_e5_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024550, VkglTestCase_024550_1, VkglTestCase_024550_2);

#define VkglTestCase_024551_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024551_2 "3d.formats.rgb9_e5_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024551, VkglTestCase_024551_1, VkglTestCase_024551_2);

#define VkglTestCase_024552_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024552_2 "3d.formats.rgb9_e5_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024552, VkglTestCase_024552_1, VkglTestCase_024552_2);

#define VkglTestCase_024553_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024553_2 "3d.formats.rgb9_e5_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024553, VkglTestCase_024553_1, VkglTestCase_024553_2);

#define VkglTestCase_024554_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024554_2 ".3d.formats.rgb9_e5_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024554, VkglTestCase_024554_1, VkglTestCase_024554_2);

#define VkglTestCase_024555_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024555_2 "ltering.3d.formats.rgba8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024555, VkglTestCase_024555_1, VkglTestCase_024555_2);

#define VkglTestCase_024556_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_024556_2 "iltering.3d.formats.rgba8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024556, VkglTestCase_024556_1, VkglTestCase_024556_2);

#define VkglTestCase_024557_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024557_2 ".3d.formats.rgba8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024557, VkglTestCase_024557_1, VkglTestCase_024557_2);

#define VkglTestCase_024558_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024558_2 ".3d.formats.rgba8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024558, VkglTestCase_024558_1, VkglTestCase_024558_2);

#define VkglTestCase_024559_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024559_2 ".3d.formats.rgba8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024559, VkglTestCase_024559_1, VkglTestCase_024559_2);

#define VkglTestCase_024560_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024560_2 "g.3d.formats.rgba8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024560, VkglTestCase_024560_1, VkglTestCase_024560_2);

#define VkglTestCase_024561_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024561_2 "ring.3d.formats.rgba8_snorm_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024561, VkglTestCase_024561_1, VkglTestCase_024561_2);

#define VkglTestCase_024562_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_024562_2 "ering.3d.formats.rgba8_snorm_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024562, VkglTestCase_024562_1, VkglTestCase_024562_2);

#define VkglTestCase_024563_1 "dEQP-GLES3.functional.texture.filtering.3d"
#define VkglTestCase_024563_2 ".formats.rgba8_snorm_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024563, VkglTestCase_024563_1, VkglTestCase_024563_2);

#define VkglTestCase_024564_1 "dEQP-GLES3.functional.texture.filtering.3d"
#define VkglTestCase_024564_2 ".formats.rgba8_snorm_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024564, VkglTestCase_024564_1, VkglTestCase_024564_2);

#define VkglTestCase_024565_1 "dEQP-GLES3.functional.texture.filtering.3d"
#define VkglTestCase_024565_2 ".formats.rgba8_snorm_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024565, VkglTestCase_024565_1, VkglTestCase_024565_2);

#define VkglTestCase_024566_1 "dEQP-GLES3.functional.texture.filtering.3"
#define VkglTestCase_024566_2 "d.formats.rgba8_snorm_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024566, VkglTestCase_024566_1, VkglTestCase_024566_2);

#define VkglTestCase_024567_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024567_2 "ltering.3d.formats.rgb565_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024567, VkglTestCase_024567_1, VkglTestCase_024567_2);

#define VkglTestCase_024568_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024568_2 "ltering.3d.formats.rgb565_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024568, VkglTestCase_024568_1, VkglTestCase_024568_2);

#define VkglTestCase_024569_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024569_2 "3d.formats.rgb565_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024569, VkglTestCase_024569_1, VkglTestCase_024569_2);

#define VkglTestCase_024570_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024570_2 ".3d.formats.rgb565_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024570, VkglTestCase_024570_1, VkglTestCase_024570_2);

#define VkglTestCase_024571_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024571_2 ".3d.formats.rgb565_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024571, VkglTestCase_024571_1, VkglTestCase_024571_2);

#define VkglTestCase_024572_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024572_2 ".3d.formats.rgb565_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024572, VkglTestCase_024572_1, VkglTestCase_024572_2);

#define VkglTestCase_024573_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024573_2 "ltering.3d.formats.rgba4_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024573, VkglTestCase_024573_1, VkglTestCase_024573_2);

#define VkglTestCase_024574_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_024574_2 "iltering.3d.formats.rgba4_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024574, VkglTestCase_024574_1, VkglTestCase_024574_2);

#define VkglTestCase_024575_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024575_2 ".3d.formats.rgba4_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024575, VkglTestCase_024575_1, VkglTestCase_024575_2);

#define VkglTestCase_024576_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024576_2 ".3d.formats.rgba4_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024576, VkglTestCase_024576_1, VkglTestCase_024576_2);

#define VkglTestCase_024577_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024577_2 ".3d.formats.rgba4_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024577, VkglTestCase_024577_1, VkglTestCase_024577_2);

#define VkglTestCase_024578_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024578_2 "g.3d.formats.rgba4_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024578, VkglTestCase_024578_1, VkglTestCase_024578_2);

#define VkglTestCase_024579_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024579_2 "tering.3d.formats.rgb5_a1_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024579, VkglTestCase_024579_1, VkglTestCase_024579_2);

#define VkglTestCase_024580_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024580_2 "ltering.3d.formats.rgb5_a1_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024580, VkglTestCase_024580_1, VkglTestCase_024580_2);

#define VkglTestCase_024581_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024581_2 "3d.formats.rgb5_a1_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024581, VkglTestCase_024581_1, VkglTestCase_024581_2);

#define VkglTestCase_024582_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024582_2 "3d.formats.rgb5_a1_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024582, VkglTestCase_024582_1, VkglTestCase_024582_2);

#define VkglTestCase_024583_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024583_2 "3d.formats.rgb5_a1_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024583, VkglTestCase_024583_1, VkglTestCase_024583_2);

#define VkglTestCase_024584_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024584_2 ".3d.formats.rgb5_a1_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024584, VkglTestCase_024584_1, VkglTestCase_024584_2);

#define VkglTestCase_024585_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024585_2 "ring.3d.formats.srgb8_alpha8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024585, VkglTestCase_024585_1, VkglTestCase_024585_2);

#define VkglTestCase_024586_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024586_2 "ring.3d.formats.srgb8_alpha8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024586, VkglTestCase_024586_1, VkglTestCase_024586_2);

#define VkglTestCase_024587_1 "dEQP-GLES3.functional.texture.filtering.3d."
#define VkglTestCase_024587_2 "formats.srgb8_alpha8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024587, VkglTestCase_024587_1, VkglTestCase_024587_2);

#define VkglTestCase_024588_1 "dEQP-GLES3.functional.texture.filtering.3d"
#define VkglTestCase_024588_2 ".formats.srgb8_alpha8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024588, VkglTestCase_024588_1, VkglTestCase_024588_2);

#define VkglTestCase_024589_1 "dEQP-GLES3.functional.texture.filtering.3d"
#define VkglTestCase_024589_2 ".formats.srgb8_alpha8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024589, VkglTestCase_024589_1, VkglTestCase_024589_2);

#define VkglTestCase_024590_1 "dEQP-GLES3.functional.texture.filtering.3d"
#define VkglTestCase_024590_2 ".formats.srgb8_alpha8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024590, VkglTestCase_024590_1, VkglTestCase_024590_2);

#define VkglTestCase_024591_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024591_2 "tering.3d.formats.srgb_r8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024591, VkglTestCase_024591_1, VkglTestCase_024591_2);

#define VkglTestCase_024592_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024592_2 "ltering.3d.formats.srgb_r8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024592, VkglTestCase_024592_1, VkglTestCase_024592_2);

#define VkglTestCase_024593_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024593_2 "3d.formats.srgb_r8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024593, VkglTestCase_024593_1, VkglTestCase_024593_2);

#define VkglTestCase_024594_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024594_2 "3d.formats.srgb_r8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024594, VkglTestCase_024594_1, VkglTestCase_024594_2);

#define VkglTestCase_024595_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024595_2 "3d.formats.srgb_r8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024595, VkglTestCase_024595_1, VkglTestCase_024595_2);

#define VkglTestCase_024596_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024596_2 ".3d.formats.srgb_r8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024596, VkglTestCase_024596_1, VkglTestCase_024596_2);

#define VkglTestCase_024597_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024597_2 "tering.3d.formats.srgb_rg8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024597, VkglTestCase_024597_1, VkglTestCase_024597_2);

#define VkglTestCase_024598_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024598_2 "tering.3d.formats.srgb_rg8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024598, VkglTestCase_024598_1, VkglTestCase_024598_2);

#define VkglTestCase_024599_1 "dEQP-GLES3.functional.texture.filtering.3"
#define VkglTestCase_024599_2 "d.formats.srgb_rg8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024599, VkglTestCase_024599_1, VkglTestCase_024599_2);

#define VkglTestCase_024600_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024600_2 "3d.formats.srgb_rg8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024600, VkglTestCase_024600_1, VkglTestCase_024600_2);

#define VkglTestCase_024601_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024601_2 "3d.formats.srgb_rg8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024601, VkglTestCase_024601_1, VkglTestCase_024601_2);

#define VkglTestCase_024602_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024602_2 "3d.formats.srgb_rg8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024602, VkglTestCase_024602_1, VkglTestCase_024602_2);

#define VkglTestCase_024603_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024603_2 "tering.3d.formats.rgb10_a2_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024603, VkglTestCase_024603_1, VkglTestCase_024603_2);

#define VkglTestCase_024604_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024604_2 "tering.3d.formats.rgb10_a2_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024604, VkglTestCase_024604_1, VkglTestCase_024604_2);

#define VkglTestCase_024605_1 "dEQP-GLES3.functional.texture.filtering.3"
#define VkglTestCase_024605_2 "d.formats.rgb10_a2_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024605, VkglTestCase_024605_1, VkglTestCase_024605_2);

#define VkglTestCase_024606_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024606_2 "3d.formats.rgb10_a2_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024606, VkglTestCase_024606_1, VkglTestCase_024606_2);

#define VkglTestCase_024607_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024607_2 "3d.formats.rgb10_a2_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024607, VkglTestCase_024607_1, VkglTestCase_024607_2);

#define VkglTestCase_024608_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024608_2 "3d.formats.rgb10_a2_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024608, VkglTestCase_024608_1, VkglTestCase_024608_2);
