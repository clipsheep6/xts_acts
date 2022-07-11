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
#include "../ActsDeqpgles310022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021913_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_021913_2 "program_input.name_length.separable_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021913, VkglTestCase_021913_1, VkglTestCase_021913_2);

#define VkglTestCase_021914_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_021914_2 "ram_input.name_length.separable_fragment.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021914, VkglTestCase_021914_1, VkglTestCase_021914_2);

#define VkglTestCase_021915_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_021915_2 "gram_input.name_length.separable_fragment.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021915, VkglTestCase_021915_1, VkglTestCase_021915_2);

#define VkglTestCase_022518_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022518_2 "rogram_output.name_length.separable_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022518, VkglTestCase_022518_1, VkglTestCase_022518_2);

#define VkglTestCase_022519_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022519_2 "ram_output.name_length.separable_fragment.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022519, VkglTestCase_022519_1, VkglTestCase_022519_2);
