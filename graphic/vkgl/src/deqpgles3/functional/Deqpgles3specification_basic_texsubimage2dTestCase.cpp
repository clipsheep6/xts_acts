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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025995_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025995_2 "cation.basic_texsubimage2d.rgba32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025995, VkglTestCase_025995_1, VkglTestCase_025995_2);

#define VkglTestCase_025996_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025996_2 "ation.basic_texsubimage2d.rgba32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025996, VkglTestCase_025996_1, VkglTestCase_025996_2);

#define VkglTestCase_025997_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025997_2 "cation.basic_texsubimage2d.rgba32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025997, VkglTestCase_025997_1, VkglTestCase_025997_2);

#define VkglTestCase_025998_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025998_2 "ation.basic_texsubimage2d.rgba32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025998, VkglTestCase_025998_1, VkglTestCase_025998_2);

#define VkglTestCase_025999_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025999_2 "cation.basic_texsubimage2d.rgba32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025999, VkglTestCase_025999_1, VkglTestCase_025999_2);

#define VkglTestCase_026000_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026000_2 "ation.basic_texsubimage2d.rgba32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026000, VkglTestCase_026000_1, VkglTestCase_026000_2);

#define VkglTestCase_026001_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026001_2 "cation.basic_texsubimage2d.rgba16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026001, VkglTestCase_026001_1, VkglTestCase_026001_2);

#define VkglTestCase_026002_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026002_2 "ation.basic_texsubimage2d.rgba16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026002, VkglTestCase_026002_1, VkglTestCase_026002_2);

#define VkglTestCase_026003_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026003_2 "cation.basic_texsubimage2d.rgba16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026003, VkglTestCase_026003_1, VkglTestCase_026003_2);

#define VkglTestCase_026004_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026004_2 "ation.basic_texsubimage2d.rgba16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026004, VkglTestCase_026004_1, VkglTestCase_026004_2);

#define VkglTestCase_026005_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026005_2 "cation.basic_texsubimage2d.rgba16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026005, VkglTestCase_026005_1, VkglTestCase_026005_2);

#define VkglTestCase_026006_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026006_2 "ation.basic_texsubimage2d.rgba16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026006, VkglTestCase_026006_1, VkglTestCase_026006_2);

#define VkglTestCase_026007_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026007_2 "ication.basic_texsubimage2d.rgba8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026007, VkglTestCase_026007_1, VkglTestCase_026007_2);

#define VkglTestCase_026008_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026008_2 "cation.basic_texsubimage2d.rgba8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026008, VkglTestCase_026008_1, VkglTestCase_026008_2);

#define VkglTestCase_026009_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026009_2 "ication.basic_texsubimage2d.rgba8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026009, VkglTestCase_026009_1, VkglTestCase_026009_2);

#define VkglTestCase_026010_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026010_2 "cation.basic_texsubimage2d.rgba8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026010, VkglTestCase_026010_1, VkglTestCase_026010_2);

#define VkglTestCase_026011_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026011_2 "cation.basic_texsubimage2d.rgba8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026011, VkglTestCase_026011_1, VkglTestCase_026011_2);

#define VkglTestCase_026012_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026012_2 "ation.basic_texsubimage2d.rgba8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026012, VkglTestCase_026012_1, VkglTestCase_026012_2);

#define VkglTestCase_026013_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026013_2 "tion.basic_texsubimage2d.srgb8_alpha8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026013, VkglTestCase_026013_1, VkglTestCase_026013_2);

#define VkglTestCase_026014_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026014_2 "ion.basic_texsubimage2d.srgb8_alpha8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026014, VkglTestCase_026014_1, VkglTestCase_026014_2);

#define VkglTestCase_026015_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026015_2 "cation.basic_texsubimage2d.rgb10_a2_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026015, VkglTestCase_026015_1, VkglTestCase_026015_2);

#define VkglTestCase_026016_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026016_2 "ation.basic_texsubimage2d.rgb10_a2_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026016, VkglTestCase_026016_1, VkglTestCase_026016_2);

#define VkglTestCase_026017_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026017_2 "ation.basic_texsubimage2d.rgb10_a2ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026017, VkglTestCase_026017_1, VkglTestCase_026017_2);

#define VkglTestCase_026018_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026018_2 "tion.basic_texsubimage2d.rgb10_a2ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026018, VkglTestCase_026018_1, VkglTestCase_026018_2);

