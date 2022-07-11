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

#define VkglTestCase_014723_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.text"
#define VkglTestCase_014723_2 "ure_2d.compressed_color.gather.s_clamp_to_edge_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014723, VkglTestCase_014723_1, VkglTestCase_014723_2);

#define VkglTestCase_014724_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.textu"
#define VkglTestCase_014724_2 "re_2d.compressed_color.gather.s_clamp_to_edge_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014724, VkglTestCase_014724_1, VkglTestCase_014724_2);

#define VkglTestCase_014725_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.t"
#define VkglTestCase_014725_2 "exture_2d.compressed_color.gather.s_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014725, VkglTestCase_014725_1, VkglTestCase_014725_2);

#define VkglTestCase_014726_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.t"
#define VkglTestCase_014726_2 "exture_2d.compressed_color.gather.s_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014726, VkglTestCase_014726_1, VkglTestCase_014726_2);

#define VkglTestCase_014727_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.textu"
#define VkglTestCase_014727_2 "re_2d.compressed_color.gather.s_mirrored_repeat_t_clamp_to_border_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014727, VkglTestCase_014727_1, VkglTestCase_014727_2);

#define VkglTestCase_014728_1 "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.textur"
#define VkglTestCase_014728_2 "e_2d.compressed_color.gather.s_mirrored_repeat_t_clamp_to_border_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014728, VkglTestCase_014728_1, VkglTestCase_014728_2);
