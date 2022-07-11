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

#define VkglTestCase_022699_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022699_2 ".etc2_srgb8.clamp_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022699, VkglTestCase_022699_1, VkglTestCase_022699_2);

#define VkglTestCase_022700_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022700_2 ".etc2_srgb8.clamp_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022700, VkglTestCase_022700_1, VkglTestCase_022700_2);

#define VkglTestCase_022701_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022701_2 "etc2_srgb8.clamp_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022701, VkglTestCase_022701_1, VkglTestCase_022701_2);

#define VkglTestCase_022702_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022702_2 ".etc2_srgb8.clamp_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022702, VkglTestCase_022702_1, VkglTestCase_022702_2);

#define VkglTestCase_022703_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022703_2 "etc2_srgb8.clamp_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022703, VkglTestCase_022703_1, VkglTestCase_022703_2);

#define VkglTestCase_022704_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022704_2 ".etc2_srgb8.clamp_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022704, VkglTestCase_022704_1, VkglTestCase_022704_2);

#define VkglTestCase_022705_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022705_2 "etc2_srgb8.repeat_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022705, VkglTestCase_022705_1, VkglTestCase_022705_2);

#define VkglTestCase_022706_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022706_2 ".etc2_srgb8.repeat_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022706, VkglTestCase_022706_1, VkglTestCase_022706_2);

#define VkglTestCase_022707_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022707_2 "etc2_srgb8.repeat_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022707, VkglTestCase_022707_1, VkglTestCase_022707_2);

#define VkglTestCase_022708_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022708_2 "etc2_srgb8.repeat_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022708, VkglTestCase_022708_1, VkglTestCase_022708_2);

#define VkglTestCase_022709_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022709_2 "etc2_srgb8.repeat_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022709, VkglTestCase_022709_1, VkglTestCase_022709_2);

#define VkglTestCase_022710_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022710_2 "etc2_srgb8.repeat_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022710, VkglTestCase_022710_1, VkglTestCase_022710_2);

#define VkglTestCase_022711_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022711_2 "etc2_srgb8.mirror_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022711, VkglTestCase_022711_1, VkglTestCase_022711_2);

#define VkglTestCase_022712_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022712_2 ".etc2_srgb8.mirror_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022712, VkglTestCase_022712_1, VkglTestCase_022712_2);

#define VkglTestCase_022713_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022713_2 "etc2_srgb8.mirror_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022713, VkglTestCase_022713_1, VkglTestCase_022713_2);

#define VkglTestCase_022714_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022714_2 "etc2_srgb8.mirror_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022714, VkglTestCase_022714_1, VkglTestCase_022714_2);

#define VkglTestCase_022715_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022715_2 "etc2_srgb8.mirror_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022715, VkglTestCase_022715_1, VkglTestCase_022715_2);

#define VkglTestCase_022716_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022716_2 "etc2_srgb8.mirror_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022716, VkglTestCase_022716_1, VkglTestCase_022716_2);

#define VkglTestCase_022717_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022717_2 "etc2_srgb8.clamp_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022717, VkglTestCase_022717_1, VkglTestCase_022717_2);

#define VkglTestCase_022718_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022718_2 ".etc2_srgb8.clamp_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022718, VkglTestCase_022718_1, VkglTestCase_022718_2);

#define VkglTestCase_022719_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022719_2 "etc2_srgb8.clamp_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022719, VkglTestCase_022719_1, VkglTestCase_022719_2);

#define VkglTestCase_022720_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022720_2 "etc2_srgb8.clamp_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022720, VkglTestCase_022720_1, VkglTestCase_022720_2);

#define VkglTestCase_022721_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022721_2 "etc2_srgb8.clamp_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022721, VkglTestCase_022721_1, VkglTestCase_022721_2);

#define VkglTestCase_022722_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022722_2 "etc2_srgb8.clamp_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022722, VkglTestCase_022722_1, VkglTestCase_022722_2);

#define VkglTestCase_022723_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022723_2 "etc2_srgb8.repeat_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022723, VkglTestCase_022723_1, VkglTestCase_022723_2);

#define VkglTestCase_022724_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022724_2 "etc2_srgb8.repeat_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022724, VkglTestCase_022724_1, VkglTestCase_022724_2);

#define VkglTestCase_022725_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022725_2 "tc2_srgb8.repeat_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022725, VkglTestCase_022725_1, VkglTestCase_022725_2);

#define VkglTestCase_022726_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022726_2 "etc2_srgb8.repeat_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022726, VkglTestCase_022726_1, VkglTestCase_022726_2);

#define VkglTestCase_022727_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022727_2 "tc2_srgb8.repeat_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022727, VkglTestCase_022727_1, VkglTestCase_022727_2);

#define VkglTestCase_022728_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022728_2 "etc2_srgb8.repeat_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022728, VkglTestCase_022728_1, VkglTestCase_022728_2);

#define VkglTestCase_022729_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022729_2 "etc2_srgb8.mirror_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022729, VkglTestCase_022729_1, VkglTestCase_022729_2);

#define VkglTestCase_022730_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022730_2 "etc2_srgb8.mirror_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022730, VkglTestCase_022730_1, VkglTestCase_022730_2);

#define VkglTestCase_022731_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022731_2 "tc2_srgb8.mirror_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022731, VkglTestCase_022731_1, VkglTestCase_022731_2);

#define VkglTestCase_022732_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022732_2 "etc2_srgb8.mirror_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022732, VkglTestCase_022732_1, VkglTestCase_022732_2);

#define VkglTestCase_022733_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022733_2 "tc2_srgb8.mirror_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022733, VkglTestCase_022733_1, VkglTestCase_022733_2);

#define VkglTestCase_022734_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022734_2 "etc2_srgb8.mirror_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022734, VkglTestCase_022734_1, VkglTestCase_022734_2);
