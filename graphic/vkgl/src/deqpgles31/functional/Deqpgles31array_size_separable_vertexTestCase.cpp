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

#define VkglTestCase_021813_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_021813_2 ".program_input.array_size.separable_vertex.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021813, VkglTestCase_021813_1, VkglTestCase_021813_2);

#define VkglTestCase_022398_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022398_2 ".program_output.array_size.separable_vertex.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022398, VkglTestCase_022398_1, VkglTestCase_022398_2);

#define VkglTestCase_022399_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022399_2 "gram_output.array_size.separable_vertex.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022399, VkglTestCase_022399_1, VkglTestCase_022399_2);

#define VkglTestCase_022400_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022400_2 "ogram_output.array_size.separable_vertex.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022400, VkglTestCase_022400_1, VkglTestCase_022400_2);

#define VkglTestCase_023027_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023027_2 "dback_varying.array_size.separable_vertex.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023027, VkglTestCase_023027_1, VkglTestCase_023027_2);

#define VkglTestCase_023028_1 "dEQP-GLES31.functional.program_interface_query.transform_feedba"
#define VkglTestCase_023028_2 "ck_varying.array_size.separable_vertex.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023028, VkglTestCase_023028_1, VkglTestCase_023028_2);

#define VkglTestCase_023029_1 "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
#define VkglTestCase_023029_2 "k_varying.array_size.separable_vertex.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023029, VkglTestCase_023029_1, VkglTestCase_023029_2);

#define VkglTestCase_023030_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023030_2 "dback_varying.array_size.separable_vertex.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023030, VkglTestCase_023030_1, VkglTestCase_023030_2);

#define VkglTestCase_023031_1 "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
#define VkglTestCase_023031_2 "k_varying.array_size.separable_vertex.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023031, VkglTestCase_023031_1, VkglTestCase_023031_2);
