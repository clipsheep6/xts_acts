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

#define VkglTestCase_000209_1 "dEQP-GLES2.functional.shaders.preprocessor.functio"
#define VkglTestCase_000209_2 "n_definitions.same_object_and_function_param_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000209, VkglTestCase_000209_1, VkglTestCase_000209_2);

#define VkglTestCase_000210_1 "dEQP-GLES2.functional.shaders.preprocessor.function"
#define VkglTestCase_000210_2 "_definitions.same_object_and_function_param_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000210, VkglTestCase_000210_1, VkglTestCase_000210_2);

#define VkglTestCase_000211_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000211_2 "r.function_definitions.complex_func_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000211, VkglTestCase_000211_1, VkglTestCase_000211_2);

#define VkglTestCase_000212_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000212_2 ".function_definitions.complex_func_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000212, VkglTestCase_000212_1, VkglTestCase_000212_2);

#define VkglTestCase_000213_1 "dEQP-GLES2.functional.shaders.preprocessor.function_"
#define VkglTestCase_000213_2 "definitions.function_definition_with_comments_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000213, VkglTestCase_000213_1, VkglTestCase_000213_2);

#define VkglTestCase_000214_1 "dEQP-GLES2.functional.shaders.preprocessor.function_d"
#define VkglTestCase_000214_2 "efinitions.function_definition_with_comments_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000214, VkglTestCase_000214_1, VkglTestCase_000214_2);
