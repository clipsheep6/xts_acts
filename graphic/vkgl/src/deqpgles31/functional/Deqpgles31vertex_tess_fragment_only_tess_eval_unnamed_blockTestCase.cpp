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

#define VkglTestCase_021242_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021242_2 "_by_shader.vertex_tess_fragment_only_tess_eval.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021242, VkglTestCase_021242_1, VkglTestCase_021242_2);

#define VkglTestCase_021243_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021243_2 "_shader.vertex_tess_fragment_only_tess_eval.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021243, VkglTestCase_021243_1, VkglTestCase_021243_2);

#define VkglTestCase_021244_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021244_2 "shader.vertex_tess_fragment_only_tess_eval.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021244, VkglTestCase_021244_1, VkglTestCase_021244_2);

#define VkglTestCase_024312_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ref"
#define VkglTestCase_024312_2 "erenced_by.vertex_tess_fragment_only_tess_eval.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024312, VkglTestCase_024312_1, VkglTestCase_024312_2);

#define VkglTestCase_024313_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refere"
#define VkglTestCase_024313_2 "nced_by.vertex_tess_fragment_only_tess_eval.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024313, VkglTestCase_024313_1, VkglTestCase_024313_2);

#define VkglTestCase_024314_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refere"
#define VkglTestCase_024314_2 "nced_by.vertex_tess_fragment_only_tess_eval.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024314, VkglTestCase_024314_1, VkglTestCase_024314_2);
