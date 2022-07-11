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

#define VkglTestCase_023671_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023671_2 "_10x5_srgb.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023671, VkglTestCase_023671_1, VkglTestCase_023671_2);

#define VkglTestCase_023672_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023672_2 "_10x5_srgb.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023672, VkglTestCase_023672_1, VkglTestCase_023672_2);

#define VkglTestCase_023673_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023673_2 "10x5_srgb.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023673, VkglTestCase_023673_1, VkglTestCase_023673_2);

#define VkglTestCase_023674_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023674_2 "_10x5_srgb.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023674, VkglTestCase_023674_1, VkglTestCase_023674_2);

#define VkglTestCase_023675_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023675_2 "10x5_srgb.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023675, VkglTestCase_023675_1, VkglTestCase_023675_2);

#define VkglTestCase_023676_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023676_2 "_10x5_srgb.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023676, VkglTestCase_023676_1, VkglTestCase_023676_2);

#define VkglTestCase_023677_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023677_2 "10x5_srgb.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023677, VkglTestCase_023677_1, VkglTestCase_023677_2);

#define VkglTestCase_023678_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023678_2 "_10x5_srgb.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023678, VkglTestCase_023678_1, VkglTestCase_023678_2);

#define VkglTestCase_023679_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023679_2 "10x5_srgb.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023679, VkglTestCase_023679_1, VkglTestCase_023679_2);

#define VkglTestCase_023680_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023680_2 "10x5_srgb.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023680, VkglTestCase_023680_1, VkglTestCase_023680_2);

#define VkglTestCase_023681_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023681_2 "10x5_srgb.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023681, VkglTestCase_023681_1, VkglTestCase_023681_2);

#define VkglTestCase_023682_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023682_2 "10x5_srgb.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023682, VkglTestCase_023682_1, VkglTestCase_023682_2);

#define VkglTestCase_023683_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023683_2 "10x5_srgb.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023683, VkglTestCase_023683_1, VkglTestCase_023683_2);

#define VkglTestCase_023684_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023684_2 "_10x5_srgb.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023684, VkglTestCase_023684_1, VkglTestCase_023684_2);

#define VkglTestCase_023685_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023685_2 "10x5_srgb.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023685, VkglTestCase_023685_1, VkglTestCase_023685_2);

#define VkglTestCase_023686_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023686_2 "10x5_srgb.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023686, VkglTestCase_023686_1, VkglTestCase_023686_2);

#define VkglTestCase_023687_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023687_2 "10x5_srgb.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023687, VkglTestCase_023687_1, VkglTestCase_023687_2);

#define VkglTestCase_023688_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023688_2 "10x5_srgb.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023688, VkglTestCase_023688_1, VkglTestCase_023688_2);

#define VkglTestCase_023689_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023689_2 "0x5_srgb.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023689, VkglTestCase_023689_1, VkglTestCase_023689_2);

#define VkglTestCase_023690_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023690_2 "0x5_srgb.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023690, VkglTestCase_023690_1, VkglTestCase_023690_2);

#define VkglTestCase_023691_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023691_2 "x5_srgb.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023691, VkglTestCase_023691_1, VkglTestCase_023691_2);

#define VkglTestCase_023692_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023692_2 "0x5_srgb.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023692, VkglTestCase_023692_1, VkglTestCase_023692_2);

#define VkglTestCase_023693_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023693_2 "x5_srgb.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023693, VkglTestCase_023693_1, VkglTestCase_023693_2);

#define VkglTestCase_023694_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023694_2 "0x5_srgb.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023694, VkglTestCase_023694_1, VkglTestCase_023694_2);

#define VkglTestCase_023695_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023695_2 "x5_srgb.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023695, VkglTestCase_023695_1, VkglTestCase_023695_2);

#define VkglTestCase_023696_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023696_2 "0x5_srgb.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023696, VkglTestCase_023696_1, VkglTestCase_023696_2);

#define VkglTestCase_023697_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023697_2 "x5_srgb.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023697, VkglTestCase_023697_1, VkglTestCase_023697_2);

#define VkglTestCase_023698_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023698_2 "x5_srgb.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023698, VkglTestCase_023698_1, VkglTestCase_023698_2);

#define VkglTestCase_023699_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023699_2 "x5_srgb.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023699, VkglTestCase_023699_1, VkglTestCase_023699_2);

#define VkglTestCase_023700_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023700_2 "x5_srgb.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023700, VkglTestCase_023700_1, VkglTestCase_023700_2);

#define VkglTestCase_023701_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023701_2 "x5_srgb.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023701, VkglTestCase_023701_1, VkglTestCase_023701_2);

#define VkglTestCase_023702_1 "dEQP-GLES3.functional.texture.wrap.astc_1"
#define VkglTestCase_023702_2 "0x5_srgb.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023702, VkglTestCase_023702_1, VkglTestCase_023702_2);

#define VkglTestCase_023703_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023703_2 "x5_srgb.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023703, VkglTestCase_023703_1, VkglTestCase_023703_2);

#define VkglTestCase_023704_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023704_2 "x5_srgb.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023704, VkglTestCase_023704_1, VkglTestCase_023704_2);

#define VkglTestCase_023705_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023705_2 "x5_srgb.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023705, VkglTestCase_023705_1, VkglTestCase_023705_2);

#define VkglTestCase_023706_1 "dEQP-GLES3.functional.texture.wrap.astc_10"
#define VkglTestCase_023706_2 "x5_srgb.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023706, VkglTestCase_023706_1, VkglTestCase_023706_2);
