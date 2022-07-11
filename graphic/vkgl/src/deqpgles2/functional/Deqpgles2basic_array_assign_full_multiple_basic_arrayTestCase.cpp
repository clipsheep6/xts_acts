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
#include "../ActsDeqpgles20016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015089_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015089_2 "asic_array_assign_full.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015089, VkglTestCase_015089_1, VkglTestCase_015089_2);

#define VkglTestCase_015090_1 "dEQP-GLES2.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_015090_2 "sic_array_assign_full.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015090, VkglTestCase_015090_1, VkglTestCase_015090_2);

#define VkglTestCase_015091_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015091_2 "basic_array_assign_full.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015091, VkglTestCase_015091_1, VkglTestCase_015091_2);
