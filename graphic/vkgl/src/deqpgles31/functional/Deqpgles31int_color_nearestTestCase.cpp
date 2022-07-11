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

#define VkglTestCase_014651_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.t"
#define VkglTestCase_014651_2 "exture_2d.int_color.nearest.s_clamp_to_edge_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014651, VkglTestCase_014651_1, VkglTestCase_014651_2);

#define VkglTestCase_014652_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014652_2 "xture_2d.int_color.nearest.s_clamp_to_edge_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014652, VkglTestCase_014652_1, VkglTestCase_014652_2);

#define VkglTestCase_014653_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mod"
#define VkglTestCase_014653_2 "e.texture_2d.int_color.nearest.s_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014653, VkglTestCase_014653_1, VkglTestCase_014653_2);

#define VkglTestCase_014654_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mod"
#define VkglTestCase_014654_2 "e.texture_2d.int_color.nearest.s_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014654, VkglTestCase_014654_1, VkglTestCase_014654_2);

#define VkglTestCase_014655_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014655_2 "xture_2d.int_color.nearest.s_mirrored_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014655, VkglTestCase_014655_1, VkglTestCase_014655_2);

#define VkglTestCase_014656_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014656_2 "ture_2d.int_color.nearest.s_mirrored_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014656, VkglTestCase_014656_1, VkglTestCase_014656_2);

#define VkglTestCase_014769_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d."
#define VkglTestCase_014769_2 "int_color.nearest.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014769, VkglTestCase_014769_1, VkglTestCase_014769_2);

#define VkglTestCase_014770_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d.i"
#define VkglTestCase_014770_2 "nt_color.nearest.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014770, VkglTestCase_014770_1, VkglTestCase_014770_2);

#define VkglTestCase_014771_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014771_2 "_3d.int_color.nearest.s_clamp_to_border_t_clamp_to_border_r_repeat_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014771, VkglTestCase_014771_1, VkglTestCase_014771_2);

#define VkglTestCase_014772_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014772_2 "_3d.int_color.nearest.s_clamp_to_border_t_clamp_to_border_r_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014772, VkglTestCase_014772_1, VkglTestCase_014772_2);

#define VkglTestCase_014773_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014773_2 "_3d.int_color.nearest.s_mirrored_repeat_t_clamp_to_border_r_repeat_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014773, VkglTestCase_014773_1, VkglTestCase_014773_2);

#define VkglTestCase_014774_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014774_2 "_3d.int_color.nearest.s_mirrored_repeat_t_clamp_to_border_r_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014774, VkglTestCase_014774_1, VkglTestCase_014774_2);

#define VkglTestCase_014775_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014775_2 "_3d.int_color.nearest.s_repeat_t_mirrored_repeat_r_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014775, VkglTestCase_014775_1, VkglTestCase_014775_2);

#define VkglTestCase_014776_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014776_2 "_3d.int_color.nearest.s_repeat_t_mirrored_repeat_r_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014776, VkglTestCase_014776_1, VkglTestCase_014776_2);
