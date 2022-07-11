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

#define VkglTestCase_043938_1 "dEQP-GLES3.functional.draw.draw_arr"
#define VkglTestCase_043938_2 "ays.triangle_strip.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043938, VkglTestCase_043938_1, VkglTestCase_043938_2);

#define VkglTestCase_043939_1 "dEQP-GLES3.functional.draw.draw_arra"
#define VkglTestCase_043939_2 "ys.triangle_strip.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043939, VkglTestCase_043939_1, VkglTestCase_043939_2);

#define VkglTestCase_043940_1 "dEQP-GLES3.functional.draw.draw_array"
#define VkglTestCase_043940_2 "s.triangle_strip.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043940, VkglTestCase_043940_1, VkglTestCase_043940_2);

#define VkglTestCase_043941_1 "dEQP-GLES3.functional.draw.draw_arr"
#define VkglTestCase_043941_2 "ays.triangle_strip.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043941, VkglTestCase_043941_1, VkglTestCase_043941_2);
