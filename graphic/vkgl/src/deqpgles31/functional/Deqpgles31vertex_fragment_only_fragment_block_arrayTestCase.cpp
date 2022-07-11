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

#define VkglTestCase_021160_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021160_2 "nced_by_shader.vertex_fragment_only_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021160, VkglTestCase_021160_1, VkglTestCase_021160_2);

#define VkglTestCase_021161_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021161_2 "d_by_shader.vertex_fragment_only_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021161, VkglTestCase_021161_1, VkglTestCase_021161_2);

#define VkglTestCase_021162_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021162_2 "_by_shader.vertex_fragment_only_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021162, VkglTestCase_021162_1, VkglTestCase_021162_2);

#define VkglTestCase_024270_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024270_2 ".referenced_by.vertex_fragment_only_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024270, VkglTestCase_024270_1, VkglTestCase_024270_2);

#define VkglTestCase_024271_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.re"
#define VkglTestCase_024271_2 "ferenced_by.vertex_fragment_only_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024271, VkglTestCase_024271_1, VkglTestCase_024271_2);

#define VkglTestCase_024272_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.re"
#define VkglTestCase_024272_2 "ferenced_by.vertex_fragment_only_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024272, VkglTestCase_024272_1, VkglTestCase_024272_2);
