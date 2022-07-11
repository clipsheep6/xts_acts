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

#define VkglTestCase_043950_1 "dEQP-GLES3.functional.draw.draw_"
#define VkglTestCase_043950_2 "arrays.line_loop.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043950, VkglTestCase_043950_1, VkglTestCase_043950_2);

#define VkglTestCase_043951_1 "dEQP-GLES3.functional.draw.draw_ar"
#define VkglTestCase_043951_2 "rays.line_loop.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043951, VkglTestCase_043951_1, VkglTestCase_043951_2);

#define VkglTestCase_043952_1 "dEQP-GLES3.functional.draw.draw_ar"
#define VkglTestCase_043952_2 "rays.line_loop.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043952, VkglTestCase_043952_1, VkglTestCase_043952_2);

#define VkglTestCase_043953_1 "dEQP-GLES3.functional.draw.draw_a"
#define VkglTestCase_043953_2 "rrays.line_loop.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043953, VkglTestCase_043953_1, VkglTestCase_043953_2);
