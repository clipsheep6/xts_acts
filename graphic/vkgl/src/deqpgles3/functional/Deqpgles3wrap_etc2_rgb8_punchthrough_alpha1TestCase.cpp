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

#define VkglTestCase_022735_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022735_2 "_punchthrough_alpha1.clamp_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022735, VkglTestCase_022735_1, VkglTestCase_022735_2);

#define VkglTestCase_022736_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb"
#define VkglTestCase_022736_2 "8_punchthrough_alpha1.clamp_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022736, VkglTestCase_022736_1, VkglTestCase_022736_2);

#define VkglTestCase_022737_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022737_2 "_punchthrough_alpha1.clamp_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022737, VkglTestCase_022737_1, VkglTestCase_022737_2);

#define VkglTestCase_022738_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022738_2 "_punchthrough_alpha1.clamp_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022738, VkglTestCase_022738_1, VkglTestCase_022738_2);

#define VkglTestCase_022739_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022739_2 "_punchthrough_alpha1.clamp_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022739, VkglTestCase_022739_1, VkglTestCase_022739_2);

#define VkglTestCase_022740_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022740_2 "_punchthrough_alpha1.clamp_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022740, VkglTestCase_022740_1, VkglTestCase_022740_2);

#define VkglTestCase_022741_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022741_2 "_punchthrough_alpha1.repeat_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022741, VkglTestCase_022741_1, VkglTestCase_022741_2);

#define VkglTestCase_022742_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022742_2 "_punchthrough_alpha1.repeat_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022742, VkglTestCase_022742_1, VkglTestCase_022742_2);

#define VkglTestCase_022743_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022743_2 "punchthrough_alpha1.repeat_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022743, VkglTestCase_022743_1, VkglTestCase_022743_2);

#define VkglTestCase_022744_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022744_2 "_punchthrough_alpha1.repeat_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022744, VkglTestCase_022744_1, VkglTestCase_022744_2);

#define VkglTestCase_022745_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022745_2 "punchthrough_alpha1.repeat_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022745, VkglTestCase_022745_1, VkglTestCase_022745_2);

#define VkglTestCase_022746_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022746_2 "_punchthrough_alpha1.repeat_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022746, VkglTestCase_022746_1, VkglTestCase_022746_2);

#define VkglTestCase_022747_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022747_2 "_punchthrough_alpha1.mirror_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022747, VkglTestCase_022747_1, VkglTestCase_022747_2);

#define VkglTestCase_022748_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022748_2 "_punchthrough_alpha1.mirror_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022748, VkglTestCase_022748_1, VkglTestCase_022748_2);

#define VkglTestCase_022749_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022749_2 "punchthrough_alpha1.mirror_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022749, VkglTestCase_022749_1, VkglTestCase_022749_2);

#define VkglTestCase_022750_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022750_2 "_punchthrough_alpha1.mirror_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022750, VkglTestCase_022750_1, VkglTestCase_022750_2);

#define VkglTestCase_022751_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022751_2 "punchthrough_alpha1.mirror_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022751, VkglTestCase_022751_1, VkglTestCase_022751_2);

#define VkglTestCase_022752_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022752_2 "_punchthrough_alpha1.mirror_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022752, VkglTestCase_022752_1, VkglTestCase_022752_2);

#define VkglTestCase_022753_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022753_2 "_punchthrough_alpha1.clamp_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022753, VkglTestCase_022753_1, VkglTestCase_022753_2);

#define VkglTestCase_022754_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022754_2 "_punchthrough_alpha1.clamp_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022754, VkglTestCase_022754_1, VkglTestCase_022754_2);

#define VkglTestCase_022755_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022755_2 "punchthrough_alpha1.clamp_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022755, VkglTestCase_022755_1, VkglTestCase_022755_2);

#define VkglTestCase_022756_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022756_2 "_punchthrough_alpha1.clamp_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022756, VkglTestCase_022756_1, VkglTestCase_022756_2);

#define VkglTestCase_022757_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022757_2 "punchthrough_alpha1.clamp_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022757, VkglTestCase_022757_1, VkglTestCase_022757_2);

#define VkglTestCase_022758_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022758_2 "_punchthrough_alpha1.clamp_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022758, VkglTestCase_022758_1, VkglTestCase_022758_2);

#define VkglTestCase_022759_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022759_2 "punchthrough_alpha1.repeat_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022759, VkglTestCase_022759_1, VkglTestCase_022759_2);

#define VkglTestCase_022760_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022760_2 "_punchthrough_alpha1.repeat_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022760, VkglTestCase_022760_1, VkglTestCase_022760_2);

#define VkglTestCase_022761_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022761_2 "punchthrough_alpha1.repeat_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022761, VkglTestCase_022761_1, VkglTestCase_022761_2);

#define VkglTestCase_022762_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022762_2 "punchthrough_alpha1.repeat_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022762, VkglTestCase_022762_1, VkglTestCase_022762_2);

#define VkglTestCase_022763_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022763_2 "punchthrough_alpha1.repeat_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022763, VkglTestCase_022763_1, VkglTestCase_022763_2);

#define VkglTestCase_022764_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022764_2 "punchthrough_alpha1.repeat_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022764, VkglTestCase_022764_1, VkglTestCase_022764_2);

#define VkglTestCase_022765_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022765_2 "punchthrough_alpha1.mirror_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022765, VkglTestCase_022765_1, VkglTestCase_022765_2);

#define VkglTestCase_022766_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8"
#define VkglTestCase_022766_2 "_punchthrough_alpha1.mirror_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022766, VkglTestCase_022766_1, VkglTestCase_022766_2);

#define VkglTestCase_022767_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022767_2 "punchthrough_alpha1.mirror_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022767, VkglTestCase_022767_1, VkglTestCase_022767_2);

#define VkglTestCase_022768_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022768_2 "punchthrough_alpha1.mirror_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022768, VkglTestCase_022768_1, VkglTestCase_022768_2);

#define VkglTestCase_022769_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022769_2 "punchthrough_alpha1.mirror_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022769, VkglTestCase_022769_1, VkglTestCase_022769_2);

#define VkglTestCase_022770_1 "dEQP-GLES3.functional.texture.wrap.etc2_rgb8_"
#define VkglTestCase_022770_2 "punchthrough_alpha1.mirror_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022770, VkglTestCase_022770_1, VkglTestCase_022770_2);
