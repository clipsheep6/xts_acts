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

#define VkglTestCase_000225_1 "dEQP-GLES2.functional.shaders.preprocessor.funct"
#define VkglTestCase_000225_2 "ion_redefinitions.function_redefinition_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000225, VkglTestCase_000225_1, VkglTestCase_000225_2);

#define VkglTestCase_000226_1 "dEQP-GLES2.functional.shaders.preprocessor.functi"
#define VkglTestCase_000226_2 "on_redefinitions.function_redefinition_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000226, VkglTestCase_000226_1, VkglTestCase_000226_2);

#define VkglTestCase_000227_1 "dEQP-GLES2.functional.shaders.preprocessor.funct"
#define VkglTestCase_000227_2 "ion_redefinitions.function_redefinition_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000227, VkglTestCase_000227_1, VkglTestCase_000227_2);

#define VkglTestCase_000228_1 "dEQP-GLES2.functional.shaders.preprocessor.functi"
#define VkglTestCase_000228_2 "on_redefinitions.function_redefinition_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000228, VkglTestCase_000228_1, VkglTestCase_000228_2);

#define VkglTestCase_000229_1 "dEQP-GLES2.functional.shaders.preprocessor.funct"
#define VkglTestCase_000229_2 "ion_redefinitions.function_redefinition_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000229, VkglTestCase_000229_1, VkglTestCase_000229_2);

#define VkglTestCase_000230_1 "dEQP-GLES2.functional.shaders.preprocessor.functi"
#define VkglTestCase_000230_2 "on_redefinitions.function_redefinition_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000230, VkglTestCase_000230_1, VkglTestCase_000230_2);

#define VkglTestCase_000231_1 "dEQP-GLES2.functional.shaders.preprocessor.function_red"
#define VkglTestCase_000231_2 "efinitions.invalid_function_redefinition_param_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000231, VkglTestCase_000231_1, VkglTestCase_000231_2);

#define VkglTestCase_000232_1 "dEQP-GLES2.functional.shaders.preprocessor.function_rede"
#define VkglTestCase_000232_2 "finitions.invalid_function_redefinition_param_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000232, VkglTestCase_000232_1, VkglTestCase_000232_2);

#define VkglTestCase_000233_1 "dEQP-GLES2.functional.shaders.preprocessor.function_red"
#define VkglTestCase_000233_2 "efinitions.invalid_function_redefinition_param_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000233, VkglTestCase_000233_1, VkglTestCase_000233_2);

#define VkglTestCase_000234_1 "dEQP-GLES2.functional.shaders.preprocessor.function_rede"
#define VkglTestCase_000234_2 "finitions.invalid_function_redefinition_param_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000234, VkglTestCase_000234_1, VkglTestCase_000234_2);

#define VkglTestCase_000235_1 "dEQP-GLES2.functional.shaders.preprocessor.function_red"
#define VkglTestCase_000235_2 "efinitions.invalid_function_redefinition_param_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000235, VkglTestCase_000235_1, VkglTestCase_000235_2);

#define VkglTestCase_000236_1 "dEQP-GLES2.functional.shaders.preprocessor.function_rede"
#define VkglTestCase_000236_2 "finitions.invalid_function_redefinition_param_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000236, VkglTestCase_000236_1, VkglTestCase_000236_2);
