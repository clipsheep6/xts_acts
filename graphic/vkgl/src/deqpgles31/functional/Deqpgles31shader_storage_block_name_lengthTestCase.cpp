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

#define VkglTestCase_024721_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024721_2 "y.shader_storage_block.name_length.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024721, VkglTestCase_024721_1, VkglTestCase_024721_2);

#define VkglTestCase_024722_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_024722_2 ".shader_storage_block.name_length.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024722, VkglTestCase_024722_1, VkglTestCase_024722_2);

#define VkglTestCase_024723_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024723_2 "y.shader_storage_block.name_length.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024723, VkglTestCase_024723_1, VkglTestCase_024723_2);

#define VkglTestCase_024724_1 "dEQP-GLES31.functional.program_interface_query.shader"
#define VkglTestCase_024724_2 "_storage_block.name_length.block_array_single_element"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024724, VkglTestCase_024724_1, VkglTestCase_024724_2);
