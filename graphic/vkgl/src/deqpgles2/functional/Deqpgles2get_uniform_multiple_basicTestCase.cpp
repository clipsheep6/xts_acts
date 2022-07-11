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

#define VkglTestCase_014300_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014300_2 "initial.get_uniform.multiple_basic.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014300, VkglTestCase_014300_1, VkglTestCase_014300_2);

#define VkglTestCase_014301_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014301_2 "nitial.get_uniform.multiple_basic.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014301, VkglTestCase_014301_1, VkglTestCase_014301_2);

#define VkglTestCase_014302_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014302_2 ".initial.get_uniform.multiple_basic.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014302, VkglTestCase_014302_1, VkglTestCase_014302_2);

#define VkglTestCase_014620_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014620_2 "ed.by_pointer.get_uniform.multiple_basic.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014620, VkglTestCase_014620_1, VkglTestCase_014620_2);

#define VkglTestCase_014621_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014621_2 "d.by_pointer.get_uniform.multiple_basic.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014621, VkglTestCase_014621_1, VkglTestCase_014621_2);

#define VkglTestCase_014622_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014622_2 "ned.by_pointer.get_uniform.multiple_basic.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014622, VkglTestCase_014622_1, VkglTestCase_014622_2);
