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
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001242_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001242_2 "r.operator_precedence.modulo_vs_not_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001242, VkglTestCase_001242_1, VkglTestCase_001242_2);

#define VkglTestCase_001243_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001243_2 ".operator_precedence.modulo_vs_not_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001243, VkglTestCase_001243_1, VkglTestCase_001243_2);

#define VkglTestCase_001244_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001244_2 "or.operator_precedence.div_vs_not_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001244, VkglTestCase_001244_1, VkglTestCase_001244_2);

#define VkglTestCase_001245_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001245_2 "r.operator_precedence.div_vs_not_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001245, VkglTestCase_001245_1, VkglTestCase_001245_2);

#define VkglTestCase_001246_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001246_2 "or.operator_precedence.mul_vs_not_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001246, VkglTestCase_001246_1, VkglTestCase_001246_2);

#define VkglTestCase_001247_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001247_2 "r.operator_precedence.mul_vs_not_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001247, VkglTestCase_001247_1, VkglTestCase_001247_2);

#define VkglTestCase_001248_1 "dEQP-GLES3.functional.shaders.preprocessor.op"
#define VkglTestCase_001248_2 "erator_precedence.modulo_vs_bit_invert_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001248, VkglTestCase_001248_1, VkglTestCase_001248_2);

#define VkglTestCase_001249_1 "dEQP-GLES3.functional.shaders.preprocessor.ope"
#define VkglTestCase_001249_2 "rator_precedence.modulo_vs_bit_invert_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001249, VkglTestCase_001249_1, VkglTestCase_001249_2);

#define VkglTestCase_001250_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001250_2 ".operator_precedence.modulo_vs_minus_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001250, VkglTestCase_001250_1, VkglTestCase_001250_2);

#define VkglTestCase_001251_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001251_2 "operator_precedence.modulo_vs_minus_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001251, VkglTestCase_001251_1, VkglTestCase_001251_2);

#define VkglTestCase_001252_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001252_2 ".operator_precedence.modulo_vs_plus_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001252, VkglTestCase_001252_1, VkglTestCase_001252_2);

#define VkglTestCase_001253_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001253_2 "operator_precedence.modulo_vs_plus_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001253, VkglTestCase_001253_1, VkglTestCase_001253_2);

#define VkglTestCase_001254_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001254_2 "operator_precedence.div_vs_bit_invert_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001254, VkglTestCase_001254_1, VkglTestCase_001254_2);

#define VkglTestCase_001255_1 "dEQP-GLES3.functional.shaders.preprocessor.o"
#define VkglTestCase_001255_2 "perator_precedence.div_vs_bit_invert_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001255, VkglTestCase_001255_1, VkglTestCase_001255_2);

#define VkglTestCase_001256_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001256_2 "r.operator_precedence.div_vs_minus_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001256, VkglTestCase_001256_1, VkglTestCase_001256_2);

#define VkglTestCase_001257_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001257_2 ".operator_precedence.div_vs_minus_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001257, VkglTestCase_001257_1, VkglTestCase_001257_2);

#define VkglTestCase_001258_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001258_2 "or.operator_precedence.div_vs_plus_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001258, VkglTestCase_001258_1, VkglTestCase_001258_2);

#define VkglTestCase_001259_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001259_2 "r.operator_precedence.div_vs_plus_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001259, VkglTestCase_001259_1, VkglTestCase_001259_2);

#define VkglTestCase_001260_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001260_2 "operator_precedence.mul_vs_bit_invert_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001260, VkglTestCase_001260_1, VkglTestCase_001260_2);

#define VkglTestCase_001261_1 "dEQP-GLES3.functional.shaders.preprocessor.o"
#define VkglTestCase_001261_2 "perator_precedence.mul_vs_bit_invert_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001261, VkglTestCase_001261_1, VkglTestCase_001261_2);