#define VkglTestCase_026019_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026019_2 "ication.basic_texsubimage2d.rgba4_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026019, VkglTestCase_026019_1, VkglTestCase_026019_2);

#define VkglTestCase_026020_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026020_2 "cation.basic_texsubimage2d.rgba4_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026020, VkglTestCase_026020_1, VkglTestCase_026020_2);

#define VkglTestCase_026021_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026021_2 "cation.basic_texsubimage2d.rgb5_a1_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026021, VkglTestCase_026021_1, VkglTestCase_026021_2);

#define VkglTestCase_026022_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026022_2 "ation.basic_texsubimage2d.rgb5_a1_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026022, VkglTestCase_026022_1, VkglTestCase_026022_2);

#define VkglTestCase_026023_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026023_2 "tion.basic_texsubimage2d.rgba8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026023, VkglTestCase_026023_1, VkglTestCase_026023_2);

#define VkglTestCase_026024_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026024_2 "ion.basic_texsubimage2d.rgba8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026024, VkglTestCase_026024_1, VkglTestCase_026024_2);

#define VkglTestCase_026025_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026025_2 "fication.basic_texsubimage2d.rgb8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026025, VkglTestCase_026025_1, VkglTestCase_026025_2);

#define VkglTestCase_026026_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026026_2 "ication.basic_texsubimage2d.rgb8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026026, VkglTestCase_026026_1, VkglTestCase_026026_2);

#define VkglTestCase_026027_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026027_2 "ication.basic_texsubimage2d.rgb565_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026027, VkglTestCase_026027_1, VkglTestCase_026027_2);

#define VkglTestCase_026028_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026028_2 "cation.basic_texsubimage2d.rgb565_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026028, VkglTestCase_026028_1, VkglTestCase_026028_2);

#define VkglTestCase_026029_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026029_2 "ion.basic_texsubimage2d.r11f_g11f_b10f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026029, VkglTestCase_026029_1, VkglTestCase_026029_2);

#define VkglTestCase_026030_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026030_2 "on.basic_texsubimage2d.r11f_g11f_b10f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026030, VkglTestCase_026030_1, VkglTestCase_026030_2);

#define VkglTestCase_026031_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026031_2 "ication.basic_texsubimage2d.rgb32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026031, VkglTestCase_026031_1, VkglTestCase_026031_2);

#define VkglTestCase_026032_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026032_2 "cation.basic_texsubimage2d.rgb32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026032, VkglTestCase_026032_1, VkglTestCase_026032_2);

#define VkglTestCase_026033_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026033_2 "ication.basic_texsubimage2d.rgb32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026033, VkglTestCase_026033_1, VkglTestCase_026033_2);

#define VkglTestCase_026034_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026034_2 "cation.basic_texsubimage2d.rgb32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026034, VkglTestCase_026034_1, VkglTestCase_026034_2);

#define VkglTestCase_026035_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026035_2 "cation.basic_texsubimage2d.rgb32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026035, VkglTestCase_026035_1, VkglTestCase_026035_2);

#define VkglTestCase_026036_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026036_2 "ation.basic_texsubimage2d.rgb32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026036, VkglTestCase_026036_1, VkglTestCase_026036_2);

#define VkglTestCase_026037_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026037_2 "ication.basic_texsubimage2d.rgb16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026037, VkglTestCase_026037_1, VkglTestCase_026037_2);

#define VkglTestCase_026038_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026038_2 "cation.basic_texsubimage2d.rgb16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026038, VkglTestCase_026038_1, VkglTestCase_026038_2);

#define VkglTestCase_026039_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026039_2 "ication.basic_texsubimage2d.rgb16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026039, VkglTestCase_026039_1, VkglTestCase_026039_2);

#define VkglTestCase_026040_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026040_2 "cation.basic_texsubimage2d.rgb16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026040, VkglTestCase_026040_1, VkglTestCase_026040_2);

#define VkglTestCase_026041_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026041_2 "cation.basic_texsubimage2d.rgb16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026041, VkglTestCase_026041_1, VkglTestCase_026041_2);

#define VkglTestCase_026042_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026042_2 "ation.basic_texsubimage2d.rgb16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026042, VkglTestCase_026042_1, VkglTestCase_026042_2);

