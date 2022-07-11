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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001298_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001298_2 "ator_precedence.modulo_vs_not_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001298, VkglTestCase_001298_1, VkglTestCase_001298_2);

#define VkglTestCase_001299_1 "KHR-GLES3.shaders.preprocessor.opera"
#define VkglTestCase_001299_2 "tor_precedence.modulo_vs_not_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001299, VkglTestCase_001299_1, VkglTestCase_001299_2);

#define VkglTestCase_001300_1 "KHR-GLES3.shaders.preprocessor.ope"
#define VkglTestCase_001300_2 "rator_precedence.div_vs_not_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001300, VkglTestCase_001300_1, VkglTestCase_001300_2);

#define VkglTestCase_001301_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001301_2 "ator_precedence.div_vs_not_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001301, VkglTestCase_001301_1, VkglTestCase_001301_2);

#define VkglTestCase_001302_1 "KHR-GLES3.shaders.preprocessor.ope"
#define VkglTestCase_001302_2 "rator_precedence.mul_vs_not_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001302, VkglTestCase_001302_1, VkglTestCase_001302_2);

#define VkglTestCase_001303_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001303_2 "ator_precedence.mul_vs_not_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001303, VkglTestCase_001303_1, VkglTestCase_001303_2);

#define VkglTestCase_001304_1 "KHR-GLES3.shaders.preprocessor.operator"
#define VkglTestCase_001304_2 "_precedence.modulo_vs_bit_invert_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001304, VkglTestCase_001304_1, VkglTestCase_001304_2);

#define VkglTestCase_001305_1 "KHR-GLES3.shaders.preprocessor.operator_"
#define VkglTestCase_001305_2 "precedence.modulo_vs_bit_invert_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001305, VkglTestCase_001305_1, VkglTestCase_001305_2);

#define VkglTestCase_001306_1 "KHR-GLES3.shaders.preprocessor.opera"
#define VkglTestCase_001306_2 "tor_precedence.modulo_vs_minus_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001306, VkglTestCase_001306_1, VkglTestCase_001306_2);

#define VkglTestCase_001307_1 "KHR-GLES3.shaders.preprocessor.operat"
#define VkglTestCase_001307_2 "or_precedence.modulo_vs_minus_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001307, VkglTestCase_001307_1, VkglTestCase_001307_2);

#define VkglTestCase_001308_1 "KHR-GLES3.shaders.preprocessor.opera"
#define VkglTestCase_001308_2 "tor_precedence.modulo_vs_plus_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001308, VkglTestCase_001308_1, VkglTestCase_001308_2);

#define VkglTestCase_001309_1 "KHR-GLES3.shaders.preprocessor.operat"
#define VkglTestCase_001309_2 "or_precedence.modulo_vs_plus_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001309, VkglTestCase_001309_1, VkglTestCase_001309_2);

#define VkglTestCase_001310_1 "KHR-GLES3.shaders.preprocessor.operat"
#define VkglTestCase_001310_2 "or_precedence.div_vs_bit_invert_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001310, VkglTestCase_001310_1, VkglTestCase_001310_2);

#define VkglTestCase_001311_1 "KHR-GLES3.shaders.preprocessor.operato"
#define VkglTestCase_001311_2 "r_precedence.div_vs_bit_invert_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001311, VkglTestCase_001311_1, VkglTestCase_001311_2);

#define VkglTestCase_001312_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001312_2 "ator_precedence.div_vs_minus_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001312, VkglTestCase_001312_1, VkglTestCase_001312_2);

#define VkglTestCase_001313_1 "KHR-GLES3.shaders.preprocessor.opera"
#define VkglTestCase_001313_2 "tor_precedence.div_vs_minus_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001313, VkglTestCase_001313_1, VkglTestCase_001313_2);

#define VkglTestCase_001314_1 "KHR-GLES3.shaders.preprocessor.ope"
#define VkglTestCase_001314_2 "rator_precedence.div_vs_plus_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001314, VkglTestCase_001314_1, VkglTestCase_001314_2);

#define VkglTestCase_001315_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001315_2 "ator_precedence.div_vs_plus_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001315, VkglTestCase_001315_1, VkglTestCase_001315_2);

#define VkglTestCase_001316_1 "KHR-GLES3.shaders.preprocessor.operat"
#define VkglTestCase_001316_2 "or_precedence.mul_vs_bit_invert_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001316, VkglTestCase_001316_1, VkglTestCase_001316_2);

