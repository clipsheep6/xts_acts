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

#define VkglTestCase_023707_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023707_2 "_10x6_srgb.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023707, VkglTestCase_023707_1, VkglTestCase_023707_2);

#define VkglTestCase_023708_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023708_2 "_10x6_srgb.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023708, VkglTestCase_023708_1, VkglTestCase_023708_2);

#define VkglTestCase_023709_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023709_2 "10x6_srgb.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023709, VkglTestCase_023709_1, VkglTestCase_023709_2);

#define VkglTestCase_023710_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023710_2 "_10x6_srgb.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023710, VkglTestCase_023710_1, VkglTestCase_023710_2);

#define VkglTestCase_023711_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023711_2 "10x6_srgb.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023711, VkglTestCase_023711_1, VkglTestCase_023711_2);

#define VkglTestCase_023712_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023712_2 "_10x6_srgb.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023712, VkglTestCase_023712_1, VkglTestCase_023712_2);

#define VkglTestCase_023713_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023713_2 "10x6_srgb.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023713, VkglTestCase_023713_1, VkglTestCase_023713_2);

#define VkglTestCase_023714_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023714_2 "_10x6_srgb.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023714, VkglTestCase_023714_1, VkglTestCase_023714_2);

#define VkglTestCase_023715_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023715_2 "10x6_srgb.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023715, VkglTestCase_023715_1, VkglTestCase_023715_2);

#define VkglTestCase_023716_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023716_2 "10x6_srgb.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023716, VkglTestCase_023716_1, VkglTestCase_023716_2);

#define VkglTestCase_023717_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023717_2 "10x6_srgb.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023717, VkglTestCase_023717_1, VkglTestCase_023717_2);

#define VkglTestCase_023718_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023718_2 "10x6_srgb.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023718, VkglTestCase_023718_1, VkglTestCase_023718_2);

#define VkglTestCase_023719_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023719_2 "10x6_srgb.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023719, VkglTestCase_023719_1, VkglTestCase_023719_2);

#define VkglTestCase_023720_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023720_2 "_10x6_srgb.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023720, VkglTestCase_023720_1, VkglTestCase_023720_2);

#define VkglTestCase_023721_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023721_2 "10x6_srgb.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023721, VkglTestCase_023721_1, VkglTestCase_023721_2);

#define VkglTestCase_023722_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023722_2 "10x6_srgb.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023722, VkglTestCase_023722_1, VkglTestCase_023722_2);

#define VkglTestCase_023723_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023723_2 "10x6_srgb.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023723, VkglTestCase_023723_1, VkglTestCase_023723_2);

#define VkglTestCase_023724_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023724_2 "10x6_srgb.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023724, VkglTestCase_023724_1, VkglTestCase_023724_2);

#define VkglTestCase_023725_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023725_2 "0x6_srgb.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023725, VkglTestCase_023725_1, VkglTestCase_023725_2);

#define VkglTestCase_023726_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023726_2 "0x6_srgb.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023726, VkglTestCase_023726_1, VkglTestCase_023726_2);

#define VkglTestCase_023727_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023727_2 "x6_srgb.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023727, VkglTestCase_023727_1, VkglTestCase_023727_2);

#define VkglTestCase_023728_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023728_2 "0x6_srgb.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023728, VkglTestCase_023728_1, VkglTestCase_023728_2);

#define VkglTestCase_023729_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023729_2 "x6_srgb.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023729, VkglTestCase_023729_1, VkglTestCase_023729_2);

#define VkglTestCase_023730_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023730_2 "0x6_srgb.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023730, VkglTestCase_023730_1, VkglTestCase_023730_2);

#define VkglTestCase_023731_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023731_2 "x6_srgb.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023731, VkglTestCase_023731_1, VkglTestCase_023731_2);

#define VkglTestCase_023732_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023732_2 "0x6_srgb.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023732, VkglTestCase_023732_1, VkglTestCase_023732_2);

#define VkglTestCase_023733_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023733_2 "x6_srgb.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023733, VkglTestCase_023733_1, VkglTestCase_023733_2);

#define VkglTestCase_023734_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023734_2 "x6_srgb.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023734, VkglTestCase_023734_1, VkglTestCase_023734_2);

#define VkglTestCase_023735_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023735_2 "x6_srgb.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023735, VkglTestCase_023735_1, VkglTestCase_023735_2);

#define VkglTestCase_023736_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023736_2 "x6_srgb.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023736, VkglTestCase_023736_1, VkglTestCase_023736_2);

#define VkglTestCase_023737_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023737_2 "x6_srgb.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023737, VkglTestCase_023737_1, VkglTestCase_023737_2);

#define VkglTestCase_023738_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023738_2 "0x6_srgb.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023738, VkglTestCase_023738_1, VkglTestCase_023738_2);

#define VkglTestCase_023739_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023739_2 "x6_srgb.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023739, VkglTestCase_023739_1, VkglTestCase_023739_2);

#define VkglTestCase_023740_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023740_2 "x6_srgb.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023740, VkglTestCase_023740_1, VkglTestCase_023740_2);

#define VkglTestCase_023741_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023741_2 "x6_srgb.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023741, VkglTestCase_023741_1, VkglTestCase_023741_2);

#define VkglTestCase_023742_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023742_2 "x6_srgb.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023742, VkglTestCase_023742_1, VkglTestCase_023742_2);
