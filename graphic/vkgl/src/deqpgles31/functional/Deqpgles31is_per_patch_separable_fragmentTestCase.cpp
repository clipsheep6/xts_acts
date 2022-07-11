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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022315_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022315_2 "rogram_input.is_per_patch.separable_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022315, VkglTestCase_022315_1, VkglTestCase_022315_2);

#define VkglTestCase_022316_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022316_2 "ram_input.is_per_patch.separable_fragment.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022316, VkglTestCase_022316_1, VkglTestCase_022316_2);

#define VkglTestCase_022317_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022317_2 "ram_input.is_per_patch.separable_fragment.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022317, VkglTestCase_022317_1, VkglTestCase_022317_2);

#define VkglTestCase_022936_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022936_2 "rogram_output.is_per_patch.separable_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022936, VkglTestCase_022936_1, VkglTestCase_022936_2);

#define VkglTestCase_022937_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022937_2 "ram_output.is_per_patch.separable_fragment.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022937, VkglTestCase_022937_1, VkglTestCase_022937_2);
