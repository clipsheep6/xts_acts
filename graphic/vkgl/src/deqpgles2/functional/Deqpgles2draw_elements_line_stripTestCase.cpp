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

#define VkglTestCase_016355_1 "dEQP-GLES2.functional.draw.draw_el"
#define VkglTestCase_016355_2 "ements.line_strip.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016355, VkglTestCase_016355_1, VkglTestCase_016355_2);

#define VkglTestCase_016356_1 "dEQP-GLES2.functional.draw.draw_ele"
#define VkglTestCase_016356_2 "ments.line_strip.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016356, VkglTestCase_016356_1, VkglTestCase_016356_2);

#define VkglTestCase_016357_1 "dEQP-GLES2.functional.draw.draw_el"
#define VkglTestCase_016357_2 "ements.line_strip.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016357, VkglTestCase_016357_1, VkglTestCase_016357_2);
