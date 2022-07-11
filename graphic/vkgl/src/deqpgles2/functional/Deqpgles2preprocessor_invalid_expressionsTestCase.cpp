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

#define VkglTestCase_000543_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000543_2 "nvalid_expressions.invalid_unary_expr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000543, VkglTestCase_000543_1, VkglTestCase_000543_2);

#define VkglTestCase_000544_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000544_2 "valid_expressions.invalid_unary_expr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000544, VkglTestCase_000544_1, VkglTestCase_000544_2);

#define VkglTestCase_000545_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000545_2 "nvalid_expressions.invalid_binary_expr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000545, VkglTestCase_000545_1, VkglTestCase_000545_2);

#define VkglTestCase_000546_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000546_2 "valid_expressions.invalid_binary_expr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000546, VkglTestCase_000546_1, VkglTestCase_000546_2);

#define VkglTestCase_000547_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000547_2 "r.invalid_expressions.missing_expr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000547, VkglTestCase_000547_1, VkglTestCase_000547_2);

#define VkglTestCase_000548_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000548_2 ".invalid_expressions.missing_expr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000548, VkglTestCase_000548_1, VkglTestCase_000548_2);

#define VkglTestCase_000549_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000549_2 ".invalid_expressions.invalid_expr_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000549, VkglTestCase_000549_1, VkglTestCase_000549_2);

#define VkglTestCase_000550_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000550_2 "invalid_expressions.invalid_expr_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000550, VkglTestCase_000550_1, VkglTestCase_000550_2);

#define VkglTestCase_000551_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000551_2 ".invalid_expressions.invalid_expr_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000551, VkglTestCase_000551_1, VkglTestCase_000551_2);

#define VkglTestCase_000552_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000552_2 "invalid_expressions.invalid_expr_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000552, VkglTestCase_000552_1, VkglTestCase_000552_2);

#define VkglTestCase_000553_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000553_2 ".invalid_expressions.invalid_expr_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000553, VkglTestCase_000553_1, VkglTestCase_000553_2);

#define VkglTestCase_000554_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000554_2 "invalid_expressions.invalid_expr_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000554, VkglTestCase_000554_1, VkglTestCase_000554_2);

#define VkglTestCase_000555_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000555_2 "valid_expressions.unopened_parenthesis_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000555, VkglTestCase_000555_1, VkglTestCase_000555_2);

#define VkglTestCase_000556_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000556_2 "alid_expressions.unopened_parenthesis_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000556, VkglTestCase_000556_1, VkglTestCase_000556_2);

#define VkglTestCase_000557_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000557_2 "valid_expressions.unclosed_parenthesis_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000557, VkglTestCase_000557_1, VkglTestCase_000557_2);

#define VkglTestCase_000558_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000558_2 "alid_expressions.unclosed_parenthesis_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000558, VkglTestCase_000558_1, VkglTestCase_000558_2);
