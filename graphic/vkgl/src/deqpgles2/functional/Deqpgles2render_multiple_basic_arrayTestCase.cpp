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

#define VkglTestCase_014433_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014433_2 "nitial.render.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014433, VkglTestCase_014433_1, VkglTestCase_014433_2);

#define VkglTestCase_014434_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014434_2 "itial.render.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014434, VkglTestCase_014434_1, VkglTestCase_014434_2);

#define VkglTestCase_014435_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014435_2 "initial.render.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014435, VkglTestCase_014435_1, VkglTestCase_014435_2);

#define VkglTestCase_014765_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014765_2 "d.by_pointer.render.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014765, VkglTestCase_014765_1, VkglTestCase_014765_2);

#define VkglTestCase_014766_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014766_2 ".by_pointer.render.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014766, VkglTestCase_014766_1, VkglTestCase_014766_2);

#define VkglTestCase_014767_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014767_2 "ed.by_pointer.render.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014767, VkglTestCase_014767_1, VkglTestCase_014767_2);

#define VkglTestCase_015044_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_015044_2 "ed.by_value.render.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015044, VkglTestCase_015044_1, VkglTestCase_015044_2);

#define VkglTestCase_015045_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_015045_2 "d.by_value.render.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015045, VkglTestCase_015045_1, VkglTestCase_015045_2);

#define VkglTestCase_015046_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_015046_2 "ned.by_value.render.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015046, VkglTestCase_015046_1, VkglTestCase_015046_2);
