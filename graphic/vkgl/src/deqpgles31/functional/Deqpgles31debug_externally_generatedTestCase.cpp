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
#include "../ActsDeqpgles310020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019845_1 "dEQP-GLES31.functional.debug.extern"
#define VkglTestCase_019845_2 "ally_generated.application_messages"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019845, VkglTestCase_019845_1, VkglTestCase_019845_2);

#define VkglTestCase_019846_1 "dEQP-GLES31.functional.debug.extern"
#define VkglTestCase_019846_2 "ally_generated.third_party_messages"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019846, VkglTestCase_019846_1, VkglTestCase_019846_2);

#define VkglTestCase_019847_1 "dEQP-GLES31.functional.debug.ext"
#define VkglTestCase_019847_2 "ernally_generated.push_pop_stack"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019847, VkglTestCase_019847_1, VkglTestCase_019847_2);

#define VkglTestCase_019848_1 "dEQP-GLES31.functional.debug.extern"
#define VkglTestCase_019848_2 "ally_generated.push_pop_consistency"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019848, VkglTestCase_019848_1, VkglTestCase_019848_2);
