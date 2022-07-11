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
#include "../ActsDeqpgles20008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007313_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007313_2 "ix.div.const_lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007313, VkglTestCase_007313_1, VkglTestCase_007313_2);

#define VkglTestCase_007314_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007314_2 "x.div.const_lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007314, VkglTestCase_007314_1, VkglTestCase_007314_2);

#define VkglTestCase_007315_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007315_2 "ix.div.const_lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007315, VkglTestCase_007315_1, VkglTestCase_007315_2);

#define VkglTestCase_007316_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007316_2 "x.div.const_lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007316, VkglTestCase_007316_1, VkglTestCase_007316_2);

#define VkglTestCase_007317_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007317_2 ".div.const_mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007317, VkglTestCase_007317_1, VkglTestCase_007317_2);

#define VkglTestCase_007318_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007318_2 "div.const_mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007318, VkglTestCase_007318_1, VkglTestCase_007318_2);

#define VkglTestCase_007319_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007319_2 "x.div.const_mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007319, VkglTestCase_007319_1, VkglTestCase_007319_2);

#define VkglTestCase_007320_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007320_2 ".div.const_mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007320, VkglTestCase_007320_1, VkglTestCase_007320_2);

#define VkglTestCase_007321_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007321_2 "x.div.const_highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007321, VkglTestCase_007321_1, VkglTestCase_007321_2);

#define VkglTestCase_007322_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007322_2 ".div.const_highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007322, VkglTestCase_007322_1, VkglTestCase_007322_2);

#define VkglTestCase_007323_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007323_2 "ix.div.const_highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007323, VkglTestCase_007323_1, VkglTestCase_007323_2);

#define VkglTestCase_007324_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007324_2 "x.div.const_highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007324, VkglTestCase_007324_1, VkglTestCase_007324_2);

#define VkglTestCase_007325_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007325_2 "ix.div.const_lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007325, VkglTestCase_007325_1, VkglTestCase_007325_2);

#define VkglTestCase_007326_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007326_2 "x.div.const_lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007326, VkglTestCase_007326_1, VkglTestCase_007326_2);

#define VkglTestCase_007327_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007327_2 "ix.div.const_lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007327, VkglTestCase_007327_1, VkglTestCase_007327_2);

#define VkglTestCase_007328_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007328_2 "x.div.const_lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007328, VkglTestCase_007328_1, VkglTestCase_007328_2);

#define VkglTestCase_007329_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007329_2 ".div.const_mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007329, VkglTestCase_007329_1, VkglTestCase_007329_2);

#define VkglTestCase_007330_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007330_2 "div.const_mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007330, VkglTestCase_007330_1, VkglTestCase_007330_2);

#define VkglTestCase_007331_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007331_2 "x.div.const_mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007331, VkglTestCase_007331_1, VkglTestCase_007331_2);

#define VkglTestCase_007332_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007332_2 ".div.const_mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007332, VkglTestCase_007332_1, VkglTestCase_007332_2);

#define VkglTestCase_007333_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007333_2 "x.div.const_highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007333, VkglTestCase_007333_1, VkglTestCase_007333_2);

#define VkglTestCase_007334_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007334_2 ".div.const_highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007334, VkglTestCase_007334_1, VkglTestCase_007334_2);

#define VkglTestCase_007335_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007335_2 "ix.div.const_highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007335, VkglTestCase_007335_1, VkglTestCase_007335_2);

#define VkglTestCase_007336_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007336_2 "x.div.const_highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007336, VkglTestCase_007336_1, VkglTestCase_007336_2);

#define VkglTestCase_007337_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007337_2 "ix.div.const_lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007337, VkglTestCase_007337_1, VkglTestCase_007337_2);

#define VkglTestCase_007338_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007338_2 "x.div.const_lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007338, VkglTestCase_007338_1, VkglTestCase_007338_2);

#define VkglTestCase_007339_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007339_2 "ix.div.const_lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007339, VkglTestCase_007339_1, VkglTestCase_007339_2);

#define VkglTestCase_007340_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007340_2 "x.div.const_lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007340, VkglTestCase_007340_1, VkglTestCase_007340_2);

