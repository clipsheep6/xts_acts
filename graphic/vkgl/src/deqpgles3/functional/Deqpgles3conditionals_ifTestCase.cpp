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
#include "../ActsDeqpgles30003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002751_1 "dEQP-GLES3.functional.shaders.cond"
#define VkglTestCase_002751_2 "itionals.if.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002751, VkglTestCase_002751_1, VkglTestCase_002751_2);

#define VkglTestCase_002752_1 "dEQP-GLES3.functional.shaders.condi"
#define VkglTestCase_002752_2 "tionals.if.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002752, VkglTestCase_002752_1, VkglTestCase_002752_2);

#define VkglTestCase_002753_1 "dEQP-GLES3.functional.shaders.condi"
#define VkglTestCase_002753_2 "tionals.if.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002753, VkglTestCase_002753_1, VkglTestCase_002753_2);

#define VkglTestCase_002754_1 "dEQP-GLES3.functional.shaders.condit"
#define VkglTestCase_002754_2 "ionals.if.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002754, VkglTestCase_002754_1, VkglTestCase_002754_2);

#define VkglTestCase_002755_1 "dEQP-GLES3.functional.shaders.condit"
#define VkglTestCase_002755_2 "ionals.if.sequence_statements_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002755, VkglTestCase_002755_1, VkglTestCase_002755_2);

#define VkglTestCase_002756_1 "dEQP-GLES3.functional.shaders.conditi"
#define VkglTestCase_002756_2 "onals.if.sequence_statements_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002756, VkglTestCase_002756_1, VkglTestCase_002756_2);

#define VkglTestCase_002757_1 "dEQP-GLES3.functional.shaders.condi"
#define VkglTestCase_002757_2 "tionals.if.sequence_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002757, VkglTestCase_002757_1, VkglTestCase_002757_2);

#define VkglTestCase_002758_1 "dEQP-GLES3.functional.shaders.condit"
#define VkglTestCase_002758_2 "ionals.if.sequence_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002758, VkglTestCase_002758_1, VkglTestCase_002758_2);

#define VkglTestCase_002759_1 "dEQP-GLES3.functional.shaders.condi"
#define VkglTestCase_002759_2 "tionals.if.complex_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002759, VkglTestCase_002759_1, VkglTestCase_002759_2);

#define VkglTestCase_002760_1 "dEQP-GLES3.functional.shaders.condit"
#define VkglTestCase_002760_2 "ionals.if.complex_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002760, VkglTestCase_002760_1, VkglTestCase_002760_2);

#define VkglTestCase_002761_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_002761_2 "conditionals.if.if_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002761, VkglTestCase_002761_1, VkglTestCase_002761_2);

#define VkglTestCase_002762_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_002762_2 "onditionals.if.if_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002762, VkglTestCase_002762_1, VkglTestCase_002762_2);

#define VkglTestCase_002763_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_002763_2 "onditionals.if.if_elseif_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002763, VkglTestCase_002763_1, VkglTestCase_002763_2);

#define VkglTestCase_002764_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_002764_2 "nditionals.if.if_elseif_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002764, VkglTestCase_002764_1, VkglTestCase_002764_2);

#define VkglTestCase_002765_1 "dEQP-GLES3.functional.shaders.con"
#define VkglTestCase_002765_2 "ditionals.if.if_elseif_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002765, VkglTestCase_002765_1, VkglTestCase_002765_2);

#define VkglTestCase_002766_1 "dEQP-GLES3.functional.shaders.cond"
#define VkglTestCase_002766_2 "itionals.if.if_elseif_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002766, VkglTestCase_002766_1, VkglTestCase_002766_2);

#define VkglTestCase_002767_1 "dEQP-GLES3.functional.shaders.condit"
#define VkglTestCase_002767_2 "ionals.if.mixed_if_elseif_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002767, VkglTestCase_002767_1, VkglTestCase_002767_2);

#define VkglTestCase_002768_1 "dEQP-GLES3.functional.shaders.conditi"
#define VkglTestCase_002768_2 "onals.if.mixed_if_elseif_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002768, VkglTestCase_002768_1, VkglTestCase_002768_2);

#define VkglTestCase_002769_1 "dEQP-GLES3.functional.shaders.conditionals."
#define VkglTestCase_002769_2 "if.constant_conditional_assignment_to_matrix"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002769, VkglTestCase_002769_1, VkglTestCase_002769_2);

#define VkglTestCase_002770_1 "dEQP-GLES3.functional.shaders.conditionals"
#define VkglTestCase_002770_2 ".if.input_conditional_assignment_to_matrix"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002770, VkglTestCase_002770_1, VkglTestCase_002770_2);

#define VkglTestCase_002771_1 "dEQP-GLES3.functional.shaders.conditionals."
#define VkglTestCase_002771_2 "if.uniform_conditional_assignment_to_matrix"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002771, VkglTestCase_002771_1, VkglTestCase_002771_2);
