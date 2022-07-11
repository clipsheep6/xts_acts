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

#define VkglTestCase_012215_1 "dEQP-GLES31.functional.atomic_counter.layout.re"
#define VkglTestCase_012215_2 "verse_offset.get_dec.8_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012215, VkglTestCase_012215_1, VkglTestCase_012215_2);

#define VkglTestCase_012216_1 "dEQP-GLES31.functional.atomic_counter.layout.reve"
#define VkglTestCase_012216_2 "rse_offset.get_dec.8_counters_1_call_1000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012216, VkglTestCase_012216_1, VkglTestCase_012216_2);

#define VkglTestCase_012217_1 "dEQP-GLES31.functional.atomic_counter.layout.re"
#define VkglTestCase_012217_2 "verse_offset.get_dec.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012217, VkglTestCase_012217_1, VkglTestCase_012217_2);

#define VkglTestCase_012218_1 "dEQP-GLES31.functional.atomic_counter.layout.reve"
#define VkglTestCase_012218_2 "rse_offset.get_dec.8_counters_5_calls_1000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012218, VkglTestCase_012218_1, VkglTestCase_012218_2);
