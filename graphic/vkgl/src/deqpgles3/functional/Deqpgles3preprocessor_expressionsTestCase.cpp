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

#define VkglTestCase_001174_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001174_2 "cessor.expressions.shift_left_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001174, VkglTestCase_001174_1, VkglTestCase_001174_2);

#define VkglTestCase_001175_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001175_2 "essor.expressions.shift_left_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001175, VkglTestCase_001175_1, VkglTestCase_001175_2);

#define VkglTestCase_001176_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001176_2 "cessor.expressions.shift_right_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001176, VkglTestCase_001176_1, VkglTestCase_001176_2);

#define VkglTestCase_001177_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001177_2 "essor.expressions.shift_right_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001177, VkglTestCase_001177_1, VkglTestCase_001177_2);

#define VkglTestCase_001178_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001178_2 "essor.expressions.cmp_less_than_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001178, VkglTestCase_001178_1, VkglTestCase_001178_2);

#define VkglTestCase_001179_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001179_2 "ssor.expressions.cmp_less_than_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001179, VkglTestCase_001179_1, VkglTestCase_001179_2);

#define VkglTestCase_001180_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001180_2 "essor.expressions.less_or_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001180, VkglTestCase_001180_1, VkglTestCase_001180_2);

#define VkglTestCase_001181_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001181_2 "ssor.expressions.less_or_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001181, VkglTestCase_001181_1, VkglTestCase_001181_2);

#define VkglTestCase_001182_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_001182_2 "eprocessor.expressions.or_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001182, VkglTestCase_001182_1, VkglTestCase_001182_2);

#define VkglTestCase_001183_1 "dEQP-GLES3.functional.shaders.pre"
#define VkglTestCase_001183_2 "processor.expressions.or_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001183, VkglTestCase_001183_1, VkglTestCase_001183_2);

#define VkglTestCase_001184_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_001184_2 "eprocessor.expressions.and_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001184, VkglTestCase_001184_1, VkglTestCase_001184_2);

#define VkglTestCase_001185_1 "dEQP-GLES3.functional.shaders.pre"
#define VkglTestCase_001185_2 "processor.expressions.and_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001185, VkglTestCase_001185_1, VkglTestCase_001185_2);

#define VkglTestCase_001186_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_001186_2 "eprocessor.expressions.xor_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001186, VkglTestCase_001186_1, VkglTestCase_001186_2);

#define VkglTestCase_001187_1 "dEQP-GLES3.functional.shaders.pre"
#define VkglTestCase_001187_2 "processor.expressions.xor_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001187, VkglTestCase_001187_1, VkglTestCase_001187_2);

#define VkglTestCase_001188_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_001188_2 "eprocessor.expressions.mod_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001188, VkglTestCase_001188_1, VkglTestCase_001188_2);

#define VkglTestCase_001189_1 "dEQP-GLES3.functional.shaders.pre"
#define VkglTestCase_001189_2 "processor.expressions.mod_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001189, VkglTestCase_001189_1, VkglTestCase_001189_2);

#define VkglTestCase_001190_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_001190_2 "sor.expressions.parenthesis_value_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001190, VkglTestCase_001190_1, VkglTestCase_001190_2);

#define VkglTestCase_001191_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001191_2 "or.expressions.parenthesis_value_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001191, VkglTestCase_001191_1, VkglTestCase_001191_2);

#define VkglTestCase_001192_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001192_2 "or.expressions.parenthesis_tricky_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001192, VkglTestCase_001192_1, VkglTestCase_001192_2);

#define VkglTestCase_001193_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001193_2 "r.expressions.parenthesis_tricky_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001193, VkglTestCase_001193_1, VkglTestCase_001193_2);

#define VkglTestCase_001194_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_001194_2 "sor.expressions.parenthesis_if_no_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001194, VkglTestCase_001194_1, VkglTestCase_001194_2);

#define VkglTestCase_001195_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001195_2 "or.expressions.parenthesis_if_no_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001195, VkglTestCase_001195_1, VkglTestCase_001195_2);

#define VkglTestCase_001196_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001196_2 "ssor.expressions.parenthesis_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001196, VkglTestCase_001196_1, VkglTestCase_001196_2);

#define VkglTestCase_001197_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_001197_2 "sor.expressions.parenthesis_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001197, VkglTestCase_001197_1, VkglTestCase_001197_2);

#define VkglTestCase_001198_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001198_2 "r.expressions.parenthesis_multi_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001198, VkglTestCase_001198_1, VkglTestCase_001198_2);

#define VkglTestCase_001199_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001199_2 ".expressions.parenthesis_multi_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001199, VkglTestCase_001199_1, VkglTestCase_001199_2);

