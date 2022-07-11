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

#define VkglTestCase_021818_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_021818_2 "program_input.array_size.separable_tess_eval.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021818, VkglTestCase_021818_1, VkglTestCase_021818_2);

#define VkglTestCase_021819_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_021819_2 "gram_input.array_size.separable_tess_eval.patch_var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021819, VkglTestCase_021819_1, VkglTestCase_021819_2);

#define VkglTestCase_021820_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_021820_2 "_input.array_size.separable_tess_eval.patch_var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021820, VkglTestCase_021820_1, VkglTestCase_021820_2);

#define VkglTestCase_021821_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_021821_2 "m_input.array_size.separable_tess_eval.patch_var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021821, VkglTestCase_021821_1, VkglTestCase_021821_2);

#define VkglTestCase_022407_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022407_2 "rogram_output.array_size.separable_tess_eval.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022407, VkglTestCase_022407_1, VkglTestCase_022407_2);

#define VkglTestCase_022408_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022408_2 "ram_output.array_size.separable_tess_eval.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022408, VkglTestCase_022408_1, VkglTestCase_022408_2);

#define VkglTestCase_022409_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022409_2 "ram_output.array_size.separable_tess_eval.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022409, VkglTestCase_022409_1, VkglTestCase_022409_2);

#define VkglTestCase_023032_1 "dEQP-GLES31.functional.program_interface_query.transform_feedb"
#define VkglTestCase_023032_2 "ack_varying.array_size.separable_tess_eval.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023032, VkglTestCase_023032_1, VkglTestCase_023032_2);

#define VkglTestCase_023033_1 "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
#define VkglTestCase_023033_2 "k_varying.array_size.separable_tess_eval.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023033, VkglTestCase_023033_1, VkglTestCase_023033_2);

#define VkglTestCase_023034_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_023034_2 "varying.array_size.separable_tess_eval.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023034, VkglTestCase_023034_1, VkglTestCase_023034_2);

#define VkglTestCase_023035_1 "dEQP-GLES31.functional.program_interface_query.transform_feedb"
#define VkglTestCase_023035_2 "ack_varying.array_size.separable_tess_eval.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023035, VkglTestCase_023035_1, VkglTestCase_023035_2);

#define VkglTestCase_023036_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_023036_2 "varying.array_size.separable_tess_eval.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023036, VkglTestCase_023036_1, VkglTestCase_023036_2);
