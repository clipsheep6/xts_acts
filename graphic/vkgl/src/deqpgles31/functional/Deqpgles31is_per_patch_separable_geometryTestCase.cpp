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

#define VkglTestCase_022323_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022323_2 "rogram_input.is_per_patch.separable_geometry.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022323, VkglTestCase_022323_1, VkglTestCase_022323_2);

#define VkglTestCase_022945_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022945_2 "rogram_output.is_per_patch.separable_geometry.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022945, VkglTestCase_022945_1, VkglTestCase_022945_2);

#define VkglTestCase_022946_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022946_2 "am_output.is_per_patch.separable_geometry.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022946, VkglTestCase_022946_1, VkglTestCase_022946_2);

#define VkglTestCase_022947_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022947_2 "ram_output.is_per_patch.separable_geometry.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022947, VkglTestCase_022947_1, VkglTestCase_022947_2);
