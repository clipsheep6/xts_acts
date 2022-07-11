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

#define VkglTestCase_012141_1 "dEQP-GLES31.functional.atomic_count"
#define VkglTestCase_012141_2 "er.inc_dec.1_counter_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012141, VkglTestCase_012141_1, VkglTestCase_012141_2);

#define VkglTestCase_012142_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012142_2 "r.inc_dec.1_counter_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012142, VkglTestCase_012142_1, VkglTestCase_012142_2);

#define VkglTestCase_012143_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012143_2 ".inc_dec.1_counter_1_call_5000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012143, VkglTestCase_012143_1, VkglTestCase_012143_2);

#define VkglTestCase_012144_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012144_2 "r.inc_dec.1_counter_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012144, VkglTestCase_012144_1, VkglTestCase_012144_2);

#define VkglTestCase_012145_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012145_2 ".inc_dec.1_counter_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012145, VkglTestCase_012145_1, VkglTestCase_012145_2);

#define VkglTestCase_012146_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012146_2 ".inc_dec.1_counter_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012146, VkglTestCase_012146_1, VkglTestCase_012146_2);

#define VkglTestCase_012147_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012147_2 "inc_dec.1_counter_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012147, VkglTestCase_012147_1, VkglTestCase_012147_2);

#define VkglTestCase_012148_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012148_2 "r.inc_dec.4_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012148, VkglTestCase_012148_1, VkglTestCase_012148_2);

#define VkglTestCase_012149_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012149_2 ".inc_dec.4_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012149, VkglTestCase_012149_1, VkglTestCase_012149_2);

#define VkglTestCase_012150_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012150_2 "r.inc_dec.4_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012150, VkglTestCase_012150_1, VkglTestCase_012150_2);

#define VkglTestCase_012151_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012151_2 ".inc_dec.4_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012151, VkglTestCase_012151_1, VkglTestCase_012151_2);

#define VkglTestCase_012152_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012152_2 ".inc_dec.4_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012152, VkglTestCase_012152_1, VkglTestCase_012152_2);

#define VkglTestCase_012153_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012153_2 "inc_dec.4_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012153, VkglTestCase_012153_1, VkglTestCase_012153_2);

#define VkglTestCase_012154_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012154_2 "r.inc_dec.8_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012154, VkglTestCase_012154_1, VkglTestCase_012154_2);

#define VkglTestCase_012155_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012155_2 ".inc_dec.8_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012155, VkglTestCase_012155_1, VkglTestCase_012155_2);

#define VkglTestCase_012156_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012156_2 "r.inc_dec.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012156, VkglTestCase_012156_1, VkglTestCase_012156_2);

#define VkglTestCase_012157_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012157_2 ".inc_dec.8_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012157, VkglTestCase_012157_1, VkglTestCase_012157_2);

#define VkglTestCase_012158_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012158_2 ".inc_dec.8_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012158, VkglTestCase_012158_1, VkglTestCase_012158_2);

#define VkglTestCase_012159_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012159_2 "inc_dec.8_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012159, VkglTestCase_012159_1, VkglTestCase_012159_2);