#define VkglTestCase_026043_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026043_2 "ation.basic_texsubimage2d.rgb8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026043, VkglTestCase_026043_1, VkglTestCase_026043_2);

#define VkglTestCase_026044_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026044_2 "tion.basic_texsubimage2d.rgb8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026044, VkglTestCase_026044_1, VkglTestCase_026044_2);

#define VkglTestCase_026045_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026045_2 "ication.basic_texsubimage2d.rgb8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026045, VkglTestCase_026045_1, VkglTestCase_026045_2);

#define VkglTestCase_026046_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026046_2 "cation.basic_texsubimage2d.rgb8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026046, VkglTestCase_026046_1, VkglTestCase_026046_2);

#define VkglTestCase_026047_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026047_2 "ication.basic_texsubimage2d.rgb8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026047, VkglTestCase_026047_1, VkglTestCase_026047_2);

#define VkglTestCase_026048_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026048_2 "cation.basic_texsubimage2d.rgb8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026048, VkglTestCase_026048_1, VkglTestCase_026048_2);

#define VkglTestCase_026049_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026049_2 "ication.basic_texsubimage2d.srgb8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026049, VkglTestCase_026049_1, VkglTestCase_026049_2);

#define VkglTestCase_026050_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026050_2 "cation.basic_texsubimage2d.srgb8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026050, VkglTestCase_026050_1, VkglTestCase_026050_2);

#define VkglTestCase_026051_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026051_2 "cation.basic_texsubimage2d.rgb9_e5_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026051, VkglTestCase_026051_1, VkglTestCase_026051_2);

#define VkglTestCase_026052_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026052_2 "ation.basic_texsubimage2d.rgb9_e5_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026052, VkglTestCase_026052_1, VkglTestCase_026052_2);

#define VkglTestCase_026053_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026053_2 "ication.basic_texsubimage2d.rg32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026053, VkglTestCase_026053_1, VkglTestCase_026053_2);

#define VkglTestCase_026054_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026054_2 "cation.basic_texsubimage2d.rg32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026054, VkglTestCase_026054_1, VkglTestCase_026054_2);

#define VkglTestCase_026055_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026055_2 "ication.basic_texsubimage2d.rg32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026055, VkglTestCase_026055_1, VkglTestCase_026055_2);

#define VkglTestCase_026056_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026056_2 "cation.basic_texsubimage2d.rg32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026056, VkglTestCase_026056_1, VkglTestCase_026056_2);

#define VkglTestCase_026057_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026057_2 "ication.basic_texsubimage2d.rg32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026057, VkglTestCase_026057_1, VkglTestCase_026057_2);

#define VkglTestCase_026058_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026058_2 "cation.basic_texsubimage2d.rg32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026058, VkglTestCase_026058_1, VkglTestCase_026058_2);

#define VkglTestCase_026059_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026059_2 "ication.basic_texsubimage2d.rg16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026059, VkglTestCase_026059_1, VkglTestCase_026059_2);

#define VkglTestCase_026060_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026060_2 "cation.basic_texsubimage2d.rg16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026060, VkglTestCase_026060_1, VkglTestCase_026060_2);

#define VkglTestCase_026061_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026061_2 "ication.basic_texsubimage2d.rg16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026061, VkglTestCase_026061_1, VkglTestCase_026061_2);

#define VkglTestCase_026062_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026062_2 "cation.basic_texsubimage2d.rg16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026062, VkglTestCase_026062_1, VkglTestCase_026062_2);

#define VkglTestCase_026063_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026063_2 "ication.basic_texsubimage2d.rg16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026063, VkglTestCase_026063_1, VkglTestCase_026063_2);

#define VkglTestCase_026064_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026064_2 "cation.basic_texsubimage2d.rg16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026064, VkglTestCase_026064_1, VkglTestCase_026064_2);

#define VkglTestCase_026065_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026065_2 "fication.basic_texsubimage2d.rg8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026065, VkglTestCase_026065_1, VkglTestCase_026065_2);

#define VkglTestCase_026066_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026066_2 "ication.basic_texsubimage2d.rg8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026066, VkglTestCase_026066_1, VkglTestCase_026066_2);

#define VkglTestCase_026067_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026067_2 "fication.basic_texsubimage2d.rg8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026067, VkglTestCase_026067_1, VkglTestCase_026067_2);

