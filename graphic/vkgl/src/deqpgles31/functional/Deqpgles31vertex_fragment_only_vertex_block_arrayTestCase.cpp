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

#define VkglTestCase_021143_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021143_2 "enced_by_shader.vertex_fragment_only_vertex.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021143, VkglTestCase_021143_1, VkglTestCase_021143_2);

#define VkglTestCase_021144_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021144_2 "ed_by_shader.vertex_fragment_only_vertex.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021144, VkglTestCase_021144_1, VkglTestCase_021144_2);

#define VkglTestCase_021145_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021145_2 "d_by_shader.vertex_fragment_only_vertex.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021145, VkglTestCase_021145_1, VkglTestCase_021145_2);

#define VkglTestCase_024261_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024261_2 "e.referenced_by.vertex_fragment_only_vertex.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024261, VkglTestCase_024261_1, VkglTestCase_024261_2);

#define VkglTestCase_024262_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.r"
#define VkglTestCase_024262_2 "eferenced_by.vertex_fragment_only_vertex.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024262, VkglTestCase_024262_1, VkglTestCase_024262_2);

#define VkglTestCase_024263_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.r"
#define VkglTestCase_024263_2 "eferenced_by.vertex_fragment_only_vertex.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024263, VkglTestCase_024263_1, VkglTestCase_024263_2);
