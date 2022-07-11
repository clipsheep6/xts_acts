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
#include "../ActsDeqpgles30023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022879_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022879_2 "stc_4x4.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022879, VkglTestCase_022879_1, VkglTestCase_022879_2);

#define VkglTestCase_022880_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022880_2 "stc_4x4.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022880, VkglTestCase_022880_1, VkglTestCase_022880_2);

#define VkglTestCase_022881_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022881_2 "tc_4x4.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022881, VkglTestCase_022881_1, VkglTestCase_022881_2);

#define VkglTestCase_022882_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022882_2 "stc_4x4.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022882, VkglTestCase_022882_1, VkglTestCase_022882_2);

#define VkglTestCase_022883_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022883_2 "tc_4x4.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022883, VkglTestCase_022883_1, VkglTestCase_022883_2);

#define VkglTestCase_022884_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022884_2 "stc_4x4.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022884, VkglTestCase_022884_1, VkglTestCase_022884_2);

#define VkglTestCase_022885_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022885_2 "tc_4x4.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022885, VkglTestCase_022885_1, VkglTestCase_022885_2);

#define VkglTestCase_022886_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022886_2 "stc_4x4.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022886, VkglTestCase_022886_1, VkglTestCase_022886_2);

#define VkglTestCase_022887_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022887_2 "tc_4x4.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022887, VkglTestCase_022887_1, VkglTestCase_022887_2);

#define VkglTestCase_022888_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022888_2 "tc_4x4.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022888, VkglTestCase_022888_1, VkglTestCase_022888_2);

#define VkglTestCase_022889_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022889_2 "tc_4x4.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022889, VkglTestCase_022889_1, VkglTestCase_022889_2);

#define VkglTestCase_022890_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022890_2 "tc_4x4.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022890, VkglTestCase_022890_1, VkglTestCase_022890_2);

#define VkglTestCase_022891_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022891_2 "tc_4x4.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022891, VkglTestCase_022891_1, VkglTestCase_022891_2);

#define VkglTestCase_022892_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022892_2 "stc_4x4.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022892, VkglTestCase_022892_1, VkglTestCase_022892_2);

#define VkglTestCase_022893_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022893_2 "tc_4x4.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022893, VkglTestCase_022893_1, VkglTestCase_022893_2);

#define VkglTestCase_022894_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022894_2 "tc_4x4.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022894, VkglTestCase_022894_1, VkglTestCase_022894_2);

#define VkglTestCase_022895_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022895_2 "tc_4x4.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022895, VkglTestCase_022895_1, VkglTestCase_022895_2);

#define VkglTestCase_022896_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022896_2 "tc_4x4.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022896, VkglTestCase_022896_1, VkglTestCase_022896_2);

#define VkglTestCase_022897_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022897_2 "c_4x4.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022897, VkglTestCase_022897_1, VkglTestCase_022897_2);

#define VkglTestCase_022898_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022898_2 "c_4x4.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022898, VkglTestCase_022898_1, VkglTestCase_022898_2);

#define VkglTestCase_022899_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022899_2 "_4x4.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022899, VkglTestCase_022899_1, VkglTestCase_022899_2);

#define VkglTestCase_022900_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022900_2 "c_4x4.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022900, VkglTestCase_022900_1, VkglTestCase_022900_2);

#define VkglTestCase_022901_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022901_2 "_4x4.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022901, VkglTestCase_022901_1, VkglTestCase_022901_2);

#define VkglTestCase_022902_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022902_2 "c_4x4.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022902, VkglTestCase_022902_1, VkglTestCase_022902_2);

#define VkglTestCase_022903_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022903_2 "_4x4.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022903, VkglTestCase_022903_1, VkglTestCase_022903_2);

#define VkglTestCase_022904_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022904_2 "c_4x4.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022904, VkglTestCase_022904_1, VkglTestCase_022904_2);

#define VkglTestCase_022905_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022905_2 "_4x4.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022905, VkglTestCase_022905_1, VkglTestCase_022905_2);

#define VkglTestCase_022906_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022906_2 "_4x4.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022906, VkglTestCase_022906_1, VkglTestCase_022906_2);

#define VkglTestCase_022907_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022907_2 "_4x4.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022907, VkglTestCase_022907_1, VkglTestCase_022907_2);

#define VkglTestCase_022908_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022908_2 "_4x4.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022908, VkglTestCase_022908_1, VkglTestCase_022908_2);

#define VkglTestCase_022909_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022909_2 "_4x4.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022909, VkglTestCase_022909_1, VkglTestCase_022909_2);

#define VkglTestCase_022910_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022910_2 "c_4x4.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022910, VkglTestCase_022910_1, VkglTestCase_022910_2);

#define VkglTestCase_022911_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022911_2 "_4x4.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022911, VkglTestCase_022911_1, VkglTestCase_022911_2);

#define VkglTestCase_022912_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022912_2 "_4x4.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022912, VkglTestCase_022912_1, VkglTestCase_022912_2);

#define VkglTestCase_022913_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022913_2 "_4x4.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022913, VkglTestCase_022913_1, VkglTestCase_022913_2);

#define VkglTestCase_022914_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022914_2 "_4x4.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022914, VkglTestCase_022914_1, VkglTestCase_022914_2);
