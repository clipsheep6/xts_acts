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
#include "../ActsDeqpgles30022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021999_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021999_2 ".format.sized.cube.rgba32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021999, VkglTestCase_021999_1, VkglTestCase_021999_2);

#define VkglTestCase_022000_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022000_2 "format.sized.cube.rgba32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022000, VkglTestCase_022000_1, VkglTestCase_022000_2);

#define VkglTestCase_022001_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022001_2 ".format.sized.cube.rgba32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022001, VkglTestCase_022001_1, VkglTestCase_022001_2);

#define VkglTestCase_022002_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022002_2 "format.sized.cube.rgba32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022002, VkglTestCase_022002_1, VkglTestCase_022002_2);

#define VkglTestCase_022003_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022003_2 "format.sized.cube.rgba32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022003, VkglTestCase_022003_1, VkglTestCase_022003_2);

#define VkglTestCase_022004_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022004_2 "format.sized.cube.rgba32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022004, VkglTestCase_022004_1, VkglTestCase_022004_2);

#define VkglTestCase_022005_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022005_2 ".format.sized.cube.rgba16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022005, VkglTestCase_022005_1, VkglTestCase_022005_2);

#define VkglTestCase_022006_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022006_2 "format.sized.cube.rgba16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022006, VkglTestCase_022006_1, VkglTestCase_022006_2);

#define VkglTestCase_022007_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022007_2 ".format.sized.cube.rgba16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022007, VkglTestCase_022007_1, VkglTestCase_022007_2);

#define VkglTestCase_022008_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022008_2 "format.sized.cube.rgba16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022008, VkglTestCase_022008_1, VkglTestCase_022008_2);

#define VkglTestCase_022009_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022009_2 "format.sized.cube.rgba16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022009, VkglTestCase_022009_1, VkglTestCase_022009_2);

#define VkglTestCase_022010_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022010_2 "format.sized.cube.rgba16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022010, VkglTestCase_022010_1, VkglTestCase_022010_2);

#define VkglTestCase_022011_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022011_2 "e.format.sized.cube.rgba8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022011, VkglTestCase_022011_1, VkglTestCase_022011_2);

#define VkglTestCase_022012_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022012_2 ".format.sized.cube.rgba8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022012, VkglTestCase_022012_1, VkglTestCase_022012_2);

#define VkglTestCase_022013_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022013_2 ".format.sized.cube.rgba8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022013, VkglTestCase_022013_1, VkglTestCase_022013_2);

#define VkglTestCase_022014_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022014_2 ".format.sized.cube.rgba8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022014, VkglTestCase_022014_1, VkglTestCase_022014_2);

#define VkglTestCase_022015_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022015_2 ".format.sized.cube.rgba8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022015, VkglTestCase_022015_1, VkglTestCase_022015_2);

#define VkglTestCase_022016_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022016_2 "format.sized.cube.rgba8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022016, VkglTestCase_022016_1, VkglTestCase_022016_2);

#define VkglTestCase_022017_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022017_2 "rmat.sized.cube.srgb8_alpha8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022017, VkglTestCase_022017_1, VkglTestCase_022017_2);

#define VkglTestCase_022018_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022018_2 "rmat.sized.cube.srgb8_alpha8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022018, VkglTestCase_022018_1, VkglTestCase_022018_2);

#define VkglTestCase_022019_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022019_2 ".format.sized.cube.srgb_r8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022019, VkglTestCase_022019_1, VkglTestCase_022019_2);

#define VkglTestCase_022020_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022020_2 "format.sized.cube.srgb_r8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022020, VkglTestCase_022020_1, VkglTestCase_022020_2);

#define VkglTestCase_022021_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022021_2 "format.sized.cube.srgb_rg8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022021, VkglTestCase_022021_1, VkglTestCase_022021_2);

#define VkglTestCase_022022_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022022_2 "format.sized.cube.srgb_rg8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022022, VkglTestCase_022022_1, VkglTestCase_022022_2);

#define VkglTestCase_022023_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022023_2 "format.sized.cube.rgb10_a2_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022023, VkglTestCase_022023_1, VkglTestCase_022023_2);

#define VkglTestCase_022024_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022024_2 "format.sized.cube.rgb10_a2_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022024, VkglTestCase_022024_1, VkglTestCase_022024_2);

#define VkglTestCase_022025_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022025_2 "ormat.sized.cube.rgb10_a2ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022025, VkglTestCase_022025_1, VkglTestCase_022025_2);

#define VkglTestCase_022026_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022026_2 "ormat.sized.cube.rgb10_a2ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022026, VkglTestCase_022026_1, VkglTestCase_022026_2);

