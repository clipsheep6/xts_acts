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

#define VkglTestCase_000491_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000491_2 "cessor.expressions.shift_left_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000491, VkglTestCase_000491_1, VkglTestCase_000491_2);

#define VkglTestCase_000492_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000492_2 "essor.expressions.shift_left_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000492, VkglTestCase_000492_1, VkglTestCase_000492_2);

#define VkglTestCase_000493_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000493_2 "cessor.expressions.shift_right_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000493, VkglTestCase_000493_1, VkglTestCase_000493_2);

#define VkglTestCase_000494_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000494_2 "essor.expressions.shift_right_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000494, VkglTestCase_000494_1, VkglTestCase_000494_2);

#define VkglTestCase_000495_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000495_2 "essor.expressions.cmp_less_than_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000495, VkglTestCase_000495_1, VkglTestCase_000495_2);

#define VkglTestCase_000496_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000496_2 "ssor.expressions.cmp_less_than_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000496, VkglTestCase_000496_1, VkglTestCase_000496_2);

#define VkglTestCase_000497_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000497_2 "essor.expressions.less_or_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000497, VkglTestCase_000497_1, VkglTestCase_000497_2);

#define VkglTestCase_000498_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000498_2 "ssor.expressions.less_or_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000498, VkglTestCase_000498_1, VkglTestCase_000498_2);

#define VkglTestCase_000499_1 "dEQP-GLES2.functional.shaders.pr"
#define VkglTestCase_000499_2 "eprocessor.expressions.or_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000499, VkglTestCase_000499_1, VkglTestCase_000499_2);

#define VkglTestCase_000500_1 "dEQP-GLES2.functional.shaders.pre"
#define VkglTestCase_000500_2 "processor.expressions.or_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000500, VkglTestCase_000500_1, VkglTestCase_000500_2);

#define VkglTestCase_000501_1 "dEQP-GLES2.functional.shaders.pr"
#define VkglTestCase_000501_2 "eprocessor.expressions.and_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000501, VkglTestCase_000501_1, VkglTestCase_000501_2);

#define VkglTestCase_000502_1 "dEQP-GLES2.functional.shaders.pre"
#define VkglTestCase_000502_2 "processor.expressions.and_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000502, VkglTestCase_000502_1, VkglTestCase_000502_2);

#define VkglTestCase_000503_1 "dEQP-GLES2.functional.shaders.pr"
#define VkglTestCase_000503_2 "eprocessor.expressions.xor_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000503, VkglTestCase_000503_1, VkglTestCase_000503_2);

#define VkglTestCase_000504_1 "dEQP-GLES2.functional.shaders.pre"
#define VkglTestCase_000504_2 "processor.expressions.xor_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000504, VkglTestCase_000504_1, VkglTestCase_000504_2);

#define VkglTestCase_000505_1 "dEQP-GLES2.functional.shaders.pr"
#define VkglTestCase_000505_2 "eprocessor.expressions.mod_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000505, VkglTestCase_000505_1, VkglTestCase_000505_2);

#define VkglTestCase_000506_1 "dEQP-GLES2.functional.shaders.pre"
#define VkglTestCase_000506_2 "processor.expressions.mod_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000506, VkglTestCase_000506_1, VkglTestCase_000506_2);

#define VkglTestCase_000507_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000507_2 "sor.expressions.parenthesis_value_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000507, VkglTestCase_000507_1, VkglTestCase_000507_2);

#define VkglTestCase_000508_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000508_2 "or.expressions.parenthesis_value_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000508, VkglTestCase_000508_1, VkglTestCase_000508_2);

#define VkglTestCase_000509_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000509_2 "or.expressions.parenthesis_tricky_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000509, VkglTestCase_000509_1, VkglTestCase_000509_2);

#define VkglTestCase_000510_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000510_2 "r.expressions.parenthesis_tricky_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000510, VkglTestCase_000510_1, VkglTestCase_000510_2);

#define VkglTestCase_000511_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000511_2 "sor.expressions.parenthesis_if_no_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000511, VkglTestCase_000511_1, VkglTestCase_000511_2);

#define VkglTestCase_000512_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000512_2 "or.expressions.parenthesis_if_no_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000512, VkglTestCase_000512_1, VkglTestCase_000512_2);

#define VkglTestCase_000513_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000513_2 "ssor.expressions.parenthesis_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000513, VkglTestCase_000513_1, VkglTestCase_000513_2);

#define VkglTestCase_000514_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000514_2 "sor.expressions.parenthesis_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000514, VkglTestCase_000514_1, VkglTestCase_000514_2);

#define VkglTestCase_000515_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000515_2 "r.expressions.parenthesis_multi_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000515, VkglTestCase_000515_1, VkglTestCase_000515_2);

