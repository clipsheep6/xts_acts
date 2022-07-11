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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_043954_1 "dEQP-GLES3.functional.draw.draw_el"
#define VkglTestCase_043954_2 "ements.indices.user_ptr.index_byte"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043954, VkglTestCase_043954_1, VkglTestCase_043954_2);

#define VkglTestCase_043955_1 "dEQP-GLES3.functional.draw.draw_el"
#define VkglTestCase_043955_2 "ements.indices.user_ptr.index_short"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043955, VkglTestCase_043955_1, VkglTestCase_043955_2);

#define VkglTestCase_043956_1 "dEQP-GLES3.functional.draw.draw_e"
#define VkglTestCase_043956_2 "lements.indices.user_ptr.index_int"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043956, VkglTestCase_043956_1, VkglTestCase_043956_2);

#define VkglTestCase_044021_1 "dEQP-GLES3.functional.draw.draw_element"
#define VkglTestCase_044021_2 "s_instanced.indices.user_ptr.index_byte"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_044021, VkglTestCase_044021_1, VkglTestCase_044021_2);

#define VkglTestCase_044022_1 "dEQP-GLES3.functional.draw.draw_element"
#define VkglTestCase_044022_2 "s_instanced.indices.user_ptr.index_short"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_044022, VkglTestCase_044022_1, VkglTestCase_044022_2);

#define VkglTestCase_044023_1 "dEQP-GLES3.functional.draw.draw_elemen"
#define VkglTestCase_044023_2 "ts_instanced.indices.user_ptr.index_int"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_044023, VkglTestCase_044023_1, VkglTestCase_044023_2);
