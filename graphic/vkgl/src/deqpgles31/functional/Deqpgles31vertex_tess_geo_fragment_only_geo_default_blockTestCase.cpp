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

#define VkglTestCase_021367_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021367_2 "d_by_shader.vertex_tess_geo_fragment_only_geo.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021367, VkglTestCase_021367_1, VkglTestCase_021367_2);

#define VkglTestCase_021368_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021368_2 "y_shader.vertex_tess_geo_fragment_only_geo.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021368, VkglTestCase_021368_1, VkglTestCase_021368_2);

#define VkglTestCase_021369_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021369_2 "_shader.vertex_tess_geo_fragment_only_geo.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021369, VkglTestCase_021369_1, VkglTestCase_021369_2);

#define VkglTestCase_021370_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021370_2 "_by_shader.vertex_tess_geo_fragment_only_geo.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021370, VkglTestCase_021370_1, VkglTestCase_021370_2);

#define VkglTestCase_021371_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021371_2 "_shader.vertex_tess_geo_fragment_only_geo.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021371, VkglTestCase_021371_1, VkglTestCase_021371_2);

#define VkglTestCase_021372_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021372_2 "shader.vertex_tess_geo_fragment_only_geo.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021372, VkglTestCase_021372_1, VkglTestCase_021372_2);

#define VkglTestCase_021373_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021373_2 "y_shader.vertex_tess_geo_fragment_only_geo.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021373, VkglTestCase_021373_1, VkglTestCase_021373_2);

#define VkglTestCase_021374_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021374_2 "hader.vertex_tess_geo_fragment_only_geo.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021374, VkglTestCase_021374_1, VkglTestCase_021374_2);
