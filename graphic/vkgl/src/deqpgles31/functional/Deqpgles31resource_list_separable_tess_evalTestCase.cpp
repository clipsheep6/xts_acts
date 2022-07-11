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

#define VkglTestCase_021780_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_021780_2 "gram_input.resource_list.separable_tess_eval.empty"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021780, VkglTestCase_021780_1, VkglTestCase_021780_2);

#define VkglTestCase_021781_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_021781_2 "ogram_input.resource_list.separable_tess_eval.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021781, VkglTestCase_021781_1, VkglTestCase_021781_2);

#define VkglTestCase_021782_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_021782_2 "am_input.resource_list.separable_tess_eval.patch_var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021782, VkglTestCase_021782_1, VkglTestCase_021782_2);

#define VkglTestCase_021783_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_021783_2 "input.resource_list.separable_tess_eval.patch_var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021783, VkglTestCase_021783_1, VkglTestCase_021783_2);

#define VkglTestCase_021784_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_021784_2 "input.resource_list.separable_tess_eval.patch_var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021784, VkglTestCase_021784_1, VkglTestCase_021784_2);

#define VkglTestCase_022363_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022363_2 "gram_output.resource_list.separable_tess_eval.empty"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022363, VkglTestCase_022363_1, VkglTestCase_022363_2);

#define VkglTestCase_022364_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022364_2 "ogram_output.resource_list.separable_tess_eval.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022364, VkglTestCase_022364_1, VkglTestCase_022364_2);

#define VkglTestCase_022365_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022365_2 "m_output.resource_list.separable_tess_eval.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022365, VkglTestCase_022365_1, VkglTestCase_022365_2);

#define VkglTestCase_022366_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022366_2 "am_output.resource_list.separable_tess_eval.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022366, VkglTestCase_022366_1, VkglTestCase_022366_2);

#define VkglTestCase_022997_1 "dEQP-GLES31.functional.program_interface_query.transform_feedba"
#define VkglTestCase_022997_2 "ck_varying.resource_list.separable_tess_eval.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022997, VkglTestCase_022997_1, VkglTestCase_022997_2);

#define VkglTestCase_022998_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_022998_2 "varying.resource_list.separable_tess_eval.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022998, VkglTestCase_022998_1, VkglTestCase_022998_2);

#define VkglTestCase_022999_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_v"
#define VkglTestCase_022999_2 "arying.resource_list.separable_tess_eval.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022999, VkglTestCase_022999_1, VkglTestCase_022999_2);

#define VkglTestCase_023000_1 "dEQP-GLES31.functional.program_interface_query.transform_feedba"
#define VkglTestCase_023000_2 "ck_varying.resource_list.separable_tess_eval.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023000, VkglTestCase_023000_1, VkglTestCase_023000_2);

#define VkglTestCase_023001_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_v"
#define VkglTestCase_023001_2 "arying.resource_list.separable_tess_eval.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023001, VkglTestCase_023001_1, VkglTestCase_023001_2);
