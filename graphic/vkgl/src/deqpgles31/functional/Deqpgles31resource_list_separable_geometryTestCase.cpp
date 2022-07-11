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

#define VkglTestCase_021785_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_021785_2 "ogram_input.resource_list.separable_geometry.empty"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021785, VkglTestCase_021785_1, VkglTestCase_021785_2);

#define VkglTestCase_021786_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_021786_2 "rogram_input.resource_list.separable_geometry.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021786, VkglTestCase_021786_1, VkglTestCase_021786_2);

#define VkglTestCase_022367_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022367_2 "gram_output.resource_list.separable_geometry.empty"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022367, VkglTestCase_022367_1, VkglTestCase_022367_2);

#define VkglTestCase_022368_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022368_2 "ogram_output.resource_list.separable_geometry.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022368, VkglTestCase_022368_1, VkglTestCase_022368_2);

#define VkglTestCase_022369_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022369_2 "am_output.resource_list.separable_geometry.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022369, VkglTestCase_022369_1, VkglTestCase_022369_2);

#define VkglTestCase_022370_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022370_2 "am_output.resource_list.separable_geometry.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022370, VkglTestCase_022370_1, VkglTestCase_022370_2);

#define VkglTestCase_023002_1 "dEQP-GLES31.functional.program_interface_query.transform_feedba"
#define VkglTestCase_023002_2 "ck_varying.resource_list.separable_geometry.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023002, VkglTestCase_023002_1, VkglTestCase_023002_2);

#define VkglTestCase_023003_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback"
#define VkglTestCase_023003_2 "_varying.resource_list.separable_geometry.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023003, VkglTestCase_023003_1, VkglTestCase_023003_2);

#define VkglTestCase_023004_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_v"
#define VkglTestCase_023004_2 "arying.resource_list.separable_geometry.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023004, VkglTestCase_023004_1, VkglTestCase_023004_2);

#define VkglTestCase_023005_1 "dEQP-GLES31.functional.program_interface_query.transform_feedba"
#define VkglTestCase_023005_2 "ck_varying.resource_list.separable_geometry.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023005, VkglTestCase_023005_1, VkglTestCase_023005_2);

#define VkglTestCase_023006_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_v"
#define VkglTestCase_023006_2 "arying.resource_list.separable_geometry.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023006, VkglTestCase_023006_1, VkglTestCase_023006_2);
