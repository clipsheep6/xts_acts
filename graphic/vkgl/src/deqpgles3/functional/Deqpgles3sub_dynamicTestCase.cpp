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
#include "../ActsDeqpgles30015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014304_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014304_2 "x.sub.dynamic.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014304, VkglTestCase_014304_1, VkglTestCase_014304_2);

#define VkglTestCase_014305_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014305_2 ".sub.dynamic.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014305, VkglTestCase_014305_1, VkglTestCase_014305_2);

#define VkglTestCase_014306_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014306_2 "x.sub.dynamic.lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014306, VkglTestCase_014306_1, VkglTestCase_014306_2);

#define VkglTestCase_014307_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014307_2 ".sub.dynamic.lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014307, VkglTestCase_014307_1, VkglTestCase_014307_2);

#define VkglTestCase_014308_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014308_2 "sub.dynamic.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014308, VkglTestCase_014308_1, VkglTestCase_014308_2);

#define VkglTestCase_014309_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014309_2 "ub.dynamic.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014309, VkglTestCase_014309_1, VkglTestCase_014309_2);

#define VkglTestCase_014310_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014310_2 ".sub.dynamic.mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014310, VkglTestCase_014310_1, VkglTestCase_014310_2);

#define VkglTestCase_014311_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014311_2 "sub.dynamic.mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014311, VkglTestCase_014311_1, VkglTestCase_014311_2);

#define VkglTestCase_014312_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014312_2 ".sub.dynamic.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014312, VkglTestCase_014312_1, VkglTestCase_014312_2);

#define VkglTestCase_014313_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014313_2 "sub.dynamic.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014313, VkglTestCase_014313_1, VkglTestCase_014313_2);

#define VkglTestCase_014314_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014314_2 "x.sub.dynamic.highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014314, VkglTestCase_014314_1, VkglTestCase_014314_2);

#define VkglTestCase_014315_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014315_2 ".sub.dynamic.highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014315, VkglTestCase_014315_1, VkglTestCase_014315_2);

#define VkglTestCase_014316_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014316_2 ".sub.dynamic.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014316, VkglTestCase_014316_1, VkglTestCase_014316_2);

#define VkglTestCase_014317_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014317_2 "sub.dynamic.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014317, VkglTestCase_014317_1, VkglTestCase_014317_2);

#define VkglTestCase_014318_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014318_2 "sub.dynamic.lowp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014318, VkglTestCase_014318_1, VkglTestCase_014318_2);

#define VkglTestCase_014319_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014319_2 "ub.dynamic.lowp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014319, VkglTestCase_014319_1, VkglTestCase_014319_2);

#define VkglTestCase_014320_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014320_2 "ub.dynamic.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014320, VkglTestCase_014320_1, VkglTestCase_014320_2);

#define VkglTestCase_014321_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014321_2 "b.dynamic.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014321, VkglTestCase_014321_1, VkglTestCase_014321_2);

#define VkglTestCase_014322_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014322_2 "ub.dynamic.mediump_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014322, VkglTestCase_014322_1, VkglTestCase_014322_2);

#define VkglTestCase_014323_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014323_2 "b.dynamic.mediump_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014323, VkglTestCase_014323_1, VkglTestCase_014323_2);

#define VkglTestCase_014324_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014324_2 "sub.dynamic.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014324, VkglTestCase_014324_1, VkglTestCase_014324_2);

#define VkglTestCase_014325_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014325_2 "ub.dynamic.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014325, VkglTestCase_014325_1, VkglTestCase_014325_2);

#define VkglTestCase_014326_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014326_2 "sub.dynamic.highp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014326, VkglTestCase_014326_1, VkglTestCase_014326_2);

#define VkglTestCase_014327_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014327_2 "ub.dynamic.highp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014327, VkglTestCase_014327_1, VkglTestCase_014327_2);

#define VkglTestCase_014328_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014328_2 ".sub.dynamic.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014328, VkglTestCase_014328_1, VkglTestCase_014328_2);

#define VkglTestCase_014329_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014329_2 "sub.dynamic.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014329, VkglTestCase_014329_1, VkglTestCase_014329_2);

