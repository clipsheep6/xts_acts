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

#define VkglTestCase_000242_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000242_2 "write.partial_specify.whole_1"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000242, VkglTestCase_000242_1, VkglTestCase_000242_2);

#define VkglTestCase_000243_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000243_2 "write.partial_specify.whole_2"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000243, VkglTestCase_000243_1, VkglTestCase_000243_2);

#define VkglTestCase_000244_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000244_2 "write.partial_specify.whole_3"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000244, VkglTestCase_000244_1, VkglTestCase_000244_2);

#define VkglTestCase_000245_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000245_2 "write.partial_specify.whole_4"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000245, VkglTestCase_000245_1, VkglTestCase_000245_2);

#define VkglTestCase_000246_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000246_2 ".write.partial_specify.low_1"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000246, VkglTestCase_000246_1, VkglTestCase_000246_2);

#define VkglTestCase_000247_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000247_2 ".write.partial_specify.low_2"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000247, VkglTestCase_000247_1, VkglTestCase_000247_2);

#define VkglTestCase_000248_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000248_2 ".write.partial_specify.low_3"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000248, VkglTestCase_000248_1, VkglTestCase_000248_2);

#define VkglTestCase_000249_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000249_2 ".write.partial_specify.high_1"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000249, VkglTestCase_000249_1, VkglTestCase_000249_2);

#define VkglTestCase_000250_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000250_2 ".write.partial_specify.high_2"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000250, VkglTestCase_000250_1, VkglTestCase_000250_2);

#define VkglTestCase_000251_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000251_2 ".write.partial_specify.high_3"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000251, VkglTestCase_000251_1, VkglTestCase_000251_2);

#define VkglTestCase_000252_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000252_2 "write.partial_specify.middle_1"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000252, VkglTestCase_000252_1, VkglTestCase_000252_2);

#define VkglTestCase_000253_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000253_2 "write.partial_specify.middle_2"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000253, VkglTestCase_000253_1, VkglTestCase_000253_2);

#define VkglTestCase_000254_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000254_2 "write.partial_specify.middle_3"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000254, VkglTestCase_000254_1, VkglTestCase_000254_2);
