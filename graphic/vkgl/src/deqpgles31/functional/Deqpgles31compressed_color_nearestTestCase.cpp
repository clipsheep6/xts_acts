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

#define VkglTestCase_014711_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.textu"
#define VkglTestCase_014711_2 "re_2d.compressed_color.nearest.s_clamp_to_edge_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014711, VkglTestCase_014711_1, VkglTestCase_014711_2);

#define VkglTestCase_014712_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.textu"
#define VkglTestCase_014712_2 "re_2d.compressed_color.nearest.s_clamp_to_edge_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014712, VkglTestCase_014712_1, VkglTestCase_014712_2);

#define VkglTestCase_014713_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.t"
#define VkglTestCase_014713_2 "exture_2d.compressed_color.nearest.s_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014713, VkglTestCase_014713_1, VkglTestCase_014713_2);

#define VkglTestCase_014714_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
#define VkglTestCase_014714_2 "xture_2d.compressed_color.nearest.s_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014714, VkglTestCase_014714_1, VkglTestCase_014714_2);

#define VkglTestCase_014715_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.textur"
#define VkglTestCase_014715_2 "e_2d.compressed_color.nearest.s_mirrored_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014715, VkglTestCase_014715_1, VkglTestCase_014715_2);

#define VkglTestCase_014716_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.textur"
#define VkglTestCase_014716_2 "e_2d.compressed_color.nearest.s_mirrored_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014716, VkglTestCase_014716_1, VkglTestCase_014716_2);
