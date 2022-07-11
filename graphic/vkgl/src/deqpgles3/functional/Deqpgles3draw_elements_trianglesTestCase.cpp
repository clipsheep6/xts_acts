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

#define VkglTestCase_043966_1 "dEQP-GLES3.functional.draw.draw_e"
#define VkglTestCase_043966_2 "lements.triangles.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043966, VkglTestCase_043966_1, VkglTestCase_043966_2);

#define VkglTestCase_043967_1 "dEQP-GLES3.functional.draw.draw_ele"
#define VkglTestCase_043967_2 "ments.triangles.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043967, VkglTestCase_043967_1, VkglTestCase_043967_2);

#define VkglTestCase_043968_1 "dEQP-GLES3.functional.draw.draw_ele"
#define VkglTestCase_043968_2 "ments.triangles.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043968, VkglTestCase_043968_1, VkglTestCase_043968_2);

#define VkglTestCase_043969_1 "dEQP-GLES3.functional.draw.draw_el"
#define VkglTestCase_043969_2 "ements.triangles.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043969, VkglTestCase_043969_1, VkglTestCase_043969_2);
