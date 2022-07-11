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

#define VkglTestCase_021721_1 "dEQP-GLES31.functional.program_interface_query.uniform_bl"
#define VkglTestCase_021721_2 "ock.referenced_by.vertex_geo_fragment_only_geo.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021721, VkglTestCase_021721_1, VkglTestCase_021721_2);

#define VkglTestCase_021722_1 "dEQP-GLES31.functional.program_interface_query.uniform_blo"
#define VkglTestCase_021722_2 "ck.referenced_by.vertex_geo_fragment_only_geo.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021722, VkglTestCase_021722_1, VkglTestCase_021722_2);

#define VkglTestCase_021723_1 "dEQP-GLES31.functional.program_interface_query.uniform_bl"
#define VkglTestCase_021723_2 "ock.referenced_by.vertex_geo_fragment_only_geo.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021723, VkglTestCase_021723_1, VkglTestCase_021723_2);

#define VkglTestCase_024776_1 "dEQP-GLES31.functional.program_interface_query.shader_storage"
#define VkglTestCase_024776_2 "_block.referenced_by.vertex_geo_fragment_only_geo.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024776, VkglTestCase_024776_1, VkglTestCase_024776_2);

#define VkglTestCase_024777_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_"
#define VkglTestCase_024777_2 "block.referenced_by.vertex_geo_fragment_only_geo.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024777, VkglTestCase_024777_1, VkglTestCase_024777_2);

#define VkglTestCase_024778_1 "dEQP-GLES31.functional.program_interface_query.shader_storage"
#define VkglTestCase_024778_2 "_block.referenced_by.vertex_geo_fragment_only_geo.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024778, VkglTestCase_024778_1, VkglTestCase_024778_2);
