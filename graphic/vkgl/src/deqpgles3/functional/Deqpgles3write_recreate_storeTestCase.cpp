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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000161_1 "dEQP-GLES3.functional.buffer.w"
#define VkglTestCase_000161_2 "rite.recreate_store.identical_1"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000161, VkglTestCase_000161_1, VkglTestCase_000161_2);

#define VkglTestCase_000162_1 "dEQP-GLES3.functional.buffer.w"
#define VkglTestCase_000162_2 "rite.recreate_store.identical_2"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000162, VkglTestCase_000162_1, VkglTestCase_000162_2);

#define VkglTestCase_000163_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000163_2 "e.recreate_store.different_target"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000163, VkglTestCase_000163_1, VkglTestCase_000163_2);

#define VkglTestCase_000164_1 "dEQP-GLES3.functional.buffer.wri"
#define VkglTestCase_000164_2 "te.recreate_store.different_usage"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000164, VkglTestCase_000164_1, VkglTestCase_000164_2);

#define VkglTestCase_000165_1 "dEQP-GLES3.functional.buffer.wri"
#define VkglTestCase_000165_2 "te.recreate_store.different_size"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000165, VkglTestCase_000165_1, VkglTestCase_000165_2);

#define VkglTestCase_000166_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000166_2 "write.recreate_store.random_1"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000166, VkglTestCase_000166_1, VkglTestCase_000166_2);

#define VkglTestCase_000167_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000167_2 "write.recreate_store.random_2"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000167, VkglTestCase_000167_1, VkglTestCase_000167_2);

#define VkglTestCase_000168_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000168_2 "write.recreate_store.random_3"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000168, VkglTestCase_000168_1, VkglTestCase_000168_2);

#define VkglTestCase_000169_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000169_2 "write.recreate_store.random_4"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000169, VkglTestCase_000169_1, VkglTestCase_000169_2);
