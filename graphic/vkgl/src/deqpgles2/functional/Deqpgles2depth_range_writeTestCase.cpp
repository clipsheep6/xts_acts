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

#define VkglTestCase_015257_1 "dEQP-GLES2.functional.d"
#define VkglTestCase_015257_2 "epth_range.write.default"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015257, VkglTestCase_015257_1, VkglTestCase_015257_2);

#define VkglTestCase_015258_1 "dEQP-GLES2.functional.d"
#define VkglTestCase_015258_2 "epth_range.write.reverse"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015258, VkglTestCase_015258_1, VkglTestCase_015258_2);

#define VkglTestCase_015259_1 "dEQP-GLES2.functional.dept"
#define VkglTestCase_015259_2 "h_range.write.zero_to_half"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015259, VkglTestCase_015259_1, VkglTestCase_015259_2);

#define VkglTestCase_015260_1 "dEQP-GLES2.functional.dep"
#define VkglTestCase_015260_2 "th_range.write.half_to_one"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015260, VkglTestCase_015260_1, VkglTestCase_015260_2);

#define VkglTestCase_015261_1 "dEQP-GLES2.functional.dept"
#define VkglTestCase_015261_2 "h_range.write.half_to_zero"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015261, VkglTestCase_015261_1, VkglTestCase_015261_2);

#define VkglTestCase_015262_1 "dEQP-GLES2.functional.dep"
#define VkglTestCase_015262_2 "th_range.write.one_to_half"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015262, VkglTestCase_015262_1, VkglTestCase_015262_2);

#define VkglTestCase_015263_1 "dEQP-GLES2.functional.dept"
#define VkglTestCase_015263_2 "h_range.write.third_to_0_8"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015263, VkglTestCase_015263_1, VkglTestCase_015263_2);

#define VkglTestCase_015264_1 "dEQP-GLES2.functional.dept"
#define VkglTestCase_015264_2 "h_range.write.0_8_to_third"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015264, VkglTestCase_015264_1, VkglTestCase_015264_2);

#define VkglTestCase_015265_1 "dEQP-GLES2.functional.dept"
#define VkglTestCase_015265_2 "h_range.write.zero_to_zero"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015265, VkglTestCase_015265_1, VkglTestCase_015265_2);

#define VkglTestCase_015266_1 "dEQP-GLES2.functional.dept"
#define VkglTestCase_015266_2 "h_range.write.half_to_half"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015266, VkglTestCase_015266_1, VkglTestCase_015266_2);

#define VkglTestCase_015267_1 "dEQP-GLES2.functional.dep"
#define VkglTestCase_015267_2 "th_range.write.one_to_one"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015267, VkglTestCase_015267_1, VkglTestCase_015267_2);

#define VkglTestCase_015268_1 "dEQP-GLES2.functional.dep"
#define VkglTestCase_015268_2 "th_range.write.clamp_near"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015268, VkglTestCase_015268_1, VkglTestCase_015268_2);

#define VkglTestCase_015269_1 "dEQP-GLES2.functional.de"
#define VkglTestCase_015269_2 "pth_range.write.clamp_far"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015269, VkglTestCase_015269_1, VkglTestCase_015269_2);

#define VkglTestCase_015270_1 "dEQP-GLES2.functional.dep"
#define VkglTestCase_015270_2 "th_range.write.clamp_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015270, VkglTestCase_015270_1, VkglTestCase_015270_2);
