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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000968_1 "KHR-GLES3.shaders.preprocessor.function_defi"
#define VkglTestCase_000968_2 "nitions.same_object_and_function_param_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000968, VkglTestCase_000968_1, VkglTestCase_000968_2);

#define VkglTestCase_000969_1 "KHR-GLES3.shaders.preprocessor.function_defin"
#define VkglTestCase_000969_2 "itions.same_object_and_function_param_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000969, VkglTestCase_000969_1, VkglTestCase_000969_2);

#define VkglTestCase_000970_1 "KHR-GLES3.shaders.preprocessor.func"
#define VkglTestCase_000970_2 "tion_definitions.complex_func_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000970, VkglTestCase_000970_1, VkglTestCase_000970_2);

#define VkglTestCase_000971_1 "KHR-GLES3.shaders.preprocessor.funct"
#define VkglTestCase_000971_2 "ion_definitions.complex_func_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000971, VkglTestCase_000971_1, VkglTestCase_000971_2);

#define VkglTestCase_000972_1 "KHR-GLES3.shaders.preprocessor.function_defini"
#define VkglTestCase_000972_2 "tions.function_definition_with_comments_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000972, VkglTestCase_000972_1, VkglTestCase_000972_2);

#define VkglTestCase_000973_1 "KHR-GLES3.shaders.preprocessor.function_definit"
#define VkglTestCase_000973_2 "ions.function_definition_with_comments_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000973, VkglTestCase_000973_1, VkglTestCase_000973_2);
