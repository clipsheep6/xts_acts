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

#define VkglTestCase_021679_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_021679_2 "m_block.referenced_by.separable_tess_ctrl.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021679, VkglTestCase_021679_1, VkglTestCase_021679_2);

#define VkglTestCase_021680_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_021680_2 "_block.referenced_by.separable_tess_ctrl.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021680, VkglTestCase_021680_1, VkglTestCase_021680_2);

#define VkglTestCase_021681_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_021681_2 "m_block.referenced_by.separable_tess_ctrl.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021681, VkglTestCase_021681_1, VkglTestCase_021681_2);

#define VkglTestCase_024734_1 "dEQP-GLES31.functional.program_interface_query.shader_st"
#define VkglTestCase_024734_2 "orage_block.referenced_by.separable_tess_ctrl.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024734, VkglTestCase_024734_1, VkglTestCase_024734_2);

#define VkglTestCase_024735_1 "dEQP-GLES31.functional.program_interface_query.shader_sto"
#define VkglTestCase_024735_2 "rage_block.referenced_by.separable_tess_ctrl.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024735, VkglTestCase_024735_1, VkglTestCase_024735_2);

#define VkglTestCase_024736_1 "dEQP-GLES31.functional.program_interface_query.shader_st"
#define VkglTestCase_024736_2 "orage_block.referenced_by.separable_tess_ctrl.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024736, VkglTestCase_024736_1, VkglTestCase_024736_2);
