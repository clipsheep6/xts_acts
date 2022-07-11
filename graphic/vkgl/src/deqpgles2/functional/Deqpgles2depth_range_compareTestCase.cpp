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
#include "../ActsDeqpgles20016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015271_1 "dEQP-GLES2.functional.de"
#define VkglTestCase_015271_2 "pth_range.compare.default"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015271, VkglTestCase_015271_1, VkglTestCase_015271_2);

#define VkglTestCase_015272_1 "dEQP-GLES2.functional.de"
#define VkglTestCase_015272_2 "pth_range.compare.reverse"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015272, VkglTestCase_015272_1, VkglTestCase_015272_2);

#define VkglTestCase_015273_1 "dEQP-GLES2.functional.depth"
#define VkglTestCase_015273_2 "_range.compare.zero_to_half"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015273, VkglTestCase_015273_1, VkglTestCase_015273_2);

#define VkglTestCase_015274_1 "dEQP-GLES2.functional.dept"
#define VkglTestCase_015274_2 "h_range.compare.half_to_one"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015274, VkglTestCase_015274_1, VkglTestCase_015274_2);

#define VkglTestCase_015275_1 "dEQP-GLES2.functional.depth"
#define VkglTestCase_015275_2 "_range.compare.half_to_zero"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015275, VkglTestCase_015275_1, VkglTestCase_015275_2);

#define VkglTestCase_015276_1 "dEQP-GLES2.functional.dept"
#define VkglTestCase_015276_2 "h_range.compare.one_to_half"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015276, VkglTestCase_015276_1, VkglTestCase_015276_2);

#define VkglTestCase_015277_1 "dEQP-GLES2.functional.depth"
#define VkglTestCase_015277_2 "_range.compare.third_to_0_8"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015277, VkglTestCase_015277_1, VkglTestCase_015277_2);

#define VkglTestCase_015278_1 "dEQP-GLES2.functional.depth"
#define VkglTestCase_015278_2 "_range.compare.0_8_to_third"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015278, VkglTestCase_015278_1, VkglTestCase_015278_2);

#define VkglTestCase_015279_1 "dEQP-GLES2.functional.depth"
#define VkglTestCase_015279_2 "_range.compare.zero_to_zero"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015279, VkglTestCase_015279_1, VkglTestCase_015279_2);

#define VkglTestCase_015280_1 "dEQP-GLES2.functional.depth"
#define VkglTestCase_015280_2 "_range.compare.half_to_half"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015280, VkglTestCase_015280_1, VkglTestCase_015280_2);

#define VkglTestCase_015281_1 "dEQP-GLES2.functional.dept"
#define VkglTestCase_015281_2 "h_range.compare.one_to_one"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015281, VkglTestCase_015281_1, VkglTestCase_015281_2);

#define VkglTestCase_015282_1 "dEQP-GLES2.functional.dept"
#define VkglTestCase_015282_2 "h_range.compare.clamp_near"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015282, VkglTestCase_015282_1, VkglTestCase_015282_2);

#define VkglTestCase_015283_1 "dEQP-GLES2.functional.dep"
#define VkglTestCase_015283_2 "th_range.compare.clamp_far"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015283, VkglTestCase_015283_1, VkglTestCase_015283_2);

#define VkglTestCase_015284_1 "dEQP-GLES2.functional.dept"
#define VkglTestCase_015284_2 "h_range.compare.clamp_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015284, VkglTestCase_015284_1, VkglTestCase_015284_2);
