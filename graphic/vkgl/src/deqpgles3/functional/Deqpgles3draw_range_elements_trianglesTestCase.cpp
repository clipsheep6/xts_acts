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

#define VkglTestCase_044060_1 "dEQP-GLES3.functional.draw.draw_rang"
#define VkglTestCase_044060_2 "e_elements.triangles.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044060, VkglTestCase_044060_1, VkglTestCase_044060_2);

#define VkglTestCase_044061_1 "dEQP-GLES3.functional.draw.draw_range_"
#define VkglTestCase_044061_2 "elements.triangles.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044061, VkglTestCase_044061_1, VkglTestCase_044061_2);

#define VkglTestCase_044062_1 "dEQP-GLES3.functional.draw.draw_range_"
#define VkglTestCase_044062_2 "elements.triangles.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044062, VkglTestCase_044062_1, VkglTestCase_044062_2);

#define VkglTestCase_044063_1 "dEQP-GLES3.functional.draw.draw_range"
#define VkglTestCase_044063_2 "_elements.triangles.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044063, VkglTestCase_044063_1, VkglTestCase_044063_2);
