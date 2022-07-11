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

#define VkglTestCase_021718_1 "dEQP-GLES31.functional.program_interface_query.uniform_block"
#define VkglTestCase_021718_2 ".referenced_by.vertex_geo_fragment_only_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021718, VkglTestCase_021718_1, VkglTestCase_021718_2);

#define VkglTestCase_021719_1 "dEQP-GLES31.functional.program_interface_query.uniform_block."
#define VkglTestCase_021719_2 "referenced_by.vertex_geo_fragment_only_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021719, VkglTestCase_021719_1, VkglTestCase_021719_2);

#define VkglTestCase_021720_1 "dEQP-GLES31.functional.program_interface_query.uniform_block"
#define VkglTestCase_021720_2 ".referenced_by.vertex_geo_fragment_only_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021720, VkglTestCase_021720_1, VkglTestCase_021720_2);

#define VkglTestCase_024773_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_b"
#define VkglTestCase_024773_2 "lock.referenced_by.vertex_geo_fragment_only_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024773, VkglTestCase_024773_1, VkglTestCase_024773_2);

#define VkglTestCase_024774_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bl"
#define VkglTestCase_024774_2 "ock.referenced_by.vertex_geo_fragment_only_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024774, VkglTestCase_024774_1, VkglTestCase_024774_2);

#define VkglTestCase_024775_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_b"
#define VkglTestCase_024775_2 "lock.referenced_by.vertex_geo_fragment_only_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024775, VkglTestCase_024775_1, VkglTestCase_024775_2);
