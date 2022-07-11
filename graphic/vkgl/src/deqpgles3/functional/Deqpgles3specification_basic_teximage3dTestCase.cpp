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

#define VkglTestCase_026296_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026296_2 "ation.basic_teximage3d.rgba32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026296, VkglTestCase_026296_1, VkglTestCase_026296_2);

#define VkglTestCase_026297_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026297_2 "fication.basic_teximage3d.rgba32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026297, VkglTestCase_026297_1, VkglTestCase_026297_2);

#define VkglTestCase_026298_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026298_2 "ation.basic_teximage3d.rgba32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026298, VkglTestCase_026298_1, VkglTestCase_026298_2);

#define VkglTestCase_026299_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026299_2 "fication.basic_teximage3d.rgba32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026299, VkglTestCase_026299_1, VkglTestCase_026299_2);

#define VkglTestCase_026300_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026300_2 "tion.basic_teximage3d.rgba32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026300, VkglTestCase_026300_1, VkglTestCase_026300_2);

#define VkglTestCase_026301_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026301_2 "ication.basic_teximage3d.rgba32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026301, VkglTestCase_026301_1, VkglTestCase_026301_2);

#define VkglTestCase_026302_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026302_2 "ation.basic_teximage3d.rgba16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026302, VkglTestCase_026302_1, VkglTestCase_026302_2);

#define VkglTestCase_026303_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026303_2 "fication.basic_teximage3d.rgba16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026303, VkglTestCase_026303_1, VkglTestCase_026303_2);

#define VkglTestCase_026304_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026304_2 "ation.basic_teximage3d.rgba16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026304, VkglTestCase_026304_1, VkglTestCase_026304_2);

#define VkglTestCase_026305_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026305_2 "fication.basic_teximage3d.rgba16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026305, VkglTestCase_026305_1, VkglTestCase_026305_2);

#define VkglTestCase_026306_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026306_2 "tion.basic_teximage3d.rgba16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026306, VkglTestCase_026306_1, VkglTestCase_026306_2);

#define VkglTestCase_026307_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026307_2 "ication.basic_teximage3d.rgba16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026307, VkglTestCase_026307_1, VkglTestCase_026307_2);

#define VkglTestCase_026308_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026308_2 "cation.basic_teximage3d.rgba8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026308, VkglTestCase_026308_1, VkglTestCase_026308_2);

#define VkglTestCase_026309_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026309_2 "ification.basic_teximage3d.rgba8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026309, VkglTestCase_026309_1, VkglTestCase_026309_2);

#define VkglTestCase_026310_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026310_2 "ation.basic_teximage3d.rgba8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026310, VkglTestCase_026310_1, VkglTestCase_026310_2);

#define VkglTestCase_026311_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026311_2 "fication.basic_teximage3d.rgba8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026311, VkglTestCase_026311_1, VkglTestCase_026311_2);

#define VkglTestCase_026312_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026312_2 "ation.basic_teximage3d.rgba8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026312, VkglTestCase_026312_1, VkglTestCase_026312_2);

#define VkglTestCase_026313_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026313_2 "fication.basic_teximage3d.rgba8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026313, VkglTestCase_026313_1, VkglTestCase_026313_2);

#define VkglTestCase_026314_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026314_2 "on.basic_teximage3d.srgb8_alpha8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026314, VkglTestCase_026314_1, VkglTestCase_026314_2);

#define VkglTestCase_026315_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026315_2 "ation.basic_teximage3d.srgb8_alpha8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026315, VkglTestCase_026315_1, VkglTestCase_026315_2);

#define VkglTestCase_026316_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026316_2 "tion.basic_teximage3d.rgb10_a2_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026316, VkglTestCase_026316_1, VkglTestCase_026316_2);

#define VkglTestCase_026317_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026317_2 "ication.basic_teximage3d.rgb10_a2_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026317, VkglTestCase_026317_1, VkglTestCase_026317_2);

#define VkglTestCase_026318_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026318_2 "ion.basic_teximage3d.rgb10_a2ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026318, VkglTestCase_026318_1, VkglTestCase_026318_2);

