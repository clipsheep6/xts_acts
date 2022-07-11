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

#define VkglTestCase_007870_1 "dEQP-GLES2.functional.shaders.const"
#define VkglTestCase_007870_2 "ant_expressions.trivial.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007870, VkglTestCase_007870_1, VkglTestCase_007870_2);

#define VkglTestCase_007871_1 "dEQP-GLES2.functional.shaders.consta"
#define VkglTestCase_007871_2 "nt_expressions.trivial.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007871, VkglTestCase_007871_1, VkglTestCase_007871_2);

#define VkglTestCase_007872_1 "dEQP-GLES2.functional.shaders.cons"
#define VkglTestCase_007872_2 "tant_expressions.trivial.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007872, VkglTestCase_007872_1, VkglTestCase_007872_2);

#define VkglTestCase_007873_1 "dEQP-GLES2.functional.shaders.const"
#define VkglTestCase_007873_2 "ant_expressions.trivial.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007873, VkglTestCase_007873_1, VkglTestCase_007873_2);

#define VkglTestCase_007874_1 "dEQP-GLES2.functional.shaders.const"
#define VkglTestCase_007874_2 "ant_expressions.trivial.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007874, VkglTestCase_007874_1, VkglTestCase_007874_2);

#define VkglTestCase_007875_1 "dEQP-GLES2.functional.shaders.consta"
#define VkglTestCase_007875_2 "nt_expressions.trivial.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007875, VkglTestCase_007875_1, VkglTestCase_007875_2);

#define VkglTestCase_007876_1 "dEQP-GLES2.functional.shaders.const"
#define VkglTestCase_007876_2 "ant_expressions.trivial.cast_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007876, VkglTestCase_007876_1, VkglTestCase_007876_2);

#define VkglTestCase_007877_1 "dEQP-GLES2.functional.shaders.consta"
#define VkglTestCase_007877_2 "nt_expressions.trivial.cast_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007877, VkglTestCase_007877_1, VkglTestCase_007877_2);
