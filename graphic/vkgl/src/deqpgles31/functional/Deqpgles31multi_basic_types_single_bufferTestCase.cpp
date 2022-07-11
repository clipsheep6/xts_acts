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

#define VkglTestCase_009940_1 "dEQP-GLES31.functional.ssbo.layout.m"
#define VkglTestCase_009940_2 "ulti_basic_types.single_buffer.shared"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009940, VkglTestCase_009940_1, VkglTestCase_009940_2);

#define VkglTestCase_009941_1 "dEQP-GLES31.functional.ssbo.layout.multi_bas"
#define VkglTestCase_009941_2 "ic_types.single_buffer.shared_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009941, VkglTestCase_009941_1, VkglTestCase_009941_2);

#define VkglTestCase_009942_1 "dEQP-GLES31.functional.ssbo.layout.m"
#define VkglTestCase_009942_2 "ulti_basic_types.single_buffer.packed"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009942, VkglTestCase_009942_1, VkglTestCase_009942_2);

#define VkglTestCase_009943_1 "dEQP-GLES31.functional.ssbo.layout.multi_bas"
#define VkglTestCase_009943_2 "ic_types.single_buffer.packed_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009943, VkglTestCase_009943_1, VkglTestCase_009943_2);

#define VkglTestCase_009944_1 "dEQP-GLES31.functional.ssbo.layout.m"
#define VkglTestCase_009944_2 "ulti_basic_types.single_buffer.std140"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009944, VkglTestCase_009944_1, VkglTestCase_009944_2);

#define VkglTestCase_009945_1 "dEQP-GLES31.functional.ssbo.layout.multi_bas"
#define VkglTestCase_009945_2 "ic_types.single_buffer.std140_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009945, VkglTestCase_009945_1, VkglTestCase_009945_2);

#define VkglTestCase_009946_1 "dEQP-GLES31.functional.ssbo.layout.m"
#define VkglTestCase_009946_2 "ulti_basic_types.single_buffer.std430"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009946, VkglTestCase_009946_1, VkglTestCase_009946_2);

#define VkglTestCase_009947_1 "dEQP-GLES31.functional.ssbo.layout.multi_bas"
#define VkglTestCase_009947_2 "ic_types.single_buffer.std430_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009947, VkglTestCase_009947_1, VkglTestCase_009947_2);
