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

#define VkglTestCase_037126_1 "dEQP-GLES3.functional.uniform_api.value.initial."
#define VkglTestCase_037126_2 "get_uniform.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037126, VkglTestCase_037126_1, VkglTestCase_037126_2);

#define VkglTestCase_037127_1 "dEQP-GLES3.functional.uniform_api.value.initial.g"
#define VkglTestCase_037127_2 "et_uniform.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037127, VkglTestCase_037127_1, VkglTestCase_037127_2);

#define VkglTestCase_037128_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037128_2 ".get_uniform.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037128, VkglTestCase_037128_1, VkglTestCase_037128_2);

#define VkglTestCase_037609_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_037609_2 "inter.get_uniform.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037609, VkglTestCase_037609_1, VkglTestCase_037609_2);

#define VkglTestCase_037610_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_037610_2 "nter.get_uniform.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037610, VkglTestCase_037610_1, VkglTestCase_037610_2);

#define VkglTestCase_037611_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037611_2 "ointer.get_uniform.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037611, VkglTestCase_037611_1, VkglTestCase_037611_2);

#define VkglTestCase_038053_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_038053_2 "alue.get_uniform.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038053, VkglTestCase_038053_1, VkglTestCase_038053_2);

#define VkglTestCase_038054_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_038054_2 "lue.get_uniform.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038054, VkglTestCase_038054_1, VkglTestCase_038054_2);

#define VkglTestCase_038055_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038055_2 "value.get_uniform.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038055, VkglTestCase_038055_1, VkglTestCase_038055_2);