#define VkglTestCase_022027_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022027_2 "e.format.sized.cube.rgba4_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022027, VkglTestCase_022027_1, VkglTestCase_022027_2);

#define VkglTestCase_022028_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022028_2 ".format.sized.cube.rgba4_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022028, VkglTestCase_022028_1, VkglTestCase_022028_2);

#define VkglTestCase_022029_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022029_2 ".format.sized.cube.rgb5_a1_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022029, VkglTestCase_022029_1, VkglTestCase_022029_2);

#define VkglTestCase_022030_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022030_2 "format.sized.cube.rgb5_a1_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022030, VkglTestCase_022030_1, VkglTestCase_022030_2);

#define VkglTestCase_022031_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022031_2 "ormat.sized.cube.rgba8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022031, VkglTestCase_022031_1, VkglTestCase_022031_2);

#define VkglTestCase_022032_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022032_2 "rmat.sized.cube.rgba8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022032, VkglTestCase_022032_1, VkglTestCase_022032_2);

#define VkglTestCase_022033_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022033_2 "e.format.sized.cube.rgb8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022033, VkglTestCase_022033_1, VkglTestCase_022033_2);

#define VkglTestCase_022034_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022034_2 "e.format.sized.cube.rgb8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022034, VkglTestCase_022034_1, VkglTestCase_022034_2);

#define VkglTestCase_022035_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022035_2 ".format.sized.cube.rgb565_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022035, VkglTestCase_022035_1, VkglTestCase_022035_2);

#define VkglTestCase_022036_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022036_2 ".format.sized.cube.rgb565_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022036, VkglTestCase_022036_1, VkglTestCase_022036_2);

#define VkglTestCase_022037_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022037_2 "mat.sized.cube.r11f_g11f_b10f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022037, VkglTestCase_022037_1, VkglTestCase_022037_2);

#define VkglTestCase_022038_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022038_2 "mat.sized.cube.r11f_g11f_b10f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022038, VkglTestCase_022038_1, VkglTestCase_022038_2);

#define VkglTestCase_022039_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022039_2 ".format.sized.cube.rgb32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022039, VkglTestCase_022039_1, VkglTestCase_022039_2);

#define VkglTestCase_022040_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022040_2 ".format.sized.cube.rgb32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022040, VkglTestCase_022040_1, VkglTestCase_022040_2);

#define VkglTestCase_022041_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022041_2 ".format.sized.cube.rgb32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022041, VkglTestCase_022041_1, VkglTestCase_022041_2);

#define VkglTestCase_022042_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022042_2 ".format.sized.cube.rgb32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022042, VkglTestCase_022042_1, VkglTestCase_022042_2);

#define VkglTestCase_022043_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022043_2 ".format.sized.cube.rgb32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022043, VkglTestCase_022043_1, VkglTestCase_022043_2);

#define VkglTestCase_022044_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022044_2 "format.sized.cube.rgb32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022044, VkglTestCase_022044_1, VkglTestCase_022044_2);

#define VkglTestCase_022045_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022045_2 ".format.sized.cube.rgb16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022045, VkglTestCase_022045_1, VkglTestCase_022045_2);

#define VkglTestCase_022046_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022046_2 ".format.sized.cube.rgb16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022046, VkglTestCase_022046_1, VkglTestCase_022046_2);

#define VkglTestCase_022047_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022047_2 ".format.sized.cube.rgb16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022047, VkglTestCase_022047_1, VkglTestCase_022047_2);

#define VkglTestCase_022048_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022048_2 ".format.sized.cube.rgb16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022048, VkglTestCase_022048_1, VkglTestCase_022048_2);

#define VkglTestCase_022049_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022049_2 ".format.sized.cube.rgb16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022049, VkglTestCase_022049_1, VkglTestCase_022049_2);

#define VkglTestCase_022050_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022050_2 "format.sized.cube.rgb16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022050, VkglTestCase_022050_1, VkglTestCase_022050_2);

#define VkglTestCase_022051_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022051_2 "ormat.sized.cube.rgb8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022051, VkglTestCase_022051_1, VkglTestCase_022051_2);

#define VkglTestCase_022052_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022052_2 "ormat.sized.cube.rgb8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022052, VkglTestCase_022052_1, VkglTestCase_022052_2);

#define VkglTestCase_022053_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022053_2 "e.format.sized.cube.rgb8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022053, VkglTestCase_022053_1, VkglTestCase_022053_2);

