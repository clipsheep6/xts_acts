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

#define VkglTestCase_000898_1 "dEQP-GLES3.functional.shaders.preprocessor.funct"
#define VkglTestCase_000898_2 "ion_redefinitions.function_redefinition_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000898, VkglTestCase_000898_1, VkglTestCase_000898_2);

#define VkglTestCase_000899_1 "dEQP-GLES3.functional.shaders.preprocessor.functi"
#define VkglTestCase_000899_2 "on_redefinitions.function_redefinition_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000899, VkglTestCase_000899_1, VkglTestCase_000899_2);

#define VkglTestCase_000900_1 "dEQP-GLES3.functional.shaders.preprocessor.funct"
#define VkglTestCase_000900_2 "ion_redefinitions.function_redefinition_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000900, VkglTestCase_000900_1, VkglTestCase_000900_2);

#define VkglTestCase_000901_1 "dEQP-GLES3.functional.shaders.preprocessor.functi"
#define VkglTestCase_000901_2 "on_redefinitions.function_redefinition_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000901, VkglTestCase_000901_1, VkglTestCase_000901_2);

#define VkglTestCase_000902_1 "dEQP-GLES3.functional.shaders.preprocessor.funct"
#define VkglTestCase_000902_2 "ion_redefinitions.function_redefinition_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000902, VkglTestCase_000902_1, VkglTestCase_000902_2);

#define VkglTestCase_000903_1 "dEQP-GLES3.functional.shaders.preprocessor.functi"
#define VkglTestCase_000903_2 "on_redefinitions.function_redefinition_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000903, VkglTestCase_000903_1, VkglTestCase_000903_2);

#define VkglTestCase_000904_1 "dEQP-GLES3.functional.shaders.preprocessor.function_red"
#define VkglTestCase_000904_2 "efinitions.invalid_function_redefinition_param_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000904, VkglTestCase_000904_1, VkglTestCase_000904_2);

#define VkglTestCase_000905_1 "dEQP-GLES3.functional.shaders.preprocessor.function_rede"
#define VkglTestCase_000905_2 "finitions.invalid_function_redefinition_param_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000905, VkglTestCase_000905_1, VkglTestCase_000905_2);

#define VkglTestCase_000906_1 "dEQP-GLES3.functional.shaders.preprocessor.function_red"
#define VkglTestCase_000906_2 "efinitions.invalid_function_redefinition_param_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000906, VkglTestCase_000906_1, VkglTestCase_000906_2);

#define VkglTestCase_000907_1 "dEQP-GLES3.functional.shaders.preprocessor.function_rede"
#define VkglTestCase_000907_2 "finitions.invalid_function_redefinition_param_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000907, VkglTestCase_000907_1, VkglTestCase_000907_2);

#define VkglTestCase_000908_1 "dEQP-GLES3.functional.shaders.preprocessor.function_red"
#define VkglTestCase_000908_2 "efinitions.invalid_function_redefinition_param_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000908, VkglTestCase_000908_1, VkglTestCase_000908_2);

#define VkglTestCase_000909_1 "dEQP-GLES3.functional.shaders.preprocessor.function_rede"
#define VkglTestCase_000909_2 "finitions.invalid_function_redefinition_param_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000909, VkglTestCase_000909_1, VkglTestCase_000909_2);
