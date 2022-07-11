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

#define VkglTestCase_044028_1 "dEQP-GLES3.functional.draw.draw_eleme"
#define VkglTestCase_044028_2 "nts_instanced.points.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044028, VkglTestCase_044028_1, VkglTestCase_044028_2);

#define VkglTestCase_044029_1 "dEQP-GLES3.functional.draw.draw_elemen"
#define VkglTestCase_044029_2 "ts_instanced.points.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044029, VkglTestCase_044029_1, VkglTestCase_044029_2);

#define VkglTestCase_044030_1 "dEQP-GLES3.functional.draw.draw_element"
#define VkglTestCase_044030_2 "s_instanced.points.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044030, VkglTestCase_044030_1, VkglTestCase_044030_2);

#define VkglTestCase_044031_1 "dEQP-GLES3.functional.draw.draw_eleme"
#define VkglTestCase_044031_2 "nts_instanced.points.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044031, VkglTestCase_044031_1, VkglTestCase_044031_2);
