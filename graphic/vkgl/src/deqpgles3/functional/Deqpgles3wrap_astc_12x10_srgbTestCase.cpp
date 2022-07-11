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

#define VkglTestCase_023815_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023815_2 "12x10_srgb.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023815, VkglTestCase_023815_1, VkglTestCase_023815_2);

#define VkglTestCase_023816_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023816_2 "_12x10_srgb.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023816, VkglTestCase_023816_1, VkglTestCase_023816_2);

#define VkglTestCase_023817_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023817_2 "12x10_srgb.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023817, VkglTestCase_023817_1, VkglTestCase_023817_2);

#define VkglTestCase_023818_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023818_2 "12x10_srgb.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023818, VkglTestCase_023818_1, VkglTestCase_023818_2);

#define VkglTestCase_023819_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023819_2 "12x10_srgb.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023819, VkglTestCase_023819_1, VkglTestCase_023819_2);

#define VkglTestCase_023820_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023820_2 "12x10_srgb.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023820, VkglTestCase_023820_1, VkglTestCase_023820_2);

#define VkglTestCase_023821_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023821_2 "12x10_srgb.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023821, VkglTestCase_023821_1, VkglTestCase_023821_2);

#define VkglTestCase_023822_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023822_2 "12x10_srgb.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023822, VkglTestCase_023822_1, VkglTestCase_023822_2);

#define VkglTestCase_023823_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023823_2 "2x10_srgb.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023823, VkglTestCase_023823_1, VkglTestCase_023823_2);

#define VkglTestCase_023824_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023824_2 "12x10_srgb.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023824, VkglTestCase_023824_1, VkglTestCase_023824_2);

#define VkglTestCase_023825_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023825_2 "2x10_srgb.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023825, VkglTestCase_023825_1, VkglTestCase_023825_2);

#define VkglTestCase_023826_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023826_2 "12x10_srgb.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023826, VkglTestCase_023826_1, VkglTestCase_023826_2);

#define VkglTestCase_023827_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023827_2 "12x10_srgb.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023827, VkglTestCase_023827_1, VkglTestCase_023827_2);

#define VkglTestCase_023828_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023828_2 "12x10_srgb.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023828, VkglTestCase_023828_1, VkglTestCase_023828_2);

#define VkglTestCase_023829_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023829_2 "2x10_srgb.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023829, VkglTestCase_023829_1, VkglTestCase_023829_2);

#define VkglTestCase_023830_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023830_2 "12x10_srgb.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023830, VkglTestCase_023830_1, VkglTestCase_023830_2);

#define VkglTestCase_023831_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023831_2 "2x10_srgb.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023831, VkglTestCase_023831_1, VkglTestCase_023831_2);

#define VkglTestCase_023832_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023832_2 "12x10_srgb.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023832, VkglTestCase_023832_1, VkglTestCase_023832_2);

#define VkglTestCase_023833_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023833_2 "x10_srgb.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023833, VkglTestCase_023833_1, VkglTestCase_023833_2);

#define VkglTestCase_023834_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023834_2 "2x10_srgb.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023834, VkglTestCase_023834_1, VkglTestCase_023834_2);

#define VkglTestCase_023835_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023835_2 "x10_srgb.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023835, VkglTestCase_023835_1, VkglTestCase_023835_2);

#define VkglTestCase_023836_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023836_2 "x10_srgb.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023836, VkglTestCase_023836_1, VkglTestCase_023836_2);

#define VkglTestCase_023837_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023837_2 "x10_srgb.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023837, VkglTestCase_023837_1, VkglTestCase_023837_2);

#define VkglTestCase_023838_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023838_2 "x10_srgb.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023838, VkglTestCase_023838_1, VkglTestCase_023838_2);

#define VkglTestCase_023839_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023839_2 "x10_srgb.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023839, VkglTestCase_023839_1, VkglTestCase_023839_2);

#define VkglTestCase_023840_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023840_2 "x10_srgb.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023840, VkglTestCase_023840_1, VkglTestCase_023840_2);

#define VkglTestCase_023841_1 "dEQP-GLES3.functional.texture.wrap.astc_12x"
#define VkglTestCase_023841_2 "10_srgb.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023841, VkglTestCase_023841_1, VkglTestCase_023841_2);

#define VkglTestCase_023842_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023842_2 "x10_srgb.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023842, VkglTestCase_023842_1, VkglTestCase_023842_2);

#define VkglTestCase_023843_1 "dEQP-GLES3.functional.texture.wrap.astc_12x"
#define VkglTestCase_023843_2 "10_srgb.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023843, VkglTestCase_023843_1, VkglTestCase_023843_2);

#define VkglTestCase_023844_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023844_2 "x10_srgb.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023844, VkglTestCase_023844_1, VkglTestCase_023844_2);

#define VkglTestCase_023845_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023845_2 "x10_srgb.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023845, VkglTestCase_023845_1, VkglTestCase_023845_2);

#define VkglTestCase_023846_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023846_2 "x10_srgb.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023846, VkglTestCase_023846_1, VkglTestCase_023846_2);

#define VkglTestCase_023847_1 "dEQP-GLES3.functional.texture.wrap.astc_12x"
#define VkglTestCase_023847_2 "10_srgb.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023847, VkglTestCase_023847_1, VkglTestCase_023847_2);

#define VkglTestCase_023848_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023848_2 "x10_srgb.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023848, VkglTestCase_023848_1, VkglTestCase_023848_2);

#define VkglTestCase_023849_1 "dEQP-GLES3.functional.texture.wrap.astc_12x"
#define VkglTestCase_023849_2 "10_srgb.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023849, VkglTestCase_023849_1, VkglTestCase_023849_2);

#define VkglTestCase_023850_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023850_2 "x10_srgb.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023850, VkglTestCase_023850_1, VkglTestCase_023850_2);
