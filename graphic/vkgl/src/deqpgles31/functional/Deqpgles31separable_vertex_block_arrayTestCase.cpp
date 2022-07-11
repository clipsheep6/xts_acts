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

#define VkglTestCase_021009_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_021009_2 "referenced_by_shader.separable_vertex.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021009, VkglTestCase_021009_1, VkglTestCase_021009_2);

#define VkglTestCase_021010_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_021010_2 "erenced_by_shader.separable_vertex.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021010, VkglTestCase_021010_1, VkglTestCase_021010_2);

#define VkglTestCase_021011_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_021011_2 "erenced_by_shader.separable_vertex.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021011, VkglTestCase_021011_1, VkglTestCase_021011_2);

#define VkglTestCase_024183_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024183_2 "ariable.referenced_by.separable_vertex.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024183, VkglTestCase_024183_1, VkglTestCase_024183_2);

#define VkglTestCase_024184_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024184_2 "able.referenced_by.separable_vertex.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024184, VkglTestCase_024184_1, VkglTestCase_024184_2);

#define VkglTestCase_024185_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024185_2 "ble.referenced_by.separable_vertex.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024185, VkglTestCase_024185_1, VkglTestCase_024185_2);
