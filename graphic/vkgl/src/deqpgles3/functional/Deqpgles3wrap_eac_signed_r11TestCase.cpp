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

#define VkglTestCase_022555_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022555_2 "ac_signed_r11.clamp_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022555, VkglTestCase_022555_1, VkglTestCase_022555_2);

#define VkglTestCase_022556_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022556_2 "ac_signed_r11.clamp_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022556, VkglTestCase_022556_1, VkglTestCase_022556_2);

#define VkglTestCase_022557_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022557_2 "c_signed_r11.clamp_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022557, VkglTestCase_022557_1, VkglTestCase_022557_2);

#define VkglTestCase_022558_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022558_2 "ac_signed_r11.clamp_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022558, VkglTestCase_022558_1, VkglTestCase_022558_2);

#define VkglTestCase_022559_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022559_2 "c_signed_r11.clamp_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022559, VkglTestCase_022559_1, VkglTestCase_022559_2);

#define VkglTestCase_022560_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022560_2 "ac_signed_r11.clamp_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022560, VkglTestCase_022560_1, VkglTestCase_022560_2);

#define VkglTestCase_022561_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022561_2 "c_signed_r11.repeat_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022561, VkglTestCase_022561_1, VkglTestCase_022561_2);

#define VkglTestCase_022562_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022562_2 "ac_signed_r11.repeat_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022562, VkglTestCase_022562_1, VkglTestCase_022562_2);

#define VkglTestCase_022563_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022563_2 "c_signed_r11.repeat_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022563, VkglTestCase_022563_1, VkglTestCase_022563_2);

#define VkglTestCase_022564_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022564_2 "c_signed_r11.repeat_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022564, VkglTestCase_022564_1, VkglTestCase_022564_2);

#define VkglTestCase_022565_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022565_2 "c_signed_r11.repeat_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022565, VkglTestCase_022565_1, VkglTestCase_022565_2);

#define VkglTestCase_022566_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022566_2 "c_signed_r11.repeat_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022566, VkglTestCase_022566_1, VkglTestCase_022566_2);

#define VkglTestCase_022567_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022567_2 "c_signed_r11.mirror_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022567, VkglTestCase_022567_1, VkglTestCase_022567_2);

#define VkglTestCase_022568_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022568_2 "ac_signed_r11.mirror_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022568, VkglTestCase_022568_1, VkglTestCase_022568_2);

#define VkglTestCase_022569_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022569_2 "c_signed_r11.mirror_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022569, VkglTestCase_022569_1, VkglTestCase_022569_2);

#define VkglTestCase_022570_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022570_2 "c_signed_r11.mirror_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022570, VkglTestCase_022570_1, VkglTestCase_022570_2);

#define VkglTestCase_022571_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022571_2 "c_signed_r11.mirror_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022571, VkglTestCase_022571_1, VkglTestCase_022571_2);

#define VkglTestCase_022572_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022572_2 "c_signed_r11.mirror_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022572, VkglTestCase_022572_1, VkglTestCase_022572_2);

#define VkglTestCase_022573_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022573_2 "c_signed_r11.clamp_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022573, VkglTestCase_022573_1, VkglTestCase_022573_2);

#define VkglTestCase_022574_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022574_2 "ac_signed_r11.clamp_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022574, VkglTestCase_022574_1, VkglTestCase_022574_2);

#define VkglTestCase_022575_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022575_2 "c_signed_r11.clamp_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022575, VkglTestCase_022575_1, VkglTestCase_022575_2);

#define VkglTestCase_022576_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022576_2 "c_signed_r11.clamp_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022576, VkglTestCase_022576_1, VkglTestCase_022576_2);

#define VkglTestCase_022577_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022577_2 "c_signed_r11.clamp_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022577, VkglTestCase_022577_1, VkglTestCase_022577_2);

#define VkglTestCase_022578_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022578_2 "c_signed_r11.clamp_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022578, VkglTestCase_022578_1, VkglTestCase_022578_2);

#define VkglTestCase_022579_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022579_2 "c_signed_r11.repeat_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022579, VkglTestCase_022579_1, VkglTestCase_022579_2);

#define VkglTestCase_022580_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022580_2 "c_signed_r11.repeat_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022580, VkglTestCase_022580_1, VkglTestCase_022580_2);

#define VkglTestCase_022581_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022581_2 "_signed_r11.repeat_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022581, VkglTestCase_022581_1, VkglTestCase_022581_2);

#define VkglTestCase_022582_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022582_2 "c_signed_r11.repeat_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022582, VkglTestCase_022582_1, VkglTestCase_022582_2);

#define VkglTestCase_022583_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022583_2 "_signed_r11.repeat_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022583, VkglTestCase_022583_1, VkglTestCase_022583_2);

#define VkglTestCase_022584_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022584_2 "c_signed_r11.repeat_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022584, VkglTestCase_022584_1, VkglTestCase_022584_2);

#define VkglTestCase_022585_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022585_2 "c_signed_r11.mirror_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022585, VkglTestCase_022585_1, VkglTestCase_022585_2);

#define VkglTestCase_022586_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022586_2 "c_signed_r11.mirror_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022586, VkglTestCase_022586_1, VkglTestCase_022586_2);

#define VkglTestCase_022587_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022587_2 "_signed_r11.mirror_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022587, VkglTestCase_022587_1, VkglTestCase_022587_2);

#define VkglTestCase_022588_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022588_2 "c_signed_r11.mirror_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022588, VkglTestCase_022588_1, VkglTestCase_022588_2);

#define VkglTestCase_022589_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022589_2 "_signed_r11.mirror_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022589, VkglTestCase_022589_1, VkglTestCase_022589_2);

#define VkglTestCase_022590_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022590_2 "c_signed_r11.mirror_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022590, VkglTestCase_022590_1, VkglTestCase_022590_2);
