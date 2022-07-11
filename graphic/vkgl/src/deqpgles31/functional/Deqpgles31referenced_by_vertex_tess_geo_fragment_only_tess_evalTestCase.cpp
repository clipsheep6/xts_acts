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

#define VkglTestCase_021739_1 "dEQP-GLES31.functional.program_interface_query.uniform_block.re"
#define VkglTestCase_021739_2 "ferenced_by.vertex_tess_geo_fragment_only_tess_eval.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021739, VkglTestCase_021739_1, VkglTestCase_021739_2);

#define VkglTestCase_021740_1 "dEQP-GLES31.functional.program_interface_query.uniform_block.ref"
#define VkglTestCase_021740_2 "erenced_by.vertex_tess_geo_fragment_only_tess_eval.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021740, VkglTestCase_021740_1, VkglTestCase_021740_2);

#define VkglTestCase_021741_1 "dEQP-GLES31.functional.program_interface_query.uniform_block.re"
#define VkglTestCase_021741_2 "ferenced_by.vertex_tess_geo_fragment_only_tess_eval.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021741, VkglTestCase_021741_1, VkglTestCase_021741_2);

#define VkglTestCase_024794_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bloc"
#define VkglTestCase_024794_2 "k.referenced_by.vertex_tess_geo_fragment_only_tess_eval.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024794, VkglTestCase_024794_1, VkglTestCase_024794_2);

#define VkglTestCase_024795_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_block"
#define VkglTestCase_024795_2 ".referenced_by.vertex_tess_geo_fragment_only_tess_eval.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024795, VkglTestCase_024795_1, VkglTestCase_024795_2);

#define VkglTestCase_024796_1 "dEQP-GLES31.functional.program_interface_query.shader_storage_bloc"
#define VkglTestCase_024796_2 "k.referenced_by.vertex_tess_geo_fragment_only_tess_eval.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024796, VkglTestCase_024796_1, VkglTestCase_024796_2);
