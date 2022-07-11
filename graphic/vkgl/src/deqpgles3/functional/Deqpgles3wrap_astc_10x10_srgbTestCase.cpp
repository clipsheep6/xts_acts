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

#define VkglTestCase_023779_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023779_2 "10x10_srgb.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023779, VkglTestCase_023779_1, VkglTestCase_023779_2);

#define VkglTestCase_023780_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023780_2 "_10x10_srgb.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023780, VkglTestCase_023780_1, VkglTestCase_023780_2);

#define VkglTestCase_023781_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023781_2 "10x10_srgb.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023781, VkglTestCase_023781_1, VkglTestCase_023781_2);

#define VkglTestCase_023782_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023782_2 "10x10_srgb.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023782, VkglTestCase_023782_1, VkglTestCase_023782_2);

#define VkglTestCase_023783_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023783_2 "10x10_srgb.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023783, VkglTestCase_023783_1, VkglTestCase_023783_2);

#define VkglTestCase_023784_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023784_2 "10x10_srgb.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023784, VkglTestCase_023784_1, VkglTestCase_023784_2);

#define VkglTestCase_023785_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023785_2 "10x10_srgb.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023785, VkglTestCase_023785_1, VkglTestCase_023785_2);

#define VkglTestCase_023786_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023786_2 "10x10_srgb.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023786, VkglTestCase_023786_1, VkglTestCase_023786_2);

#define VkglTestCase_023787_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023787_2 "0x10_srgb.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023787, VkglTestCase_023787_1, VkglTestCase_023787_2);

#define VkglTestCase_023788_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023788_2 "10x10_srgb.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023788, VkglTestCase_023788_1, VkglTestCase_023788_2);

#define VkglTestCase_023789_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023789_2 "0x10_srgb.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023789, VkglTestCase_023789_1, VkglTestCase_023789_2);

#define VkglTestCase_023790_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023790_2 "10x10_srgb.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023790, VkglTestCase_023790_1, VkglTestCase_023790_2);

#define VkglTestCase_023791_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023791_2 "10x10_srgb.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023791, VkglTestCase_023791_1, VkglTestCase_023791_2);

#define VkglTestCase_023792_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023792_2 "10x10_srgb.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023792, VkglTestCase_023792_1, VkglTestCase_023792_2);

#define VkglTestCase_023793_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023793_2 "0x10_srgb.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023793, VkglTestCase_023793_1, VkglTestCase_023793_2);

#define VkglTestCase_023794_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023794_2 "10x10_srgb.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023794, VkglTestCase_023794_1, VkglTestCase_023794_2);

#define VkglTestCase_023795_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023795_2 "0x10_srgb.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023795, VkglTestCase_023795_1, VkglTestCase_023795_2);

#define VkglTestCase_023796_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023796_2 "10x10_srgb.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023796, VkglTestCase_023796_1, VkglTestCase_023796_2);

#define VkglTestCase_023797_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023797_2 "x10_srgb.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023797, VkglTestCase_023797_1, VkglTestCase_023797_2);

#define VkglTestCase_023798_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023798_2 "0x10_srgb.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023798, VkglTestCase_023798_1, VkglTestCase_023798_2);

#define VkglTestCase_023799_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023799_2 "x10_srgb.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023799, VkglTestCase_023799_1, VkglTestCase_023799_2);

#define VkglTestCase_023800_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023800_2 "x10_srgb.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023800, VkglTestCase_023800_1, VkglTestCase_023800_2);

#define VkglTestCase_023801_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023801_2 "x10_srgb.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023801, VkglTestCase_023801_1, VkglTestCase_023801_2);

#define VkglTestCase_023802_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023802_2 "x10_srgb.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023802, VkglTestCase_023802_1, VkglTestCase_023802_2);

#define VkglTestCase_023803_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023803_2 "x10_srgb.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023803, VkglTestCase_023803_1, VkglTestCase_023803_2);

#define VkglTestCase_023804_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023804_2 "x10_srgb.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023804, VkglTestCase_023804_1, VkglTestCase_023804_2);

#define VkglTestCase_023805_1 "dEQP-GLES3.functional.texture.wrap.astc_10x"
#define VkglTestCase_023805_2 "10_srgb.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023805, VkglTestCase_023805_1, VkglTestCase_023805_2);

#define VkglTestCase_023806_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023806_2 "x10_srgb.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023806, VkglTestCase_023806_1, VkglTestCase_023806_2);

#define VkglTestCase_023807_1 "dEQP-GLES3.functional.texture.wrap.astc_10x"
#define VkglTestCase_023807_2 "10_srgb.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023807, VkglTestCase_023807_1, VkglTestCase_023807_2);

#define VkglTestCase_023808_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023808_2 "x10_srgb.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023808, VkglTestCase_023808_1, VkglTestCase_023808_2);

#define VkglTestCase_023809_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023809_2 "x10_srgb.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023809, VkglTestCase_023809_1, VkglTestCase_023809_2);

#define VkglTestCase_023810_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023810_2 "x10_srgb.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023810, VkglTestCase_023810_1, VkglTestCase_023810_2);

#define VkglTestCase_023811_1 "dEQP-GLES3.functional.texture.wrap.astc_10x"
#define VkglTestCase_023811_2 "10_srgb.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023811, VkglTestCase_023811_1, VkglTestCase_023811_2);

#define VkglTestCase_023812_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023812_2 "x10_srgb.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023812, VkglTestCase_023812_1, VkglTestCase_023812_2);

#define VkglTestCase_023813_1 "dEQP-GLES3.functional.texture.wrap.astc_10x"
#define VkglTestCase_023813_2 "10_srgb.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023813, VkglTestCase_023813_1, VkglTestCase_023813_2);

#define VkglTestCase_023814_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023814_2 "x10_srgb.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023814, VkglTestCase_023814_1, VkglTestCase_023814_2);
