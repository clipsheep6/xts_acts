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

#define VkglTestCase_012001_1 "dEQP-GLES31.functional.atomic_cou"
#define VkglTestCase_012001_2 "nter.inc.1_counter_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012001, VkglTestCase_012001_1, VkglTestCase_012001_2);

#define VkglTestCase_012002_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_012002_2 "ter.inc.1_counter_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012002, VkglTestCase_012002_1, VkglTestCase_012002_2);

#define VkglTestCase_012003_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012003_2 "er.inc.1_counter_1_call_5000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012003, VkglTestCase_012003_1, VkglTestCase_012003_2);

#define VkglTestCase_012004_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_012004_2 "ter.inc.1_counter_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012004, VkglTestCase_012004_1, VkglTestCase_012004_2);

#define VkglTestCase_012005_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012005_2 "er.inc.1_counter_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012005, VkglTestCase_012005_1, VkglTestCase_012005_2);

#define VkglTestCase_012006_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012006_2 "er.inc.1_counter_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012006, VkglTestCase_012006_1, VkglTestCase_012006_2);

#define VkglTestCase_012007_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012007_2 "r.inc.1_counter_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012007, VkglTestCase_012007_1, VkglTestCase_012007_2);

#define VkglTestCase_012008_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_012008_2 "ter.inc.4_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012008, VkglTestCase_012008_1, VkglTestCase_012008_2);

#define VkglTestCase_012009_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012009_2 "er.inc.4_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012009, VkglTestCase_012009_1, VkglTestCase_012009_2);

#define VkglTestCase_012010_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_012010_2 "ter.inc.4_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012010, VkglTestCase_012010_1, VkglTestCase_012010_2);

#define VkglTestCase_012011_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012011_2 "er.inc.4_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012011, VkglTestCase_012011_1, VkglTestCase_012011_2);

#define VkglTestCase_012012_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012012_2 "er.inc.4_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012012, VkglTestCase_012012_1, VkglTestCase_012012_2);

#define VkglTestCase_012013_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012013_2 "r.inc.4_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012013, VkglTestCase_012013_1, VkglTestCase_012013_2);

#define VkglTestCase_012014_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_012014_2 "ter.inc.8_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012014, VkglTestCase_012014_1, VkglTestCase_012014_2);

#define VkglTestCase_012015_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012015_2 "er.inc.8_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012015, VkglTestCase_012015_1, VkglTestCase_012015_2);

#define VkglTestCase_012016_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_012016_2 "ter.inc.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012016, VkglTestCase_012016_1, VkglTestCase_012016_2);

#define VkglTestCase_012017_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012017_2 "er.inc.8_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012017, VkglTestCase_012017_1, VkglTestCase_012017_2);

#define VkglTestCase_012018_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012018_2 "er.inc.8_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012018, VkglTestCase_012018_1, VkglTestCase_012018_2);

#define VkglTestCase_012019_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012019_2 "r.inc.8_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012019, VkglTestCase_012019_1, VkglTestCase_012019_2);
