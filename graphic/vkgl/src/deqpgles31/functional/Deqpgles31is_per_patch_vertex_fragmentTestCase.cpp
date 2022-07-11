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

#define VkglTestCase_022313_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022313_2 ".program_input.is_per_patch.vertex_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022313, VkglTestCase_022313_1, VkglTestCase_022313_2);

#define VkglTestCase_022931_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022931_2 "program_output.is_per_patch.vertex_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022931, VkglTestCase_022931_1, VkglTestCase_022931_2);

#define VkglTestCase_022932_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022932_2 "gram_output.is_per_patch.vertex_fragment.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022932, VkglTestCase_022932_1, VkglTestCase_022932_2);
