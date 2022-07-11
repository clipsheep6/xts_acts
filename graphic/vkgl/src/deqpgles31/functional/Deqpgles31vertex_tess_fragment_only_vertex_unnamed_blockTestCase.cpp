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

#define VkglTestCase_021191_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021191_2 "d_by_shader.vertex_tess_fragment_only_vertex.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021191, VkglTestCase_021191_1, VkglTestCase_021191_2);

#define VkglTestCase_021192_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021192_2 "y_shader.vertex_tess_fragment_only_vertex.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021192, VkglTestCase_021192_1, VkglTestCase_021192_2);

#define VkglTestCase_021193_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021193_2 "y_shader.vertex_tess_fragment_only_vertex.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021193, VkglTestCase_021193_1, VkglTestCase_021193_2);

#define VkglTestCase_024285_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.r"
#define VkglTestCase_024285_2 "eferenced_by.vertex_tess_fragment_only_vertex.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024285, VkglTestCase_024285_1, VkglTestCase_024285_2);

#define VkglTestCase_024286_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refe"
#define VkglTestCase_024286_2 "renced_by.vertex_tess_fragment_only_vertex.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024286, VkglTestCase_024286_1, VkglTestCase_024286_2);

#define VkglTestCase_024287_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refer"
#define VkglTestCase_024287_2 "enced_by.vertex_tess_fragment_only_vertex.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024287, VkglTestCase_024287_1, VkglTestCase_024287_2);
