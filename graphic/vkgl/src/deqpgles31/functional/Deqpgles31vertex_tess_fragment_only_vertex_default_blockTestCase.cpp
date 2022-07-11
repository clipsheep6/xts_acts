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

#define VkglTestCase_021180_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021180_2 "d_by_shader.vertex_tess_fragment_only_vertex.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021180, VkglTestCase_021180_1, VkglTestCase_021180_2);

#define VkglTestCase_021181_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021181_2 "y_shader.vertex_tess_fragment_only_vertex.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021181, VkglTestCase_021181_1, VkglTestCase_021181_2);

#define VkglTestCase_021182_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021182_2 "y_shader.vertex_tess_fragment_only_vertex.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021182, VkglTestCase_021182_1, VkglTestCase_021182_2);

#define VkglTestCase_021183_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021183_2 "_by_shader.vertex_tess_fragment_only_vertex.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021183, VkglTestCase_021183_1, VkglTestCase_021183_2);

#define VkglTestCase_021184_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021184_2 "_shader.vertex_tess_fragment_only_vertex.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021184, VkglTestCase_021184_1, VkglTestCase_021184_2);

#define VkglTestCase_021185_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021185_2 "_shader.vertex_tess_fragment_only_vertex.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021185, VkglTestCase_021185_1, VkglTestCase_021185_2);

#define VkglTestCase_021186_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021186_2 "y_shader.vertex_tess_fragment_only_vertex.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021186, VkglTestCase_021186_1, VkglTestCase_021186_2);

#define VkglTestCase_021187_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021187_2 "hader.vertex_tess_fragment_only_vertex.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021187, VkglTestCase_021187_1, VkglTestCase_021187_2);