#define VkglTestCase_026319_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026319_2 "cation.basic_teximage3d.rgb10_a2ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026319, VkglTestCase_026319_1, VkglTestCase_026319_2);

#define VkglTestCase_026320_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026320_2 "cation.basic_teximage3d.rgba4_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026320, VkglTestCase_026320_1, VkglTestCase_026320_2);

#define VkglTestCase_026321_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026321_2 "ification.basic_teximage3d.rgba4_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026321, VkglTestCase_026321_1, VkglTestCase_026321_2);

#define VkglTestCase_026322_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026322_2 "ation.basic_teximage3d.rgb5_a1_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026322, VkglTestCase_026322_1, VkglTestCase_026322_2);

#define VkglTestCase_026323_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026323_2 "fication.basic_teximage3d.rgb5_a1_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026323, VkglTestCase_026323_1, VkglTestCase_026323_2);

#define VkglTestCase_026324_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026324_2 "ion.basic_teximage3d.rgba8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026324, VkglTestCase_026324_1, VkglTestCase_026324_2);

#define VkglTestCase_026325_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026325_2 "cation.basic_teximage3d.rgba8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026325, VkglTestCase_026325_1, VkglTestCase_026325_2);

#define VkglTestCase_026326_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026326_2 "cation.basic_teximage3d.rgb8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026326, VkglTestCase_026326_1, VkglTestCase_026326_2);

#define VkglTestCase_026327_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026327_2 "ification.basic_teximage3d.rgb8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026327, VkglTestCase_026327_1, VkglTestCase_026327_2);

#define VkglTestCase_026328_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026328_2 "ation.basic_teximage3d.rgb565_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026328, VkglTestCase_026328_1, VkglTestCase_026328_2);

#define VkglTestCase_026329_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026329_2 "fication.basic_teximage3d.rgb565_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026329, VkglTestCase_026329_1, VkglTestCase_026329_2);

#define VkglTestCase_026330_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026330_2 "n.basic_teximage3d.r11f_g11f_b10f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026330, VkglTestCase_026330_1, VkglTestCase_026330_2);

#define VkglTestCase_026331_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026331_2 "tion.basic_teximage3d.r11f_g11f_b10f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026331, VkglTestCase_026331_1, VkglTestCase_026331_2);

#define VkglTestCase_026332_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026332_2 "ation.basic_teximage3d.rgb32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026332, VkglTestCase_026332_1, VkglTestCase_026332_2);

#define VkglTestCase_026333_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026333_2 "fication.basic_teximage3d.rgb32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026333, VkglTestCase_026333_1, VkglTestCase_026333_2);

#define VkglTestCase_026334_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026334_2 "ation.basic_teximage3d.rgb32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026334, VkglTestCase_026334_1, VkglTestCase_026334_2);

#define VkglTestCase_026335_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026335_2 "fication.basic_teximage3d.rgb32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026335, VkglTestCase_026335_1, VkglTestCase_026335_2);

#define VkglTestCase_026336_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026336_2 "ation.basic_teximage3d.rgb32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026336, VkglTestCase_026336_1, VkglTestCase_026336_2);

#define VkglTestCase_026337_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026337_2 "fication.basic_teximage3d.rgb32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026337, VkglTestCase_026337_1, VkglTestCase_026337_2);

#define VkglTestCase_026338_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026338_2 "ation.basic_teximage3d.rgb16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026338, VkglTestCase_026338_1, VkglTestCase_026338_2);

#define VkglTestCase_026339_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026339_2 "fication.basic_teximage3d.rgb16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026339, VkglTestCase_026339_1, VkglTestCase_026339_2);

#define VkglTestCase_026340_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026340_2 "ation.basic_teximage3d.rgb16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026340, VkglTestCase_026340_1, VkglTestCase_026340_2);

#define VkglTestCase_026341_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026341_2 "fication.basic_teximage3d.rgb16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026341, VkglTestCase_026341_1, VkglTestCase_026341_2);

#define VkglTestCase_026342_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026342_2 "ation.basic_teximage3d.rgb16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026342, VkglTestCase_026342_1, VkglTestCase_026342_2);

#define VkglTestCase_026343_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026343_2 "fication.basic_teximage3d.rgb16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026343, VkglTestCase_026343_1, VkglTestCase_026343_2);

