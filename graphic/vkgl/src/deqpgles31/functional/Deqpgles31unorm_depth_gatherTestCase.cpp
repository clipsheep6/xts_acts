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

#define VkglTestCase_014681_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014681_2 "xture_2d.unorm_depth.gather.s_clamp_to_edge_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014681, VkglTestCase_014681_1, VkglTestCase_014681_2);

#define VkglTestCase_014682_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014682_2 "xture_2d.unorm_depth.gather.s_clamp_to_edge_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014682, VkglTestCase_014682_1, VkglTestCase_014682_2);

#define VkglTestCase_014683_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mod"
#define VkglTestCase_014683_2 "e.texture_2d.unorm_depth.gather.s_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014683, VkglTestCase_014683_1, VkglTestCase_014683_2);

#define VkglTestCase_014684_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode"
#define VkglTestCase_014684_2 ".texture_2d.unorm_depth.gather.s_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014684, VkglTestCase_014684_1, VkglTestCase_014684_2);

#define VkglTestCase_014685_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014685_2 "ture_2d.unorm_depth.gather.s_mirrored_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014685, VkglTestCase_014685_1, VkglTestCase_014685_2);

#define VkglTestCase_014686_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014686_2 "ture_2d.unorm_depth.gather.s_mirrored_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014686, VkglTestCase_014686_1, VkglTestCase_014686_2);
