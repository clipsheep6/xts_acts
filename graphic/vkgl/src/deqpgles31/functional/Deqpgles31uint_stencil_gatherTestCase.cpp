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

#define VkglTestCase_014705_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014705_2 "xture_2d.uint_stencil.gather.s_clamp_to_edge_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014705, VkglTestCase_014705_1, VkglTestCase_014705_2);

#define VkglTestCase_014706_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014706_2 "ture_2d.uint_stencil.gather.s_clamp_to_edge_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014706, VkglTestCase_014706_1, VkglTestCase_014706_2);

#define VkglTestCase_014707_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode"
#define VkglTestCase_014707_2 ".texture_2d.uint_stencil.gather.s_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014707, VkglTestCase_014707_1, VkglTestCase_014707_2);

#define VkglTestCase_014708_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode"
#define VkglTestCase_014708_2 ".texture_2d.uint_stencil.gather.s_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014708, VkglTestCase_014708_1, VkglTestCase_014708_2);

#define VkglTestCase_014709_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014709_2 "ture_2d.uint_stencil.gather.s_mirrored_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014709, VkglTestCase_014709_1, VkglTestCase_014709_2);

#define VkglTestCase_014710_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.text"
#define VkglTestCase_014710_2 "ure_2d.uint_stencil.gather.s_mirrored_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014710, VkglTestCase_014710_1, VkglTestCase_014710_2);
