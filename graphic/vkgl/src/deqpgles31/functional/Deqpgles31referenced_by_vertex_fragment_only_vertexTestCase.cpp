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

#define VkglTestCase_021691_1 "dEQP-GLES31.functional.program_interface_query.uniform_bl"
#define VkglTestCase_021691_2 "ock.referenced_by.vertex_fragment_only_vertex.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021691, VkglTestCase_021691_1, VkglTestCase_021691_2);

#define VkglTestCase_021692_1 "dEQP-GLES31.functional.program_interface_query.uniform_blo"
#define VkglTestCase_021692_2 "ck.referenced_by.vertex_fragment_only_vertex.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021692, VkglTestCase_021692_1, VkglTestCase_021692_2);

#define VkglTestCase_021693_1 "dEQP-GLES31.functional.program_interface_query.uniform_bl"
#define VkglTestCase_021693_2 "ock.referenced_by.vertex_fragment_only_vertex.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021693, VkglTestCase_021693_1, VkglTestCase_021693_2);

#define VkglTestCase_024746_1 "dEQP-GLES31.functional.program_interface_query.shader_storag"
#define VkglTestCase_024746_2 "e_block.referenced_by.vertex_fragment_only_vertex.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024746, VkglTestCase_024746_1, VkglTestCase_024746_2);

#define VkglTestCase_024747_1 "dEQP-GLES31.functional.program_interface_query.shader_storage"
#define VkglTestCase_024747_2 "_block.referenced_by.vertex_fragment_only_vertex.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024747, VkglTestCase_024747_1, VkglTestCase_024747_2);

#define VkglTestCase_024748_1 "dEQP-GLES31.functional.program_interface_query.shader_storag"
#define VkglTestCase_024748_2 "e_block.referenced_by.vertex_fragment_only_vertex.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024748, VkglTestCase_024748_1, VkglTestCase_024748_2);
