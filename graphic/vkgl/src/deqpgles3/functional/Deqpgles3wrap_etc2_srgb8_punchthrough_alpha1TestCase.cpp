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

#define VkglTestCase_022771_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb"
#define VkglTestCase_022771_2 "8_punchthrough_alpha1.clamp_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022771, VkglTestCase_022771_1, VkglTestCase_022771_2);

#define VkglTestCase_022772_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb"
#define VkglTestCase_022772_2 "8_punchthrough_alpha1.clamp_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022772, VkglTestCase_022772_1, VkglTestCase_022772_2);

#define VkglTestCase_022773_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022773_2 "_punchthrough_alpha1.clamp_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022773, VkglTestCase_022773_1, VkglTestCase_022773_2);

#define VkglTestCase_022774_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb"
#define VkglTestCase_022774_2 "8_punchthrough_alpha1.clamp_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022774, VkglTestCase_022774_1, VkglTestCase_022774_2);

#define VkglTestCase_022775_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022775_2 "_punchthrough_alpha1.clamp_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022775, VkglTestCase_022775_1, VkglTestCase_022775_2);

#define VkglTestCase_022776_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb"
#define VkglTestCase_022776_2 "8_punchthrough_alpha1.clamp_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022776, VkglTestCase_022776_1, VkglTestCase_022776_2);

#define VkglTestCase_022777_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022777_2 "_punchthrough_alpha1.repeat_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022777, VkglTestCase_022777_1, VkglTestCase_022777_2);

#define VkglTestCase_022778_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb"
#define VkglTestCase_022778_2 "8_punchthrough_alpha1.repeat_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022778, VkglTestCase_022778_1, VkglTestCase_022778_2);

#define VkglTestCase_022779_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022779_2 "_punchthrough_alpha1.repeat_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022779, VkglTestCase_022779_1, VkglTestCase_022779_2);

#define VkglTestCase_022780_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022780_2 "_punchthrough_alpha1.repeat_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022780, VkglTestCase_022780_1, VkglTestCase_022780_2);

#define VkglTestCase_022781_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022781_2 "_punchthrough_alpha1.repeat_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022781, VkglTestCase_022781_1, VkglTestCase_022781_2);

#define VkglTestCase_022782_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022782_2 "_punchthrough_alpha1.repeat_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022782, VkglTestCase_022782_1, VkglTestCase_022782_2);

#define VkglTestCase_022783_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022783_2 "_punchthrough_alpha1.mirror_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022783, VkglTestCase_022783_1, VkglTestCase_022783_2);

#define VkglTestCase_022784_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb"
#define VkglTestCase_022784_2 "8_punchthrough_alpha1.mirror_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022784, VkglTestCase_022784_1, VkglTestCase_022784_2);

#define VkglTestCase_022785_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022785_2 "_punchthrough_alpha1.mirror_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022785, VkglTestCase_022785_1, VkglTestCase_022785_2);

#define VkglTestCase_022786_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022786_2 "_punchthrough_alpha1.mirror_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022786, VkglTestCase_022786_1, VkglTestCase_022786_2);

#define VkglTestCase_022787_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022787_2 "_punchthrough_alpha1.mirror_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022787, VkglTestCase_022787_1, VkglTestCase_022787_2);

#define VkglTestCase_022788_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022788_2 "_punchthrough_alpha1.mirror_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022788, VkglTestCase_022788_1, VkglTestCase_022788_2);

#define VkglTestCase_022789_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022789_2 "_punchthrough_alpha1.clamp_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022789, VkglTestCase_022789_1, VkglTestCase_022789_2);

#define VkglTestCase_022790_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb"
#define VkglTestCase_022790_2 "8_punchthrough_alpha1.clamp_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022790, VkglTestCase_022790_1, VkglTestCase_022790_2);

#define VkglTestCase_022791_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022791_2 "_punchthrough_alpha1.clamp_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022791, VkglTestCase_022791_1, VkglTestCase_022791_2);

#define VkglTestCase_022792_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022792_2 "_punchthrough_alpha1.clamp_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022792, VkglTestCase_022792_1, VkglTestCase_022792_2);

#define VkglTestCase_022793_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022793_2 "_punchthrough_alpha1.clamp_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022793, VkglTestCase_022793_1, VkglTestCase_022793_2);

#define VkglTestCase_022794_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022794_2 "_punchthrough_alpha1.clamp_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022794, VkglTestCase_022794_1, VkglTestCase_022794_2);

#define VkglTestCase_022795_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022795_2 "_punchthrough_alpha1.repeat_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022795, VkglTestCase_022795_1, VkglTestCase_022795_2);

#define VkglTestCase_022796_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022796_2 "_punchthrough_alpha1.repeat_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022796, VkglTestCase_022796_1, VkglTestCase_022796_2);

#define VkglTestCase_022797_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8_"
#define VkglTestCase_022797_2 "punchthrough_alpha1.repeat_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022797, VkglTestCase_022797_1, VkglTestCase_022797_2);

#define VkglTestCase_022798_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022798_2 "_punchthrough_alpha1.repeat_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022798, VkglTestCase_022798_1, VkglTestCase_022798_2);

#define VkglTestCase_022799_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8_"
#define VkglTestCase_022799_2 "punchthrough_alpha1.repeat_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022799, VkglTestCase_022799_1, VkglTestCase_022799_2);

#define VkglTestCase_022800_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022800_2 "_punchthrough_alpha1.repeat_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022800, VkglTestCase_022800_1, VkglTestCase_022800_2);

#define VkglTestCase_022801_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022801_2 "_punchthrough_alpha1.mirror_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022801, VkglTestCase_022801_1, VkglTestCase_022801_2);

#define VkglTestCase_022802_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022802_2 "_punchthrough_alpha1.mirror_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022802, VkglTestCase_022802_1, VkglTestCase_022802_2);

#define VkglTestCase_022803_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8_"
#define VkglTestCase_022803_2 "punchthrough_alpha1.mirror_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022803, VkglTestCase_022803_1, VkglTestCase_022803_2);

#define VkglTestCase_022804_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022804_2 "_punchthrough_alpha1.mirror_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022804, VkglTestCase_022804_1, VkglTestCase_022804_2);

#define VkglTestCase_022805_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8_"
#define VkglTestCase_022805_2 "punchthrough_alpha1.mirror_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022805, VkglTestCase_022805_1, VkglTestCase_022805_2);

#define VkglTestCase_022806_1 "dEQP-GLES3.functional.texture.wrap.etc2_srgb8"
#define VkglTestCase_022806_2 "_punchthrough_alpha1.mirror_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022806, VkglTestCase_022806_1, VkglTestCase_022806_2);
