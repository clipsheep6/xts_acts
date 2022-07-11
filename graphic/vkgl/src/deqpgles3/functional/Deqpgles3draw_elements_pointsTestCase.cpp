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

#define VkglTestCase_043962_1 "dEQP-GLES3.functional.draw.draw_"
#define VkglTestCase_043962_2 "elements.points.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043962, VkglTestCase_043962_1, VkglTestCase_043962_2);

#define VkglTestCase_043963_1 "dEQP-GLES3.functional.draw.draw_e"
#define VkglTestCase_043963_2 "lements.points.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043963, VkglTestCase_043963_1, VkglTestCase_043963_2);

#define VkglTestCase_043964_1 "dEQP-GLES3.functional.draw.draw_el"
#define VkglTestCase_043964_2 "ements.points.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043964, VkglTestCase_043964_1, VkglTestCase_043964_2);

#define VkglTestCase_043965_1 "dEQP-GLES3.functional.draw.draw_"
#define VkglTestCase_043965_2 "elements.points.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043965, VkglTestCase_043965_1, VkglTestCase_043965_2);
