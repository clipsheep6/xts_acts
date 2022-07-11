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

#define VkglTestCase_000721_1 "dEQP-GLES3.functional.bu"
#define VkglTestCase_000721_2 "ffer.copy.subrange.middle"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000721, VkglTestCase_000721_1, VkglTestCase_000721_2);

#define VkglTestCase_000722_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000722_2 ".copy.subrange.small_to_large"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000722, VkglTestCase_000722_1, VkglTestCase_000722_2);

#define VkglTestCase_000723_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000723_2 ".copy.subrange.large_to_small"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000723, VkglTestCase_000723_1, VkglTestCase_000723_2);

#define VkglTestCase_000724_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000724_2 ".copy.subrange.low_to_high_1"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000724, VkglTestCase_000724_1, VkglTestCase_000724_2);

#define VkglTestCase_000725_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000725_2 ".copy.subrange.low_to_high_2"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000725, VkglTestCase_000725_1, VkglTestCase_000725_2);

#define VkglTestCase_000726_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000726_2 ".copy.subrange.high_to_low_1"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000726, VkglTestCase_000726_1, VkglTestCase_000726_2);

#define VkglTestCase_000727_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000727_2 ".copy.subrange.high_to_low_2"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000727, VkglTestCase_000727_1, VkglTestCase_000727_2);
