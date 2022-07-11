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

#define VkglTestCase_012071_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012071_2 "er.get_inc.1_counter_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012071, VkglTestCase_012071_1, VkglTestCase_012071_2);

#define VkglTestCase_012072_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012072_2 "r.get_inc.1_counter_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012072, VkglTestCase_012072_1, VkglTestCase_012072_2);

#define VkglTestCase_012073_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012073_2 ".get_inc.1_counter_1_call_5000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012073, VkglTestCase_012073_1, VkglTestCase_012073_2);

#define VkglTestCase_012074_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012074_2 "r.get_inc.1_counter_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012074, VkglTestCase_012074_1, VkglTestCase_012074_2);

#define VkglTestCase_012075_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012075_2 ".get_inc.1_counter_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012075, VkglTestCase_012075_1, VkglTestCase_012075_2);

#define VkglTestCase_012076_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012076_2 ".get_inc.1_counter_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012076, VkglTestCase_012076_1, VkglTestCase_012076_2);

#define VkglTestCase_012077_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012077_2 "get_inc.1_counter_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012077, VkglTestCase_012077_1, VkglTestCase_012077_2);

#define VkglTestCase_012078_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012078_2 "r.get_inc.4_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012078, VkglTestCase_012078_1, VkglTestCase_012078_2);

#define VkglTestCase_012079_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012079_2 ".get_inc.4_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012079, VkglTestCase_012079_1, VkglTestCase_012079_2);

#define VkglTestCase_012080_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012080_2 "r.get_inc.4_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012080, VkglTestCase_012080_1, VkglTestCase_012080_2);

#define VkglTestCase_012081_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012081_2 ".get_inc.4_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012081, VkglTestCase_012081_1, VkglTestCase_012081_2);

#define VkglTestCase_012082_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012082_2 ".get_inc.4_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012082, VkglTestCase_012082_1, VkglTestCase_012082_2);

#define VkglTestCase_012083_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012083_2 "get_inc.4_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012083, VkglTestCase_012083_1, VkglTestCase_012083_2);

#define VkglTestCase_012084_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012084_2 "r.get_inc.8_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012084, VkglTestCase_012084_1, VkglTestCase_012084_2);

#define VkglTestCase_012085_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012085_2 ".get_inc.8_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012085, VkglTestCase_012085_1, VkglTestCase_012085_2);

#define VkglTestCase_012086_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012086_2 "r.get_inc.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012086, VkglTestCase_012086_1, VkglTestCase_012086_2);

#define VkglTestCase_012087_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012087_2 ".get_inc.8_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012087, VkglTestCase_012087_1, VkglTestCase_012087_2);

#define VkglTestCase_012088_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012088_2 ".get_inc.8_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012088, VkglTestCase_012088_1, VkglTestCase_012088_2);

#define VkglTestCase_012089_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012089_2 "get_inc.8_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012089, VkglTestCase_012089_1, VkglTestCase_012089_2);
