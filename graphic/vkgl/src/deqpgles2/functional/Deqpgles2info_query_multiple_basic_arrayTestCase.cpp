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

#define VkglTestCase_014128_1 "dEQP-GLES2.functional.uniform_api.in"
#define VkglTestCase_014128_2 "fo_query.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014128, VkglTestCase_014128_1, VkglTestCase_014128_2);

#define VkglTestCase_014129_1 "dEQP-GLES2.functional.uniform_api.inf"
#define VkglTestCase_014129_2 "o_query.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014129, VkglTestCase_014129_1, VkglTestCase_014129_2);

#define VkglTestCase_014130_1 "dEQP-GLES2.functional.uniform_api.i"
#define VkglTestCase_014130_2 "nfo_query.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014130, VkglTestCase_014130_1, VkglTestCase_014130_2);
