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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016138_1 "dEQP-GLES31.functional.state_query.multisample_interp"
#define VkglTestCase_016138_2 "olation.max_fragment_interpolation_offset.get_boolean"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016138, VkglTestCase_016138_1, VkglTestCase_016138_2);

#define VkglTestCase_016139_1 "dEQP-GLES31.functional.state_query.multisample_interp"
#define VkglTestCase_016139_2 "olation.max_fragment_interpolation_offset.get_integer"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016139, VkglTestCase_016139_1, VkglTestCase_016139_2);

#define VkglTestCase_016140_1 "dEQP-GLES31.functional.state_query.multisample_inter"
#define VkglTestCase_016140_2 "polation.max_fragment_interpolation_offset.get_float"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016140, VkglTestCase_016140_1, VkglTestCase_016140_2);

#define VkglTestCase_016141_1 "dEQP-GLES31.functional.state_query.multisample_interpo"
#define VkglTestCase_016141_2 "lation.max_fragment_interpolation_offset.get_integer64"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016141, VkglTestCase_016141_1, VkglTestCase_016141_2);
