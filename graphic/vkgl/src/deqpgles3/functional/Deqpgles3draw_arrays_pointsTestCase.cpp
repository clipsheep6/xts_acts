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

#define VkglTestCase_043926_1 "dEQP-GLES3.functional.draw.draw"
#define VkglTestCase_043926_2 "_arrays.points.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043926, VkglTestCase_043926_1, VkglTestCase_043926_2);

#define VkglTestCase_043927_1 "dEQP-GLES3.functional.draw.draw_"
#define VkglTestCase_043927_2 "arrays.points.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043927, VkglTestCase_043927_1, VkglTestCase_043927_2);

#define VkglTestCase_043928_1 "dEQP-GLES3.functional.draw.draw_a"
#define VkglTestCase_043928_2 "rrays.points.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043928, VkglTestCase_043928_1, VkglTestCase_043928_2);

#define VkglTestCase_043929_1 "dEQP-GLES3.functional.draw.draw"
#define VkglTestCase_043929_2 "_arrays.points.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043929, VkglTestCase_043929_1, VkglTestCase_043929_2);