#define VkglTestCase_001262_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001262_2 "r.operator_precedence.mul_vs_minus_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001262, VkglTestCase_001262_1, VkglTestCase_001262_2);

#define VkglTestCase_001263_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001263_2 ".operator_precedence.mul_vs_minus_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001263, VkglTestCase_001263_1, VkglTestCase_001263_2);

#define VkglTestCase_001264_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001264_2 "or.operator_precedence.mul_vs_plus_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001264, VkglTestCase_001264_1, VkglTestCase_001264_2);

#define VkglTestCase_001265_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001265_2 "r.operator_precedence.mul_vs_plus_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001265, VkglTestCase_001265_1, VkglTestCase_001265_2);

#define VkglTestCase_001266_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001266_2 "r.operator_precedence.sub_vs_modulo_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001266, VkglTestCase_001266_1, VkglTestCase_001266_2);

#define VkglTestCase_001267_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001267_2 ".operator_precedence.sub_vs_modulo_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001267, VkglTestCase_001267_1, VkglTestCase_001267_2);

#define VkglTestCase_001268_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001268_2 "or.operator_precedence.sub_vs_div_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001268, VkglTestCase_001268_1, VkglTestCase_001268_2);

#define VkglTestCase_001269_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001269_2 "r.operator_precedence.sub_vs_div_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001269, VkglTestCase_001269_1, VkglTestCase_001269_2);

#define VkglTestCase_001270_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001270_2 "or.operator_precedence.sub_vs_mul_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001270, VkglTestCase_001270_1, VkglTestCase_001270_2);

#define VkglTestCase_001271_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001271_2 "r.operator_precedence.sub_vs_mul_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001271, VkglTestCase_001271_1, VkglTestCase_001271_2);

#define VkglTestCase_001272_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001272_2 "r.operator_precedence.add_vs_modulo_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001272, VkglTestCase_001272_1, VkglTestCase_001272_2);

#define VkglTestCase_001273_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001273_2 ".operator_precedence.add_vs_modulo_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001273, VkglTestCase_001273_1, VkglTestCase_001273_2);

#define VkglTestCase_001274_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001274_2 "or.operator_precedence.add_vs_div_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001274, VkglTestCase_001274_1, VkglTestCase_001274_2);

#define VkglTestCase_001275_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001275_2 "r.operator_precedence.add_vs_div_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001275, VkglTestCase_001275_1, VkglTestCase_001275_2);

#define VkglTestCase_001276_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001276_2 "or.operator_precedence.add_vs_mul_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001276, VkglTestCase_001276_1, VkglTestCase_001276_2);

#define VkglTestCase_001277_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001277_2 "r.operator_precedence.add_vs_mul_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001277, VkglTestCase_001277_1, VkglTestCase_001277_2);

#define VkglTestCase_001278_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001278_2 "r.operator_precedence.rshift_vs_sub_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001278, VkglTestCase_001278_1, VkglTestCase_001278_2);

#define VkglTestCase_001279_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001279_2 ".operator_precedence.rshift_vs_sub_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001279, VkglTestCase_001279_1, VkglTestCase_001279_2);

#define VkglTestCase_001280_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001280_2 "r.operator_precedence.rshift_vs_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001280, VkglTestCase_001280_1, VkglTestCase_001280_2);

#define VkglTestCase_001281_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001281_2 ".operator_precedence.rshift_vs_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001281, VkglTestCase_001281_1, VkglTestCase_001281_2);

#define VkglTestCase_001282_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001282_2 "r.operator_precedence.lshift_vs_sub_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001282, VkglTestCase_001282_1, VkglTestCase_001282_2);

#define VkglTestCase_001283_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001283_2 ".operator_precedence.lshift_vs_sub_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001283, VkglTestCase_001283_1, VkglTestCase_001283_2);

#define VkglTestCase_001284_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001284_2 "r.operator_precedence.lshift_vs_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001284, VkglTestCase_001284_1, VkglTestCase_001284_2);

