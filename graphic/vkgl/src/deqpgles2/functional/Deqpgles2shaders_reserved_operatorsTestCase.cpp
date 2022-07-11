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
#include "../ActsDeqpgles20003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002347_1 "dEQP-GLES2.functional.shaders.reser"
#define VkglTestCase_002347_2 "ved_operators.operator_modulo_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002347, VkglTestCase_002347_1, VkglTestCase_002347_2);

#define VkglTestCase_002348_1 "dEQP-GLES2.functional.shaders.reserv"
#define VkglTestCase_002348_2 "ed_operators.operator_modulo_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002348, VkglTestCase_002348_1, VkglTestCase_002348_2);

#define VkglTestCase_002349_1 "dEQP-GLES2.functional.shaders.reserved_op"
#define VkglTestCase_002349_2 "erators.operator_bitwise_shift_left_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002349, VkglTestCase_002349_1, VkglTestCase_002349_2);

#define VkglTestCase_002350_1 "dEQP-GLES2.functional.shaders.reserved_ope"
#define VkglTestCase_002350_2 "rators.operator_bitwise_shift_left_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002350, VkglTestCase_002350_1, VkglTestCase_002350_2);

#define VkglTestCase_002351_1 "dEQP-GLES2.functional.shaders.reserved_ope"
#define VkglTestCase_002351_2 "rators.operator_bitwise_shift_right_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002351, VkglTestCase_002351_1, VkglTestCase_002351_2);

#define VkglTestCase_002352_1 "dEQP-GLES2.functional.shaders.reserved_oper"
#define VkglTestCase_002352_2 "ators.operator_bitwise_shift_right_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002352, VkglTestCase_002352_1, VkglTestCase_002352_2);

#define VkglTestCase_002353_1 "dEQP-GLES2.functional.shaders.reserved"
#define VkglTestCase_002353_2 "_operators.operator_bitwise_and_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002353, VkglTestCase_002353_1, VkglTestCase_002353_2);

#define VkglTestCase_002354_1 "dEQP-GLES2.functional.shaders.reserved_"
#define VkglTestCase_002354_2 "operators.operator_bitwise_and_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002354, VkglTestCase_002354_1, VkglTestCase_002354_2);

#define VkglTestCase_002355_1 "dEQP-GLES2.functional.shaders.reserved"
#define VkglTestCase_002355_2 "_operators.operator_bitwise_xor_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002355, VkglTestCase_002355_1, VkglTestCase_002355_2);

#define VkglTestCase_002356_1 "dEQP-GLES2.functional.shaders.reserved_"
#define VkglTestCase_002356_2 "operators.operator_bitwise_xor_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002356, VkglTestCase_002356_1, VkglTestCase_002356_2);

#define VkglTestCase_002357_1 "dEQP-GLES2.functional.shaders.reserve"
#define VkglTestCase_002357_2 "d_operators.operator_bitwise_or_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002357, VkglTestCase_002357_1, VkglTestCase_002357_2);

#define VkglTestCase_002358_1 "dEQP-GLES2.functional.shaders.reserved"
#define VkglTestCase_002358_2 "_operators.operator_bitwise_or_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002358, VkglTestCase_002358_1, VkglTestCase_002358_2);

#define VkglTestCase_002359_1 "dEQP-GLES2.functional.shaders.reserved_"
#define VkglTestCase_002359_2 "operators.operator_assign_modulo_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002359, VkglTestCase_002359_1, VkglTestCase_002359_2);

#define VkglTestCase_002360_1 "dEQP-GLES2.functional.shaders.reserved_o"
#define VkglTestCase_002360_2 "perators.operator_assign_modulo_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002360, VkglTestCase_002360_1, VkglTestCase_002360_2);

#define VkglTestCase_002361_1 "dEQP-GLES2.functional.shaders.reserved_op"
#define VkglTestCase_002361_2 "erators.operator_assign_shift_left_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002361, VkglTestCase_002361_1, VkglTestCase_002361_2);

#define VkglTestCase_002362_1 "dEQP-GLES2.functional.shaders.reserved_ope"
#define VkglTestCase_002362_2 "rators.operator_assign_shift_left_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002362, VkglTestCase_002362_1, VkglTestCase_002362_2);

#define VkglTestCase_002363_1 "dEQP-GLES2.functional.shaders.reserved_op"
#define VkglTestCase_002363_2 "erators.operator_assign_shift_right_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002363, VkglTestCase_002363_1, VkglTestCase_002363_2);

#define VkglTestCase_002364_1 "dEQP-GLES2.functional.shaders.reserved_ope"
#define VkglTestCase_002364_2 "rators.operator_assign_shift_right_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002364, VkglTestCase_002364_1, VkglTestCase_002364_2);

#define VkglTestCase_002365_1 "dEQP-GLES2.functional.shaders.reserve"
#define VkglTestCase_002365_2 "d_operators.operator_assign_and_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002365, VkglTestCase_002365_1, VkglTestCase_002365_2);

#define VkglTestCase_002366_1 "dEQP-GLES2.functional.shaders.reserved"
#define VkglTestCase_002366_2 "_operators.operator_assign_and_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002366, VkglTestCase_002366_1, VkglTestCase_002366_2);

#define VkglTestCase_002367_1 "dEQP-GLES2.functional.shaders.reserve"
#define VkglTestCase_002367_2 "d_operators.operator_assign_xor_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002367, VkglTestCase_002367_1, VkglTestCase_002367_2);

#define VkglTestCase_002368_1 "dEQP-GLES2.functional.shaders.reserved"
#define VkglTestCase_002368_2 "_operators.operator_assign_xor_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002368, VkglTestCase_002368_1, VkglTestCase_002368_2);

#define VkglTestCase_002369_1 "dEQP-GLES2.functional.shaders.reserve"
#define VkglTestCase_002369_2 "d_operators.operator_assign_or_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002369, VkglTestCase_002369_1, VkglTestCase_002369_2);

#define VkglTestCase_002370_1 "dEQP-GLES2.functional.shaders.reserved"
#define VkglTestCase_002370_2 "_operators.operator_assign_or_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002370, VkglTestCase_002370_1, VkglTestCase_002370_2);