#define VkglTestCase_022054_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022054_2 ".format.sized.cube.rgb8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022054, VkglTestCase_022054_1, VkglTestCase_022054_2);

#define VkglTestCase_022055_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022055_2 ".format.sized.cube.rgb8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022055, VkglTestCase_022055_1, VkglTestCase_022055_2);

#define VkglTestCase_022056_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022056_2 ".format.sized.cube.rgb8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022056, VkglTestCase_022056_1, VkglTestCase_022056_2);

#define VkglTestCase_022057_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022057_2 "e.format.sized.cube.srgb8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022057, VkglTestCase_022057_1, VkglTestCase_022057_2);

#define VkglTestCase_022058_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022058_2 ".format.sized.cube.srgb8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022058, VkglTestCase_022058_1, VkglTestCase_022058_2);

#define VkglTestCase_022059_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022059_2 ".format.sized.cube.rgb9_e5_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022059, VkglTestCase_022059_1, VkglTestCase_022059_2);

#define VkglTestCase_022060_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022060_2 "format.sized.cube.rgb9_e5_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022060, VkglTestCase_022060_1, VkglTestCase_022060_2);

#define VkglTestCase_022061_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022061_2 "e.format.sized.cube.rg32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022061, VkglTestCase_022061_1, VkglTestCase_022061_2);

#define VkglTestCase_022062_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022062_2 ".format.sized.cube.rg32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022062, VkglTestCase_022062_1, VkglTestCase_022062_2);

#define VkglTestCase_022063_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022063_2 "e.format.sized.cube.rg32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022063, VkglTestCase_022063_1, VkglTestCase_022063_2);

#define VkglTestCase_022064_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022064_2 ".format.sized.cube.rg32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022064, VkglTestCase_022064_1, VkglTestCase_022064_2);

#define VkglTestCase_022065_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022065_2 ".format.sized.cube.rg32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022065, VkglTestCase_022065_1, VkglTestCase_022065_2);

#define VkglTestCase_022066_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022066_2 ".format.sized.cube.rg32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022066, VkglTestCase_022066_1, VkglTestCase_022066_2);

#define VkglTestCase_022067_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022067_2 "e.format.sized.cube.rg16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022067, VkglTestCase_022067_1, VkglTestCase_022067_2);

#define VkglTestCase_022068_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022068_2 ".format.sized.cube.rg16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022068, VkglTestCase_022068_1, VkglTestCase_022068_2);

#define VkglTestCase_022069_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022069_2 "e.format.sized.cube.rg16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022069, VkglTestCase_022069_1, VkglTestCase_022069_2);

#define VkglTestCase_022070_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022070_2 ".format.sized.cube.rg16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022070, VkglTestCase_022070_1, VkglTestCase_022070_2);

#define VkglTestCase_022071_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022071_2 ".format.sized.cube.rg16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022071, VkglTestCase_022071_1, VkglTestCase_022071_2);

#define VkglTestCase_022072_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022072_2 ".format.sized.cube.rg16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022072, VkglTestCase_022072_1, VkglTestCase_022072_2);

#define VkglTestCase_022073_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022073_2 "re.format.sized.cube.rg8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022073, VkglTestCase_022073_1, VkglTestCase_022073_2);

#define VkglTestCase_022074_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022074_2 "e.format.sized.cube.rg8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022074, VkglTestCase_022074_1, VkglTestCase_022074_2);

#define VkglTestCase_022075_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022075_2 "e.format.sized.cube.rg8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022075, VkglTestCase_022075_1, VkglTestCase_022075_2);

#define VkglTestCase_022076_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022076_2 "e.format.sized.cube.rg8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022076, VkglTestCase_022076_1, VkglTestCase_022076_2);

#define VkglTestCase_022077_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022077_2 "e.format.sized.cube.rg8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022077, VkglTestCase_022077_1, VkglTestCase_022077_2);

#define VkglTestCase_022078_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022078_2 ".format.sized.cube.rg8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022078, VkglTestCase_022078_1, VkglTestCase_022078_2);

#define VkglTestCase_022079_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022079_2 "format.sized.cube.rg8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022079, VkglTestCase_022079_1, VkglTestCase_022079_2);

#define VkglTestCase_022080_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022080_2 "ormat.sized.cube.rg8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022080, VkglTestCase_022080_1, VkglTestCase_022080_2);

#define VkglTestCase_022081_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022081_2 "e.format.sized.cube.r32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022081, VkglTestCase_022081_1, VkglTestCase_022081_2);

#define VkglTestCase_022082_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022082_2 "e.format.sized.cube.r32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022082, VkglTestCase_022082_1, VkglTestCase_022082_2);

