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

#define VkglTestCase_021685_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_021685_2 "rm_block.referenced_by.separable_geometry.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021685, VkglTestCase_021685_1, VkglTestCase_021685_2);

#define VkglTestCase_021686_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_021686_2 "m_block.referenced_by.separable_geometry.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021686, VkglTestCase_021686_1, VkglTestCase_021686_2);

#define VkglTestCase_021687_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_021687_2 "rm_block.referenced_by.separable_geometry.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021687, VkglTestCase_021687_1, VkglTestCase_021687_2);

#define VkglTestCase_024740_1 "dEQP-GLES31.functional.program_interface_query.shader_st"
#define VkglTestCase_024740_2 "orage_block.referenced_by.separable_geometry.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024740, VkglTestCase_024740_1, VkglTestCase_024740_2);

#define VkglTestCase_024741_1 "dEQP-GLES31.functional.program_interface_query.shader_sto"
#define VkglTestCase_024741_2 "rage_block.referenced_by.separable_geometry.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024741, VkglTestCase_024741_1, VkglTestCase_024741_2);

#define VkglTestCase_024742_1 "dEQP-GLES31.functional.program_interface_query.shader_st"
#define VkglTestCase_024742_2 "orage_block.referenced_by.separable_geometry.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024742, VkglTestCase_024742_1, VkglTestCase_024742_2);
