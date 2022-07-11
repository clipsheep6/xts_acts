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

#define VkglTestCase_021031_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_021031_2 "ferenced_by_shader.separable_fragment.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021031, VkglTestCase_021031_1, VkglTestCase_021031_2);

#define VkglTestCase_021032_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021032_2 "enced_by_shader.separable_fragment.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021032, VkglTestCase_021032_1, VkglTestCase_021032_2);

#define VkglTestCase_021033_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021033_2 "enced_by_shader.separable_fragment.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021033, VkglTestCase_021033_1, VkglTestCase_021033_2);

#define VkglTestCase_024195_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024195_2 "iable.referenced_by.separable_fragment.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024195, VkglTestCase_024195_1, VkglTestCase_024195_2);

#define VkglTestCase_024196_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024196_2 "le.referenced_by.separable_fragment.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024196, VkglTestCase_024196_1, VkglTestCase_024196_2);

#define VkglTestCase_024197_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024197_2 "e.referenced_by.separable_fragment.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024197, VkglTestCase_024197_1, VkglTestCase_024197_2);
