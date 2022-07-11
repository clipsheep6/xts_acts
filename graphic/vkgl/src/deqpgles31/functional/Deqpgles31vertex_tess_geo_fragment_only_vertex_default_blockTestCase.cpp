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

#define VkglTestCase_021333_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021333_2 "by_shader.vertex_tess_geo_fragment_only_vertex.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021333, VkglTestCase_021333_1, VkglTestCase_021333_2);

#define VkglTestCase_021334_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021334_2 "shader.vertex_tess_geo_fragment_only_vertex.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021334, VkglTestCase_021334_1, VkglTestCase_021334_2);

#define VkglTestCase_021335_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021335_2 "shader.vertex_tess_geo_fragment_only_vertex.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021335, VkglTestCase_021335_1, VkglTestCase_021335_2);

#define VkglTestCase_021336_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021336_2 "y_shader.vertex_tess_geo_fragment_only_vertex.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021336, VkglTestCase_021336_1, VkglTestCase_021336_2);

#define VkglTestCase_021337_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021337_2 "hader.vertex_tess_geo_fragment_only_vertex.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021337, VkglTestCase_021337_1, VkglTestCase_021337_2);

#define VkglTestCase_021338_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021338_2 "hader.vertex_tess_geo_fragment_only_vertex.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021338, VkglTestCase_021338_1, VkglTestCase_021338_2);

#define VkglTestCase_021339_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021339_2 "shader.vertex_tess_geo_fragment_only_vertex.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021339, VkglTestCase_021339_1, VkglTestCase_021339_2);

#define VkglTestCase_021340_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_sha"
#define VkglTestCase_021340_2 "der.vertex_tess_geo_fragment_only_vertex.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021340, VkglTestCase_021340_1, VkglTestCase_021340_2);
