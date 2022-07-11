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

#define VkglTestCase_014621_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014621_2 "xture_2d.snorm_color.nearest.s_clamp_to_edge_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014621, VkglTestCase_014621_1, VkglTestCase_014621_2);

#define VkglTestCase_014622_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014622_2 "ture_2d.snorm_color.nearest.s_clamp_to_edge_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014622, VkglTestCase_014622_1, VkglTestCase_014622_2);

#define VkglTestCase_014623_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode"
#define VkglTestCase_014623_2 ".texture_2d.snorm_color.nearest.s_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014623, VkglTestCase_014623_1, VkglTestCase_014623_2);

#define VkglTestCase_014624_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode"
#define VkglTestCase_014624_2 ".texture_2d.snorm_color.nearest.s_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014624, VkglTestCase_014624_1, VkglTestCase_014624_2);

#define VkglTestCase_014625_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014625_2 "ture_2d.snorm_color.nearest.s_mirrored_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014625, VkglTestCase_014625_1, VkglTestCase_014625_2);

#define VkglTestCase_014626_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.text"
#define VkglTestCase_014626_2 "ure_2d.snorm_color.nearest.s_mirrored_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014626, VkglTestCase_014626_1, VkglTestCase_014626_2);

#define VkglTestCase_014745_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d.s"
#define VkglTestCase_014745_2 "norm_color.nearest.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014745, VkglTestCase_014745_1, VkglTestCase_014745_2);

#define VkglTestCase_014746_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d.sn"
#define VkglTestCase_014746_2 "orm_color.nearest.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014746, VkglTestCase_014746_1, VkglTestCase_014746_2);

#define VkglTestCase_014747_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014747_2 "3d.snorm_color.nearest.s_clamp_to_border_t_clamp_to_border_r_repeat_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014747, VkglTestCase_014747_1, VkglTestCase_014747_2);

#define VkglTestCase_014748_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014748_2 "3d.snorm_color.nearest.s_clamp_to_border_t_clamp_to_border_r_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014748, VkglTestCase_014748_1, VkglTestCase_014748_2);

#define VkglTestCase_014749_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014749_2 "3d.snorm_color.nearest.s_mirrored_repeat_t_clamp_to_border_r_repeat_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014749, VkglTestCase_014749_1, VkglTestCase_014749_2);

#define VkglTestCase_014750_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014750_2 "3d.snorm_color.nearest.s_mirrored_repeat_t_clamp_to_border_r_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014750, VkglTestCase_014750_1, VkglTestCase_014750_2);

#define VkglTestCase_014751_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014751_2 "3d.snorm_color.nearest.s_repeat_t_mirrored_repeat_r_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014751, VkglTestCase_014751_1, VkglTestCase_014751_2);

#define VkglTestCase_014752_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014752_2 "3d.snorm_color.nearest.s_repeat_t_mirrored_repeat_r_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014752, VkglTestCase_014752_1, VkglTestCase_014752_2);
