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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014663_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014663_2 "xture_2d.uint_color.nearest.s_clamp_to_edge_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014663, VkglTestCase_014663_1, VkglTestCase_014663_2);

#define VkglTestCase_014664_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014664_2 "xture_2d.uint_color.nearest.s_clamp_to_edge_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014664, VkglTestCase_014664_1, VkglTestCase_014664_2);

#define VkglTestCase_014665_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mod"
#define VkglTestCase_014665_2 "e.texture_2d.uint_color.nearest.s_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014665, VkglTestCase_014665_1, VkglTestCase_014665_2);

#define VkglTestCase_014666_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode"
#define VkglTestCase_014666_2 ".texture_2d.uint_color.nearest.s_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014666, VkglTestCase_014666_1, VkglTestCase_014666_2);

#define VkglTestCase_014667_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014667_2 "ture_2d.uint_color.nearest.s_mirrored_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014667, VkglTestCase_014667_1, VkglTestCase_014667_2);

#define VkglTestCase_014668_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014668_2 "ture_2d.uint_color.nearest.s_mirrored_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014668, VkglTestCase_014668_1, VkglTestCase_014668_2);

#define VkglTestCase_014777_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d.u"
#define VkglTestCase_014777_2 "int_color.nearest.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014777, VkglTestCase_014777_1, VkglTestCase_014777_2);

#define VkglTestCase_014778_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d.u"
#define VkglTestCase_014778_2 "int_color.nearest.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014778, VkglTestCase_014778_1, VkglTestCase_014778_2);

#define VkglTestCase_014779_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014779_2 "_3d.uint_color.nearest.s_clamp_to_border_t_clamp_to_border_r_repeat_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014779, VkglTestCase_014779_1, VkglTestCase_014779_2);

#define VkglTestCase_014780_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014780_2 "3d.uint_color.nearest.s_clamp_to_border_t_clamp_to_border_r_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014780, VkglTestCase_014780_1, VkglTestCase_014780_2);

#define VkglTestCase_014781_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014781_2 "_3d.uint_color.nearest.s_mirrored_repeat_t_clamp_to_border_r_repeat_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014781, VkglTestCase_014781_1, VkglTestCase_014781_2);

#define VkglTestCase_014782_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014782_2 "3d.uint_color.nearest.s_mirrored_repeat_t_clamp_to_border_r_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014782, VkglTestCase_014782_1, VkglTestCase_014782_2);

#define VkglTestCase_014783_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014783_2 "_3d.uint_color.nearest.s_repeat_t_mirrored_repeat_r_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014783, VkglTestCase_014783_1, VkglTestCase_014783_2);

#define VkglTestCase_014784_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014784_2 "3d.uint_color.nearest.s_repeat_t_mirrored_repeat_r_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014784, VkglTestCase_014784_1, VkglTestCase_014784_2);
