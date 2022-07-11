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

#define VkglTestCase_012125_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012125_2 "t_dec_branch.1_counter_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012125, VkglTestCase_012125_1, VkglTestCase_012125_2);

#define VkglTestCase_012126_1 "dEQP-GLES31.functional.atomic_counter.get"
#define VkglTestCase_012126_2 "_dec_branch.1_counter_1_call_5000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012126, VkglTestCase_012126_1, VkglTestCase_012126_2);

#define VkglTestCase_012127_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_012127_2 "et_dec_branch.1_counter_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012127, VkglTestCase_012127_1, VkglTestCase_012127_2);

#define VkglTestCase_012128_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012128_2 "t_dec_branch.1_counter_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012128, VkglTestCase_012128_1, VkglTestCase_012128_2);

#define VkglTestCase_012129_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012129_2 "t_dec_branch.1_counter_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012129, VkglTestCase_012129_1, VkglTestCase_012129_2);

#define VkglTestCase_012130_1 "dEQP-GLES31.functional.atomic_counter.get"
#define VkglTestCase_012130_2 "_dec_branch.1_counter_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012130, VkglTestCase_012130_1, VkglTestCase_012130_2);

#define VkglTestCase_012131_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012131_2 "t_dec_branch.4_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012131, VkglTestCase_012131_1, VkglTestCase_012131_2);

#define VkglTestCase_012132_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012132_2 "t_dec_branch.4_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012132, VkglTestCase_012132_1, VkglTestCase_012132_2);

#define VkglTestCase_012133_1 "dEQP-GLES31.functional.atomic_counter.get"
#define VkglTestCase_012133_2 "_dec_branch.4_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012133, VkglTestCase_012133_1, VkglTestCase_012133_2);

#define VkglTestCase_012134_1 "dEQP-GLES31.functional.atomic_counter.get"
#define VkglTestCase_012134_2 "_dec_branch.4_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012134, VkglTestCase_012134_1, VkglTestCase_012134_2);

#define VkglTestCase_012135_1 "dEQP-GLES31.functional.atomic_counter.get_"
#define VkglTestCase_012135_2 "dec_branch.4_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012135, VkglTestCase_012135_1, VkglTestCase_012135_2);

#define VkglTestCase_012136_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012136_2 "t_dec_branch.8_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012136, VkglTestCase_012136_1, VkglTestCase_012136_2);

#define VkglTestCase_012137_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012137_2 "t_dec_branch.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012137, VkglTestCase_012137_1, VkglTestCase_012137_2);

#define VkglTestCase_012138_1 "dEQP-GLES31.functional.atomic_counter.get"
#define VkglTestCase_012138_2 "_dec_branch.8_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012138, VkglTestCase_012138_1, VkglTestCase_012138_2);

#define VkglTestCase_012139_1 "dEQP-GLES31.functional.atomic_counter.get"
#define VkglTestCase_012139_2 "_dec_branch.8_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012139, VkglTestCase_012139_1, VkglTestCase_012139_2);

#define VkglTestCase_012140_1 "dEQP-GLES31.functional.atomic_counter.get_"
#define VkglTestCase_012140_2 "dec_branch.8_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012140, VkglTestCase_012140_1, VkglTestCase_012140_2);
