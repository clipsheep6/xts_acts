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

#define VkglTestCase_012106_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012106_2 "er.get_dec.1_counter_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012106, VkglTestCase_012106_1, VkglTestCase_012106_2);

#define VkglTestCase_012107_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012107_2 "r.get_dec.1_counter_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012107, VkglTestCase_012107_1, VkglTestCase_012107_2);

#define VkglTestCase_012108_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012108_2 ".get_dec.1_counter_1_call_5000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012108, VkglTestCase_012108_1, VkglTestCase_012108_2);

#define VkglTestCase_012109_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012109_2 "r.get_dec.1_counter_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012109, VkglTestCase_012109_1, VkglTestCase_012109_2);

#define VkglTestCase_012110_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012110_2 ".get_dec.1_counter_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012110, VkglTestCase_012110_1, VkglTestCase_012110_2);

#define VkglTestCase_012111_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012111_2 ".get_dec.1_counter_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012111, VkglTestCase_012111_1, VkglTestCase_012111_2);

#define VkglTestCase_012112_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012112_2 "get_dec.1_counter_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012112, VkglTestCase_012112_1, VkglTestCase_012112_2);

#define VkglTestCase_012113_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012113_2 "r.get_dec.4_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012113, VkglTestCase_012113_1, VkglTestCase_012113_2);

#define VkglTestCase_012114_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012114_2 ".get_dec.4_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012114, VkglTestCase_012114_1, VkglTestCase_012114_2);

#define VkglTestCase_012115_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012115_2 "r.get_dec.4_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012115, VkglTestCase_012115_1, VkglTestCase_012115_2);

#define VkglTestCase_012116_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012116_2 ".get_dec.4_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012116, VkglTestCase_012116_1, VkglTestCase_012116_2);

#define VkglTestCase_012117_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012117_2 ".get_dec.4_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012117, VkglTestCase_012117_1, VkglTestCase_012117_2);

#define VkglTestCase_012118_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012118_2 "get_dec.4_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012118, VkglTestCase_012118_1, VkglTestCase_012118_2);

#define VkglTestCase_012119_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012119_2 "r.get_dec.8_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012119, VkglTestCase_012119_1, VkglTestCase_012119_2);

#define VkglTestCase_012120_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012120_2 ".get_dec.8_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012120, VkglTestCase_012120_1, VkglTestCase_012120_2);

#define VkglTestCase_012121_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012121_2 "r.get_dec.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012121, VkglTestCase_012121_1, VkglTestCase_012121_2);

#define VkglTestCase_012122_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012122_2 ".get_dec.8_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012122, VkglTestCase_012122_1, VkglTestCase_012122_2);

#define VkglTestCase_012123_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012123_2 ".get_dec.8_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012123, VkglTestCase_012123_1, VkglTestCase_012123_2);

#define VkglTestCase_012124_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012124_2 "get_dec.8_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012124, VkglTestCase_012124_1, VkglTestCase_012124_2);
