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

#define VkglTestCase_021700_1 "dEQP-GLES31.functional.program_interface_query.uniform_bloc"
#define VkglTestCase_021700_2 "k.referenced_by.vertex_tess_fragment_only_vertex.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021700, VkglTestCase_021700_1, VkglTestCase_021700_2);

#define VkglTestCase_021701_1 "dEQP-GLES31.functional.program_interface_query.uniform_block"
#define VkglTestCase_021701_2 ".referenced_by.vertex_tess_fragment_only_vertex.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021701, VkglTestCase_021701_1, VkglTestCase_021701_2);

#define VkglTestCase_021702_1 "dEQP-GLES31.functional.program_interface_query.uniform_bloc"
#define VkglTestCase_021702_2 "k.referenced_by.vertex_tess_fragment_only_vertex.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021702, VkglTestCase_021702_1, VkglTestCase_021702_2);

#define VkglTestCase_024755_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_b"
#define VkglTestCase_024755_2 "lock.referenced_by.vertex_tess_fragment_only_vertex.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024755, VkglTestCase_024755_1, VkglTestCase_024755_2);

#define VkglTestCase_024756_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bl"
#define VkglTestCase_024756_2 "ock.referenced_by.vertex_tess_fragment_only_vertex.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024756, VkglTestCase_024756_1, VkglTestCase_024756_2);

#define VkglTestCase_024757_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_b"
#define VkglTestCase_024757_2 "lock.referenced_by.vertex_tess_fragment_only_vertex.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024757, VkglTestCase_024757_1, VkglTestCase_024757_2);
