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

#define VkglTestCase_000287_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000287_2 "sor.conditional_inclusion.basic_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000287, VkglTestCase_000287_1, VkglTestCase_000287_2);

#define VkglTestCase_000288_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000288_2 "or.conditional_inclusion.basic_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000288, VkglTestCase_000288_1, VkglTestCase_000288_2);

#define VkglTestCase_000289_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000289_2 "sor.conditional_inclusion.basic_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000289, VkglTestCase_000289_1, VkglTestCase_000289_2);

#define VkglTestCase_000290_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000290_2 "or.conditional_inclusion.basic_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000290, VkglTestCase_000290_1, VkglTestCase_000290_2);

#define VkglTestCase_000291_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000291_2 "sor.conditional_inclusion.basic_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000291, VkglTestCase_000291_1, VkglTestCase_000291_2);

#define VkglTestCase_000292_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000292_2 "or.conditional_inclusion.basic_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000292, VkglTestCase_000292_1, VkglTestCase_000292_2);

#define VkglTestCase_000293_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000293_2 "sor.conditional_inclusion.basic_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000293, VkglTestCase_000293_1, VkglTestCase_000293_2);

#define VkglTestCase_000294_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000294_2 "or.conditional_inclusion.basic_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000294, VkglTestCase_000294_1, VkglTestCase_000294_2);

#define VkglTestCase_000295_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000295_2 "sor.conditional_inclusion.basic_5_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000295, VkglTestCase_000295_1, VkglTestCase_000295_2);

#define VkglTestCase_000296_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000296_2 "or.conditional_inclusion.basic_5_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000296, VkglTestCase_000296_1, VkglTestCase_000296_2);

#define VkglTestCase_000297_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000297_2 "r.conditional_inclusion.unary_ops_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000297, VkglTestCase_000297_1, VkglTestCase_000297_2);

#define VkglTestCase_000298_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000298_2 ".conditional_inclusion.unary_ops_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000298, VkglTestCase_000298_1, VkglTestCase_000298_2);

#define VkglTestCase_000299_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000299_2 "r.conditional_inclusion.unary_ops_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000299, VkglTestCase_000299_1, VkglTestCase_000299_2);

#define VkglTestCase_000300_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000300_2 ".conditional_inclusion.unary_ops_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000300, VkglTestCase_000300_1, VkglTestCase_000300_2);
