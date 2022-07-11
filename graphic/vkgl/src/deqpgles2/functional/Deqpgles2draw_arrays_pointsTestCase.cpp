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

#define VkglTestCase_016314_1 "dEQP-GLES2.functional.draw.draw"
#define VkglTestCase_016314_2 "_arrays.points.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016314, VkglTestCase_016314_1, VkglTestCase_016314_2);

#define VkglTestCase_016315_1 "dEQP-GLES2.functional.draw.draw_"
#define VkglTestCase_016315_2 "arrays.points.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016315, VkglTestCase_016315_1, VkglTestCase_016315_2);

#define VkglTestCase_016316_1 "dEQP-GLES2.functional.draw.draw"
#define VkglTestCase_016316_2 "_arrays.points.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016316, VkglTestCase_016316_1, VkglTestCase_016316_2);
