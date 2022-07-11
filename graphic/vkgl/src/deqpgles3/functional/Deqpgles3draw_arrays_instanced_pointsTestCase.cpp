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

#define VkglTestCase_043993_1 "dEQP-GLES3.functional.draw.draw_arra"
#define VkglTestCase_043993_2 "ys_instanced.points.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043993, VkglTestCase_043993_1, VkglTestCase_043993_2);

#define VkglTestCase_043994_1 "dEQP-GLES3.functional.draw.draw_array"
#define VkglTestCase_043994_2 "s_instanced.points.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043994, VkglTestCase_043994_1, VkglTestCase_043994_2);

#define VkglTestCase_043995_1 "dEQP-GLES3.functional.draw.draw_arrays"
#define VkglTestCase_043995_2 "_instanced.points.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043995, VkglTestCase_043995_1, VkglTestCase_043995_2);

#define VkglTestCase_043996_1 "dEQP-GLES3.functional.draw.draw_arra"
#define VkglTestCase_043996_2 "ys_instanced.points.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043996, VkglTestCase_043996_1, VkglTestCase_043996_2);