#define VkglTestCase_001317_1 "KHR-GLES3.shaders.preprocessor.operato"
#define VkglTestCase_001317_2 "r_precedence.mul_vs_bit_invert_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001317, VkglTestCase_001317_1, VkglTestCase_001317_2);

#define VkglTestCase_001318_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001318_2 "ator_precedence.mul_vs_minus_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001318, VkglTestCase_001318_1, VkglTestCase_001318_2);

#define VkglTestCase_001319_1 "KHR-GLES3.shaders.preprocessor.opera"
#define VkglTestCase_001319_2 "tor_precedence.mul_vs_minus_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001319, VkglTestCase_001319_1, VkglTestCase_001319_2);

#define VkglTestCase_001320_1 "KHR-GLES3.shaders.preprocessor.ope"
#define VkglTestCase_001320_2 "rator_precedence.mul_vs_plus_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001320, VkglTestCase_001320_1, VkglTestCase_001320_2);

#define VkglTestCase_001321_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001321_2 "ator_precedence.mul_vs_plus_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001321, VkglTestCase_001321_1, VkglTestCase_001321_2);

#define VkglTestCase_001322_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001322_2 "ator_precedence.sub_vs_modulo_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001322, VkglTestCase_001322_1, VkglTestCase_001322_2);

#define VkglTestCase_001323_1 "KHR-GLES3.shaders.preprocessor.opera"
#define VkglTestCase_001323_2 "tor_precedence.sub_vs_modulo_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001323, VkglTestCase_001323_1, VkglTestCase_001323_2);

#define VkglTestCase_001324_1 "KHR-GLES3.shaders.preprocessor.ope"
#define VkglTestCase_001324_2 "rator_precedence.sub_vs_div_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001324, VkglTestCase_001324_1, VkglTestCase_001324_2);

#define VkglTestCase_001325_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001325_2 "ator_precedence.sub_vs_div_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001325, VkglTestCase_001325_1, VkglTestCase_001325_2);

#define VkglTestCase_001326_1 "KHR-GLES3.shaders.preprocessor.ope"
#define VkglTestCase_001326_2 "rator_precedence.sub_vs_mul_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001326, VkglTestCase_001326_1, VkglTestCase_001326_2);

#define VkglTestCase_001327_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001327_2 "ator_precedence.sub_vs_mul_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001327, VkglTestCase_001327_1, VkglTestCase_001327_2);

#define VkglTestCase_001328_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001328_2 "ator_precedence.add_vs_modulo_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001328, VkglTestCase_001328_1, VkglTestCase_001328_2);

#define VkglTestCase_001329_1 "KHR-GLES3.shaders.preprocessor.opera"
#define VkglTestCase_001329_2 "tor_precedence.add_vs_modulo_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001329, VkglTestCase_001329_1, VkglTestCase_001329_2);

#define VkglTestCase_001330_1 "KHR-GLES3.shaders.preprocessor.ope"
#define VkglTestCase_001330_2 "rator_precedence.add_vs_div_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001330, VkglTestCase_001330_1, VkglTestCase_001330_2);

#define VkglTestCase_001331_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001331_2 "ator_precedence.add_vs_div_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001331, VkglTestCase_001331_1, VkglTestCase_001331_2);

#define VkglTestCase_001332_1 "KHR-GLES3.shaders.preprocessor.ope"
#define VkglTestCase_001332_2 "rator_precedence.add_vs_mul_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001332, VkglTestCase_001332_1, VkglTestCase_001332_2);

#define VkglTestCase_001333_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001333_2 "ator_precedence.add_vs_mul_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001333, VkglTestCase_001333_1, VkglTestCase_001333_2);

#define VkglTestCase_001334_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001334_2 "ator_precedence.rshift_vs_sub_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001334, VkglTestCase_001334_1, VkglTestCase_001334_2);

#define VkglTestCase_001335_1 "KHR-GLES3.shaders.preprocessor.opera"
#define VkglTestCase_001335_2 "tor_precedence.rshift_vs_sub_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001335, VkglTestCase_001335_1, VkglTestCase_001335_2);

#define VkglTestCase_001336_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001336_2 "ator_precedence.rshift_vs_add_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001336, VkglTestCase_001336_1, VkglTestCase_001336_2);

