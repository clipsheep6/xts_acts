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
#include "../ActsDeqpgles30027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026593_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026593_2 "tion.texsubimage3d_pbo.rgba32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026593, VkglTestCase_026593_1, VkglTestCase_026593_2);

#define VkglTestCase_026594_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026594_2 "ication.texsubimage3d_pbo.rgba32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026594, VkglTestCase_026594_1, VkglTestCase_026594_2);

#define VkglTestCase_026595_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026595_2 "tion.texsubimage3d_pbo.rgba32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026595, VkglTestCase_026595_1, VkglTestCase_026595_2);

#define VkglTestCase_026596_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026596_2 "ication.texsubimage3d_pbo.rgba32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026596, VkglTestCase_026596_1, VkglTestCase_026596_2);

#define VkglTestCase_026597_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026597_2 "tion.texsubimage3d_pbo.rgba32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026597, VkglTestCase_026597_1, VkglTestCase_026597_2);

#define VkglTestCase_026598_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026598_2 "ication.texsubimage3d_pbo.rgba32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026598, VkglTestCase_026598_1, VkglTestCase_026598_2);

#define VkglTestCase_026599_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026599_2 "tion.texsubimage3d_pbo.rgba16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026599, VkglTestCase_026599_1, VkglTestCase_026599_2);

#define VkglTestCase_026600_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026600_2 "ication.texsubimage3d_pbo.rgba16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026600, VkglTestCase_026600_1, VkglTestCase_026600_2);

#define VkglTestCase_026601_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026601_2 "tion.texsubimage3d_pbo.rgba16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026601, VkglTestCase_026601_1, VkglTestCase_026601_2);

#define VkglTestCase_026602_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026602_2 "ication.texsubimage3d_pbo.rgba16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026602, VkglTestCase_026602_1, VkglTestCase_026602_2);

#define VkglTestCase_026603_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026603_2 "tion.texsubimage3d_pbo.rgba16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026603, VkglTestCase_026603_1, VkglTestCase_026603_2);

#define VkglTestCase_026604_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026604_2 "ication.texsubimage3d_pbo.rgba16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026604, VkglTestCase_026604_1, VkglTestCase_026604_2);

#define VkglTestCase_026605_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026605_2 "ation.texsubimage3d_pbo.rgba8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026605, VkglTestCase_026605_1, VkglTestCase_026605_2);

#define VkglTestCase_026606_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026606_2 "fication.texsubimage3d_pbo.rgba8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026606, VkglTestCase_026606_1, VkglTestCase_026606_2);

#define VkglTestCase_026607_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026607_2 "ation.texsubimage3d_pbo.rgba8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026607, VkglTestCase_026607_1, VkglTestCase_026607_2);

#define VkglTestCase_026608_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026608_2 "fication.texsubimage3d_pbo.rgba8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026608, VkglTestCase_026608_1, VkglTestCase_026608_2);

#define VkglTestCase_026609_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026609_2 "tion.texsubimage3d_pbo.rgba8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026609, VkglTestCase_026609_1, VkglTestCase_026609_2);

#define VkglTestCase_026610_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026610_2 "ication.texsubimage3d_pbo.rgba8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026610, VkglTestCase_026610_1, VkglTestCase_026610_2);

#define VkglTestCase_026611_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026611_2 "on.texsubimage3d_pbo.srgb8_alpha8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026611, VkglTestCase_026611_1, VkglTestCase_026611_2);

#define VkglTestCase_026612_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026612_2 "ation.texsubimage3d_pbo.srgb8_alpha8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026612, VkglTestCase_026612_1, VkglTestCase_026612_2);

#define VkglTestCase_026613_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026613_2 "tion.texsubimage3d_pbo.rgb10_a2_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026613, VkglTestCase_026613_1, VkglTestCase_026613_2);

#define VkglTestCase_026614_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026614_2 "ication.texsubimage3d_pbo.rgb10_a2_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026614, VkglTestCase_026614_1, VkglTestCase_026614_2);

