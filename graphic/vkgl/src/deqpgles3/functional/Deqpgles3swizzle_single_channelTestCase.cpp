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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025197_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025197_2 "swizzle.single_channel.r_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025197, VkglTestCase_025197_1, VkglTestCase_025197_2);

#define VkglTestCase_025198_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025198_2 ".swizzle.single_channel.r_blue"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025198, VkglTestCase_025198_1, VkglTestCase_025198_2);

#define VkglTestCase_025199_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025199_2 "swizzle.single_channel.r_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025199, VkglTestCase_025199_1, VkglTestCase_025199_2);

#define VkglTestCase_025200_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025200_2 ".swizzle.single_channel.r_zero"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025200, VkglTestCase_025200_1, VkglTestCase_025200_2);

#define VkglTestCase_025201_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025201_2 ".swizzle.single_channel.r_one"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025201, VkglTestCase_025201_1, VkglTestCase_025201_2);

#define VkglTestCase_025202_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025202_2 ".swizzle.single_channel.g_red"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025202, VkglTestCase_025202_1, VkglTestCase_025202_2);

#define VkglTestCase_025203_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025203_2 ".swizzle.single_channel.g_blue"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025203, VkglTestCase_025203_1, VkglTestCase_025203_2);

#define VkglTestCase_025204_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025204_2 "swizzle.single_channel.g_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025204, VkglTestCase_025204_1, VkglTestCase_025204_2);

#define VkglTestCase_025205_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025205_2 ".swizzle.single_channel.g_zero"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025205, VkglTestCase_025205_1, VkglTestCase_025205_2);

#define VkglTestCase_025206_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025206_2 ".swizzle.single_channel.g_one"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025206, VkglTestCase_025206_1, VkglTestCase_025206_2);

#define VkglTestCase_025207_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025207_2 ".swizzle.single_channel.b_red"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025207, VkglTestCase_025207_1, VkglTestCase_025207_2);

#define VkglTestCase_025208_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025208_2 "swizzle.single_channel.b_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025208, VkglTestCase_025208_1, VkglTestCase_025208_2);

#define VkglTestCase_025209_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025209_2 "swizzle.single_channel.b_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025209, VkglTestCase_025209_1, VkglTestCase_025209_2);

#define VkglTestCase_025210_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025210_2 ".swizzle.single_channel.b_zero"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025210, VkglTestCase_025210_1, VkglTestCase_025210_2);

#define VkglTestCase_025211_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025211_2 ".swizzle.single_channel.b_one"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025211, VkglTestCase_025211_1, VkglTestCase_025211_2);

#define VkglTestCase_025212_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025212_2 ".swizzle.single_channel.a_red"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025212, VkglTestCase_025212_1, VkglTestCase_025212_2);

#define VkglTestCase_025213_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025213_2 "swizzle.single_channel.a_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025213, VkglTestCase_025213_1, VkglTestCase_025213_2);

#define VkglTestCase_025214_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025214_2 ".swizzle.single_channel.a_blue"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025214, VkglTestCase_025214_1, VkglTestCase_025214_2);

#define VkglTestCase_025215_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025215_2 ".swizzle.single_channel.a_zero"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025215, VkglTestCase_025215_1, VkglTestCase_025215_2);

#define VkglTestCase_025216_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025216_2 ".swizzle.single_channel.a_one"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025216, VkglTestCase_025216_1, VkglTestCase_025216_2);
