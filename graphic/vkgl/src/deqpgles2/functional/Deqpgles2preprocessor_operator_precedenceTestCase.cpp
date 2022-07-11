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
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000559_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000559_2 "r.operator_precedence.modulo_vs_not_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000559, VkglTestCase_000559_1, VkglTestCase_000559_2);

#define VkglTestCase_000560_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000560_2 ".operator_precedence.modulo_vs_not_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000560, VkglTestCase_000560_1, VkglTestCase_000560_2);

#define VkglTestCase_000561_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000561_2 "or.operator_precedence.div_vs_not_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000561, VkglTestCase_000561_1, VkglTestCase_000561_2);

#define VkglTestCase_000562_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000562_2 "r.operator_precedence.div_vs_not_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000562, VkglTestCase_000562_1, VkglTestCase_000562_2);

#define VkglTestCase_000563_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000563_2 "or.operator_precedence.mul_vs_not_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000563, VkglTestCase_000563_1, VkglTestCase_000563_2);

#define VkglTestCase_000564_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000564_2 "r.operator_precedence.mul_vs_not_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000564, VkglTestCase_000564_1, VkglTestCase_000564_2);

#define VkglTestCase_000565_1 "dEQP-GLES2.functional.shaders.preprocessor.op"
#define VkglTestCase_000565_2 "erator_precedence.modulo_vs_bit_invert_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000565, VkglTestCase_000565_1, VkglTestCase_000565_2);

#define VkglTestCase_000566_1 "dEQP-GLES2.functional.shaders.preprocessor.ope"
#define VkglTestCase_000566_2 "rator_precedence.modulo_vs_bit_invert_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000566, VkglTestCase_000566_1, VkglTestCase_000566_2);

#define VkglTestCase_000567_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000567_2 ".operator_precedence.modulo_vs_minus_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000567, VkglTestCase_000567_1, VkglTestCase_000567_2);

#define VkglTestCase_000568_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000568_2 "operator_precedence.modulo_vs_minus_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000568, VkglTestCase_000568_1, VkglTestCase_000568_2);

#define VkglTestCase_000569_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000569_2 ".operator_precedence.modulo_vs_plus_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000569, VkglTestCase_000569_1, VkglTestCase_000569_2);

#define VkglTestCase_000570_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000570_2 "operator_precedence.modulo_vs_plus_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000570, VkglTestCase_000570_1, VkglTestCase_000570_2);

#define VkglTestCase_000571_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000571_2 "operator_precedence.div_vs_bit_invert_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000571, VkglTestCase_000571_1, VkglTestCase_000571_2);

#define VkglTestCase_000572_1 "dEQP-GLES2.functional.shaders.preprocessor.o"
#define VkglTestCase_000572_2 "perator_precedence.div_vs_bit_invert_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000572, VkglTestCase_000572_1, VkglTestCase_000572_2);

#define VkglTestCase_000573_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000573_2 "r.operator_precedence.div_vs_minus_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000573, VkglTestCase_000573_1, VkglTestCase_000573_2);

#define VkglTestCase_000574_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000574_2 ".operator_precedence.div_vs_minus_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000574, VkglTestCase_000574_1, VkglTestCase_000574_2);

#define VkglTestCase_000575_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000575_2 "or.operator_precedence.div_vs_plus_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000575, VkglTestCase_000575_1, VkglTestCase_000575_2);

#define VkglTestCase_000576_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000576_2 "r.operator_precedence.div_vs_plus_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000576, VkglTestCase_000576_1, VkglTestCase_000576_2);

#define VkglTestCase_000577_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000577_2 "operator_precedence.mul_vs_bit_invert_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000577, VkglTestCase_000577_1, VkglTestCase_000577_2);

#define VkglTestCase_000578_1 "dEQP-GLES2.functional.shaders.preprocessor.o"
#define VkglTestCase_000578_2 "perator_precedence.mul_vs_bit_invert_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000578, VkglTestCase_000578_1, VkglTestCase_000578_2);

