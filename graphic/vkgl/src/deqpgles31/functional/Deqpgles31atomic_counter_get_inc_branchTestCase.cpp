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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012090_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012090_2 "t_inc_branch.1_counter_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012090, VkglTestCase_012090_1, VkglTestCase_012090_2);

#define VkglTestCase_012091_1 "dEQP-GLES31.functional.atomic_counter.get"
#define VkglTestCase_012091_2 "_inc_branch.1_counter_1_call_5000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012091, VkglTestCase_012091_1, VkglTestCase_012091_2);

#define VkglTestCase_012092_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_012092_2 "et_inc_branch.1_counter_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012092, VkglTestCase_012092_1, VkglTestCase_012092_2);

#define VkglTestCase_012093_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012093_2 "t_inc_branch.1_counter_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012093, VkglTestCase_012093_1, VkglTestCase_012093_2);

#define VkglTestCase_012094_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012094_2 "t_inc_branch.1_counter_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012094, VkglTestCase_012094_1, VkglTestCase_012094_2);

#define VkglTestCase_012095_1 "dEQP-GLES31.functional.atomic_counter.get"
#define VkglTestCase_012095_2 "_inc_branch.1_counter_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012095, VkglTestCase_012095_1, VkglTestCase_012095_2);

#define VkglTestCase_012096_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012096_2 "t_inc_branch.4_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012096, VkglTestCase_012096_1, VkglTestCase_012096_2);

#define VkglTestCase_012097_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012097_2 "t_inc_branch.4_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012097, VkglTestCase_012097_1, VkglTestCase_012097_2);

#define VkglTestCase_012098_1 "dEQP-GLES31.functional.atomic_counter.get"
#define VkglTestCase_012098_2 "_inc_branch.4_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012098, VkglTestCase_012098_1, VkglTestCase_012098_2);

#define VkglTestCase_012099_1 "dEQP-GLES31.functional.atomic_counter.get"
#define VkglTestCase_012099_2 "_inc_branch.4_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012099, VkglTestCase_012099_1, VkglTestCase_012099_2);

#define VkglTestCase_012100_1 "dEQP-GLES31.functional.atomic_counter.get_"
#define VkglTestCase_012100_2 "inc_branch.4_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012100, VkglTestCase_012100_1, VkglTestCase_012100_2);

#define VkglTestCase_012101_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012101_2 "t_inc_branch.8_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012101, VkglTestCase_012101_1, VkglTestCase_012101_2);

#define VkglTestCase_012102_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012102_2 "t_inc_branch.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012102, VkglTestCase_012102_1, VkglTestCase_012102_2);

#define VkglTestCase_012103_1 "dEQP-GLES31.functional.atomic_counter.get"
#define VkglTestCase_012103_2 "_inc_branch.8_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012103, VkglTestCase_012103_1, VkglTestCase_012103_2);

#define VkglTestCase_012104_1 "dEQP-GLES31.functional.atomic_counter.get"
#define VkglTestCase_012104_2 "_inc_branch.8_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012104, VkglTestCase_012104_1, VkglTestCase_012104_2);

#define VkglTestCase_012105_1 "dEQP-GLES31.functional.atomic_counter.get_"
#define VkglTestCase_012105_2 "inc_branch.8_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012105, VkglTestCase_012105_1, VkglTestCase_012105_2);
