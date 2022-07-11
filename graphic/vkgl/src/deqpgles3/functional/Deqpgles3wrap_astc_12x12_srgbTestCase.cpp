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

#define VkglTestCase_023851_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023851_2 "12x12_srgb.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023851, VkglTestCase_023851_1, VkglTestCase_023851_2);

#define VkglTestCase_023852_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023852_2 "_12x12_srgb.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023852, VkglTestCase_023852_1, VkglTestCase_023852_2);

#define VkglTestCase_023853_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023853_2 "12x12_srgb.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023853, VkglTestCase_023853_1, VkglTestCase_023853_2);

#define VkglTestCase_023854_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023854_2 "12x12_srgb.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023854, VkglTestCase_023854_1, VkglTestCase_023854_2);

#define VkglTestCase_023855_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023855_2 "12x12_srgb.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023855, VkglTestCase_023855_1, VkglTestCase_023855_2);

#define VkglTestCase_023856_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023856_2 "12x12_srgb.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023856, VkglTestCase_023856_1, VkglTestCase_023856_2);

#define VkglTestCase_023857_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023857_2 "12x12_srgb.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023857, VkglTestCase_023857_1, VkglTestCase_023857_2);

#define VkglTestCase_023858_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023858_2 "12x12_srgb.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023858, VkglTestCase_023858_1, VkglTestCase_023858_2);

#define VkglTestCase_023859_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023859_2 "2x12_srgb.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023859, VkglTestCase_023859_1, VkglTestCase_023859_2);

#define VkglTestCase_023860_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023860_2 "12x12_srgb.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023860, VkglTestCase_023860_1, VkglTestCase_023860_2);

#define VkglTestCase_023861_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023861_2 "2x12_srgb.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023861, VkglTestCase_023861_1, VkglTestCase_023861_2);

#define VkglTestCase_023862_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023862_2 "12x12_srgb.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023862, VkglTestCase_023862_1, VkglTestCase_023862_2);

#define VkglTestCase_023863_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023863_2 "12x12_srgb.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023863, VkglTestCase_023863_1, VkglTestCase_023863_2);

#define VkglTestCase_023864_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023864_2 "12x12_srgb.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023864, VkglTestCase_023864_1, VkglTestCase_023864_2);

#define VkglTestCase_023865_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023865_2 "2x12_srgb.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023865, VkglTestCase_023865_1, VkglTestCase_023865_2);

#define VkglTestCase_023866_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023866_2 "12x12_srgb.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023866, VkglTestCase_023866_1, VkglTestCase_023866_2);

#define VkglTestCase_023867_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023867_2 "2x12_srgb.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023867, VkglTestCase_023867_1, VkglTestCase_023867_2);

#define VkglTestCase_023868_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023868_2 "12x12_srgb.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023868, VkglTestCase_023868_1, VkglTestCase_023868_2);

#define VkglTestCase_023869_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023869_2 "x12_srgb.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023869, VkglTestCase_023869_1, VkglTestCase_023869_2);

#define VkglTestCase_023870_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023870_2 "2x12_srgb.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023870, VkglTestCase_023870_1, VkglTestCase_023870_2);

#define VkglTestCase_023871_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023871_2 "x12_srgb.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023871, VkglTestCase_023871_1, VkglTestCase_023871_2);

#define VkglTestCase_023872_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023872_2 "x12_srgb.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023872, VkglTestCase_023872_1, VkglTestCase_023872_2);

#define VkglTestCase_023873_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023873_2 "x12_srgb.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023873, VkglTestCase_023873_1, VkglTestCase_023873_2);

#define VkglTestCase_023874_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023874_2 "x12_srgb.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023874, VkglTestCase_023874_1, VkglTestCase_023874_2);

#define VkglTestCase_023875_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023875_2 "x12_srgb.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023875, VkglTestCase_023875_1, VkglTestCase_023875_2);

#define VkglTestCase_023876_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023876_2 "x12_srgb.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023876, VkglTestCase_023876_1, VkglTestCase_023876_2);

#define VkglTestCase_023877_1 "dEQP-GLES3.functional.texture.wrap.astc_12x"
#define VkglTestCase_023877_2 "12_srgb.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023877, VkglTestCase_023877_1, VkglTestCase_023877_2);

#define VkglTestCase_023878_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023878_2 "x12_srgb.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023878, VkglTestCase_023878_1, VkglTestCase_023878_2);

#define VkglTestCase_023879_1 "dEQP-GLES3.functional.texture.wrap.astc_12x"
#define VkglTestCase_023879_2 "12_srgb.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023879, VkglTestCase_023879_1, VkglTestCase_023879_2);

#define VkglTestCase_023880_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023880_2 "x12_srgb.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023880, VkglTestCase_023880_1, VkglTestCase_023880_2);

#define VkglTestCase_023881_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023881_2 "x12_srgb.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023881, VkglTestCase_023881_1, VkglTestCase_023881_2);

#define VkglTestCase_023882_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023882_2 "x12_srgb.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023882, VkglTestCase_023882_1, VkglTestCase_023882_2);

#define VkglTestCase_023883_1 "dEQP-GLES3.functional.texture.wrap.astc_12x"
#define VkglTestCase_023883_2 "12_srgb.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023883, VkglTestCase_023883_1, VkglTestCase_023883_2);

#define VkglTestCase_023884_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023884_2 "x12_srgb.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023884, VkglTestCase_023884_1, VkglTestCase_023884_2);

#define VkglTestCase_023885_1 "dEQP-GLES3.functional.texture.wrap.astc_12x"
#define VkglTestCase_023885_2 "12_srgb.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023885, VkglTestCase_023885_1, VkglTestCase_023885_2);

#define VkglTestCase_023886_1 "dEQP-GLES3.functional.texture.wrap.astc_12"
#define VkglTestCase_023886_2 "x12_srgb.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023886, VkglTestCase_023886_1, VkglTestCase_023886_2);
