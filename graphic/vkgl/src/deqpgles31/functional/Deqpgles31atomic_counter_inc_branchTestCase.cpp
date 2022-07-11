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

#define VkglTestCase_012020_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012020_2 "inc_branch.1_counter_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012020, VkglTestCase_012020_1, VkglTestCase_012020_2);

#define VkglTestCase_012021_1 "dEQP-GLES31.functional.atomic_counter.i"
#define VkglTestCase_012021_2 "nc_branch.1_counter_1_call_5000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012021, VkglTestCase_012021_1, VkglTestCase_012021_2);

#define VkglTestCase_012022_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012022_2 ".inc_branch.1_counter_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012022, VkglTestCase_012022_1, VkglTestCase_012022_2);

#define VkglTestCase_012023_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012023_2 "inc_branch.1_counter_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012023, VkglTestCase_012023_1, VkglTestCase_012023_2);

#define VkglTestCase_012024_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012024_2 "inc_branch.1_counter_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012024, VkglTestCase_012024_1, VkglTestCase_012024_2);

#define VkglTestCase_012025_1 "dEQP-GLES31.functional.atomic_counter.i"
#define VkglTestCase_012025_2 "nc_branch.1_counter_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012025, VkglTestCase_012025_1, VkglTestCase_012025_2);

#define VkglTestCase_012026_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012026_2 "inc_branch.4_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012026, VkglTestCase_012026_1, VkglTestCase_012026_2);

#define VkglTestCase_012027_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012027_2 "inc_branch.4_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012027, VkglTestCase_012027_1, VkglTestCase_012027_2);

#define VkglTestCase_012028_1 "dEQP-GLES31.functional.atomic_counter.i"
#define VkglTestCase_012028_2 "nc_branch.4_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012028, VkglTestCase_012028_1, VkglTestCase_012028_2);

#define VkglTestCase_012029_1 "dEQP-GLES31.functional.atomic_counter.i"
#define VkglTestCase_012029_2 "nc_branch.4_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012029, VkglTestCase_012029_1, VkglTestCase_012029_2);

#define VkglTestCase_012030_1 "dEQP-GLES31.functional.atomic_counter.in"
#define VkglTestCase_012030_2 "c_branch.4_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012030, VkglTestCase_012030_1, VkglTestCase_012030_2);

#define VkglTestCase_012031_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012031_2 "inc_branch.8_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012031, VkglTestCase_012031_1, VkglTestCase_012031_2);

#define VkglTestCase_012032_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012032_2 "inc_branch.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012032, VkglTestCase_012032_1, VkglTestCase_012032_2);

#define VkglTestCase_012033_1 "dEQP-GLES31.functional.atomic_counter.i"
#define VkglTestCase_012033_2 "nc_branch.8_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012033, VkglTestCase_012033_1, VkglTestCase_012033_2);

#define VkglTestCase_012034_1 "dEQP-GLES31.functional.atomic_counter.i"
#define VkglTestCase_012034_2 "nc_branch.8_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012034, VkglTestCase_012034_1, VkglTestCase_012034_2);

#define VkglTestCase_012035_1 "dEQP-GLES31.functional.atomic_counter.in"
#define VkglTestCase_012035_2 "c_branch.8_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012035, VkglTestCase_012035_1, VkglTestCase_012035_2);
