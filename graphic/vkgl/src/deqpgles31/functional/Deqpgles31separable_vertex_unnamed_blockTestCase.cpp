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

#define VkglTestCase_021006_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_021006_2 "eferenced_by_shader.separable_vertex.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021006, VkglTestCase_021006_1, VkglTestCase_021006_2);

#define VkglTestCase_021007_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_021007_2 "renced_by_shader.separable_vertex.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021007, VkglTestCase_021007_1, VkglTestCase_021007_2);

#define VkglTestCase_021008_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_021008_2 "renced_by_shader.separable_vertex.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021008, VkglTestCase_021008_1, VkglTestCase_021008_2);

#define VkglTestCase_024180_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024180_2 "riable.referenced_by.separable_vertex.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024180, VkglTestCase_024180_1, VkglTestCase_024180_2);

#define VkglTestCase_024181_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024181_2 "ble.referenced_by.separable_vertex.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024181, VkglTestCase_024181_1, VkglTestCase_024181_2);

#define VkglTestCase_024182_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024182_2 "le.referenced_by.separable_vertex.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024182, VkglTestCase_024182_1, VkglTestCase_024182_2);
