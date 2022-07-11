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

#define VkglTestCase_021703_1 "dEQP-GLES31.functional.program_interface_query.uniform_block"
#define VkglTestCase_021703_2 ".referenced_by.vertex_tess_fragment_only_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021703, VkglTestCase_021703_1, VkglTestCase_021703_2);

#define VkglTestCase_021704_1 "dEQP-GLES31.functional.program_interface_query.uniform_block."
#define VkglTestCase_021704_2 "referenced_by.vertex_tess_fragment_only_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021704, VkglTestCase_021704_1, VkglTestCase_021704_2);

#define VkglTestCase_021705_1 "dEQP-GLES31.functional.program_interface_query.uniform_block"
#define VkglTestCase_021705_2 ".referenced_by.vertex_tess_fragment_only_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021705, VkglTestCase_021705_1, VkglTestCase_021705_2);

#define VkglTestCase_024758_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bl"
#define VkglTestCase_024758_2 "ock.referenced_by.vertex_tess_fragment_only_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024758, VkglTestCase_024758_1, VkglTestCase_024758_2);

#define VkglTestCase_024759_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_blo"
#define VkglTestCase_024759_2 "ck.referenced_by.vertex_tess_fragment_only_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024759, VkglTestCase_024759_1, VkglTestCase_024759_2);

#define VkglTestCase_024760_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bl"
#define VkglTestCase_024760_2 "ock.referenced_by.vertex_tess_fragment_only_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024760, VkglTestCase_024760_1, VkglTestCase_024760_2);
