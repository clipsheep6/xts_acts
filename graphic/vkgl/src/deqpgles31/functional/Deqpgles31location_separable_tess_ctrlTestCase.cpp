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

#define VkglTestCase_021857_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_021857_2 ".program_input.location.separable_tess_ctrl.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021857, VkglTestCase_021857_1, VkglTestCase_021857_2);

#define VkglTestCase_021858_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_021858_2 "input.location.separable_tess_ctrl.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021858, VkglTestCase_021858_1, VkglTestCase_021858_2);

#define VkglTestCase_022451_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022451_2 "program_output.location.separable_tess_ctrl.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022451, VkglTestCase_022451_1, VkglTestCase_022451_2);

#define VkglTestCase_022452_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022452_2 "utput.location.separable_tess_ctrl.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022452, VkglTestCase_022452_1, VkglTestCase_022452_2);

#define VkglTestCase_022453_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022453_2 "gram_output.location.separable_tess_ctrl.patch_var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022453, VkglTestCase_022453_1, VkglTestCase_022453_2);

#define VkglTestCase_022454_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022454_2 "ut.location.separable_tess_ctrl.patch_var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022454, VkglTestCase_022454_1, VkglTestCase_022454_2);

#define VkglTestCase_022455_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022455_2 "m_output.location.separable_tess_ctrl.patch_var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022455, VkglTestCase_022455_1, VkglTestCase_022455_2);

#define VkglTestCase_022456_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022456_2 "location.separable_tess_ctrl.patch_var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022456, VkglTestCase_022456_1, VkglTestCase_022456_2);

#define VkglTestCase_022457_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022457_2 "m_output.location.separable_tess_ctrl.patch_var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022457, VkglTestCase_022457_1, VkglTestCase_022457_2);

#define VkglTestCase_022458_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022458_2 "location.separable_tess_ctrl.patch_var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022458, VkglTestCase_022458_1, VkglTestCase_022458_2);
