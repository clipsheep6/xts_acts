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
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001282_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001282_2 "_expressions.invalid_unary_expr_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001282, VkglTestCase_001282_1, VkglTestCase_001282_2);

#define VkglTestCase_001283_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001283_2 "expressions.invalid_unary_expr_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001283, VkglTestCase_001283_1, VkglTestCase_001283_2);

#define VkglTestCase_001284_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001284_2 "_expressions.invalid_binary_expr_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001284, VkglTestCase_001284_1, VkglTestCase_001284_2);

#define VkglTestCase_001285_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001285_2 "expressions.invalid_binary_expr_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001285, VkglTestCase_001285_1, VkglTestCase_001285_2);

#define VkglTestCase_001286_1 "KHR-GLES3.shaders.preprocessor.inva"
#define VkglTestCase_001286_2 "lid_expressions.missing_expr_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001286, VkglTestCase_001286_1, VkglTestCase_001286_2);

#define VkglTestCase_001287_1 "KHR-GLES3.shaders.preprocessor.inval"
#define VkglTestCase_001287_2 "id_expressions.missing_expr_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001287, VkglTestCase_001287_1, VkglTestCase_001287_2);

#define VkglTestCase_001288_1 "KHR-GLES3.shaders.preprocessor.inval"
#define VkglTestCase_001288_2 "id_expressions.invalid_expr_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001288, VkglTestCase_001288_1, VkglTestCase_001288_2);

#define VkglTestCase_001289_1 "KHR-GLES3.shaders.preprocessor.invali"
#define VkglTestCase_001289_2 "d_expressions.invalid_expr_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001289, VkglTestCase_001289_1, VkglTestCase_001289_2);

#define VkglTestCase_001290_1 "KHR-GLES3.shaders.preprocessor.inval"
#define VkglTestCase_001290_2 "id_expressions.invalid_expr_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001290, VkglTestCase_001290_1, VkglTestCase_001290_2);

#define VkglTestCase_001291_1 "KHR-GLES3.shaders.preprocessor.invali"
#define VkglTestCase_001291_2 "d_expressions.invalid_expr_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001291, VkglTestCase_001291_1, VkglTestCase_001291_2);

#define VkglTestCase_001292_1 "KHR-GLES3.shaders.preprocessor.inval"
#define VkglTestCase_001292_2 "id_expressions.invalid_expr_3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001292, VkglTestCase_001292_1, VkglTestCase_001292_2);

#define VkglTestCase_001293_1 "KHR-GLES3.shaders.preprocessor.invali"
#define VkglTestCase_001293_2 "d_expressions.invalid_expr_3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001293, VkglTestCase_001293_1, VkglTestCase_001293_2);

#define VkglTestCase_001294_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001294_2 "expressions.unopened_parenthesis_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001294, VkglTestCase_001294_1, VkglTestCase_001294_2);

#define VkglTestCase_001295_1 "KHR-GLES3.shaders.preprocessor.invalid_e"
#define VkglTestCase_001295_2 "xpressions.unopened_parenthesis_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001295, VkglTestCase_001295_1, VkglTestCase_001295_2);

#define VkglTestCase_001296_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001296_2 "expressions.unclosed_parenthesis_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001296, VkglTestCase_001296_1, VkglTestCase_001296_2);

#define VkglTestCase_001297_1 "KHR-GLES3.shaders.preprocessor.invalid_e"
#define VkglTestCase_001297_2 "xpressions.unclosed_parenthesis_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001297, VkglTestCase_001297_1, VkglTestCase_001297_2);
