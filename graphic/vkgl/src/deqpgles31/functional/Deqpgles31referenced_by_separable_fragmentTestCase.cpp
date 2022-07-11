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

#define VkglTestCase_021676_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_021676_2 "rm_block.referenced_by.separable_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021676, VkglTestCase_021676_1, VkglTestCase_021676_2);

#define VkglTestCase_021677_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_021677_2 "m_block.referenced_by.separable_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021677, VkglTestCase_021677_1, VkglTestCase_021677_2);

#define VkglTestCase_021678_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_021678_2 "rm_block.referenced_by.separable_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021678, VkglTestCase_021678_1, VkglTestCase_021678_2);

#define VkglTestCase_024731_1 "dEQP-GLES31.functional.program_interface_query.shader_st"
#define VkglTestCase_024731_2 "orage_block.referenced_by.separable_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024731, VkglTestCase_024731_1, VkglTestCase_024731_2);

#define VkglTestCase_024732_1 "dEQP-GLES31.functional.program_interface_query.shader_sto"
#define VkglTestCase_024732_2 "rage_block.referenced_by.separable_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024732, VkglTestCase_024732_1, VkglTestCase_024732_2);

#define VkglTestCase_024733_1 "dEQP-GLES31.functional.program_interface_query.shader_st"
#define VkglTestCase_024733_2 "orage_block.referenced_by.separable_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024733, VkglTestCase_024733_1, VkglTestCase_024733_2);
