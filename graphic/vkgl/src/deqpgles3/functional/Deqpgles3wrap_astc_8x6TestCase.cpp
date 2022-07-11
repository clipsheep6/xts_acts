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

#define VkglTestCase_023095_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023095_2 "stc_8x6.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023095, VkglTestCase_023095_1, VkglTestCase_023095_2);

#define VkglTestCase_023096_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023096_2 "stc_8x6.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023096, VkglTestCase_023096_1, VkglTestCase_023096_2);

#define VkglTestCase_023097_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023097_2 "tc_8x6.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023097, VkglTestCase_023097_1, VkglTestCase_023097_2);

#define VkglTestCase_023098_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023098_2 "stc_8x6.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023098, VkglTestCase_023098_1, VkglTestCase_023098_2);

#define VkglTestCase_023099_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023099_2 "tc_8x6.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023099, VkglTestCase_023099_1, VkglTestCase_023099_2);

#define VkglTestCase_023100_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023100_2 "stc_8x6.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023100, VkglTestCase_023100_1, VkglTestCase_023100_2);

#define VkglTestCase_023101_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023101_2 "tc_8x6.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023101, VkglTestCase_023101_1, VkglTestCase_023101_2);

#define VkglTestCase_023102_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023102_2 "stc_8x6.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023102, VkglTestCase_023102_1, VkglTestCase_023102_2);

#define VkglTestCase_023103_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023103_2 "tc_8x6.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023103, VkglTestCase_023103_1, VkglTestCase_023103_2);

#define VkglTestCase_023104_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023104_2 "tc_8x6.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023104, VkglTestCase_023104_1, VkglTestCase_023104_2);

#define VkglTestCase_023105_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023105_2 "tc_8x6.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023105, VkglTestCase_023105_1, VkglTestCase_023105_2);

#define VkglTestCase_023106_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023106_2 "tc_8x6.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023106, VkglTestCase_023106_1, VkglTestCase_023106_2);

#define VkglTestCase_023107_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023107_2 "tc_8x6.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023107, VkglTestCase_023107_1, VkglTestCase_023107_2);

#define VkglTestCase_023108_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023108_2 "stc_8x6.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023108, VkglTestCase_023108_1, VkglTestCase_023108_2);

#define VkglTestCase_023109_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023109_2 "tc_8x6.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023109, VkglTestCase_023109_1, VkglTestCase_023109_2);

#define VkglTestCase_023110_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023110_2 "tc_8x6.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023110, VkglTestCase_023110_1, VkglTestCase_023110_2);

#define VkglTestCase_023111_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023111_2 "tc_8x6.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023111, VkglTestCase_023111_1, VkglTestCase_023111_2);

#define VkglTestCase_023112_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023112_2 "tc_8x6.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023112, VkglTestCase_023112_1, VkglTestCase_023112_2);

#define VkglTestCase_023113_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023113_2 "c_8x6.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023113, VkglTestCase_023113_1, VkglTestCase_023113_2);

#define VkglTestCase_023114_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023114_2 "c_8x6.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023114, VkglTestCase_023114_1, VkglTestCase_023114_2);

#define VkglTestCase_023115_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023115_2 "_8x6.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023115, VkglTestCase_023115_1, VkglTestCase_023115_2);

#define VkglTestCase_023116_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023116_2 "c_8x6.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023116, VkglTestCase_023116_1, VkglTestCase_023116_2);

#define VkglTestCase_023117_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023117_2 "_8x6.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023117, VkglTestCase_023117_1, VkglTestCase_023117_2);

#define VkglTestCase_023118_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023118_2 "c_8x6.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023118, VkglTestCase_023118_1, VkglTestCase_023118_2);

#define VkglTestCase_023119_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023119_2 "_8x6.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023119, VkglTestCase_023119_1, VkglTestCase_023119_2);

#define VkglTestCase_023120_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023120_2 "c_8x6.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023120, VkglTestCase_023120_1, VkglTestCase_023120_2);

#define VkglTestCase_023121_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023121_2 "_8x6.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023121, VkglTestCase_023121_1, VkglTestCase_023121_2);

#define VkglTestCase_023122_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023122_2 "_8x6.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023122, VkglTestCase_023122_1, VkglTestCase_023122_2);

#define VkglTestCase_023123_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023123_2 "_8x6.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023123, VkglTestCase_023123_1, VkglTestCase_023123_2);

#define VkglTestCase_023124_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023124_2 "_8x6.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023124, VkglTestCase_023124_1, VkglTestCase_023124_2);

#define VkglTestCase_023125_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023125_2 "_8x6.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023125, VkglTestCase_023125_1, VkglTestCase_023125_2);

#define VkglTestCase_023126_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023126_2 "c_8x6.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023126, VkglTestCase_023126_1, VkglTestCase_023126_2);

#define VkglTestCase_023127_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023127_2 "_8x6.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023127, VkglTestCase_023127_1, VkglTestCase_023127_2);

#define VkglTestCase_023128_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023128_2 "_8x6.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023128, VkglTestCase_023128_1, VkglTestCase_023128_2);

#define VkglTestCase_023129_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023129_2 "_8x6.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023129, VkglTestCase_023129_1, VkglTestCase_023129_2);

#define VkglTestCase_023130_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023130_2 "_8x6.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023130, VkglTestCase_023130_1, VkglTestCase_023130_2);
