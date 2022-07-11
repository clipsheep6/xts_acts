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

#define VkglTestCase_000084_1 "dEQP-GLES2.functional.buffer.writ"
#define VkglTestCase_000084_2 "e.basic_subdata.array_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000084, VkglTestCase_000084_1, VkglTestCase_000084_2);

#define VkglTestCase_000085_1 "dEQP-GLES2.functional.buffer.writ"
#define VkglTestCase_000085_2 "e.basic_subdata.array_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000085, VkglTestCase_000085_1, VkglTestCase_000085_2);

#define VkglTestCase_000086_1 "dEQP-GLES2.functional.buffer.writ"
#define VkglTestCase_000086_2 "e.basic_subdata.array_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000086, VkglTestCase_000086_1, VkglTestCase_000086_2);

#define VkglTestCase_000087_1 "dEQP-GLES2.functional.buffer.write.ba"
#define VkglTestCase_000087_2 "sic_subdata.element_array_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000087, VkglTestCase_000087_1, VkglTestCase_000087_2);

#define VkglTestCase_000088_1 "dEQP-GLES2.functional.buffer.write.ba"
#define VkglTestCase_000088_2 "sic_subdata.element_array_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000088, VkglTestCase_000088_1, VkglTestCase_000088_2);

#define VkglTestCase_000089_1 "dEQP-GLES2.functional.buffer.write.ba"
#define VkglTestCase_000089_2 "sic_subdata.element_array_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000089, VkglTestCase_000089_1, VkglTestCase_000089_2);