#define VkglTestCase_001285_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001285_2 ".operator_precedence.lshift_vs_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001285, VkglTestCase_001285_1, VkglTestCase_001285_2);

#define VkglTestCase_001286_1 "dEQP-GLES3.functional.shaders.preprocessor.opera"
#define VkglTestCase_001286_2 "tor_precedence.greater_or_equal_vs_rshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001286, VkglTestCase_001286_1, VkglTestCase_001286_2);

#define VkglTestCase_001287_1 "dEQP-GLES3.functional.shaders.preprocessor.operat"
#define VkglTestCase_001287_2 "or_precedence.greater_or_equal_vs_rshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001287, VkglTestCase_001287_1, VkglTestCase_001287_2);

#define VkglTestCase_001288_1 "dEQP-GLES3.functional.shaders.preprocessor.opera"
#define VkglTestCase_001288_2 "tor_precedence.greater_or_equal_vs_lshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001288, VkglTestCase_001288_1, VkglTestCase_001288_2);

#define VkglTestCase_001289_1 "dEQP-GLES3.functional.shaders.preprocessor.operat"
#define VkglTestCase_001289_2 "or_precedence.greater_or_equal_vs_lshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001289, VkglTestCase_001289_1, VkglTestCase_001289_2);

#define VkglTestCase_001290_1 "dEQP-GLES3.functional.shaders.preprocessor.ope"
#define VkglTestCase_001290_2 "rator_precedence.less_or_equal_vs_rshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001290, VkglTestCase_001290_1, VkglTestCase_001290_2);

#define VkglTestCase_001291_1 "dEQP-GLES3.functional.shaders.preprocessor.oper"
#define VkglTestCase_001291_2 "ator_precedence.less_or_equal_vs_rshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001291, VkglTestCase_001291_1, VkglTestCase_001291_2);

#define VkglTestCase_001292_1 "dEQP-GLES3.functional.shaders.preprocessor.ope"
#define VkglTestCase_001292_2 "rator_precedence.less_or_equal_vs_lshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001292, VkglTestCase_001292_1, VkglTestCase_001292_2);

#define VkglTestCase_001293_1 "dEQP-GLES3.functional.shaders.preprocessor.oper"
#define VkglTestCase_001293_2 "ator_precedence.less_or_equal_vs_lshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001293, VkglTestCase_001293_1, VkglTestCase_001293_2);

#define VkglTestCase_001294_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001294_2 "operator_precedence.greater_vs_rshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001294, VkglTestCase_001294_1, VkglTestCase_001294_2);

#define VkglTestCase_001295_1 "dEQP-GLES3.functional.shaders.preprocessor.o"
#define VkglTestCase_001295_2 "perator_precedence.greater_vs_rshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001295, VkglTestCase_001295_1, VkglTestCase_001295_2);

#define VkglTestCase_001296_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001296_2 "operator_precedence.greater_vs_lshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001296, VkglTestCase_001296_1, VkglTestCase_001296_2);

#define VkglTestCase_001297_1 "dEQP-GLES3.functional.shaders.preprocessor.o"
#define VkglTestCase_001297_2 "perator_precedence.greater_vs_lshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001297, VkglTestCase_001297_1, VkglTestCase_001297_2);

#define VkglTestCase_001298_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001298_2 ".operator_precedence.less_vs_rshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001298, VkglTestCase_001298_1, VkglTestCase_001298_2);

#define VkglTestCase_001299_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001299_2 "operator_precedence.less_vs_rshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001299, VkglTestCase_001299_1, VkglTestCase_001299_2);

#define VkglTestCase_001300_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001300_2 ".operator_precedence.less_vs_lshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001300, VkglTestCase_001300_1, VkglTestCase_001300_2);

#define VkglTestCase_001301_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001301_2 "operator_precedence.less_vs_lshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001301, VkglTestCase_001301_1, VkglTestCase_001301_2);