#define VkglTestCase_026615_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026615_2 "ion.texsubimage3d_pbo.rgb10_a2ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026615, VkglTestCase_026615_1, VkglTestCase_026615_2);

#define VkglTestCase_026616_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026616_2 "cation.texsubimage3d_pbo.rgb10_a2ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026616, VkglTestCase_026616_1, VkglTestCase_026616_2);

#define VkglTestCase_026617_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026617_2 "ation.texsubimage3d_pbo.rgba4_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026617, VkglTestCase_026617_1, VkglTestCase_026617_2);

#define VkglTestCase_026618_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026618_2 "fication.texsubimage3d_pbo.rgba4_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026618, VkglTestCase_026618_1, VkglTestCase_026618_2);

#define VkglTestCase_026619_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026619_2 "tion.texsubimage3d_pbo.rgb5_a1_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026619, VkglTestCase_026619_1, VkglTestCase_026619_2);

#define VkglTestCase_026620_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026620_2 "ication.texsubimage3d_pbo.rgb5_a1_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026620, VkglTestCase_026620_1, VkglTestCase_026620_2);

#define VkglTestCase_026621_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026621_2 "on.texsubimage3d_pbo.rgba8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026621, VkglTestCase_026621_1, VkglTestCase_026621_2);

#define VkglTestCase_026622_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026622_2 "ation.texsubimage3d_pbo.rgba8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026622, VkglTestCase_026622_1, VkglTestCase_026622_2);

#define VkglTestCase_026623_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026623_2 "cation.texsubimage3d_pbo.rgb8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026623, VkglTestCase_026623_1, VkglTestCase_026623_2);

#define VkglTestCase_026624_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026624_2 "ification.texsubimage3d_pbo.rgb8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026624, VkglTestCase_026624_1, VkglTestCase_026624_2);

#define VkglTestCase_026625_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026625_2 "ation.texsubimage3d_pbo.rgb565_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026625, VkglTestCase_026625_1, VkglTestCase_026625_2);

#define VkglTestCase_026626_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026626_2 "fication.texsubimage3d_pbo.rgb565_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026626, VkglTestCase_026626_1, VkglTestCase_026626_2);

#define VkglTestCase_026627_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026627_2 "n.texsubimage3d_pbo.r11f_g11f_b10f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026627, VkglTestCase_026627_1, VkglTestCase_026627_2);

#define VkglTestCase_026628_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026628_2 "tion.texsubimage3d_pbo.r11f_g11f_b10f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026628, VkglTestCase_026628_1, VkglTestCase_026628_2);

#define VkglTestCase_026629_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026629_2 "ation.texsubimage3d_pbo.rgb32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026629, VkglTestCase_026629_1, VkglTestCase_026629_2);

#define VkglTestCase_026630_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026630_2 "fication.texsubimage3d_pbo.rgb32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026630, VkglTestCase_026630_1, VkglTestCase_026630_2);

#define VkglTestCase_026631_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026631_2 "ation.texsubimage3d_pbo.rgb32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026631, VkglTestCase_026631_1, VkglTestCase_026631_2);

#define VkglTestCase_026632_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026632_2 "fication.texsubimage3d_pbo.rgb32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026632, VkglTestCase_026632_1, VkglTestCase_026632_2);

#define VkglTestCase_026633_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026633_2 "tion.texsubimage3d_pbo.rgb32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026633, VkglTestCase_026633_1, VkglTestCase_026633_2);

#define VkglTestCase_026634_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026634_2 "ication.texsubimage3d_pbo.rgb32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026634, VkglTestCase_026634_1, VkglTestCase_026634_2);

#define VkglTestCase_026635_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026635_2 "ation.texsubimage3d_pbo.rgb16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026635, VkglTestCase_026635_1, VkglTestCase_026635_2);

#define VkglTestCase_026636_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026636_2 "fication.texsubimage3d_pbo.rgb16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026636, VkglTestCase_026636_1, VkglTestCase_026636_2);

