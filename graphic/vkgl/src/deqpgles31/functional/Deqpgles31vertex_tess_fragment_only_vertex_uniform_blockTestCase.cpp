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

#define VkglTestCase_021188_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021188_2 "d_by_shader.vertex_tess_fragment_only_vertex.uniform_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021188, VkglTestCase_021188_1, VkglTestCase_021188_2);

#define VkglTestCase_021189_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021189_2 "y_shader.vertex_tess_fragment_only_vertex.uniform_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021189, VkglTestCase_021189_1, VkglTestCase_021189_2);

#define VkglTestCase_021190_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021190_2 "y_shader.vertex_tess_fragment_only_vertex.uniform_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021190, VkglTestCase_021190_1, VkglTestCase_021190_2);