#define VkglTestCase_026344_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026344_2 "ion.basic_teximage3d.rgb8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026344, VkglTestCase_026344_1, VkglTestCase_026344_2);

#define VkglTestCase_026345_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026345_2 "cation.basic_teximage3d.rgb8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026345, VkglTestCase_026345_1, VkglTestCase_026345_2);

#define VkglTestCase_026346_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026346_2 "cation.basic_teximage3d.rgb8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026346, VkglTestCase_026346_1, VkglTestCase_026346_2);

#define VkglTestCase_026347_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026347_2 "ification.basic_teximage3d.rgb8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026347, VkglTestCase_026347_1, VkglTestCase_026347_2);

#define VkglTestCase_026348_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026348_2 "ation.basic_teximage3d.rgb8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026348, VkglTestCase_026348_1, VkglTestCase_026348_2);

#define VkglTestCase_026349_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026349_2 "fication.basic_teximage3d.rgb8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026349, VkglTestCase_026349_1, VkglTestCase_026349_2);

#define VkglTestCase_026350_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026350_2 "cation.basic_teximage3d.srgb8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026350, VkglTestCase_026350_1, VkglTestCase_026350_2);

#define VkglTestCase_026351_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026351_2 "ification.basic_teximage3d.srgb8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026351, VkglTestCase_026351_1, VkglTestCase_026351_2);

#define VkglTestCase_026352_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026352_2 "ation.basic_teximage3d.rgb9_e5_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026352, VkglTestCase_026352_1, VkglTestCase_026352_2);

#define VkglTestCase_026353_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026353_2 "fication.basic_teximage3d.rgb9_e5_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026353, VkglTestCase_026353_1, VkglTestCase_026353_2);

#define VkglTestCase_026354_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026354_2 "cation.basic_teximage3d.rg32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026354, VkglTestCase_026354_1, VkglTestCase_026354_2);

#define VkglTestCase_026355_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026355_2 "ification.basic_teximage3d.rg32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026355, VkglTestCase_026355_1, VkglTestCase_026355_2);

#define VkglTestCase_026356_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026356_2 "cation.basic_teximage3d.rg32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026356, VkglTestCase_026356_1, VkglTestCase_026356_2);

#define VkglTestCase_026357_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026357_2 "ification.basic_teximage3d.rg32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026357, VkglTestCase_026357_1, VkglTestCase_026357_2);

#define VkglTestCase_026358_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026358_2 "ation.basic_teximage3d.rg32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026358, VkglTestCase_026358_1, VkglTestCase_026358_2);

#define VkglTestCase_026359_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026359_2 "fication.basic_teximage3d.rg32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026359, VkglTestCase_026359_1, VkglTestCase_026359_2);

#define VkglTestCase_026360_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026360_2 "cation.basic_teximage3d.rg16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026360, VkglTestCase_026360_1, VkglTestCase_026360_2);

#define VkglTestCase_026361_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026361_2 "ification.basic_teximage3d.rg16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026361, VkglTestCase_026361_1, VkglTestCase_026361_2);

#define VkglTestCase_026362_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026362_2 "cation.basic_teximage3d.rg16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026362, VkglTestCase_026362_1, VkglTestCase_026362_2);

#define VkglTestCase_026363_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026363_2 "ification.basic_teximage3d.rg16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026363, VkglTestCase_026363_1, VkglTestCase_026363_2);

#define VkglTestCase_026364_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026364_2 "ation.basic_teximage3d.rg16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026364, VkglTestCase_026364_1, VkglTestCase_026364_2);

#define VkglTestCase_026365_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026365_2 "fication.basic_teximage3d.rg16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026365, VkglTestCase_026365_1, VkglTestCase_026365_2);

#define VkglTestCase_026366_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026366_2 "ication.basic_teximage3d.rg8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026366, VkglTestCase_026366_1, VkglTestCase_026366_2);

#define VkglTestCase_026367_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026367_2 "cification.basic_teximage3d.rg8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026367, VkglTestCase_026367_1, VkglTestCase_026367_2);

#define VkglTestCase_026368_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026368_2 "cation.basic_teximage3d.rg8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026368, VkglTestCase_026368_1, VkglTestCase_026368_2);

