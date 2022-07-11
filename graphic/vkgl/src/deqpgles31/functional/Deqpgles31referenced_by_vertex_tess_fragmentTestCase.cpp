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

#define VkglTestCase_021697_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_021697_2 "m_block.referenced_by.vertex_tess_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021697, VkglTestCase_021697_1, VkglTestCase_021697_2);

#define VkglTestCase_021698_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_021698_2 "_block.referenced_by.vertex_tess_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021698, VkglTestCase_021698_1, VkglTestCase_021698_2);

#define VkglTestCase_021699_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_021699_2 "m_block.referenced_by.vertex_tess_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021699, VkglTestCase_021699_1, VkglTestCase_021699_2);

#define VkglTestCase_024752_1 "dEQP-GLES31.functional.program_interface_query.shader_sto"
#define VkglTestCase_024752_2 "rage_block.referenced_by.vertex_tess_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024752, VkglTestCase_024752_1, VkglTestCase_024752_2);

#define VkglTestCase_024753_1 "dEQP-GLES31.functional.program_interface_query.shader_stor"
#define VkglTestCase_024753_2 "age_block.referenced_by.vertex_tess_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024753, VkglTestCase_024753_1, VkglTestCase_024753_2);

#define VkglTestCase_024754_1 "dEQP-GLES31.functional.program_interface_query.shader_sto"
#define VkglTestCase_024754_2 "rage_block.referenced_by.vertex_tess_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024754, VkglTestCase_024754_1, VkglTestCase_024754_2);
