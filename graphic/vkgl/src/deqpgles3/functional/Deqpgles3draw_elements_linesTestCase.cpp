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

#define VkglTestCase_043978_1 "dEQP-GLES3.functional.draw.draw"
#define VkglTestCase_043978_2 "_elements.lines.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043978, VkglTestCase_043978_1, VkglTestCase_043978_2);

#define VkglTestCase_043979_1 "dEQP-GLES3.functional.draw.draw_e"
#define VkglTestCase_043979_2 "lements.lines.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043979, VkglTestCase_043979_1, VkglTestCase_043979_2);

#define VkglTestCase_043980_1 "dEQP-GLES3.functional.draw.draw_e"
#define VkglTestCase_043980_2 "lements.lines.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043980, VkglTestCase_043980_1, VkglTestCase_043980_2);

#define VkglTestCase_043981_1 "dEQP-GLES3.functional.draw.draw_"
#define VkglTestCase_043981_2 "elements.lines.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043981, VkglTestCase_043981_1, VkglTestCase_043981_2);
