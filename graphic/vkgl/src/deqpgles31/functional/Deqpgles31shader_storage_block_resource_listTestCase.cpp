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

#define VkglTestCase_024705_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_024705_2 ".shader_storage_block.resource_list.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024705, VkglTestCase_024705_1, VkglTestCase_024705_2);

#define VkglTestCase_024706_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_024706_2 "shader_storage_block.resource_list.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024706, VkglTestCase_024706_1, VkglTestCase_024706_2);

#define VkglTestCase_024707_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_024707_2 ".shader_storage_block.resource_list.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024707, VkglTestCase_024707_1, VkglTestCase_024707_2);

#define VkglTestCase_024708_1 "dEQP-GLES31.functional.program_interface_query.shader_"
#define VkglTestCase_024708_2 "storage_block.resource_list.block_array_single_element"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024708, VkglTestCase_024708_1, VkglTestCase_024708_2);
