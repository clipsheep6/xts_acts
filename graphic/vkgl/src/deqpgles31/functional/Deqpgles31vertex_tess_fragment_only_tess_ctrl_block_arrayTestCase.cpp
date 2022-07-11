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

#define VkglTestCase_021228_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021228_2 "d_by_shader.vertex_tess_fragment_only_tess_ctrl.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021228, VkglTestCase_021228_1, VkglTestCase_021228_2);

#define VkglTestCase_021229_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021229_2 "y_shader.vertex_tess_fragment_only_tess_ctrl.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021229, VkglTestCase_021229_1, VkglTestCase_021229_2);

#define VkglTestCase_021230_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021230_2 "_shader.vertex_tess_fragment_only_tess_ctrl.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021230, VkglTestCase_021230_1, VkglTestCase_021230_2);

#define VkglTestCase_024306_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.re"
#define VkglTestCase_024306_2 "ferenced_by.vertex_tess_fragment_only_tess_ctrl.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024306, VkglTestCase_024306_1, VkglTestCase_024306_2);

#define VkglTestCase_024307_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refer"
#define VkglTestCase_024307_2 "enced_by.vertex_tess_fragment_only_tess_ctrl.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024307, VkglTestCase_024307_1, VkglTestCase_024307_2);

#define VkglTestCase_024308_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refer"
#define VkglTestCase_024308_2 "enced_by.vertex_tess_fragment_only_tess_ctrl.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024308, VkglTestCase_024308_1, VkglTestCase_024308_2);
