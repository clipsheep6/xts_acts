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

#define VkglTestCase_021778_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_021778_2 "gram_input.resource_list.separable_tess_ctrl.empty"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021778, VkglTestCase_021778_1, VkglTestCase_021778_2);

#define VkglTestCase_021779_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_021779_2 "ogram_input.resource_list.separable_tess_ctrl.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021779, VkglTestCase_021779_1, VkglTestCase_021779_2);

#define VkglTestCase_022358_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022358_2 "gram_output.resource_list.separable_tess_ctrl.empty"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022358, VkglTestCase_022358_1, VkglTestCase_022358_2);

#define VkglTestCase_022359_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022359_2 "ogram_output.resource_list.separable_tess_ctrl.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022359, VkglTestCase_022359_1, VkglTestCase_022359_2);

#define VkglTestCase_022360_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022360_2 "am_output.resource_list.separable_tess_ctrl.patch_var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022360, VkglTestCase_022360_1, VkglTestCase_022360_2);

#define VkglTestCase_022361_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022361_2 "utput.resource_list.separable_tess_ctrl.patch_var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022361, VkglTestCase_022361_1, VkglTestCase_022361_2);

#define VkglTestCase_022362_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022362_2 "output.resource_list.separable_tess_ctrl.patch_var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022362, VkglTestCase_022362_1, VkglTestCase_022362_2);
