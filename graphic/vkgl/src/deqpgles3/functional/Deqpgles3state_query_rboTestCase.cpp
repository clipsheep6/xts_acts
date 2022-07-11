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
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_043213_1 "dEQP-GLES3.functional.state"
#define VkglTestCase_043213_2 "_query.rbo.renderbuffer_size"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043213, VkglTestCase_043213_1, VkglTestCase_043213_2);

#define VkglTestCase_043214_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_043214_2 ".rbo.renderbuffer_internal_format"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043214, VkglTestCase_043214_1, VkglTestCase_043214_2);

#define VkglTestCase_043215_1 "dEQP-GLES3.functional.state_query.r"
#define VkglTestCase_043215_2 "bo.renderbuffer_component_size_color"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043215, VkglTestCase_043215_1, VkglTestCase_043215_2);

#define VkglTestCase_043216_1 "dEQP-GLES3.functional.state_query.r"
#define VkglTestCase_043216_2 "bo.renderbuffer_component_size_depth"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043216, VkglTestCase_043216_1, VkglTestCase_043216_2);

#define VkglTestCase_043217_1 "dEQP-GLES3.functional.state_q"
#define VkglTestCase_043217_2 "uery.rbo.renderbuffer_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043217, VkglTestCase_043217_1, VkglTestCase_043217_2);
