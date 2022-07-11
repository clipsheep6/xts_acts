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

#define VkglTestCase_002159_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002159_2 "ctions.misc.multi_arg_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002159, VkglTestCase_002159_1, VkglTestCase_002159_2);

#define VkglTestCase_002160_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002160_2 "tions.misc.multi_arg_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002160, VkglTestCase_002160_1, VkglTestCase_002160_2);

#define VkglTestCase_002161_1 "dEQP-GLES2.functional.shaders.fu"
#define VkglTestCase_002161_2 "nctions.misc.multi_arg_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002161, VkglTestCase_002161_1, VkglTestCase_002161_2);

#define VkglTestCase_002162_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002162_2 "ctions.misc.multi_arg_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002162, VkglTestCase_002162_1, VkglTestCase_002162_2);

#define VkglTestCase_002163_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002163_2 "ons.misc.argument_eval_order_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002163, VkglTestCase_002163_1, VkglTestCase_002163_2);

#define VkglTestCase_002164_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002164_2 "ns.misc.argument_eval_order_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002164, VkglTestCase_002164_1, VkglTestCase_002164_2);

#define VkglTestCase_002165_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002165_2 "ons.misc.argument_eval_order_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002165, VkglTestCase_002165_1, VkglTestCase_002165_2);

#define VkglTestCase_002166_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002166_2 "ns.misc.argument_eval_order_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002166, VkglTestCase_002166_1, VkglTestCase_002166_2);

#define VkglTestCase_002167_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002167_2 "ctions.misc.missing_returns_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002167, VkglTestCase_002167_1, VkglTestCase_002167_2);

#define VkglTestCase_002168_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002168_2 "tions.misc.missing_returns_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002168, VkglTestCase_002168_1, VkglTestCase_002168_2);
