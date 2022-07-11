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
#include "../ActsDeqpgles310025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024171_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024171_2 "ariable.referenced_by.separable_vertex.named_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024171, VkglTestCase_024171_1, VkglTestCase_024171_2);

#define VkglTestCase_024172_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024172_2 "able.referenced_by.separable_vertex.named_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024172, VkglTestCase_024172_1, VkglTestCase_024172_2);

#define VkglTestCase_024173_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024173_2 "ble.referenced_by.separable_vertex.named_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024173, VkglTestCase_024173_1, VkglTestCase_024173_2);

#define VkglTestCase_024174_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024174_2 ".referenced_by.separable_vertex.named_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024174, VkglTestCase_024174_1, VkglTestCase_024174_2);

#define VkglTestCase_024175_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024175_2 ".referenced_by.separable_vertex.named_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024175, VkglTestCase_024175_1, VkglTestCase_024175_2);

#define VkglTestCase_024176_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024176_2 "e.referenced_by.separable_vertex.named_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024176, VkglTestCase_024176_1, VkglTestCase_024176_2);

#define VkglTestCase_024177_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024177_2 ".referenced_by.separable_vertex.named_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024177, VkglTestCase_024177_1, VkglTestCase_024177_2);

#define VkglTestCase_024178_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024178_2 ".referenced_by.separable_vertex.named_block.float_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024178, VkglTestCase_024178_1, VkglTestCase_024178_2);

#define VkglTestCase_024179_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ref"
#define VkglTestCase_024179_2 "erenced_by.separable_vertex.named_block.float_unsized_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024179, VkglTestCase_024179_1, VkglTestCase_024179_2);
