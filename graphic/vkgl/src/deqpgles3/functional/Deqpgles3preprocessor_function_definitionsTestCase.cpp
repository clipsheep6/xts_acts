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

#define VkglTestCase_000882_1 "dEQP-GLES3.functional.shaders.preprocessor.functio"
#define VkglTestCase_000882_2 "n_definitions.same_object_and_function_param_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000882, VkglTestCase_000882_1, VkglTestCase_000882_2);

#define VkglTestCase_000883_1 "dEQP-GLES3.functional.shaders.preprocessor.function"
#define VkglTestCase_000883_2 "_definitions.same_object_and_function_param_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000883, VkglTestCase_000883_1, VkglTestCase_000883_2);

#define VkglTestCase_000884_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_000884_2 "r.function_definitions.complex_func_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000884, VkglTestCase_000884_1, VkglTestCase_000884_2);

#define VkglTestCase_000885_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_000885_2 ".function_definitions.complex_func_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000885, VkglTestCase_000885_1, VkglTestCase_000885_2);

#define VkglTestCase_000886_1 "dEQP-GLES3.functional.shaders.preprocessor.function_"
#define VkglTestCase_000886_2 "definitions.function_definition_with_comments_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000886, VkglTestCase_000886_1, VkglTestCase_000886_2);

#define VkglTestCase_000887_1 "dEQP-GLES3.functional.shaders.preprocessor.function_d"
#define VkglTestCase_000887_2 "efinitions.function_definition_with_comments_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000887, VkglTestCase_000887_1, VkglTestCase_000887_2);
