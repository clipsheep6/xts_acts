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

#define VkglTestCase_037306_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037306_2 "l.render.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037306, VkglTestCase_037306_1, VkglTestCase_037306_2);

#define VkglTestCase_037307_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037307_2 ".render.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037307, VkglTestCase_037307_1, VkglTestCase_037307_2);

#define VkglTestCase_037308_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037308_2 "al.render.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037308, VkglTestCase_037308_1, VkglTestCase_037308_2);

#define VkglTestCase_037831_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037831_2 "pointer.render.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037831, VkglTestCase_037831_1, VkglTestCase_037831_2);

#define VkglTestCase_037832_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037832_2 "ointer.render.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037832, VkglTestCase_037832_1, VkglTestCase_037832_2);

#define VkglTestCase_037833_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037833_2 "_pointer.render.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037833, VkglTestCase_037833_1, VkglTestCase_037833_2);

#define VkglTestCase_038200_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_038200_2 "_value.render.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038200, VkglTestCase_038200_1, VkglTestCase_038200_2);

#define VkglTestCase_038201_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038201_2 "value.render.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038201, VkglTestCase_038201_1, VkglTestCase_038201_2);

#define VkglTestCase_038202_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038202_2 "y_value.render.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038202, VkglTestCase_038202_1, VkglTestCase_038202_2);
