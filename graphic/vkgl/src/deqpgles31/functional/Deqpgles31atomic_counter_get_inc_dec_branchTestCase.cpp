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

#define VkglTestCase_012195_1 "dEQP-GLES31.functional.atomic_counter.get_"
#define VkglTestCase_012195_2 "inc_dec_branch.1_counter_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012195, VkglTestCase_012195_1, VkglTestCase_012195_2);

#define VkglTestCase_012196_1 "dEQP-GLES31.functional.atomic_counter.get_i"
#define VkglTestCase_012196_2 "nc_dec_branch.1_counter_1_call_5000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012196, VkglTestCase_012196_1, VkglTestCase_012196_2);

#define VkglTestCase_012197_1 "dEQP-GLES31.functional.atomic_counter.get"
#define VkglTestCase_012197_2 "_inc_dec_branch.1_counter_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012197, VkglTestCase_012197_1, VkglTestCase_012197_2);

#define VkglTestCase_012198_1 "dEQP-GLES31.functional.atomic_counter.get_"
#define VkglTestCase_012198_2 "inc_dec_branch.1_counter_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012198, VkglTestCase_012198_1, VkglTestCase_012198_2);

#define VkglTestCase_012199_1 "dEQP-GLES31.functional.atomic_counter.get_"
#define VkglTestCase_012199_2 "inc_dec_branch.1_counter_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012199, VkglTestCase_012199_1, VkglTestCase_012199_2);

#define VkglTestCase_012200_1 "dEQP-GLES31.functional.atomic_counter.get_i"
#define VkglTestCase_012200_2 "nc_dec_branch.1_counter_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012200, VkglTestCase_012200_1, VkglTestCase_012200_2);

#define VkglTestCase_012201_1 "dEQP-GLES31.functional.atomic_counter.get_"
#define VkglTestCase_012201_2 "inc_dec_branch.4_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012201, VkglTestCase_012201_1, VkglTestCase_012201_2);

#define VkglTestCase_012202_1 "dEQP-GLES31.functional.atomic_counter.get_"
#define VkglTestCase_012202_2 "inc_dec_branch.4_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012202, VkglTestCase_012202_1, VkglTestCase_012202_2);

#define VkglTestCase_012203_1 "dEQP-GLES31.functional.atomic_counter.get_i"
#define VkglTestCase_012203_2 "nc_dec_branch.4_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012203, VkglTestCase_012203_1, VkglTestCase_012203_2);

#define VkglTestCase_012204_1 "dEQP-GLES31.functional.atomic_counter.get_i"
#define VkglTestCase_012204_2 "nc_dec_branch.4_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012204, VkglTestCase_012204_1, VkglTestCase_012204_2);

#define VkglTestCase_012205_1 "dEQP-GLES31.functional.atomic_counter.get_in"
#define VkglTestCase_012205_2 "c_dec_branch.4_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012205, VkglTestCase_012205_1, VkglTestCase_012205_2);

#define VkglTestCase_012206_1 "dEQP-GLES31.functional.atomic_counter.get_"
#define VkglTestCase_012206_2 "inc_dec_branch.8_counters_1_call_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012206, VkglTestCase_012206_1, VkglTestCase_012206_2);

#define VkglTestCase_012207_1 "dEQP-GLES31.functional.atomic_counter.get_"
#define VkglTestCase_012207_2 "inc_dec_branch.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012207, VkglTestCase_012207_1, VkglTestCase_012207_2);

#define VkglTestCase_012208_1 "dEQP-GLES31.functional.atomic_counter.get_i"
#define VkglTestCase_012208_2 "nc_dec_branch.8_counters_5_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012208, VkglTestCase_012208_1, VkglTestCase_012208_2);

#define VkglTestCase_012209_1 "dEQP-GLES31.functional.atomic_counter.get_i"
#define VkglTestCase_012209_2 "nc_dec_branch.8_counters_100_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012209, VkglTestCase_012209_1, VkglTestCase_012209_2);

#define VkglTestCase_012210_1 "dEQP-GLES31.functional.atomic_counter.get_in"
#define VkglTestCase_012210_2 "c_dec_branch.8_counters_100_calls_10_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012210, VkglTestCase_012210_1, VkglTestCase_012210_2);
