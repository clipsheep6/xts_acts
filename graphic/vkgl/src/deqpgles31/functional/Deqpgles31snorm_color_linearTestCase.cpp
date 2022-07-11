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

#define VkglTestCase_014627_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014627_2 "xture_2d.snorm_color.linear.s_clamp_to_edge_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014627, VkglTestCase_014627_1, VkglTestCase_014627_2);

#define VkglTestCase_014628_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014628_2 "xture_2d.snorm_color.linear.s_clamp_to_edge_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014628, VkglTestCase_014628_1, VkglTestCase_014628_2);

#define VkglTestCase_014629_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mod"
#define VkglTestCase_014629_2 "e.texture_2d.snorm_color.linear.s_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014629, VkglTestCase_014629_1, VkglTestCase_014629_2);

#define VkglTestCase_014630_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode"
#define VkglTestCase_014630_2 ".texture_2d.snorm_color.linear.s_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014630, VkglTestCase_014630_1, VkglTestCase_014630_2);

#define VkglTestCase_014631_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014631_2 "ture_2d.snorm_color.linear.s_mirrored_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014631, VkglTestCase_014631_1, VkglTestCase_014631_2);

#define VkglTestCase_014632_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014632_2 "ture_2d.snorm_color.linear.s_mirrored_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014632, VkglTestCase_014632_1, VkglTestCase_014632_2);

#define VkglTestCase_014753_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d.s"
#define VkglTestCase_014753_2 "norm_color.linear.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014753, VkglTestCase_014753_1, VkglTestCase_014753_2);

#define VkglTestCase_014754_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d.s"
#define VkglTestCase_014754_2 "norm_color.linear.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014754, VkglTestCase_014754_1, VkglTestCase_014754_2);

#define VkglTestCase_014755_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014755_2 "_3d.snorm_color.linear.s_clamp_to_border_t_clamp_to_border_r_repeat_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014755, VkglTestCase_014755_1, VkglTestCase_014755_2);

#define VkglTestCase_014756_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014756_2 "3d.snorm_color.linear.s_clamp_to_border_t_clamp_to_border_r_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014756, VkglTestCase_014756_1, VkglTestCase_014756_2);

#define VkglTestCase_014757_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014757_2 "_3d.snorm_color.linear.s_mirrored_repeat_t_clamp_to_border_r_repeat_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014757, VkglTestCase_014757_1, VkglTestCase_014757_2);

#define VkglTestCase_014758_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014758_2 "3d.snorm_color.linear.s_mirrored_repeat_t_clamp_to_border_r_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014758, VkglTestCase_014758_1, VkglTestCase_014758_2);

#define VkglTestCase_014759_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014759_2 "_3d.snorm_color.linear.s_repeat_t_mirrored_repeat_r_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014759, VkglTestCase_014759_1, VkglTestCase_014759_2);

#define VkglTestCase_014760_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014760_2 "3d.snorm_color.linear.s_repeat_t_mirrored_repeat_r_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014760, VkglTestCase_014760_1, VkglTestCase_014760_2);
