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

#define VkglTestCase_021126_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_021126_2 ".referenced_by_shader.vertex_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021126, VkglTestCase_021126_1, VkglTestCase_021126_2);

#define VkglTestCase_021127_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_021127_2 "ferenced_by_shader.vertex_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021127, VkglTestCase_021127_1, VkglTestCase_021127_2);

#define VkglTestCase_021128_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_021128_2 "erenced_by_shader.vertex_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021128, VkglTestCase_021128_1, VkglTestCase_021128_2);

#define VkglTestCase_024252_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024252_2 "ariable.referenced_by.vertex_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024252, VkglTestCase_024252_1, VkglTestCase_024252_2);

#define VkglTestCase_024253_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024253_2 "able.referenced_by.vertex_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024253, VkglTestCase_024253_1, VkglTestCase_024253_2);

#define VkglTestCase_024254_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024254_2 "able.referenced_by.vertex_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024254, VkglTestCase_024254_1, VkglTestCase_024254_2);
