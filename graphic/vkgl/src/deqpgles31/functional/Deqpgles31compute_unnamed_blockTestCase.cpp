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
#include "../ActsDeqpgles310021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020981_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020981_2 "orm.referenced_by_shader.compute.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020981, VkglTestCase_020981_1, VkglTestCase_020981_2);

#define VkglTestCase_020982_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020982_2 ".referenced_by_shader.compute.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020982, VkglTestCase_020982_1, VkglTestCase_020982_2);

#define VkglTestCase_020983_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020983_2 "referenced_by_shader.compute.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020983, VkglTestCase_020983_1, VkglTestCase_020983_2);

#define VkglTestCase_024165_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024165_2 "r_variable.referenced_by.compute.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024165, VkglTestCase_024165_1, VkglTestCase_024165_2);

#define VkglTestCase_024166_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024166_2 "ariable.referenced_by.compute.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024166, VkglTestCase_024166_1, VkglTestCase_024166_2);

#define VkglTestCase_024167_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024167_2 "ariable.referenced_by.compute.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024167, VkglTestCase_024167_1, VkglTestCase_024167_2);
