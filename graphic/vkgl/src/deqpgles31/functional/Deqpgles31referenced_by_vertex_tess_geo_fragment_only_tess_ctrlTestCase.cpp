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

#define VkglTestCase_021736_1 "dEQP-GLES31.functional.program_interface_query.uniform_block.re"
#define VkglTestCase_021736_2 "ferenced_by.vertex_tess_geo_fragment_only_tess_ctrl.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021736, VkglTestCase_021736_1, VkglTestCase_021736_2);

#define VkglTestCase_021737_1 "dEQP-GLES31.functional.program_interface_query.uniform_block.ref"
#define VkglTestCase_021737_2 "erenced_by.vertex_tess_geo_fragment_only_tess_ctrl.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021737, VkglTestCase_021737_1, VkglTestCase_021737_2);

#define VkglTestCase_021738_1 "dEQP-GLES31.functional.program_interface_query.uniform_block.re"
#define VkglTestCase_021738_2 "ferenced_by.vertex_tess_geo_fragment_only_tess_ctrl.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021738, VkglTestCase_021738_1, VkglTestCase_021738_2);

#define VkglTestCase_024791_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bloc"
#define VkglTestCase_024791_2 "k.referenced_by.vertex_tess_geo_fragment_only_tess_ctrl.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024791, VkglTestCase_024791_1, VkglTestCase_024791_2);

#define VkglTestCase_024792_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_block"
#define VkglTestCase_024792_2 ".referenced_by.vertex_tess_geo_fragment_only_tess_ctrl.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024792, VkglTestCase_024792_1, VkglTestCase_024792_2);

#define VkglTestCase_024793_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bloc"
#define VkglTestCase_024793_2 "k.referenced_by.vertex_tess_geo_fragment_only_tess_ctrl.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024793, VkglTestCase_024793_1, VkglTestCase_024793_2);
