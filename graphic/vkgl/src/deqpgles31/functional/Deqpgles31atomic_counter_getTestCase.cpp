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
#include "../ActsDeqpgles310012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011966_1 "dEQP-GLES31.functional.atomic_cou"
#define VkglTestCase_011966_2 "nter.get.1_counter_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011966, VkglTestCase_011966_1, VkglTestCase_011966_2);

#define VkglTestCase_011967_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_011967_2 "ter.get.1_counter_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011967, VkglTestCase_011967_1, VkglTestCase_011967_2);

#define VkglTestCase_011968_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_011968_2 "er.get.1_counter_1_call_5000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011968, VkglTestCase_011968_1, VkglTestCase_011968_2);

#define VkglTestCase_011969_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_011969_2 "ter.get.1_counter_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011969, VkglTestCase_011969_1, VkglTestCase_011969_2);

#define VkglTestCase_011970_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_011970_2 "er.get.1_counter_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011970, VkglTestCase_011970_1, VkglTestCase_011970_2);

#define VkglTestCase_011971_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_011971_2 "er.get.1_counter_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011971, VkglTestCase_011971_1, VkglTestCase_011971_2);

#define VkglTestCase_011972_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_011972_2 "r.get.1_counter_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011972, VkglTestCase_011972_1, VkglTestCase_011972_2);

#define VkglTestCase_011973_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_011973_2 "ter.get.4_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011973, VkglTestCase_011973_1, VkglTestCase_011973_2);

#define VkglTestCase_011974_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_011974_2 "er.get.4_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011974, VkglTestCase_011974_1, VkglTestCase_011974_2);

#define VkglTestCase_011975_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_011975_2 "ter.get.4_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011975, VkglTestCase_011975_1, VkglTestCase_011975_2);

#define VkglTestCase_011976_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_011976_2 "er.get.4_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011976, VkglTestCase_011976_1, VkglTestCase_011976_2);

#define VkglTestCase_011977_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_011977_2 "er.get.4_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011977, VkglTestCase_011977_1, VkglTestCase_011977_2);

#define VkglTestCase_011978_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_011978_2 "r.get.4_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011978, VkglTestCase_011978_1, VkglTestCase_011978_2);

#define VkglTestCase_011979_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_011979_2 "ter.get.8_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011979, VkglTestCase_011979_1, VkglTestCase_011979_2);

#define VkglTestCase_011980_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_011980_2 "er.get.8_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011980, VkglTestCase_011980_1, VkglTestCase_011980_2);

#define VkglTestCase_011981_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_011981_2 "ter.get.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011981, VkglTestCase_011981_1, VkglTestCase_011981_2);

#define VkglTestCase_011982_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_011982_2 "er.get.8_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011982, VkglTestCase_011982_1, VkglTestCase_011982_2);

#define VkglTestCase_011983_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_011983_2 "er.get.8_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011983, VkglTestCase_011983_1, VkglTestCase_011983_2);

#define VkglTestCase_011984_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_011984_2 "r.get.8_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011984, VkglTestCase_011984_1, VkglTestCase_011984_2);
