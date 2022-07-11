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

#define VkglTestCase_022843_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022843_2 "eac_srgb8_alpha8.clamp_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022843, VkglTestCase_022843_1, VkglTestCase_022843_2);

#define VkglTestCase_022844_1 "dEQP-GLES3.functional.texture.wrap.etc2"
#define VkglTestCase_022844_2 "_eac_srgb8_alpha8.clamp_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022844, VkglTestCase_022844_1, VkglTestCase_022844_2);

#define VkglTestCase_022845_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022845_2 "eac_srgb8_alpha8.clamp_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022845, VkglTestCase_022845_1, VkglTestCase_022845_2);

#define VkglTestCase_022846_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022846_2 "eac_srgb8_alpha8.clamp_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022846, VkglTestCase_022846_1, VkglTestCase_022846_2);

#define VkglTestCase_022847_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022847_2 "eac_srgb8_alpha8.clamp_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022847, VkglTestCase_022847_1, VkglTestCase_022847_2);

#define VkglTestCase_022848_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022848_2 "eac_srgb8_alpha8.clamp_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022848, VkglTestCase_022848_1, VkglTestCase_022848_2);

#define VkglTestCase_022849_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022849_2 "eac_srgb8_alpha8.repeat_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022849, VkglTestCase_022849_1, VkglTestCase_022849_2);

#define VkglTestCase_022850_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022850_2 "eac_srgb8_alpha8.repeat_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022850, VkglTestCase_022850_1, VkglTestCase_022850_2);

#define VkglTestCase_022851_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022851_2 "ac_srgb8_alpha8.repeat_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022851, VkglTestCase_022851_1, VkglTestCase_022851_2);

#define VkglTestCase_022852_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022852_2 "eac_srgb8_alpha8.repeat_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022852, VkglTestCase_022852_1, VkglTestCase_022852_2);

#define VkglTestCase_022853_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022853_2 "ac_srgb8_alpha8.repeat_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022853, VkglTestCase_022853_1, VkglTestCase_022853_2);

#define VkglTestCase_022854_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022854_2 "eac_srgb8_alpha8.repeat_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022854, VkglTestCase_022854_1, VkglTestCase_022854_2);

#define VkglTestCase_022855_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022855_2 "eac_srgb8_alpha8.mirror_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022855, VkglTestCase_022855_1, VkglTestCase_022855_2);

#define VkglTestCase_022856_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022856_2 "eac_srgb8_alpha8.mirror_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022856, VkglTestCase_022856_1, VkglTestCase_022856_2);

#define VkglTestCase_022857_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022857_2 "ac_srgb8_alpha8.mirror_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022857, VkglTestCase_022857_1, VkglTestCase_022857_2);

#define VkglTestCase_022858_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022858_2 "eac_srgb8_alpha8.mirror_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022858, VkglTestCase_022858_1, VkglTestCase_022858_2);

#define VkglTestCase_022859_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022859_2 "ac_srgb8_alpha8.mirror_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022859, VkglTestCase_022859_1, VkglTestCase_022859_2);

#define VkglTestCase_022860_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022860_2 "eac_srgb8_alpha8.mirror_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022860, VkglTestCase_022860_1, VkglTestCase_022860_2);

#define VkglTestCase_022861_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022861_2 "eac_srgb8_alpha8.clamp_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022861, VkglTestCase_022861_1, VkglTestCase_022861_2);

#define VkglTestCase_022862_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022862_2 "eac_srgb8_alpha8.clamp_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022862, VkglTestCase_022862_1, VkglTestCase_022862_2);

#define VkglTestCase_022863_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022863_2 "ac_srgb8_alpha8.clamp_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022863, VkglTestCase_022863_1, VkglTestCase_022863_2);

#define VkglTestCase_022864_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022864_2 "eac_srgb8_alpha8.clamp_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022864, VkglTestCase_022864_1, VkglTestCase_022864_2);

#define VkglTestCase_022865_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022865_2 "ac_srgb8_alpha8.clamp_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022865, VkglTestCase_022865_1, VkglTestCase_022865_2);

#define VkglTestCase_022866_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022866_2 "eac_srgb8_alpha8.clamp_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022866, VkglTestCase_022866_1, VkglTestCase_022866_2);

#define VkglTestCase_022867_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022867_2 "ac_srgb8_alpha8.repeat_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022867, VkglTestCase_022867_1, VkglTestCase_022867_2);

#define VkglTestCase_022868_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022868_2 "eac_srgb8_alpha8.repeat_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022868, VkglTestCase_022868_1, VkglTestCase_022868_2);

#define VkglTestCase_022869_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022869_2 "ac_srgb8_alpha8.repeat_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022869, VkglTestCase_022869_1, VkglTestCase_022869_2);

#define VkglTestCase_022870_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022870_2 "ac_srgb8_alpha8.repeat_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022870, VkglTestCase_022870_1, VkglTestCase_022870_2);

#define VkglTestCase_022871_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022871_2 "ac_srgb8_alpha8.repeat_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022871, VkglTestCase_022871_1, VkglTestCase_022871_2);

#define VkglTestCase_022872_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022872_2 "ac_srgb8_alpha8.repeat_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022872, VkglTestCase_022872_1, VkglTestCase_022872_2);

#define VkglTestCase_022873_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022873_2 "ac_srgb8_alpha8.mirror_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022873, VkglTestCase_022873_1, VkglTestCase_022873_2);

#define VkglTestCase_022874_1 "dEQP-GLES3.functional.texture.wrap.etc2_"
#define VkglTestCase_022874_2 "eac_srgb8_alpha8.mirror_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022874, VkglTestCase_022874_1, VkglTestCase_022874_2);

#define VkglTestCase_022875_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022875_2 "ac_srgb8_alpha8.mirror_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022875, VkglTestCase_022875_1, VkglTestCase_022875_2);

#define VkglTestCase_022876_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022876_2 "ac_srgb8_alpha8.mirror_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022876, VkglTestCase_022876_1, VkglTestCase_022876_2);

#define VkglTestCase_022877_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022877_2 "ac_srgb8_alpha8.mirror_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022877, VkglTestCase_022877_1, VkglTestCase_022877_2);

#define VkglTestCase_022878_1 "dEQP-GLES3.functional.texture.wrap.etc2_e"
#define VkglTestCase_022878_2 "ac_srgb8_alpha8.mirror_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022878, VkglTestCase_022878_1, VkglTestCase_022878_2);