#define VkglTestCase_000516_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000516_2 ".expressions.parenthesis_multi_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000516, VkglTestCase_000516_1, VkglTestCase_000516_2);

#define VkglTestCase_000517_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000517_2 "r.expressions.parenthesis_single_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000517, VkglTestCase_000517_1, VkglTestCase_000517_2);

#define VkglTestCase_000518_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000518_2 ".expressions.parenthesis_single_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000518, VkglTestCase_000518_1, VkglTestCase_000518_2);

#define VkglTestCase_000519_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000519_2 ".expressions.parenthesis_ifelse_true_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000519, VkglTestCase_000519_1, VkglTestCase_000519_2);

#define VkglTestCase_000520_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000520_2 "expressions.parenthesis_ifelse_true_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000520, VkglTestCase_000520_1, VkglTestCase_000520_2);

#define VkglTestCase_000521_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000521_2 "expressions.parenthesis_ifelse_false_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000521, VkglTestCase_000521_1, VkglTestCase_000521_2);

#define VkglTestCase_000522_1 "dEQP-GLES2.functional.shaders.preprocessor.e"
#define VkglTestCase_000522_2 "xpressions.parenthesis_ifelse_false_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000522, VkglTestCase_000522_1, VkglTestCase_000522_2);

#define VkglTestCase_000523_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000523_2 "essor.expressions.eval_basic_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000523, VkglTestCase_000523_1, VkglTestCase_000523_2);

#define VkglTestCase_000524_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000524_2 "ssor.expressions.eval_basic_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000524, VkglTestCase_000524_1, VkglTestCase_000524_2);

#define VkglTestCase_000525_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000525_2 "essor.expressions.eval_basic_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000525, VkglTestCase_000525_1, VkglTestCase_000525_2);

#define VkglTestCase_000526_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000526_2 "ssor.expressions.eval_basic_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000526, VkglTestCase_000526_1, VkglTestCase_000526_2);

#define VkglTestCase_000527_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000527_2 "expressions.eval_simple_precedence_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000527, VkglTestCase_000527_1, VkglTestCase_000527_2);

#define VkglTestCase_000528_1 "dEQP-GLES2.functional.shaders.preprocessor.e"
#define VkglTestCase_000528_2 "xpressions.eval_simple_precedence_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000528, VkglTestCase_000528_1, VkglTestCase_000528_2);

#define VkglTestCase_000529_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000529_2 "expressions.eval_simple_precedence_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000529, VkglTestCase_000529_1, VkglTestCase_000529_2);

#define VkglTestCase_000530_1 "dEQP-GLES2.functional.shaders.preprocessor.e"
#define VkglTestCase_000530_2 "xpressions.eval_simple_precedence_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000530, VkglTestCase_000530_1, VkglTestCase_000530_2);

#define VkglTestCase_000531_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000531_2 "ocessor.expressions.defined_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000531, VkglTestCase_000531_1, VkglTestCase_000531_2);

#define VkglTestCase_000532_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000532_2 "cessor.expressions.defined_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000532, VkglTestCase_000532_1, VkglTestCase_000532_2);

#define VkglTestCase_000533_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000533_2 "ocessor.expressions.defined_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000533, VkglTestCase_000533_1, VkglTestCase_000533_2);

#define VkglTestCase_000534_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000534_2 "cessor.expressions.defined_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000534, VkglTestCase_000534_1, VkglTestCase_000534_2);

#define VkglTestCase_000535_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000535_2 "ocessor.expressions.defined_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000535, VkglTestCase_000535_1, VkglTestCase_000535_2);

#define VkglTestCase_000536_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000536_2 "cessor.expressions.defined_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000536, VkglTestCase_000536_1, VkglTestCase_000536_2);

#define VkglTestCase_000537_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000537_2 "ocessor.expressions.defined_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000537, VkglTestCase_000537_1, VkglTestCase_000537_2);

#define VkglTestCase_000538_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000538_2 "cessor.expressions.defined_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000538, VkglTestCase_000538_1, VkglTestCase_000538_2);

#define VkglTestCase_000539_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000539_2 "ocessor.expressions.defined_5_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000539, VkglTestCase_000539_1, VkglTestCase_000539_2);

#define VkglTestCase_000540_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000540_2 "cessor.expressions.defined_5_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000540, VkglTestCase_000540_1, VkglTestCase_000540_2);

#define VkglTestCase_000541_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000541_2 "ocessor.expressions.defined_6_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000541, VkglTestCase_000541_1, VkglTestCase_000541_2);

#define VkglTestCase_000542_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000542_2 "cessor.expressions.defined_6_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000542, VkglTestCase_000542_1, VkglTestCase_000542_2);
