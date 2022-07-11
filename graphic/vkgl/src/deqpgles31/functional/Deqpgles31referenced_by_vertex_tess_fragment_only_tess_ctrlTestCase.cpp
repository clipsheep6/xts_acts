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

#define VkglTestCase_021706_1 "dEQP-GLES31.functional.program_interface_query.uniform_block."
#define VkglTestCase_021706_2 "referenced_by.vertex_tess_fragment_only_tess_ctrl.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021706, VkglTestCase_021706_1, VkglTestCase_021706_2);

#define VkglTestCase_021707_1 "dEQP-GLES31.functional.program_interface_query.uniform_block.r"
#define VkglTestCase_021707_2 "eferenced_by.vertex_tess_fragment_only_tess_ctrl.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021707, VkglTestCase_021707_1, VkglTestCase_021707_2);

#define VkglTestCase_021708_1 "dEQP-GLES31.functional.program_interface_query.uniform_block."
#define VkglTestCase_021708_2 "referenced_by.vertex_tess_fragment_only_tess_ctrl.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021708, VkglTestCase_021708_1, VkglTestCase_021708_2);

#define VkglTestCase_024761_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bl"
#define VkglTestCase_024761_2 "ock.referenced_by.vertex_tess_fragment_only_tess_ctrl.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024761, VkglTestCase_024761_1, VkglTestCase_024761_2);

#define VkglTestCase_024762_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_blo"
#define VkglTestCase_024762_2 "ck.referenced_by.vertex_tess_fragment_only_tess_ctrl.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024762, VkglTestCase_024762_1, VkglTestCase_024762_2);

#define VkglTestCase_024763_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bl"
#define VkglTestCase_024763_2 "ock.referenced_by.vertex_tess_fragment_only_tess_ctrl.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024763, VkglTestCase_024763_1, VkglTestCase_024763_2);
