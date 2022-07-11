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
#include "../ActsDeqpgles30020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019648_1 "dEQP-GLES3.functional.shaders.const"
#define VkglTestCase_019648_2 "ant_expressions.trivial.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019648, VkglTestCase_019648_1, VkglTestCase_019648_2);

#define VkglTestCase_019649_1 "dEQP-GLES3.functional.shaders.consta"
#define VkglTestCase_019649_2 "nt_expressions.trivial.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019649, VkglTestCase_019649_1, VkglTestCase_019649_2);

#define VkglTestCase_019650_1 "dEQP-GLES3.functional.shaders.cons"
#define VkglTestCase_019650_2 "tant_expressions.trivial.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019650, VkglTestCase_019650_1, VkglTestCase_019650_2);

#define VkglTestCase_019651_1 "dEQP-GLES3.functional.shaders.const"
#define VkglTestCase_019651_2 "ant_expressions.trivial.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019651, VkglTestCase_019651_1, VkglTestCase_019651_2);

#define VkglTestCase_019652_1 "dEQP-GLES3.functional.shaders.const"
#define VkglTestCase_019652_2 "ant_expressions.trivial.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019652, VkglTestCase_019652_1, VkglTestCase_019652_2);

#define VkglTestCase_019653_1 "dEQP-GLES3.functional.shaders.consta"
#define VkglTestCase_019653_2 "nt_expressions.trivial.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019653, VkglTestCase_019653_1, VkglTestCase_019653_2);

#define VkglTestCase_019654_1 "dEQP-GLES3.functional.shaders.const"
#define VkglTestCase_019654_2 "ant_expressions.trivial.cast_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019654, VkglTestCase_019654_1, VkglTestCase_019654_2);

#define VkglTestCase_019655_1 "dEQP-GLES3.functional.shaders.consta"
#define VkglTestCase_019655_2 "nt_expressions.trivial.cast_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019655, VkglTestCase_019655_1, VkglTestCase_019655_2);
