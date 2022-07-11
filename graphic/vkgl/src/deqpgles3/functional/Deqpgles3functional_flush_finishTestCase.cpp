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
#include "../ActsDeqpgles30045TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_044246_1 "dEQP-GLES3.function"
#define VkglTestCase_044246_2 "al.flush_finish.wait"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044246, VkglTestCase_044246_1, VkglTestCase_044246_2);

#define VkglTestCase_044247_1 "dEQP-GLES3.functiona"
#define VkglTestCase_044247_2 "l.flush_finish.flush"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044247, VkglTestCase_044247_1, VkglTestCase_044247_2);

#define VkglTestCase_044248_1 "dEQP-GLES3.functional."
#define VkglTestCase_044248_2 "flush_finish.flush_wait"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044248, VkglTestCase_044248_1, VkglTestCase_044248_2);

#define VkglTestCase_044249_1 "dEQP-GLES3.functiona"
#define VkglTestCase_044249_2 "l.flush_finish.finish"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044249, VkglTestCase_044249_1, VkglTestCase_044249_2);

#define VkglTestCase_044250_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_044250_2 "lush_finish.finish_wait"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044250, VkglTestCase_044250_1, VkglTestCase_044250_2);