#define VkglTestCase_001200_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001200_2 "r.expressions.parenthesis_single_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001200, VkglTestCase_001200_1, VkglTestCase_001200_2);

#define VkglTestCase_001201_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001201_2 ".expressions.parenthesis_single_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001201, VkglTestCase_001201_1, VkglTestCase_001201_2);

#define VkglTestCase_001202_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001202_2 ".expressions.parenthesis_ifelse_true_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001202, VkglTestCase_001202_1, VkglTestCase_001202_2);

#define VkglTestCase_001203_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001203_2 "expressions.parenthesis_ifelse_true_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001203, VkglTestCase_001203_1, VkglTestCase_001203_2);

#define VkglTestCase_001204_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001204_2 "expressions.parenthesis_ifelse_false_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001204, VkglTestCase_001204_1, VkglTestCase_001204_2);

#define VkglTestCase_001205_1 "dEQP-GLES3.functional.shaders.preprocessor.e"
#define VkglTestCase_001205_2 "xpressions.parenthesis_ifelse_false_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001205, VkglTestCase_001205_1, VkglTestCase_001205_2);

#define VkglTestCase_001206_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001206_2 "essor.expressions.eval_basic_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001206, VkglTestCase_001206_1, VkglTestCase_001206_2);

#define VkglTestCase_001207_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001207_2 "ssor.expressions.eval_basic_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001207, VkglTestCase_001207_1, VkglTestCase_001207_2);

#define VkglTestCase_001208_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001208_2 "essor.expressions.eval_basic_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001208, VkglTestCase_001208_1, VkglTestCase_001208_2);

#define VkglTestCase_001209_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001209_2 "ssor.expressions.eval_basic_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001209, VkglTestCase_001209_1, VkglTestCase_001209_2);

#define VkglTestCase_001210_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001210_2 "expressions.eval_simple_precedence_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001210, VkglTestCase_001210_1, VkglTestCase_001210_2);

#define VkglTestCase_001211_1 "dEQP-GLES3.functional.shaders.preprocessor.e"
#define VkglTestCase_001211_2 "xpressions.eval_simple_precedence_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001211, VkglTestCase_001211_1, VkglTestCase_001211_2);

#define VkglTestCase_001212_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001212_2 "expressions.eval_simple_precedence_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001212, VkglTestCase_001212_1, VkglTestCase_001212_2);

#define VkglTestCase_001213_1 "dEQP-GLES3.functional.shaders.preprocessor.e"
#define VkglTestCase_001213_2 "xpressions.eval_simple_precedence_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001213, VkglTestCase_001213_1, VkglTestCase_001213_2);

#define VkglTestCase_001214_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_001214_2 "ocessor.expressions.defined_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001214, VkglTestCase_001214_1, VkglTestCase_001214_2);

#define VkglTestCase_001215_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001215_2 "cessor.expressions.defined_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001215, VkglTestCase_001215_1, VkglTestCase_001215_2);

#define VkglTestCase_001216_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_001216_2 "ocessor.expressions.defined_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001216, VkglTestCase_001216_1, VkglTestCase_001216_2);

#define VkglTestCase_001217_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001217_2 "cessor.expressions.defined_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001217, VkglTestCase_001217_1, VkglTestCase_001217_2);

#define VkglTestCase_001218_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_001218_2 "ocessor.expressions.defined_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001218, VkglTestCase_001218_1, VkglTestCase_001218_2);

#define VkglTestCase_001219_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001219_2 "cessor.expressions.defined_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001219, VkglTestCase_001219_1, VkglTestCase_001219_2);

#define VkglTestCase_001220_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_001220_2 "ocessor.expressions.defined_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001220, VkglTestCase_001220_1, VkglTestCase_001220_2);

#define VkglTestCase_001221_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001221_2 "cessor.expressions.defined_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001221, VkglTestCase_001221_1, VkglTestCase_001221_2);

#define VkglTestCase_001222_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_001222_2 "ocessor.expressions.defined_5_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001222, VkglTestCase_001222_1, VkglTestCase_001222_2);

#define VkglTestCase_001223_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001223_2 "cessor.expressions.defined_5_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001223, VkglTestCase_001223_1, VkglTestCase_001223_2);

#define VkglTestCase_001224_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_001224_2 "ocessor.expressions.defined_6_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001224, VkglTestCase_001224_1, VkglTestCase_001224_2);

#define VkglTestCase_001225_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001225_2 "cessor.expressions.defined_6_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001225, VkglTestCase_001225_1, VkglTestCase_001225_2);
