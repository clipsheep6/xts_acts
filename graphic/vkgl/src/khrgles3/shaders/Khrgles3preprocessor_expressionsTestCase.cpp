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

#define VkglTestCase_001242_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_001242_2 ".expressions.shift_left_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001242, VkglTestCase_001242_1, VkglTestCase_001242_2);

#define VkglTestCase_001243_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001243_2 "expressions.shift_left_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001243, VkglTestCase_001243_1, VkglTestCase_001243_2);

#define VkglTestCase_001244_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_001244_2 ".expressions.shift_right_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001244, VkglTestCase_001244_1, VkglTestCase_001244_2);

#define VkglTestCase_001245_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001245_2 "expressions.shift_right_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001245, VkglTestCase_001245_1, VkglTestCase_001245_2);

#define VkglTestCase_001246_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001246_2 "expressions.cmp_less_than_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001246, VkglTestCase_001246_1, VkglTestCase_001246_2);

#define VkglTestCase_001247_1 "KHR-GLES3.shaders.preprocessor.e"
#define VkglTestCase_001247_2 "xpressions.cmp_less_than_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001247, VkglTestCase_001247_1, VkglTestCase_001247_2);

#define VkglTestCase_001248_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001248_2 "expressions.less_or_equal_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001248, VkglTestCase_001248_1, VkglTestCase_001248_2);

#define VkglTestCase_001249_1 "KHR-GLES3.shaders.preprocessor.e"
#define VkglTestCase_001249_2 "xpressions.less_or_equal_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001249, VkglTestCase_001249_1, VkglTestCase_001249_2);

#define VkglTestCase_001250_1 "KHR-GLES3.shaders.preproce"
#define VkglTestCase_001250_2 "ssor.expressions.or_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001250, VkglTestCase_001250_1, VkglTestCase_001250_2);

#define VkglTestCase_001251_1 "KHR-GLES3.shaders.preproces"
#define VkglTestCase_001251_2 "sor.expressions.or_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001251, VkglTestCase_001251_1, VkglTestCase_001251_2);

#define VkglTestCase_001252_1 "KHR-GLES3.shaders.preproce"
#define VkglTestCase_001252_2 "ssor.expressions.and_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001252, VkglTestCase_001252_1, VkglTestCase_001252_2);

#define VkglTestCase_001253_1 "KHR-GLES3.shaders.preproces"
#define VkglTestCase_001253_2 "sor.expressions.and_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001253, VkglTestCase_001253_1, VkglTestCase_001253_2);

#define VkglTestCase_001254_1 "KHR-GLES3.shaders.preproce"
#define VkglTestCase_001254_2 "ssor.expressions.xor_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001254, VkglTestCase_001254_1, VkglTestCase_001254_2);

#define VkglTestCase_001255_1 "KHR-GLES3.shaders.preproces"
#define VkglTestCase_001255_2 "sor.expressions.xor_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001255, VkglTestCase_001255_1, VkglTestCase_001255_2);

#define VkglTestCase_001256_1 "KHR-GLES3.shaders.preproce"
#define VkglTestCase_001256_2 "ssor.expressions.mod_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001256, VkglTestCase_001256_1, VkglTestCase_001256_2);

#define VkglTestCase_001257_1 "KHR-GLES3.shaders.preproces"
#define VkglTestCase_001257_2 "sor.expressions.mod_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001257, VkglTestCase_001257_1, VkglTestCase_001257_2);

#define VkglTestCase_001258_1 "KHR-GLES3.shaders.preprocessor.ex"
#define VkglTestCase_001258_2 "pressions.parenthesis_value_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001258, VkglTestCase_001258_1, VkglTestCase_001258_2);

#define VkglTestCase_001259_1 "KHR-GLES3.shaders.preprocessor.exp"
#define VkglTestCase_001259_2 "ressions.parenthesis_value_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001259, VkglTestCase_001259_1, VkglTestCase_001259_2);

#define VkglTestCase_001260_1 "KHR-GLES3.shaders.preprocessor.exp"
#define VkglTestCase_001260_2 "ressions.parenthesis_tricky_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001260, VkglTestCase_001260_1, VkglTestCase_001260_2);

#define VkglTestCase_001261_1 "KHR-GLES3.shaders.preprocessor.expr"
#define VkglTestCase_001261_2 "essions.parenthesis_tricky_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001261, VkglTestCase_001261_1, VkglTestCase_001261_2);

#define VkglTestCase_001262_1 "KHR-GLES3.shaders.preprocessor.ex"
#define VkglTestCase_001262_2 "pressions.parenthesis_if_no_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001262, VkglTestCase_001262_1, VkglTestCase_001262_2);

