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

#define VkglTestCase_014306_1 "dEQP-GLES2.functional.uniform_api.value.initial."
#define VkglTestCase_014306_2 "get_uniform.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014306, VkglTestCase_014306_1, VkglTestCase_014306_2);

#define VkglTestCase_014307_1 "dEQP-GLES2.functional.uniform_api.value.initial.g"
#define VkglTestCase_014307_2 "et_uniform.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014307, VkglTestCase_014307_1, VkglTestCase_014307_2);

#define VkglTestCase_014308_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014308_2 ".get_uniform.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014308, VkglTestCase_014308_1, VkglTestCase_014308_2);

#define VkglTestCase_014626_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_014626_2 "inter.get_uniform.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014626, VkglTestCase_014626_1, VkglTestCase_014626_2);

#define VkglTestCase_014627_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_014627_2 "nter.get_uniform.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014627, VkglTestCase_014627_1, VkglTestCase_014627_2);

#define VkglTestCase_014628_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014628_2 "ointer.get_uniform.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014628, VkglTestCase_014628_1, VkglTestCase_014628_2);

#define VkglTestCase_014930_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_014930_2 "alue.get_uniform.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014930, VkglTestCase_014930_1, VkglTestCase_014930_2);

#define VkglTestCase_014931_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_014931_2 "lue.get_uniform.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014931, VkglTestCase_014931_1, VkglTestCase_014931_2);

#define VkglTestCase_014932_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014932_2 "value.get_uniform.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014932, VkglTestCase_014932_1, VkglTestCase_014932_2);
