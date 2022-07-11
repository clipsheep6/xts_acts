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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007705_1 "dEQP-GLES31.functional.draw_indirec"
#define VkglTestCase_007705_2 "t.draw_arrays_indirect.first.first_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007705, VkglTestCase_007705_1, VkglTestCase_007705_2);

#define VkglTestCase_007706_1 "dEQP-GLES31.functional.draw_indirec"
#define VkglTestCase_007706_2 "t.draw_arrays_indirect.first.first_3"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007706, VkglTestCase_007706_1, VkglTestCase_007706_2);

#define VkglTestCase_007707_1 "dEQP-GLES31.functional.draw_indirect"
#define VkglTestCase_007707_2 ".draw_arrays_indirect.first.first_17"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007707, VkglTestCase_007707_1, VkglTestCase_007707_2);
