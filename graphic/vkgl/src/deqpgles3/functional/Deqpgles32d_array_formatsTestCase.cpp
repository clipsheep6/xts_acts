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

#define VkglTestCase_024327_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_024327_2 "ing.2d_array.formats.rgba16f_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024327, VkglTestCase_024327_1, VkglTestCase_024327_2);

#define VkglTestCase_024328_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024328_2 "ring.2d_array.formats.rgba16f_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024328, VkglTestCase_024328_1, VkglTestCase_024328_2);

#define VkglTestCase_024329_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024329_2 "array.formats.rgba16f_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024329, VkglTestCase_024329_1, VkglTestCase_024329_2);

#define VkglTestCase_024330_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024330_2 "array.formats.rgba16f_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024330, VkglTestCase_024330_1, VkglTestCase_024330_2);

#define VkglTestCase_024331_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024331_2 "array.formats.rgba16f_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024331, VkglTestCase_024331_1, VkglTestCase_024331_2);

#define VkglTestCase_024332_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024332_2 "_array.formats.rgba16f_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024332, VkglTestCase_024332_1, VkglTestCase_024332_2);

#define VkglTestCase_024333_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024333_2 ".2d_array.formats.r11f_g11f_b10f_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024333, VkglTestCase_024333_1, VkglTestCase_024333_2);

#define VkglTestCase_024334_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024334_2 ".2d_array.formats.r11f_g11f_b10f_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024334, VkglTestCase_024334_1, VkglTestCase_024334_2);

#define VkglTestCase_024335_1 "dEQP-GLES3.functional.texture.filtering.2d_arra"
#define VkglTestCase_024335_2 "y.formats.r11f_g11f_b10f_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024335, VkglTestCase_024335_1, VkglTestCase_024335_2);

#define VkglTestCase_024336_1 "dEQP-GLES3.functional.texture.filtering.2d_arr"
#define VkglTestCase_024336_2 "ay.formats.r11f_g11f_b10f_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024336, VkglTestCase_024336_1, VkglTestCase_024336_2);

#define VkglTestCase_024337_1 "dEQP-GLES3.functional.texture.filtering.2d_arr"
#define VkglTestCase_024337_2 "ay.formats.r11f_g11f_b10f_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024337, VkglTestCase_024337_1, VkglTestCase_024337_2);

#define VkglTestCase_024338_1 "dEQP-GLES3.functional.texture.filtering.2d_arr"
#define VkglTestCase_024338_2 "ay.formats.r11f_g11f_b10f_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024338, VkglTestCase_024338_1, VkglTestCase_024338_2);

#define VkglTestCase_024339_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_024339_2 "ing.2d_array.formats.rgb9_e5_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024339, VkglTestCase_024339_1, VkglTestCase_024339_2);

#define VkglTestCase_024340_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024340_2 "ring.2d_array.formats.rgb9_e5_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024340, VkglTestCase_024340_1, VkglTestCase_024340_2);

#define VkglTestCase_024341_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024341_2 "array.formats.rgb9_e5_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024341, VkglTestCase_024341_1, VkglTestCase_024341_2);

#define VkglTestCase_024342_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024342_2 "array.formats.rgb9_e5_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024342, VkglTestCase_024342_1, VkglTestCase_024342_2);

#define VkglTestCase_024343_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024343_2 "array.formats.rgb9_e5_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024343, VkglTestCase_024343_1, VkglTestCase_024343_2);

#define VkglTestCase_024344_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024344_2 "_array.formats.rgb9_e5_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024344, VkglTestCase_024344_1, VkglTestCase_024344_2);

#define VkglTestCase_024345_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024345_2 "ring.2d_array.formats.rgba8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024345, VkglTestCase_024345_1, VkglTestCase_024345_2);

#define VkglTestCase_024346_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_024346_2 "ering.2d_array.formats.rgba8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024346, VkglTestCase_024346_1, VkglTestCase_024346_2);

#define VkglTestCase_024347_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024347_2 "_array.formats.rgba8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024347, VkglTestCase_024347_1, VkglTestCase_024347_2);

#define VkglTestCase_024348_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024348_2 "_array.formats.rgba8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024348, VkglTestCase_024348_1, VkglTestCase_024348_2);

