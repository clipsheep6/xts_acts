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

#define VkglTestCase_012235_1 "dEQP-GLES31.functional.atomic_counter.layout.defa"
#define VkglTestCase_012235_2 "ult_offset_set.get_inc.8_counters_1_call_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012235, VkglTestCase_012235_1, VkglTestCase_012235_2);

#define VkglTestCase_012236_1 "dEQP-GLES31.functional.atomic_counter.layout.defaul"
#define VkglTestCase_012236_2 "t_offset_set.get_inc.8_counters_1_call_1000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012236, VkglTestCase_012236_1, VkglTestCase_012236_2);

#define VkglTestCase_012237_1 "dEQP-GLES31.functional.atomic_counter.layout.defa"
#define VkglTestCase_012237_2 "ult_offset_set.get_inc.8_counters_5_calls_1_thread"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012237, VkglTestCase_012237_1, VkglTestCase_012237_2);

#define VkglTestCase_012238_1 "dEQP-GLES31.functional.atomic_counter.layout.defaul"
#define VkglTestCase_012238_2 "t_offset_set.get_inc.8_counters_5_calls_1000_threads"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012238, VkglTestCase_012238_1, VkglTestCase_012238_2);
