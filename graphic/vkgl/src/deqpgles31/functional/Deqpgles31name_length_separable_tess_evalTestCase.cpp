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

#define VkglTestCase_021917_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_021917_2 "rogram_input.name_length.separable_tess_eval.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021917, VkglTestCase_021917_1, VkglTestCase_021917_2);

#define VkglTestCase_021918_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_021918_2 "ram_input.name_length.separable_tess_eval.patch_var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021918, VkglTestCase_021918_1, VkglTestCase_021918_2);

#define VkglTestCase_021919_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_021919_2 "_input.name_length.separable_tess_eval.patch_var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021919, VkglTestCase_021919_1, VkglTestCase_021919_2);

#define VkglTestCase_021920_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_021920_2 "_input.name_length.separable_tess_eval.patch_var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021920, VkglTestCase_021920_1, VkglTestCase_021920_2);

#define VkglTestCase_022524_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022524_2 "rogram_output.name_length.separable_tess_eval.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022524, VkglTestCase_022524_1, VkglTestCase_022524_2);

#define VkglTestCase_022525_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022525_2 "am_output.name_length.separable_tess_eval.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022525, VkglTestCase_022525_1, VkglTestCase_022525_2);

#define VkglTestCase_022526_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022526_2 "ram_output.name_length.separable_tess_eval.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022526, VkglTestCase_022526_1, VkglTestCase_022526_2);

#define VkglTestCase_023067_1 "dEQP-GLES31.functional.program_interface_query.transform_feedb"
#define VkglTestCase_023067_2 "ack_varying.name_length.separable_tess_eval.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023067, VkglTestCase_023067_1, VkglTestCase_023067_2);

#define VkglTestCase_023068_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback"
#define VkglTestCase_023068_2 "_varying.name_length.separable_tess_eval.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023068, VkglTestCase_023068_1, VkglTestCase_023068_2);

#define VkglTestCase_023069_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_023069_2 "varying.name_length.separable_tess_eval.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023069, VkglTestCase_023069_1, VkglTestCase_023069_2);

#define VkglTestCase_023070_1 "dEQP-GLES31.functional.program_interface_query.transform_feedb"
#define VkglTestCase_023070_2 "ack_varying.name_length.separable_tess_eval.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023070, VkglTestCase_023070_1, VkglTestCase_023070_2);

#define VkglTestCase_023071_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_023071_2 "varying.name_length.separable_tess_eval.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023071, VkglTestCase_023071_1, VkglTestCase_023071_2);