#define VkglTestCase_026637_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026637_2 "ation.texsubimage3d_pbo.rgb16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026637, VkglTestCase_026637_1, VkglTestCase_026637_2);

#define VkglTestCase_026638_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026638_2 "fication.texsubimage3d_pbo.rgb16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026638, VkglTestCase_026638_1, VkglTestCase_026638_2);

#define VkglTestCase_026639_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026639_2 "tion.texsubimage3d_pbo.rgb16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026639, VkglTestCase_026639_1, VkglTestCase_026639_2);

#define VkglTestCase_026640_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026640_2 "ication.texsubimage3d_pbo.rgb16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026640, VkglTestCase_026640_1, VkglTestCase_026640_2);

#define VkglTestCase_026641_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026641_2 "ion.texsubimage3d_pbo.rgb8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026641, VkglTestCase_026641_1, VkglTestCase_026641_2);

#define VkglTestCase_026642_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026642_2 "cation.texsubimage3d_pbo.rgb8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026642, VkglTestCase_026642_1, VkglTestCase_026642_2);

#define VkglTestCase_026643_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026643_2 "ation.texsubimage3d_pbo.rgb8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026643, VkglTestCase_026643_1, VkglTestCase_026643_2);

#define VkglTestCase_026644_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026644_2 "fication.texsubimage3d_pbo.rgb8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026644, VkglTestCase_026644_1, VkglTestCase_026644_2);

#define VkglTestCase_026645_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026645_2 "ation.texsubimage3d_pbo.rgb8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026645, VkglTestCase_026645_1, VkglTestCase_026645_2);

#define VkglTestCase_026646_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026646_2 "fication.texsubimage3d_pbo.rgb8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026646, VkglTestCase_026646_1, VkglTestCase_026646_2);

#define VkglTestCase_026647_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026647_2 "ation.texsubimage3d_pbo.srgb8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026647, VkglTestCase_026647_1, VkglTestCase_026647_2);

#define VkglTestCase_026648_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026648_2 "fication.texsubimage3d_pbo.srgb8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026648, VkglTestCase_026648_1, VkglTestCase_026648_2);

#define VkglTestCase_026649_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026649_2 "tion.texsubimage3d_pbo.rgb9_e5_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026649, VkglTestCase_026649_1, VkglTestCase_026649_2);

#define VkglTestCase_026650_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026650_2 "ication.texsubimage3d_pbo.rgb9_e5_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026650, VkglTestCase_026650_1, VkglTestCase_026650_2);

#define VkglTestCase_026651_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026651_2 "ation.texsubimage3d_pbo.rg32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026651, VkglTestCase_026651_1, VkglTestCase_026651_2);

#define VkglTestCase_026652_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026652_2 "fication.texsubimage3d_pbo.rg32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026652, VkglTestCase_026652_1, VkglTestCase_026652_2);

#define VkglTestCase_026653_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026653_2 "ation.texsubimage3d_pbo.rg32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026653, VkglTestCase_026653_1, VkglTestCase_026653_2);

#define VkglTestCase_026654_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026654_2 "fication.texsubimage3d_pbo.rg32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026654, VkglTestCase_026654_1, VkglTestCase_026654_2);

#define VkglTestCase_026655_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026655_2 "ation.texsubimage3d_pbo.rg32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026655, VkglTestCase_026655_1, VkglTestCase_026655_2);

#define VkglTestCase_026656_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026656_2 "fication.texsubimage3d_pbo.rg32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026656, VkglTestCase_026656_1, VkglTestCase_026656_2);

#define VkglTestCase_026657_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026657_2 "ation.texsubimage3d_pbo.rg16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026657, VkglTestCase_026657_1, VkglTestCase_026657_2);

#define VkglTestCase_026658_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026658_2 "fication.texsubimage3d_pbo.rg16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026658, VkglTestCase_026658_1, VkglTestCase_026658_2);

