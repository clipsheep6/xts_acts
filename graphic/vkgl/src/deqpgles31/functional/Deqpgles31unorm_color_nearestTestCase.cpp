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

#define VkglTestCase_014603_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014603_2 "xture_2d.unorm_color.nearest.s_clamp_to_edge_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014603, VkglTestCase_014603_1, VkglTestCase_014603_2);

#define VkglTestCase_014604_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014604_2 "ture_2d.unorm_color.nearest.s_clamp_to_edge_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014604, VkglTestCase_014604_1, VkglTestCase_014604_2);

#define VkglTestCase_014605_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode"
#define VkglTestCase_014605_2 ".texture_2d.unorm_color.nearest.s_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014605, VkglTestCase_014605_1, VkglTestCase_014605_2);

#define VkglTestCase_014606_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode"
#define VkglTestCase_014606_2 ".texture_2d.unorm_color.nearest.s_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014606, VkglTestCase_014606_1, VkglTestCase_014606_2);

#define VkglTestCase_014607_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014607_2 "ture_2d.unorm_color.nearest.s_mirrored_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014607, VkglTestCase_014607_1, VkglTestCase_014607_2);

#define VkglTestCase_014608_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.text"
#define VkglTestCase_014608_2 "ure_2d.unorm_color.nearest.s_mirrored_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014608, VkglTestCase_014608_1, VkglTestCase_014608_2);

#define VkglTestCase_014729_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d.u"
#define VkglTestCase_014729_2 "norm_color.nearest.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014729, VkglTestCase_014729_1, VkglTestCase_014729_2);

#define VkglTestCase_014730_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d.un"
#define VkglTestCase_014730_2 "orm_color.nearest.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014730, VkglTestCase_014730_1, VkglTestCase_014730_2);

#define VkglTestCase_014731_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014731_2 "3d.unorm_color.nearest.s_clamp_to_border_t_clamp_to_border_r_repeat_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014731, VkglTestCase_014731_1, VkglTestCase_014731_2);

#define VkglTestCase_014732_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014732_2 "3d.unorm_color.nearest.s_clamp_to_border_t_clamp_to_border_r_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014732, VkglTestCase_014732_1, VkglTestCase_014732_2);

#define VkglTestCase_014733_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014733_2 "3d.unorm_color.nearest.s_mirrored_repeat_t_clamp_to_border_r_repeat_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014733, VkglTestCase_014733_1, VkglTestCase_014733_2);

#define VkglTestCase_014734_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014734_2 "3d.unorm_color.nearest.s_mirrored_repeat_t_clamp_to_border_r_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014734, VkglTestCase_014734_1, VkglTestCase_014734_2);

#define VkglTestCase_014735_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014735_2 "3d.unorm_color.nearest.s_repeat_t_mirrored_repeat_r_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014735, VkglTestCase_014735_1, VkglTestCase_014735_2);

#define VkglTestCase_014736_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014736_2 "3d.unorm_color.nearest.s_repeat_t_mirrored_repeat_r_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014736, VkglTestCase_014736_1, VkglTestCase_014736_2);
