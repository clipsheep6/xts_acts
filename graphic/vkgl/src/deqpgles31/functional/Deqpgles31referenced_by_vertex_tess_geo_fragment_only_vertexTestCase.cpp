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

#define VkglTestCase_021727_1 "dEQP-GLES31.functional.program_interface_query.uniform_block."
#define VkglTestCase_021727_2 "referenced_by.vertex_tess_geo_fragment_only_vertex.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021727, VkglTestCase_021727_1, VkglTestCase_021727_2);

#define VkglTestCase_021728_1 "dEQP-GLES31.functional.program_interface_query.uniform_block.r"
#define VkglTestCase_021728_2 "eferenced_by.vertex_tess_geo_fragment_only_vertex.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021728, VkglTestCase_021728_1, VkglTestCase_021728_2);

#define VkglTestCase_021729_1 "dEQP-GLES31.functional.program_interface_query.uniform_block."
#define VkglTestCase_021729_2 "referenced_by.vertex_tess_geo_fragment_only_vertex.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021729, VkglTestCase_021729_1, VkglTestCase_021729_2);

#define VkglTestCase_024782_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_blo"
#define VkglTestCase_024782_2 "ck.referenced_by.vertex_tess_geo_fragment_only_vertex.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024782, VkglTestCase_024782_1, VkglTestCase_024782_2);

#define VkglTestCase_024783_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bloc"
#define VkglTestCase_024783_2 "k.referenced_by.vertex_tess_geo_fragment_only_vertex.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024783, VkglTestCase_024783_1, VkglTestCase_024783_2);

#define VkglTestCase_024784_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_blo"
#define VkglTestCase_024784_2 "ck.referenced_by.vertex_tess_geo_fragment_only_vertex.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024784, VkglTestCase_024784_1, VkglTestCase_024784_2);
