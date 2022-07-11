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
#include "../ActsDeqpgles30038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037300_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037300_2 "e.initial.render.multiple_basic.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037300, VkglTestCase_037300_1, VkglTestCase_037300_2);

#define VkglTestCase_037301_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_037301_2 ".initial.render.multiple_basic.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037301, VkglTestCase_037301_1, VkglTestCase_037301_2);

#define VkglTestCase_037302_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037302_2 "ue.initial.render.multiple_basic.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037302, VkglTestCase_037302_1, VkglTestCase_037302_2);

#define VkglTestCase_037825_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037825_2 "gned.by_pointer.render.multiple_basic.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037825, VkglTestCase_037825_1, VkglTestCase_037825_2);

#define VkglTestCase_037826_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037826_2 "ned.by_pointer.render.multiple_basic.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037826, VkglTestCase_037826_1, VkglTestCase_037826_2);

#define VkglTestCase_037827_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037827_2 "igned.by_pointer.render.multiple_basic.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037827, VkglTestCase_037827_1, VkglTestCase_037827_2);
