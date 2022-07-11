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

#define VkglTestCase_000113_1 "dEQP-GLES2.function"
#define VkglTestCase_000113_2 "al.light_amount.none"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000113, VkglTestCase_000113_1, VkglTestCase_000113_2);

#define VkglTestCase_000114_1 "dEQP-GLES2.function"
#define VkglTestCase_000114_2 "al.light_amount.1dir"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000114, VkglTestCase_000114_1, VkglTestCase_000114_2);

#define VkglTestCase_000115_1 "dEQP-GLES2.function"
#define VkglTestCase_000115_2 "al.light_amount.2dir"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000115, VkglTestCase_000115_1, VkglTestCase_000115_2);

#define VkglTestCase_000116_1 "dEQP-GLES2.function"
#define VkglTestCase_000116_2 "al.light_amount.4dir"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000116, VkglTestCase_000116_1, VkglTestCase_000116_2);

#define VkglTestCase_000117_1 "dEQP-GLES2.function"
#define VkglTestCase_000117_2 "al.light_amount.6dir"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000117, VkglTestCase_000117_1, VkglTestCase_000117_2);

#define VkglTestCase_000118_1 "dEQP-GLES2.function"
#define VkglTestCase_000118_2 "al.light_amount.8dir"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000118, VkglTestCase_000118_1, VkglTestCase_000118_2);

#define VkglTestCase_000119_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000119_2 "l.light_amount.10dir"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000119, VkglTestCase_000119_1, VkglTestCase_000119_2);

#define VkglTestCase_000120_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000120_2 "l.light_amount.12dir"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000120, VkglTestCase_000120_1, VkglTestCase_000120_2);

#define VkglTestCase_000121_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000121_2 "l.light_amount.14dir"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000121, VkglTestCase_000121_1, VkglTestCase_000121_2);

#define VkglTestCase_000122_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000122_2 "l.light_amount.16dir"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000122, VkglTestCase_000122_1, VkglTestCase_000122_2);

#define VkglTestCase_000123_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000123_2 "l.light_amount.1omni"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000123, VkglTestCase_000123_1, VkglTestCase_000123_2);

#define VkglTestCase_000124_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000124_2 "l.light_amount.2omni"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000124, VkglTestCase_000124_1, VkglTestCase_000124_2);

#define VkglTestCase_000125_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000125_2 "l.light_amount.4omni"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000125, VkglTestCase_000125_1, VkglTestCase_000125_2);

#define VkglTestCase_000126_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000126_2 "l.light_amount.6omni"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000126, VkglTestCase_000126_1, VkglTestCase_000126_2);

#define VkglTestCase_000127_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000127_2 "l.light_amount.8omni"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000127, VkglTestCase_000127_1, VkglTestCase_000127_2);

#define VkglTestCase_000128_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000128_2 "l.light_amount.10omni"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000128, VkglTestCase_000128_1, VkglTestCase_000128_2);

#define VkglTestCase_000129_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000129_2 "l.light_amount.12omni"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000129, VkglTestCase_000129_1, VkglTestCase_000129_2);

#define VkglTestCase_000130_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000130_2 "l.light_amount.14omni"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000130, VkglTestCase_000130_1, VkglTestCase_000130_2);

#define VkglTestCase_000131_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000131_2 "l.light_amount.16omni"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000131, VkglTestCase_000131_1, VkglTestCase_000131_2);