#define VkglTestCase_001337_1 "KHR-GLES3.shaders.preprocessor.opera"
#define VkglTestCase_001337_2 "tor_precedence.rshift_vs_add_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001337, VkglTestCase_001337_1, VkglTestCase_001337_2);

#define VkglTestCase_001338_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001338_2 "ator_precedence.lshift_vs_sub_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001338, VkglTestCase_001338_1, VkglTestCase_001338_2);

#define VkglTestCase_001339_1 "KHR-GLES3.shaders.preprocessor.opera"
#define VkglTestCase_001339_2 "tor_precedence.lshift_vs_sub_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001339, VkglTestCase_001339_1, VkglTestCase_001339_2);

#define VkglTestCase_001340_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001340_2 "ator_precedence.lshift_vs_add_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001340, VkglTestCase_001340_1, VkglTestCase_001340_2);

#define VkglTestCase_001341_1 "KHR-GLES3.shaders.preprocessor.opera"
#define VkglTestCase_001341_2 "tor_precedence.lshift_vs_add_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001341, VkglTestCase_001341_1, VkglTestCase_001341_2);

#define VkglTestCase_001342_1 "KHR-GLES3.shaders.preprocessor.operator_pr"
#define VkglTestCase_001342_2 "ecedence.greater_or_equal_vs_rshift_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001342, VkglTestCase_001342_1, VkglTestCase_001342_2);

#define VkglTestCase_001343_1 "KHR-GLES3.shaders.preprocessor.operator_pre"
#define VkglTestCase_001343_2 "cedence.greater_or_equal_vs_rshift_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001343, VkglTestCase_001343_1, VkglTestCase_001343_2);

#define VkglTestCase_001344_1 "KHR-GLES3.shaders.preprocessor.operator_pr"
#define VkglTestCase_001344_2 "ecedence.greater_or_equal_vs_lshift_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001344, VkglTestCase_001344_1, VkglTestCase_001344_2);

#define VkglTestCase_001345_1 "KHR-GLES3.shaders.preprocessor.operator_pre"
#define VkglTestCase_001345_2 "cedence.greater_or_equal_vs_lshift_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001345, VkglTestCase_001345_1, VkglTestCase_001345_2);

#define VkglTestCase_001346_1 "KHR-GLES3.shaders.preprocessor.operator_"
#define VkglTestCase_001346_2 "precedence.less_or_equal_vs_rshift_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001346, VkglTestCase_001346_1, VkglTestCase_001346_2);

#define VkglTestCase_001347_1 "KHR-GLES3.shaders.preprocessor.operator_p"
#define VkglTestCase_001347_2 "recedence.less_or_equal_vs_rshift_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001347, VkglTestCase_001347_1, VkglTestCase_001347_2);

#define VkglTestCase_001348_1 "KHR-GLES3.shaders.preprocessor.operator_"
#define VkglTestCase_001348_2 "precedence.less_or_equal_vs_lshift_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001348, VkglTestCase_001348_1, VkglTestCase_001348_2);

#define VkglTestCase_001349_1 "KHR-GLES3.shaders.preprocessor.operator_p"
#define VkglTestCase_001349_2 "recedence.less_or_equal_vs_lshift_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001349, VkglTestCase_001349_1, VkglTestCase_001349_2);

#define VkglTestCase_001350_1 "KHR-GLES3.shaders.preprocessor.operat"
#define VkglTestCase_001350_2 "or_precedence.greater_vs_rshift_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001350, VkglTestCase_001350_1, VkglTestCase_001350_2);

#define VkglTestCase_001351_1 "KHR-GLES3.shaders.preprocessor.operato"
#define VkglTestCase_001351_2 "r_precedence.greater_vs_rshift_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001351, VkglTestCase_001351_1, VkglTestCase_001351_2);

#define VkglTestCase_001352_1 "KHR-GLES3.shaders.preprocessor.operat"
#define VkglTestCase_001352_2 "or_precedence.greater_vs_lshift_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001352, VkglTestCase_001352_1, VkglTestCase_001352_2);

#define VkglTestCase_001353_1 "KHR-GLES3.shaders.preprocessor.operato"
#define VkglTestCase_001353_2 "r_precedence.greater_vs_lshift_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001353, VkglTestCase_001353_1, VkglTestCase_001353_2);

#define VkglTestCase_001354_1 "KHR-GLES3.shaders.preprocessor.opera"
#define VkglTestCase_001354_2 "tor_precedence.less_vs_rshift_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001354, VkglTestCase_001354_1, VkglTestCase_001354_2);

