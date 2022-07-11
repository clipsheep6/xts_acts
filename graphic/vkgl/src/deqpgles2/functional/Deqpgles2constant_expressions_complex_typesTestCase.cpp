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
#include "../ActsDeqpgles20008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007894_1 "dEQP-GLES2.functional.shaders.constant_"
#define VkglTestCase_007894_2 "expressions.complex_types.struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007894, VkglTestCase_007894_1, VkglTestCase_007894_2);

#define VkglTestCase_007895_1 "dEQP-GLES2.functional.shaders.constant_e"
#define VkglTestCase_007895_2 "xpressions.complex_types.struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007895, VkglTestCase_007895_1, VkglTestCase_007895_2);

#define VkglTestCase_007896_1 "dEQP-GLES2.functional.shaders.constant_exp"
#define VkglTestCase_007896_2 "ressions.complex_types.nested_struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007896, VkglTestCase_007896_1, VkglTestCase_007896_2);

#define VkglTestCase_007897_1 "dEQP-GLES2.functional.shaders.constant_expr"
#define VkglTestCase_007897_2 "essions.complex_types.nested_struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007897, VkglTestCase_007897_1, VkglTestCase_007897_2);

#define VkglTestCase_007898_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_007898_2 "_expressions.complex_types.array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007898, VkglTestCase_007898_1, VkglTestCase_007898_2);

#define VkglTestCase_007899_1 "dEQP-GLES2.functional.shaders.constant_"
#define VkglTestCase_007899_2 "expressions.complex_types.array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007899, VkglTestCase_007899_1, VkglTestCase_007899_2);

#define VkglTestCase_007900_1 "dEQP-GLES2.functional.shaders.constant_express"
#define VkglTestCase_007900_2 "ions.complex_types.nested_builtin_funcs_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007900, VkglTestCase_007900_1, VkglTestCase_007900_2);

#define VkglTestCase_007901_1 "dEQP-GLES2.functional.shaders.constant_expressi"
#define VkglTestCase_007901_2 "ons.complex_types.nested_builtin_funcs_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007901, VkglTestCase_007901_1, VkglTestCase_007901_2);
