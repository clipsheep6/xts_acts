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

#define VkglTestCase_012036_1 "dEQP-GLES31.functional.atomic_cou"
#define VkglTestCase_012036_2 "nter.dec.1_counter_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012036, VkglTestCase_012036_1, VkglTestCase_012036_2);

#define VkglTestCase_012037_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_012037_2 "ter.dec.1_counter_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012037, VkglTestCase_012037_1, VkglTestCase_012037_2);

#define VkglTestCase_012038_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012038_2 "er.dec.1_counter_1_call_5000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012038, VkglTestCase_012038_1, VkglTestCase_012038_2);

#define VkglTestCase_012039_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_012039_2 "ter.dec.1_counter_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012039, VkglTestCase_012039_1, VkglTestCase_012039_2);

#define VkglTestCase_012040_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012040_2 "er.dec.1_counter_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012040, VkglTestCase_012040_1, VkglTestCase_012040_2);

#define VkglTestCase_012041_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012041_2 "er.dec.1_counter_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012041, VkglTestCase_012041_1, VkglTestCase_012041_2);

#define VkglTestCase_012042_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012042_2 "r.dec.1_counter_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012042, VkglTestCase_012042_1, VkglTestCase_012042_2);

#define VkglTestCase_012043_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_012043_2 "ter.dec.4_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012043, VkglTestCase_012043_1, VkglTestCase_012043_2);

#define VkglTestCase_012044_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012044_2 "er.dec.4_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012044, VkglTestCase_012044_1, VkglTestCase_012044_2);

#define VkglTestCase_012045_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_012045_2 "ter.dec.4_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012045, VkglTestCase_012045_1, VkglTestCase_012045_2);

#define VkglTestCase_012046_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012046_2 "er.dec.4_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012046, VkglTestCase_012046_1, VkglTestCase_012046_2);

#define VkglTestCase_012047_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012047_2 "er.dec.4_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012047, VkglTestCase_012047_1, VkglTestCase_012047_2);

#define VkglTestCase_012048_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012048_2 "r.dec.4_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012048, VkglTestCase_012048_1, VkglTestCase_012048_2);

#define VkglTestCase_012049_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_012049_2 "ter.dec.8_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012049, VkglTestCase_012049_1, VkglTestCase_012049_2);

#define VkglTestCase_012050_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012050_2 "er.dec.8_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012050, VkglTestCase_012050_1, VkglTestCase_012050_2);

#define VkglTestCase_012051_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_012051_2 "ter.dec.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012051, VkglTestCase_012051_1, VkglTestCase_012051_2);

#define VkglTestCase_012052_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012052_2 "er.dec.8_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012052, VkglTestCase_012052_1, VkglTestCase_012052_2);

#define VkglTestCase_012053_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012053_2 "er.dec.8_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012053, VkglTestCase_012053_1, VkglTestCase_012053_2);

#define VkglTestCase_012054_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012054_2 "r.dec.8_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012054, VkglTestCase_012054_1, VkglTestCase_012054_2);
