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

#define VkglTestCase_021657_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021657_2 "ery.uniform_block.buffer_binding.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021657, VkglTestCase_021657_1, VkglTestCase_021657_2);

#define VkglTestCase_021658_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021658_2 "ry.uniform_block.buffer_binding.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021658, VkglTestCase_021658_1, VkglTestCase_021658_2);

#define VkglTestCase_021659_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021659_2 "ery.uniform_block.buffer_binding.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021659, VkglTestCase_021659_1, VkglTestCase_021659_2);

#define VkglTestCase_021660_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_021660_2 "rm_block.buffer_binding.named_block_explicit_binding"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021660, VkglTestCase_021660_1, VkglTestCase_021660_2);

#define VkglTestCase_021661_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_021661_2 "m_block.buffer_binding.unnamed_block_explicit_binding"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021661, VkglTestCase_021661_1, VkglTestCase_021661_2);

#define VkglTestCase_021662_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_021662_2 "rm_block.buffer_binding.block_array_explicit_binding"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021662, VkglTestCase_021662_1, VkglTestCase_021662_2);
