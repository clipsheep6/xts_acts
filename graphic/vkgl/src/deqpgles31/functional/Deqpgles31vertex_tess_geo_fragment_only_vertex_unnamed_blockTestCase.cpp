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

#define VkglTestCase_021344_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021344_2 "by_shader.vertex_tess_geo_fragment_only_vertex.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021344, VkglTestCase_021344_1, VkglTestCase_021344_2);

#define VkglTestCase_021345_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021345_2 "shader.vertex_tess_geo_fragment_only_vertex.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021345, VkglTestCase_021345_1, VkglTestCase_021345_2);

#define VkglTestCase_021346_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021346_2 "shader.vertex_tess_geo_fragment_only_vertex.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021346, VkglTestCase_021346_1, VkglTestCase_021346_2);

#define VkglTestCase_024366_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ref"
#define VkglTestCase_024366_2 "erenced_by.vertex_tess_geo_fragment_only_vertex.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024366, VkglTestCase_024366_1, VkglTestCase_024366_2);

#define VkglTestCase_024367_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refere"
#define VkglTestCase_024367_2 "nced_by.vertex_tess_geo_fragment_only_vertex.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024367, VkglTestCase_024367_1, VkglTestCase_024367_2);

#define VkglTestCase_024368_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.referen"
#define VkglTestCase_024368_2 "ced_by.vertex_tess_geo_fragment_only_vertex.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024368, VkglTestCase_024368_1, VkglTestCase_024368_2);
