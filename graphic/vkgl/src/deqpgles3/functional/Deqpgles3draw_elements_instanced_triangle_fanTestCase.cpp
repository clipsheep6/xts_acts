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

#define VkglTestCase_044036_1 "dEQP-GLES3.functional.draw.draw_elements"
#define VkglTestCase_044036_2 "_instanced.triangle_fan.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044036, VkglTestCase_044036_1, VkglTestCase_044036_2);

#define VkglTestCase_044037_1 "dEQP-GLES3.functional.draw.draw_elements_"
#define VkglTestCase_044037_2 "instanced.triangle_fan.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044037, VkglTestCase_044037_1, VkglTestCase_044037_2);

#define VkglTestCase_044038_1 "dEQP-GLES3.functional.draw.draw_elements_i"
#define VkglTestCase_044038_2 "nstanced.triangle_fan.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044038, VkglTestCase_044038_1, VkglTestCase_044038_2);

#define VkglTestCase_044039_1 "dEQP-GLES3.functional.draw.draw_elements"
#define VkglTestCase_044039_2 "_instanced.triangle_fan.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044039, VkglTestCase_044039_1, VkglTestCase_044039_2);
