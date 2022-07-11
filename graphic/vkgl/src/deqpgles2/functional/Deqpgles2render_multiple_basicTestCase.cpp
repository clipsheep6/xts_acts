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
#include "../ActsDeqpgles20015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014430_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014430_2 "e.initial.render.multiple_basic.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014430, VkglTestCase_014430_1, VkglTestCase_014430_2);

#define VkglTestCase_014431_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014431_2 ".initial.render.multiple_basic.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014431, VkglTestCase_014431_1, VkglTestCase_014431_2);

#define VkglTestCase_014432_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014432_2 "ue.initial.render.multiple_basic.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014432, VkglTestCase_014432_1, VkglTestCase_014432_2);

#define VkglTestCase_014762_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014762_2 "gned.by_pointer.render.multiple_basic.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014762, VkglTestCase_014762_1, VkglTestCase_014762_2);

#define VkglTestCase_014763_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014763_2 "ned.by_pointer.render.multiple_basic.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014763, VkglTestCase_014763_1, VkglTestCase_014763_2);

#define VkglTestCase_014764_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014764_2 "igned.by_pointer.render.multiple_basic.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014764, VkglTestCase_014764_1, VkglTestCase_014764_2);
