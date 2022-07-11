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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016352_1 "dEQP-GLES2.functional.draw.draw"
#define VkglTestCase_016352_2 "_elements.lines.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016352, VkglTestCase_016352_1, VkglTestCase_016352_2);

#define VkglTestCase_016353_1 "dEQP-GLES2.functional.draw.draw_e"
#define VkglTestCase_016353_2 "lements.lines.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016353, VkglTestCase_016353_1, VkglTestCase_016353_2);

#define VkglTestCase_016354_1 "dEQP-GLES2.functional.draw.draw_"
#define VkglTestCase_016354_2 "elements.lines.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016354, VkglTestCase_016354_1, VkglTestCase_016354_2);
