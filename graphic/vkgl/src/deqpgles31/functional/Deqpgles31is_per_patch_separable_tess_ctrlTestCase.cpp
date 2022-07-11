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
#include "../ActsDeqpgles310023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022318_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022318_2 "rogram_input.is_per_patch.separable_tess_ctrl.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022318, VkglTestCase_022318_1, VkglTestCase_022318_2);

#define VkglTestCase_022938_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022938_2 "ogram_output.is_per_patch.separable_tess_ctrl.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022938, VkglTestCase_022938_1, VkglTestCase_022938_2);

#define VkglTestCase_022939_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022939_2 "am_output.is_per_patch.separable_tess_ctrl.patch_var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022939, VkglTestCase_022939_1, VkglTestCase_022939_2);

#define VkglTestCase_022940_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022940_2 "output.is_per_patch.separable_tess_ctrl.patch_var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022940, VkglTestCase_022940_1, VkglTestCase_022940_2);

#define VkglTestCase_022941_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022941_2 "output.is_per_patch.separable_tess_ctrl.patch_var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022941, VkglTestCase_022941_1, VkglTestCase_022941_2);
