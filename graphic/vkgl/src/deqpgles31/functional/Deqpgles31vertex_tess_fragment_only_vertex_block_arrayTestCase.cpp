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

#define VkglTestCase_021194_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021194_2 "ed_by_shader.vertex_tess_fragment_only_vertex.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021194, VkglTestCase_021194_1, VkglTestCase_021194_2);

#define VkglTestCase_021195_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021195_2 "by_shader.vertex_tess_fragment_only_vertex.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021195, VkglTestCase_021195_1, VkglTestCase_021195_2);

#define VkglTestCase_021196_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021196_2 "by_shader.vertex_tess_fragment_only_vertex.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021196, VkglTestCase_021196_1, VkglTestCase_021196_2);

#define VkglTestCase_024288_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024288_2 "referenced_by.vertex_tess_fragment_only_vertex.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024288, VkglTestCase_024288_1, VkglTestCase_024288_2);

#define VkglTestCase_024289_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ref"
#define VkglTestCase_024289_2 "erenced_by.vertex_tess_fragment_only_vertex.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024289, VkglTestCase_024289_1, VkglTestCase_024289_2);

#define VkglTestCase_024290_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refe"
#define VkglTestCase_024290_2 "renced_by.vertex_tess_fragment_only_vertex.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024290, VkglTestCase_024290_1, VkglTestCase_024290_2);
