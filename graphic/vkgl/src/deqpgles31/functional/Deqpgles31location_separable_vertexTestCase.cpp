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

#define VkglTestCase_021849_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021849_2 "y.program_input.location.separable_vertex.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021849, VkglTestCase_021849_1, VkglTestCase_021849_2);

#define VkglTestCase_021850_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_021850_2 "_input.location.separable_vertex.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021850, VkglTestCase_021850_1, VkglTestCase_021850_2);

#define VkglTestCase_022441_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022441_2 "y.program_output.location.separable_vertex.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022441, VkglTestCase_022441_1, VkglTestCase_022441_2);

#define VkglTestCase_022442_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022442_2 "_output.location.separable_vertex.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022442, VkglTestCase_022442_1, VkglTestCase_022442_2);

#define VkglTestCase_022443_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022443_2 "ogram_output.location.separable_vertex.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022443, VkglTestCase_022443_1, VkglTestCase_022443_2);

#define VkglTestCase_022444_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022444_2 "put.location.separable_vertex.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022444, VkglTestCase_022444_1, VkglTestCase_022444_2);

#define VkglTestCase_022445_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022445_2 "rogram_output.location.separable_vertex.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022445, VkglTestCase_022445_1, VkglTestCase_022445_2);

#define VkglTestCase_022446_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022446_2 "tput.location.separable_vertex.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022446, VkglTestCase_022446_1, VkglTestCase_022446_2);