#define VkglTestCase_007341_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007341_2 ".div.const_mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007341, VkglTestCase_007341_1, VkglTestCase_007341_2);

#define VkglTestCase_007342_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007342_2 "div.const_mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007342, VkglTestCase_007342_1, VkglTestCase_007342_2);

#define VkglTestCase_007343_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007343_2 "x.div.const_mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007343, VkglTestCase_007343_1, VkglTestCase_007343_2);

#define VkglTestCase_007344_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007344_2 ".div.const_mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007344, VkglTestCase_007344_1, VkglTestCase_007344_2);

#define VkglTestCase_007345_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007345_2 "x.div.const_highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007345, VkglTestCase_007345_1, VkglTestCase_007345_2);

#define VkglTestCase_007346_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007346_2 ".div.const_highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007346, VkglTestCase_007346_1, VkglTestCase_007346_2);

#define VkglTestCase_007347_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007347_2 "ix.div.const_highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007347, VkglTestCase_007347_1, VkglTestCase_007347_2);

#define VkglTestCase_007348_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007348_2 "x.div.const_highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007348, VkglTestCase_007348_1, VkglTestCase_007348_2);

#define VkglTestCase_007349_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007349_2 "x.div.uniform_lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007349, VkglTestCase_007349_1, VkglTestCase_007349_2);

#define VkglTestCase_007350_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007350_2 ".div.uniform_lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007350, VkglTestCase_007350_1, VkglTestCase_007350_2);

#define VkglTestCase_007351_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007351_2 "x.div.uniform_lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007351, VkglTestCase_007351_1, VkglTestCase_007351_2);

#define VkglTestCase_007352_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007352_2 ".div.uniform_lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007352, VkglTestCase_007352_1, VkglTestCase_007352_2);

#define VkglTestCase_007353_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007353_2 "div.uniform_mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007353, VkglTestCase_007353_1, VkglTestCase_007353_2);

#define VkglTestCase_007354_1 "dEQP-GLES2.functional.shaders.matrix.d"
#define VkglTestCase_007354_2 "iv.uniform_mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007354, VkglTestCase_007354_1, VkglTestCase_007354_2);

#define VkglTestCase_007355_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007355_2 ".div.uniform_mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007355, VkglTestCase_007355_1, VkglTestCase_007355_2);

#define VkglTestCase_007356_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007356_2 "div.uniform_mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007356, VkglTestCase_007356_1, VkglTestCase_007356_2);

#define VkglTestCase_007357_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007357_2 ".div.uniform_highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007357, VkglTestCase_007357_1, VkglTestCase_007357_2);

#define VkglTestCase_007358_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007358_2 "div.uniform_highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007358, VkglTestCase_007358_1, VkglTestCase_007358_2);

#define VkglTestCase_007359_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007359_2 "x.div.uniform_highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007359, VkglTestCase_007359_1, VkglTestCase_007359_2);

#define VkglTestCase_007360_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007360_2 ".div.uniform_highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007360, VkglTestCase_007360_1, VkglTestCase_007360_2);

#define VkglTestCase_007361_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007361_2 "x.div.uniform_lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007361, VkglTestCase_007361_1, VkglTestCase_007361_2);

#define VkglTestCase_007362_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007362_2 ".div.uniform_lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007362, VkglTestCase_007362_1, VkglTestCase_007362_2);

#define VkglTestCase_007363_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007363_2 "x.div.uniform_lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007363, VkglTestCase_007363_1, VkglTestCase_007363_2);

#define VkglTestCase_007364_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007364_2 ".div.uniform_lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007364, VkglTestCase_007364_1, VkglTestCase_007364_2);

#define VkglTestCase_007365_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007365_2 "div.uniform_mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007365, VkglTestCase_007365_1, VkglTestCase_007365_2);

#define VkglTestCase_007366_1 "dEQP-GLES2.functional.shaders.matrix.d"
#define VkglTestCase_007366_2 "iv.uniform_mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007366, VkglTestCase_007366_1, VkglTestCase_007366_2);

#define VkglTestCase_007367_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007367_2 ".div.uniform_mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007367, VkglTestCase_007367_1, VkglTestCase_007367_2);

