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

#define VkglTestCase_014791_1 "dEQP-GLES31.functional.texture.border_clamp.dept"
#define VkglTestCase_014791_2 "h_compare_mode.depth_component24.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014791, VkglTestCase_014791_1, VkglTestCase_014791_2);

#define VkglTestCase_014792_1 "dEQP-GLES31.functional.texture.border_clamp.depth"
#define VkglTestCase_014792_2 "_compare_mode.depth_component24.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014792, VkglTestCase_014792_1, VkglTestCase_014792_2);

#define VkglTestCase_014793_1 "dEQP-GLES31.functional.texture.border_clamp.dept"
#define VkglTestCase_014793_2 "h_compare_mode.depth_component24.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014793, VkglTestCase_014793_1, VkglTestCase_014793_2);

#define VkglTestCase_014794_1 "dEQP-GLES31.functional.texture.border_clamp.dept"
#define VkglTestCase_014794_2 "h_compare_mode.depth_component24.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014794, VkglTestCase_014794_1, VkglTestCase_014794_2);

#define VkglTestCase_014795_1 "dEQP-GLES31.functional.texture.border_clamp.dept"
#define VkglTestCase_014795_2 "h_compare_mode.depth_component24.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014795, VkglTestCase_014795_1, VkglTestCase_014795_2);

#define VkglTestCase_014796_1 "dEQP-GLES31.functional.texture.border_clamp.dept"
#define VkglTestCase_014796_2 "h_compare_mode.depth_component24.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014796, VkglTestCase_014796_1, VkglTestCase_014796_2);
