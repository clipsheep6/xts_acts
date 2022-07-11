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

#define VkglTestCase_021378_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021378_2 "d_by_shader.vertex_tess_geo_fragment_only_geo.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021378, VkglTestCase_021378_1, VkglTestCase_021378_2);

#define VkglTestCase_021379_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021379_2 "y_shader.vertex_tess_geo_fragment_only_geo.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021379, VkglTestCase_021379_1, VkglTestCase_021379_2);

#define VkglTestCase_021380_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021380_2 "_shader.vertex_tess_geo_fragment_only_geo.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021380, VkglTestCase_021380_1, VkglTestCase_021380_2);

#define VkglTestCase_024384_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.re"
#define VkglTestCase_024384_2 "ferenced_by.vertex_tess_geo_fragment_only_geo.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024384, VkglTestCase_024384_1, VkglTestCase_024384_2);

#define VkglTestCase_024385_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refer"
#define VkglTestCase_024385_2 "enced_by.vertex_tess_geo_fragment_only_geo.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024385, VkglTestCase_024385_1, VkglTestCase_024385_2);

#define VkglTestCase_024386_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refer"
#define VkglTestCase_024386_2 "enced_by.vertex_tess_geo_fragment_only_geo.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024386, VkglTestCase_024386_1, VkglTestCase_024386_2);
