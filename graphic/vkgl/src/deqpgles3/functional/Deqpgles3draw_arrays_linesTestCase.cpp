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

#define VkglTestCase_043942_1 "dEQP-GLES3.functional.draw.dra"
#define VkglTestCase_043942_2 "w_arrays.lines.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043942, VkglTestCase_043942_1, VkglTestCase_043942_2);

#define VkglTestCase_043943_1 "dEQP-GLES3.functional.draw.draw_"
#define VkglTestCase_043943_2 "arrays.lines.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043943, VkglTestCase_043943_1, VkglTestCase_043943_2);

#define VkglTestCase_043944_1 "dEQP-GLES3.functional.draw.draw_"
#define VkglTestCase_043944_2 "arrays.lines.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043944, VkglTestCase_043944_1, VkglTestCase_043944_2);

#define VkglTestCase_043945_1 "dEQP-GLES3.functional.draw.draw"
#define VkglTestCase_043945_2 "_arrays.lines.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043945, VkglTestCase_043945_1, VkglTestCase_043945_2);
