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

#define VkglTestCase_021265_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021265_2 "ed_by_shader.vertex_geo_fragment_only_vertex.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021265, VkglTestCase_021265_1, VkglTestCase_021265_2);

#define VkglTestCase_021266_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021266_2 "by_shader.vertex_geo_fragment_only_vertex.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021266, VkglTestCase_021266_1, VkglTestCase_021266_2);

#define VkglTestCase_021267_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021267_2 "y_shader.vertex_geo_fragment_only_vertex.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021267, VkglTestCase_021267_1, VkglTestCase_021267_2);

#define VkglTestCase_021268_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021268_2 "d_by_shader.vertex_geo_fragment_only_vertex.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021268, VkglTestCase_021268_1, VkglTestCase_021268_2);

#define VkglTestCase_021269_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021269_2 "y_shader.vertex_geo_fragment_only_vertex.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021269, VkglTestCase_021269_1, VkglTestCase_021269_2);

#define VkglTestCase_021270_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021270_2 "_shader.vertex_geo_fragment_only_vertex.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021270, VkglTestCase_021270_1, VkglTestCase_021270_2);

#define VkglTestCase_021271_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021271_2 "by_shader.vertex_geo_fragment_only_vertex.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021271, VkglTestCase_021271_1, VkglTestCase_021271_2);

#define VkglTestCase_021272_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021272_2 "shader.vertex_geo_fragment_only_vertex.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021272, VkglTestCase_021272_1, VkglTestCase_021272_2);
