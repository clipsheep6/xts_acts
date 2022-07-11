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

#define VkglTestCase_002089_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002089_2 "ns.declarations.void_vs_no_void_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002089, VkglTestCase_002089_1, VkglTestCase_002089_2);

#define VkglTestCase_002090_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002090_2 "s.declarations.void_vs_no_void_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002090, VkglTestCase_002090_1, VkglTestCase_002090_2);

#define VkglTestCase_002091_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002091_2 "ions.declarations.in_vs_no_in_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002091, VkglTestCase_002091_1, VkglTestCase_002091_2);

#define VkglTestCase_002092_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002092_2 "ons.declarations.in_vs_no_in_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002092, VkglTestCase_002092_1, VkglTestCase_002092_2);

#define VkglTestCase_002093_1 "dEQP-GLES2.functional.shaders.functions.decl"
#define VkglTestCase_002093_2 "arations.default_vs_explicit_precision_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002093, VkglTestCase_002093_1, VkglTestCase_002093_2);

#define VkglTestCase_002094_1 "dEQP-GLES2.functional.shaders.functions.decla"
#define VkglTestCase_002094_2 "rations.default_vs_explicit_precision_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002094, VkglTestCase_002094_1, VkglTestCase_002094_2);
