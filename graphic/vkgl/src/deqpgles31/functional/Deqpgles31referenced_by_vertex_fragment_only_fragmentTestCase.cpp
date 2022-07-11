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

#define VkglTestCase_021694_1 "dEQP-GLES31.functional.program_interface_query.uniform_blo"
#define VkglTestCase_021694_2 "ck.referenced_by.vertex_fragment_only_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021694, VkglTestCase_021694_1, VkglTestCase_021694_2);

#define VkglTestCase_021695_1 "dEQP-GLES31.functional.program_interface_query.uniform_bloc"
#define VkglTestCase_021695_2 "k.referenced_by.vertex_fragment_only_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021695, VkglTestCase_021695_1, VkglTestCase_021695_2);

#define VkglTestCase_021696_1 "dEQP-GLES31.functional.program_interface_query.uniform_blo"
#define VkglTestCase_021696_2 "ck.referenced_by.vertex_fragment_only_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021696, VkglTestCase_021696_1, VkglTestCase_021696_2);

#define VkglTestCase_024749_1 "dEQP-GLES31.functional.program_interface_query.shader_storage"
#define VkglTestCase_024749_2 "_block.referenced_by.vertex_fragment_only_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024749, VkglTestCase_024749_1, VkglTestCase_024749_2);

#define VkglTestCase_024750_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_"
#define VkglTestCase_024750_2 "block.referenced_by.vertex_fragment_only_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024750, VkglTestCase_024750_1, VkglTestCase_024750_2);

#define VkglTestCase_024751_1 "dEQP-GLES31.functional.program_interface_query.shader_storage"
#define VkglTestCase_024751_2 "_block.referenced_by.vertex_fragment_only_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024751, VkglTestCase_024751_1, VkglTestCase_024751_2);
