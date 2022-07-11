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

#define VkglTestCase_001226_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001226_2 "nvalid_expressions.invalid_unary_expr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001226, VkglTestCase_001226_1, VkglTestCase_001226_2);

#define VkglTestCase_001227_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001227_2 "valid_expressions.invalid_unary_expr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001227, VkglTestCase_001227_1, VkglTestCase_001227_2);

#define VkglTestCase_001228_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001228_2 "nvalid_expressions.invalid_binary_expr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001228, VkglTestCase_001228_1, VkglTestCase_001228_2);

#define VkglTestCase_001229_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001229_2 "valid_expressions.invalid_binary_expr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001229, VkglTestCase_001229_1, VkglTestCase_001229_2);

#define VkglTestCase_001230_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001230_2 "r.invalid_expressions.missing_expr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001230, VkglTestCase_001230_1, VkglTestCase_001230_2);

#define VkglTestCase_001231_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001231_2 ".invalid_expressions.missing_expr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001231, VkglTestCase_001231_1, VkglTestCase_001231_2);

#define VkglTestCase_001232_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001232_2 ".invalid_expressions.invalid_expr_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001232, VkglTestCase_001232_1, VkglTestCase_001232_2);

#define VkglTestCase_001233_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001233_2 "invalid_expressions.invalid_expr_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001233, VkglTestCase_001233_1, VkglTestCase_001233_2);

#define VkglTestCase_001234_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001234_2 ".invalid_expressions.invalid_expr_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001234, VkglTestCase_001234_1, VkglTestCase_001234_2);

#define VkglTestCase_001235_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001235_2 "invalid_expressions.invalid_expr_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001235, VkglTestCase_001235_1, VkglTestCase_001235_2);

#define VkglTestCase_001236_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001236_2 ".invalid_expressions.invalid_expr_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001236, VkglTestCase_001236_1, VkglTestCase_001236_2);

#define VkglTestCase_001237_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001237_2 "invalid_expressions.invalid_expr_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001237, VkglTestCase_001237_1, VkglTestCase_001237_2);

#define VkglTestCase_001238_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001238_2 "valid_expressions.unopened_parenthesis_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001238, VkglTestCase_001238_1, VkglTestCase_001238_2);

#define VkglTestCase_001239_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_001239_2 "alid_expressions.unopened_parenthesis_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001239, VkglTestCase_001239_1, VkglTestCase_001239_2);

#define VkglTestCase_001240_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001240_2 "valid_expressions.unclosed_parenthesis_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001240, VkglTestCase_001240_1, VkglTestCase_001240_2);

#define VkglTestCase_001241_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_001241_2 "alid_expressions.unclosed_parenthesis_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001241, VkglTestCase_001241_1, VkglTestCase_001241_2);
