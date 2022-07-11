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

#define VkglTestCase_012176_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012176_2 ".get_inc_dec.1_counter_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012176, VkglTestCase_012176_1, VkglTestCase_012176_2);

#define VkglTestCase_012177_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012177_2 "get_inc_dec.1_counter_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012177, VkglTestCase_012177_1, VkglTestCase_012177_2);

#define VkglTestCase_012178_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_012178_2 "et_inc_dec.1_counter_1_call_5000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012178, VkglTestCase_012178_1, VkglTestCase_012178_2);

#define VkglTestCase_012179_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012179_2 "get_inc_dec.1_counter_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012179, VkglTestCase_012179_1, VkglTestCase_012179_2);

#define VkglTestCase_012180_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_012180_2 "et_inc_dec.1_counter_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012180, VkglTestCase_012180_1, VkglTestCase_012180_2);

#define VkglTestCase_012181_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_012181_2 "et_inc_dec.1_counter_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012181, VkglTestCase_012181_1, VkglTestCase_012181_2);

#define VkglTestCase_012182_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012182_2 "t_inc_dec.1_counter_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012182, VkglTestCase_012182_1, VkglTestCase_012182_2);

#define VkglTestCase_012183_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012183_2 "get_inc_dec.4_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012183, VkglTestCase_012183_1, VkglTestCase_012183_2);

#define VkglTestCase_012184_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_012184_2 "et_inc_dec.4_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012184, VkglTestCase_012184_1, VkglTestCase_012184_2);

#define VkglTestCase_012185_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012185_2 "get_inc_dec.4_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012185, VkglTestCase_012185_1, VkglTestCase_012185_2);

#define VkglTestCase_012186_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_012186_2 "et_inc_dec.4_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012186, VkglTestCase_012186_1, VkglTestCase_012186_2);

#define VkglTestCase_012187_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_012187_2 "et_inc_dec.4_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012187, VkglTestCase_012187_1, VkglTestCase_012187_2);

#define VkglTestCase_012188_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012188_2 "t_inc_dec.4_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012188, VkglTestCase_012188_1, VkglTestCase_012188_2);

#define VkglTestCase_012189_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012189_2 "get_inc_dec.8_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012189, VkglTestCase_012189_1, VkglTestCase_012189_2);

#define VkglTestCase_012190_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_012190_2 "et_inc_dec.8_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012190, VkglTestCase_012190_1, VkglTestCase_012190_2);

#define VkglTestCase_012191_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012191_2 "get_inc_dec.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012191, VkglTestCase_012191_1, VkglTestCase_012191_2);

#define VkglTestCase_012192_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_012192_2 "et_inc_dec.8_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012192, VkglTestCase_012192_1, VkglTestCase_012192_2);

#define VkglTestCase_012193_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_012193_2 "et_inc_dec.8_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012193, VkglTestCase_012193_1, VkglTestCase_012193_2);

#define VkglTestCase_012194_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012194_2 "t_inc_dec.8_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012194, VkglTestCase_012194_1, VkglTestCase_012194_2);
