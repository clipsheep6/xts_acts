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

#define VkglTestCase_014609_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014609_2 "xture_2d.unorm_color.linear.s_clamp_to_edge_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014609, VkglTestCase_014609_1, VkglTestCase_014609_2);

#define VkglTestCase_014610_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014610_2 "xture_2d.unorm_color.linear.s_clamp_to_edge_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014610, VkglTestCase_014610_1, VkglTestCase_014610_2);

#define VkglTestCase_014611_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mod"
#define VkglTestCase_014611_2 "e.texture_2d.unorm_color.linear.s_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014611, VkglTestCase_014611_1, VkglTestCase_014611_2);

#define VkglTestCase_014612_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode"
#define VkglTestCase_014612_2 ".texture_2d.unorm_color.linear.s_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014612, VkglTestCase_014612_1, VkglTestCase_014612_2);

#define VkglTestCase_014613_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014613_2 "ture_2d.unorm_color.linear.s_mirrored_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014613, VkglTestCase_014613_1, VkglTestCase_014613_2);

#define VkglTestCase_014614_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014614_2 "ture_2d.unorm_color.linear.s_mirrored_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014614, VkglTestCase_014614_1, VkglTestCase_014614_2);

#define VkglTestCase_014737_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d.u"
#define VkglTestCase_014737_2 "norm_color.linear.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014737, VkglTestCase_014737_1, VkglTestCase_014737_2);

#define VkglTestCase_014738_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d.u"
#define VkglTestCase_014738_2 "norm_color.linear.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014738, VkglTestCase_014738_1, VkglTestCase_014738_2);

#define VkglTestCase_014739_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014739_2 "_3d.unorm_color.linear.s_clamp_to_border_t_clamp_to_border_r_repeat_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014739, VkglTestCase_014739_1, VkglTestCase_014739_2);

#define VkglTestCase_014740_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014740_2 "3d.unorm_color.linear.s_clamp_to_border_t_clamp_to_border_r_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014740, VkglTestCase_014740_1, VkglTestCase_014740_2);

#define VkglTestCase_014741_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014741_2 "_3d.unorm_color.linear.s_mirrored_repeat_t_clamp_to_border_r_repeat_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014741, VkglTestCase_014741_1, VkglTestCase_014741_2);

#define VkglTestCase_014742_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014742_2 "3d.unorm_color.linear.s_mirrored_repeat_t_clamp_to_border_r_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014742, VkglTestCase_014742_1, VkglTestCase_014742_2);

#define VkglTestCase_014743_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
#define VkglTestCase_014743_2 "_3d.unorm_color.linear.s_repeat_t_mirrored_repeat_r_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014743, VkglTestCase_014743_1, VkglTestCase_014743_2);

#define VkglTestCase_014744_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_"
#define VkglTestCase_014744_2 "3d.unorm_color.linear.s_repeat_t_mirrored_repeat_r_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014744, VkglTestCase_014744_1, VkglTestCase_014744_2);
