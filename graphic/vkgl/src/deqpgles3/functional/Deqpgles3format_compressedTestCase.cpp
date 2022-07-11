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
#include "../ActsDeqpgles30023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022325_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022325_2 ".format.compressed.etc1_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022325, VkglTestCase_022325_1, VkglTestCase_022325_2);

#define VkglTestCase_022326_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022326_2 "format.compressed.etc1_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022326, VkglTestCase_022326_1, VkglTestCase_022326_2);

#define VkglTestCase_022327_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022327_2 "format.compressed.etc1_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022327, VkglTestCase_022327_1, VkglTestCase_022327_2);

#define VkglTestCase_022328_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022328_2 "ormat.compressed.etc1_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022328, VkglTestCase_022328_1, VkglTestCase_022328_2);

#define VkglTestCase_022329_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022329_2 "ormat.compressed.eac_r11_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022329, VkglTestCase_022329_1, VkglTestCase_022329_2);

#define VkglTestCase_022330_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022330_2 "rmat.compressed.eac_r11_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022330, VkglTestCase_022330_1, VkglTestCase_022330_2);

#define VkglTestCase_022331_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022331_2 "ormat.compressed.eac_r11_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022331, VkglTestCase_022331_1, VkglTestCase_022331_2);

#define VkglTestCase_022332_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022332_2 "rmat.compressed.eac_r11_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022332, VkglTestCase_022332_1, VkglTestCase_022332_2);

#define VkglTestCase_022333_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_022333_2 "at.compressed.eac_signed_r11_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022333, VkglTestCase_022333_1, VkglTestCase_022333_2);

#define VkglTestCase_022334_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022334_2 "t.compressed.eac_signed_r11_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022334, VkglTestCase_022334_1, VkglTestCase_022334_2);

#define VkglTestCase_022335_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022335_2 "t.compressed.eac_signed_r11_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022335, VkglTestCase_022335_1, VkglTestCase_022335_2);

#define VkglTestCase_022336_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_022336_2 ".compressed.eac_signed_r11_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022336, VkglTestCase_022336_1, VkglTestCase_022336_2);

#define VkglTestCase_022337_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022337_2 "ormat.compressed.eac_rg11_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022337, VkglTestCase_022337_1, VkglTestCase_022337_2);

#define VkglTestCase_022338_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022338_2 "rmat.compressed.eac_rg11_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022338, VkglTestCase_022338_1, VkglTestCase_022338_2);

#define VkglTestCase_022339_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022339_2 "rmat.compressed.eac_rg11_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022339, VkglTestCase_022339_1, VkglTestCase_022339_2);

#define VkglTestCase_022340_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022340_2 "mat.compressed.eac_rg11_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022340, VkglTestCase_022340_1, VkglTestCase_022340_2);

#define VkglTestCase_022341_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022341_2 "t.compressed.eac_signed_rg11_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022341, VkglTestCase_022341_1, VkglTestCase_022341_2);

#define VkglTestCase_022342_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_022342_2 ".compressed.eac_signed_rg11_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022342, VkglTestCase_022342_1, VkglTestCase_022342_2);

#define VkglTestCase_022343_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022343_2 "t.compressed.eac_signed_rg11_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022343, VkglTestCase_022343_1, VkglTestCase_022343_2);

#define VkglTestCase_022344_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_022344_2 ".compressed.eac_signed_rg11_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022344, VkglTestCase_022344_1, VkglTestCase_022344_2);

#define VkglTestCase_022345_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022345_2 "rmat.compressed.etc2_rgb8_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022345, VkglTestCase_022345_1, VkglTestCase_022345_2);

#define VkglTestCase_022346_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022346_2 "mat.compressed.etc2_rgb8_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022346, VkglTestCase_022346_1, VkglTestCase_022346_2);

#define VkglTestCase_022347_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022347_2 "rmat.compressed.etc2_rgb8_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022347, VkglTestCase_022347_1, VkglTestCase_022347_2);

#define VkglTestCase_022348_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022348_2 "mat.compressed.etc2_rgb8_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022348, VkglTestCase_022348_1, VkglTestCase_022348_2);

#define VkglTestCase_022349_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022349_2 "rmat.compressed.etc2_srgb8_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022349, VkglTestCase_022349_1, VkglTestCase_022349_2);

