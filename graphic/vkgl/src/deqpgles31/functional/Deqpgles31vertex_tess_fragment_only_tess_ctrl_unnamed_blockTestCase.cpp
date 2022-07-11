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

#define VkglTestCase_021225_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021225_2 "_by_shader.vertex_tess_fragment_only_tess_ctrl.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021225, VkglTestCase_021225_1, VkglTestCase_021225_2);

#define VkglTestCase_021226_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021226_2 "_shader.vertex_tess_fragment_only_tess_ctrl.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021226, VkglTestCase_021226_1, VkglTestCase_021226_2);

#define VkglTestCase_021227_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021227_2 "shader.vertex_tess_fragment_only_tess_ctrl.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021227, VkglTestCase_021227_1, VkglTestCase_021227_2);

#define VkglTestCase_024303_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ref"
#define VkglTestCase_024303_2 "erenced_by.vertex_tess_fragment_only_tess_ctrl.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024303, VkglTestCase_024303_1, VkglTestCase_024303_2);

#define VkglTestCase_024304_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refere"
#define VkglTestCase_024304_2 "nced_by.vertex_tess_fragment_only_tess_ctrl.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024304, VkglTestCase_024304_1, VkglTestCase_024304_2);

#define VkglTestCase_024305_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refere"
#define VkglTestCase_024305_2 "nced_by.vertex_tess_fragment_only_tess_ctrl.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024305, VkglTestCase_024305_1, VkglTestCase_024305_2);
