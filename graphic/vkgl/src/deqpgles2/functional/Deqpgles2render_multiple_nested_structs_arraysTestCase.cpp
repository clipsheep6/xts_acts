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

#define VkglTestCase_014436_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014436_2 "l.render.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014436, VkglTestCase_014436_1, VkglTestCase_014436_2);

#define VkglTestCase_014437_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014437_2 ".render.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014437, VkglTestCase_014437_1, VkglTestCase_014437_2);

#define VkglTestCase_014438_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014438_2 "al.render.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014438, VkglTestCase_014438_1, VkglTestCase_014438_2);

#define VkglTestCase_014768_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014768_2 "pointer.render.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014768, VkglTestCase_014768_1, VkglTestCase_014768_2);

#define VkglTestCase_014769_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014769_2 "ointer.render.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014769, VkglTestCase_014769_1, VkglTestCase_014769_2);

#define VkglTestCase_014770_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014770_2 "_pointer.render.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014770, VkglTestCase_014770_1, VkglTestCase_014770_2);

#define VkglTestCase_015047_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_015047_2 "_value.render.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015047, VkglTestCase_015047_1, VkglTestCase_015047_2);

#define VkglTestCase_015048_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_015048_2 "value.render.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015048, VkglTestCase_015048_1, VkglTestCase_015048_2);

#define VkglTestCase_015049_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015049_2 "y_value.render.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015049, VkglTestCase_015049_1, VkglTestCase_015049_2);
