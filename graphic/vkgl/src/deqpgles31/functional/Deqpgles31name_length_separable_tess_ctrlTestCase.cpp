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

#define VkglTestCase_021916_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_021916_2 "rogram_input.name_length.separable_tess_ctrl.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021916, VkglTestCase_021916_1, VkglTestCase_021916_2);

#define VkglTestCase_022520_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022520_2 "rogram_output.name_length.separable_tess_ctrl.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022520, VkglTestCase_022520_1, VkglTestCase_022520_2);

#define VkglTestCase_022521_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022521_2 "ram_output.name_length.separable_tess_ctrl.patch_var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022521, VkglTestCase_022521_1, VkglTestCase_022521_2);

#define VkglTestCase_022522_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022522_2 "output.name_length.separable_tess_ctrl.patch_var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022522, VkglTestCase_022522_1, VkglTestCase_022522_2);

#define VkglTestCase_022523_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022523_2 "_output.name_length.separable_tess_ctrl.patch_var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022523, VkglTestCase_022523_1, VkglTestCase_022523_2);