#define VkglTestCase_026659_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026659_2 "ation.texsubimage3d_pbo.rg16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026659, VkglTestCase_026659_1, VkglTestCase_026659_2);

#define VkglTestCase_026660_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026660_2 "fication.texsubimage3d_pbo.rg16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026660, VkglTestCase_026660_1, VkglTestCase_026660_2);

#define VkglTestCase_026661_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026661_2 "ation.texsubimage3d_pbo.rg16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026661, VkglTestCase_026661_1, VkglTestCase_026661_2);

#define VkglTestCase_026662_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026662_2 "fication.texsubimage3d_pbo.rg16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026662, VkglTestCase_026662_1, VkglTestCase_026662_2);

#define VkglTestCase_026663_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026663_2 "cation.texsubimage3d_pbo.rg8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026663, VkglTestCase_026663_1, VkglTestCase_026663_2);

#define VkglTestCase_026664_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026664_2 "ification.texsubimage3d_pbo.rg8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026664, VkglTestCase_026664_1, VkglTestCase_026664_2);

#define VkglTestCase_026665_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026665_2 "cation.texsubimage3d_pbo.rg8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026665, VkglTestCase_026665_1, VkglTestCase_026665_2);

#define VkglTestCase_026666_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026666_2 "ification.texsubimage3d_pbo.rg8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026666, VkglTestCase_026666_1, VkglTestCase_026666_2);

#define VkglTestCase_026667_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026667_2 "ation.texsubimage3d_pbo.rg8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026667, VkglTestCase_026667_1, VkglTestCase_026667_2);

#define VkglTestCase_026668_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026668_2 "fication.texsubimage3d_pbo.rg8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026668, VkglTestCase_026668_1, VkglTestCase_026668_2);

#define VkglTestCase_026669_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026669_2 "ion.texsubimage3d_pbo.rg8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026669, VkglTestCase_026669_1, VkglTestCase_026669_2);

#define VkglTestCase_026670_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026670_2 "cation.texsubimage3d_pbo.rg8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026670, VkglTestCase_026670_1, VkglTestCase_026670_2);

#define VkglTestCase_026671_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026671_2 "cation.texsubimage3d_pbo.r32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026671, VkglTestCase_026671_1, VkglTestCase_026671_2);

#define VkglTestCase_026672_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026672_2 "ification.texsubimage3d_pbo.r32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026672, VkglTestCase_026672_1, VkglTestCase_026672_2);

#define VkglTestCase_026673_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026673_2 "cation.texsubimage3d_pbo.r32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026673, VkglTestCase_026673_1, VkglTestCase_026673_2);

#define VkglTestCase_026674_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026674_2 "ification.texsubimage3d_pbo.r32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026674, VkglTestCase_026674_1, VkglTestCase_026674_2);

#define VkglTestCase_026675_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026675_2 "ation.texsubimage3d_pbo.r32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026675, VkglTestCase_026675_1, VkglTestCase_026675_2);

#define VkglTestCase_026676_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026676_2 "fication.texsubimage3d_pbo.r32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026676, VkglTestCase_026676_1, VkglTestCase_026676_2);

#define VkglTestCase_026677_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026677_2 "cation.texsubimage3d_pbo.r16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026677, VkglTestCase_026677_1, VkglTestCase_026677_2);

#define VkglTestCase_026678_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026678_2 "ification.texsubimage3d_pbo.r16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026678, VkglTestCase_026678_1, VkglTestCase_026678_2);

#define VkglTestCase_026679_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026679_2 "cation.texsubimage3d_pbo.r16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026679, VkglTestCase_026679_1, VkglTestCase_026679_2);

#define VkglTestCase_026680_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026680_2 "ification.texsubimage3d_pbo.r16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026680, VkglTestCase_026680_1, VkglTestCase_026680_2);

#define VkglTestCase_026681_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026681_2 "ation.texsubimage3d_pbo.r16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026681, VkglTestCase_026681_1, VkglTestCase_026681_2);

