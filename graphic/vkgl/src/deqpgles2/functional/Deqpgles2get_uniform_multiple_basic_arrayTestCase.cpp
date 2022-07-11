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

#define VkglTestCase_014303_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014303_2 "tial.get_uniform.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014303, VkglTestCase_014303_1, VkglTestCase_014303_2);

#define VkglTestCase_014304_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014304_2 "ial.get_uniform.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014304, VkglTestCase_014304_1, VkglTestCase_014304_2);

#define VkglTestCase_014305_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014305_2 "itial.get_uniform.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014305, VkglTestCase_014305_1, VkglTestCase_014305_2);

#define VkglTestCase_014623_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014623_2 "by_pointer.get_uniform.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014623, VkglTestCase_014623_1, VkglTestCase_014623_2);

#define VkglTestCase_014624_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014624_2 "y_pointer.get_uniform.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014624, VkglTestCase_014624_1, VkglTestCase_014624_2);

#define VkglTestCase_014625_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014625_2 ".by_pointer.get_uniform.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014625, VkglTestCase_014625_1, VkglTestCase_014625_2);

#define VkglTestCase_014927_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014927_2 ".by_value.get_uniform.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014927, VkglTestCase_014927_1, VkglTestCase_014927_2);

#define VkglTestCase_014928_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014928_2 "by_value.get_uniform.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014928, VkglTestCase_014928_1, VkglTestCase_014928_2);

#define VkglTestCase_014929_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014929_2 "d.by_value.get_uniform.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014929, VkglTestCase_014929_1, VkglTestCase_014929_2);
