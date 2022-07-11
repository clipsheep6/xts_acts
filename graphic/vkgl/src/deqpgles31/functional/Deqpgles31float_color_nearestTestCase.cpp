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

#define VkglTestCase_014639_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014639_2 "xture_2d.float_color.nearest.s_clamp_to_edge_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014639, VkglTestCase_014639_1, VkglTestCase_014639_2);

#define VkglTestCase_014640_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014640_2 "ture_2d.float_color.nearest.s_clamp_to_edge_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014640, VkglTestCase_014640_1, VkglTestCase_014640_2);

#define VkglTestCase_014641_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode"
#define VkglTestCase_014641_2 ".texture_2d.float_color.nearest.s_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014641, VkglTestCase_014641_1, VkglTestCase_014641_2);

#define VkglTestCase_014642_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode"
#define VkglTestCase_014642_2 ".texture_2d.float_color.nearest.s_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014642, VkglTestCase_014642_1, VkglTestCase_014642_2);

#define VkglTestCase_014643_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014643_2 "ture_2d.float_color.nearest.s_mirrored_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014643, VkglTestCase_014643_1, VkglTestCase_014643_2);

#define VkglTestCase_014644_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.text"
#define VkglTestCase_014644_2 "ure_2d.float_color.nearest.s_mirrored_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014644, VkglTestCase_014644_1, VkglTestCase_014644_2);

#define VkglTestCase_014761_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d.f"
#define VkglTestCase_014761_2 "loat_color.nearest.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014761, VkglTestCase_014761_1, VkglTestCase_014761_2);

#define VkglTestCase_014762_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d.fl"
#define VkglTestCase_014762_2 "oat_color.nearest.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014762, VkglTestCase_014762_1, VkglTestCase_014762_2);

#define VkglTestCase_014763_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014763_2 "3d.float_color.nearest.s_clamp_to_border_t_clamp_to_border_r_repeat_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014763, VkglTestCase_014763_1, VkglTestCase_014763_2);

#define VkglTestCase_014764_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014764_2 "3d.float_color.nearest.s_clamp_to_border_t_clamp_to_border_r_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014764, VkglTestCase_014764_1, VkglTestCase_014764_2);

#define VkglTestCase_014765_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014765_2 "3d.float_color.nearest.s_mirrored_repeat_t_clamp_to_border_r_repeat_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014765, VkglTestCase_014765_1, VkglTestCase_014765_2);

#define VkglTestCase_014766_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014766_2 "3d.float_color.nearest.s_mirrored_repeat_t_clamp_to_border_r_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014766, VkglTestCase_014766_1, VkglTestCase_014766_2);

#define VkglTestCase_014767_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014767_2 "3d.float_color.nearest.s_repeat_t_mirrored_repeat_r_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014767, VkglTestCase_014767_1, VkglTestCase_014767_2);

#define VkglTestCase_014768_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014768_2 "3d.float_color.nearest.s_repeat_t_mirrored_repeat_r_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014768, VkglTestCase_014768_1, VkglTestCase_014768_2);
