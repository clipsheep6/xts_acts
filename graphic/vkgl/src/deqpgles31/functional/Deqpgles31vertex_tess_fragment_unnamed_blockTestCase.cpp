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

#define VkglTestCase_021174_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_021174_2 "erenced_by_shader.vertex_tess_fragment.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021174, VkglTestCase_021174_1, VkglTestCase_021174_2);

#define VkglTestCase_021175_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021175_2 "nced_by_shader.vertex_tess_fragment.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021175, VkglTestCase_021175_1, VkglTestCase_021175_2);

#define VkglTestCase_021176_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021176_2 "nced_by_shader.vertex_tess_fragment.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021176, VkglTestCase_021176_1, VkglTestCase_021176_2);

#define VkglTestCase_024276_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024276_2 "able.referenced_by.vertex_tess_fragment.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024276, VkglTestCase_024276_1, VkglTestCase_024276_2);

#define VkglTestCase_024277_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024277_2 "e.referenced_by.vertex_tess_fragment.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024277, VkglTestCase_024277_1, VkglTestCase_024277_2);

#define VkglTestCase_024278_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024278_2 ".referenced_by.vertex_tess_fragment.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024278, VkglTestCase_024278_1, VkglTestCase_024278_2);
