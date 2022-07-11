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

#define VkglTestCase_021715_1 "dEQP-GLES31.functional.program_interface_query.uniform_bloc"
#define VkglTestCase_021715_2 "k.referenced_by.vertex_geo_fragment_only_vertex.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021715, VkglTestCase_021715_1, VkglTestCase_021715_2);

#define VkglTestCase_021716_1 "dEQP-GLES31.functional.program_interface_query.uniform_block"
#define VkglTestCase_021716_2 ".referenced_by.vertex_geo_fragment_only_vertex.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021716, VkglTestCase_021716_1, VkglTestCase_021716_2);

#define VkglTestCase_021717_1 "dEQP-GLES31.functional.program_interface_query.uniform_bloc"
#define VkglTestCase_021717_2 "k.referenced_by.vertex_geo_fragment_only_vertex.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021717, VkglTestCase_021717_1, VkglTestCase_021717_2);

#define VkglTestCase_024770_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_"
#define VkglTestCase_024770_2 "block.referenced_by.vertex_geo_fragment_only_vertex.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024770, VkglTestCase_024770_1, VkglTestCase_024770_2);

#define VkglTestCase_024771_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_b"
#define VkglTestCase_024771_2 "lock.referenced_by.vertex_geo_fragment_only_vertex.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024771, VkglTestCase_024771_1, VkglTestCase_024771_2);

#define VkglTestCase_024772_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_"
#define VkglTestCase_024772_2 "block.referenced_by.vertex_geo_fragment_only_vertex.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024772, VkglTestCase_024772_1, VkglTestCase_024772_2);