#define VkglTestCase_014330_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014330_2 "sub.dynamic.lowp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014330, VkglTestCase_014330_1, VkglTestCase_014330_2);

#define VkglTestCase_014331_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014331_2 "ub.dynamic.lowp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014331, VkglTestCase_014331_1, VkglTestCase_014331_2);

#define VkglTestCase_014332_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014332_2 "ub.dynamic.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014332, VkglTestCase_014332_1, VkglTestCase_014332_2);

#define VkglTestCase_014333_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014333_2 "b.dynamic.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014333, VkglTestCase_014333_1, VkglTestCase_014333_2);

#define VkglTestCase_014334_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014334_2 "ub.dynamic.mediump_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014334, VkglTestCase_014334_1, VkglTestCase_014334_2);

#define VkglTestCase_014335_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014335_2 "b.dynamic.mediump_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014335, VkglTestCase_014335_1, VkglTestCase_014335_2);

#define VkglTestCase_014336_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014336_2 "sub.dynamic.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014336, VkglTestCase_014336_1, VkglTestCase_014336_2);

#define VkglTestCase_014337_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014337_2 "ub.dynamic.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014337, VkglTestCase_014337_1, VkglTestCase_014337_2);

#define VkglTestCase_014338_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014338_2 "sub.dynamic.highp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014338, VkglTestCase_014338_1, VkglTestCase_014338_2);

#define VkglTestCase_014339_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014339_2 "ub.dynamic.highp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014339, VkglTestCase_014339_1, VkglTestCase_014339_2);

#define VkglTestCase_014340_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014340_2 ".sub.dynamic.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014340, VkglTestCase_014340_1, VkglTestCase_014340_2);

#define VkglTestCase_014341_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014341_2 "sub.dynamic.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014341, VkglTestCase_014341_1, VkglTestCase_014341_2);

#define VkglTestCase_014342_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014342_2 "sub.dynamic.lowp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014342, VkglTestCase_014342_1, VkglTestCase_014342_2);

#define VkglTestCase_014343_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014343_2 "ub.dynamic.lowp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014343, VkglTestCase_014343_1, VkglTestCase_014343_2);

#define VkglTestCase_014344_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014344_2 "ub.dynamic.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014344, VkglTestCase_014344_1, VkglTestCase_014344_2);

#define VkglTestCase_014345_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014345_2 "b.dynamic.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014345, VkglTestCase_014345_1, VkglTestCase_014345_2);

#define VkglTestCase_014346_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014346_2 "ub.dynamic.mediump_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014346, VkglTestCase_014346_1, VkglTestCase_014346_2);

#define VkglTestCase_014347_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014347_2 "b.dynamic.mediump_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014347, VkglTestCase_014347_1, VkglTestCase_014347_2);

#define VkglTestCase_014348_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014348_2 "sub.dynamic.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014348, VkglTestCase_014348_1, VkglTestCase_014348_2);

#define VkglTestCase_014349_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014349_2 "ub.dynamic.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014349, VkglTestCase_014349_1, VkglTestCase_014349_2);

#define VkglTestCase_014350_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014350_2 "sub.dynamic.highp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014350, VkglTestCase_014350_1, VkglTestCase_014350_2);

#define VkglTestCase_014351_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014351_2 "ub.dynamic.highp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014351, VkglTestCase_014351_1, VkglTestCase_014351_2);

#define VkglTestCase_014352_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014352_2 "x.sub.dynamic.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014352, VkglTestCase_014352_1, VkglTestCase_014352_2);

#define VkglTestCase_014353_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014353_2 ".sub.dynamic.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014353, VkglTestCase_014353_1, VkglTestCase_014353_2);

#define VkglTestCase_014354_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014354_2 "x.sub.dynamic.lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014354, VkglTestCase_014354_1, VkglTestCase_014354_2);

#define VkglTestCase_014355_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014355_2 ".sub.dynamic.lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014355, VkglTestCase_014355_1, VkglTestCase_014355_2);

#define VkglTestCase_014356_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014356_2 "sub.dynamic.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014356, VkglTestCase_014356_1, VkglTestCase_014356_2);

