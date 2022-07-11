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

#define VkglTestCase_014657_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.t"
#define VkglTestCase_014657_2 "exture_2d.int_color.gather.s_clamp_to_edge_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014657, VkglTestCase_014657_1, VkglTestCase_014657_2);

#define VkglTestCase_014658_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.t"
#define VkglTestCase_014658_2 "exture_2d.int_color.gather.s_clamp_to_edge_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014658, VkglTestCase_014658_1, VkglTestCase_014658_2);

#define VkglTestCase_014659_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mo"
#define VkglTestCase_014659_2 "de.texture_2d.int_color.gather.s_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014659, VkglTestCase_014659_1, VkglTestCase_014659_2);

#define VkglTestCase_014660_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mod"
#define VkglTestCase_014660_2 "e.texture_2d.int_color.gather.s_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014660, VkglTestCase_014660_1, VkglTestCase_014660_2);

#define VkglTestCase_014661_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014661_2 "xture_2d.int_color.gather.s_mirrored_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014661, VkglTestCase_014661_1, VkglTestCase_014661_2);

#define VkglTestCase_014662_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014662_2 "xture_2d.int_color.gather.s_mirrored_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014662, VkglTestCase_014662_1, VkglTestCase_014662_2);
