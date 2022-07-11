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

#define VkglTestCase_014785_1 "dEQP-GLES31.functional.texture.border_clamp.dept"
#define VkglTestCase_014785_2 "h_compare_mode.depth_component16.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014785, VkglTestCase_014785_1, VkglTestCase_014785_2);

#define VkglTestCase_014786_1 "dEQP-GLES31.functional.texture.border_clamp.depth"
#define VkglTestCase_014786_2 "_compare_mode.depth_component16.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014786, VkglTestCase_014786_1, VkglTestCase_014786_2);

#define VkglTestCase_014787_1 "dEQP-GLES31.functional.texture.border_clamp.dept"
#define VkglTestCase_014787_2 "h_compare_mode.depth_component16.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014787, VkglTestCase_014787_1, VkglTestCase_014787_2);

#define VkglTestCase_014788_1 "dEQP-GLES31.functional.texture.border_clamp.dept"
#define VkglTestCase_014788_2 "h_compare_mode.depth_component16.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014788, VkglTestCase_014788_1, VkglTestCase_014788_2);

#define VkglTestCase_014789_1 "dEQP-GLES31.functional.texture.border_clamp.dept"
#define VkglTestCase_014789_2 "h_compare_mode.depth_component16.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014789, VkglTestCase_014789_1, VkglTestCase_014789_2);

#define VkglTestCase_014790_1 "dEQP-GLES31.functional.texture.border_clamp.dept"
#define VkglTestCase_014790_2 "h_compare_mode.depth_component16.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014790, VkglTestCase_014790_1, VkglTestCase_014790_2);