#define VkglTestCase_024349_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024349_2 "_array.formats.rgba8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024349, VkglTestCase_024349_1, VkglTestCase_024349_2);

#define VkglTestCase_024350_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024350_2 "d_array.formats.rgba8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024350, VkglTestCase_024350_1, VkglTestCase_024350_2);

#define VkglTestCase_024351_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024351_2 "g.2d_array.formats.rgba8_snorm_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024351, VkglTestCase_024351_1, VkglTestCase_024351_2);

#define VkglTestCase_024352_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_024352_2 "ng.2d_array.formats.rgba8_snorm_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024352, VkglTestCase_024352_1, VkglTestCase_024352_2);

#define VkglTestCase_024353_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024353_2 "ray.formats.rgba8_snorm_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024353, VkglTestCase_024353_1, VkglTestCase_024353_2);

#define VkglTestCase_024354_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024354_2 "ray.formats.rgba8_snorm_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024354, VkglTestCase_024354_1, VkglTestCase_024354_2);

#define VkglTestCase_024355_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024355_2 "ray.formats.rgba8_snorm_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024355, VkglTestCase_024355_1, VkglTestCase_024355_2);

#define VkglTestCase_024356_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024356_2 "rray.formats.rgba8_snorm_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024356, VkglTestCase_024356_1, VkglTestCase_024356_2);

#define VkglTestCase_024357_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024357_2 "ring.2d_array.formats.rgb565_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024357, VkglTestCase_024357_1, VkglTestCase_024357_2);

#define VkglTestCase_024358_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024358_2 "ring.2d_array.formats.rgb565_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024358, VkglTestCase_024358_1, VkglTestCase_024358_2);

#define VkglTestCase_024359_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024359_2 "array.formats.rgb565_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024359, VkglTestCase_024359_1, VkglTestCase_024359_2);

#define VkglTestCase_024360_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024360_2 "_array.formats.rgb565_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024360, VkglTestCase_024360_1, VkglTestCase_024360_2);

#define VkglTestCase_024361_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024361_2 "_array.formats.rgb565_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024361, VkglTestCase_024361_1, VkglTestCase_024361_2);

#define VkglTestCase_024362_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024362_2 "_array.formats.rgb565_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024362, VkglTestCase_024362_1, VkglTestCase_024362_2);

#define VkglTestCase_024363_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024363_2 "ring.2d_array.formats.rgba4_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024363, VkglTestCase_024363_1, VkglTestCase_024363_2);

#define VkglTestCase_024364_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_024364_2 "ering.2d_array.formats.rgba4_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024364, VkglTestCase_024364_1, VkglTestCase_024364_2);

#define VkglTestCase_024365_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024365_2 "_array.formats.rgba4_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024365, VkglTestCase_024365_1, VkglTestCase_024365_2);

#define VkglTestCase_024366_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024366_2 "_array.formats.rgba4_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024366, VkglTestCase_024366_1, VkglTestCase_024366_2);

#define VkglTestCase_024367_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024367_2 "_array.formats.rgba4_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024367, VkglTestCase_024367_1, VkglTestCase_024367_2);

#define VkglTestCase_024368_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024368_2 "d_array.formats.rgba4_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024368, VkglTestCase_024368_1, VkglTestCase_024368_2);

#define VkglTestCase_024369_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_024369_2 "ing.2d_array.formats.rgb5_a1_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024369, VkglTestCase_024369_1, VkglTestCase_024369_2);

#define VkglTestCase_024370_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024370_2 "ring.2d_array.formats.rgb5_a1_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024370, VkglTestCase_024370_1, VkglTestCase_024370_2);

#define VkglTestCase_024371_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024371_2 "array.formats.rgb5_a1_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024371, VkglTestCase_024371_1, VkglTestCase_024371_2);

#define VkglTestCase_024372_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024372_2 "array.formats.rgb5_a1_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024372, VkglTestCase_024372_1, VkglTestCase_024372_2);

#define VkglTestCase_024373_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024373_2 "array.formats.rgb5_a1_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024373, VkglTestCase_024373_1, VkglTestCase_024373_2);

