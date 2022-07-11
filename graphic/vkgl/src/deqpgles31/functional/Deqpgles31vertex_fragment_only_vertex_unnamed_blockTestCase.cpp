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

#define VkglTestCase_021140_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021140_2 "nced_by_shader.vertex_fragment_only_vertex.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021140, VkglTestCase_021140_1, VkglTestCase_021140_2);

#define VkglTestCase_021141_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021141_2 "d_by_shader.vertex_fragment_only_vertex.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021141, VkglTestCase_021141_1, VkglTestCase_021141_2);

#define VkglTestCase_021142_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021142_2 "_by_shader.vertex_fragment_only_vertex.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021142, VkglTestCase_021142_1, VkglTestCase_021142_2);

#define VkglTestCase_024258_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024258_2 ".referenced_by.vertex_fragment_only_vertex.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024258, VkglTestCase_024258_1, VkglTestCase_024258_2);

#define VkglTestCase_024259_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.re"
#define VkglTestCase_024259_2 "ferenced_by.vertex_fragment_only_vertex.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024259, VkglTestCase_024259_1, VkglTestCase_024259_2);

#define VkglTestCase_024260_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.re"
#define VkglTestCase_024260_2 "ferenced_by.vertex_fragment_only_vertex.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024260, VkglTestCase_024260_1, VkglTestCase_024260_2);