#define VkglTestCase_000579_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000579_2 "r.operator_precedence.mul_vs_minus_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000579, VkglTestCase_000579_1, VkglTestCase_000579_2);

#define VkglTestCase_000580_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000580_2 ".operator_precedence.mul_vs_minus_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000580, VkglTestCase_000580_1, VkglTestCase_000580_2);

#define VkglTestCase_000581_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000581_2 "or.operator_precedence.mul_vs_plus_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000581, VkglTestCase_000581_1, VkglTestCase_000581_2);

#define VkglTestCase_000582_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000582_2 "r.operator_precedence.mul_vs_plus_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000582, VkglTestCase_000582_1, VkglTestCase_000582_2);

#define VkglTestCase_000583_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000583_2 "r.operator_precedence.sub_vs_modulo_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000583, VkglTestCase_000583_1, VkglTestCase_000583_2);

#define VkglTestCase_000584_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000584_2 ".operator_precedence.sub_vs_modulo_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000584, VkglTestCase_000584_1, VkglTestCase_000584_2);

#define VkglTestCase_000585_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000585_2 "or.operator_precedence.sub_vs_div_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000585, VkglTestCase_000585_1, VkglTestCase_000585_2);

#define VkglTestCase_000586_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000586_2 "r.operator_precedence.sub_vs_div_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000586, VkglTestCase_000586_1, VkglTestCase_000586_2);

#define VkglTestCase_000587_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000587_2 "or.operator_precedence.sub_vs_mul_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000587, VkglTestCase_000587_1, VkglTestCase_000587_2);

#define VkglTestCase_000588_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000588_2 "r.operator_precedence.sub_vs_mul_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000588, VkglTestCase_000588_1, VkglTestCase_000588_2);

#define VkglTestCase_000589_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000589_2 "r.operator_precedence.add_vs_modulo_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000589, VkglTestCase_000589_1, VkglTestCase_000589_2);

#define VkglTestCase_000590_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000590_2 ".operator_precedence.add_vs_modulo_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000590, VkglTestCase_000590_1, VkglTestCase_000590_2);

#define VkglTestCase_000591_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000591_2 "or.operator_precedence.add_vs_div_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000591, VkglTestCase_000591_1, VkglTestCase_000591_2);

#define VkglTestCase_000592_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000592_2 "r.operator_precedence.add_vs_div_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000592, VkglTestCase_000592_1, VkglTestCase_000592_2);

#define VkglTestCase_000593_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000593_2 "or.operator_precedence.add_vs_mul_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000593, VkglTestCase_000593_1, VkglTestCase_000593_2);

#define VkglTestCase_000594_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000594_2 "r.operator_precedence.add_vs_mul_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000594, VkglTestCase_000594_1, VkglTestCase_000594_2);

#define VkglTestCase_000595_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000595_2 "r.operator_precedence.rshift_vs_sub_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000595, VkglTestCase_000595_1, VkglTestCase_000595_2);

#define VkglTestCase_000596_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000596_2 ".operator_precedence.rshift_vs_sub_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000596, VkglTestCase_000596_1, VkglTestCase_000596_2);

#define VkglTestCase_000597_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000597_2 "r.operator_precedence.rshift_vs_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000597, VkglTestCase_000597_1, VkglTestCase_000597_2);

#define VkglTestCase_000598_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000598_2 ".operator_precedence.rshift_vs_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000598, VkglTestCase_000598_1, VkglTestCase_000598_2);

#define VkglTestCase_000599_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000599_2 "r.operator_precedence.lshift_vs_sub_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000599, VkglTestCase_000599_1, VkglTestCase_000599_2);

#define VkglTestCase_000600_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000600_2 ".operator_precedence.lshift_vs_sub_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000600, VkglTestCase_000600_1, VkglTestCase_000600_2);

