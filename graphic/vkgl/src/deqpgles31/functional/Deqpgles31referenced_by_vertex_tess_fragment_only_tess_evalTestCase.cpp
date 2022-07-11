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

#define VkglTestCase_021709_1 "dEQP-GLES31.functional.program_interface_query.uniform_block."
#define VkglTestCase_021709_2 "referenced_by.vertex_tess_fragment_only_tess_eval.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021709, VkglTestCase_021709_1, VkglTestCase_021709_2);

#define VkglTestCase_021710_1 "dEQP-GLES31.functional.program_interface_query.uniform_block.r"
#define VkglTestCase_021710_2 "eferenced_by.vertex_tess_fragment_only_tess_eval.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021710, VkglTestCase_021710_1, VkglTestCase_021710_2);

#define VkglTestCase_021711_1 "dEQP-GLES31.functional.program_interface_query.uniform_block."
#define VkglTestCase_021711_2 "referenced_by.vertex_tess_fragment_only_tess_eval.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021711, VkglTestCase_021711_1, VkglTestCase_021711_2);

#define VkglTestCase_024764_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bl"
#define VkglTestCase_024764_2 "ock.referenced_by.vertex_tess_fragment_only_tess_eval.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024764, VkglTestCase_024764_1, VkglTestCase_024764_2);

#define VkglTestCase_024765_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_blo"
#define VkglTestCase_024765_2 "ck.referenced_by.vertex_tess_fragment_only_tess_eval.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024765, VkglTestCase_024765_1, VkglTestCase_024765_2);

#define VkglTestCase_024766_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bl"
#define VkglTestCase_024766_2 "ock.referenced_by.vertex_tess_fragment_only_tess_eval.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024766, VkglTestCase_024766_1, VkglTestCase_024766_2);
