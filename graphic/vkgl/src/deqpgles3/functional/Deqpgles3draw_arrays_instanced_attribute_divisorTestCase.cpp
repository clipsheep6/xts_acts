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
#include "../ActsDeqpgles30041TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_040444_1 "dEQP-GLES3.functional.instanced.draw_arra"
#define VkglTestCase_040444_2 "ys_instanced.attribute_divisor.1_instances"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040444, VkglTestCase_040444_1, VkglTestCase_040444_2);

#define VkglTestCase_040445_1 "dEQP-GLES3.functional.instanced.draw_arra"
#define VkglTestCase_040445_2 "ys_instanced.attribute_divisor.2_instances"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040445, VkglTestCase_040445_1, VkglTestCase_040445_2);

#define VkglTestCase_040446_1 "dEQP-GLES3.functional.instanced.draw_arra"
#define VkglTestCase_040446_2 "ys_instanced.attribute_divisor.4_instances"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040446, VkglTestCase_040446_1, VkglTestCase_040446_2);

#define VkglTestCase_040447_1 "dEQP-GLES3.functional.instanced.draw_array"
#define VkglTestCase_040447_2 "s_instanced.attribute_divisor.20_instances"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040447, VkglTestCase_040447_1, VkglTestCase_040447_2);
