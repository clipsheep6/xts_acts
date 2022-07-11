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
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009948_1 "dEQP-GLES31.functional.ssbo.layout.mult"
#define VkglTestCase_009948_2 "i_nested_struct.per_block_buffer.shared"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009948, VkglTestCase_009948_1, VkglTestCase_009948_2);

#define VkglTestCase_009949_1 "dEQP-GLES31.functional.ssbo.layout.multi_neste"
#define VkglTestCase_009949_2 "d_struct.per_block_buffer.shared_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009949, VkglTestCase_009949_1, VkglTestCase_009949_2);

#define VkglTestCase_009950_1 "dEQP-GLES31.functional.ssbo.layout.mult"
#define VkglTestCase_009950_2 "i_nested_struct.per_block_buffer.packed"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009950, VkglTestCase_009950_1, VkglTestCase_009950_2);

#define VkglTestCase_009951_1 "dEQP-GLES31.functional.ssbo.layout.multi_neste"
#define VkglTestCase_009951_2 "d_struct.per_block_buffer.packed_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009951, VkglTestCase_009951_1, VkglTestCase_009951_2);

#define VkglTestCase_009952_1 "dEQP-GLES31.functional.ssbo.layout.mult"
#define VkglTestCase_009952_2 "i_nested_struct.per_block_buffer.std140"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009952, VkglTestCase_009952_1, VkglTestCase_009952_2);

#define VkglTestCase_009953_1 "dEQP-GLES31.functional.ssbo.layout.multi_neste"
#define VkglTestCase_009953_2 "d_struct.per_block_buffer.std140_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009953, VkglTestCase_009953_1, VkglTestCase_009953_2);

#define VkglTestCase_009954_1 "dEQP-GLES31.functional.ssbo.layout.mult"
#define VkglTestCase_009954_2 "i_nested_struct.per_block_buffer.std430"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009954, VkglTestCase_009954_1, VkglTestCase_009954_2);

#define VkglTestCase_009955_1 "dEQP-GLES31.functional.ssbo.layout.multi_neste"
#define VkglTestCase_009955_2 "d_struct.per_block_buffer.std430_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009955, VkglTestCase_009955_1, VkglTestCase_009955_2);
