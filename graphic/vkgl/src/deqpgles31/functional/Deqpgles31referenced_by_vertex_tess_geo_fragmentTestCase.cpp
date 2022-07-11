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

#define VkglTestCase_021724_1 "dEQP-GLES31.functional.program_interface_query.uniform_"
#define VkglTestCase_021724_2 "block.referenced_by.vertex_tess_geo_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021724, VkglTestCase_021724_1, VkglTestCase_021724_2);

#define VkglTestCase_021725_1 "dEQP-GLES31.functional.program_interface_query.uniform_b"
#define VkglTestCase_021725_2 "lock.referenced_by.vertex_tess_geo_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021725, VkglTestCase_021725_1, VkglTestCase_021725_2);

#define VkglTestCase_021726_1 "dEQP-GLES31.functional.program_interface_query.uniform_"
#define VkglTestCase_021726_2 "block.referenced_by.vertex_tess_geo_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021726, VkglTestCase_021726_1, VkglTestCase_021726_2);

#define VkglTestCase_024779_1 "dEQP-GLES31.functional.program_interface_query.shader_stora"
#define VkglTestCase_024779_2 "ge_block.referenced_by.vertex_tess_geo_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024779, VkglTestCase_024779_1, VkglTestCase_024779_2);

#define VkglTestCase_024780_1 "dEQP-GLES31.functional.program_interface_query.shader_storag"
#define VkglTestCase_024780_2 "e_block.referenced_by.vertex_tess_geo_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024780, VkglTestCase_024780_1, VkglTestCase_024780_2);

#define VkglTestCase_024781_1 "dEQP-GLES31.functional.program_interface_query.shader_stora"
#define VkglTestCase_024781_2 "ge_block.referenced_by.vertex_tess_geo_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024781, VkglTestCase_024781_1, VkglTestCase_024781_2);
