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
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000910_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_000910_2 "valid_function_definitions.arguments_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000910, VkglTestCase_000910_1, VkglTestCase_000910_2);

#define VkglTestCase_000911_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_000911_2 "alid_function_definitions.arguments_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000911, VkglTestCase_000911_1, VkglTestCase_000911_2);

#define VkglTestCase_000912_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_000912_2 "valid_function_definitions.arguments_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000912, VkglTestCase_000912_1, VkglTestCase_000912_2);

#define VkglTestCase_000913_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_000913_2 "alid_function_definitions.arguments_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000913, VkglTestCase_000913_1, VkglTestCase_000913_2);

#define VkglTestCase_000914_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_000914_2 "valid_function_definitions.arguments_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000914, VkglTestCase_000914_1, VkglTestCase_000914_2);

#define VkglTestCase_000915_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_000915_2 "alid_function_definitions.arguments_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000915, VkglTestCase_000915_1, VkglTestCase_000915_2);

#define VkglTestCase_000916_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_000916_2 "valid_function_definitions.arguments_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000916, VkglTestCase_000916_1, VkglTestCase_000916_2);

#define VkglTestCase_000917_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_000917_2 "alid_function_definitions.arguments_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000917, VkglTestCase_000917_1, VkglTestCase_000917_2);

#define VkglTestCase_000918_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_000918_2 "valid_function_definitions.arguments_5_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000918, VkglTestCase_000918_1, VkglTestCase_000918_2);

#define VkglTestCase_000919_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_000919_2 "alid_function_definitions.arguments_5_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000919, VkglTestCase_000919_1, VkglTestCase_000919_2);

#define VkglTestCase_000920_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_000920_2 "valid_function_definitions.arguments_6_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000920, VkglTestCase_000920_1, VkglTestCase_000920_2);

#define VkglTestCase_000921_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_000921_2 "alid_function_definitions.arguments_6_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000921, VkglTestCase_000921_1, VkglTestCase_000921_2);

#define VkglTestCase_000922_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_000922_2 "valid_function_definitions.arguments_7_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000922, VkglTestCase_000922_1, VkglTestCase_000922_2);

#define VkglTestCase_000923_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_000923_2 "alid_function_definitions.arguments_7_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000923, VkglTestCase_000923_1, VkglTestCase_000923_2);

#define VkglTestCase_000924_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_000924_2 "valid_function_definitions.arguments_8_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000924, VkglTestCase_000924_1, VkglTestCase_000924_2);

#define VkglTestCase_000925_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_000925_2 "alid_function_definitions.arguments_8_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000925, VkglTestCase_000925_1, VkglTestCase_000925_2);

#define VkglTestCase_000926_1 "dEQP-GLES3.functional.shaders.preprocessor.inval"
#define VkglTestCase_000926_2 "id_function_definitions.unique_param_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000926, VkglTestCase_000926_1, VkglTestCase_000926_2);

#define VkglTestCase_000927_1 "dEQP-GLES3.functional.shaders.preprocessor.invali"
#define VkglTestCase_000927_2 "d_function_definitions.unique_param_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000927, VkglTestCase_000927_1, VkglTestCase_000927_2);

#define VkglTestCase_000928_1 "dEQP-GLES3.functional.shaders.preprocessor.inva"
#define VkglTestCase_000928_2 "lid_function_definitions.argument_list_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000928, VkglTestCase_000928_1, VkglTestCase_000928_2);

#define VkglTestCase_000929_1 "dEQP-GLES3.functional.shaders.preprocessor.inval"
#define VkglTestCase_000929_2 "id_function_definitions.argument_list_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000929, VkglTestCase_000929_1, VkglTestCase_000929_2);

#define VkglTestCase_000930_1 "dEQP-GLES3.functional.shaders.preprocessor.inva"
#define VkglTestCase_000930_2 "lid_function_definitions.argument_list_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000930, VkglTestCase_000930_1, VkglTestCase_000930_2);

#define VkglTestCase_000931_1 "dEQP-GLES3.functional.shaders.preprocessor.inval"
#define VkglTestCase_000931_2 "id_function_definitions.argument_list_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000931, VkglTestCase_000931_1, VkglTestCase_000931_2);

#define VkglTestCase_000932_1 "dEQP-GLES3.functional.shaders.preprocessor.inva"
#define VkglTestCase_000932_2 "lid_function_definitions.argument_list_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000932, VkglTestCase_000932_1, VkglTestCase_000932_2);

#define VkglTestCase_000933_1 "dEQP-GLES3.functional.shaders.preprocessor.inval"
#define VkglTestCase_000933_2 "id_function_definitions.argument_list_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000933, VkglTestCase_000933_1, VkglTestCase_000933_2);

#define VkglTestCase_000934_1 "dEQP-GLES3.functional.shaders.preprocessor.invalid_"
#define VkglTestCase_000934_2 "function_definitions.no_closing_parenthesis_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000934, VkglTestCase_000934_1, VkglTestCase_000934_2);

#define VkglTestCase_000935_1 "dEQP-GLES3.functional.shaders.preprocessor.invalid_f"
#define VkglTestCase_000935_2 "unction_definitions.no_closing_parenthesis_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000935, VkglTestCase_000935_1, VkglTestCase_000935_2);

#define VkglTestCase_000936_1 "dEQP-GLES3.functional.shaders.preprocessor.invalid_"
#define VkglTestCase_000936_2 "function_definitions.no_closing_parenthesis_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000936, VkglTestCase_000936_1, VkglTestCase_000936_2);

#define VkglTestCase_000937_1 "dEQP-GLES3.functional.shaders.preprocessor.invalid_f"
#define VkglTestCase_000937_2 "unction_definitions.no_closing_parenthesis_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000937, VkglTestCase_000937_1, VkglTestCase_000937_2);

#define VkglTestCase_000938_1 "dEQP-GLES3.functional.shaders.preprocessor.invalid_"
#define VkglTestCase_000938_2 "function_definitions.no_closing_parenthesis_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000938, VkglTestCase_000938_1, VkglTestCase_000938_2);

#define VkglTestCase_000939_1 "dEQP-GLES3.functional.shaders.preprocessor.invalid_f"
#define VkglTestCase_000939_2 "unction_definitions.no_closing_parenthesis_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000939, VkglTestCase_000939_1, VkglTestCase_000939_2);

#define VkglTestCase_000940_1 "dEQP-GLES3.functional.shaders.preprocessor.invalid_"
#define VkglTestCase_000940_2 "function_definitions.no_closing_parenthesis_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000940, VkglTestCase_000940_1, VkglTestCase_000940_2);

#define VkglTestCase_000941_1 "dEQP-GLES3.functional.shaders.preprocessor.invalid_f"
#define VkglTestCase_000941_2 "unction_definitions.no_closing_parenthesis_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000941, VkglTestCase_000941_1, VkglTestCase_000941_2);
