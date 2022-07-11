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

#define VkglTestCase_007878_1 "dEQP-GLES2.functional.shaders.constant_"
#define VkglTestCase_007878_2 "expressions.operators.math_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007878, VkglTestCase_007878_1, VkglTestCase_007878_2);

#define VkglTestCase_007879_1 "dEQP-GLES2.functional.shaders.constant_e"
#define VkglTestCase_007879_2 "xpressions.operators.math_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007879, VkglTestCase_007879_1, VkglTestCase_007879_2);

#define VkglTestCase_007880_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_007880_2 "_expressions.operators.math_vec_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007880, VkglTestCase_007880_1, VkglTestCase_007880_2);

#define VkglTestCase_007881_1 "dEQP-GLES2.functional.shaders.constant_"
#define VkglTestCase_007881_2 "expressions.operators.math_vec_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007881, VkglTestCase_007881_1, VkglTestCase_007881_2);

#define VkglTestCase_007882_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_007882_2 "_expressions.operators.math_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007882, VkglTestCase_007882_1, VkglTestCase_007882_2);

#define VkglTestCase_007883_1 "dEQP-GLES2.functional.shaders.constant_"
#define VkglTestCase_007883_2 "expressions.operators.math_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007883, VkglTestCase_007883_1, VkglTestCase_007883_2);

#define VkglTestCase_007884_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_007884_2 "_expressions.operators.math_ivec_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007884, VkglTestCase_007884_1, VkglTestCase_007884_2);

#define VkglTestCase_007885_1 "dEQP-GLES2.functional.shaders.constant_"
#define VkglTestCase_007885_2 "expressions.operators.math_ivec_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007885, VkglTestCase_007885_1, VkglTestCase_007885_2);

#define VkglTestCase_007886_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_007886_2 "_expressions.operators.math_mat_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007886, VkglTestCase_007886_1, VkglTestCase_007886_2);

#define VkglTestCase_007887_1 "dEQP-GLES2.functional.shaders.constant_"
#define VkglTestCase_007887_2 "expressions.operators.math_mat_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007887, VkglTestCase_007887_1, VkglTestCase_007887_2);

#define VkglTestCase_007888_1 "dEQP-GLES2.functional.shaders.constan"
#define VkglTestCase_007888_2 "t_expressions.operators.logical_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007888, VkglTestCase_007888_1, VkglTestCase_007888_2);

#define VkglTestCase_007889_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_007889_2 "_expressions.operators.logical_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007889, VkglTestCase_007889_1, VkglTestCase_007889_2);

#define VkglTestCase_007890_1 "dEQP-GLES2.functional.shaders.constan"
#define VkglTestCase_007890_2 "t_expressions.operators.compare_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007890, VkglTestCase_007890_1, VkglTestCase_007890_2);

#define VkglTestCase_007891_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_007891_2 "_expressions.operators.compare_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007891, VkglTestCase_007891_1, VkglTestCase_007891_2);

#define VkglTestCase_007892_1 "dEQP-GLES2.functional.shaders.constant"
#define VkglTestCase_007892_2 "_expressions.operators.selection_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007892, VkglTestCase_007892_1, VkglTestCase_007892_2);

#define VkglTestCase_007893_1 "dEQP-GLES2.functional.shaders.constant_"
#define VkglTestCase_007893_2 "expressions.operators.selection_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007893, VkglTestCase_007893_1, VkglTestCase_007893_2);
