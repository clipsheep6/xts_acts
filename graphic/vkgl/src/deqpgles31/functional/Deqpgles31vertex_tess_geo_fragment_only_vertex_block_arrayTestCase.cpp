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

#define VkglTestCase_021347_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021347_2 "_by_shader.vertex_tess_geo_fragment_only_vertex.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021347, VkglTestCase_021347_1, VkglTestCase_021347_2);

#define VkglTestCase_021348_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021348_2 "_shader.vertex_tess_geo_fragment_only_vertex.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021348, VkglTestCase_021348_1, VkglTestCase_021348_2);

#define VkglTestCase_021349_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021349_2 "_shader.vertex_tess_geo_fragment_only_vertex.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021349, VkglTestCase_021349_1, VkglTestCase_021349_2);

#define VkglTestCase_024369_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.re"
#define VkglTestCase_024369_2 "ferenced_by.vertex_tess_geo_fragment_only_vertex.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024369, VkglTestCase_024369_1, VkglTestCase_024369_2);

#define VkglTestCase_024370_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refer"
#define VkglTestCase_024370_2 "enced_by.vertex_tess_geo_fragment_only_vertex.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024370, VkglTestCase_024370_1, VkglTestCase_024370_2);

#define VkglTestCase_024371_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refere"
#define VkglTestCase_024371_2 "nced_by.vertex_tess_geo_fragment_only_vertex.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024371, VkglTestCase_024371_1, VkglTestCase_024371_2);