#define VkglTestCase_014357_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014357_2 "ub.dynamic.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014357, VkglTestCase_014357_1, VkglTestCase_014357_2);

#define VkglTestCase_014358_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014358_2 ".sub.dynamic.mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014358, VkglTestCase_014358_1, VkglTestCase_014358_2);

#define VkglTestCase_014359_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014359_2 "sub.dynamic.mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014359, VkglTestCase_014359_1, VkglTestCase_014359_2);

#define VkglTestCase_014360_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014360_2 ".sub.dynamic.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014360, VkglTestCase_014360_1, VkglTestCase_014360_2);

#define VkglTestCase_014361_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014361_2 "sub.dynamic.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014361, VkglTestCase_014361_1, VkglTestCase_014361_2);

#define VkglTestCase_014362_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014362_2 "x.sub.dynamic.highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014362, VkglTestCase_014362_1, VkglTestCase_014362_2);

#define VkglTestCase_014363_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014363_2 ".sub.dynamic.highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014363, VkglTestCase_014363_1, VkglTestCase_014363_2);

#define VkglTestCase_014364_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014364_2 ".sub.dynamic.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014364, VkglTestCase_014364_1, VkglTestCase_014364_2);

#define VkglTestCase_014365_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014365_2 "sub.dynamic.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014365, VkglTestCase_014365_1, VkglTestCase_014365_2);

#define VkglTestCase_014366_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014366_2 "sub.dynamic.lowp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014366, VkglTestCase_014366_1, VkglTestCase_014366_2);

#define VkglTestCase_014367_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014367_2 "ub.dynamic.lowp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014367, VkglTestCase_014367_1, VkglTestCase_014367_2);

#define VkglTestCase_014368_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014368_2 "ub.dynamic.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014368, VkglTestCase_014368_1, VkglTestCase_014368_2);

#define VkglTestCase_014369_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014369_2 "b.dynamic.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014369, VkglTestCase_014369_1, VkglTestCase_014369_2);

#define VkglTestCase_014370_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014370_2 "ub.dynamic.mediump_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014370, VkglTestCase_014370_1, VkglTestCase_014370_2);

#define VkglTestCase_014371_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014371_2 "b.dynamic.mediump_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014371, VkglTestCase_014371_1, VkglTestCase_014371_2);

#define VkglTestCase_014372_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014372_2 "sub.dynamic.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014372, VkglTestCase_014372_1, VkglTestCase_014372_2);

#define VkglTestCase_014373_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014373_2 "ub.dynamic.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014373, VkglTestCase_014373_1, VkglTestCase_014373_2);

#define VkglTestCase_014374_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014374_2 "sub.dynamic.highp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014374, VkglTestCase_014374_1, VkglTestCase_014374_2);

#define VkglTestCase_014375_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014375_2 "ub.dynamic.highp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014375, VkglTestCase_014375_1, VkglTestCase_014375_2);

#define VkglTestCase_014376_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014376_2 ".sub.dynamic.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014376, VkglTestCase_014376_1, VkglTestCase_014376_2);

#define VkglTestCase_014377_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014377_2 "sub.dynamic.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014377, VkglTestCase_014377_1, VkglTestCase_014377_2);

#define VkglTestCase_014378_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014378_2 "sub.dynamic.lowp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014378, VkglTestCase_014378_1, VkglTestCase_014378_2);

#define VkglTestCase_014379_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014379_2 "ub.dynamic.lowp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014379, VkglTestCase_014379_1, VkglTestCase_014379_2);

#define VkglTestCase_014380_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014380_2 "ub.dynamic.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014380, VkglTestCase_014380_1, VkglTestCase_014380_2);

#define VkglTestCase_014381_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014381_2 "b.dynamic.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014381, VkglTestCase_014381_1, VkglTestCase_014381_2);

#define VkglTestCase_014382_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014382_2 "ub.dynamic.mediump_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014382, VkglTestCase_014382_1, VkglTestCase_014382_2);

#define VkglTestCase_014383_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014383_2 "b.dynamic.mediump_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014383, VkglTestCase_014383_1, VkglTestCase_014383_2);

#define VkglTestCase_014384_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014384_2 "sub.dynamic.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014384, VkglTestCase_014384_1, VkglTestCase_014384_2);