#define VkglTestCase_022083_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022083_2 "e.format.sized.cube.r32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022083, VkglTestCase_022083_1, VkglTestCase_022083_2);

#define VkglTestCase_022084_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022084_2 "e.format.sized.cube.r32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022084, VkglTestCase_022084_1, VkglTestCase_022084_2);

#define VkglTestCase_022085_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022085_2 "e.format.sized.cube.r32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022085, VkglTestCase_022085_1, VkglTestCase_022085_2);

#define VkglTestCase_022086_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022086_2 ".format.sized.cube.r32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022086, VkglTestCase_022086_1, VkglTestCase_022086_2);

#define VkglTestCase_022087_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022087_2 "e.format.sized.cube.r16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022087, VkglTestCase_022087_1, VkglTestCase_022087_2);

#define VkglTestCase_022088_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022088_2 "e.format.sized.cube.r16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022088, VkglTestCase_022088_1, VkglTestCase_022088_2);

#define VkglTestCase_022089_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022089_2 "e.format.sized.cube.r16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022089, VkglTestCase_022089_1, VkglTestCase_022089_2);

#define VkglTestCase_022090_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022090_2 "e.format.sized.cube.r16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022090, VkglTestCase_022090_1, VkglTestCase_022090_2);

#define VkglTestCase_022091_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022091_2 "e.format.sized.cube.r16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022091, VkglTestCase_022091_1, VkglTestCase_022091_2);

#define VkglTestCase_022092_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022092_2 ".format.sized.cube.r16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022092, VkglTestCase_022092_1, VkglTestCase_022092_2);

#define VkglTestCase_022093_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022093_2 "re.format.sized.cube.r8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022093, VkglTestCase_022093_1, VkglTestCase_022093_2);

#define VkglTestCase_022094_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022094_2 "re.format.sized.cube.r8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022094, VkglTestCase_022094_1, VkglTestCase_022094_2);

#define VkglTestCase_022095_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022095_2 "re.format.sized.cube.r8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022095, VkglTestCase_022095_1, VkglTestCase_022095_2);

#define VkglTestCase_022096_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022096_2 "e.format.sized.cube.r8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022096, VkglTestCase_022096_1, VkglTestCase_022096_2);

#define VkglTestCase_022097_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022097_2 "e.format.sized.cube.r8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022097, VkglTestCase_022097_1, VkglTestCase_022097_2);

#define VkglTestCase_022098_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022098_2 "e.format.sized.cube.r8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022098, VkglTestCase_022098_1, VkglTestCase_022098_2);

#define VkglTestCase_022099_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022099_2 "format.sized.cube.r8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022099, VkglTestCase_022099_1, VkglTestCase_022099_2);

#define VkglTestCase_022100_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022100_2 "format.sized.cube.r8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022100, VkglTestCase_022100_1, VkglTestCase_022100_2);

#define VkglTestCase_022101_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022101_2 "t.sized.cube.depth_component32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022101, VkglTestCase_022101_1, VkglTestCase_022101_2);

#define VkglTestCase_022102_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022102_2 "t.sized.cube.depth_component32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022102, VkglTestCase_022102_1, VkglTestCase_022102_2);

#define VkglTestCase_022103_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_022103_2 "at.sized.cube.depth_component24_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022103, VkglTestCase_022103_1, VkglTestCase_022103_2);

#define VkglTestCase_022104_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022104_2 "t.sized.cube.depth_component24_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022104, VkglTestCase_022104_1, VkglTestCase_022104_2);

#define VkglTestCase_022105_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_022105_2 "at.sized.cube.depth_component16_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022105, VkglTestCase_022105_1, VkglTestCase_022105_2);

#define VkglTestCase_022106_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022106_2 "t.sized.cube.depth_component16_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022106, VkglTestCase_022106_1, VkglTestCase_022106_2);

#define VkglTestCase_022107_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_022107_2 "at.sized.cube.depth32f_stencil8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022107, VkglTestCase_022107_1, VkglTestCase_022107_2);

#define VkglTestCase_022108_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022108_2 "t.sized.cube.depth32f_stencil8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022108, VkglTestCase_022108_1, VkglTestCase_022108_2);

#define VkglTestCase_022109_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_022109_2 "at.sized.cube.depth24_stencil8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022109, VkglTestCase_022109_1, VkglTestCase_022109_2);

#define VkglTestCase_022110_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_022110_2 "at.sized.cube.depth24_stencil8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_022110, VkglTestCase_022110_1, VkglTestCase_022110_2);
