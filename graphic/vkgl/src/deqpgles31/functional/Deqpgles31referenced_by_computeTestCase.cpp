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

#define VkglTestCase_021670_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_021670_2 "uniform_block.referenced_by.compute.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021670, VkglTestCase_021670_1, VkglTestCase_021670_2);

#define VkglTestCase_021671_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_021671_2 "niform_block.referenced_by.compute.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021671, VkglTestCase_021671_1, VkglTestCase_021671_2);

#define VkglTestCase_021672_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_021672_2 "uniform_block.referenced_by.compute.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021672, VkglTestCase_021672_1, VkglTestCase_021672_2);

#define VkglTestCase_024725_1 "dEQP-GLES31.functional.program_interface_query.sha"
#define VkglTestCase_024725_2 "der_storage_block.referenced_by.compute.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024725, VkglTestCase_024725_1, VkglTestCase_024725_2);

#define VkglTestCase_024726_1 "dEQP-GLES31.functional.program_interface_query.shad"
#define VkglTestCase_024726_2 "er_storage_block.referenced_by.compute.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024726, VkglTestCase_024726_1, VkglTestCase_024726_2);

#define VkglTestCase_024727_1 "dEQP-GLES31.functional.program_interface_query.sha"
#define VkglTestCase_024727_2 "der_storage_block.referenced_by.compute.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024727, VkglTestCase_024727_1, VkglTestCase_024727_2);
