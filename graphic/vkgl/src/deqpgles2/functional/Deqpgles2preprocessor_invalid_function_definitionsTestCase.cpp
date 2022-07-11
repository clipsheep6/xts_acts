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

#define VkglTestCase_000237_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000237_2 "valid_function_definitions.arguments_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000237, VkglTestCase_000237_1, VkglTestCase_000237_2);

#define VkglTestCase_000238_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000238_2 "alid_function_definitions.arguments_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000238, VkglTestCase_000238_1, VkglTestCase_000238_2);

#define VkglTestCase_000239_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000239_2 "valid_function_definitions.arguments_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000239, VkglTestCase_000239_1, VkglTestCase_000239_2);

#define VkglTestCase_000240_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000240_2 "alid_function_definitions.arguments_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000240, VkglTestCase_000240_1, VkglTestCase_000240_2);

#define VkglTestCase_000241_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000241_2 "valid_function_definitions.arguments_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000241, VkglTestCase_000241_1, VkglTestCase_000241_2);

#define VkglTestCase_000242_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000242_2 "alid_function_definitions.arguments_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000242, VkglTestCase_000242_1, VkglTestCase_000242_2);

#define VkglTestCase_000243_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000243_2 "valid_function_definitions.arguments_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000243, VkglTestCase_000243_1, VkglTestCase_000243_2);

#define VkglTestCase_000244_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000244_2 "alid_function_definitions.arguments_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000244, VkglTestCase_000244_1, VkglTestCase_000244_2);

#define VkglTestCase_000245_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000245_2 "valid_function_definitions.arguments_5_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000245, VkglTestCase_000245_1, VkglTestCase_000245_2);

#define VkglTestCase_000246_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000246_2 "alid_function_definitions.arguments_5_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000246, VkglTestCase_000246_1, VkglTestCase_000246_2);

#define VkglTestCase_000247_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000247_2 "valid_function_definitions.arguments_6_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000247, VkglTestCase_000247_1, VkglTestCase_000247_2);

#define VkglTestCase_000248_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000248_2 "alid_function_definitions.arguments_6_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000248, VkglTestCase_000248_1, VkglTestCase_000248_2);

#define VkglTestCase_000249_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000249_2 "valid_function_definitions.arguments_7_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000249, VkglTestCase_000249_1, VkglTestCase_000249_2);

#define VkglTestCase_000250_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000250_2 "alid_function_definitions.arguments_7_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000250, VkglTestCase_000250_1, VkglTestCase_000250_2);

#define VkglTestCase_000251_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000251_2 "valid_function_definitions.arguments_8_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000251, VkglTestCase_000251_1, VkglTestCase_000251_2);

#define VkglTestCase_000252_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000252_2 "alid_function_definitions.arguments_8_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000252, VkglTestCase_000252_1, VkglTestCase_000252_2);

#define VkglTestCase_000253_1 "dEQP-GLES2.functional.shaders.preprocessor.inval"
#define VkglTestCase_000253_2 "id_function_definitions.unique_param_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000253, VkglTestCase_000253_1, VkglTestCase_000253_2);

#define VkglTestCase_000254_1 "dEQP-GLES2.functional.shaders.preprocessor.invali"
#define VkglTestCase_000254_2 "d_function_definitions.unique_param_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000254, VkglTestCase_000254_1, VkglTestCase_000254_2);

#define VkglTestCase_000255_1 "dEQP-GLES2.functional.shaders.preprocessor.inva"
#define VkglTestCase_000255_2 "lid_function_definitions.argument_list_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000255, VkglTestCase_000255_1, VkglTestCase_000255_2);

#define VkglTestCase_000256_1 "dEQP-GLES2.functional.shaders.preprocessor.inval"
#define VkglTestCase_000256_2 "id_function_definitions.argument_list_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000256, VkglTestCase_000256_1, VkglTestCase_000256_2);

#define VkglTestCase_000257_1 "dEQP-GLES2.functional.shaders.preprocessor.inva"
#define VkglTestCase_000257_2 "lid_function_definitions.argument_list_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000257, VkglTestCase_000257_1, VkglTestCase_000257_2);

#define VkglTestCase_000258_1 "dEQP-GLES2.functional.shaders.preprocessor.inval"
#define VkglTestCase_000258_2 "id_function_definitions.argument_list_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000258, VkglTestCase_000258_1, VkglTestCase_000258_2);

#define VkglTestCase_000259_1 "dEQP-GLES2.functional.shaders.preprocessor.inva"
#define VkglTestCase_000259_2 "lid_function_definitions.argument_list_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000259, VkglTestCase_000259_1, VkglTestCase_000259_2);

#define VkglTestCase_000260_1 "dEQP-GLES2.functional.shaders.preprocessor.inval"
#define VkglTestCase_000260_2 "id_function_definitions.argument_list_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000260, VkglTestCase_000260_1, VkglTestCase_000260_2);

#define VkglTestCase_000261_1 "dEQP-GLES2.functional.shaders.preprocessor.invalid_"
#define VkglTestCase_000261_2 "function_definitions.no_closing_parenthesis_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000261, VkglTestCase_000261_1, VkglTestCase_000261_2);

#define VkglTestCase_000262_1 "dEQP-GLES2.functional.shaders.preprocessor.invalid_f"
#define VkglTestCase_000262_2 "unction_definitions.no_closing_parenthesis_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000262, VkglTestCase_000262_1, VkglTestCase_000262_2);

#define VkglTestCase_000263_1 "dEQP-GLES2.functional.shaders.preprocessor.invalid_"
#define VkglTestCase_000263_2 "function_definitions.no_closing_parenthesis_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000263, VkglTestCase_000263_1, VkglTestCase_000263_2);

#define VkglTestCase_000264_1 "dEQP-GLES2.functional.shaders.preprocessor.invalid_f"
#define VkglTestCase_000264_2 "unction_definitions.no_closing_parenthesis_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000264, VkglTestCase_000264_1, VkglTestCase_000264_2);

#define VkglTestCase_000265_1 "dEQP-GLES2.functional.shaders.preprocessor.invalid_"
#define VkglTestCase_000265_2 "function_definitions.no_closing_parenthesis_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000265, VkglTestCase_000265_1, VkglTestCase_000265_2);

#define VkglTestCase_000266_1 "dEQP-GLES2.functional.shaders.preprocessor.invalid_f"
#define VkglTestCase_000266_2 "unction_definitions.no_closing_parenthesis_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000266, VkglTestCase_000266_1, VkglTestCase_000266_2);

#define VkglTestCase_000267_1 "dEQP-GLES2.functional.shaders.preprocessor.invalid_"
#define VkglTestCase_000267_2 "function_definitions.no_closing_parenthesis_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000267, VkglTestCase_000267_1, VkglTestCase_000267_2);

#define VkglTestCase_000268_1 "dEQP-GLES2.functional.shaders.preprocessor.invalid_f"
#define VkglTestCase_000268_2 "unction_definitions.no_closing_parenthesis_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000268, VkglTestCase_000268_1, VkglTestCase_000268_2);
