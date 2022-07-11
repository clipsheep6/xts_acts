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

#define VkglTestCase_021911_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_021911_2 ".program_input.name_length.vertex_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021911, VkglTestCase_021911_1, VkglTestCase_021911_2);

#define VkglTestCase_022513_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022513_2 ".program_output.name_length.vertex_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022513, VkglTestCase_022513_1, VkglTestCase_022513_2);

#define VkglTestCase_022514_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022514_2 "ogram_output.name_length.vertex_fragment.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022514, VkglTestCase_022514_1, VkglTestCase_022514_2);

#define VkglTestCase_023042_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023042_2 "dback_varying.name_length.vertex_fragment.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023042, VkglTestCase_023042_1, VkglTestCase_023042_2);

#define VkglTestCase_023043_1 "dEQP-GLES31.functional.program_interface_query.transform_feedba"
#define VkglTestCase_023043_2 "ck_varying.name_length.vertex_fragment.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023043, VkglTestCase_023043_1, VkglTestCase_023043_2);

#define VkglTestCase_023044_1 "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
#define VkglTestCase_023044_2 "k_varying.name_length.vertex_fragment.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023044, VkglTestCase_023044_1, VkglTestCase_023044_2);

#define VkglTestCase_023045_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023045_2 "dback_varying.name_length.vertex_fragment.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023045, VkglTestCase_023045_1, VkglTestCase_023045_2);

#define VkglTestCase_023046_1 "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
#define VkglTestCase_023046_2 "k_varying.name_length.vertex_fragment.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023046, VkglTestCase_023046_1, VkglTestCase_023046_2);