#define VkglTestCase_000601_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000601_2 "r.operator_precedence.lshift_vs_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000601, VkglTestCase_000601_1, VkglTestCase_000601_2);

#define VkglTestCase_000602_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000602_2 ".operator_precedence.lshift_vs_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000602, VkglTestCase_000602_1, VkglTestCase_000602_2);

#define VkglTestCase_000603_1 "dEQP-GLES2.functional.shaders.preprocessor.opera"
#define VkglTestCase_000603_2 "tor_precedence.greater_or_equal_vs_rshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000603, VkglTestCase_000603_1, VkglTestCase_000603_2);

#define VkglTestCase_000604_1 "dEQP-GLES2.functional.shaders.preprocessor.operat"
#define VkglTestCase_000604_2 "or_precedence.greater_or_equal_vs_rshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000604, VkglTestCase_000604_1, VkglTestCase_000604_2);

#define VkglTestCase_000605_1 "dEQP-GLES2.functional.shaders.preprocessor.opera"
#define VkglTestCase_000605_2 "tor_precedence.greater_or_equal_vs_lshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000605, VkglTestCase_000605_1, VkglTestCase_000605_2);

#define VkglTestCase_000606_1 "dEQP-GLES2.functional.shaders.preprocessor.operat"
#define VkglTestCase_000606_2 "or_precedence.greater_or_equal_vs_lshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000606, VkglTestCase_000606_1, VkglTestCase_000606_2);

#define VkglTestCase_000607_1 "dEQP-GLES2.functional.shaders.preprocessor.ope"
#define VkglTestCase_000607_2 "rator_precedence.less_or_equal_vs_rshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000607, VkglTestCase_000607_1, VkglTestCase_000607_2);

#define VkglTestCase_000608_1 "dEQP-GLES2.functional.shaders.preprocessor.oper"
#define VkglTestCase_000608_2 "ator_precedence.less_or_equal_vs_rshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000608, VkglTestCase_000608_1, VkglTestCase_000608_2);

#define VkglTestCase_000609_1 "dEQP-GLES2.functional.shaders.preprocessor.ope"
#define VkglTestCase_000609_2 "rator_precedence.less_or_equal_vs_lshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000609, VkglTestCase_000609_1, VkglTestCase_000609_2);

#define VkglTestCase_000610_1 "dEQP-GLES2.functional.shaders.preprocessor.oper"
#define VkglTestCase_000610_2 "ator_precedence.less_or_equal_vs_lshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000610, VkglTestCase_000610_1, VkglTestCase_000610_2);

#define VkglTestCase_000611_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000611_2 "operator_precedence.greater_vs_rshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000611, VkglTestCase_000611_1, VkglTestCase_000611_2);

#define VkglTestCase_000612_1 "dEQP-GLES2.functional.shaders.preprocessor.o"
#define VkglTestCase_000612_2 "perator_precedence.greater_vs_rshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000612, VkglTestCase_000612_1, VkglTestCase_000612_2);

#define VkglTestCase_000613_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000613_2 "operator_precedence.greater_vs_lshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000613, VkglTestCase_000613_1, VkglTestCase_000613_2);

#define VkglTestCase_000614_1 "dEQP-GLES2.functional.shaders.preprocessor.o"
#define VkglTestCase_000614_2 "perator_precedence.greater_vs_lshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000614, VkglTestCase_000614_1, VkglTestCase_000614_2);

#define VkglTestCase_000615_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000615_2 ".operator_precedence.less_vs_rshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000615, VkglTestCase_000615_1, VkglTestCase_000615_2);

#define VkglTestCase_000616_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000616_2 "operator_precedence.less_vs_rshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000616, VkglTestCase_000616_1, VkglTestCase_000616_2);

#define VkglTestCase_000617_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000617_2 ".operator_precedence.less_vs_lshift_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000617, VkglTestCase_000617_1, VkglTestCase_000617_2);

