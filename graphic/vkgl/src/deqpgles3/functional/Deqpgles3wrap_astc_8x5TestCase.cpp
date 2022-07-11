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
#include "../ActsDeqpgles30024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023059_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023059_2 "stc_8x5.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023059, VkglTestCase_023059_1, VkglTestCase_023059_2);

#define VkglTestCase_023060_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023060_2 "stc_8x5.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023060, VkglTestCase_023060_1, VkglTestCase_023060_2);

#define VkglTestCase_023061_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023061_2 "tc_8x5.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023061, VkglTestCase_023061_1, VkglTestCase_023061_2);

#define VkglTestCase_023062_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023062_2 "stc_8x5.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023062, VkglTestCase_023062_1, VkglTestCase_023062_2);

#define VkglTestCase_023063_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023063_2 "tc_8x5.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023063, VkglTestCase_023063_1, VkglTestCase_023063_2);

#define VkglTestCase_023064_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023064_2 "stc_8x5.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023064, VkglTestCase_023064_1, VkglTestCase_023064_2);

#define VkglTestCase_023065_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023065_2 "tc_8x5.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023065, VkglTestCase_023065_1, VkglTestCase_023065_2);

#define VkglTestCase_023066_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023066_2 "stc_8x5.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023066, VkglTestCase_023066_1, VkglTestCase_023066_2);

#define VkglTestCase_023067_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023067_2 "tc_8x5.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023067, VkglTestCase_023067_1, VkglTestCase_023067_2);

#define VkglTestCase_023068_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023068_2 "tc_8x5.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023068, VkglTestCase_023068_1, VkglTestCase_023068_2);

#define VkglTestCase_023069_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023069_2 "tc_8x5.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023069, VkglTestCase_023069_1, VkglTestCase_023069_2);

#define VkglTestCase_023070_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023070_2 "tc_8x5.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023070, VkglTestCase_023070_1, VkglTestCase_023070_2);

#define VkglTestCase_023071_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023071_2 "tc_8x5.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023071, VkglTestCase_023071_1, VkglTestCase_023071_2);

#define VkglTestCase_023072_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023072_2 "stc_8x5.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023072, VkglTestCase_023072_1, VkglTestCase_023072_2);

#define VkglTestCase_023073_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023073_2 "tc_8x5.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023073, VkglTestCase_023073_1, VkglTestCase_023073_2);

#define VkglTestCase_023074_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023074_2 "tc_8x5.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023074, VkglTestCase_023074_1, VkglTestCase_023074_2);

#define VkglTestCase_023075_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023075_2 "tc_8x5.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023075, VkglTestCase_023075_1, VkglTestCase_023075_2);

#define VkglTestCase_023076_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023076_2 "tc_8x5.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023076, VkglTestCase_023076_1, VkglTestCase_023076_2);

#define VkglTestCase_023077_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023077_2 "c_8x5.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023077, VkglTestCase_023077_1, VkglTestCase_023077_2);

#define VkglTestCase_023078_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023078_2 "c_8x5.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023078, VkglTestCase_023078_1, VkglTestCase_023078_2);

#define VkglTestCase_023079_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023079_2 "_8x5.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023079, VkglTestCase_023079_1, VkglTestCase_023079_2);

#define VkglTestCase_023080_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023080_2 "c_8x5.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023080, VkglTestCase_023080_1, VkglTestCase_023080_2);

#define VkglTestCase_023081_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023081_2 "_8x5.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023081, VkglTestCase_023081_1, VkglTestCase_023081_2);

#define VkglTestCase_023082_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023082_2 "c_8x5.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023082, VkglTestCase_023082_1, VkglTestCase_023082_2);

#define VkglTestCase_023083_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023083_2 "_8x5.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023083, VkglTestCase_023083_1, VkglTestCase_023083_2);

#define VkglTestCase_023084_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023084_2 "c_8x5.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023084, VkglTestCase_023084_1, VkglTestCase_023084_2);

#define VkglTestCase_023085_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023085_2 "_8x5.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023085, VkglTestCase_023085_1, VkglTestCase_023085_2);

#define VkglTestCase_023086_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023086_2 "_8x5.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023086, VkglTestCase_023086_1, VkglTestCase_023086_2);

#define VkglTestCase_023087_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023087_2 "_8x5.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023087, VkglTestCase_023087_1, VkglTestCase_023087_2);

#define VkglTestCase_023088_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023088_2 "_8x5.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023088, VkglTestCase_023088_1, VkglTestCase_023088_2);

#define VkglTestCase_023089_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023089_2 "_8x5.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023089, VkglTestCase_023089_1, VkglTestCase_023089_2);

#define VkglTestCase_023090_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023090_2 "c_8x5.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023090, VkglTestCase_023090_1, VkglTestCase_023090_2);

#define VkglTestCase_023091_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023091_2 "_8x5.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023091, VkglTestCase_023091_1, VkglTestCase_023091_2);

#define VkglTestCase_023092_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023092_2 "_8x5.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023092, VkglTestCase_023092_1, VkglTestCase_023092_2);

#define VkglTestCase_023093_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023093_2 "_8x5.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023093, VkglTestCase_023093_1, VkglTestCase_023093_2);

#define VkglTestCase_023094_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023094_2 "_8x5.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023094, VkglTestCase_023094_1, VkglTestCase_023094_2);
