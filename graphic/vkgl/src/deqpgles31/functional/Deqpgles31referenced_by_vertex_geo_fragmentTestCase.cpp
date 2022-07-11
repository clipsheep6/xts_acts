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

#define VkglTestCase_021712_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_021712_2 "m_block.referenced_by.vertex_geo_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021712, VkglTestCase_021712_1, VkglTestCase_021712_2);

#define VkglTestCase_021713_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_021713_2 "_block.referenced_by.vertex_geo_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021713, VkglTestCase_021713_1, VkglTestCase_021713_2);

#define VkglTestCase_021714_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_021714_2 "m_block.referenced_by.vertex_geo_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021714, VkglTestCase_021714_1, VkglTestCase_021714_2);

#define VkglTestCase_024767_1 "dEQP-GLES31.functional.program_interface_query.shader_st"
#define VkglTestCase_024767_2 "orage_block.referenced_by.vertex_geo_fragment.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024767, VkglTestCase_024767_1, VkglTestCase_024767_2);

#define VkglTestCase_024768_1 "dEQP-GLES31.functional.program_interface_query.shader_sto"
#define VkglTestCase_024768_2 "rage_block.referenced_by.vertex_geo_fragment.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024768, VkglTestCase_024768_1, VkglTestCase_024768_2);

#define VkglTestCase_024769_1 "dEQP-GLES31.functional.program_interface_query.shader_st"
#define VkglTestCase_024769_2 "orage_block.referenced_by.vertex_geo_fragment.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024769, VkglTestCase_024769_1, VkglTestCase_024769_2);
