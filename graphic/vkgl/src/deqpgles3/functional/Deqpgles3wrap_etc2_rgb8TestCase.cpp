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

#define VkglTestCase_022663_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022663_2 ".etc2_rgb8.clamp_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022663, VkglTestCase_022663_1, VkglTestCase_022663_2);

#define VkglTestCase_022664_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022664_2 "p.etc2_rgb8.clamp_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022664, VkglTestCase_022664_1, VkglTestCase_022664_2);

#define VkglTestCase_022665_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022665_2 ".etc2_rgb8.clamp_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022665, VkglTestCase_022665_1, VkglTestCase_022665_2);

#define VkglTestCase_022666_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022666_2 ".etc2_rgb8.clamp_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022666, VkglTestCase_022666_1, VkglTestCase_022666_2);

#define VkglTestCase_022667_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022667_2 ".etc2_rgb8.clamp_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022667, VkglTestCase_022667_1, VkglTestCase_022667_2);

#define VkglTestCase_022668_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022668_2 ".etc2_rgb8.clamp_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022668, VkglTestCase_022668_1, VkglTestCase_022668_2);

#define VkglTestCase_022669_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022669_2 ".etc2_rgb8.repeat_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022669, VkglTestCase_022669_1, VkglTestCase_022669_2);

#define VkglTestCase_022670_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022670_2 ".etc2_rgb8.repeat_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022670, VkglTestCase_022670_1, VkglTestCase_022670_2);

#define VkglTestCase_022671_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022671_2 "etc2_rgb8.repeat_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022671, VkglTestCase_022671_1, VkglTestCase_022671_2);

#define VkglTestCase_022672_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022672_2 ".etc2_rgb8.repeat_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022672, VkglTestCase_022672_1, VkglTestCase_022672_2);

#define VkglTestCase_022673_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022673_2 "etc2_rgb8.repeat_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022673, VkglTestCase_022673_1, VkglTestCase_022673_2);

#define VkglTestCase_022674_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022674_2 ".etc2_rgb8.repeat_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022674, VkglTestCase_022674_1, VkglTestCase_022674_2);

#define VkglTestCase_022675_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022675_2 ".etc2_rgb8.mirror_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022675, VkglTestCase_022675_1, VkglTestCase_022675_2);

#define VkglTestCase_022676_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022676_2 ".etc2_rgb8.mirror_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022676, VkglTestCase_022676_1, VkglTestCase_022676_2);

#define VkglTestCase_022677_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022677_2 "etc2_rgb8.mirror_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022677, VkglTestCase_022677_1, VkglTestCase_022677_2);

#define VkglTestCase_022678_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022678_2 ".etc2_rgb8.mirror_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022678, VkglTestCase_022678_1, VkglTestCase_022678_2);

#define VkglTestCase_022679_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022679_2 "etc2_rgb8.mirror_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022679, VkglTestCase_022679_1, VkglTestCase_022679_2);

#define VkglTestCase_022680_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022680_2 ".etc2_rgb8.mirror_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022680, VkglTestCase_022680_1, VkglTestCase_022680_2);

#define VkglTestCase_022681_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022681_2 ".etc2_rgb8.clamp_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022681, VkglTestCase_022681_1, VkglTestCase_022681_2);

#define VkglTestCase_022682_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022682_2 ".etc2_rgb8.clamp_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022682, VkglTestCase_022682_1, VkglTestCase_022682_2);

#define VkglTestCase_022683_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022683_2 "etc2_rgb8.clamp_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022683, VkglTestCase_022683_1, VkglTestCase_022683_2);

#define VkglTestCase_022684_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022684_2 ".etc2_rgb8.clamp_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022684, VkglTestCase_022684_1, VkglTestCase_022684_2);

#define VkglTestCase_022685_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022685_2 "etc2_rgb8.clamp_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022685, VkglTestCase_022685_1, VkglTestCase_022685_2);

#define VkglTestCase_022686_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022686_2 ".etc2_rgb8.clamp_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022686, VkglTestCase_022686_1, VkglTestCase_022686_2);

#define VkglTestCase_022687_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022687_2 "etc2_rgb8.repeat_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022687, VkglTestCase_022687_1, VkglTestCase_022687_2);

#define VkglTestCase_022688_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022688_2 ".etc2_rgb8.repeat_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022688, VkglTestCase_022688_1, VkglTestCase_022688_2);

#define VkglTestCase_022689_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022689_2 "etc2_rgb8.repeat_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022689, VkglTestCase_022689_1, VkglTestCase_022689_2);

#define VkglTestCase_022690_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022690_2 "etc2_rgb8.repeat_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022690, VkglTestCase_022690_1, VkglTestCase_022690_2);

#define VkglTestCase_022691_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022691_2 "etc2_rgb8.repeat_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022691, VkglTestCase_022691_1, VkglTestCase_022691_2);

#define VkglTestCase_022692_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022692_2 "etc2_rgb8.repeat_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022692, VkglTestCase_022692_1, VkglTestCase_022692_2);

#define VkglTestCase_022693_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022693_2 "etc2_rgb8.mirror_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022693, VkglTestCase_022693_1, VkglTestCase_022693_2);

#define VkglTestCase_022694_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022694_2 ".etc2_rgb8.mirror_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022694, VkglTestCase_022694_1, VkglTestCase_022694_2);

#define VkglTestCase_022695_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022695_2 "etc2_rgb8.mirror_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022695, VkglTestCase_022695_1, VkglTestCase_022695_2);

#define VkglTestCase_022696_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022696_2 "etc2_rgb8.mirror_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022696, VkglTestCase_022696_1, VkglTestCase_022696_2);

#define VkglTestCase_022697_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022697_2 "etc2_rgb8.mirror_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022697, VkglTestCase_022697_1, VkglTestCase_022697_2);

#define VkglTestCase_022698_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022698_2 "etc2_rgb8.mirror_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022698, VkglTestCase_022698_1, VkglTestCase_022698_2);
