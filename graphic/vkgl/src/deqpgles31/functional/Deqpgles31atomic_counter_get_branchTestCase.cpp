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

#define VkglTestCase_011985_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_011985_2 "get_branch.1_counter_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011985, VkglTestCase_011985_1, VkglTestCase_011985_2);

#define VkglTestCase_011986_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_011986_2 "et_branch.1_counter_1_call_5000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011986, VkglTestCase_011986_1, VkglTestCase_011986_2);

#define VkglTestCase_011987_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_011987_2 ".get_branch.1_counter_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011987, VkglTestCase_011987_1, VkglTestCase_011987_2);

#define VkglTestCase_011988_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_011988_2 "get_branch.1_counter_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011988, VkglTestCase_011988_1, VkglTestCase_011988_2);

#define VkglTestCase_011989_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_011989_2 "get_branch.1_counter_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011989, VkglTestCase_011989_1, VkglTestCase_011989_2);

#define VkglTestCase_011990_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_011990_2 "et_branch.1_counter_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011990, VkglTestCase_011990_1, VkglTestCase_011990_2);

#define VkglTestCase_011991_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_011991_2 "get_branch.4_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011991, VkglTestCase_011991_1, VkglTestCase_011991_2);

#define VkglTestCase_011992_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_011992_2 "get_branch.4_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011992, VkglTestCase_011992_1, VkglTestCase_011992_2);

#define VkglTestCase_011993_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_011993_2 "et_branch.4_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011993, VkglTestCase_011993_1, VkglTestCase_011993_2);

#define VkglTestCase_011994_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_011994_2 "et_branch.4_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011994, VkglTestCase_011994_1, VkglTestCase_011994_2);

#define VkglTestCase_011995_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_011995_2 "t_branch.4_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011995, VkglTestCase_011995_1, VkglTestCase_011995_2);

#define VkglTestCase_011996_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_011996_2 "get_branch.8_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011996, VkglTestCase_011996_1, VkglTestCase_011996_2);

#define VkglTestCase_011997_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_011997_2 "get_branch.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011997, VkglTestCase_011997_1, VkglTestCase_011997_2);

#define VkglTestCase_011998_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_011998_2 "et_branch.8_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011998, VkglTestCase_011998_1, VkglTestCase_011998_2);

#define VkglTestCase_011999_1 "dEQP-GLES31.functional.atomic_counter.g"
#define VkglTestCase_011999_2 "et_branch.8_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011999, VkglTestCase_011999_1, VkglTestCase_011999_2);

#define VkglTestCase_012000_1 "dEQP-GLES31.functional.atomic_counter.ge"
#define VkglTestCase_012000_2 "t_branch.8_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_012000, VkglTestCase_012000_1, VkglTestCase_012000_2);
