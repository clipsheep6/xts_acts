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
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004169_1 "dEQP-GLES3.functional.shaders.functions.ov"
#define VkglTestCase_004169_2 "erloading.user_func_arg_type_simple_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004169, VkglTestCase_004169_1, VkglTestCase_004169_2);

#define VkglTestCase_004170_1 "dEQP-GLES3.functional.shaders.functions.ove"
#define VkglTestCase_004170_2 "rloading.user_func_arg_type_simple_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004170, VkglTestCase_004170_1, VkglTestCase_004170_2);

#define VkglTestCase_004171_1 "dEQP-GLES3.functional.shaders.functions.ov"
#define VkglTestCase_004171_2 "erloading.user_func_arg_float_types_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004171, VkglTestCase_004171_1, VkglTestCase_004171_2);

#define VkglTestCase_004172_1 "dEQP-GLES3.functional.shaders.functions.ove"
#define VkglTestCase_004172_2 "rloading.user_func_arg_float_types_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004172, VkglTestCase_004172_1, VkglTestCase_004172_2);

#define VkglTestCase_004173_1 "dEQP-GLES3.functional.shaders.functions.o"
#define VkglTestCase_004173_2 "verloading.user_func_arg_int_types_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004173, VkglTestCase_004173_1, VkglTestCase_004173_2);

#define VkglTestCase_004174_1 "dEQP-GLES3.functional.shaders.functions.ov"
#define VkglTestCase_004174_2 "erloading.user_func_arg_int_types_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004174, VkglTestCase_004174_1, VkglTestCase_004174_2);

#define VkglTestCase_004175_1 "dEQP-GLES3.functional.shaders.functions.o"
#define VkglTestCase_004175_2 "verloading.user_func_arg_bool_types_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004175, VkglTestCase_004175_1, VkglTestCase_004175_2);

#define VkglTestCase_004176_1 "dEQP-GLES3.functional.shaders.functions.ov"
#define VkglTestCase_004176_2 "erloading.user_func_arg_bool_types_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004176, VkglTestCase_004176_1, VkglTestCase_004176_2);

#define VkglTestCase_004177_1 "dEQP-GLES3.functional.shaders.functions.ov"
#define VkglTestCase_004177_2 "erloading.user_func_arg_basic_types_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004177, VkglTestCase_004177_1, VkglTestCase_004177_2);

#define VkglTestCase_004178_1 "dEQP-GLES3.functional.shaders.functions.ove"
#define VkglTestCase_004178_2 "rloading.user_func_arg_basic_types_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004178, VkglTestCase_004178_1, VkglTestCase_004178_2);

#define VkglTestCase_004179_1 "dEQP-GLES3.functional.shaders.functions.ove"
#define VkglTestCase_004179_2 "rloading.user_func_arg_complex_types_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004179, VkglTestCase_004179_1, VkglTestCase_004179_2);

#define VkglTestCase_004180_1 "dEQP-GLES3.functional.shaders.functions.over"
#define VkglTestCase_004180_2 "loading.user_func_arg_complex_types_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004180, VkglTestCase_004180_1, VkglTestCase_004180_2);

#define VkglTestCase_004181_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004181_2 ".overloading.user_func_arguments_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004181, VkglTestCase_004181_1, VkglTestCase_004181_2);

#define VkglTestCase_004182_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004182_2 "overloading.user_func_arguments_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004182, VkglTestCase_004182_1, VkglTestCase_004182_2);

#define VkglTestCase_004183_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004183_2 "tions.overloading.array_size_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004183, VkglTestCase_004183_1, VkglTestCase_004183_2);

#define VkglTestCase_004184_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004184_2 "ions.overloading.array_size_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004184, VkglTestCase_004184_1, VkglTestCase_004184_2);
