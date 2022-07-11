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

#define VkglTestCase_022319_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022319_2 "rogram_input.is_per_patch.separable_tess_eval.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022319, VkglTestCase_022319_1, VkglTestCase_022319_2);

#define VkglTestCase_022320_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022320_2 "ram_input.is_per_patch.separable_tess_eval.patch_var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022320, VkglTestCase_022320_1, VkglTestCase_022320_2);

#define VkglTestCase_022321_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022321_2 "input.is_per_patch.separable_tess_eval.patch_var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022321, VkglTestCase_022321_1, VkglTestCase_022321_2);

#define VkglTestCase_022322_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022322_2 "_input.is_per_patch.separable_tess_eval.patch_var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022322, VkglTestCase_022322_1, VkglTestCase_022322_2);

#define VkglTestCase_022942_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022942_2 "ogram_output.is_per_patch.separable_tess_eval.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022942, VkglTestCase_022942_1, VkglTestCase_022942_2);

#define VkglTestCase_022943_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022943_2 "am_output.is_per_patch.separable_tess_eval.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022943, VkglTestCase_022943_1, VkglTestCase_022943_2);

#define VkglTestCase_022944_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022944_2 "am_output.is_per_patch.separable_tess_eval.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022944, VkglTestCase_022944_1, VkglTestCase_022944_2);
