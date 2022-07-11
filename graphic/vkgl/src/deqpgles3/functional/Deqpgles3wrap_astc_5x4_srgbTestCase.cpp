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

#define VkglTestCase_023419_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023419_2 "_5x4_srgb.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023419, VkglTestCase_023419_1, VkglTestCase_023419_2);

#define VkglTestCase_023420_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023420_2 "c_5x4_srgb.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023420, VkglTestCase_023420_1, VkglTestCase_023420_2);

#define VkglTestCase_023421_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023421_2 "_5x4_srgb.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023421, VkglTestCase_023421_1, VkglTestCase_023421_2);

#define VkglTestCase_023422_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023422_2 "_5x4_srgb.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023422, VkglTestCase_023422_1, VkglTestCase_023422_2);

#define VkglTestCase_023423_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023423_2 "_5x4_srgb.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023423, VkglTestCase_023423_1, VkglTestCase_023423_2);

#define VkglTestCase_023424_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023424_2 "_5x4_srgb.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023424, VkglTestCase_023424_1, VkglTestCase_023424_2);

#define VkglTestCase_023425_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023425_2 "_5x4_srgb.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023425, VkglTestCase_023425_1, VkglTestCase_023425_2);

#define VkglTestCase_023426_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023426_2 "_5x4_srgb.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023426, VkglTestCase_023426_1, VkglTestCase_023426_2);

#define VkglTestCase_023427_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023427_2 "5x4_srgb.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023427, VkglTestCase_023427_1, VkglTestCase_023427_2);

#define VkglTestCase_023428_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023428_2 "_5x4_srgb.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023428, VkglTestCase_023428_1, VkglTestCase_023428_2);

#define VkglTestCase_023429_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023429_2 "5x4_srgb.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023429, VkglTestCase_023429_1, VkglTestCase_023429_2);

#define VkglTestCase_023430_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023430_2 "_5x4_srgb.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023430, VkglTestCase_023430_1, VkglTestCase_023430_2);

#define VkglTestCase_023431_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023431_2 "_5x4_srgb.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023431, VkglTestCase_023431_1, VkglTestCase_023431_2);

#define VkglTestCase_023432_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023432_2 "_5x4_srgb.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023432, VkglTestCase_023432_1, VkglTestCase_023432_2);

#define VkglTestCase_023433_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023433_2 "5x4_srgb.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023433, VkglTestCase_023433_1, VkglTestCase_023433_2);

#define VkglTestCase_023434_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023434_2 "_5x4_srgb.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023434, VkglTestCase_023434_1, VkglTestCase_023434_2);

#define VkglTestCase_023435_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023435_2 "5x4_srgb.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023435, VkglTestCase_023435_1, VkglTestCase_023435_2);

#define VkglTestCase_023436_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023436_2 "_5x4_srgb.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023436, VkglTestCase_023436_1, VkglTestCase_023436_2);

#define VkglTestCase_023437_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023437_2 "x4_srgb.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023437, VkglTestCase_023437_1, VkglTestCase_023437_2);

#define VkglTestCase_023438_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023438_2 "5x4_srgb.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023438, VkglTestCase_023438_1, VkglTestCase_023438_2);

#define VkglTestCase_023439_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023439_2 "x4_srgb.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023439, VkglTestCase_023439_1, VkglTestCase_023439_2);

#define VkglTestCase_023440_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023440_2 "x4_srgb.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023440, VkglTestCase_023440_1, VkglTestCase_023440_2);

#define VkglTestCase_023441_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023441_2 "x4_srgb.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023441, VkglTestCase_023441_1, VkglTestCase_023441_2);

#define VkglTestCase_023442_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023442_2 "x4_srgb.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023442, VkglTestCase_023442_1, VkglTestCase_023442_2);

#define VkglTestCase_023443_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023443_2 "x4_srgb.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023443, VkglTestCase_023443_1, VkglTestCase_023443_2);

#define VkglTestCase_023444_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023444_2 "x4_srgb.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023444, VkglTestCase_023444_1, VkglTestCase_023444_2);

#define VkglTestCase_023445_1 "dEQP-GLES3.functional.texture.wrap.astc_5x"
#define VkglTestCase_023445_2 "4_srgb.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023445, VkglTestCase_023445_1, VkglTestCase_023445_2);

#define VkglTestCase_023446_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023446_2 "x4_srgb.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023446, VkglTestCase_023446_1, VkglTestCase_023446_2);

#define VkglTestCase_023447_1 "dEQP-GLES3.functional.texture.wrap.astc_5x"
#define VkglTestCase_023447_2 "4_srgb.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023447, VkglTestCase_023447_1, VkglTestCase_023447_2);

#define VkglTestCase_023448_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023448_2 "x4_srgb.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023448, VkglTestCase_023448_1, VkglTestCase_023448_2);

#define VkglTestCase_023449_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023449_2 "x4_srgb.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023449, VkglTestCase_023449_1, VkglTestCase_023449_2);

#define VkglTestCase_023450_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023450_2 "x4_srgb.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023450, VkglTestCase_023450_1, VkglTestCase_023450_2);

#define VkglTestCase_023451_1 "dEQP-GLES3.functional.texture.wrap.astc_5x"
#define VkglTestCase_023451_2 "4_srgb.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023451, VkglTestCase_023451_1, VkglTestCase_023451_2);

#define VkglTestCase_023452_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023452_2 "x4_srgb.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023452, VkglTestCase_023452_1, VkglTestCase_023452_2);

#define VkglTestCase_023453_1 "dEQP-GLES3.functional.texture.wrap.astc_5x"
#define VkglTestCase_023453_2 "4_srgb.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023453, VkglTestCase_023453_1, VkglTestCase_023453_2);

#define VkglTestCase_023454_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023454_2 "x4_srgb.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023454, VkglTestCase_023454_1, VkglTestCase_023454_2);
