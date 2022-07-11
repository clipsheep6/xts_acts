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

#define VkglTestCase_023743_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023743_2 "_10x8_srgb.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023743, VkglTestCase_023743_1, VkglTestCase_023743_2);

#define VkglTestCase_023744_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023744_2 "_10x8_srgb.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023744, VkglTestCase_023744_1, VkglTestCase_023744_2);

#define VkglTestCase_023745_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023745_2 "10x8_srgb.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023745, VkglTestCase_023745_1, VkglTestCase_023745_2);

#define VkglTestCase_023746_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023746_2 "_10x8_srgb.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023746, VkglTestCase_023746_1, VkglTestCase_023746_2);

#define VkglTestCase_023747_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023747_2 "10x8_srgb.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023747, VkglTestCase_023747_1, VkglTestCase_023747_2);

#define VkglTestCase_023748_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023748_2 "_10x8_srgb.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023748, VkglTestCase_023748_1, VkglTestCase_023748_2);

#define VkglTestCase_023749_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023749_2 "10x8_srgb.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023749, VkglTestCase_023749_1, VkglTestCase_023749_2);

#define VkglTestCase_023750_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023750_2 "_10x8_srgb.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023750, VkglTestCase_023750_1, VkglTestCase_023750_2);

#define VkglTestCase_023751_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023751_2 "10x8_srgb.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023751, VkglTestCase_023751_1, VkglTestCase_023751_2);

#define VkglTestCase_023752_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023752_2 "10x8_srgb.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023752, VkglTestCase_023752_1, VkglTestCase_023752_2);

#define VkglTestCase_023753_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023753_2 "10x8_srgb.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023753, VkglTestCase_023753_1, VkglTestCase_023753_2);

#define VkglTestCase_023754_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023754_2 "10x8_srgb.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023754, VkglTestCase_023754_1, VkglTestCase_023754_2);

#define VkglTestCase_023755_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023755_2 "10x8_srgb.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023755, VkglTestCase_023755_1, VkglTestCase_023755_2);

#define VkglTestCase_023756_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023756_2 "_10x8_srgb.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023756, VkglTestCase_023756_1, VkglTestCase_023756_2);

#define VkglTestCase_023757_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023757_2 "10x8_srgb.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023757, VkglTestCase_023757_1, VkglTestCase_023757_2);

#define VkglTestCase_023758_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023758_2 "10x8_srgb.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023758, VkglTestCase_023758_1, VkglTestCase_023758_2);

#define VkglTestCase_023759_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023759_2 "10x8_srgb.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023759, VkglTestCase_023759_1, VkglTestCase_023759_2);

#define VkglTestCase_023760_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023760_2 "10x8_srgb.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023760, VkglTestCase_023760_1, VkglTestCase_023760_2);

#define VkglTestCase_023761_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023761_2 "0x8_srgb.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023761, VkglTestCase_023761_1, VkglTestCase_023761_2);

#define VkglTestCase_023762_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023762_2 "0x8_srgb.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023762, VkglTestCase_023762_1, VkglTestCase_023762_2);

#define VkglTestCase_023763_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023763_2 "x8_srgb.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023763, VkglTestCase_023763_1, VkglTestCase_023763_2);

#define VkglTestCase_023764_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023764_2 "0x8_srgb.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023764, VkglTestCase_023764_1, VkglTestCase_023764_2);

#define VkglTestCase_023765_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023765_2 "x8_srgb.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023765, VkglTestCase_023765_1, VkglTestCase_023765_2);

#define VkglTestCase_023766_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023766_2 "0x8_srgb.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023766, VkglTestCase_023766_1, VkglTestCase_023766_2);

#define VkglTestCase_023767_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023767_2 "x8_srgb.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023767, VkglTestCase_023767_1, VkglTestCase_023767_2);

#define VkglTestCase_023768_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023768_2 "0x8_srgb.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023768, VkglTestCase_023768_1, VkglTestCase_023768_2);

#define VkglTestCase_023769_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023769_2 "x8_srgb.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023769, VkglTestCase_023769_1, VkglTestCase_023769_2);

#define VkglTestCase_023770_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023770_2 "x8_srgb.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023770, VkglTestCase_023770_1, VkglTestCase_023770_2);

#define VkglTestCase_023771_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023771_2 "x8_srgb.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023771, VkglTestCase_023771_1, VkglTestCase_023771_2);

#define VkglTestCase_023772_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023772_2 "x8_srgb.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023772, VkglTestCase_023772_1, VkglTestCase_023772_2);

#define VkglTestCase_023773_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023773_2 "x8_srgb.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023773, VkglTestCase_023773_1, VkglTestCase_023773_2);

#define VkglTestCase_023774_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023774_2 "0x8_srgb.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023774, VkglTestCase_023774_1, VkglTestCase_023774_2);

#define VkglTestCase_023775_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023775_2 "x8_srgb.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023775, VkglTestCase_023775_1, VkglTestCase_023775_2);

#define VkglTestCase_023776_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023776_2 "x8_srgb.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023776, VkglTestCase_023776_1, VkglTestCase_023776_2);

#define VkglTestCase_023777_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023777_2 "x8_srgb.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023777, VkglTestCase_023777_1, VkglTestCase_023777_2);

#define VkglTestCase_023778_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023778_2 "x8_srgb.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023778, VkglTestCase_023778_1, VkglTestCase_023778_2);
