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

#define VkglTestCase_021817_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_021817_2 "program_input.array_size.separable_tess_ctrl.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021817, VkglTestCase_021817_1, VkglTestCase_021817_2);

#define VkglTestCase_022403_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022403_2 "rogram_output.array_size.separable_tess_ctrl.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022403, VkglTestCase_022403_1, VkglTestCase_022403_2);

#define VkglTestCase_022404_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022404_2 "ram_output.array_size.separable_tess_ctrl.patch_var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022404, VkglTestCase_022404_1, VkglTestCase_022404_2);

#define VkglTestCase_022405_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022405_2 "_output.array_size.separable_tess_ctrl.patch_var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022405, VkglTestCase_022405_1, VkglTestCase_022405_2);

#define VkglTestCase_022406_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022406_2 "_output.array_size.separable_tess_ctrl.patch_var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022406, VkglTestCase_022406_1, VkglTestCase_022406_2);