#define VkglTestCase_001302_1 "dEQP-GLES3.functional.shaders.preprocessor.operat"
#define VkglTestCase_001302_2 "or_precedence.not_equal_vs_greater_or_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001302, VkglTestCase_001302_1, VkglTestCase_001302_2);

#define VkglTestCase_001303_1 "dEQP-GLES3.functional.shaders.preprocessor.operato"
#define VkglTestCase_001303_2 "r_precedence.not_equal_vs_greater_or_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001303, VkglTestCase_001303_1, VkglTestCase_001303_2);

#define VkglTestCase_001304_1 "dEQP-GLES3.functional.shaders.preprocessor.opera"
#define VkglTestCase_001304_2 "tor_precedence.not_equal_vs_less_or_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001304, VkglTestCase_001304_1, VkglTestCase_001304_2);

#define VkglTestCase_001305_1 "dEQP-GLES3.functional.shaders.preprocessor.operat"
#define VkglTestCase_001305_2 "or_precedence.not_equal_vs_less_or_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001305, VkglTestCase_001305_1, VkglTestCase_001305_2);

#define VkglTestCase_001306_1 "dEQP-GLES3.functional.shaders.preprocessor.op"
#define VkglTestCase_001306_2 "erator_precedence.not_equal_vs_greater_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001306, VkglTestCase_001306_1, VkglTestCase_001306_2);

#define VkglTestCase_001307_1 "dEQP-GLES3.functional.shaders.preprocessor.ope"
#define VkglTestCase_001307_2 "rator_precedence.not_equal_vs_greater_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001307, VkglTestCase_001307_1, VkglTestCase_001307_2);

#define VkglTestCase_001308_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001308_2 "operator_precedence.not_equal_vs_less_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001308, VkglTestCase_001308_1, VkglTestCase_001308_2);

#define VkglTestCase_001309_1 "dEQP-GLES3.functional.shaders.preprocessor.o"
#define VkglTestCase_001309_2 "perator_precedence.not_equal_vs_less_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001309, VkglTestCase_001309_1, VkglTestCase_001309_2);

#define VkglTestCase_001310_1 "dEQP-GLES3.functional.shaders.preprocessor.oper"
#define VkglTestCase_001310_2 "ator_precedence.equal_vs_greater_or_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001310, VkglTestCase_001310_1, VkglTestCase_001310_2);

#define VkglTestCase_001311_1 "dEQP-GLES3.functional.shaders.preprocessor.opera"
#define VkglTestCase_001311_2 "tor_precedence.equal_vs_greater_or_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001311, VkglTestCase_001311_1, VkglTestCase_001311_2);

#define VkglTestCase_001312_1 "dEQP-GLES3.functional.shaders.preprocessor.ope"
#define VkglTestCase_001312_2 "rator_precedence.equal_vs_less_or_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001312, VkglTestCase_001312_1, VkglTestCase_001312_2);

#define VkglTestCase_001313_1 "dEQP-GLES3.functional.shaders.preprocessor.oper"
#define VkglTestCase_001313_2 "ator_precedence.equal_vs_less_or_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001313, VkglTestCase_001313_1, VkglTestCase_001313_2);

#define VkglTestCase_001314_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001314_2 "operator_precedence.equal_vs_greater_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001314, VkglTestCase_001314_1, VkglTestCase_001314_2);

#define VkglTestCase_001315_1 "dEQP-GLES3.functional.shaders.preprocessor.o"
#define VkglTestCase_001315_2 "perator_precedence.equal_vs_greater_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001315, VkglTestCase_001315_1, VkglTestCase_001315_2);

#define VkglTestCase_001316_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001316_2 "r.operator_precedence.equal_vs_less_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001316, VkglTestCase_001316_1, VkglTestCase_001316_2);

