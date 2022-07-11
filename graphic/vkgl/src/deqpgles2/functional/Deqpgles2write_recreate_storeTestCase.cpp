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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000074_1 "dEQP-GLES2.functional.buffer.w"
#define VkglTestCase_000074_2 "rite.recreate_store.identical_1"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000074, VkglTestCase_000074_1, VkglTestCase_000074_2);

#define VkglTestCase_000075_1 "dEQP-GLES2.functional.buffer.w"
#define VkglTestCase_000075_2 "rite.recreate_store.identical_2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000075, VkglTestCase_000075_1, VkglTestCase_000075_2);

#define VkglTestCase_000076_1 "dEQP-GLES2.functional.buffer.write"
#define VkglTestCase_000076_2 ".recreate_store.different_target_1"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000076, VkglTestCase_000076_1, VkglTestCase_000076_2);

#define VkglTestCase_000077_1 "dEQP-GLES2.functional.buffer.write"
#define VkglTestCase_000077_2 ".recreate_store.different_target_2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000077, VkglTestCase_000077_1, VkglTestCase_000077_2);

#define VkglTestCase_000078_1 "dEQP-GLES2.functional.buffer.wri"
#define VkglTestCase_000078_2 "te.recreate_store.different_usage"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000078, VkglTestCase_000078_1, VkglTestCase_000078_2);

#define VkglTestCase_000079_1 "dEQP-GLES2.functional.buffer.wri"
#define VkglTestCase_000079_2 "te.recreate_store.different_size"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000079, VkglTestCase_000079_1, VkglTestCase_000079_2);

#define VkglTestCase_000080_1 "dEQP-GLES2.functional.buffer."
#define VkglTestCase_000080_2 "write.recreate_store.random_1"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000080, VkglTestCase_000080_1, VkglTestCase_000080_2);

#define VkglTestCase_000081_1 "dEQP-GLES2.functional.buffer."
#define VkglTestCase_000081_2 "write.recreate_store.random_2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000081, VkglTestCase_000081_1, VkglTestCase_000081_2);

#define VkglTestCase_000082_1 "dEQP-GLES2.functional.buffer."
#define VkglTestCase_000082_2 "write.recreate_store.random_3"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000082, VkglTestCase_000082_1, VkglTestCase_000082_2);

#define VkglTestCase_000083_1 "dEQP-GLES2.functional.buffer."
#define VkglTestCase_000083_2 "write.recreate_store.random_4"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000083, VkglTestCase_000083_1, VkglTestCase_000083_2);