#define VkglTestCase_026369_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026369_2 "ification.basic_teximage3d.rg8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026369, VkglTestCase_026369_1, VkglTestCase_026369_2);

#define VkglTestCase_026370_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026370_2 "cation.basic_teximage3d.rg8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026370, VkglTestCase_026370_1, VkglTestCase_026370_2);

#define VkglTestCase_026371_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026371_2 "ification.basic_teximage3d.rg8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026371, VkglTestCase_026371_1, VkglTestCase_026371_2);

#define VkglTestCase_026372_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026372_2 "tion.basic_teximage3d.rg8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026372, VkglTestCase_026372_1, VkglTestCase_026372_2);

#define VkglTestCase_026373_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026373_2 "ication.basic_teximage3d.rg8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026373, VkglTestCase_026373_1, VkglTestCase_026373_2);

#define VkglTestCase_026374_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026374_2 "cation.basic_teximage3d.r32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026374, VkglTestCase_026374_1, VkglTestCase_026374_2);

#define VkglTestCase_026375_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026375_2 "ification.basic_teximage3d.r32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026375, VkglTestCase_026375_1, VkglTestCase_026375_2);

#define VkglTestCase_026376_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026376_2 "cation.basic_teximage3d.r32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026376, VkglTestCase_026376_1, VkglTestCase_026376_2);

#define VkglTestCase_026377_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026377_2 "ification.basic_teximage3d.r32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026377, VkglTestCase_026377_1, VkglTestCase_026377_2);

#define VkglTestCase_026378_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026378_2 "cation.basic_teximage3d.r32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026378, VkglTestCase_026378_1, VkglTestCase_026378_2);

#define VkglTestCase_026379_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026379_2 "ification.basic_teximage3d.r32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026379, VkglTestCase_026379_1, VkglTestCase_026379_2);

#define VkglTestCase_026380_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026380_2 "cation.basic_teximage3d.r16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026380, VkglTestCase_026380_1, VkglTestCase_026380_2);

#define VkglTestCase_026381_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026381_2 "ification.basic_teximage3d.r16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026381, VkglTestCase_026381_1, VkglTestCase_026381_2);

#define VkglTestCase_026382_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026382_2 "cation.basic_teximage3d.r16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026382, VkglTestCase_026382_1, VkglTestCase_026382_2);

#define VkglTestCase_026383_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026383_2 "ification.basic_teximage3d.r16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026383, VkglTestCase_026383_1, VkglTestCase_026383_2);

#define VkglTestCase_026384_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026384_2 "cation.basic_teximage3d.r16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026384, VkglTestCase_026384_1, VkglTestCase_026384_2);

#define VkglTestCase_026385_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026385_2 "ification.basic_teximage3d.r16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026385, VkglTestCase_026385_1, VkglTestCase_026385_2);

#define VkglTestCase_026386_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026386_2 "ication.basic_teximage3d.r8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026386, VkglTestCase_026386_1, VkglTestCase_026386_2);

#define VkglTestCase_026387_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026387_2 "cification.basic_teximage3d.r8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026387, VkglTestCase_026387_1, VkglTestCase_026387_2);

#define VkglTestCase_026388_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026388_2 "ication.basic_teximage3d.r8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026388, VkglTestCase_026388_1, VkglTestCase_026388_2);

#define VkglTestCase_026389_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026389_2 "cification.basic_teximage3d.r8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026389, VkglTestCase_026389_1, VkglTestCase_026389_2);

#define VkglTestCase_026390_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026390_2 "cation.basic_teximage3d.r8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026390, VkglTestCase_026390_1, VkglTestCase_026390_2);

#define VkglTestCase_026391_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026391_2 "ification.basic_teximage3d.r8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026391, VkglTestCase_026391_1, VkglTestCase_026391_2);

#define VkglTestCase_026392_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026392_2 "tion.basic_teximage3d.r8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026392, VkglTestCase_026392_1, VkglTestCase_026392_2);

#define VkglTestCase_026393_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026393_2 "ication.basic_teximage3d.r8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026393, VkglTestCase_026393_1, VkglTestCase_026393_2);
