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

#define VkglTestCase_000090_1 "dEQP-GLES2.functional.buffer."
#define VkglTestCase_000090_2 "write.partial_specify.whole_1"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000090, VkglTestCase_000090_1, VkglTestCase_000090_2);

#define VkglTestCase_000091_1 "dEQP-GLES2.functional.buffer."
#define VkglTestCase_000091_2 "write.partial_specify.whole_2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000091, VkglTestCase_000091_1, VkglTestCase_000091_2);

#define VkglTestCase_000092_1 "dEQP-GLES2.functional.buffer."
#define VkglTestCase_000092_2 "write.partial_specify.whole_3"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000092, VkglTestCase_000092_1, VkglTestCase_000092_2);

#define VkglTestCase_000093_1 "dEQP-GLES2.functional.buffer."
#define VkglTestCase_000093_2 "write.partial_specify.whole_4"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000093, VkglTestCase_000093_1, VkglTestCase_000093_2);

#define VkglTestCase_000094_1 "dEQP-GLES2.functional.buffer"
#define VkglTestCase_000094_2 ".write.partial_specify.low_1"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000094, VkglTestCase_000094_1, VkglTestCase_000094_2);

#define VkglTestCase_000095_1 "dEQP-GLES2.functional.buffer"
#define VkglTestCase_000095_2 ".write.partial_specify.low_2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000095, VkglTestCase_000095_1, VkglTestCase_000095_2);

#define VkglTestCase_000096_1 "dEQP-GLES2.functional.buffer"
#define VkglTestCase_000096_2 ".write.partial_specify.low_3"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000096, VkglTestCase_000096_1, VkglTestCase_000096_2);

#define VkglTestCase_000097_1 "dEQP-GLES2.functional.buffer"
#define VkglTestCase_000097_2 ".write.partial_specify.high_1"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000097, VkglTestCase_000097_1, VkglTestCase_000097_2);

#define VkglTestCase_000098_1 "dEQP-GLES2.functional.buffer"
#define VkglTestCase_000098_2 ".write.partial_specify.high_2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000098, VkglTestCase_000098_1, VkglTestCase_000098_2);

#define VkglTestCase_000099_1 "dEQP-GLES2.functional.buffer"
#define VkglTestCase_000099_2 ".write.partial_specify.high_3"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000099, VkglTestCase_000099_1, VkglTestCase_000099_2);

#define VkglTestCase_000100_1 "dEQP-GLES2.functional.buffer."
#define VkglTestCase_000100_2 "write.partial_specify.middle_1"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000100, VkglTestCase_000100_1, VkglTestCase_000100_2);

#define VkglTestCase_000101_1 "dEQP-GLES2.functional.buffer."
#define VkglTestCase_000101_2 "write.partial_specify.middle_2"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000101, VkglTestCase_000101_1, VkglTestCase_000101_2);

#define VkglTestCase_000102_1 "dEQP-GLES2.functional.buffer."
#define VkglTestCase_000102_2 "write.partial_specify.middle_3"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000102, VkglTestCase_000102_1, VkglTestCase_000102_2);
