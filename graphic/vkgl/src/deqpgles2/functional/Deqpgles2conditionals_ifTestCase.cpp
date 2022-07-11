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
#include "../ActsDeqpgles20002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001301_1 "dEQP-GLES2.functional.shaders.cond"
#define VkglTestCase_001301_2 "itionals.if.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001301, VkglTestCase_001301_1, VkglTestCase_001301_2);

#define VkglTestCase_001302_1 "dEQP-GLES2.functional.shaders.condi"
#define VkglTestCase_001302_2 "tionals.if.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001302, VkglTestCase_001302_1, VkglTestCase_001302_2);

#define VkglTestCase_001303_1 "dEQP-GLES2.functional.shaders.condi"
#define VkglTestCase_001303_2 "tionals.if.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001303, VkglTestCase_001303_1, VkglTestCase_001303_2);

#define VkglTestCase_001304_1 "dEQP-GLES2.functional.shaders.condit"
#define VkglTestCase_001304_2 "ionals.if.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001304, VkglTestCase_001304_1, VkglTestCase_001304_2);

#define VkglTestCase_001305_1 "dEQP-GLES2.functional.shaders.condit"
#define VkglTestCase_001305_2 "ionals.if.sequence_statements_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001305, VkglTestCase_001305_1, VkglTestCase_001305_2);

#define VkglTestCase_001306_1 "dEQP-GLES2.functional.shaders.conditi"
#define VkglTestCase_001306_2 "onals.if.sequence_statements_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001306, VkglTestCase_001306_1, VkglTestCase_001306_2);

#define VkglTestCase_001307_1 "dEQP-GLES2.functional.shaders.condi"
#define VkglTestCase_001307_2 "tionals.if.sequence_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001307, VkglTestCase_001307_1, VkglTestCase_001307_2);

#define VkglTestCase_001308_1 "dEQP-GLES2.functional.shaders.condit"
#define VkglTestCase_001308_2 "ionals.if.sequence_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001308, VkglTestCase_001308_1, VkglTestCase_001308_2);

#define VkglTestCase_001309_1 "dEQP-GLES2.functional.shaders.condi"
#define VkglTestCase_001309_2 "tionals.if.complex_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001309, VkglTestCase_001309_1, VkglTestCase_001309_2);

#define VkglTestCase_001310_1 "dEQP-GLES2.functional.shaders.condit"
#define VkglTestCase_001310_2 "ionals.if.complex_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001310, VkglTestCase_001310_1, VkglTestCase_001310_2);

#define VkglTestCase_001311_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_001311_2 "conditionals.if.if_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001311, VkglTestCase_001311_1, VkglTestCase_001311_2);

#define VkglTestCase_001312_1 "dEQP-GLES2.functional.shaders.c"
#define VkglTestCase_001312_2 "onditionals.if.if_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001312, VkglTestCase_001312_1, VkglTestCase_001312_2);

#define VkglTestCase_001313_1 "dEQP-GLES2.functional.shaders.c"
#define VkglTestCase_001313_2 "onditionals.if.if_elseif_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001313, VkglTestCase_001313_1, VkglTestCase_001313_2);

#define VkglTestCase_001314_1 "dEQP-GLES2.functional.shaders.co"
#define VkglTestCase_001314_2 "nditionals.if.if_elseif_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001314, VkglTestCase_001314_1, VkglTestCase_001314_2);

#define VkglTestCase_001315_1 "dEQP-GLES2.functional.shaders.con"
#define VkglTestCase_001315_2 "ditionals.if.if_elseif_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001315, VkglTestCase_001315_1, VkglTestCase_001315_2);

#define VkglTestCase_001316_1 "dEQP-GLES2.functional.shaders.cond"
#define VkglTestCase_001316_2 "itionals.if.if_elseif_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001316, VkglTestCase_001316_1, VkglTestCase_001316_2);

#define VkglTestCase_001317_1 "dEQP-GLES2.functional.shaders.condit"
#define VkglTestCase_001317_2 "ionals.if.mixed_if_elseif_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001317, VkglTestCase_001317_1, VkglTestCase_001317_2);

#define VkglTestCase_001318_1 "dEQP-GLES2.functional.shaders.conditi"
#define VkglTestCase_001318_2 "onals.if.mixed_if_elseif_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001318, VkglTestCase_001318_1, VkglTestCase_001318_2);

#define VkglTestCase_001319_1 "dEQP-GLES2.functional.shaders.conditionals."
#define VkglTestCase_001319_2 "if.constant_conditional_assignment_to_matrix"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001319, VkglTestCase_001319_1, VkglTestCase_001319_2);

#define VkglTestCase_001320_1 "dEQP-GLES2.functional.shaders.conditionals"
#define VkglTestCase_001320_2 ".if.input_conditional_assignment_to_matrix"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001320, VkglTestCase_001320_1, VkglTestCase_001320_2);

#define VkglTestCase_001321_1 "dEQP-GLES2.functional.shaders.conditionals."
#define VkglTestCase_001321_2 "if.uniform_conditional_assignment_to_matrix"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001321, VkglTestCase_001321_1, VkglTestCase_001321_2);
