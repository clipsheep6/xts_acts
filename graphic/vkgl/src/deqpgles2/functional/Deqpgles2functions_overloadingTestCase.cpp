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
#include "../ActsDeqpgles20003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002095_1 "dEQP-GLES2.functional.shaders.functions.ov"
#define VkglTestCase_002095_2 "erloading.user_func_arg_type_simple_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002095, VkglTestCase_002095_1, VkglTestCase_002095_2);

#define VkglTestCase_002096_1 "dEQP-GLES2.functional.shaders.functions.ove"
#define VkglTestCase_002096_2 "rloading.user_func_arg_type_simple_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002096, VkglTestCase_002096_1, VkglTestCase_002096_2);

#define VkglTestCase_002097_1 "dEQP-GLES2.functional.shaders.functions.ov"
#define VkglTestCase_002097_2 "erloading.user_func_arg_float_types_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002097, VkglTestCase_002097_1, VkglTestCase_002097_2);

#define VkglTestCase_002098_1 "dEQP-GLES2.functional.shaders.functions.ove"
#define VkglTestCase_002098_2 "rloading.user_func_arg_float_types_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002098, VkglTestCase_002098_1, VkglTestCase_002098_2);

#define VkglTestCase_002099_1 "dEQP-GLES2.functional.shaders.functions.o"
#define VkglTestCase_002099_2 "verloading.user_func_arg_int_types_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002099, VkglTestCase_002099_1, VkglTestCase_002099_2);

#define VkglTestCase_002100_1 "dEQP-GLES2.functional.shaders.functions.ov"
#define VkglTestCase_002100_2 "erloading.user_func_arg_int_types_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002100, VkglTestCase_002100_1, VkglTestCase_002100_2);

#define VkglTestCase_002101_1 "dEQP-GLES2.functional.shaders.functions.o"
#define VkglTestCase_002101_2 "verloading.user_func_arg_bool_types_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002101, VkglTestCase_002101_1, VkglTestCase_002101_2);

#define VkglTestCase_002102_1 "dEQP-GLES2.functional.shaders.functions.ov"
#define VkglTestCase_002102_2 "erloading.user_func_arg_bool_types_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002102, VkglTestCase_002102_1, VkglTestCase_002102_2);

#define VkglTestCase_002103_1 "dEQP-GLES2.functional.shaders.functions.ov"
#define VkglTestCase_002103_2 "erloading.user_func_arg_basic_types_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002103, VkglTestCase_002103_1, VkglTestCase_002103_2);

#define VkglTestCase_002104_1 "dEQP-GLES2.functional.shaders.functions.ove"
#define VkglTestCase_002104_2 "rloading.user_func_arg_basic_types_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002104, VkglTestCase_002104_1, VkglTestCase_002104_2);

#define VkglTestCase_002105_1 "dEQP-GLES2.functional.shaders.functions.ove"
#define VkglTestCase_002105_2 "rloading.user_func_arg_complex_types_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002105, VkglTestCase_002105_1, VkglTestCase_002105_2);

#define VkglTestCase_002106_1 "dEQP-GLES2.functional.shaders.functions.over"
#define VkglTestCase_002106_2 "loading.user_func_arg_complex_types_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002106, VkglTestCase_002106_1, VkglTestCase_002106_2);

#define VkglTestCase_002107_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002107_2 ".overloading.user_func_arguments_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002107, VkglTestCase_002107_1, VkglTestCase_002107_2);

#define VkglTestCase_002108_1 "dEQP-GLES2.functional.shaders.functions."
#define VkglTestCase_002108_2 "overloading.user_func_arguments_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002108, VkglTestCase_002108_1, VkglTestCase_002108_2);

#define VkglTestCase_002109_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002109_2 "ions.overloading.builtin_sin_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002109, VkglTestCase_002109_1, VkglTestCase_002109_2);

#define VkglTestCase_002110_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002110_2 "ons.overloading.builtin_sin_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002110, VkglTestCase_002110_1, VkglTestCase_002110_2);

#define VkglTestCase_002111_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002111_2 "ions.overloading.builtin_step_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002111, VkglTestCase_002111_1, VkglTestCase_002111_2);

#define VkglTestCase_002112_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002112_2 "ons.overloading.builtin_step_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002112, VkglTestCase_002112_1, VkglTestCase_002112_2);

#define VkglTestCase_002113_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002113_2 "tions.overloading.array_size_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002113, VkglTestCase_002113_1, VkglTestCase_002113_2);

#define VkglTestCase_002114_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002114_2 "ions.overloading.array_size_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002114, VkglTestCase_002114_1, VkglTestCase_002114_2);