#define VkglTestCase_001317_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001317_2 ".operator_precedence.equal_vs_less_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001317, VkglTestCase_001317_1, VkglTestCase_001317_2);

#define VkglTestCase_001318_1 "dEQP-GLES3.functional.shaders.preprocessor.oper"
#define VkglTestCase_001318_2 "ator_precedence.bitwise_and_vs_not_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001318, VkglTestCase_001318_1, VkglTestCase_001318_2);

#define VkglTestCase_001319_1 "dEQP-GLES3.functional.shaders.preprocessor.opera"
#define VkglTestCase_001319_2 "tor_precedence.bitwise_and_vs_not_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001319, VkglTestCase_001319_1, VkglTestCase_001319_2);

#define VkglTestCase_001320_1 "dEQP-GLES3.functional.shaders.preprocessor.op"
#define VkglTestCase_001320_2 "erator_precedence.bitwise_and_vs_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001320, VkglTestCase_001320_1, VkglTestCase_001320_2);

#define VkglTestCase_001321_1 "dEQP-GLES3.functional.shaders.preprocessor.ope"
#define VkglTestCase_001321_2 "rator_precedence.bitwise_and_vs_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001321, VkglTestCase_001321_1, VkglTestCase_001321_2);

#define VkglTestCase_001322_1 "dEQP-GLES3.functional.shaders.preprocessor.o"
#define VkglTestCase_001322_2 "perator_precedence.xor_vs_bitwise_and_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001322, VkglTestCase_001322_1, VkglTestCase_001322_2);

#define VkglTestCase_001323_1 "dEQP-GLES3.functional.shaders.preprocessor.op"
#define VkglTestCase_001323_2 "erator_precedence.xor_vs_bitwise_and_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001323, VkglTestCase_001323_1, VkglTestCase_001323_2);

#define VkglTestCase_001324_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001324_2 "operator_precedence.bitwise_or_vs_xor_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001324, VkglTestCase_001324_1, VkglTestCase_001324_2);

#define VkglTestCase_001325_1 "dEQP-GLES3.functional.shaders.preprocessor.o"
#define VkglTestCase_001325_2 "perator_precedence.bitwise_or_vs_xor_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001325, VkglTestCase_001325_1, VkglTestCase_001325_2);

#define VkglTestCase_001326_1 "dEQP-GLES3.functional.shaders.preprocessor.oper"
#define VkglTestCase_001326_2 "ator_precedence.logical_and_vs_bitwise_or_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001326, VkglTestCase_001326_1, VkglTestCase_001326_2);

#define VkglTestCase_001327_1 "dEQP-GLES3.functional.shaders.preprocessor.opera"
#define VkglTestCase_001327_2 "tor_precedence.logical_and_vs_bitwise_or_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001327, VkglTestCase_001327_1, VkglTestCase_001327_2);

#define VkglTestCase_001328_1 "dEQP-GLES3.functional.shaders.preprocessor.opera"
#define VkglTestCase_001328_2 "tor_precedence.logical_and_vs_bitwise_and_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001328, VkglTestCase_001328_1, VkglTestCase_001328_2);

#define VkglTestCase_001329_1 "dEQP-GLES3.functional.shaders.preprocessor.operat"
#define VkglTestCase_001329_2 "or_precedence.logical_and_vs_bitwise_and_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001329, VkglTestCase_001329_1, VkglTestCase_001329_2);

#define VkglTestCase_001330_1 "dEQP-GLES3.functional.shaders.preprocessor.oper"
#define VkglTestCase_001330_2 "ator_precedence.logical_or_vs_logical_and_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001330, VkglTestCase_001330_1, VkglTestCase_001330_2);

#define VkglTestCase_001331_1 "dEQP-GLES3.functional.shaders.preprocessor.opera"
#define VkglTestCase_001331_2 "tor_precedence.logical_or_vs_logical_and_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001331, VkglTestCase_001331_1, VkglTestCase_001331_2);