#define VkglTestCase_001355_1 "KHR-GLES3.shaders.preprocessor.operat"
#define VkglTestCase_001355_2 "or_precedence.less_vs_rshift_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001355, VkglTestCase_001355_1, VkglTestCase_001355_2);

#define VkglTestCase_001356_1 "KHR-GLES3.shaders.preprocessor.opera"
#define VkglTestCase_001356_2 "tor_precedence.less_vs_lshift_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001356, VkglTestCase_001356_1, VkglTestCase_001356_2);

#define VkglTestCase_001357_1 "KHR-GLES3.shaders.preprocessor.operat"
#define VkglTestCase_001357_2 "or_precedence.less_vs_lshift_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001357, VkglTestCase_001357_1, VkglTestCase_001357_2);

#define VkglTestCase_001358_1 "KHR-GLES3.shaders.preprocessor.operator_pre"
#define VkglTestCase_001358_2 "cedence.not_equal_vs_greater_or_equal_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001358, VkglTestCase_001358_1, VkglTestCase_001358_2);

#define VkglTestCase_001359_1 "KHR-GLES3.shaders.preprocessor.operator_prec"
#define VkglTestCase_001359_2 "edence.not_equal_vs_greater_or_equal_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001359, VkglTestCase_001359_1, VkglTestCase_001359_2);

#define VkglTestCase_001360_1 "KHR-GLES3.shaders.preprocessor.operator_pr"
#define VkglTestCase_001360_2 "ecedence.not_equal_vs_less_or_equal_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001360, VkglTestCase_001360_1, VkglTestCase_001360_2);

#define VkglTestCase_001361_1 "KHR-GLES3.shaders.preprocessor.operator_pre"
#define VkglTestCase_001361_2 "cedence.not_equal_vs_less_or_equal_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001361, VkglTestCase_001361_1, VkglTestCase_001361_2);

#define VkglTestCase_001362_1 "KHR-GLES3.shaders.preprocessor.operator"
#define VkglTestCase_001362_2 "_precedence.not_equal_vs_greater_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001362, VkglTestCase_001362_1, VkglTestCase_001362_2);

#define VkglTestCase_001363_1 "KHR-GLES3.shaders.preprocessor.operator_"
#define VkglTestCase_001363_2 "precedence.not_equal_vs_greater_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001363, VkglTestCase_001363_1, VkglTestCase_001363_2);

#define VkglTestCase_001364_1 "KHR-GLES3.shaders.preprocessor.operat"
#define VkglTestCase_001364_2 "or_precedence.not_equal_vs_less_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001364, VkglTestCase_001364_1, VkglTestCase_001364_2);

#define VkglTestCase_001365_1 "KHR-GLES3.shaders.preprocessor.operato"
#define VkglTestCase_001365_2 "r_precedence.not_equal_vs_less_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001365, VkglTestCase_001365_1, VkglTestCase_001365_2);

#define VkglTestCase_001366_1 "KHR-GLES3.shaders.preprocessor.operator_p"
#define VkglTestCase_001366_2 "recedence.equal_vs_greater_or_equal_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001366, VkglTestCase_001366_1, VkglTestCase_001366_2);

#define VkglTestCase_001367_1 "KHR-GLES3.shaders.preprocessor.operator_pr"
#define VkglTestCase_001367_2 "ecedence.equal_vs_greater_or_equal_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001367, VkglTestCase_001367_1, VkglTestCase_001367_2);

#define VkglTestCase_001368_1 "KHR-GLES3.shaders.preprocessor.operator_"
#define VkglTestCase_001368_2 "precedence.equal_vs_less_or_equal_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001368, VkglTestCase_001368_1, VkglTestCase_001368_2);

#define VkglTestCase_001369_1 "KHR-GLES3.shaders.preprocessor.operator_p"
#define VkglTestCase_001369_2 "recedence.equal_vs_less_or_equal_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001369, VkglTestCase_001369_1, VkglTestCase_001369_2);

#define VkglTestCase_001370_1 "KHR-GLES3.shaders.preprocessor.operat"
#define VkglTestCase_001370_2 "or_precedence.equal_vs_greater_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001370, VkglTestCase_001370_1, VkglTestCase_001370_2);

