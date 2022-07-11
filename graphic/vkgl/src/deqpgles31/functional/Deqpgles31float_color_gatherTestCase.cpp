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

#define VkglTestCase_014645_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014645_2 "xture_2d.float_color.gather.s_clamp_to_edge_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014645, VkglTestCase_014645_1, VkglTestCase_014645_2);

#define VkglTestCase_014646_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014646_2 "xture_2d.float_color.gather.s_clamp_to_edge_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014646, VkglTestCase_014646_1, VkglTestCase_014646_2);

#define VkglTestCase_014647_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mod"
#define VkglTestCase_014647_2 "e.texture_2d.float_color.gather.s_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014647, VkglTestCase_014647_1, VkglTestCase_014647_2);

#define VkglTestCase_014648_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode"
#define VkglTestCase_014648_2 ".texture_2d.float_color.gather.s_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014648, VkglTestCase_014648_1, VkglTestCase_014648_2);

#define VkglTestCase_014649_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014649_2 "ture_2d.float_color.gather.s_mirrored_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014649, VkglTestCase_014649_1, VkglTestCase_014649_2);

#define VkglTestCase_014650_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
#define VkglTestCase_014650_2 "ture_2d.float_color.gather.s_mirrored_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014650, VkglTestCase_014650_1, VkglTestCase_014650_2);