#define VkglTestCase_026682_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026682_2 "fication.texsubimage3d_pbo.r16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026682, VkglTestCase_026682_1, VkglTestCase_026682_2);

#define VkglTestCase_026683_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026683_2 "ication.texsubimage3d_pbo.r8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026683, VkglTestCase_026683_1, VkglTestCase_026683_2);

#define VkglTestCase_026684_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026684_2 "cification.texsubimage3d_pbo.r8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026684, VkglTestCase_026684_1, VkglTestCase_026684_2);

#define VkglTestCase_026685_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026685_2 "cation.texsubimage3d_pbo.r8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026685, VkglTestCase_026685_1, VkglTestCase_026685_2);

#define VkglTestCase_026686_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026686_2 "ification.texsubimage3d_pbo.r8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026686, VkglTestCase_026686_1, VkglTestCase_026686_2);

#define VkglTestCase_026687_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026687_2 "cation.texsubimage3d_pbo.r8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026687, VkglTestCase_026687_1, VkglTestCase_026687_2);

#define VkglTestCase_026688_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026688_2 "ification.texsubimage3d_pbo.r8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026688, VkglTestCase_026688_1, VkglTestCase_026688_2);

#define VkglTestCase_026689_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026689_2 "tion.texsubimage3d_pbo.r8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026689, VkglTestCase_026689_1, VkglTestCase_026689_2);

#define VkglTestCase_026690_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026690_2 "ication.texsubimage3d_pbo.r8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026690, VkglTestCase_026690_1, VkglTestCase_026690_2);

#define VkglTestCase_026691_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026691_2 "on.texsubimage3d_pbo.rgb8_offset_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026691, VkglTestCase_026691_1, VkglTestCase_026691_2);

#define VkglTestCase_026692_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026692_2 "ation.texsubimage3d_pbo.rgb8_offset_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026692, VkglTestCase_026692_1, VkglTestCase_026692_2);

#define VkglTestCase_026693_1 "dEQP-GLES3.functional.texture.specification."
#define VkglTestCase_026693_2 "texsubimage3d_pbo.rgb8_image_height_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026693, VkglTestCase_026693_1, VkglTestCase_026693_2);

#define VkglTestCase_026694_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026694_2 "on.texsubimage3d_pbo.rgb8_image_height_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026694, VkglTestCase_026694_1, VkglTestCase_026694_2);

#define VkglTestCase_026695_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026695_2 ".texsubimage3d_pbo.rgb8_row_length_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026695, VkglTestCase_026695_1, VkglTestCase_026695_2);

#define VkglTestCase_026696_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026696_2 "ion.texsubimage3d_pbo.rgb8_row_length_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026696, VkglTestCase_026696_1, VkglTestCase_026696_2);

#define VkglTestCase_026697_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026697_2 ".texsubimage3d_pbo.rgb8_skip_images_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026697, VkglTestCase_026697_1, VkglTestCase_026697_2);

#define VkglTestCase_026698_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026698_2 "ion.texsubimage3d_pbo.rgb8_skip_images_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026698, VkglTestCase_026698_1, VkglTestCase_026698_2);

#define VkglTestCase_026699_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026699_2 "n.texsubimage3d_pbo.rgb8_skip_rows_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026699, VkglTestCase_026699_1, VkglTestCase_026699_2);

#define VkglTestCase_026700_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026700_2 "tion.texsubimage3d_pbo.rgb8_skip_rows_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026700, VkglTestCase_026700_1, VkglTestCase_026700_2);

#define VkglTestCase_026701_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026701_2 ".texsubimage3d_pbo.rgb8_skip_pixels_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026701, VkglTestCase_026701_1, VkglTestCase_026701_2);

#define VkglTestCase_026702_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026702_2 "ion.texsubimage3d_pbo.rgb8_skip_pixels_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026702, VkglTestCase_026702_1, VkglTestCase_026702_2);
