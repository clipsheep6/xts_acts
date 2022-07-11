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

#define VkglTestCase_044001_1 "dEQP-GLES3.functional.draw.draw_arrays_"
#define VkglTestCase_044001_2 "instanced.triangle_fan.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044001, VkglTestCase_044001_1, VkglTestCase_044001_2);

#define VkglTestCase_044002_1 "dEQP-GLES3.functional.draw.draw_arrays_i"
#define VkglTestCase_044002_2 "nstanced.triangle_fan.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044002, VkglTestCase_044002_1, VkglTestCase_044002_2);

#define VkglTestCase_044003_1 "dEQP-GLES3.functional.draw.draw_arrays_in"
#define VkglTestCase_044003_2 "stanced.triangle_fan.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044003, VkglTestCase_044003_1, VkglTestCase_044003_2);

#define VkglTestCase_044004_1 "dEQP-GLES3.functional.draw.draw_arrays_"
#define VkglTestCase_044004_2 "instanced.triangle_fan.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044004, VkglTestCase_044004_1, VkglTestCase_044004_2);