#define VkglTestCase_022350_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022350_2 "mat.compressed.etc2_srgb8_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022350, VkglTestCase_022350_1, VkglTestCase_022350_2);

#define VkglTestCase_022351_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022351_2 "mat.compressed.etc2_srgb8_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022351, VkglTestCase_022351_1, VkglTestCase_022351_2);

#define VkglTestCase_022352_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_022352_2 "at.compressed.etc2_srgb8_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022352, VkglTestCase_022352_1, VkglTestCase_022352_2);

#define VkglTestCase_022353_1 "dEQP-GLES3.functional.texture.format.compr"
#define VkglTestCase_022353_2 "essed.etc2_rgb8_punchthrough_alpha1_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022353, VkglTestCase_022353_1, VkglTestCase_022353_2);

#define VkglTestCase_022354_1 "dEQP-GLES3.functional.texture.format.compre"
#define VkglTestCase_022354_2 "ssed.etc2_rgb8_punchthrough_alpha1_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022354, VkglTestCase_022354_1, VkglTestCase_022354_2);

#define VkglTestCase_022355_1 "dEQP-GLES3.functional.texture.format.compr"
#define VkglTestCase_022355_2 "essed.etc2_rgb8_punchthrough_alpha1_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022355, VkglTestCase_022355_1, VkglTestCase_022355_2);

#define VkglTestCase_022356_1 "dEQP-GLES3.functional.texture.format.compre"
#define VkglTestCase_022356_2 "ssed.etc2_rgb8_punchthrough_alpha1_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022356, VkglTestCase_022356_1, VkglTestCase_022356_2);

#define VkglTestCase_022357_1 "dEQP-GLES3.functional.texture.format.compr"
#define VkglTestCase_022357_2 "essed.etc2_srgb8_punchthrough_alpha1_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022357, VkglTestCase_022357_1, VkglTestCase_022357_2);

#define VkglTestCase_022358_1 "dEQP-GLES3.functional.texture.format.compre"
#define VkglTestCase_022358_2 "ssed.etc2_srgb8_punchthrough_alpha1_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022358, VkglTestCase_022358_1, VkglTestCase_022358_2);

#define VkglTestCase_022359_1 "dEQP-GLES3.functional.texture.format.compre"
#define VkglTestCase_022359_2 "ssed.etc2_srgb8_punchthrough_alpha1_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022359, VkglTestCase_022359_1, VkglTestCase_022359_2);

#define VkglTestCase_022360_1 "dEQP-GLES3.functional.texture.format.compres"
#define VkglTestCase_022360_2 "sed.etc2_srgb8_punchthrough_alpha1_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022360, VkglTestCase_022360_1, VkglTestCase_022360_2);

#define VkglTestCase_022361_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_022361_2 "at.compressed.etc2_eac_rgba8_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022361, VkglTestCase_022361_1, VkglTestCase_022361_2);

#define VkglTestCase_022362_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022362_2 "t.compressed.etc2_eac_rgba8_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022362, VkglTestCase_022362_1, VkglTestCase_022362_2);

#define VkglTestCase_022363_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022363_2 "t.compressed.etc2_eac_rgba8_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022363, VkglTestCase_022363_1, VkglTestCase_022363_2);

#define VkglTestCase_022364_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_022364_2 ".compressed.etc2_eac_rgba8_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022364, VkglTestCase_022364_1, VkglTestCase_022364_2);

#define VkglTestCase_022365_1 "dEQP-GLES3.functional.texture.format.c"
#define VkglTestCase_022365_2 "ompressed.etc2_eac_srgb8_alpha8_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022365, VkglTestCase_022365_1, VkglTestCase_022365_2);

#define VkglTestCase_022366_1 "dEQP-GLES3.functional.texture.format.co"
#define VkglTestCase_022366_2 "mpressed.etc2_eac_srgb8_alpha8_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022366, VkglTestCase_022366_1, VkglTestCase_022366_2);

#define VkglTestCase_022367_1 "dEQP-GLES3.functional.texture.format.c"
#define VkglTestCase_022367_2 "ompressed.etc2_eac_srgb8_alpha8_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022367, VkglTestCase_022367_1, VkglTestCase_022367_2);

#define VkglTestCase_022368_1 "dEQP-GLES3.functional.texture.format.co"
#define VkglTestCase_022368_2 "mpressed.etc2_eac_srgb8_alpha8_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022368, VkglTestCase_022368_1, VkglTestCase_022368_2);