#define VkglTestCase_000618_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000618_2 "operator_precedence.less_vs_lshift_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000618, VkglTestCase_000618_1, VkglTestCase_000618_2);

#define VkglTestCase_000619_1 "dEQP-GLES2.functional.shaders.preprocessor.operat"
#define VkglTestCase_000619_2 "or_precedence.not_equal_vs_greater_or_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000619, VkglTestCase_000619_1, VkglTestCase_000619_2);

#define VkglTestCase_000620_1 "dEQP-GLES2.functional.shaders.preprocessor.operato"
#define VkglTestCase_000620_2 "r_precedence.not_equal_vs_greater_or_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000620, VkglTestCase_000620_1, VkglTestCase_000620_2);

#define VkglTestCase_000621_1 "dEQP-GLES2.functional.shaders.preprocessor.opera"
#define VkglTestCase_000621_2 "tor_precedence.not_equal_vs_less_or_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000621, VkglTestCase_000621_1, VkglTestCase_000621_2);

#define VkglTestCase_000622_1 "dEQP-GLES2.functional.shaders.preprocessor.operat"
#define VkglTestCase_000622_2 "or_precedence.not_equal_vs_less_or_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000622, VkglTestCase_000622_1, VkglTestCase_000622_2);

#define VkglTestCase_000623_1 "dEQP-GLES2.functional.shaders.preprocessor.op"
#define VkglTestCase_000623_2 "erator_precedence.not_equal_vs_greater_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000623, VkglTestCase_000623_1, VkglTestCase_000623_2);

#define VkglTestCase_000624_1 "dEQP-GLES2.functional.shaders.preprocessor.ope"
#define VkglTestCase_000624_2 "rator_precedence.not_equal_vs_greater_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000624, VkglTestCase_000624_1, VkglTestCase_000624_2);

#define VkglTestCase_000625_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000625_2 "operator_precedence.not_equal_vs_less_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000625, VkglTestCase_000625_1, VkglTestCase_000625_2);

#define VkglTestCase_000626_1 "dEQP-GLES2.functional.shaders.preprocessor.o"
#define VkglTestCase_000626_2 "perator_precedence.not_equal_vs_less_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000626, VkglTestCase_000626_1, VkglTestCase_000626_2);

#define VkglTestCase_000627_1 "dEQP-GLES2.functional.shaders.preprocessor.oper"
#define VkglTestCase_000627_2 "ator_precedence.equal_vs_greater_or_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000627, VkglTestCase_000627_1, VkglTestCase_000627_2);

#define VkglTestCase_000628_1 "dEQP-GLES2.functional.shaders.preprocessor.opera"
#define VkglTestCase_000628_2 "tor_precedence.equal_vs_greater_or_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000628, VkglTestCase_000628_1, VkglTestCase_000628_2);

#define VkglTestCase_000629_1 "dEQP-GLES2.functional.shaders.preprocessor.ope"
#define VkglTestCase_000629_2 "rator_precedence.equal_vs_less_or_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000629, VkglTestCase_000629_1, VkglTestCase_000629_2);

#define VkglTestCase_000630_1 "dEQP-GLES2.functional.shaders.preprocessor.oper"
#define VkglTestCase_000630_2 "ator_precedence.equal_vs_less_or_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000630, VkglTestCase_000630_1, VkglTestCase_000630_2);

#define VkglTestCase_000631_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000631_2 "operator_precedence.equal_vs_greater_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000631, VkglTestCase_000631_1, VkglTestCase_000631_2);

#define VkglTestCase_000632_1 "dEQP-GLES2.functional.shaders.preprocessor.o"
#define VkglTestCase_000632_2 "perator_precedence.equal_vs_greater_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000632, VkglTestCase_000632_1, VkglTestCase_000632_2);

#define VkglTestCase_000633_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000633_2 "r.operator_precedence.equal_vs_less_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000633, VkglTestCase_000633_1, VkglTestCase_000633_2);