#define VkglTestCase_001263_1 "KHR-GLES3.shaders.preprocessor.exp"
#define VkglTestCase_001263_2 "ressions.parenthesis_if_no_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001263, VkglTestCase_001263_1, VkglTestCase_001263_2);

#define VkglTestCase_001264_1 "KHR-GLES3.shaders.preprocessor.e"
#define VkglTestCase_001264_2 "xpressions.parenthesis_if_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001264, VkglTestCase_001264_1, VkglTestCase_001264_2);

#define VkglTestCase_001265_1 "KHR-GLES3.shaders.preprocessor.ex"
#define VkglTestCase_001265_2 "pressions.parenthesis_if_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001265, VkglTestCase_001265_1, VkglTestCase_001265_2);

#define VkglTestCase_001266_1 "KHR-GLES3.shaders.preprocessor.expr"
#define VkglTestCase_001266_2 "essions.parenthesis_multi_if_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001266, VkglTestCase_001266_1, VkglTestCase_001266_2);

#define VkglTestCase_001267_1 "KHR-GLES3.shaders.preprocessor.expre"
#define VkglTestCase_001267_2 "ssions.parenthesis_multi_if_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001267, VkglTestCase_001267_1, VkglTestCase_001267_2);

#define VkglTestCase_001268_1 "KHR-GLES3.shaders.preprocessor.expr"
#define VkglTestCase_001268_2 "essions.parenthesis_single_if_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001268, VkglTestCase_001268_1, VkglTestCase_001268_2);

#define VkglTestCase_001269_1 "KHR-GLES3.shaders.preprocessor.expre"
#define VkglTestCase_001269_2 "ssions.parenthesis_single_if_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001269, VkglTestCase_001269_1, VkglTestCase_001269_2);

#define VkglTestCase_001270_1 "KHR-GLES3.shaders.preprocessor.expre"
#define VkglTestCase_001270_2 "ssions.parenthesis_ifelse_true_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001270, VkglTestCase_001270_1, VkglTestCase_001270_2);

#define VkglTestCase_001271_1 "KHR-GLES3.shaders.preprocessor.expres"
#define VkglTestCase_001271_2 "sions.parenthesis_ifelse_true_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001271, VkglTestCase_001271_1, VkglTestCase_001271_2);

#define VkglTestCase_001272_1 "KHR-GLES3.shaders.preprocessor.expres"
#define VkglTestCase_001272_2 "sions.parenthesis_ifelse_false_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001272, VkglTestCase_001272_1, VkglTestCase_001272_2);

#define VkglTestCase_001273_1 "KHR-GLES3.shaders.preprocessor.express"
#define VkglTestCase_001273_2 "ions.parenthesis_ifelse_false_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001273, VkglTestCase_001273_1, VkglTestCase_001273_2);

#define VkglTestCase_001274_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001274_2 "expressions.eval_basic_0_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001274, VkglTestCase_001274_1, VkglTestCase_001274_2);

#define VkglTestCase_001275_1 "KHR-GLES3.shaders.preprocessor.e"
#define VkglTestCase_001275_2 "xpressions.eval_basic_0_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001275, VkglTestCase_001275_1, VkglTestCase_001275_2);

#define VkglTestCase_001276_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001276_2 "expressions.eval_basic_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001276, VkglTestCase_001276_1, VkglTestCase_001276_2);

#define VkglTestCase_001277_1 "KHR-GLES3.shaders.preprocessor.e"
#define VkglTestCase_001277_2 "xpressions.eval_basic_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001277, VkglTestCase_001277_1, VkglTestCase_001277_2);

#define VkglTestCase_001278_1 "KHR-GLES3.shaders.preprocessor.expres"
#define VkglTestCase_001278_2 "sions.eval_simple_precedence_0_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001278, VkglTestCase_001278_1, VkglTestCase_001278_2);

#define VkglTestCase_001279_1 "KHR-GLES3.shaders.preprocessor.express"
#define VkglTestCase_001279_2 "ions.eval_simple_precedence_0_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001279, VkglTestCase_001279_1, VkglTestCase_001279_2);

#define VkglTestCase_001280_1 "KHR-GLES3.shaders.preprocessor.expres"
#define VkglTestCase_001280_2 "sions.eval_simple_precedence_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001280, VkglTestCase_001280_1, VkglTestCase_001280_2);

#define VkglTestCase_001281_1 "KHR-GLES3.shaders.preprocessor.express"
#define VkglTestCase_001281_2 "ions.eval_simple_precedence_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001281, VkglTestCase_001281_1, VkglTestCase_001281_2);