#define VkglTestCase_007368_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007368_2 "div.uniform_mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007368, VkglTestCase_007368_1, VkglTestCase_007368_2);

#define VkglTestCase_007369_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007369_2 ".div.uniform_highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007369, VkglTestCase_007369_1, VkglTestCase_007369_2);

#define VkglTestCase_007370_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007370_2 "div.uniform_highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007370, VkglTestCase_007370_1, VkglTestCase_007370_2);

#define VkglTestCase_007371_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007371_2 "x.div.uniform_highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007371, VkglTestCase_007371_1, VkglTestCase_007371_2);

#define VkglTestCase_007372_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007372_2 ".div.uniform_highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007372, VkglTestCase_007372_1, VkglTestCase_007372_2);

#define VkglTestCase_007373_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007373_2 "x.div.uniform_lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007373, VkglTestCase_007373_1, VkglTestCase_007373_2);

#define VkglTestCase_007374_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007374_2 ".div.uniform_lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007374, VkglTestCase_007374_1, VkglTestCase_007374_2);

#define VkglTestCase_007375_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007375_2 "x.div.uniform_lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007375, VkglTestCase_007375_1, VkglTestCase_007375_2);

#define VkglTestCase_007376_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007376_2 ".div.uniform_lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007376, VkglTestCase_007376_1, VkglTestCase_007376_2);

#define VkglTestCase_007377_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007377_2 "div.uniform_mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007377, VkglTestCase_007377_1, VkglTestCase_007377_2);

#define VkglTestCase_007378_1 "dEQP-GLES2.functional.shaders.matrix.d"
#define VkglTestCase_007378_2 "iv.uniform_mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007378, VkglTestCase_007378_1, VkglTestCase_007378_2);

#define VkglTestCase_007379_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007379_2 ".div.uniform_mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007379, VkglTestCase_007379_1, VkglTestCase_007379_2);

#define VkglTestCase_007380_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007380_2 "div.uniform_mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007380, VkglTestCase_007380_1, VkglTestCase_007380_2);

#define VkglTestCase_007381_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007381_2 ".div.uniform_highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007381, VkglTestCase_007381_1, VkglTestCase_007381_2);

#define VkglTestCase_007382_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007382_2 "div.uniform_highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007382, VkglTestCase_007382_1, VkglTestCase_007382_2);

#define VkglTestCase_007383_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007383_2 "x.div.uniform_highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007383, VkglTestCase_007383_1, VkglTestCase_007383_2);

#define VkglTestCase_007384_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007384_2 ".div.uniform_highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007384, VkglTestCase_007384_1, VkglTestCase_007384_2);

#define VkglTestCase_007385_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007385_2 "x.div.dynamic_lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007385, VkglTestCase_007385_1, VkglTestCase_007385_2);

#define VkglTestCase_007386_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007386_2 ".div.dynamic_lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007386, VkglTestCase_007386_1, VkglTestCase_007386_2);

#define VkglTestCase_007387_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007387_2 "x.div.dynamic_lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007387, VkglTestCase_007387_1, VkglTestCase_007387_2);

#define VkglTestCase_007388_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007388_2 ".div.dynamic_lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007388, VkglTestCase_007388_1, VkglTestCase_007388_2);

#define VkglTestCase_007389_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007389_2 "div.dynamic_mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007389, VkglTestCase_007389_1, VkglTestCase_007389_2);

#define VkglTestCase_007390_1 "dEQP-GLES2.functional.shaders.matrix.d"
#define VkglTestCase_007390_2 "iv.dynamic_mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007390, VkglTestCase_007390_1, VkglTestCase_007390_2);

#define VkglTestCase_007391_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007391_2 ".div.dynamic_mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007391, VkglTestCase_007391_1, VkglTestCase_007391_2);

#define VkglTestCase_007392_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007392_2 "div.dynamic_mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007392, VkglTestCase_007392_1, VkglTestCase_007392_2);

#define VkglTestCase_007393_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007393_2 ".div.dynamic_highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007393, VkglTestCase_007393_1, VkglTestCase_007393_2);

#define VkglTestCase_007394_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007394_2 "div.dynamic_highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007394, VkglTestCase_007394_1, VkglTestCase_007394_2);

