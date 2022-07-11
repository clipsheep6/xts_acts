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

#define VkglTestCase_021682_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_021682_2 "m_block.referenced_by.separable_tess_eval.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021682, VkglTestCase_021682_1, VkglTestCase_021682_2);

#define VkglTestCase_021683_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_021683_2 "_block.referenced_by.separable_tess_eval.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021683, VkglTestCase_021683_1, VkglTestCase_021683_2);

#define VkglTestCase_021684_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_021684_2 "m_block.referenced_by.separable_tess_eval.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021684, VkglTestCase_021684_1, VkglTestCase_021684_2);

#define VkglTestCase_024737_1 "dEQP-GLES31.functional.program_interface_query.shader_st"
#define VkglTestCase_024737_2 "orage_block.referenced_by.separable_tess_eval.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024737, VkglTestCase_024737_1, VkglTestCase_024737_2);

#define VkglTestCase_024738_1 "dEQP-GLES31.functional.program_interface_query.shader_sto"
#define VkglTestCase_024738_2 "rage_block.referenced_by.separable_tess_eval.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024738, VkglTestCase_024738_1, VkglTestCase_024738_2);

#define VkglTestCase_024739_1 "dEQP-GLES31.functional.program_interface_query.shader_st"
#define VkglTestCase_024739_2 "orage_block.referenced_by.separable_tess_eval.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024739, VkglTestCase_024739_1, VkglTestCase_024739_2);