#define VkglTestCase_001371_1 "KHR-GLES3.shaders.preprocessor.operato"
#define VkglTestCase_001371_2 "r_precedence.equal_vs_greater_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001371, VkglTestCase_001371_1, VkglTestCase_001371_2);

#define VkglTestCase_001372_1 "KHR-GLES3.shaders.preprocessor.oper"
#define VkglTestCase_001372_2 "ator_precedence.equal_vs_less_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001372, VkglTestCase_001372_1, VkglTestCase_001372_2);

#define VkglTestCase_001373_1 "KHR-GLES3.shaders.preprocessor.opera"
#define VkglTestCase_001373_2 "tor_precedence.equal_vs_less_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001373, VkglTestCase_001373_1, VkglTestCase_001373_2);

#define VkglTestCase_001374_1 "KHR-GLES3.shaders.preprocessor.operator_p"
#define VkglTestCase_001374_2 "recedence.bitwise_and_vs_not_equal_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001374, VkglTestCase_001374_1, VkglTestCase_001374_2);

#define VkglTestCase_001375_1 "KHR-GLES3.shaders.preprocessor.operator_pr"
#define VkglTestCase_001375_2 "ecedence.bitwise_and_vs_not_equal_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001375, VkglTestCase_001375_1, VkglTestCase_001375_2);

#define VkglTestCase_001376_1 "KHR-GLES3.shaders.preprocessor.operator"
#define VkglTestCase_001376_2 "_precedence.bitwise_and_vs_equal_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001376, VkglTestCase_001376_1, VkglTestCase_001376_2);

#define VkglTestCase_001377_1 "KHR-GLES3.shaders.preprocessor.operator_"
#define VkglTestCase_001377_2 "precedence.bitwise_and_vs_equal_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001377, VkglTestCase_001377_1, VkglTestCase_001377_2);

#define VkglTestCase_001378_1 "KHR-GLES3.shaders.preprocessor.operato"
#define VkglTestCase_001378_2 "r_precedence.xor_vs_bitwise_and_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001378, VkglTestCase_001378_1, VkglTestCase_001378_2);

#define VkglTestCase_001379_1 "KHR-GLES3.shaders.preprocessor.operator"
#define VkglTestCase_001379_2 "_precedence.xor_vs_bitwise_and_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001379, VkglTestCase_001379_1, VkglTestCase_001379_2);

#define VkglTestCase_001380_1 "KHR-GLES3.shaders.preprocessor.operat"
#define VkglTestCase_001380_2 "or_precedence.bitwise_or_vs_xor_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001380, VkglTestCase_001380_1, VkglTestCase_001380_2);

#define VkglTestCase_001381_1 "KHR-GLES3.shaders.preprocessor.operato"
#define VkglTestCase_001381_2 "r_precedence.bitwise_or_vs_xor_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001381, VkglTestCase_001381_1, VkglTestCase_001381_2);

#define VkglTestCase_001382_1 "KHR-GLES3.shaders.preprocessor.operator_p"
#define VkglTestCase_001382_2 "recedence.logical_and_vs_bitwise_or_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001382, VkglTestCase_001382_1, VkglTestCase_001382_2);

#define VkglTestCase_001383_1 "KHR-GLES3.shaders.preprocessor.operator_pr"
#define VkglTestCase_001383_2 "ecedence.logical_and_vs_bitwise_or_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001383, VkglTestCase_001383_1, VkglTestCase_001383_2);

#define VkglTestCase_001384_1 "KHR-GLES3.shaders.preprocessor.operator_pr"
#define VkglTestCase_001384_2 "ecedence.logical_and_vs_bitwise_and_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001384, VkglTestCase_001384_1, VkglTestCase_001384_2);

#define VkglTestCase_001385_1 "KHR-GLES3.shaders.preprocessor.operator_pre"
#define VkglTestCase_001385_2 "cedence.logical_and_vs_bitwise_and_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001385, VkglTestCase_001385_1, VkglTestCase_001385_2);

#define VkglTestCase_001386_1 "KHR-GLES3.shaders.preprocessor.operator_p"
#define VkglTestCase_001386_2 "recedence.logical_or_vs_logical_and_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001386, VkglTestCase_001386_1, VkglTestCase_001386_2);

#define VkglTestCase_001387_1 "KHR-GLES3.shaders.preprocessor.operator_pr"
#define VkglTestCase_001387_2 "ecedence.logical_or_vs_logical_and_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001387, VkglTestCase_001387_1, VkglTestCase_001387_2);
