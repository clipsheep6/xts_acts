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

#define VkglTestCase_021673_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_021673_2 "orm_block.referenced_by.separable_vertex.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021673, VkglTestCase_021673_1, VkglTestCase_021673_2);

#define VkglTestCase_021674_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_021674_2 "rm_block.referenced_by.separable_vertex.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021674, VkglTestCase_021674_1, VkglTestCase_021674_2);

#define VkglTestCase_021675_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_021675_2 "orm_block.referenced_by.separable_vertex.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021675, VkglTestCase_021675_1, VkglTestCase_021675_2);

#define VkglTestCase_024728_1 "dEQP-GLES31.functional.program_interface_query.shader_s"
#define VkglTestCase_024728_2 "torage_block.referenced_by.separable_vertex.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024728, VkglTestCase_024728_1, VkglTestCase_024728_2);

#define VkglTestCase_024729_1 "dEQP-GLES31.functional.program_interface_query.shader_st"
#define VkglTestCase_024729_2 "orage_block.referenced_by.separable_vertex.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024729, VkglTestCase_024729_1, VkglTestCase_024729_2);

#define VkglTestCase_024730_1 "dEQP-GLES31.functional.program_interface_query.shader_s"
#define VkglTestCase_024730_2 "torage_block.referenced_by.separable_vertex.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024730, VkglTestCase_024730_1, VkglTestCase_024730_2);