#define VkglTestCase_007395_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007395_2 "x.div.dynamic_highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007395, VkglTestCase_007395_1, VkglTestCase_007395_2);

#define VkglTestCase_007396_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007396_2 ".div.dynamic_highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007396, VkglTestCase_007396_1, VkglTestCase_007396_2);

#define VkglTestCase_007397_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007397_2 "x.div.dynamic_lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007397, VkglTestCase_007397_1, VkglTestCase_007397_2);

#define VkglTestCase_007398_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007398_2 ".div.dynamic_lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007398, VkglTestCase_007398_1, VkglTestCase_007398_2);

#define VkglTestCase_007399_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007399_2 "x.div.dynamic_lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007399, VkglTestCase_007399_1, VkglTestCase_007399_2);

#define VkglTestCase_007400_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007400_2 ".div.dynamic_lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007400, VkglTestCase_007400_1, VkglTestCase_007400_2);

#define VkglTestCase_007401_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007401_2 "div.dynamic_mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007401, VkglTestCase_007401_1, VkglTestCase_007401_2);

#define VkglTestCase_007402_1 "dEQP-GLES2.functional.shaders.matrix.d"
#define VkglTestCase_007402_2 "iv.dynamic_mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007402, VkglTestCase_007402_1, VkglTestCase_007402_2);

#define VkglTestCase_007403_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007403_2 ".div.dynamic_mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007403, VkglTestCase_007403_1, VkglTestCase_007403_2);

#define VkglTestCase_007404_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007404_2 "div.dynamic_mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007404, VkglTestCase_007404_1, VkglTestCase_007404_2);

#define VkglTestCase_007405_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007405_2 ".div.dynamic_highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007405, VkglTestCase_007405_1, VkglTestCase_007405_2);

#define VkglTestCase_007406_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007406_2 "div.dynamic_highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007406, VkglTestCase_007406_1, VkglTestCase_007406_2);

#define VkglTestCase_007407_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007407_2 "x.div.dynamic_highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007407, VkglTestCase_007407_1, VkglTestCase_007407_2);

#define VkglTestCase_007408_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007408_2 ".div.dynamic_highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007408, VkglTestCase_007408_1, VkglTestCase_007408_2);

#define VkglTestCase_007409_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007409_2 "x.div.dynamic_lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007409, VkglTestCase_007409_1, VkglTestCase_007409_2);

#define VkglTestCase_007410_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007410_2 ".div.dynamic_lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007410, VkglTestCase_007410_1, VkglTestCase_007410_2);

#define VkglTestCase_007411_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007411_2 "x.div.dynamic_lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007411, VkglTestCase_007411_1, VkglTestCase_007411_2);

#define VkglTestCase_007412_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007412_2 ".div.dynamic_lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007412, VkglTestCase_007412_1, VkglTestCase_007412_2);

#define VkglTestCase_007413_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007413_2 "div.dynamic_mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007413, VkglTestCase_007413_1, VkglTestCase_007413_2);

#define VkglTestCase_007414_1 "dEQP-GLES2.functional.shaders.matrix.d"
#define VkglTestCase_007414_2 "iv.dynamic_mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007414, VkglTestCase_007414_1, VkglTestCase_007414_2);

#define VkglTestCase_007415_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007415_2 ".div.dynamic_mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007415, VkglTestCase_007415_1, VkglTestCase_007415_2);

#define VkglTestCase_007416_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007416_2 "div.dynamic_mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007416, VkglTestCase_007416_1, VkglTestCase_007416_2);

#define VkglTestCase_007417_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007417_2 ".div.dynamic_highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007417, VkglTestCase_007417_1, VkglTestCase_007417_2);

#define VkglTestCase_007418_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007418_2 "div.dynamic_highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007418, VkglTestCase_007418_1, VkglTestCase_007418_2);

#define VkglTestCase_007419_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007419_2 "x.div.dynamic_highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007419, VkglTestCase_007419_1, VkglTestCase_007419_2);

#define VkglTestCase_007420_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007420_2 ".div.dynamic_highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007420, VkglTestCase_007420_1, VkglTestCase_007420_2);
