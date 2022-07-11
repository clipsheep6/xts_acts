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

#define VkglTestCase_021129_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021129_2 "nced_by_shader.vertex_fragment_only_vertex.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021129, VkglTestCase_021129_1, VkglTestCase_021129_2);

#define VkglTestCase_021130_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021130_2 "d_by_shader.vertex_fragment_only_vertex.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021130, VkglTestCase_021130_1, VkglTestCase_021130_2);

#define VkglTestCase_021131_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021131_2 "_by_shader.vertex_fragment_only_vertex.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021131, VkglTestCase_021131_1, VkglTestCase_021131_2);

#define VkglTestCase_021132_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021132_2 "ced_by_shader.vertex_fragment_only_vertex.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021132, VkglTestCase_021132_1, VkglTestCase_021132_2);

#define VkglTestCase_021133_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021133_2 "_by_shader.vertex_fragment_only_vertex.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021133, VkglTestCase_021133_1, VkglTestCase_021133_2);

#define VkglTestCase_021134_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021134_2 "by_shader.vertex_fragment_only_vertex.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021134, VkglTestCase_021134_1, VkglTestCase_021134_2);

#define VkglTestCase_021135_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021135_2 "d_by_shader.vertex_fragment_only_vertex.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021135, VkglTestCase_021135_1, VkglTestCase_021135_2);

#define VkglTestCase_021136_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021136_2 "y_shader.vertex_fragment_only_vertex.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021136, VkglTestCase_021136_1, VkglTestCase_021136_2);
