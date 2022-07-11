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

#define VkglTestCase_000447_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000447_2 "ocessor.builtin.line_and_file_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000447, VkglTestCase_000447_1, VkglTestCase_000447_2);

#define VkglTestCase_000448_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000448_2 "cessor.builtin.line_and_file_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000448, VkglTestCase_000448_1, VkglTestCase_000448_2);

#define VkglTestCase_000449_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000449_2 "cessor.builtin.line_defined_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000449, VkglTestCase_000449_1, VkglTestCase_000449_2);

#define VkglTestCase_000450_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000450_2 "essor.builtin.line_defined_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000450, VkglTestCase_000450_1, VkglTestCase_000450_2);

#define VkglTestCase_000451_1 "dEQP-GLES2.functional.shaders.prep"
#define VkglTestCase_000451_2 "rocessor.builtin.empty_line_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000451, VkglTestCase_000451_1, VkglTestCase_000451_2);

#define VkglTestCase_000452_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000452_2 "ocessor.builtin.empty_line_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000452, VkglTestCase_000452_1, VkglTestCase_000452_2);

#define VkglTestCase_000453_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000453_2 "ssor.builtin.invalid_line_file_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000453, VkglTestCase_000453_1, VkglTestCase_000453_2);

#define VkglTestCase_000454_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000454_2 "sor.builtin.invalid_line_file_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000454, VkglTestCase_000454_1, VkglTestCase_000454_2);

#define VkglTestCase_000455_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000455_2 "ssor.builtin.invalid_line_file_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000455, VkglTestCase_000455_1, VkglTestCase_000455_2);

#define VkglTestCase_000456_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000456_2 "sor.builtin.invalid_line_file_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000456, VkglTestCase_000456_1, VkglTestCase_000456_2);

#define VkglTestCase_000457_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000457_2 "ssor.builtin.invalid_line_file_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000457, VkglTestCase_000457_1, VkglTestCase_000457_2);

#define VkglTestCase_000458_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000458_2 "sor.builtin.invalid_line_file_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000458, VkglTestCase_000458_1, VkglTestCase_000458_2);
