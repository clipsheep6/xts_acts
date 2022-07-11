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

#define VkglTestCase_021730_1 "dEQP-GLES31.functional.program_interface_query.uniform_block.r"
#define VkglTestCase_021730_2 "eferenced_by.vertex_tess_geo_fragment_only_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021730, VkglTestCase_021730_1, VkglTestCase_021730_2);

#define VkglTestCase_021731_1 "dEQP-GLES31.functional.program_interface_query.uniform_block.re"
#define VkglTestCase_021731_2 "ferenced_by.vertex_tess_geo_fragment_only_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021731, VkglTestCase_021731_1, VkglTestCase_021731_2);

#define VkglTestCase_021732_1 "dEQP-GLES31.functional.program_interface_query.uniform_block.r"
#define VkglTestCase_021732_2 "eferenced_by.vertex_tess_geo_fragment_only_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021732, VkglTestCase_021732_1, VkglTestCase_021732_2);

#define VkglTestCase_024785_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bloc"
#define VkglTestCase_024785_2 "k.referenced_by.vertex_tess_geo_fragment_only_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024785, VkglTestCase_024785_1, VkglTestCase_024785_2);

#define VkglTestCase_024786_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_block"
#define VkglTestCase_024786_2 ".referenced_by.vertex_tess_geo_fragment_only_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024786, VkglTestCase_024786_1, VkglTestCase_024786_2);

#define VkglTestCase_024787_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bloc"
#define VkglTestCase_024787_2 "k.referenced_by.vertex_tess_geo_fragment_only_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024787, VkglTestCase_024787_1, VkglTestCase_024787_2);
