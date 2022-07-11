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

#define VkglTestCase_023563_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023563_2 "_8x5_srgb.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023563, VkglTestCase_023563_1, VkglTestCase_023563_2);

#define VkglTestCase_023564_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023564_2 "c_8x5_srgb.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023564, VkglTestCase_023564_1, VkglTestCase_023564_2);

#define VkglTestCase_023565_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023565_2 "_8x5_srgb.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023565, VkglTestCase_023565_1, VkglTestCase_023565_2);

#define VkglTestCase_023566_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023566_2 "_8x5_srgb.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023566, VkglTestCase_023566_1, VkglTestCase_023566_2);

#define VkglTestCase_023567_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023567_2 "_8x5_srgb.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023567, VkglTestCase_023567_1, VkglTestCase_023567_2);

#define VkglTestCase_023568_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023568_2 "_8x5_srgb.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023568, VkglTestCase_023568_1, VkglTestCase_023568_2);

#define VkglTestCase_023569_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023569_2 "_8x5_srgb.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023569, VkglTestCase_023569_1, VkglTestCase_023569_2);

#define VkglTestCase_023570_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023570_2 "_8x5_srgb.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023570, VkglTestCase_023570_1, VkglTestCase_023570_2);

#define VkglTestCase_023571_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023571_2 "8x5_srgb.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023571, VkglTestCase_023571_1, VkglTestCase_023571_2);

#define VkglTestCase_023572_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023572_2 "_8x5_srgb.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023572, VkglTestCase_023572_1, VkglTestCase_023572_2);

#define VkglTestCase_023573_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023573_2 "8x5_srgb.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023573, VkglTestCase_023573_1, VkglTestCase_023573_2);

#define VkglTestCase_023574_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023574_2 "_8x5_srgb.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023574, VkglTestCase_023574_1, VkglTestCase_023574_2);

#define VkglTestCase_023575_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023575_2 "_8x5_srgb.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023575, VkglTestCase_023575_1, VkglTestCase_023575_2);

#define VkglTestCase_023576_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023576_2 "_8x5_srgb.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023576, VkglTestCase_023576_1, VkglTestCase_023576_2);

#define VkglTestCase_023577_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023577_2 "8x5_srgb.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023577, VkglTestCase_023577_1, VkglTestCase_023577_2);

#define VkglTestCase_023578_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023578_2 "_8x5_srgb.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023578, VkglTestCase_023578_1, VkglTestCase_023578_2);

#define VkglTestCase_023579_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023579_2 "8x5_srgb.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023579, VkglTestCase_023579_1, VkglTestCase_023579_2);

#define VkglTestCase_023580_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023580_2 "_8x5_srgb.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023580, VkglTestCase_023580_1, VkglTestCase_023580_2);

#define VkglTestCase_023581_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023581_2 "x5_srgb.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023581, VkglTestCase_023581_1, VkglTestCase_023581_2);

#define VkglTestCase_023582_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023582_2 "8x5_srgb.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023582, VkglTestCase_023582_1, VkglTestCase_023582_2);

#define VkglTestCase_023583_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023583_2 "x5_srgb.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023583, VkglTestCase_023583_1, VkglTestCase_023583_2);

#define VkglTestCase_023584_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023584_2 "x5_srgb.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023584, VkglTestCase_023584_1, VkglTestCase_023584_2);

#define VkglTestCase_023585_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023585_2 "x5_srgb.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023585, VkglTestCase_023585_1, VkglTestCase_023585_2);

#define VkglTestCase_023586_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023586_2 "x5_srgb.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023586, VkglTestCase_023586_1, VkglTestCase_023586_2);

#define VkglTestCase_023587_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023587_2 "x5_srgb.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023587, VkglTestCase_023587_1, VkglTestCase_023587_2);

#define VkglTestCase_023588_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023588_2 "x5_srgb.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023588, VkglTestCase_023588_1, VkglTestCase_023588_2);

#define VkglTestCase_023589_1 "dEQP-GLES3.functional.texture.wrap.astc_8x"
#define VkglTestCase_023589_2 "5_srgb.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023589, VkglTestCase_023589_1, VkglTestCase_023589_2);

#define VkglTestCase_023590_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023590_2 "x5_srgb.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023590, VkglTestCase_023590_1, VkglTestCase_023590_2);

#define VkglTestCase_023591_1 "dEQP-GLES3.functional.texture.wrap.astc_8x"
#define VkglTestCase_023591_2 "5_srgb.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023591, VkglTestCase_023591_1, VkglTestCase_023591_2);

#define VkglTestCase_023592_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023592_2 "x5_srgb.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023592, VkglTestCase_023592_1, VkglTestCase_023592_2);

#define VkglTestCase_023593_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023593_2 "x5_srgb.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023593, VkglTestCase_023593_1, VkglTestCase_023593_2);

#define VkglTestCase_023594_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023594_2 "x5_srgb.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023594, VkglTestCase_023594_1, VkglTestCase_023594_2);

#define VkglTestCase_023595_1 "dEQP-GLES3.functional.texture.wrap.astc_8x"
#define VkglTestCase_023595_2 "5_srgb.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023595, VkglTestCase_023595_1, VkglTestCase_023595_2);

#define VkglTestCase_023596_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023596_2 "x5_srgb.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023596, VkglTestCase_023596_1, VkglTestCase_023596_2);

#define VkglTestCase_023597_1 "dEQP-GLES3.functional.texture.wrap.astc_8x"
#define VkglTestCase_023597_2 "5_srgb.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023597, VkglTestCase_023597_1, VkglTestCase_023597_2);

#define VkglTestCase_023598_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023598_2 "x5_srgb.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023598, VkglTestCase_023598_1, VkglTestCase_023598_2);
