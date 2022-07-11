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

#define VkglTestCase_044068_1 "dEQP-GLES3.functional.draw.draw_range_e"
#define VkglTestCase_044068_2 "lements.triangle_strip.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044068, VkglTestCase_044068_1, VkglTestCase_044068_2);

#define VkglTestCase_044069_1 "dEQP-GLES3.functional.draw.draw_range_el"
#define VkglTestCase_044069_2 "ements.triangle_strip.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044069, VkglTestCase_044069_1, VkglTestCase_044069_2);

#define VkglTestCase_044070_1 "dEQP-GLES3.functional.draw.draw_range_ele"
#define VkglTestCase_044070_2 "ments.triangle_strip.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044070, VkglTestCase_044070_1, VkglTestCase_044070_2);

#define VkglTestCase_044071_1 "dEQP-GLES3.functional.draw.draw_range_e"
#define VkglTestCase_044071_2 "lements.triangle_strip.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044071, VkglTestCase_044071_1, VkglTestCase_044071_2);
