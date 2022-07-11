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

#define VkglTestCase_043025_1 "dEQP-GLES3.functional.state_query.ind"
#define VkglTestCase_043025_2 "exed.transform_feedback_buffer_binding"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043025, VkglTestCase_043025_1, VkglTestCase_043025_2);

#define VkglTestCase_043026_1 "dEQP-GLES3.functional.state_query.index"
#define VkglTestCase_043026_2 "ed.transform_feedback_buffer_start_size"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043026, VkglTestCase_043026_1, VkglTestCase_043026_2);

#define VkglTestCase_043027_1 "dEQP-GLES3.functional.state_query.inde"
#define VkglTestCase_043027_2 "xed.transform_feedback_switching_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043027, VkglTestCase_043027_1, VkglTestCase_043027_2);

#define VkglTestCase_043028_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043028_2 "y.indexed.uniform_buffer_binding"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043028, VkglTestCase_043028_1, VkglTestCase_043028_2);

#define VkglTestCase_043029_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_043029_2 ".indexed.uniform_buffer_start_size"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043029, VkglTestCase_043029_1, VkglTestCase_043029_2);