#define VkglTestCase_026068_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026068_2 "ication.basic_texsubimage2d.rg8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026068, VkglTestCase_026068_1, VkglTestCase_026068_2);

#define VkglTestCase_026069_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026069_2 "ication.basic_texsubimage2d.rg8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026069, VkglTestCase_026069_1, VkglTestCase_026069_2);

#define VkglTestCase_026070_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026070_2 "cation.basic_texsubimage2d.rg8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026070, VkglTestCase_026070_1, VkglTestCase_026070_2);

#define VkglTestCase_026071_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026071_2 "ation.basic_texsubimage2d.rg8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026071, VkglTestCase_026071_1, VkglTestCase_026071_2);

#define VkglTestCase_026072_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026072_2 "tion.basic_texsubimage2d.rg8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026072, VkglTestCase_026072_1, VkglTestCase_026072_2);

#define VkglTestCase_026073_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026073_2 "fication.basic_texsubimage2d.r32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026073, VkglTestCase_026073_1, VkglTestCase_026073_2);

#define VkglTestCase_026074_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026074_2 "ication.basic_texsubimage2d.r32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026074, VkglTestCase_026074_1, VkglTestCase_026074_2);

#define VkglTestCase_026075_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026075_2 "fication.basic_texsubimage2d.r32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026075, VkglTestCase_026075_1, VkglTestCase_026075_2);

#define VkglTestCase_026076_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026076_2 "ication.basic_texsubimage2d.r32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026076, VkglTestCase_026076_1, VkglTestCase_026076_2);

#define VkglTestCase_026077_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026077_2 "ication.basic_texsubimage2d.r32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026077, VkglTestCase_026077_1, VkglTestCase_026077_2);

#define VkglTestCase_026078_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026078_2 "cation.basic_texsubimage2d.r32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026078, VkglTestCase_026078_1, VkglTestCase_026078_2);

#define VkglTestCase_026079_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026079_2 "fication.basic_texsubimage2d.r16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026079, VkglTestCase_026079_1, VkglTestCase_026079_2);

#define VkglTestCase_026080_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026080_2 "ication.basic_texsubimage2d.r16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026080, VkglTestCase_026080_1, VkglTestCase_026080_2);

#define VkglTestCase_026081_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026081_2 "fication.basic_texsubimage2d.r16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026081, VkglTestCase_026081_1, VkglTestCase_026081_2);

#define VkglTestCase_026082_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026082_2 "ication.basic_texsubimage2d.r16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026082, VkglTestCase_026082_1, VkglTestCase_026082_2);

#define VkglTestCase_026083_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026083_2 "ication.basic_texsubimage2d.r16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026083, VkglTestCase_026083_1, VkglTestCase_026083_2);

#define VkglTestCase_026084_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026084_2 "cation.basic_texsubimage2d.r16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026084, VkglTestCase_026084_1, VkglTestCase_026084_2);

#define VkglTestCase_026085_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026085_2 "ification.basic_texsubimage2d.r8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026085, VkglTestCase_026085_1, VkglTestCase_026085_2);

#define VkglTestCase_026086_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026086_2 "fication.basic_texsubimage2d.r8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026086, VkglTestCase_026086_1, VkglTestCase_026086_2);

#define VkglTestCase_026087_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026087_2 "fication.basic_texsubimage2d.r8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026087, VkglTestCase_026087_1, VkglTestCase_026087_2);

#define VkglTestCase_026088_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026088_2 "ication.basic_texsubimage2d.r8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026088, VkglTestCase_026088_1, VkglTestCase_026088_2);

#define VkglTestCase_026089_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026089_2 "fication.basic_texsubimage2d.r8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026089, VkglTestCase_026089_1, VkglTestCase_026089_2);

#define VkglTestCase_026090_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026090_2 "ication.basic_texsubimage2d.r8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026090, VkglTestCase_026090_1, VkglTestCase_026090_2);

#define VkglTestCase_026091_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026091_2 "cation.basic_texsubimage2d.r8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026091, VkglTestCase_026091_1, VkglTestCase_026091_2);

#define VkglTestCase_026092_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026092_2 "ation.basic_texsubimage2d.r8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_026092, VkglTestCase_026092_1, VkglTestCase_026092_2);
