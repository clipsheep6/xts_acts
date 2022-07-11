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

#define VkglTestCase_012055_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012055_2 "dec_branch.1_counter_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012055, VkglTestCase_012055_1, VkglTestCase_012055_2);

#define VkglTestCase_012056_1 "dEQP-GLES31.functional.atomic_counter.d"
#define VkglTestCase_012056_2 "ec_branch.1_counter_1_call_5000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012056, VkglTestCase_012056_1, VkglTestCase_012056_2);

#define VkglTestCase_012057_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012057_2 ".dec_branch.1_counter_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012057, VkglTestCase_012057_1, VkglTestCase_012057_2);

#define VkglTestCase_012058_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012058_2 "dec_branch.1_counter_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012058, VkglTestCase_012058_1, VkglTestCase_012058_2);

#define VkglTestCase_012059_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012059_2 "dec_branch.1_counter_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012059, VkglTestCase_012059_1, VkglTestCase_012059_2);

#define VkglTestCase_012060_1 "dEQP-GLES31.functional.atomic_counter.d"
#define VkglTestCase_012060_2 "ec_branch.1_counter_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012060, VkglTestCase_012060_1, VkglTestCase_012060_2);

#define VkglTestCase_012061_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012061_2 "dec_branch.4_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012061, VkglTestCase_012061_1, VkglTestCase_012061_2);

#define VkglTestCase_012062_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012062_2 "dec_branch.4_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012062, VkglTestCase_012062_1, VkglTestCase_012062_2);

#define VkglTestCase_012063_1 "dEQP-GLES31.functional.atomic_counter.d"
#define VkglTestCase_012063_2 "ec_branch.4_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012063, VkglTestCase_012063_1, VkglTestCase_012063_2);

#define VkglTestCase_012064_1 "dEQP-GLES31.functional.atomic_counter.d"
#define VkglTestCase_012064_2 "ec_branch.4_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012064, VkglTestCase_012064_1, VkglTestCase_012064_2);

#define VkglTestCase_012065_1 "dEQP-GLES31.functional.atomic_counter.de"
#define VkglTestCase_012065_2 "c_branch.4_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012065, VkglTestCase_012065_1, VkglTestCase_012065_2);

#define VkglTestCase_012066_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012066_2 "dec_branch.8_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012066, VkglTestCase_012066_1, VkglTestCase_012066_2);

#define VkglTestCase_012067_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012067_2 "dec_branch.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012067, VkglTestCase_012067_1, VkglTestCase_012067_2);

#define VkglTestCase_012068_1 "dEQP-GLES31.functional.atomic_counter.d"
#define VkglTestCase_012068_2 "ec_branch.8_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012068, VkglTestCase_012068_1, VkglTestCase_012068_2);

#define VkglTestCase_012069_1 "dEQP-GLES31.functional.atomic_counter.d"
#define VkglTestCase_012069_2 "ec_branch.8_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012069, VkglTestCase_012069_1, VkglTestCase_012069_2);

#define VkglTestCase_012070_1 "dEQP-GLES31.functional.atomic_counter.de"
#define VkglTestCase_012070_2 "c_branch.8_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012070, VkglTestCase_012070_1, VkglTestCase_012070_2);