#define VkglTestCase_024374_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024374_2 "_array.formats.rgb5_a1_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024374, VkglTestCase_024374_1, VkglTestCase_024374_2);

#define VkglTestCase_024375_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024375_2 "g.2d_array.formats.srgb8_alpha8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024375, VkglTestCase_024375_1, VkglTestCase_024375_2);

#define VkglTestCase_024376_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024376_2 "g.2d_array.formats.srgb8_alpha8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024376, VkglTestCase_024376_1, VkglTestCase_024376_2);

#define VkglTestCase_024377_1 "dEQP-GLES3.functional.texture.filtering.2d_arr"
#define VkglTestCase_024377_2 "ay.formats.srgb8_alpha8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024377, VkglTestCase_024377_1, VkglTestCase_024377_2);

#define VkglTestCase_024378_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024378_2 "ray.formats.srgb8_alpha8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024378, VkglTestCase_024378_1, VkglTestCase_024378_2);

#define VkglTestCase_024379_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024379_2 "ray.formats.srgb8_alpha8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024379, VkglTestCase_024379_1, VkglTestCase_024379_2);

#define VkglTestCase_024380_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024380_2 "ray.formats.srgb8_alpha8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024380, VkglTestCase_024380_1, VkglTestCase_024380_2);

#define VkglTestCase_024381_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_024381_2 "ing.2d_array.formats.srgb_r8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024381, VkglTestCase_024381_1, VkglTestCase_024381_2);

#define VkglTestCase_024382_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024382_2 "ring.2d_array.formats.srgb_r8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024382, VkglTestCase_024382_1, VkglTestCase_024382_2);

#define VkglTestCase_024383_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024383_2 "array.formats.srgb_r8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024383, VkglTestCase_024383_1, VkglTestCase_024383_2);

#define VkglTestCase_024384_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024384_2 "array.formats.srgb_r8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024384, VkglTestCase_024384_1, VkglTestCase_024384_2);

#define VkglTestCase_024385_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024385_2 "array.formats.srgb_r8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024385, VkglTestCase_024385_1, VkglTestCase_024385_2);

#define VkglTestCase_024386_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024386_2 "_array.formats.srgb_r8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024386, VkglTestCase_024386_1, VkglTestCase_024386_2);

#define VkglTestCase_024387_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_024387_2 "ing.2d_array.formats.srgb_rg8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024387, VkglTestCase_024387_1, VkglTestCase_024387_2);

#define VkglTestCase_024388_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_024388_2 "ing.2d_array.formats.srgb_rg8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024388, VkglTestCase_024388_1, VkglTestCase_024388_2);

#define VkglTestCase_024389_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024389_2 "rray.formats.srgb_rg8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024389, VkglTestCase_024389_1, VkglTestCase_024389_2);

#define VkglTestCase_024390_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024390_2 "array.formats.srgb_rg8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024390, VkglTestCase_024390_1, VkglTestCase_024390_2);

#define VkglTestCase_024391_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024391_2 "array.formats.srgb_rg8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024391, VkglTestCase_024391_1, VkglTestCase_024391_2);

#define VkglTestCase_024392_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024392_2 "array.formats.srgb_rg8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024392, VkglTestCase_024392_1, VkglTestCase_024392_2);

#define VkglTestCase_024393_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_024393_2 "ing.2d_array.formats.rgb10_a2_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024393, VkglTestCase_024393_1, VkglTestCase_024393_2);

#define VkglTestCase_024394_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_024394_2 "ing.2d_array.formats.rgb10_a2_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024394, VkglTestCase_024394_1, VkglTestCase_024394_2);

#define VkglTestCase_024395_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024395_2 "rray.formats.rgb10_a2_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024395, VkglTestCase_024395_1, VkglTestCase_024395_2);

#define VkglTestCase_024396_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024396_2 "array.formats.rgb10_a2_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024396, VkglTestCase_024396_1, VkglTestCase_024396_2);

#define VkglTestCase_024397_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024397_2 "array.formats.rgb10_a2_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024397, VkglTestCase_024397_1, VkglTestCase_024397_2);

#define VkglTestCase_024398_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024398_2 "array.formats.rgb10_a2_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024398, VkglTestCase_024398_1, VkglTestCase_024398_2);
