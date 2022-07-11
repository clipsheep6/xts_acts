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
#include "../ActsDeqpgles30039TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_038251_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038251_2 "asic_array_assign_full.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038251, VkglTestCase_038251_1, VkglTestCase_038251_2);

#define VkglTestCase_038252_1 "dEQP-GLES3.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_038252_2 "sic_array_assign_full.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038252, VkglTestCase_038252_1, VkglTestCase_038252_2);

#define VkglTestCase_038253_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038253_2 "basic_array_assign_full.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038253, VkglTestCase_038253_1, VkglTestCase_038253_2);