#define VkglTestCase_000634_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000634_2 ".operator_precedence.equal_vs_less_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000634, VkglTestCase_000634_1, VkglTestCase_000634_2);

#define VkglTestCase_000635_1 "dEQP-GLES2.functional.shaders.preprocessor.oper"
#define VkglTestCase_000635_2 "ator_precedence.bitwise_and_vs_not_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000635, VkglTestCase_000635_1, VkglTestCase_000635_2);

#define VkglTestCase_000636_1 "dEQP-GLES2.functional.shaders.preprocessor.opera"
#define VkglTestCase_000636_2 "tor_precedence.bitwise_and_vs_not_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000636, VkglTestCase_000636_1, VkglTestCase_000636_2);

#define VkglTestCase_000637_1 "dEQP-GLES2.functional.shaders.preprocessor.op"
#define VkglTestCase_000637_2 "erator_precedence.bitwise_and_vs_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000637, VkglTestCase_000637_1, VkglTestCase_000637_2);

#define VkglTestCase_000638_1 "dEQP-GLES2.functional.shaders.preprocessor.ope"
#define VkglTestCase_000638_2 "rator_precedence.bitwise_and_vs_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000638, VkglTestCase_000638_1, VkglTestCase_000638_2);

#define VkglTestCase_000639_1 "dEQP-GLES2.functional.shaders.preprocessor.o"
#define VkglTestCase_000639_2 "perator_precedence.xor_vs_bitwise_and_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000639, VkglTestCase_000639_1, VkglTestCase_000639_2);

#define VkglTestCase_000640_1 "dEQP-GLES2.functional.shaders.preprocessor.op"
#define VkglTestCase_000640_2 "erator_precedence.xor_vs_bitwise_and_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000640, VkglTestCase_000640_1, VkglTestCase_000640_2);

#define VkglTestCase_000641_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000641_2 "operator_precedence.bitwise_or_vs_xor_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000641, VkglTestCase_000641_1, VkglTestCase_000641_2);

#define VkglTestCase_000642_1 "dEQP-GLES2.functional.shaders.preprocessor.o"
#define VkglTestCase_000642_2 "perator_precedence.bitwise_or_vs_xor_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000642, VkglTestCase_000642_1, VkglTestCase_000642_2);

#define VkglTestCase_000643_1 "dEQP-GLES2.functional.shaders.preprocessor.oper"
#define VkglTestCase_000643_2 "ator_precedence.logical_and_vs_bitwise_or_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000643, VkglTestCase_000643_1, VkglTestCase_000643_2);

#define VkglTestCase_000644_1 "dEQP-GLES2.functional.shaders.preprocessor.opera"
#define VkglTestCase_000644_2 "tor_precedence.logical_and_vs_bitwise_or_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000644, VkglTestCase_000644_1, VkglTestCase_000644_2);

#define VkglTestCase_000645_1 "dEQP-GLES2.functional.shaders.preprocessor.opera"
#define VkglTestCase_000645_2 "tor_precedence.logical_and_vs_bitwise_and_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000645, VkglTestCase_000645_1, VkglTestCase_000645_2);

#define VkglTestCase_000646_1 "dEQP-GLES2.functional.shaders.preprocessor.operat"
#define VkglTestCase_000646_2 "or_precedence.logical_and_vs_bitwise_and_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000646, VkglTestCase_000646_1, VkglTestCase_000646_2);

#define VkglTestCase_000647_1 "dEQP-GLES2.functional.shaders.preprocessor.oper"
#define VkglTestCase_000647_2 "ator_precedence.logical_or_vs_logical_and_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000647, VkglTestCase_000647_1, VkglTestCase_000647_2);

#define VkglTestCase_000648_1 "dEQP-GLES2.functional.shaders.preprocessor.opera"
#define VkglTestCase_000648_2 "tor_precedence.logical_or_vs_logical_and_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000648, VkglTestCase_000648_1, VkglTestCase_000648_2);
