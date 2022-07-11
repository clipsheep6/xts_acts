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

#define VkglTestCase_021650_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021650_2 "ery.uniform_block.resource_list.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021650, VkglTestCase_021650_1, VkglTestCase_021650_2);

#define VkglTestCase_021651_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021651_2 "ry.uniform_block.resource_list.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021651, VkglTestCase_021651_1, VkglTestCase_021651_2);

#define VkglTestCase_021652_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021652_2 "ery.uniform_block.resource_list.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021652, VkglTestCase_021652_1, VkglTestCase_021652_2);

#define VkglTestCase_021653_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_021653_2 "form_block.resource_list.block_array_single_element"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021653, VkglTestCase_021653_1, VkglTestCase_021653_2);
