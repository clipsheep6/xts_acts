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

#define VkglTestCase_012160_1 "dEQP-GLES31.functional.atomic_counter.in"
#define VkglTestCase_012160_2 "c_dec_branch.1_counter_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012160, VkglTestCase_012160_1, VkglTestCase_012160_2);

#define VkglTestCase_012161_1 "dEQP-GLES31.functional.atomic_counter.inc"
#define VkglTestCase_012161_2 "_dec_branch.1_counter_1_call_5000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012161, VkglTestCase_012161_1, VkglTestCase_012161_2);

#define VkglTestCase_012162_1 "dEQP-GLES31.functional.atomic_counter.i"
#define VkglTestCase_012162_2 "nc_dec_branch.1_counter_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012162, VkglTestCase_012162_1, VkglTestCase_012162_2);

#define VkglTestCase_012163_1 "dEQP-GLES31.functional.atomic_counter.in"
#define VkglTestCase_012163_2 "c_dec_branch.1_counter_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012163, VkglTestCase_012163_1, VkglTestCase_012163_2);

#define VkglTestCase_012164_1 "dEQP-GLES31.functional.atomic_counter.in"
#define VkglTestCase_012164_2 "c_dec_branch.1_counter_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012164, VkglTestCase_012164_1, VkglTestCase_012164_2);

#define VkglTestCase_012165_1 "dEQP-GLES31.functional.atomic_counter.inc"
#define VkglTestCase_012165_2 "_dec_branch.1_counter_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012165, VkglTestCase_012165_1, VkglTestCase_012165_2);

#define VkglTestCase_012166_1 "dEQP-GLES31.functional.atomic_counter.in"
#define VkglTestCase_012166_2 "c_dec_branch.4_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012166, VkglTestCase_012166_1, VkglTestCase_012166_2);

#define VkglTestCase_012167_1 "dEQP-GLES31.functional.atomic_counter.in"
#define VkglTestCase_012167_2 "c_dec_branch.4_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012167, VkglTestCase_012167_1, VkglTestCase_012167_2);

#define VkglTestCase_012168_1 "dEQP-GLES31.functional.atomic_counter.inc"
#define VkglTestCase_012168_2 "_dec_branch.4_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012168, VkglTestCase_012168_1, VkglTestCase_012168_2);

#define VkglTestCase_012169_1 "dEQP-GLES31.functional.atomic_counter.inc"
#define VkglTestCase_012169_2 "_dec_branch.4_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012169, VkglTestCase_012169_1, VkglTestCase_012169_2);

#define VkglTestCase_012170_1 "dEQP-GLES31.functional.atomic_counter.inc_"
#define VkglTestCase_012170_2 "dec_branch.4_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012170, VkglTestCase_012170_1, VkglTestCase_012170_2);

#define VkglTestCase_012171_1 "dEQP-GLES31.functional.atomic_counter.in"
#define VkglTestCase_012171_2 "c_dec_branch.8_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012171, VkglTestCase_012171_1, VkglTestCase_012171_2);

#define VkglTestCase_012172_1 "dEQP-GLES31.functional.atomic_counter.in"
#define VkglTestCase_012172_2 "c_dec_branch.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012172, VkglTestCase_012172_1, VkglTestCase_012172_2);

#define VkglTestCase_012173_1 "dEQP-GLES31.functional.atomic_counter.inc"
#define VkglTestCase_012173_2 "_dec_branch.8_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012173, VkglTestCase_012173_1, VkglTestCase_012173_2);

#define VkglTestCase_012174_1 "dEQP-GLES31.functional.atomic_counter.inc"
#define VkglTestCase_012174_2 "_dec_branch.8_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012174, VkglTestCase_012174_1, VkglTestCase_012174_2);

#define VkglTestCase_012175_1 "dEQP-GLES31.functional.atomic_counter.inc_"
#define VkglTestCase_012175_2 "dec_branch.8_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012175, VkglTestCase_012175_1, VkglTestCase_012175_2);