#define VkglTestCase_014385_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014385_2 "ub.dynamic.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014385, VkglTestCase_014385_1, VkglTestCase_014385_2);

#define VkglTestCase_014386_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014386_2 "sub.dynamic.highp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014386, VkglTestCase_014386_1, VkglTestCase_014386_2);

#define VkglTestCase_014387_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014387_2 "ub.dynamic.highp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014387, VkglTestCase_014387_1, VkglTestCase_014387_2);

#define VkglTestCase_014388_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014388_2 ".sub.dynamic.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014388, VkglTestCase_014388_1, VkglTestCase_014388_2);

#define VkglTestCase_014389_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014389_2 "sub.dynamic.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014389, VkglTestCase_014389_1, VkglTestCase_014389_2);

#define VkglTestCase_014390_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014390_2 "sub.dynamic.lowp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014390, VkglTestCase_014390_1, VkglTestCase_014390_2);

#define VkglTestCase_014391_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014391_2 "ub.dynamic.lowp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014391, VkglTestCase_014391_1, VkglTestCase_014391_2);

#define VkglTestCase_014392_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014392_2 "ub.dynamic.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014392, VkglTestCase_014392_1, VkglTestCase_014392_2);

#define VkglTestCase_014393_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014393_2 "b.dynamic.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014393, VkglTestCase_014393_1, VkglTestCase_014393_2);

#define VkglTestCase_014394_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014394_2 "ub.dynamic.mediump_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014394, VkglTestCase_014394_1, VkglTestCase_014394_2);

#define VkglTestCase_014395_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014395_2 "b.dynamic.mediump_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014395, VkglTestCase_014395_1, VkglTestCase_014395_2);

#define VkglTestCase_014396_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014396_2 "sub.dynamic.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014396, VkglTestCase_014396_1, VkglTestCase_014396_2);

#define VkglTestCase_014397_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014397_2 "ub.dynamic.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014397, VkglTestCase_014397_1, VkglTestCase_014397_2);

#define VkglTestCase_014398_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014398_2 "sub.dynamic.highp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014398, VkglTestCase_014398_1, VkglTestCase_014398_2);

#define VkglTestCase_014399_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014399_2 "ub.dynamic.highp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014399, VkglTestCase_014399_1, VkglTestCase_014399_2);

#define VkglTestCase_014400_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014400_2 "x.sub.dynamic.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014400, VkglTestCase_014400_1, VkglTestCase_014400_2);

#define VkglTestCase_014401_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014401_2 ".sub.dynamic.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014401, VkglTestCase_014401_1, VkglTestCase_014401_2);

#define VkglTestCase_014402_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014402_2 "x.sub.dynamic.lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014402, VkglTestCase_014402_1, VkglTestCase_014402_2);

#define VkglTestCase_014403_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014403_2 ".sub.dynamic.lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014403, VkglTestCase_014403_1, VkglTestCase_014403_2);

#define VkglTestCase_014404_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014404_2 "sub.dynamic.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014404, VkglTestCase_014404_1, VkglTestCase_014404_2);

#define VkglTestCase_014405_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014405_2 "ub.dynamic.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014405, VkglTestCase_014405_1, VkglTestCase_014405_2);

#define VkglTestCase_014406_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014406_2 ".sub.dynamic.mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014406, VkglTestCase_014406_1, VkglTestCase_014406_2);

#define VkglTestCase_014407_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014407_2 "sub.dynamic.mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014407, VkglTestCase_014407_1, VkglTestCase_014407_2);

#define VkglTestCase_014408_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014408_2 ".sub.dynamic.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014408, VkglTestCase_014408_1, VkglTestCase_014408_2);

#define VkglTestCase_014409_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014409_2 "sub.dynamic.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014409, VkglTestCase_014409_1, VkglTestCase_014409_2);

#define VkglTestCase_014410_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014410_2 "x.sub.dynamic.highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014410, VkglTestCase_014410_1, VkglTestCase_014410_2);

#define VkglTestCase_014411_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014411_2 ".sub.dynamic.highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014411, VkglTestCase_014411_1, VkglTestCase_014411_2);
