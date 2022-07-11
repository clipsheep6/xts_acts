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

#define VkglTestCase_021774_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_021774_2 "ogram_input.resource_list.separable_fragment.empty"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021774, VkglTestCase_021774_1, VkglTestCase_021774_2);

#define VkglTestCase_021775_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_021775_2 "rogram_input.resource_list.separable_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021775, VkglTestCase_021775_1, VkglTestCase_021775_2);

#define VkglTestCase_021776_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_021776_2 "am_input.resource_list.separable_fragment.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021776, VkglTestCase_021776_1, VkglTestCase_021776_2);

#define VkglTestCase_021777_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_021777_2 "ram_input.resource_list.separable_fragment.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021777, VkglTestCase_021777_1, VkglTestCase_021777_2);

#define VkglTestCase_022355_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022355_2 "gram_output.resource_list.separable_fragment.empty"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022355, VkglTestCase_022355_1, VkglTestCase_022355_2);

#define VkglTestCase_022356_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022356_2 "ogram_output.resource_list.separable_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022356, VkglTestCase_022356_1, VkglTestCase_022356_2);

#define VkglTestCase_022357_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022357_2 "am_output.resource_list.separable_fragment.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022357, VkglTestCase_022357_1, VkglTestCase_022357_2);
